/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c2741c; end: 100c274df; -[SCAttributedBlockOperationProvider blockOperationWithCaller:extraAttribution:block:] */

void FUN_100c2741c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar3;
  undefined8 uVar2;
  
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174();
  iVar1 = (int)uVar2;
  func_0x000100b7e2f0();
  puVar3 = PTR_PTR_1126df8d0;
  if (iVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSBlockOperation_1126df8d8;
    func_0x000107c3eaf0(PTR__OBJC_CLASS___NSBlockOperation_1126df8d8,param_2,param_5);
    func_0x000107c61180();
  }
  else {
    uVar2 = param_4;
    func_0x000107c40794(param_4);
    func_0x000107c3eafc(puVar3,param_2,param_3,uVar2,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),param_5);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c274e0; end: 100c275d7; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl activeMaxFrameRateForDeviceAtPosition:] */

undefined8 FUN_100c274e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000100c2751c(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 100c275d8; end: 100c27633; -[SCCaptureSessionFixer setIsCameraRequestHandlerOn:] */

void FUN_100c275d8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100c722f4;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 100c27634; end: 100c2763f;  */

void FUN_100c27634(long param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if (param_2 == '\x01') {
    iVar2 = 2;
    lStack_d8 = param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_d8,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    lVar4 = 0;
    uStack_128 = uVar9;
    func_0x000107c5f9b4();
    lVar8 = *(long *)(lVar4 + -8);
    puStack_130 = (undefined1 *)&puStack_130;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar12 = (long)&puStack_130 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
    lVar11 = *(long *)(param_1 + 0x10);
    uVar9 = uStack_128;
    if (lVar11 != 0) {
      param_1 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
      lStack_108 = *(long *)(lVar8 + 0x48);
      pcStack_110 = *(code **)(lVar8 + 0x10);
      lStack_120 = lVar8;
      lStack_118 = lVar7;
      do {
        (*pcStack_110)(lVar12,param_1,lVar4);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar13 = lVar12 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar8 + 0x20))(lVar13,lVar12,lVar4);
        func_0x000102ab16a4(lVar13);
        func_0x000102ab367c(&lStack_d8);
        bVar1 = bStack_a8;
        if (bStack_a8 < 0xfe) {
          uStack_98 = uStack_d0;
          lStack_a0 = lStack_d8;
          uStack_88 = uStack_c0;
          uStack_90 = uStack_c8;
          uStack_78 = uStack_b0;
          uStack_80 = uStack_b8;
          func_0x000107c61428(lVar7 + 0x10,auStack_f0,0x21,0);
          uVar10 = *(ulong *)(lVar7 + 0x10);
          uVar5 = uVar10;
          func_0x000107c61558();
          *(ulong *)(lVar7 + 0x10) = uVar10;
          uVar6 = uVar10;
          if ((uVar5 & 1) == 0) {
            uVar6 = 0;
            func_0x000102ab193c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
            *(ulong *)(lVar7 + 0x10) = uVar6;
          }
          uVar5 = *(ulong *)(uVar6 + 0x10);
          uVar10 = uVar6;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
            uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x000102ab193c(uVar10,uVar5 + 1,1,uVar6);
          }
          lVar7 = lStack_118;
          *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
          lVar8 = uVar10 + uVar5 * 0x38;
          *(undefined8 *)(lVar8 + 0x38) = uStack_88;
          *(undefined8 *)(lVar8 + 0x30) = uStack_90;
          *(undefined8 *)(lVar8 + 0x48) = uStack_78;
          *(undefined8 *)(lVar8 + 0x40) = uStack_80;
          *(undefined8 *)(lVar8 + 0x28) = uStack_98;
          *(long *)(lVar8 + 0x20) = lStack_a0;
          *(byte *)(lVar8 + 0x50) = bVar1;
          *(ulong *)(lStack_118 + 0x10) = uVar10;
          func_0x000107c614a8(auStack_f0);
          lVar8 = lStack_120;
        }
        (**(code **)(lVar8 + 8))(lVar13,lVar4);
        param_1 = param_1 + lStack_108;
        lVar11 = lVar11 + -1;
        uVar9 = uStack_128;
      } while (lVar11 != 0);
    }
  }
  func_0x000107c60f3c(uVar9);
  return;
}



/* Entry: 100c27640; end: 100c278ef;  */

void FUN_100c27640(long param_1,char param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_f8 = param_4;
  if (param_2 == '\x01') {
    iVar2 = 2;
    lStack_d8 = param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_d8,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    lVar4 = 0;
    uStack_128 = param_3;
    func_0x000107c5f9b4();
    lVar7 = *(long *)(lVar4 + -8);
    puStack_130 = (undefined1 *)&puStack_130;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar10 = (long)&puStack_130 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
    lVar9 = *(long *)(param_1 + 0x10);
    param_3 = uStack_128;
    if (lVar9 != 0) {
      param_1 = param_1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
      lStack_108 = *(long *)(lVar7 + 0x48);
      pcStack_110 = *(code **)(lVar7 + 0x10);
      lStack_120 = lVar7;
      lStack_118 = param_5;
      do {
        (*pcStack_110)(lVar10,param_1,lVar4);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar11 = lVar10 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar7 + 0x20))(lVar11,lVar10,lVar4);
        func_0x000102ab16a4(lVar11);
        func_0x000102ab367c(&lStack_d8);
        bVar1 = bStack_a8;
        if (bStack_a8 < 0xfe) {
          uStack_98 = uStack_d0;
          lStack_a0 = lStack_d8;
          uStack_88 = uStack_c0;
          uStack_90 = uStack_c8;
          uStack_78 = uStack_b0;
          uStack_80 = uStack_b8;
          func_0x000107c61428(param_5 + 0x10,auStack_f0,0x21,0);
          uVar8 = *(ulong *)(param_5 + 0x10);
          uVar5 = uVar8;
          func_0x000107c61558();
          *(ulong *)(param_5 + 0x10) = uVar8;
          uVar6 = uVar8;
          if ((uVar5 & 1) == 0) {
            uVar6 = 0;
            func_0x000102ab193c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
            *(ulong *)(param_5 + 0x10) = uVar6;
          }
          uVar5 = *(ulong *)(uVar6 + 0x10);
          uVar8 = uVar6;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
            func_0x000102ab193c(uVar8,uVar5 + 1,1,uVar6);
          }
          param_5 = lStack_118;
          *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
          lVar7 = uVar8 + uVar5 * 0x38;
          *(undefined8 *)(lVar7 + 0x38) = uStack_88;
          *(undefined8 *)(lVar7 + 0x30) = uStack_90;
          *(undefined8 *)(lVar7 + 0x48) = uStack_78;
          *(undefined8 *)(lVar7 + 0x40) = uStack_80;
          *(undefined8 *)(lVar7 + 0x28) = uStack_98;
          *(long *)(lVar7 + 0x20) = lStack_a0;
          *(byte *)(lVar7 + 0x50) = bVar1;
          *(ulong *)(lStack_118 + 0x10) = uVar8;
          func_0x000107c614a8(auStack_f0);
          lVar7 = lStack_120;
        }
        (**(code **)(lVar7 + 8))(lVar11,lVar4);
        param_1 = param_1 + lStack_108;
        lVar9 = lVar9 + -1;
        param_3 = uStack_128;
      } while (lVar9 != 0);
    }
  }
  func_0x000107c60f3c(param_3);
  return;
}



/* Entry: 100c278f0; end: 100c27947;  */

void FUN_100c278f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c27948; end: 100c289af;  */

/* WARNING: Removing unreachable block (ram,0x000100c28370) */

void FUN_100c27948(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *unaff_x28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined1 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  uVar21 = 0;
  uVar16 = *(ulong *)(param_2 + 0x10);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar17 = uVar21;
    if (uVar21 <= uVar16) {
      uVar17 = uVar16;
    }
    puVar15 = (undefined8 *)(param_2 + uVar21 * 0x38);
    do {
      puVar10 = puVar15;
      if (uVar16 == uVar21) {
        uVar21 = 0;
        uVar17 = *(ulong *)(param_1 + 0x10);
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        goto LAB_100c27ab4;
      }
      uVar21 = uVar21 + 1;
      if (uVar17 + 1 == uVar21) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100c28354);
        (*pcVar9)();
      }
      puVar15 = puVar10 + 7;
      bVar5 = *(byte *)(puVar10 + 10);
      bVar8 = bVar5 >> 5;
    } while ((5 < bVar8) || (bVar8 == 1));
    uVar26 = puVar10[4];
    uVar3 = puVar10[5];
    unaff_x28 = (undefined8 *)puVar10[6];
    uVar4 = *puVar15;
    uVar2 = puVar10[8];
    uVar18 = puVar10[9];
    func_0x000102ab3218(uVar26,uVar3,unaff_x28);
    puVar11 = puVar20;
    func_0x000107c61558();
    puStack_1e8 = puVar20;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000102ab69e8(0,*(long *)(puVar20 + 0x10) + 1,1);
    }
    uVar17 = *(ulong *)(puStack_1e8 + 0x10);
    if (*(ulong *)(puStack_1e8 + 0x18) >> 1 <= uVar17) {
      func_0x000102ab69e8(1 < *(ulong *)(puStack_1e8 + 0x18),uVar17 + 1,1);
    }
    *(ulong *)(puStack_1e8 + 0x10) = uVar17 + 1;
    *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x20) = uVar26;
    *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x28) = uVar3;
    *(undefined8 **)(puStack_1e8 + uVar17 * 0x38 + 0x30) = unaff_x28;
    *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x38) = uVar4;
    *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x40) = uVar2;
    *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x48) = uVar18;
    puStack_1e8[uVar17 * 0x38 + 0x50] = bVar5;
    puVar20 = puStack_1e8;
  } while( true );
