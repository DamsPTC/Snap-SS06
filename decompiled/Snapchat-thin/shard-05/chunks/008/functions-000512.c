/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040b8e4c; end: 1040b8e87;  */

void FUN_1040b8e4c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040b8e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040b8e88; end: 1040b905f;  */

void FUN_1040b8e88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 1040b9060; end: 1040b909f;  */

void FUN_1040b9060(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5938;
  _swift_getWitnessTable(&UNK_10dcd5938,&UNK_1107443b8);
  puRam0000000113060430 = puVar1;
  return;
}



/* Entry: 1040b90a0; end: 1040b90a3;  */

void FUN_1040b90a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5970;
  _swift_getWitnessTable(&UNK_10dcd5970,&UNK_1107443b8);
  puRam0000000113060438 = puVar1;
  return;
}



/* Entry: 1040b90a4; end: 1040b90e3;  */

void FUN_1040b90a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5970;
  _swift_getWitnessTable(&UNK_10dcd5970,&UNK_1107443b8);
  puRam0000000113060438 = puVar1;
  return;
}



/* Entry: 1040b90e4; end: 1040b90e7;  */

void FUN_1040b90e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5a38;
  _swift_getWitnessTable(&UNK_10dcd5a38,&UNK_1107443b8);
  puRam0000000113060440 = puVar1;
  return;
}



/* Entry: 1040b90e8; end: 1040b9127;  */

void FUN_1040b90e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5a38;
  _swift_getWitnessTable(&UNK_10dcd5a38,&UNK_1107443b8);
  puRam0000000113060440 = puVar1;
  return;
}



/* Entry: 1040b9128; end: 1040b912b;  */

void FUN_1040b9128(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5a60;
  _swift_getWitnessTable(&UNK_10dcd5a60,&UNK_1107443b8);
  puRam0000000113060448 = puVar1;
  return;
}



/* Entry: 1040b912c; end: 1040b916b;  */

void FUN_1040b912c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5a60;
  _swift_getWitnessTable(&UNK_10dcd5a60,&UNK_1107443b8);
  puRam0000000113060448 = puVar1;
  return;
}



/* Entry: 1040b916c; end: 1040b9213;  */

void FUN_1040b916c(ulong *param_1,long param_2)

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
      if (uVar2 == uVar4) goto LAB_1040b9200;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1040b9200:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1040b9214; end: 1040b922b;  */

undefined1  [16] FUN_1040b9214(void)

{
  return ZEXT816(0x1107443b8);
}



/* Entry: 1040b922c; end: 1040b94df;  */

void FUN_1040b922c(undefined1 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  
  lVar1 = *param_2;
  func_0x00010bf00c80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x000102be1030();
    uVar3 = uVar2;
    func_0x000101107df4();
    lVar4 = lVar1;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(lVar1,uVar2);
    _objc_release(lVar1);
    lVar1 = lVar4;
    FUN_1040b96d0(lVar4);
    _swift_bridgeObjectRelease(lVar4);
    if ((((uint)uVar3 ^ 0xffffffff) & 0xff) != 0) {
      FUN_1040b99d8(lVar1,uVar2,uVar3);
      uVar5 = 1;
      goto LAB_1040b92d4;
    }
  }
  uVar5 = 0;
LAB_1040b92d4:
  *param_1 = uVar5;
  return;
}



/* Entry: 1040b94e0; end: 1040b94f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b94e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113060460);
  *(undefined8 *)(param_2 + _DAT_113060460) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1040b94f4; end: 1040b965f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b94f4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_50 [14];
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  lVar3 = 0x1130605d0;
  func_0x0001000285a8(0x1130605d0,&UNK_10dcd5ae0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) == 0) {
    lVar1 = *(ulong *)(unaff_x20 + _DAT_113060468) + 1;
    if (0xfffffffffffffffe < *(ulong *)(unaff_x20 + _DAT_113060468)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1040b965c);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + _DAT_113060468) = lVar1;
    if (0xfffffffffffffffe < *(ulong *)(unaff_x20 + _DAT_113060458)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1040b9660);
      (*pcVar2)();
    }
    if (lVar1 != *(ulong *)(unaff_x20 + _DAT_113060458) + 1) {
      return;
    }
    uVar5 = *(ulong *)(unaff_x20 + _DAT_113060470);
    *(ulong *)(unaff_x20 + _DAT_113060470) = uVar5 & 0xfffffffffffffffe;
    if (uVar5 != 1) {
      return;
    }
    uStack_41 = 1;
    uVar4 = 0x1130605d8;
    func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
    lVar1 = -0x31;
  }
  else {
    *(undefined8 *)(unaff_x20 + _DAT_113060468) = 0;
    uVar5 = *(ulong *)(unaff_x20 + _DAT_113060470);
    *(ulong *)(unaff_x20 + _DAT_113060470) = uVar5 | 1;
    if (uVar5 != 0) {
      return;
    }
    uStack_42 = 0;
    uVar4 = 0x1130605d8;
    func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
    lVar1 = -0x32;
  }
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF
            (auStack_50 + -extraout_x8,&stack0xfffffffffffffff0 + lVar1,uVar4);
  (**(code **)(lVar6 + 8))(auStack_50 + -extraout_x8,lVar3);
  return;
}



/* Entry: 1040b9660; end: 1040b96c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b9660(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113060450;
  lVar2 = 0x1130605d8;
  func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113060460));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b96c8; end: 1040b96cf;  */

void FUN_1040b96c8(void)

{
  if (lRam00000001130604a0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7ef428);
  return;
}



/* Entry: 1040b96d0; end: 1040b99d7;  */

ulong FUN_1040b96d0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  undefined1 auStack_98 [32];
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  uVar1 = param_1 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar5 = param_1 + 0x38;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar5,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    cStack_68 = '\0';
    param_2 = (ulong)*(uint *)(param_1 + 0x24);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    __ss10__CocoaSetV10startIndexAB0D0Vvg();
    cStack_68 = '\x01';
  }
  uVar2 = param_1 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_1) {
    uVar2 = param_1;
  }
  uStack_78 = uVar5;
  uStack_70 = param_2;
  if (uVar1 != 0) goto LAB_1040b97b4;
LAB_1040b9808:
  do {
    if (cStack_68 == '\x01') {
LAB_1040b99d4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b99d8);
      (*pcVar3)();
    }
    if (*(int *)(param_1 + 0x24) != (int)uStack_70) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b99c8);
      (*pcVar3)();
    }
    uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar9 = uStack_70;
    uVar12 = uStack_78;
    cVar11 = cStack_68;
    if (uStack_78 == uVar5) {
LAB_1040b9978:
      func_0x000102be1074(uVar5,uVar9,cVar11);
      return 0;
    }
    while( true ) {
      uVar5 = uVar12;
      func_0x000102be1088(uVar12,uVar9,cVar11,param_1);
      uVar6 = uVar5;
      func_0x000107c4e69c();
      if (uVar6 == 3) {
        _objc_release(uVar5);
      }
      else {
        uVar6 = uVar5;
        func_0x000107c4e69c();
        _objc_release(uVar5);
        if (uVar6 != 4) {
          return uVar12;
        }
      }
      if (uVar1 == 0) {
        uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        if (uVar5 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b99cc);
          (*pcVar3)();
        }
        uVar7 = uVar12 >> 6;
        uVar6 = *(ulong *)(param_1 + 0x38 + uVar7 * 8);
        if ((uVar6 >> (uVar12 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b99d0);
          (*pcVar3)();
        }
        if (*(int *)(param_1 + 0x24) != (int)uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b99d4);
          (*pcVar3)();
        }
        uVar6 = uVar6 & -2L << (uVar12 & 0x3f);
        if (uVar6 != 0) {
          uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar12 & 0x7fffffffffffffc0;
          goto LAB_1040b9960;
        }
        lVar10 = uVar7 << 6;
        puVar8 = (ulong *)(param_1 + 0x40 + uVar7 * 8);
        goto LAB_1040b9918;
      }
      __ss10__CocoaSetV5IndexV16handleBitPatternSuvg(uVar12,uVar9);
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      else {
        _swift_isUniquelyReferenced_nonNull_native();
      }
      uVar4 = 0x1130605e0;
      func_0x0001000285a8(0x1130605e0,&UNK_10dcd5af0);
      pcVar3 = (code *)auStack_98;
      __sSh5IndexV8_asCocoas02__C3SetVAAVvM(pcVar3,uVar4);
      __ss10__CocoaSetV9formIndex5after8isUniqueyAB0D0Vz_SbtF(uVar4,uVar12,uVar2);
      param_2 = 0;
      (*pcVar3)(auStack_98,0);
      if (uVar1 == 0) break;