LAB_100c27ab4:
  uVar12 = uVar21;
  if (uVar21 <= uVar17) {
    uVar12 = uVar17;
  }
  puVar15 = (undefined8 *)(param_1 + uVar21 * 0x38);
  do {
    puVar10 = puVar15;
    if (uVar17 == uVar21) {
      uVar12 = *(ulong *)(puVar20 + 0x10);
      if (uVar12 == 0) goto LAB_100c27d44;
      uVar22 = 0;
      lVar13 = *(long *)(puVar11 + 0x10);
      goto LAB_100c27c64;
    }
    uVar21 = uVar21 + 1;
    if (uVar12 + 1 == uVar21) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100c28358);
      (*pcVar9)();
    }
    puVar15 = puVar10 + 7;
    bVar5 = *(byte *)(puVar10 + 10);
  } while ((5 < bVar5 >> 5) || (bVar5 >> 5 == 1));
  uVar26 = puVar10[4];
  uVar3 = puVar10[5];
  uVar2 = puVar10[6];
  uVar4 = *puVar15;
  unaff_x28 = (undefined8 *)puVar10[8];
  uVar18 = puVar10[9];
  func_0x000102ab3218(uVar26,uVar3,uVar2,uVar4,unaff_x28,uVar18,bVar5);
  puVar29 = puVar11;
  func_0x000107c61558();
  puStack_1e8 = puVar11;
  if (((ulong)puVar29 & 1) == 0) {
    func_0x000102ab69e8(0,*(long *)(puVar11 + 0x10) + 1,1);
  }
  uVar12 = *(ulong *)(puStack_1e8 + 0x10);
  if (*(ulong *)(puStack_1e8 + 0x18) >> 1 <= uVar12) {
    func_0x000102ab69e8(1 < *(ulong *)(puStack_1e8 + 0x18),uVar12 + 1,1);
  }
  *(ulong *)(puStack_1e8 + 0x10) = uVar12 + 1;
  *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x20) = uVar26;
  *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x28) = uVar3;
  *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x30) = uVar2;
  *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x38) = uVar4;
  *(undefined8 **)(puStack_1e8 + uVar12 * 0x38 + 0x40) = unaff_x28;
  *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x48) = uVar18;
  puStack_1e8[uVar12 * 0x38 + 0x50] = bVar5;
  puVar11 = puStack_1e8;
  goto LAB_100c27ab4;
LAB_100c27c64:
  do {
    if (*(ulong *)(puVar20 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100c2836c);
      (*pcVar9)();
    }
    pauVar14 = (undefined1 (*) [16])(puVar20 + uVar22 * 0x38 + 0x20);
    uStack_f0 = *(undefined8 *)*pauVar14;
    uStack_e8 = *(undefined8 *)(*pauVar14 + 8);
    uStack_d8 = *(undefined8 *)(pauVar14[1] + 8);
    uStack_e0 = *(undefined8 *)pauVar14[1];
    uStack_c8 = *(undefined8 *)(pauVar14[2] + 8);
    uStack_d0 = *(undefined8 *)pauVar14[2];
    uStack_c0 = pauVar14[3][0];
    pauVar1 = pauVar14 + 1;
    uVar26 = *(undefined8 *)*pauVar1;
    auVar7 = pauVar14[2];
    puVar29 = *(undefined **)*pauVar14;
    auVar23 = NEON_ext(auVar7,auVar7,8,1);
    auVar24 = NEON_ext(*pauVar1,*pauVar1,8,1);
    auVar25 = NEON_ext(*pauVar14,*pauVar14,8,1);
    bVar5 = pauVar14[3][0];
    uVar22 = uVar22 + 1;
    func_0x000102ab3254(&uStack_f0,&puStack_1e8);
    uVar19 = 0xffffffffffffffff;
    puVar15 = (undefined8 *)(puVar11 + 0x20);
    do {
      if (uVar19 - lVar13 == -1) {
        func_0x000102ab10f0(&uStack_f0);
        uStack_1b8 = (ulong)bVar5 & 0xffffffffffffffe1;
        uVar6 = (uint)uVar21 & 0xffffffe1;
        uVar21 = (ulong)uVar6;
        uStack_180 = (undefined1)uVar6;
        puStack_1e8 = puVar29;
        uStack_1e0 = auVar25._0_8_;
        uStack_1d8 = uVar26;
        uStack_1d0 = auVar24._0_8_;
        uStack_1c8 = auVar7._0_8_;
        uStack_1c0 = auVar23._0_8_;
        func_0x0001002a64a8(&puStack_1e8);
        func_0x000102ab32c4(&puStack_1e8);
        goto LAB_100c27c54;
      }
      uVar19 = uVar19 + 1;
      if (*(ulong *)(puVar11 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100c2834c);
        (*pcVar9)();
      }
      unaff_x28 = puVar15 + 7;
      uStack_b0 = *puVar15;
      uStack_a8 = puVar15[1];
      uStack_98 = puVar15[3];
      uStack_a0 = puVar15[2];
      uStack_88 = puVar15[5];
      uStack_90 = puVar15[4];
      uStack_80 = *(undefined1 *)(puVar15 + 6);
      func_0x000102ab3254(&uStack_b0,&puStack_1e8);
      puVar10 = &uStack_b0;
      func_0x000102ab88fc(puVar10,&uStack_f0);
      func_0x000102ab3290(&uStack_b0);
      puVar15 = unaff_x28;
    } while (((ulong)puVar10 & 1) == 0);
    func_0x000102ab3290(&uStack_f0);
LAB_100c27c54:
  } while (uVar22 != uVar12);