LAB_1040b97b4:
      uVar12 = uVar2;
      __ss10__CocoaSetV8endIndexAB0D0Vvg(uVar2);
      uVar9 = uStack_70;
      uVar5 = uStack_78;
      if (cStack_68 != '\x01') goto LAB_1040b99d4;
      uVar6 = uStack_78;
      __ss10__CocoaSetV5IndexV2eeoiySbAD_ADtFZ(uStack_78,uStack_70,uVar12,param_2);
      cVar11 = '\x01';
      func_0x000102be1074(uVar12,param_2,1);
      uVar12 = uVar5;
      if ((uVar6 & 1) != 0) goto LAB_1040b9978;
    }
  } while( true );
  while( true ) {
    uVar6 = *puVar8;
    lVar10 = lVar10 + 0x40;
    puVar8 = puVar8 + 1;
    if (uVar6 != 0) break;
LAB_1040b9918:
    uVar7 = uVar7 + 1;
    if (uVar5 + 0x3f >> 6 <= uVar7) {
      func_0x000102be1074(uVar12,uVar9,cVar11);
      goto LAB_1040b9960;
    }
  }
  func_0x000102be1074(uVar12,uVar9,cVar11);
  uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
  uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + lVar10;
LAB_1040b9960:
  uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
  cStack_68 = '\0';
  uStack_78 = uVar5;
  goto LAB_1040b9808;
}



/* Entry: 1040b99d8; end: 1040b99f7;  */

void FUN_1040b99d8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == -1) {
    return;
  }
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1040b99f8; end: 1040ba063;  */

void FUN_1040b99f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lVar2 = 0x113060280;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x113060280,&UNK_10dcd5820);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112da1578;
  func_0x0001000285a8(0x112da1578,&UNK_10dcd5b50);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar4 = 0x1130605f0;
  func_0x0001000285a8(0x1130605f0,&UNK_10dcd5b58);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  lVar4 = 0x113060278;
  func_0x0001000285a8(0x113060278,&UNK_10dcd58c0);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x38))(lVar8,1,1,lVar4);
  (**(code **)(lVar9 + 0x10))(auStack_a0 + -extraout_x8,uStack_90,lVar2);
  lStack_70 = lVar8;
  func_0x0001000285a8(0x113060198,&UNK_10dcd57a0);
  __sScS_15bufferingPolicy_ScSyxGxm_ScS12ContinuationV09BufferingB0Oyx__GyADyx_GXEtcfC(lVar6);
  (**(code **)(lVar10 + 0x10))(uStack_88,lVar6,lVar3);
  FUN_1040ba280(lVar8,lVar7,0x1130605f0,&UNK_10dcd5b58);
  lVar2 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar10 + 8))(lVar6,lVar3);
    (**(code **)(lVar5 + 0x20))(uStack_98,lVar7,lVar4);
    func_0x0001040ba2c8(lVar8,0x1130605f0,&UNK_10dcd5b58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040b9c24);
  (*pcVar1)();
}



/* Entry: 1040ba064; end: 1040ba08b;  */

void FUN_1040ba064(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1130605d8;
  func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001040ba140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1040b99f0)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1040ba08c; end: 1040ba0ef;  */

void FUN_1040ba08c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1130605d8;
  func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1040ba0f0; end: 1040ba0fb;  */

void FUN_1040ba0f0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1130605d8;
  func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001040ba140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1040b99f4)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1040ba0fc; end: 1040ba143;  */

void FUN_1040ba0fc(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1130605d8;
  func_0x0001000285a8(0x1130605d8,&UNK_10dcd5b00);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001040ba140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1040ba144; end: 1040ba15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040ba144(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113060460);
  *(undefined8 *)(unaff_x20 + _DAT_113060460) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1040ba15c; end: 1040ba1d7;  */

void FUN_1040ba15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x0001040ba2c8(param_2,param_3,param_4);
  func_0x0001000285a8(param_5,param_6);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(param_2,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001040ba1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_2,0,1,param_5);
  return;
}



/* Entry: 1040ba1d8; end: 1040ba27f;  */

void FUN_1040ba1d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1040ba15c(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x1130605e8,&UNK_10dcd5b40,0x1130605d8,
                &UNK_10dcd5b00);
  return;
}



/* Entry: 1040ba280; end: 1040ba34b;  */

undefined8 FUN_1040ba280(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1040ba34c; end: 1040ba357;  */

void FUN_1040ba34c(void)

{
  return;
}



/* Entry: 1040ba358; end: 1040ba3ab;  */

void FUN_1040ba358(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000f11b8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  func_0x00010007e02c(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1040ba3ac; end: 1040ba583;  */

void FUN_1040ba3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = param_1;
  uVar2 = param_2;
  func_0x00010007c170();
  uVar3 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar2);
  func_0x0001000f11b8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
  uVar4 = uVar3;
  FUN_1040ba584();
  puVar5 = PTR___sSiN_11034deb0;
  uVar6 = uVar4;
  __sSzsE11descriptionSSvg(PTR___sSiN_11034deb0,uVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar6);
  func_0x00010b5da4f4(uVar7,uVar1,uVar2,uVar3,puVar5,param_8);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar5);
  func_0x00010007c170(param_1,param_2,param_3);
  uVar1 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  func_0x0001000f11b8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
  puVar5 = PTR___sSiN_11034deb0;
  __sSzsE11descriptionSSvg(PTR___sSiN_11034deb0,uVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar4);
  func_0x00010b5da828(uVar7,param_1,param_2,param_5,puVar5,1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(puVar5);
  return;
}



/* Entry: 1040ba584; end: 1040ba5e7;  */

void FUN_1040ba584(void)

{
  undefined *puVar1;
  
  if (puRam0000000113060600 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSiSzsMc_11034def0;
  _swift_getWitnessTable(PTR___sSiSzsMc_11034def0,PTR___sSiN_11034deb0);
  puRam0000000113060600 = puVar1;
  return;
}



/* Entry: 1040ba5e8; end: 1040ba5f3;  */

void FUN_1040ba5e8(void)

{
  return;
}



/* Entry: 1040ba5f4; end: 1040ba613;  */

void FUN_1040ba5f4(void)

{
  FUN_1040ba3ac();
  return;
}



/* Entry: 1040ba614; end: 1040ba61b;  */

undefined8 FUN_1040ba614(void)

{
  return 1;
}



/* Entry: 1040ba61c; end: 1040ba6bb;  */

void FUN_1040ba61c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040ba6bc; end: 1040ba6cb;  */

void FUN_1040ba6bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1040ba6cc; end: 1040ba70b;  */

void FUN_1040ba6cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130606e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5c58;
  _swift_getWitnessTable(&UNK_10dcd5c58,&UNK_110744738);
  puRam00000001130606e0 = puVar1;
  return;
}



/* Entry: 1040ba70c; end: 1040ba723;  */

void FUN_1040ba70c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040ba724,0,0);
  return;
}



/* Entry: 1040ba724; end: 1040ba8e3;  */

void FUN_1040ba724(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  long unaff_x22;
  ulong uVar10;
  long lVar11;
  
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar3 != 0) {
    uVar10 = *(ulong *)(unaff_x22 + 0x28);
    lVar4 = 0;
    __ss15ContinuousClockV7InstantVMa();
    *(long *)(unaff_x22 + 0x30) = lVar4;
    lVar11 = *(long *)(lVar4 + -8);
    uVar6 = *(long *)(lVar11 + 0x40) + 0xf;
    uVar5 = uVar6 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x38) = uVar5;
    uVar6 = uVar6 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar6);
    __ss15ContinuousClockV7InstantV3nowADvgZ(uVar6);
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar10;
    __ss15ContinuousClockV7InstantV8advanced2byADs8DurationV_tF
              (uVar5,uVar10 * 1000000000000000,SUB168(auVar1 * ZEXT816(1000000000000000),8));
    pcVar9 = *(code **)(lVar11 + 8);
    *(code **)(unaff_x22 + 0x40) = pcVar9;
    (*pcVar9)(uVar6,lVar4);
    _swift_task_dealloc(uVar6);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined1 *)(unaff_x22 + 0x20) = 1;
    lVar4 = 0;
    __ss15ContinuousClockVMa();
    *(long *)(unaff_x22 + 0x48) = lVar4;
    lVar11 = *(long *)(lVar4 + -8);
    *(long *)(unaff_x22 + 0x50) = lVar11;
    uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x58) = uVar6;
    __ss5ClockPss010ContinuousA0VRszrlE10continuousADvgZ(uVar6);
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZTu_11034fe18
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar7;
    plVar8 = plVar7;
    func_0x0001000da454();
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1040ba8e4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZ_11034fe10
    )(uVar5,(undefined8 *)(unaff_x22 + 0x10),uVar6,lVar4,plVar8);
    return;
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x28);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  if (SUB168(auVar2 * ZEXT816(1000000),8) == 0) {
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1040ba98c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (uVar6 * 1000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1040ba8e4);
  (*pcVar9)();
}



/* Entry: 1040ba8e4; end: 1040ba98b;  */

void FUN_1040ba8e4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar5 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_100c87e18,0,0);
    return;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  pcVar1 = *(code **)(lVar5 + 0x40);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  (**(code **)(*(long *)(lVar5 + 0x50) + 8))(uVar3,*(undefined8 *)(lVar5 + 0x48));
  (*pcVar1)(uVar4,uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001040ba988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))();
  return;
}



/* Entry: 1040ba98c; end: 1040ba9c7;  */

void FUN_1040ba98c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001040ba9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040ba9c8; end: 1040ba9cb;  */

void FUN_1040ba9c8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130606e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5bf0;
  _swift_getWitnessTable(&UNK_10dcd5bf0,&UNK_110744738);
  puRam00000001130606e8 = puVar1;
  return;
}



/* Entry: 1040ba9cc; end: 1040baa0b;  */

void FUN_1040ba9cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130606e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5bf0;
  _swift_getWitnessTable(&UNK_10dcd5bf0,&UNK_110744738);
  puRam00000001130606e8 = puVar1;
  return;
}



/* Entry: 1040baa0c; end: 1040baafb;  */

uint FUN_1040baa0c(uint *param_1,int param_2)

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



/* Entry: 1040baafc; end: 1040bab27;  */

long FUN_1040baafc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1040bab28; end: 1040bab83;  */

int FUN_1040bab28(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1040bab84; end: 1040bacbb;  */

int FUN_1040bab84(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1040bacbc; end: 1040bacd7;  */

void FUN_1040bacbc(void)

{
  _swift_defaultActor_destroy();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 1040bacd8; end: 1040bacdb;  */

void FUN_1040bacd8(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam00000001130606f8 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam00000001130606f8;
  func_0x0001000da630();
  puVar2 = &UNK_10dcd5d30;
  func_0x000107c61520(&UNK_10dcd5d30,lVar1);
  puRam00000001130606f8 = puVar2;
  return;
}



/* Entry: 1040bacdc; end: 1040bad1b;  */

void FUN_1040bacdc(void)

{
  if (lRam00000001130606f0 != -1) {
    _swift_once(0x1130606f0,&UNK_1000da650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uRam0000000113813118);
  return;
}



/* Entry: 1040bad1c; end: 1040bad3f;  */

void FUN_1040bad1c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000da630();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss11GlobalActorPsE21sharedUnownedExecutorScevgZ_11034ff58)(param_1,param_2);
  return;
}



/* Entry: 1040bad40; end: 1040bad53;  */

bool FUN_1040bad40(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1040bad54; end: 1040badff;  */

void FUN_1040bad54(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040bae00; end: 1040baedf;  */

void FUN_1040bae00(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  if (lRam00000001130606f0 != -1) {
    _swift_once(0x1130606f0,&UNK_1000da650);
  }
  uVar1 = uRam0000000113813118;
  *(undefined8 *)(unaff_x22 + 0x50) = uRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040bae6c,uVar1,0);
  return;
}



/* Entry: 1040baee0; end: 1040bb08f;  */

void FUN_1040baee0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  
  if (*(int *)(unaff_x22 + 0x44) != 0) {
    uVar9 = *(ulong *)(unaff_x22 + 0x58);
    lVar3 = 0;
    __ss15ContinuousClockV7InstantVMa();
    *(long *)(unaff_x22 + 0x60) = lVar3;
    lVar10 = *(long *)(lVar3 + -8);
    uVar5 = *(long *)(lVar10 + 0x40) + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x68) = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar5);
    __ss15ContinuousClockV7InstantV3nowADvgZ(uVar5);
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar9;
    __ss15ContinuousClockV7InstantV8advanced2byADs8DurationV_tF
              (uVar4,uVar9 * 1000000000000000,SUB168(auVar1 * ZEXT816(1000000000000000),8));
    pcVar8 = *(code **)(lVar10 + 8);
    *(code **)(unaff_x22 + 0x70) = pcVar8;
    (*pcVar8)(uVar5,lVar3);
    _swift_task_dealloc(uVar5);
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined1 *)(unaff_x22 + 0x40) = 1;
    lVar3 = 0;
    __ss15ContinuousClockVMa();
    *(long *)(unaff_x22 + 0x78) = lVar3;
    lVar10 = *(long *)(lVar3 + -8);
    *(long *)(unaff_x22 + 0x80) = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x88) = uVar5;
    __ss5ClockPss010ContinuousA0VRszrlE10continuousADvgZ(uVar5);
    plVar6 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZTu_11034fe18
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar6;
    plVar7 = plVar6;
    func_0x0001000da454();
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1040bb090;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZ_11034fe10
    )(uVar4,(undefined8 *)(unaff_x22 + 0x30),uVar5,lVar3,plVar7);
    return;
  }
  uVar5 = *(ulong *)(unaff_x22 + 0x58);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  if (SUB168(auVar2 * ZEXT816(1000000),8) == 0) {
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1040bb134;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (uVar5 * 1000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1040bb090);
  (*pcVar8)();
}



/* Entry: 1040bb090; end: 1040bb133;  */

void FUN_1040bb090(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x90));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x88);
    pcVar3 = *(code **)(lVar5 + 0x70);
    uVar4 = *(undefined8 *)(lVar5 + 0x60);
    uVar2 = *(undefined8 *)(lVar5 + 0x68);
    (**(code **)(*(long *)(lVar5 + 0x80) + 8))(uVar1,*(undefined8 *)(lVar5 + 0x78));
    (*pcVar3)(uVar2,uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar2);
    uVar4 = *(undefined8 *)(lVar5 + 0x50);
    pcVar3 = FUN_1040bb20c;
  }
  else {
    pcVar3 = FUN_1040bb194;
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar4,0);
  return;
}