LAB_100c27d44:
  uVar21 = *(ulong *)(puVar11 + 0x10);
  if (uVar21 != 0) {
    uVar22 = 0;
    do {
      if (*(ulong *)(puVar11 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100c28370);
        (*pcVar9)();
      }
      pauVar14 = (undefined1 (*) [16])(puVar11 + uVar22 * 0x38 + 0x20);
      uStack_170 = *(undefined8 *)*pauVar14;
      uStack_168 = *(undefined8 *)(*pauVar14 + 8);
      uStack_158 = *(undefined8 *)(pauVar14[1] + 8);
      uStack_160 = *(undefined8 *)pauVar14[1];
      uStack_148 = *(undefined8 *)(pauVar14[2] + 8);
      uStack_150 = *(undefined8 *)pauVar14[2];
      uStack_140 = pauVar14[3][0];
      pauVar1 = pauVar14 + 1;
      uVar26 = *(undefined8 *)*pauVar1;
      auVar7 = pauVar14[2];
      puVar29 = *(undefined **)*pauVar14;
      auVar23 = NEON_ext(auVar7,auVar7,8,1);
      auVar24 = NEON_ext(*pauVar1,*pauVar1,8,1);
      auVar25 = NEON_ext(*pauVar14,*pauVar14,8,1);
      bVar5 = pauVar14[3][0];
      uVar22 = uVar22 + 1;
      func_0x000102ab3254(&uStack_170,&puStack_1e8);
      uVar19 = 0xffffffffffffffff;
      puVar15 = (undefined8 *)(puVar20 + 0x20);
      do {
        if (uVar19 - uVar12 == -1) {
          func_0x000102ab1224(&uStack_170);
          uStack_1b8 = (ulong)bVar5 & 0xffffffffffffffe1;
          uVar6 = (uint)unaff_x28 & 0xffffffe1 | 8;
          unaff_x28 = (undefined8 *)(ulong)uVar6;
          uStack_180 = (undefined1)uVar6;
          puStack_1e8 = puVar29;
          uStack_1e0 = auVar25._0_8_;
          uStack_1d8 = uVar26;
          uStack_1d0 = auVar24._0_8_;
          uStack_1c8 = auVar7._0_8_;
          uStack_1c0 = auVar23._0_8_;
          func_0x0001002a64a8(&puStack_1e8);
          func_0x000102ab32c4(&puStack_1e8);
          goto LAB_100c27dd4;
        }
        uVar19 = uVar19 + 1;
        if (*(ulong *)(puVar20 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100c28350);
          (*pcVar9)();
        }
        uStack_130 = *puVar15;
        uStack_128 = puVar15[1];
        uStack_118 = puVar15[3];
        uStack_120 = puVar15[2];
        uStack_108 = puVar15[5];
        uStack_110 = puVar15[4];
        uStack_100 = *(undefined1 *)(puVar15 + 6);
        func_0x000102ab3254(&uStack_130,&puStack_1e8);
        puVar10 = &uStack_130;
        func_0x000102ab88fc(puVar10,&uStack_170);
        func_0x000102ab3290(&uStack_130);
        puVar15 = puVar15 + 7;
      } while (((ulong)puVar10 & 1) == 0);
      func_0x000102ab3290(&uStack_170);
LAB_100c27dd4:
    } while (uVar22 != uVar21);
  }
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar20);
  uVar21 = 0;
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar12 = uVar21;
    if (uVar21 <= uVar17) {
      uVar12 = uVar17;
    }
    puVar15 = (undefined8 *)(param_1 + uVar21 * 0x38);
    do {
      puVar10 = puVar15;
      if (uVar17 == uVar21) {
        uVar21 = 0;
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          uVar12 = uVar21;
          if (uVar21 <= uVar16) {
            uVar12 = uVar16;
          }
          puVar15 = (undefined8 *)(param_2 + uVar21 * 0x38);
          do {
            puVar10 = puVar15;
            if (uVar16 == uVar21) {
              func_0x000100c2837c(puVar20,puVar11);
              func_0x000107c61574(puVar20);
              func_0x000107c61574(puVar11);
              uVar21 = 0;
              puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
              do {
                uVar12 = uVar21;
                if (uVar21 <= uVar17) {
                  uVar12 = uVar17;
                }
                puVar15 = (undefined8 *)(param_1 + uVar21 * 0x38);
                do {
                  puVar10 = puVar15;
                  if (uVar17 == uVar21) {
                    puStack_1e8 = puVar20;
                    func_0x000107c6157c(puVar20);
                    FUN_100c289b0(&puStack_1e8);
                    func_0x000107c61574(puVar20);
                    puVar20 = puStack_1e8;
                    uVar21 = 0;
                    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    do {
                      uVar17 = uVar21;
                      if (uVar21 <= uVar16) {
                        uVar17 = uVar16;
                      }
                      puVar15 = (undefined8 *)(param_2 + uVar21 * 0x38);
                      do {
                        puVar10 = puVar15;
                        if (uVar16 == uVar21) {
                          puStack_1e8 = puVar11;
                          func_0x000107c6157c(puVar11);
                          FUN_100c289b0(&puStack_1e8);
                          func_0x000107c61574(puVar11);
                          puVar11 = puStack_1e8;
                          func_0x000100c2837c(puVar20,puStack_1e8);
                          func_0x000107c61574(puVar20);
                          func_0x000107c61574(puVar11);
                          return;
                        }
                        uVar21 = uVar21 + 1;
                        if (uVar17 + 1 == uVar21) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)SoftwareBreakpoint(1,0x100c28368);
                          (*pcVar9)();
                        }
                        puVar15 = puVar10 + 7;
                        bVar5 = *(byte *)(puVar10 + 10);
                      } while ((bVar5 & 0xe0) != 0xc0);
                      uVar28 = *puVar15;
                      uVar27 = puVar10[6];
                      uVar3 = puVar10[4];
                      uVar4 = puVar10[5];
                      uVar26 = *puVar15;
                      uVar2 = puVar10[8];
                      uVar18 = puVar10[9];
                      func_0x000107c61434(uVar18);
                      func_0x000107c61434(uVar26);
                      puVar29 = puVar11;
                      func_0x000107c61558();
                      puStack_1e8 = puVar11;
                      if (((ulong)puVar29 & 1) == 0) {
                        func_0x000102ab69e8(0,*(long *)(puVar11 + 0x10) + 1,1);
                      }
                      uVar17 = *(ulong *)(puStack_1e8 + 0x10);
                      if (*(ulong *)(puStack_1e8 + 0x18) >> 1 <= uVar17) {
                        func_0x000102ab69e8(1 < *(ulong *)(puStack_1e8 + 0x18),uVar17 + 1,1);
                      }
                      *(ulong *)(puStack_1e8 + 0x10) = uVar17 + 1;
                      *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x28) = uVar4;
                      *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x20) = uVar3;
                      *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x38) = uVar28;
                      *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x30) = uVar27;
                      *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x40) = uVar2;
                      *(undefined8 *)(puStack_1e8 + uVar17 * 0x38 + 0x48) = uVar18;
                      puStack_1e8[uVar17 * 0x38 + 0x50] = bVar5;
                      puVar11 = puStack_1e8;
                    } while( true );
                  }
                  uVar21 = uVar21 + 1;
                  if (uVar12 + 1 == uVar21) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x100c28364);
                    (*pcVar9)();
                  }
                  puVar15 = puVar10 + 7;
                  bVar5 = *(byte *)(puVar10 + 10);
                } while ((bVar5 & 0xe0) != 0xc0);
                uVar28 = *puVar15;
                uVar27 = puVar10[6];
                uVar3 = puVar10[4];
                uVar4 = puVar10[5];
                uVar26 = *puVar15;
                uVar2 = puVar10[8];
                uVar18 = puVar10[9];
                func_0x000107c61434(uVar18);
                func_0x000107c61434(uVar26);
                puVar11 = puVar20;
                func_0x000107c61558();
                puStack_1e8 = puVar20;
                if (((ulong)puVar11 & 1) == 0) {
                  func_0x000102ab69e8(0,*(long *)(puVar20 + 0x10) + 1,1);
                }
                uVar12 = *(ulong *)(puStack_1e8 + 0x10);
                if (*(ulong *)(puStack_1e8 + 0x18) >> 1 <= uVar12) {
                  func_0x000102ab69e8(1 < *(ulong *)(puStack_1e8 + 0x18),uVar12 + 1,1);
                }
                *(ulong *)(puStack_1e8 + 0x10) = uVar12 + 1;
                *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x28) = uVar4;
                *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x20) = uVar3;
                *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x38) = uVar28;
                *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x30) = uVar27;
                *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x40) = uVar2;
                *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x48) = uVar18;
                puStack_1e8[uVar12 * 0x38 + 0x50] = bVar5;
                puVar20 = puStack_1e8;
              } while( true );
            }
            uVar21 = uVar21 + 1;
            if (uVar12 + 1 == uVar21) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100c28360);
              (*pcVar9)();
            }
            puVar15 = puVar10 + 7;
            bVar5 = *(byte *)(puVar10 + 10);
          } while ((bVar5 & 0xe0) != 0x20);
          uVar28 = *puVar15;
          uVar27 = puVar10[6];
          uVar3 = puVar10[4];
          uVar4 = puVar10[5];
          uVar26 = *puVar15;
          uVar2 = puVar10[8];
          uVar18 = puVar10[9];
          func_0x000107c61434(uVar18);
          func_0x000107c61434(uVar26);
          puVar29 = puVar11;
          func_0x000107c61558();
          puStack_1e8 = puVar11;
          if (((ulong)puVar29 & 1) == 0) {
            func_0x000102ab69e8(0,*(long *)(puVar11 + 0x10) + 1,1);
          }
          uVar12 = *(ulong *)(puStack_1e8 + 0x10);
          if (*(ulong *)(puStack_1e8 + 0x18) >> 1 <= uVar12) {
            func_0x000102ab69e8(1 < *(ulong *)(puStack_1e8 + 0x18),uVar12 + 1,1);
          }
          *(ulong *)(puStack_1e8 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x28) = uVar4;
          *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x20) = uVar3;
          *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x38) = uVar28;
          *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x30) = uVar27;
          *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x40) = uVar2;
          *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x48) = uVar18;
          puStack_1e8[uVar12 * 0x38 + 0x50] = bVar5;
          puVar11 = puStack_1e8;
        } while( true );
      }
      uVar21 = uVar21 + 1;
      if (uVar12 + 1 == uVar21) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100c2835c);
        (*pcVar9)();
      }
      puVar15 = puVar10 + 7;
      bVar5 = *(byte *)(puVar10 + 10);
    } while ((bVar5 & 0xe0) != 0x20);
    uVar28 = *puVar15;
    uVar27 = puVar10[6];
    uVar3 = puVar10[4];
    uVar4 = puVar10[5];
    uVar26 = *puVar15;
    uVar2 = puVar10[8];
    uVar18 = puVar10[9];
    func_0x000107c61434(uVar18);
    func_0x000107c61434(uVar26);
    puVar11 = puVar20;
    func_0x000107c61558();
    puStack_1e8 = puVar20;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000102ab69e8(0,*(long *)(puVar20 + 0x10) + 1,1);
    }
    uVar12 = *(ulong *)(puStack_1e8 + 0x10);
    if (*(ulong *)(puStack_1e8 + 0x18) >> 1 <= uVar12) {
      func_0x000102ab69e8(1 < *(ulong *)(puStack_1e8 + 0x18),uVar12 + 1,1);
    }
    *(ulong *)(puStack_1e8 + 0x10) = uVar12 + 1;
    *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x28) = uVar4;
    *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x20) = uVar3;
    *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x38) = uVar28;
    *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x30) = uVar27;
    *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x40) = uVar2;
    *(undefined8 *)(puStack_1e8 + uVar12 * 0x38 + 0x48) = uVar18;
    puStack_1e8[uVar12 * 0x38 + 0x50] = bVar5;
    puVar20 = puStack_1e8;
  } while( true );
}



/* Entry: 100c289b0; end: 100c28aab;  */

void FUN_100c289b0(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_100c28aac();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,&UNK_110593b90);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    func_0x000102ab1bf8(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    func_0x000102ab256c(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 100c28aac; end: 100c28abf;  */

/* WARNING: Removing unreachable block (ram,0x000100c28adc) */
/* WARNING: Removing unreachable block (ram,0x000100c28aec) */
/* WARNING: Removing unreachable block (ram,0x000100c28bdc) */
/* WARNING: Removing unreachable block (ram,0x000100c28af8) */
/* WARNING: Removing unreachable block (ram,0x000100c28b00) */
/* WARNING: Removing unreachable block (ram,0x000100c28b8c) */
/* WARNING: Removing unreachable block (ram,0x000100c28b9c) */
/* WARNING: Removing unreachable block (ram,0x000100c28ba0) */
/* WARNING: Removing unreachable block (ram,0x000100c28ba4) */
/* WARNING: Removing unreachable block (ram,0x000100c28ba8) */

undefined * FUN_100c28aac(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar4) {
    lVar1 = lVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112ee8aa8;
    func_0x0001000285a8(0x112ee8aa8,&UNK_10db15dc0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar4;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x38) * 2;
  }
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar4,&UNK_110593b90);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 100c28ac0; end: 100c28bdf;  */

undefined * FUN_100c28ac0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c28be0);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112ee8aa8;
    func_0x0001000285a8(0x112ee8aa8,&UNK_10db15dc0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x38) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110593b90);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x38 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 100c28be0; end: 100c28e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c28be0(undefined *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  func_0x00010006f5b0(param_1,param_3);
  if (((ulong)puVar8 & 1) != 0) goto LAB_100c28e04;
  puVar2 = param_1;
  func_0x000107c3fa20();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61158();
  if (puVar2 == puVar3) {
    lVar11 = *(long *)(param_3 + _DAT_11279627c);
    lVar4 = lVar11;
    func_0x000107c60790(lVar11);
    func_0x000107c60798(lVar11,param_1,lVar4 + 1);
  }
  func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
  uVar5 = *(ulong *)(param_3 + _DAT_112796278);
  func_0x000107c4adac();
  if ((uVar5 & 3) != 0) {
    func_0x000107c45310(*(undefined8 *)(param_3 + _DAT_112796278));
  }
  puVar6 = param_1;
  func_0x000107c40808();
  func_0x000107c3deec(*(undefined8 *)(param_3 + _DAT_112796278));
  puVar7 = param_1;
  func_0x000107c4080c();
  lVar4 = lRam0000000000000000;
  if (puVar7 == (undefined *)0x0) {
    if (puVar6 != (undefined *)0x0) goto LAB_100c28dbc;
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar11 = 0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        lVar12 = lVar11;
        if (lRam0000000000000000 != lVar4) {
          func_0x000107c61128(param_1);
        }
        puVar8 = *(undefined **)((long)puVar10 * 8);
        if (puVar8 == (undefined *)0x0) {
          puVar8 = *(undefined **)(param_3 + _DAT_112796278);
          func_0x000107c3deec();
        }
        else {
          func_0x000107c3ab6c();
        }
        if (puVar6 <= (undefined *)(lVar12 + 1U)) goto LAB_100c28dac;
        lVar11 = lVar12 + 1;
        puVar10 = puVar10 + 1;
      } while (puVar7 != puVar10);
      puVar7 = param_1;
      func_0x000107c4080c();
    } while (puVar7 != (undefined *)0x0);
    puVar8 = (undefined *)0x0;
LAB_100c28dac:
    bVar1 = (undefined *)(lVar12 + 1) <= puVar6;
    puVar6 = puVar6 + -(lVar12 + 1);
    if (bVar1 && puVar6 != (undefined *)0x0) {
LAB_100c28dbc:
      do {
        puVar8 = *(undefined **)(param_3 + _DAT_112796278);
        func_0x000107c3deec();
        puVar6 = puVar6 + -1;
      } while (puVar6 != (undefined *)0x0);
    }
  }
  if (puVar2 != puVar3) {
    puVar8 = *(undefined **)(param_3 + _DAT_11279627c);
    puVar2 = puVar8;
    func_0x000107c60790(puVar8);
    func_0x000107c60798(puVar8,param_1,puVar2 + 1);
  }
LAB_100c28e04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(puVar8 + 0x28));
  return;
}



/* Entry: 100c28e50; end: 100c28e5b;  */

void FUN_100c28e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c28e5c; end: 100c28e7f;  */

void FUN_100c28e5c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c28e80; end: 100c28e8b;  */

void FUN_100c28e80(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_100c28f24();
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      func_0x000107c5f9c4(0);
      func_0x000107c5f9c0();
      func_0x000107c6157c(uVar1);
      func_0x000107c5f9bc(&UNK_102ab6984,uVar1);
      func_0x000107c61574(uVar3);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100c28e8c; end: 100c28f23;  */

void FUN_100c28e8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_100c28f24();
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      func_0x000107c5f9c4(0);
      func_0x000107c5f9c0();
      func_0x000107c6157c(uVar1);
      func_0x000107c5f9bc(&UNK_102ab6984,uVar1);
      func_0x000107c61574(uVar3);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100c28f24; end: 100c29257;  */

uint FUN_100c28f24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar1 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar9 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12_01;
  lVar12 = *(long *)(unaff_x20 + 0x20);
  lVar3 = lVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f0e6590);
    lVar5 = lVar3;
    lStack_70 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar1 = lStack_70;
    func_0x000107c61170(uVar4);
    if (lVar5 != 0) {
      uVar4 = 0x112d373e8;
      lStack_68 = lVar5;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar3 = lVar13;
      func_0x000107c6147c(lVar13,&lStack_68,uVar4,lVar2,6);
      pcVar8 = *(code **)(lVar10 + 0x38);
      uVar7 = (uint)lVar3 ^ 1;
      goto LAB_100c290f4;
    }
  }
  pcVar8 = *(code **)(lVar10 + 0x38);
  uVar7 = 1;
LAB_100c290f4:
  (*pcVar8)(lVar13,uVar7,1,lVar2);
  func_0x0001003a4c00(lVar13,lVar1);
  pcVar8 = *(code **)(lVar10 + 0x30);
  lVar3 = lVar1;
  (*pcVar8)(lVar1,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000107c5ee88(lVar11,0);
    lVar3 = lVar1;
    (*pcVar8)(lVar1,1,lVar2);
    if ((int)lVar3 != 1) {
      func_0x0001000d1dcc(lVar1);
    }
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar11,lVar1,lVar2);
  }
  func_0x000107c5ee6c(lVar14,0x40f5180000000000);
  func_0x000107c5eea0(uVar9);
  uVar6 = uVar9;
  func_0x000107c5ee74(uVar9,lVar14);
  if ((uVar6 & 1) != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar12 != 0) {
      lVar1 = lVar12;
      func_0x000107c5ee70();
      uVar4 = 0xd00000000000002b;
      func_0x000107c5fadc(0xd00000000000002b,0x800000010f0e6590);
      func_0x000107c56bcc(lVar12);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar4);
    }
  }
  pcVar8 = *(code **)(lVar10 + 8);
  (*pcVar8)(uVar9,lVar2);
  (*pcVar8)(lVar14,lVar2);
  (*pcVar8)(lVar11,lVar2);
  return (uint)uVar6 & 1;
}



/* Entry: 100c29258; end: 100c29263;  */

void FUN_100c29258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c29264; end: 100c29287;  */