/* Entry: 1040bb134; end: 1040bb193;  */

void FUN_1040bb134(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    pcVar1 = FUN_1040bb20c;
  }
  else {
    *(long *)(lVar3 + 0xa8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    pcVar1 = FUN_1040bb538;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 1040bb194; end: 1040bb20b;  */

void FUN_1040bb194(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  pcVar1 = *(code **)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x78));
  (*pcVar1)(uVar4,uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bb538,*(undefined8 *)(unaff_x22 + 0x50),0);
  return;
}



/* Entry: 1040bb20c; end: 1040bb537;  */

void FUN_1040bb20c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(ulong *)(lVar7 + 0x90);
  uVar4 = uVar8 + *(ulong *)(lVar7 + 0x68);
  if (CARRY8(uVar8,*(ulong *)(lVar7 + 0x68))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1040bb538);
    (*pcVar1)();
  }
  uVar12 = *(ulong *)(lVar7 + 0x60);
  uVar2 = uVar12;
  if (uVar4 <= uVar12) {
    uVar2 = uVar4;
  }
  *(ulong *)(lVar7 + 0x90) = uVar2;
  if ((uVar2 < uVar8) && (lVar7 = *(long *)(unaff_x22 + 0x48), *(long *)(lVar7 + 0x88) == 0)) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar9 = 0x112d453c8;
    func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
    uVar4 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
    uVar2 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    lVar9 = 0;
    __sScPMa();
    lVar11 = *(long *)(lVar9 + -8);
    uVar8 = uVar2;
    (**(code **)(lVar11 + 0x38))(uVar2,1,1,lVar9);
    func_0x0001000f1d94();
    puVar3 = &UNK_110744a10;
    _swift_allocObject(&UNK_110744a10,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar10;
    *(ulong *)(puVar3 + 0x18) = uVar8;
    *(long *)(puVar3 + 0x20) = lVar7;
    uVar4 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    func_0x0001000eda90(uVar2,uVar4,0x112d453c8,&UNK_10d90ac60);
    uVar8 = uVar4;
    (**(code **)(lVar11 + 0x30))(uVar4,1,lVar9);
    _swift_retain(lVar7);
    _swift_retain(uVar10);
    puVar5 = puVar3;
    _swift_retain();
    if ((int)uVar8 == 1) {
      func_0x0001000edad8(uVar4,0x112d453c8,&UNK_10d90ac60);
      uVar8 = 0x1c00;
    }
    else {
      __sScP8rawValues5UInt8Vvg();
      (**(code **)(lVar11 + 8))(uVar4,lVar9);
      uVar8 = (ulong)puVar5 & 0xff | 0x1c00;
    }
    _swift_task_dealloc(uVar4);
    lVar7 = *(long *)(puVar3 + 0x10);
    lVar9 = *(long *)(puVar3 + 0x18);
    _swift_unknownObjectRetain(lVar7);
    _swift_release(puVar3);
    if (lVar7 == 0) {
      lVar11 = 0;
      lVar9 = 0;
    }
    else {
      lVar11 = lVar7;
      _swift_getObjectType();
      __sScA15unownedExecutorScevgTj();
      _swift_unknownObjectRelease(lVar7);
    }
    func_0x0001000edad8(uVar2,0x112d453c8,&UNK_10d90ac60);
    puVar5 = &UNK_110744a38;
    _swift_allocObject(&UNK_110744a38,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10dcd5e88;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    if (lVar9 == 0 && lVar11 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(unaff_x22 + 0x10);
      *puVar6 = 0;
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(long *)(unaff_x22 + 0x20) = lVar11;
      *(long *)(unaff_x22 + 0x28) = lVar9;
    }
    lVar7 = *(long *)(unaff_x22 + 0x48);
    _swift_task_create(uVar8,puVar6,PTR___sytN_11034f1b0 + 8,&UNK_10dcd5e98,puVar5);
    _swift_task_dealloc(uVar2);
    param_1 = *(ulong *)(lVar7 + 0x88);
    *(ulong *)(lVar7 + 0x88) = uVar8;
    _swift_release();
    uVar2 = *(ulong *)(lVar7 + 0x90);
  }
  if (uVar2 == uVar12) {
    lVar7 = *(long *)(unaff_x22 + 0x48);
    lVar9 = *(long *)(lVar7 + 0x88);
    if (lVar9 == 0) {
      param_1 = 0;
    }
    else {
      _swift_retain(lVar9);
      __sScT6cancelyyF();
      _swift_release(lVar9);
      param_1 = *(ulong *)(lVar7 + 0x88);
      lVar7 = *(long *)(unaff_x22 + 0x48);
    }
    *(undefined8 *)(lVar7 + 0x88) = 0;
    _swift_release();
  }
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  if ((param_1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040baee0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040bb3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bb538; end: 1040bb567;  */

void FUN_1040bb538(void)

{
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001040bb564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bb568; end: 1040bb6a7;  */

void FUN_1040bb568(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(unaff_x20 + 0x90);
  *(ulong *)(unaff_x20 + 0x90) = param_1;
  if ((param_1 < uVar5) && (*(long *)(unaff_x20 + 0x88) == 0)) {
    lVar2 = 0;
    __sScPMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
    lVar1 = lRam00000001130606f0;
    lVar2 = unaff_x20;
    _swift_retain();
    if (lVar1 != -1) {
      lVar2 = 0x1130606f0;
      _swift_once(0x1130606f0,&UNK_1000da650);
    }
    uVar4 = uRam0000000113813118;
    func_0x0001000f1d94();
    puVar3 = &UNK_1107449e8;
    _swift_allocObject(&UNK_1107449e8,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(long *)(puVar3 + 0x18) = lVar2;
    *(long *)(puVar3 + 0x20) = unaff_x20;
    _swift_retain(uVar4);
    uVar4 = 0;
    func_0x0001000abba4(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10dcd5e80,puVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(unaff_x20 + 0x88) = uVar4;
    _swift_release(uVar6);
  }
  return;
}



/* Entry: 1040bb6a8; end: 1040bbb07;  */

long FUN_1040bb6a8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,byte param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d4;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_b0 = param_14;
  uStack_98 = param_18;
  uStack_130 = param_17;
  uStack_d4 = (uint)param_15;
  uStack_e8 = param_12;
  uStack_e0 = param_13;
  uStack_f8 = param_11;
  uStack_100 = param_10;
  lVar7 = 0x112da1580;
  uStack_120 = param_1;
  uStack_114 = param_2;
  uStack_110 = param_3;
  uStack_104 = param_4;
  uStack_c8 = param_8;
  uStack_80 = param_7;
  uStack_78 = param_6;
  uStack_70 = param_5;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  lStack_c0 = *(long *)(lVar7 + -8);
  lStack_b8 = *(long *)(lStack_c0 + 0x40);
  lStack_88 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_b8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112da1570;
  lStack_90 = (long)&lStack_140 - extraout_x8;
  func_0x0001000285a8(0x112da1570,&UNK_10d944870);
  lStack_a0 = *(long *)(lVar7 + -8);
  lVar13 = *(long *)(lStack_a0 + 0x40);
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar16 = ((long)&lStack_140 - extraout_x8) - extraout_x8_00;
  lVar7 = 0x112da1578;
  lStack_138 = lVar16;
  func_0x0001000285a8(0x112da1578,&UNK_10dcd5b50);
  lStack_f0 = *(long *)(lVar7 + -8);
  lVar10 = *(long *)(lStack_f0 + 0x40);
  lStack_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar16 - extraout_x8_01;
  lVar7 = 0x112d453c8;
  lStack_140 = lVar12;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_128 = lVar12 - extraout_x8_02;
  _swift_allocObject();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000d6600();
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_120;
  *(char *)(unaff_x20 + 0x20) = (char)uStack_114;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_110;
  *(char *)(unaff_x20 + 0x30) = (char)uStack_104;
  func_0x0001000d6cd4(param_8,unaff_x20 + 0x98);
  uVar19 = *param_9;
  uVar18 = param_9[3];
  uVar17 = param_9[2];
  *(undefined8 *)(unaff_x20 + 0x60) = param_9[1];
  *(undefined8 *)(unaff_x20 + 0x58) = uVar19;
  uVar9 = param_9[5];
  uVar19 = param_9[4];
  *(undefined8 *)(unaff_x20 + 0x70) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x90) = param_9[1];
  *(char *)(unaff_x20 + 0xc0) = (char)uStack_d4;
  lVar7 = 0;
  func_0x0001000d6d18();
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined2 *)(lVar7 + 0x18) = 0x201;
  func_0x0001000d6d38();
  *(undefined **)(lVar7 + 0x20) = puVar8;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined1 *)(lVar7 + 0x30) = 1;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined1 *)(lVar7 + 0x40) = 1;
  *(long *)(unaff_x20 + 200) = lVar7;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_98;
  lVar7 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar12 - extraout_x8_02,1,1,lVar7);
  lVar4 = lStack_a8;
  lVar7 = lStack_f0;
  (**(code **)(lStack_f0 + 0x10))(lVar12,uStack_70,lStack_a8);
  lVar5 = lStack_a0;
  lVar12 = lStack_d0;
  (**(code **)(lStack_a0 + 0x10))(lVar16,uStack_78,lStack_d0);
  lVar16 = lStack_c0;
  (**(code **)(lStack_c0 + 0x10))(lStack_90,uStack_80,lStack_88);
  bVar1 = *(byte *)(lVar7 + 0x50);
  uVar15 = (ulong)bVar1 + 0x30 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar5 + 0x50);
  uVar11 = lVar10 + (ulong)bVar2 + uVar15 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar16 + 0x50);
  uVar14 = lVar13 + (ulong)bVar3 + uVar11 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar8 = &UNK_110744988;
  _swift_allocObject(&UNK_110744988,uVar14 + lStack_b8,bVar1 | bVar2 | bVar3 | 7);
  uVar18 = uStack_b0;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(long *)(puVar8 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar8 + 0x28) = uStack_b0;
  (**(code **)(lVar7 + 0x20))(puVar8 + uVar15,lStack_140,lVar4);
  lVar4 = lStack_a0;
  (**(code **)(lStack_a0 + 0x20))(puVar8 + uVar11,lStack_138,lVar12);
  lVar5 = lStack_88;
  (**(code **)(lVar16 + 0x20))(puVar8 + uVar14,lStack_90,lStack_88);
  uVar19 = uStack_98;
  uVar17 = uStack_130;
  func_0x0001000d6e04(uStack_130,uStack_98);
  _swift_unknownObjectRetain(uVar18);
  _swift_retain(unaff_x20);
  uVar9 = 0;
  func_0x0001000abba4(0,0,lStack_128,&UNK_10dcd5dc8,puVar8);
  _swift_unknownObjectRelease(uVar18);
  _swift_release(uVar9);
  func_0x0001000d6e14(uVar17,uVar19);
  func_0x0001000834e4(uStack_c8);
  (**(code **)(lVar16 + 8))(uStack_80,lVar5);
  (**(code **)(lVar4 + 8))(uStack_78,lVar12);
  (**(code **)(lVar7 + 8))(uStack_70,lStack_a8);
  return unaff_x20;
}