void FUN_100c29264(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c29288; end: 100c292e7; -[SIGLegacyContainerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c5df30(*(undefined8 *)(param_1 + _DAT_11273c8f8),param_2,param_1,param_3);
  puStack_28 = PTR_PTR_1126eef30;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 100c292e8; end: 100c29377; -[SCContainerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c292e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c5df30(*(undefined8 *)(param_1 + _DAT_11278c710),param_2,param_1,param_3);
  lVar1 = param_1;
  func_0x000107c5d1bc(param_1);
  func_0x000107c61180();
  func_0x000107c403b4();
  func_0x000107c61170(lVar1);
  puStack_38 = PTR_PTR_112705608;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 100c29378; end: 100c29397; -[SCContainerViewController uikitAppearanceMethodsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29378(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_11278c74c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c29398; end: 100c29503; -[SCRootContainer containerVC:viewWillAppearAnimated:] */

/* WARNING: Possible PIC construction at 0x000100c29410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c294cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c294dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c29414) */
/* WARNING: Removing unreachable block (ram,0x000100c29418) */
/* WARNING: Removing unreachable block (ram,0x000100c294d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29398(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x000107c4acbc();
  func_0x000107c61180();
  if ((uVar1 != param_1) && (uVar2 = uVar1, func_0x000107c499a8(), (uVar2 & 1) == 0)) {
    uVar2 = uVar1;
    func_0x000107c4f07c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d8a8();
    if ((uVar3 & 1) == 0) {
      func_0x000107c4a620(*(undefined8 *)(param_1 + (long)_DAT_11278c524));
      uVar1 = uVar2;
    }
    else {
      func_0x000107c61170(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c29504; end: 100c2984f; -[SCCameraViewControllerStartupWorkflow resetView:] */

/* WARNING: Possible PIC construction at 0x000100c29584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c295c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c295f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c296c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2977c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c297cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c297dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c29804) */
/* WARNING: Removing unreachable block (ram,0x000100c29828) */
/* WARNING: Removing unreachable block (ram,0x000100c29808) */
/* WARNING: Removing unreachable block (ram,0x000100c297d0) */
/* WARNING: Removing unreachable block (ram,0x000100c29780) */
/* WARNING: Removing unreachable block (ram,0x000100c297e0) */
/* WARNING: Removing unreachable block (ram,0x000100c29784) */
/* WARNING: Removing unreachable block (ram,0x000100c29734) */
/* WARNING: Removing unreachable block (ram,0x000100c29738) */
/* WARNING: Removing unreachable block (ram,0x000100c29704) */
/* WARNING: Removing unreachable block (ram,0x000100c296c4) */
/* WARNING: Removing unreachable block (ram,0x000100c2975c) */
/* WARNING: Removing unreachable block (ram,0x000100c296d0) */
/* WARNING: Removing unreachable block (ram,0x000100c29688) */
/* WARNING: Removing unreachable block (ram,0x000100c2962c) */
/* WARNING: Removing unreachable block (ram,0x000100c295fc) */
/* WARNING: Removing unreachable block (ram,0x000100c295c8) */
/* WARNING: Removing unreachable block (ram,0x000100c29588) */
/* WARNING: Removing unreachable block (ram,0x000100c29838) */

void FUN_100c29504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c5bcc0(param_3);
  func_0x000107c61180();
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  func_0x000107c3f268();
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c52634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c29850; end: 100c2985b; -[SCCameraVerticalToolbar updateToolbarPositionAnimated:duration:] */

void FUN_100c29850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reloadToolbar_duration_addition_112580538,param_3,0,0);
  return;
}



/* Entry: 100c2985c; end: 100c2988b;  */

bool FUN_100c2985c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c2988c; end: 100c2996b;  */

void FUN_100c2988c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c79b8;
    func_0x000107c610f4(PTR_PTR_1126c79b8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3f300(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c4fab8(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x000107c3f0fc(uVar4);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126b9b20;
    func_0x000107c4064c(PTR_PTR_1126b9b20);
    func_0x000107c45cac(puVar6,param_2,uVar1,uVar3,uVar4,puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100c2996c; end: 100c29a3f; -[SCFeatureContainerViewRemoteImpl initWithCameraViewType:cameraRecordingDurationConfig:cameraHardwareServicesAPI:shouldRestoreGesturesOnVideoFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c2996c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126efe08;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127405d8) = param_3;
    lVar3 = (long)_DAT_1127405dc;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_1127405e0;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127405e4) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100c29a40; end: 100c29a77; -[SCFeatureContainerViewRemoteImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127405e8);
  *(undefined8 *)(param_1 + _DAT_1127405e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c29a78; end: 100c29a9b; -[SCFeatureContainerViewRemoteImpl resetView] */

void FUN_100c29a78(undefined8 param_1)

{
  func_0x000107c3c350();
                    /* WARNING: Could not recover jumptable at 0x00010be04670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayHelpIfNecessary_11255eb38);
  return;
}



/* Entry: 100c29a9c; end: 100c29b03; -[SCFeatureContainerViewRemoteImpl _resetCameraTimerState] */

/* WARNING: Possible PIC construction at 0x000100c29ac8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29a9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127405f0;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127405e8);
    func_0x000107c3f250(uVar1);
    func_0x000107c61180();
    func_0x000107c530d0();
  }
  else {
    func_0x000107c60f28();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c29b04; end: 100c29d2b; -[SCCameraTimerImpl setCameraTimerState:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29b04(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  if ((*(long *)(param_2 + _DAT_1127629cc) != param_4) ||
     (*(char *)(param_2 + _DAT_112762990) == '\x01')) {
    *(long *)(param_2 + _DAT_1127629cc) = param_4;
    if ((param_4 - 3U < 2) || (param_4 == 1)) {
      lVar2 = (long)_DAT_1127629b8;
      lVar3 = (long)_DAT_112762994;
      func_0x000107c53950(*(undefined8 *)(param_2 + lVar2),param_3,*(long *)(param_2 + lVar3) == 4);
      func_0x000107c4fe68(*(undefined8 *)(param_2 + lVar2));
      func_0x000107c5a03c(*(undefined8 *)(param_2 + _DAT_1127629c0));
      bVar1 = *(long *)(param_2 + lVar3) != 4;
      if (bVar1) {
        func_0x000107c3c50c(param_2);
      }
      else {
        func_0x000107c42914(*(undefined8 *)(param_2 + lVar2));
      }
      *(bool *)(param_2 + _DAT_112762990) = !bVar1;
      if (*(long *)(param_2 + lVar3) == 6) {
        func_0x000107c42b64(*(undefined8 *)(param_2 + lVar2));
      }
      func_0x000107c57c0c(param_2);
      func_0x000107c550d8(*(undefined8 *)(param_2 + _DAT_1127629d0));
    }
    else if (param_4 == 2) {
      lVar2 = (long)_DAT_112762990;
      if (*(char *)(param_2 + lVar2) == '\x01') {
        lVar3 = (long)_DAT_1127629b8;
        func_0x000107c42b64(*(undefined8 *)(param_2 + lVar3),param_3,param_5);
        func_0x000107c5badc(*(undefined8 *)(param_2 + lVar3));
      }
      func_0x000107c550d8(*(undefined8 *)(param_2 + _DAT_1127629d0));
      func_0x000107c3c50c(param_2);
      lVar3 = param_2;
      func_0x000107c3c758();
      if ((int)lVar3 == 0) {
        if ((*(char *)(param_2 + lVar2) == '\x01') &&
           (lVar2 = param_2, func_0x000107c3b1a4(), (int)lVar2 != 0)) {
          param_1 = 0.8;
        }
        else {
          func_0x000107c3afc4(param_2);
          dVar4 = param_1;
          func_0x000107c3f1b8(*(undefined8 *)(param_2 + _DAT_1127629b0));
          param_1 = param_1 / (dVar4 + -4.0);
        }
      }
      else {
        param_1 = 0.0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf02f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,PTR_s_animateLensAssetToScale__11259e568);
      return;
    }
  }
  return;
}



/* Entry: 100c29d2c; end: 100c29d3b; -[SCCameraTimerCoolRecordingRingView setContinuousCaptureStateIsPaused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29d2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276310c) = param_3;
  return;
}



/* Entry: 100c29d3c; end: 100c29d67; -[SCCameraTimerCoolRecordingRingView removeAllAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29d3c(long param_1)

{
  func_0x000107c3ba2c();
                    /* WARNING: Could not recover jumptable at 0x00010c12e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127630f4),PTR_s_removeSpinnerAnimations_112629320);
  return;
}



/* Entry: 100c29d68; end: 100c29dcb; -[SCCameraTimerSpinnerView removeSpinnerAnimations] */

/* WARNING: Possible PIC construction at 0x000100c29d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c29d8c) */
/* WARNING: Removing unreachable block (ram,0x000100c29dac) */

void FUN_100c29d68(void)

{
  func_0x000107c4aba4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010c12aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100c29dcc; end: 100c29edf; -[SCCameraTimerImpl setRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29dcc(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = (long)_DAT_1127629e4;
  if (*(byte *)(param_2 + lVar2) == param_4) {
    return;
  }
  if (param_4 != 0) {
    func_0x000107c6071c();
    *(undefined8 *)(param_2 + _DAT_1127629e8) = param_1;
  }
  *(char *)(param_2 + lVar2) = (char)param_4;
  lVar4 = (long)_DAT_1127629c4;
  func_0x000107c526c0((double)param_4,*(undefined8 *)(param_2 + lVar4));
  cVar1 = *(char *)(param_2 + lVar2);
  lVar2 = *(long *)(param_2 + lVar4);
  if (cVar1 == '\x01') {
    if (lVar2 == 0) {
      func_0x000107c3c16c(param_2);
      lVar2 = *(long *)(param_2 + lVar4);
    }
    func_0x000107c4c8c4(param_2);
    func_0x000107c5bbc4(lVar2);
    uVar3 = *(undefined8 *)(param_2 + _DAT_1127629b8);
    func_0x000107c4c8c4(param_2);
    func_0x000107c5bb80(uVar3);
    if (*(long *)(param_2 + _DAT_11276296c) != 9) {
      return;
    }
    func_0x000107c5bb7c(*(undefined8 *)(param_2 + _DAT_1127629b4));
  }
  else {
    func_0x000107c50008(lVar2);
    func_0x000107c5056c(*(undefined8 *)(param_2 + _DAT_1127629b4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a5530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setHandsFreeRecordingStopButtonV_112646f68,cVar1);
  return;
}



/* Entry: 100c29ee0; end: 100c29f03; -[SCFeatureContainerViewRemoteImpl _displayHelpIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29ee0(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127405d8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c138450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127405e8),
             PTR_s_resetCameraHelpTooltipVisibility_11262bb30);
  return;
}



/* Entry: 100c29f04; end: 100c2a0db; -[SCCameraOverlayView resetCameraHelpTooltipVisibility] */

/* WARNING: Possible PIC construction at 0x000100c29f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c29fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2a010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c29fbc) */
/* WARNING: Removing unreachable block (ram,0x000100c29f64) */
/* WARNING: Removing unreachable block (ram,0x000100c29fc8) */
/* WARNING: Removing unreachable block (ram,0x000100c29fcc) */
/* WARNING: Removing unreachable block (ram,0x000100c29f90) */
/* WARNING: Removing unreachable block (ram,0x000100c29fe8) */
/* WARNING: Removing unreachable block (ram,0x000100c29ff4) */
/* WARNING: Removing unreachable block (ram,0x000100c2a014) */
/* WARNING: Removing unreachable block (ram,0x000100c2a058) */
/* WARNING: Removing unreachable block (ram,0x000100c2a094) */
/* WARNING: Removing unreachable block (ram,0x000100c2a064) */
/* WARNING: Removing unreachable block (ram,0x000107c3b970) */
/* WARNING: Removing unreachable block (ram,0x00010be355a0) */
/* WARNING: Removing unreachable block (ram,0x000100c2a030) */
/* WARNING: Removing unreachable block (ram,0x000100c2a07c) */
/* WARNING: Removing unreachable block (ram,0x000107c3b974) */
/* WARNING: Removing unreachable block (ram,0x00010be355c0) */
/* WARNING: Removing unreachable block (ram,0x000100c2a034) */
/* WARNING: Removing unreachable block (ram,0x000100c2a0a8) */
/* WARNING: Removing unreachable block (ram,0x000100c2a048) */
/* WARNING: Removing unreachable block (ram,0x000100c2a0b4) */
/* WARNING: Removing unreachable block (ram,0x000100c29ff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c29f04(long param_1)

{
  param_1 = param_1 + _DAT_11276283c;
  func_0x000107c61148();
  func_0x000107c4b064();
  func_0x000107c61180();
  func_0x000107c3e114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c2a0dc; end: 100c2a173; -[SCCameraViewControllerLensDelegateHandler areLensesOnboardingTooltipsCompleted] */

undefined8 FUN_100c2a0dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b5d8();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c49fc8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar5;
}



/* Entry: 100c2a174; end: 100c2a17b; -[SCMutablePublicCameraFeatureCatalog lensesTooltip] */

undefined8 FUN_100c2a174(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 100c2a17c; end: 100c2a1ab;  */

bool FUN_100c2a17c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c2a1ac; end: 100c2a267;  */

void FUN_100c2a1ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c88f0;
    func_0x000107c610f4(PTR_PTR_1126c88f0);
    lVar1 = param_1 + 0x58;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = param_1 + 0x60;
    func_0x000107c61148(lVar3);
    lVar4 = param_1;
    func_0x000107c3ad58(param_1);
    func_0x000107c46870(puVar5,param_2,lVar2,lVar3,lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c2a268; end: 100c2a2d7; -[SCCameraCoreLensFeatureProviderPlugin _alwaysOnCarouselEnabled] */

long FUN_100c2a268(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 200;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4af38();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3dc60();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 100c2a2d8; end: 100c2a33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_100c2a2d8(void)

{
  byte bVar1;
  ulong uVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_112f85080);
  if (bVar1 == 2) {
    bVar1 = 0;
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112f85060);
    if (uVar2 < 0xf) {
      if ((1L << (uVar2 & 0x3f) & 0x6407U) == 0) {
        if (uVar2 == 8) {
          bVar1 = *(byte *)(unaff_x20 + _DAT_112f85068);
        }
      }
      else {
        bVar1 = 1;
      }
    }
    *(byte *)(unaff_x20 + _DAT_112f85080) = bVar1;
  }
  return bVar1 & 1;
}



/* Entry: 100c2a340; end: 100c2a363; -[_TtC26SCLensCarouselServicesImpl24LensCarouselSettingsImpl alwaysOnScreen] */

uint FUN_100c2a340(uint param_1)

{
  FUN_100c2a2d8();
  return param_1 & 1;
}



/* Entry: 100c2a364; end: 100c2a417; -[SCFeatureLensesTooltipImpl initWithFeatureSettingsService:circumstanceEngine:alwaysOnCarouselEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c2a364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f02e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c89b0;
    func_0x000107c610f4();
    func_0x000107c46870();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127423f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127423f0) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c2a418; end: 100c2a537; -[SCLensesTooltipManager initWithFeatureSettingsService:circumstanceEngine:alwaysOnCarouselEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c2a418(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126f02f8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithTooltips__1125f2a68,PTR____NSArray0__struct_11034ab48
                     );
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127423fc;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    if (lRam00000001136c33c0 != -1) {
      func_0x00010002a2fc(0x1136c33c0,&PTR___NSConcreteGlobalBlock_110914ab8);
    }
    if (((bRam00000001136c33b8 & 1) == 0) &&
       (uVar3 = param_4, func_0x000107c3ebd4(), (uVar3 & 1) != 0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742400) = uVar4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112742404) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c2a538; end: 100c2a60b; -[SCOnboardingTooltipManager initWithTooltips:] */

undefined1 * FUN_100c2a538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8368;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c2a60c; end: 100c2a61b; -[SCFeatureLensesTooltipImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127423f0),PTR_s_setupWithParentView__112668140);
  return;
}



/* Entry: 100c2a61c; end: 100c2a62f; -[SCLensesTooltipManager setupWithParentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a61c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742408,param_3);
  return;
}



/* Entry: 100c2a630; end: 100c2a63f; -[SCFeatureLensesTooltipImpl isLensesOnboardingCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf099f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127423f0),
             PTR_s_areLensesOnboardingTooltipsCompl_1125a0020);
  return;
}



/* Entry: 100c2a640; end: 100c2a68b; -[SCLensesTooltipManager areLensesOnboardingTooltipsCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a640(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + _DAT_112742400) == '\x01') &&
     (lVar1 = param_1, func_0x000107c3c4dc(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be9d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__seenLensesSwipeTooltip_112584eb0);
    return;
  }
  return;
}



/* Entry: 100c2a68c; end: 100c2a6b3; -[SCLensesTooltipManager _seenLensesButtonTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c2a68c(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_112742404) & 1) != 0) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127423fc);
                    /* WARNING: Could not recover jumptable at 0x00010c157890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_seenLensesButtonTooltip_112633840);
  return uVar1;
}



/* Entry: 100c2a6b4; end: 100c2a6c3; -[SCLensesTooltipManager _seenLensesSwipeTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1578b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127423fc),PTR_s_seenLensesSwipeTooltip_112633848);
  return;
}



/* Entry: 100c2a6c4; end: 100c2a6d3; -[SCFeatureSettingsService seenLensesSwipeTooltip] */

void FUN_100c2a6c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110f30ff8,0);
  return;
}



/* Entry: 100c2a6d4; end: 100c2a723; -[SCCameraViewController inCaptureFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100c2a6d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11276250c;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(param_1);
  return lVar1 != 0;
}



/* Entry: 100c2a724; end: 100c2a733; -[SCCameraTimerImpl setShouldDisplayVideoHelp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a724(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762964) = param_3;
  return;
}



/* Entry: 100c2a734; end: 100c2a77b; -[SCCameraOverlayView isCameraHelpTooltipVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c2a734(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762838);
  func_0x000107c5cbc4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a5a0();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100c2a77c; end: 100c2a7ab; -[SCCameraTimerImpl tooltipManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a77c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762974);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c2a7ac; end: 100c2a803; -[SCCameraTimerTooltipManager isTakeASnapTooltipVisible] */

bool FUN_100c2a7ac(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0x10) == 0) || (func_0x000107c3dc40(), param_1 <= 0.0)) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x000107c5c42c(lVar2);
    func_0x000107c61180();
    bVar1 = lVar2 != 0;
    func_0x000107c61170();
  }
  return bVar1;
}



/* Entry: 100c2a804; end: 100c2a877; -[SCCameraViewControllerStartupWorkflow resetCameraTimer:] */

/* WARNING: Possible PIC construction at 0x000100c2a844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2a864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2a848) */
/* WARNING: Removing unreachable block (ram,0x000100c2a868) */

void FUN_100c2a804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5bcc0(param_3);
  func_0x000107c61180();
  func_0x000107c3f16c();
  func_0x000107c61180();
  func_0x000107c530d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c2a878; end: 100c2a887; -[SCCameraOverlayView setCameraTimerState:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762838),PTR_s_setCameraTimerState_animated__11263b6f8
            );
  return;
}



/* Entry: 100c2a888; end: 100c2a89f; -[SCCameraOverlayView removeCurrentLensIconFromCameraButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bbe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762838),PTR_s_setLensImage_style__11264c9a8,0,0);
  return;
}



/* Entry: 100c2a8a0; end: 100c2a95b; -[SCCameraTimerImpl setLensImage:style:] */

/* WARNING: Possible PIC construction at 0x000100c2a90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2a910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2a8a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    func_0x000107c55258(*(undefined8 *)(param_1 + _DAT_1127629c0),param_2,0);
    *(undefined1 *)(param_1 + _DAT_1127629d4) = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c3bca0(param_1,param_2,param_4);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127629c0);
    func_0x000107c4aba4(uVar1);
    func_0x000107c61180();
    func_0x000107c562f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c2a95c; end: 100c2aa1f; -[SCCameraViewControllerStartupWorkflow _resetFlipCount:] */

/* WARNING: Possible PIC construction at 0x000100c2a9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2a9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2a9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2aa08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2a9fc) */
/* WARNING: Removing unreachable block (ram,0x000100c2a9cc) */
/* WARNING: Removing unreachable block (ram,0x000100c2a9a4) */
/* WARNING: Removing unreachable block (ram,0x000100c2aa0c) */

void FUN_100c2a95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4f178(param_3);
  func_0x000107c61180();
  func_0x000107c4f174();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c2aa20; end: 100c2aaab; -[SCPreviewPresenterImpl setCameraFlipsWhileRecording:] */

/* WARNING: Possible PIC construction at 0x000100c2aa6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2aa70) */

void FUN_100c2aa20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c5e480(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c611b0();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c3ecc8(uVar1);
  func_0x000107c61180();
  func_0x000107c52fd8(*(undefined8 *)(param_1 + 0x1a8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c2aaac; end: 100c2aab3; -[SCCameraCommonParametersBuilder withCameraFlipsWhileRecording:] */

void FUN_100c2aaac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 100c2aab4; end: 100c2ab17; -[SCPreviewConfiguration setCameraCommonParameters:] */

/* WARNING: Possible PIC construction at 0x000100c2ab04: Changing call to branch */

void FUN_100c2aab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar1 = *(ulong *)(param_1 + 0x238);
  func_0x000107c49cec(uVar1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     (lVar2 = param_1,
     func_0x000107c3c7ec(param_1,param_2,&PTR____CFConstantStringClassReference_110ef12d8),
     (int)lVar2 != 0)) {
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x238) = param_3;
    param_3 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c2ab18; end: 100c2afc7; -[SCCameraCommonParameters isEqual:] */

long FUN_100c2ab18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
LAB_100c2afa0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100c2afac;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          (((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
              (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
             (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
            ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
             (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
           (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) &&
         (((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
           (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
          (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) &&
        ((((((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
             (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
            (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
           ((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
            (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))))) &&
          ((((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
             ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
              (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))))) &&
            (*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0))) &&
           (((*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8) &&
             (*(long *)(param_1 + 0xd0) == *(long *)(param_3 + 0xd0))) &&
            (*(long *)(param_1 + 0xd8) == *(long *)(param_3 + 0xd8))))))) &&
         (((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
           (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
          ((*(long *)(param_1 + 0xe8) == *(long *)(param_3 + 0xe8) &&
           ((*(long *)(param_1 + 0xf0) == *(long *)(param_3 + 0xf0) &&
            (*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0xf8))))))))))) &&
       (*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12))) {
      dVar5 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      if ((dVar5 < 2.2250738585072014e-308) ||
         (dVar5 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                  2.220446049250313e-16)) {
        dVar5 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                    2.220446049250313e-16)) {
          dVar5 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
          if ((dVar5 < 2.2250738585072014e-308) ||
             (dVar5 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                      2.220446049250313e-16)) {
            dVar5 = ABS(*(double *)(param_1 + 0x88) - *(double *)(param_3 + 0x88));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x88) + *(double *)(param_3 + 0x88)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x90) - *(double *)(param_3 + 0x90));
              if ((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x90) + *(double *)(param_3 + 0x90)) *
                          2.220446049250313e-16)) {
                dVar5 = ABS(*(double *)(param_1 + 0xa0) - *(double *)(param_3 + 0xa0));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0xa0) + *(double *)(param_3 + 0xa0)) *
                            2.220446049250313e-16)) {
                  fVar4 = ABS(*(float *)(param_1 + 0x14) - *(float *)(param_3 + 0x14));
                  if ((fVar4 < 1.1754944e-38) ||
                     (fVar4 < ABS(*(float *)(param_1 + 0x14) + *(float *)(param_3 + 0x14)) *
                              1.1920929e-07)) {
                    dVar5 = ABS(*(double *)(param_1 + 200) - *(double *)(param_3 + 200));
                    if ((dVar5 < 2.2250738585072014e-308) ||
                       (dVar5 < ABS(*(double *)(param_1 + 200) + *(double *)(param_3 + 200)) *
                                2.220446049250313e-16)) {
                      fVar4 = ABS(*(float *)(param_1 + 0x18) - *(float *)(param_3 + 0x18));
                      if ((fVar4 < 1.1754944e-38) ||
                         (fVar4 < ABS(*(float *)(param_1 + 0x18) + *(float *)(param_3 + 0x18)) *
                                  1.1920929e-07)) {
                        dVar5 = ABS(*(double *)(param_1 + 0xe0) - *(double *)(param_3 + 0xe0));
                        if ((((dVar5 < 2.2250738585072014e-308) ||
                             (dVar5 < ABS(*(double *)(param_1 + 0xe0) + *(double *)(param_3 + 0xe0))
                                      * 2.220446049250313e-16)) &&
                            ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38)
                             || (func_0x000107c49cec(), (int)lVar3 != 0)))) &&
                           (((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78)
                             || (func_0x000107c49cec(), (int)lVar3 != 0)) &&
                            ((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98)
                             || (func_0x000107c49cec(), (int)lVar3 != 0)))))) {
                          lVar3 = *(long *)(param_1 + 0xc0);
                          if (lVar3 != *(long *)(param_3 + 0xc0)) {
                            func_0x000107c49cec();
                            goto LAB_100c2afac;
                          }
                          goto LAB_100c2afa0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_100c2afac:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100c2afc8; end: 100c2b03f; -[SCCameraCommonParameters .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c2afe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c2aff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c2afe4) */
/* WARNING: Removing unreachable block (ram,0x000100c2affc) */

void FUN_100c2afc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xc0,0);
  return;
}



/* Entry: 100c2b040; end: 100c2b247;  */

void FUN_100c2b040(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126c7958;
    func_0x000107c610f4();
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c3f300(uVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c4c168();
    func_0x000107c61180();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_100c2b248;
    puStack_70 = &UNK_11084e7d0;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar12);
    ppuVar4 = &puStack_88;
    uStack_68 = uVar12;
    FUN_100c2b248();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + 0x88);
    func_0x000107c3f0f4(uVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar1 + 0x88);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar1 + 0x88);
    func_0x000107c3f598(uVar7);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(lVar1 + 0x40);
    func_0x000107c4d16c();
    func_0x000107c61180();
    uVar12 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(lVar1 + 0x48);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c3f32c();
    func_0x000107c61180();
    lVar11 = lVar1 + 0x1c0;
    func_0x000107c61148();
    func_0x000107c45cb8(puVar13,param_2,uVar2,uVar3,ppuVar4,uVar5,uVar6,uVar7,uVar12,uVar10,lVar11,
                        *(undefined8 *)(lVar1 + 200));
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 100c2b248; end: 100c2b323;  */

void FUN_100c2b248(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c2b324; end: 100c2b5c3; -[SCFeatureZoomingImpl initWithCameraViewType:mainCameraViewControllerLifecycleEvents:cameraUserActionLogger:cameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:multiCamModeConfig:cameraZoomFactorsConfiguration:zoomFactorsFeature:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100c2b324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1126f0228;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741838) = param_3;
    lVar4 = (long)_DAT_11274183c;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741840;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741844;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741848;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_11274184c;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741850,param_12);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741854) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741858) = 0x3ff0000000000000;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274185c) = 0;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741860);
    *(undefined **)((long)puVar1 + (long)_DAT_112741860) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c5c320(param_4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741864) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741868) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274186c) = 0;
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741870,param_13);
    puVar3 = PTR_PTR_1126b0228;
    func_0x000107c4e748();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741874);
    *(undefined **)((long)puVar1 + (long)_DAT_112741874) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar1;
}