/* Entry: 1040bbb08; end: 1040bbb4f;  */

void FUN_1040bbb08(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bbe88,0,0);
  return;
}



/* Entry: 1040bbb50; end: 1040bbb77;  */

void FUN_1040bbb50(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040bbb78;
  }
  else {
    *(long *)(unaff_x22 + 0x1c8) = unaff_x20;
    pcVar1 = FUN_1040bbc18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040bbb78; end: 1040bbc17;  */

void FUN_1040bbb78(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x1d8) == '\x01') {
    lVar2 = *(long *)(unaff_x22 + 0x198);
    if (lVar2 != 0) {
      uVar1 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1edbc0);
      func_0x00010c08e140(lVar2);
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bbc34,*(undefined8 *)(unaff_x22 + 0x1b8),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x1d8,unaff_x22 + 0x10,FUN_1040be0b0,unaff_x22 + 0x160);
  return;
}



/* Entry: 1040bbc18; end: 1040bbc33;  */

void FUN_1040bbc18(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unexpectedError_11034f528)
            (*(undefined8 *)(unaff_x22 + 0x1c8),"_Concurrency/arm64e-apple-ios.swiftinterface",0x2c,
             1,0xb9b);
  return;
}



/* Entry: 1040bbc34; end: 1040bbe03;  */

void FUN_1040bbc34(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  long unaff_x22;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  lVar8 = *(long *)(unaff_x22 + 400);
  _swift_beginAccess(lVar8 + 0x10,unaff_x22 + 0x148,0,0);
  lVar8 = *(long *)(lVar8 + 0x10);
  puVar9 = (ulong *)(lVar8 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar13 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *puVar9;
  lVar5 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar12 = *(long *)(lVar5 + -8);
  uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  _swift_bridgeObjectRetain_n(lVar8,2);
  lVar10 = 0;
  lVar1 = lVar10;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar2 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      (**(code **)(lVar12 + 0x10))
                (uVar6,*(long *)(lVar8 + 0x38) +
                       *(long *)(lVar12 + 0x48) *
                       (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar1 << 6),lVar5);
      __sScS12ContinuationV6finishyyF(lVar5);
      (**(code **)(lVar12 + 8))(uVar6,lVar5);
      lVar10 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar1) {
      _swift_bridgeObjectRelease(lVar8);
      func_0x0001000ee560(lVar8,puVar9,~uVar11,lVar10,0);
      _swift_task_dealloc(uVar6);
      FUN_1040be154();
      plVar7 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1d0) = plVar7;
      func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1040bbe04;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
      return;
    }
    uVar13 = puVar9[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1040bbe04);
  (*pcVar3)();
}



/* Entry: 1040bbe04; end: 1040bbe87;  */

void FUN_1040bbe04(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040bbe4c,0,0);
  return;
}



/* Entry: 1040bbe88; end: 1040bbe8f;  */

void FUN_1040bbe88(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001040bbe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bbe90; end: 1040bbed7;  */

void FUN_1040bbe90(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bbf00,0,0);
  return;
}



/* Entry: 1040bbed8; end: 1040bbeff;  */

void FUN_1040bbed8(void)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040bbfa0;
  }
  else {
    *(long *)(unaff_x22 + 0x78) = unaff_x20;
    pcVar1 = (code *)0x1040bbfd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1040bbf00; end: 1040bbf9f;  */

void FUN_1040bbf00(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  if (lVar2 != 0) {
    uVar1 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1edbc0);
    func_0x00010c08e140(lVar2);
    _objc_release(uVar1);
  }
  if (lRam00000001130606f0 != -1) {
    _swift_once(0x1130606f0,&UNK_1000da650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bbff4,uRam0000000113813118,0);
  return;
}



/* Entry: 1040bbfa0; end: 1040bbff3;  */

void FUN_1040bbfa0(void)

{
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bbf00,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            ((char *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70),0x1040be0b4,
             unaff_x22 + 0x10);
  return;
}



/* Entry: 1040bbff4; end: 1040bc06b;  */

void FUN_1040bbff4(void)

{
  long unaff_x22;
  
  FUN_1040bc524();
                    /* WARNING: Could not recover jumptable at 0x0001040bc020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bc06c; end: 1040bc1c3;  */

void FUN_1040bc06c(void)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0xb0);
  if (bVar2 == 2) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x88));
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001040bc0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x78);
  *(byte *)(unaff_x22 + 0xb1) = bVar2;
  if (lVar5 != 0) {
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x13);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x68));
    *(undefined8 *)(unaff_x22 + 0x50) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x800000010f1edc10;
    bVar3 = (bVar2 & 1) == 0;
    uVar4 = 0x65757274;
    if (bVar3) {
      uVar4 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar3) {
      uVar1 = 0xe500000000000000;
    }
    __sSS6appendyySSF(uVar4,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    func_0x00010c08e140(lVar5);
    _objc_release(uVar4);
  }
  if (lRam00000001130606f0 != -1) {
    _swift_once(0x1130606f0,&UNK_1000da650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bc1c4,uRam0000000113813118,0);
  return;
}



/* Entry: 1040bc1c4; end: 1040bc383;  */

void FUN_1040bc1c4(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0xb1);
  lVar10 = *(long *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(lVar10 + 0x18);
  puVar11 = *(undefined8 **)(lVar10 + 0x28);
  uVar3 = *(undefined1 *)(lVar10 + 0x30);
  *(byte *)(lVar10 + 0x30) = bVar2 & 1;
  uVar4 = *(undefined1 *)(lVar10 + 0x20);
  _swift_bridgeObjectRetain(puVar11);
  func_0x0001000ee2f4(uVar9,uVar4,puVar11,uVar3);
  _swift_bridgeObjectRelease();
  lVar10 = *(long *)(lVar10 + 200);
  bVar2 = (bVar2 ^ 0xff) & 1;
  if (*(byte *)(lVar10 + 0x19) != bVar2) {
    if (*(char *)(lVar10 + 0x18) != '\x01') {
      uVar9 = *(undefined8 *)(lVar10 + 0x10);
      func_0x0001000298f0();
      _swift_beginAccess();
      puVar11 = (undefined8 *)*puVar11;
      _objc_retain();
      func_0x000100069b5c(uVar9);
      _objc_release();
    }
    bVar5 = *(byte *)(unaff_x22 + 0xb1);
    *(byte *)(lVar10 + 0x19) = bVar2;
    func_0x0001000298f0();
    _swift_beginAccess();
    uVar7 = *puVar11;
    *(undefined8 *)(unaff_x22 + 0x40) = 0x3a656c64493a5357;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xe800000000000000;
    bVar6 = (bVar5 & 1) == 0;
    uVar9 = 0x656c6449;
    if (bVar6) {
      uVar9 = 0x656c6449746f4e;
    }
    uVar1 = 0xe400000000000000;
    if (bVar6) {
      uVar1 = 0xe700000000000000;
    }
    _objc_retain(uVar7);
    __sSS6appendyySSF(uVar9,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000100029b28(uVar9,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    _objc_release(uVar7);
    *(undefined8 *)(lVar10 + 0x10) = uVar9;
    *(undefined1 *)(lVar10 + 0x18) = 0;
  }
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1040bc384;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,unaff_x22 + 0xb0,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 1040bc384; end: 1040bc3cb;  */

void FUN_1040bc384(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bc3cc,0,0);
  return;
}



/* Entry: 1040bc3cc; end: 1040bc523;  */

void FUN_1040bc3cc(void)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0xb0);
  if (bVar2 == 2) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x88));
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001040bc420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(byte *)(unaff_x22 + 0xb1) = bVar2;
  lVar5 = *(long *)(unaff_x22 + 0x78);
  if (lVar5 != 0) {
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x13);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x68));
    *(undefined8 *)(unaff_x22 + 0x50) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x800000010f1edc10;
    bVar3 = (bVar2 & 1) == 0;
    uVar4 = 0x65757274;
    if (bVar3) {
      uVar4 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar3) {
      uVar1 = 0xe500000000000000;
    }
    __sSS6appendyySSF(uVar4,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    func_0x00010c08e140(lVar5);
    _objc_release(uVar4);
  }
  if (lRam00000001130606f0 != -1) {
    _swift_once(0x1130606f0,&UNK_1000da650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bc1c4,uRam0000000113813118,0);
  return;
}



/* Entry: 1040bc524; end: 1040bc6b3;  */

void FUN_1040bc524(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar7 = (ulong *)(lVar6 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar7;
  _swift_bridgeObjectRetain_n(lVar6,2);
  lVar8 = 0;
  lVar1 = lVar8;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar2 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      (**(code **)(lVar9 + 0x10))
                (auStack_80 + -extraout_x8,
                 *(long *)(lVar6 + 0x38) +
                 *(long *)(lVar9 + 0x48) * (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar1 << 6),
                 lVar5);
      __sScS12ContinuationV6finishyyF(lVar5);
      (**(code **)(lVar9 + 8))(auStack_80 + -extraout_x8,lVar5);
      lVar8 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      _swift_bridgeObjectRelease(lVar6);
      func_0x0001000ee560(lVar6,puVar7,~uVar10,lVar8,0);
      FUN_1040be154();
      return;
    }
    uVar11 = puVar7[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1040bc6b4);
  (*pcVar3)();
}



/* Entry: 1040bc6b4; end: 1040bc707;  */

void FUN_1040bc6b4(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x30) = param_1;
  *(long **)(lVar1 + 0x28) = unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bc708,uVar2,0);
  return;
}



/* Entry: 1040bc708; end: 1040bc95b;  */