/* Entry: 100c2b5c4; end: 100c2b5ef;  */

void FUN_100c2b5c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchViewDidFullyAppear_viewDidF_11260df68,
             &PTR___NSConcreteGlobalBlock_110913d78,&PTR___NSConcreteGlobalBlock_110913d98,
             &PTR___NSConcreteGlobalBlock_110913db8,&PTR___NSConcreteGlobalBlock_110913dd8);
  return;
}



/* Entry: 100c2b5f0; end: 100c2b64f;  */

void FUN_100c2b5f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a5878);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c2b650; end: 100c2b663; -[SCFeatureZoomingImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2b650(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127418c0,param_3);
  return;
}



/* Entry: 100c2b664; end: 100c2b677; -[SCFeatureZoomingImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2b664(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741878,param_3);
  return;
}



/* Entry: 100c2b678; end: 100c2b693; -[SCFeatureZoomingImpl resetFlipRecordedCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2b678(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11274188c) = 0;
  *(undefined8 *)(param_1 + _DAT_1127418a4) = 0;
  return;
}



/* Entry: 100c2b694; end: 100c2b6c3;  */

bool FUN_100c2b694(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c2b6c4; end: 100c2b863;  */

void FUN_100c2b6c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = param_3 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c7a68;
    func_0x000107c610f4();
    uVar10 = *(undefined8 *)(lVar1 + 0x58);
    FUN_100c2b864(*(undefined8 *)(lVar1 + 0x70));
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0fc(uVar2);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0f4(uVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c4fab8(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c3f300(uVar6);
    uVar11 = *(undefined8 *)(lVar1 + 0xf0);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_100c2bca4;
    puStack_80 = &UNK_11084e7d0;
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    func_0x000107c61174(uVar8);
    ppuVar7 = &puStack_98;
    uStack_78 = uVar8;
    FUN_100c2bca4();
    func_0x000107c61180();
    func_0x000107c49384(param_1,param_2,puVar9,param_4,uVar10,uVar2,uVar3,uVar5,uVar6,uVar11,ppuVar7
                       );
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(uStack_78);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100c2b864; end: 100c2b92f;  */

undefined1  [16] FUN_100c2b864(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4e1a8();
  dVar2 = param_1;
  dVar4 = param_2;
  FUN_100c2bc40();
  if (param_1 == 0.0) {
LAB_100c2b8b4:
    dVar3 = 0.0;
  }
  else {
    if (param_2 != 0.0) {
      param_1 = param_1 / param_2;
      if (param_1 == 0.0) goto LAB_100c2b8b4;
      if (param_1 != INFINITY) {
        dVar3 = param_1 * dVar4;
        if (dVar2 <= dVar3) {
          dVar4 = dVar2 / param_1;
          dVar3 = dVar2;
        }
        goto LAB_100c2b8cc;
      }
    }
    dVar4 = 0.0;
    dVar3 = dVar2;
  }
LAB_100c2b8cc:
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 100c2b930; end: 100c2b937; -[SCPreviewCameraSourceOverlayService provider] */

undefined8 FUN_100c2b930(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c2b938; end: 100c2ba07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2b938(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  puVar1 = auStack_38;
  func_0x000107c61148();
  func_0x000107c61170();
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bccd8;
    func_0x000107c610f4(PTR_PTR_1126bccd8);
    puVar1 = auStack_38;
    func_0x000107c61148();
    if (puVar1 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = puVar1 + _DAT_11272787c;
      func_0x000107c61148(puVar3);
    }
    func_0x000107c45bbc(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c2ba08; end: 100c2ba7b; -[SCPreviewCameraSourceOverlayProviderImpl initWithCameraDimensionsServices:] */

undefined1 * FUN_100c2ba08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e99a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c2ba7c; end: 100c2bb33; -[SCPreviewCameraSourceOverlayProviderImpl overlaySize] */

undefined1  [16]
FUN_100c2ba7c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar1 = param_5;
  func_0x0001008522a8();
  if ((int)lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51724();
    param_1 = param_3;
    param_2 = param_4;
    func_0x000100841590(param_3,param_4);
    dVar4 = param_1;
    dVar5 = param_2;
    func_0x000107c61170(puVar3);
    func_0x000107c4f70c(PTR__OBJC_CLASS___UIViewController_1126af898);
    param_1 = param_1 - (param_4 + dVar5);
    param_2 = param_2 - (param_3 + dVar4);
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + 8);
    func_0x000107c41e44(uVar2);
    func_0x000107c61180();
    func_0x000107c519f8();
    func_0x000107c61170(uVar2);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 100c2bb34; end: 100c2bb3b; -[SCCameraDimensionsServices dimensionsProvider] */

undefined8 FUN_100c2bb34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c2bb3c; end: 100c2bb97; -[SCCameraDimensionsProviderImpl screenSizeConstrainedToTargetAspectRatio] */

undefined1  [16] FUN_100c2bb3c(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c61170(puVar1);
  func_0x000107c5c738(param_4);
  auVar2._8_8_ = param_3 / param_1;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 100c2bb98; end: 100c2bc3f; -[SCCameraDimensionsProviderImpl targetAspectRatio] */

double FUN_100c2bb98(double param_1,undefined8 param_2,double param_3,double param_4,ulong param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  func_0x0001008522a8();
  dVar3 = 0.5625;
  if (((param_5 & 1) == 0) && (dVar3 = dRam00000001136bc4c0, dRam00000001136bc4c0 == 0.0)) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51724();
    dVar2 = param_3;
    func_0x000107c61170(puVar1);
    func_0x0001054c2b7c();
    dVar3 = 0.0;
    dRam00000001136bc4c0 = dVar3;
    if (param_3 != 0.0) {
      dVar2 = (param_4 - param_1) - dVar2;
      if (dVar2 == 0.0) {
        dVar3 = INFINITY;
        dRam00000001136bc4c0 = dVar3;
      }
      else {
        dVar3 = param_3 / dVar2;
        dRam00000001136bc4c0 = dVar3;
      }
    }
  }
  return dVar3;
}



/* Entry: 100c2bc40; end: 100c2bca3;  */

undefined1  [16] FUN_100c2bc40(double param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar1);
  auVar2._8_8_ = param_1 * 70.0;
  auVar2._0_8_ = param_1 * 40.0;
  return auVar2;
}



/* Entry: 100c2bca4; end: 100c2bd7f;  */

void FUN_100c2bca4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c2bd80; end: 100c2bf23; -[SCFeatureMultiSnapImpl initWithUserSession:sampledImageSize:cameraHardwareServicesAPI:cameraHardwareResource:cameraRecordingDurationConfig:cameraViewType:circumstanceEngine:speedModeFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c2bd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_78 = PTR_PTR_1126ef860;
  uStack_80 = param_3;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273e7f8;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e7fc) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11273e7fc))[1] = param_2;
    lVar3 = (long)_DAT_11273e800;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11273e804;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11273e808;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e80c) = param_9;
    lVar3 = (long)_DAT_11273e810;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11273e814;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100c2bf24; end: 100c2bf83;  */

void FUN_100c2bf24(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a5880);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c2bf84; end: 100c2bf97; -[SCFeatureMultiSnapImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2bf84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273e830,param_3);
  return;
}



/* Entry: 100c2bf98; end: 100c2bfcf; -[SCFeatureMultiSnapImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2bf98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e818);
  *(undefined8 *)(param_1 + _DAT_11273e818) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c2bfd0; end: 100c2c057; -[SCFeatureMultiSnapImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2bfd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e828);
  *(undefined8 *)(param_1 + _DAT_11273e828) = 0;
  func_0x000107c61170(uVar1);
  lVar3 = (long)_DAT_11273e824;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar2 = param_1 + _DAT_11273e830;
    func_0x000107c61148(lVar2);
    func_0x000107c42e74();
    func_0x000107c61170(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    func_0x000107c61170(uVar1);
  }
  *(undefined1 *)(param_1 + _DAT_11273e820) = 0;
  return;
}



/* Entry: 100c2c058; end: 100c2c067; -[SCFeatureBatchCaptureImpl isActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c2c058(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740420);
}



/* Entry: 100c2c068; end: 100c2c06f; -[SCCameraViewControllerInternalState lockRingingToken] */

undefined8 FUN_100c2c068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 100c2c070; end: 100c2c09f;  */

void FUN_100c2c070(long param_1,undefined1 param_2)

{
  func_0x000107c3ebcc();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 100c2c0a0; end: 100c2c0ab; -[SCManagedStillImageCapturerV2 isCapturingPhoto] */

undefined1 FUN_100c2c0a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



/* Entry: 100c2c0ac; end: 100c2c133; -[SCContainerViewControllerView willMoveToWindow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2c0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_willMoveToWindow__112687408;
  puStack_38 = PTR_PTR_112705628;
  lStack_40 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  param_1 = param_1 + _DAT_11278c7dc;
  func_0x000107c61148(param_1);
  func_0x000107c5e384();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c2c134; end: 100c2c137; -[SCContainerViewController willMoveToWindow:] */

void FUN_100c2c134(void)

{
  return;
}