void FUN_1040bc708(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  char *pcVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  lVar12 = *(long *)(unaff_x22 + 0x60);
  if ((param_1 & 1) == 0) {
    bVar10 = *(byte *)(unaff_x22 + 0x30);
    if (*(ulong *)(lVar12 + 0x90) < (ulong)(bVar10 == 1)) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar5 = *(undefined8 *)(lVar12 + 0xb0);
      lVar7 = *(long *)(lVar12 + 0xb8);
      uVar8 = *(undefined1 *)(unaff_x22 + 0x21);
      func_0x0001000a8868(lVar12 + 0x98,uVar5);
      (**(code **)(lVar7 + 0x18))(uVar4,uVar6,uVar8,uVar11,uVar5,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bc95c,0,0);
      return;
    }
    FUN_1040bb568(*(ulong *)(lVar12 + 0x90) - (ulong)(bVar10 == 1));
    uVar4 = *(undefined8 *)(lVar12 + 0xb0);
    lVar7 = *(long *)(lVar12 + 0xb8);
    func_0x0001000a8868(lVar12 + 0x98,uVar4);
    pcVar9 = "CriticalSectionAllowListed";
    uVar5 = 0xd00000000000001d;
    if (bVar10 != 4) {
      pcVar9 = "completed.scopeGraphLaunch";
      uVar5 = 0xd00000000000001a;
    }
    uVar3 = 0xe900000000000064;
    uVar6 = 0x656c6c65636e6143;
    if (bVar10 != 3) {
      uVar3 = (ulong)pcVar9 | 0x8000000000000000;
      uVar6 = uVar5;
    }
    uVar1 = 0x800000010f1edba0;
    uVar5 = 0xd000000000000011;
    if (bVar10 != 1) {
      uVar1 = 0xee00646568636165;
      uVar5 = 0x5274756f656d6954;
    }
    uVar2 = 0xef746e6176656c65;
    uVar11 = 0x52747865746e6f43;
    if (bVar10 != 0) {
      uVar2 = uVar1;
      uVar11 = uVar5;
    }
    if (bVar10 < 3) {
      uVar3 = uVar2;
      uVar6 = uVar11;
    }
    (**(code **)(lVar7 + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               *(undefined1 *)(unaff_x22 + 0x21),uVar6,uVar3,*(undefined8 *)(unaff_x22 + 0x70),uVar4
               ,lVar7);
    _swift_bridgeObjectRelease(uVar3);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(lVar12 + 0xb0);
    lVar7 = *(long *)(lVar12 + 0xb8);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x21);
    func_0x0001000a8868(lVar12 + 0x98,uVar5);
    (**(code **)(lVar7 + 0x10))
              (uVar4,uVar6,uVar8,0x656c6c65636e6143,0xe900000000000064,uVar11,uVar5,lVar7);
    bVar10 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040bc958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar10,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 1040bc95c; end: 1040bcb1b;  */

void FUN_1040bc95c(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  long unaff_x22;
  ulong uVar10;
  long lVar11;
  
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar3 != 0) {
    uVar10 = *(ulong *)(unaff_x22 + 0x58);
    lVar4 = 0;
    __ss15ContinuousClockV7InstantVMa();
    *(long *)(unaff_x22 + 0x80) = lVar4;
    lVar11 = *(long *)(lVar4 + -8);
    uVar6 = *(long *)(lVar11 + 0x40) + 0xf;
    uVar5 = uVar6 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x88) = uVar5;
    uVar6 = uVar6 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar6);
    __ss15ContinuousClockV7InstantV3nowADvgZ(uVar6);
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar10;
    __ss15ContinuousClockV7InstantV8advanced2byADs8DurationV_tF
              (uVar5,uVar10 * 1000000000000000,SUB168(auVar1 * ZEXT816(1000000000000000),8));
    pcVar9 = *(code **)(lVar11 + 8);
    *(code **)(unaff_x22 + 0x90) = pcVar9;
    (*pcVar9)(uVar6,lVar4);
    _swift_task_dealloc(uVar6);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined1 *)(unaff_x22 + 0x20) = 1;
    lVar4 = 0;
    __ss15ContinuousClockVMa();
    *(long *)(unaff_x22 + 0x98) = lVar4;
    lVar11 = *(long *)(lVar4 + -8);
    *(long *)(unaff_x22 + 0xa0) = lVar11;
    uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0xa8) = uVar6;
    __ss5ClockPss010ContinuousA0VRszrlE10continuousADvgZ(uVar6);
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZTu_11034fe18
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar7;
    plVar8 = plVar7;
    func_0x0001000da454();
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1040bcb1c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sScTss5NeverORszABRs_rlE5sleep5until9tolerance5clocky7InstantQyd___8DurationQyd__Sgqd__tYaKs5ClockRd__lFZ_11034fe10
    )(uVar5,(undefined8 *)(unaff_x22 + 0x10),uVar6,lVar4,plVar8);
    return;
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x58);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  if (SUB168(auVar2 * ZEXT816(1000000),8) == 0) {
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1040bcbc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (uVar6 * 1000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1040bcb1c);
  (*pcVar9)();
}



/* Entry: 1040bcb1c; end: 1040bcbbf;  */

void FUN_1040bcb1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0xb0));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0xa8);
    pcVar3 = *(code **)(lVar5 + 0x90);
    uVar4 = *(undefined8 *)(lVar5 + 0x80);
    uVar2 = *(undefined8 *)(lVar5 + 0x88);
    (**(code **)(*(long *)(lVar5 + 0xa0) + 8))(uVar1,*(undefined8 *)(lVar5 + 0x98));
    (*pcVar3)(uVar2,uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar2);
    uVar4 = *(undefined8 *)(lVar5 + 0x68);
    pcVar3 = FUN_1040bcc98;
  }
  else {
    pcVar3 = FUN_1040bcc20;
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar4,0);
  return;
}



/* Entry: 1040bcbc0; end: 1040bcc1f;  */

void FUN_1040bcbc0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xc0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    pcVar1 = FUN_1040bcc98;
  }
  else {
    *(long *)(lVar3 + 200) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x68);
    pcVar1 = (code *)0x1040bcd38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 1040bcc20; end: 1040bcc97;  */

void FUN_1040bcc20(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  pcVar1 = *(code **)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x98));
  (*pcVar1)(uVar4,uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040bcd38,*(undefined8 *)(unaff_x22 + 0x68),0);
  return;
}



/* Entry: 1040bcc98; end: 1040bcdc3;  */

void FUN_1040bcc98(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  uVar1 = *(long *)(unaff_x22 + 0x70) + 1;
  if (SCARRY8(*(long *)(unaff_x22 + 0x70),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1040bcd38);
    (*pcVar4)();
  }
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  uVar6 = uVar1;
  if ((param_1 & 1) == 0) {
    *(ulong *)(unaff_x22 + 0x70) = uVar1;
    uVar6 = *(ulong *)(unaff_x22 + 0x50);
    if (uVar1 < uVar6) {
      plVar5 = (long *)0x1e0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x78) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1040bc6b4;
      lVar8 = *(long *)(unaff_x22 + 0x60);
      lVar2 = *(long *)(unaff_x22 + 0x40);
      lVar7 = *(long *)(unaff_x22 + 0x38);
      uVar3 = *(undefined1 *)(unaff_x22 + 0x21);
      plVar5[0x31] = *(long *)(unaff_x22 + 0x48);
      plVar5[0x32] = lVar8;
      *(undefined1 *)((long)plVar5 + 0x1d2) = uVar3;
      plVar5[0x2f] = lVar7;
      plVar5[0x30] = lVar2;
      if (lRam00000001130606f0 != -1) {
        func_0x000107c61568(0x1130606f0,&UNK_1000da650);
      }
      lVar2 = lRam0000000113813118;
      plVar5[0x33] = lRam0000000113813118;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000f1dd4,lVar2,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001040bcd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(4,uVar6);
  return;
}



/* Entry: 1040bcdc4; end: 1040bcf17;  */

void FUN_1040bcdc4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  
  bVar6 = *(byte *)(unaff_x22 + 0x22);
  lVar11 = *(long *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(lVar11 + 0xb0);
  lVar5 = *(long *)(lVar11 + 0xb8);
  func_0x0001000a8868(lVar11 + 0x98,uVar4);
  pcVar7 = "CriticalSectionAllowListed";
  uVar8 = 0xd00000000000001d;
  if (bVar6 != 4) {
    pcVar7 = "completed.scopeGraphLaunch";
    uVar8 = 0xd00000000000001a;
  }
  uVar3 = 0xe900000000000064;
  uVar9 = 0x656c6c65636e6143;
  if (bVar6 != 3) {
    uVar3 = (ulong)pcVar7 | 0x8000000000000000;
    uVar9 = uVar8;
  }
  uVar1 = 0x800000010f1edba0;
  uVar8 = 0xd000000000000011;
  if (bVar6 != 1) {
    uVar1 = 0xee00646568636165;
    uVar8 = 0x5274756f656d6954;
  }
  uVar2 = 0xef746e6176656c65;
  uVar10 = 0x52747865746e6f43;
  if (bVar6 != 0) {
    uVar2 = uVar1;
    uVar10 = uVar8;
  }
  if (bVar6 < 3) {
    uVar3 = uVar2;
    uVar9 = uVar10;
  }
  (**(code **)(lVar5 + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined1 *)(unaff_x22 + 0x21),uVar9,uVar3,uVar4,lVar5);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001040bcf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x22),0);
  return;
}



/* Entry: 1040bcf18; end: 1040bcf5f;  */

void FUN_1040bcf18(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1040bd35c,*(undefined8 *)(lVar1 + 0x198),0);
  return;
}



/* Entry: 1040bcf60; end: 1040bcfaf;  */

void FUN_1040bcf60(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  _swift_taskGroup_initialize(unaff_x22 + 0x10,&UNK_110744d00);
  *(long *)(unaff_x22 + 0x148) = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040bcfb0,uVar1,0);
  return;
}



/* Entry: 1040bcfb0; end: 1040bd1af;  */

void FUN_1040bcfb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  code *pcVar10;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x1d2);
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar6 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  lVar7 = 0;
  __sScPMa();
  pcVar10 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  (*pcVar10)(uVar6,1,1,lVar7);
  puVar8 = &UNK_110744a60;
  _swift_allocObject(&UNK_110744a60,0x48,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x20) = uVar1;
  *(undefined8 *)(puVar8 + 0x28) = uVar2;
  *(undefined8 *)(puVar8 + 0x30) = uVar4;
  puVar8[0x38] = uVar5;
  *(undefined8 *)(puVar8 + 0x40) = uVar3;
  func_0x0001000ab9d4(uVar2,uVar4,uVar5);
  _swift_retain(uVar3);
  func_0x0001000ed8cc(uVar6,&UNK_10dcd5eb8,puVar8,&UNK_110744b00,&UNK_110744d00,&UNK_10dcd5ef8);
  func_0x0001000edad8(uVar6,0x112d453c8,&UNK_10d90ac60);
  _swift_task_dealloc(uVar6);
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  (*pcVar10)();
  puVar8 = &UNK_110744a88;
  _swift_allocObject(&UNK_110744a88,0x39,7);
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x20) = uVar3;
  *(undefined8 *)(puVar8 + 0x28) = uVar2;
  *(undefined8 *)(puVar8 + 0x30) = uVar4;
  puVar8[0x38] = uVar5;
  func_0x0001000ab9d4(uVar2,uVar4,uVar5);
  _swift_retain(uVar3);
  func_0x0001000ed8cc(uVar9,&UNK_10dcd5ec8,puVar8,&UNK_110744b00,&UNK_110744d00,&UNK_10dcd5ef8);
  func_0x0001000edad8(uVar9,0x112d453c8,&UNK_10d90ac60);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x1d1,unaff_x22 + 0x10,FUN_1040bd1b0,unaff_x22 + 0x150);
  return;
}



/* Entry: 1040bd1b0; end: 1040bd237;  */

void FUN_1040bd1b0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x1c0) = unaff_x20;
  lVar2 = *(long *)(unaff_x22 + 0x198);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1040bd238;
    uVar3 = 0;
  }
  else {
    if (lVar2 == 0) {
      lVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
      _swift_getObjectType(lVar2);
      __sScA15unownedExecutorScevgTj();
    }
    pcVar1 = FUN_1040bd340;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,lVar2,uVar3);
  return;
}



/* Entry: 1040bd238; end: 1040bd2bf;  */

void FUN_1040bd238(void)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x1d1);
  __sScG9cancelAllyyF(unaff_x22 + 0x10,&UNK_110744d00);
  cVar1 = '\x03';
  if (cVar2 != '\x06') {
    cVar1 = cVar2;
  }
  *(char *)(unaff_x22 + 0x1d0) = cVar1;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c8) = plVar3;
  func_0x0001000285a8(0x113060888,&UNK_10dcd5ed0);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1040bd2c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 1040bd2c0; end: 1040bd33f;  */

void FUN_1040bd2c0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1040bd304,*(undefined8 *)(lVar1 + 0x1b0),*(undefined8 *)(lVar1 + 0x1b8));
  return;
}



/* Entry: 1040bd340; end: 1040bd3cb;  */

void FUN_1040bd340(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unexpectedError_11034f528)
            (*(undefined8 *)(unaff_x22 + 0x1c0),"_Concurrency/arm64e-apple-ios.swiftinterface",0x2c,
             1,0xb9b);
  return;
}



/* Entry: 1040bd3cc; end: 1040bd51f;  */

void FUN_1040bd3cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    uVar1 = 0x1040bd428;
  }
  else {
    uVar1 = 0x1040bd4e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1040bd520; end: 1040bd597;  */

void FUN_1040bd520(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0xb0);
  uVar1 = uVar2;
  func_0x0001000ade28(uVar2,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                      *(undefined1 *)(unaff_x22 + 0x21));
  _swift_bridgeObjectRelease(uVar2);
  if ((uVar1 & 1) != 0) {
    **(undefined1 **)(unaff_x22 + 0x28) = 2;
                    /* WARNING: Could not recover jumptable at 0x0001040bd574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000f24b4,0,0);
  return;
}



/* Entry: 1040bd598; end: 1040bd643;  */

void FUN_1040bd598(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x0001000834e4(unaff_x20 + 0x98);
  _swift_release(*(undefined8 *)(unaff_x20 + 200));
  func_0x0001000d6e14(*(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040bd644; end: 1040bd857;  */

void FUN_1040bd644(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x22;
  
  lVar18 = *(long *)(unaff_x22 + 0xb8);
  func_0x0001000f11b0();
  uVar12 = param_1 - lVar18;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU);
  uVar12 = 0;
  if (!SBORROW8(param_1,lVar18)) {
    uVar12 = SUB168(auVar13 * ZEXT816(0x20c49ba5e353f7cf),8) >> 7;
  }
  bVar11 = *(byte *)(unaff_x22 + 0xc9);
  lVar18 = *(long *)(unaff_x22 + 0x70);
  uVar16 = *(undefined8 *)(lVar18 + 0xb0);
  lVar7 = *(long *)(lVar18 + 0xb8);
  lVar18 = lVar18 + 0x98;
  func_0x0001000a8868(lVar18,uVar16);
  pcVar14 = "CriticalSectionAllowListed";
  uVar6 = 0xd00000000000001d;
  if (bVar11 != 4) {
    pcVar14 = "completed.scopeGraphLaunch";
    uVar6 = 0xd00000000000001a;
  }
  uVar3 = 0xe900000000000064;
  uVar15 = 0x656c6c65636e6143;
  if (bVar11 != 3) {
    uVar3 = (ulong)pcVar14 | 0x8000000000000000;
    uVar15 = uVar6;
  }
  uVar1 = 0x800000010f1edba0;
  uVar6 = 0xd000000000000011;
  if (bVar11 != 1) {
    uVar1 = 0xee00646568636165;
    uVar6 = 0x5274756f656d6954;
  }
  uVar2 = 0xef746e6176656c65;
  uVar8 = 0x52747865746e6f43;
  if (bVar11 != 0) {
    uVar2 = uVar1;
    uVar8 = uVar6;
  }
  if (bVar11 < 3) {
    uVar3 = uVar2;
    uVar15 = uVar8;
  }
  puVar4 = *(undefined8 **)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar5 = *(long *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(lVar7 + 0x28))
            (lVar18,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined1 *)(unaff_x22 + 200),uVar9,uVar15,uVar3,*(undefined8 *)(unaff_x22 + 0x50),
             uVar12,uVar16,lVar7);
  _swift_bridgeObjectRelease(uVar3);
  (**(code **)(lVar5 + 8))(uVar9,uVar10);
  _swift_beginAccess(puVar4,unaff_x22 + 0x28,0,0);
  uVar16 = *puVar4;
  _objc_retain(uVar16);
  func_0x000100069b5c(uVar8);
  _objc_release(uVar16);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001040bd854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040bd858; end: 1040bd893;  */

void FUN_1040bd858(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040bd890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040bd894; end: 1040bd9a3;  */

void FUN_1040bd894(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 0x112da1578;
  func_0x0001000285a8(0x112da1578,&UNK_10dcd5b50);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar6 = uVar3 + 0x30 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0x112da1570;
  func_0x0001000285a8(0x112da1570,&UNK_10d944870);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar7 = uVar6 + lVar4 + uVar3 & (uVar3 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0x112da1580;
  func_0x0001000285a8(0x112da1580,&UNK_10d944880);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar2 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1040be0c8;
  plVar2[0x35] = unaff_x20 + uVar7;
  plVar2[0x36] = unaff_x20 + (uVar7 + lVar5 + uVar3 & (uVar3 ^ 0xffffffffffffffff));
  plVar2[0x33] = lVar4;
  plVar2[0x34] = unaff_x20 + uVar6;
  plVar2[0x32] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000da5c8,0,0);
  return;
}


