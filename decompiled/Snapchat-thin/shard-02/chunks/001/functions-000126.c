/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019dc094; end: 1019dc09f; -[_TtC38SCLensInteractionHistoryImplementation35RTUSLensInteractionsHistoryProvider iconImpressionsLastDate] */

void FUN_1019dc094(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c61174(param_1);
  func_0x0001019dbc58(puVar4,FUN_1019dc078,0);
  func_0x000107c61170(param_1);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019dc0a0; end: 1019dc0a7; -[_TtC38SCLensInteractionHistoryImplementation35RTUSLensInteractionsHistoryProvider collectedEventLastDate] */

void FUN_1019dc0a0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c61174(param_1);
  func_0x0001019dbc58(puVar4,0,0);
  func_0x000107c61170(param_1);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019dc0a8; end: 1019dc18b;  */

void FUN_1019dc0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c61174(param_1);
  func_0x0001019dbc58(puVar4,param_3,0);
  func_0x000107c61170(param_1);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019dc18c; end: 1019dc8df;  */

/* WARNING: Removing unreachable block (ram,0x0001019dc6d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1019dc18c(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puStack_68;
  
  FUN_1019db990();
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  plVar2 = (long *)(unaff_x20 + _DAT_112de77d8);
  lVar12 = *plVar2;
  if (SUB168(SEXT816(lVar12) * SEXT816(1000),8) != lVar12 * 1000 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc394);
    (*pcVar3)();
  }
  if (SUB168(SEXT816(lVar12 * 1000) * SEXT816(0x3c),8) != lVar12 * 60000 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc398);
    (*pcVar3)();
  }
  puVar4 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112de77d0));
  func_0x000107c51b38(puVar4);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc39c);
    (*pcVar3)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc3a0);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc3a4);
    (*pcVar3)();
  }
  if (SBORROW8((long)param_1,lVar12 * 60000)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc3a8);
    (*pcVar3)();
  }
  uVar17 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar13 = *(ulong *)(uVar17 + 0x10);
  }
  else {
    uVar13 = param_2;
    if (-1 < (long)param_2) {
      uVar13 = uVar17;
    }
    func_0x000107c60480();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar16 = 0;
    do {
      while( true ) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc390);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(param_2 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          param_5 = 0x112de7808;
          uVar5 = uVar16;
          FUN_1019dcc60(uVar16,param_2,&PTR_PTR_1126a83f0);
        }
        uVar1 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc38c);
          (*pcVar3)();
        }
        uVar6 = uVar5;
        func_0x000107c3fbdc();
        if ((long)param_1 + lVar12 * -60000 <= (long)uVar6) break;
        func_0x000107c61170(uVar5);
        uVar16 = uVar16 + 1;
        if (uVar1 == uVar13) goto LAB_1019dc3c4;
      }
      puVar14 = puVar4;
      func_0x000107c61558();
      puStack_68 = puVar4;
      if (((ulong)puVar14 & 1) == 0) {
        FUN_1019dc914(0,*(long *)(puVar4 + 0x10) + 1,1);
      }
      uVar16 = *(ulong *)(puStack_68 + 0x10);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar16) {
        FUN_1019dc914(1 < *(ulong *)(puStack_68 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar16 + 1;
      *(ulong *)(puStack_68 + uVar16 * 8 + 0x20) = uVar5;
      puVar4 = puStack_68;
      uVar16 = uVar1;
    } while (uVar1 != uVar13);
  }
LAB_1019dc3c4:
  func_0x000107c6142c(param_2);
  if (((long)puVar4 < 0) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
    puVar14 = puVar4;
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar14 != (undefined *)0x0) {
      func_0x000107c6157c(puVar4);
      puVar10 = puVar14;
      FUN_1019dca64(puVar14,0);
      puVar15 = puVar4;
      FUN_1019dda38(puVar10 + 0x20,puVar14);
      func_0x000107c6142c();
      if (puVar15 != puVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc674);
        (*pcVar3)();
      }
    }
  }
  else {
    func_0x000107c6157c(puVar4);
    puVar10 = puVar4;
  }
  puStack_68 = puVar10;
  FUN_1019dcb50(&puStack_68);
  func_0x000107c61574(puVar4);
  puVar4 = puStack_68;
  puVar14 = (undefined *)plVar2[2];
  if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc628);
    (*pcVar3)();
  }
  uVar11 = (uint)((ulong)puStack_68 >> 0x3e) & 1;
  if ((long)puStack_68 < 0) {
    uVar11 = 1;
  }
  if (uVar11 == 0) {
    puVar7 = *(undefined **)(puStack_68 + 0x10);
    puVar15 = puVar7;
    if (puVar14 <= puVar7) {
      puVar15 = puVar14;
    }
    puVar10 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      puVar10 = puVar15;
    }
    if ((long)puVar7 < (long)puVar10) {
LAB_1019dc6b4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc6b8);
      (*pcVar3)();
    }
  }
  else {
    puVar10 = puStack_68;
    func_0x000107c60480();
    puVar15 = puVar4;
    func_0x000107c60480();
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc6d8);
      (*pcVar3)();
    }
    puVar15 = puVar10;
    if ((long)puVar14 <= (long)puVar10) {
      puVar15 = puVar14;
    }
    puVar7 = puVar14;
    if (-1 < (long)puVar10) {
      puVar7 = puVar15;
    }
    puVar10 = (undefined *)0x0;
    if (puVar14 != (undefined *)0x0) {
      puVar10 = puVar7;
    }
    puVar14 = puVar4;
    func_0x000107c60480();
    if ((long)puVar14 < (long)puVar10) goto LAB_1019dc6b4;
  }
  if ((((ulong)puVar4 & 0xc000000000000001) == 0) || (puVar10 == (undefined *)0x0)) {
    func_0x000107c61434(puVar4);
  }
  else {
    uVar8 = 0;
    FUN_1019ddbcc(0,0x112de7808,&PTR_PTR_1126a83f0);
    func_0x000107c61434(puVar4);
    puVar14 = (undefined *)0x0;
    do {
      puVar15 = puVar14 + 1;
      func_0x000107c60318(puVar14,puVar4,uVar8);
      puVar14 = puVar15;
    } while (puVar10 != puVar15);
  }
  func_0x000107c61574(puVar4);
  if (uVar11 == 0) {
    puVar15 = (undefined *)0x0;
    puVar14 = puVar4 + 0x20;
    param_5 = (long)puVar10 << 1 | 1;
  }
  else {
    puVar14 = (undefined *)0x0;
    puVar15 = puVar4;
    func_0x000107c60484(0,puVar10);
    func_0x000107c61574(puVar4);
    puVar4 = puVar14;
    puVar14 = puVar10;
  }
  puVar10 = PTR_PTR_1126a83f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = puVar10;
  func_0x000107c3eaac();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc6d4);
    (*pcVar3)();
  }
  if ((param_5 & 1) == 0) {
    func_0x000107c615f0(puVar4);
LAB_1019dc510:
    puVar9 = puVar4;
    FUN_1019dd94c(puVar4,puVar14,puVar15,param_5);
  }
  else {
    uVar8 = 0;
    func_0x000107c605fc(0);
    puVar9 = puVar4;
    func_0x000107c615f4(puVar4,3);
    func_0x000107c61480();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c615e8(puVar4);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar12 = *(long *)(puVar9 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(param_5 >> 1,(long)puVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019dc6bc);
      (*pcVar3)();
    }
    if (lVar12 != (param_5 >> 1) - (long)puVar15) {
      func_0x000107c615e8();
      goto LAB_1019dc510;
    }
    puVar14 = puVar4;
    func_0x000107c61480(puVar4,uVar8);
    func_0x000107c615e8(puVar4);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar14 != (undefined *)0x0) goto LAB_1019dc5a8;
  }
  func_0x000107c615e8(puVar4);
  puVar14 = puVar9;
LAB_1019dc5a8:
  puVar15 = puVar14;
  func_0x0001019dc6e4(puVar14);
  func_0x000107c61574(puVar14);
  puVar14 = puVar15;
  func_0x000107c5fc48(puVar15,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar15);
  func_0x000107c3d7a0(puVar7);
  func_0x000107c615e8(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar14);
  return puVar10;
}



/* Entry: 1019dc8e0; end: 1019dc913; -[_TtC38SCLensInteractionHistoryImplementation35RTUSLensInteractionsHistoryProvider rtusSignal] */

void FUN_1019dc8e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1019dc18c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019dc914; end: 1019dc92f;  */

void FUN_1019dc914(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1019dc930();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1019dc930; end: 1019dca63;  */

undefined * FUN_1019dc930(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019dca64);
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
    puVar3 = param_1;
    FUN_1019dcae4();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1019ddbcc(0,0x112de7808,&PTR_PTR_1126a83f0);
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



/* Entry: 1019dca64; end: 1019dcae3;  */

undefined * FUN_1019dca64(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1019dcae4();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1019dcae4; end: 1019dcb4f;  */

void FUN_1019dcae4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1019ddbcc(0,0x112de7808,&PTR_PTR_1126a83f0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112de7810;
  plVar5 = (long *)&UNK_10d9b2568;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1019dcb50; end: 1019dcc5f;  */

void FUN_1019dcb50(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1019ddbb8();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0;
      FUN_1019ddbcc(0,0x112de7808,&PTR_PTR_1126a83f0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1019dce1c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1019dd2b8(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1019dcc60; end: 1019dce1b;  */

ulong FUN_1019dcc60(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019dcd44);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019dcd48);
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
  FUN_1019ddbcc(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019dce1c);
  (*pcVar2)();
}



/* Entry: 1019dce1c; end: 1019dd2b7;  */

void FUN_1019dce1c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar11 = 0;
    do {
      lVar3 = lVar11 + 1;
      if (lVar3 < lVar18) {
        lVar3 = *(long *)(*param_3 + lVar3 * 8);
        plVar16 = (long *)(*param_3 + lVar11 * 8);
        plVar21 = plVar16 + 2;
        lVar20 = *plVar16;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar14 = lVar3;
        func_0x000107c3fbdc();
        lVar10 = lVar20;
        func_0x000107c3fbdc();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar20);
        lVar20 = lVar11 + 2;
        do {
          lVar6 = lVar20;
          lVar3 = lVar18;
          if (lVar18 == lVar6) break;
          lVar3 = plVar21[-1];
          lVar20 = *plVar21;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar4 = lVar20;
          func_0x000107c3fbdc();
          lVar5 = lVar3;
          func_0x000107c3fbdc();
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar3);
          plVar21 = plVar21 + 1;
          lVar20 = lVar6 + 1;
          lVar3 = lVar6;
        } while (lVar10 < lVar14 != lVar4 <= lVar5);
        if (lVar10 < lVar14) {
          if (lVar3 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd28c);
            (*pcVar1)();
          }
          if (lVar11 < lVar3) {
            lVar10 = *param_3;
            puVar12 = (undefined8 *)(lVar10 + lVar3 * 8);
            puVar13 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar14 = lVar3;
            lVar18 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar14 = lVar14 + -1;
              if (lVar18 != lVar14) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd2ac);
                  (*pcVar1)();
                }
                uVar15 = *puVar13;
                *puVar13 = *puVar12;
                *puVar12 = uVar15;
              }
              lVar18 = lVar18 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar18 < lVar14);
          }
        }
      }
      lVar18 = param_3[1];
      lVar14 = lVar3;
      if (lVar3 < lVar18) {
        if (SBORROW8(lVar3,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd288);
          (*pcVar1)();
        }
        if (lVar3 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd290);
            (*pcVar1)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar18 <= lVar11 + param_4) {
            lVar10 = lVar18;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd294);
            (*pcVar1)();
          }
          if (lVar3 != lVar10) {
            lVar20 = *param_3;
            plVar21 = (long *)(lVar20 + lVar3 * 8 + -8);
            lVar18 = lVar11 - lVar3;
            do {
              lVar6 = *(long *)(lVar20 + lVar3 * 8);
              plVar16 = plVar21;
              lVar14 = lVar18;
              do {
                lVar19 = *plVar16;
                func_0x000107c61174();
                func_0x000107c61174();
                lVar4 = lVar6;
                func_0x000107c3fbdc();
                lVar5 = lVar19;
                func_0x000107c3fbdc();
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar19);
                if (lVar4 <= lVar5) break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd298);
                  (*pcVar1)();
                }
                lVar4 = *plVar16;
                lVar6 = plVar16[1];
                *plVar16 = lVar6;
                plVar16[1] = lVar4;
                bVar2 = lVar14 != -1;
                lVar14 = lVar14 + 1;
                plVar16 = plVar16 + -1;
              } while (bVar2);
              lVar3 = lVar3 + 1;
              plVar21 = plVar21 + 1;
              lVar18 = lVar18 + -1;
              lVar14 = lVar10;
            } while (lVar3 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd27c);
        (*pcVar1)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar17 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar17) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar17 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar17 + 1;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar17 * 0x10 + 0x28) = lVar14;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd2b0);
        (*pcVar1)();
      }
      FUN_1019dd3ac(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1019dd24c;
      lVar18 = param_3[1];
      lVar11 = lVar14;
    } while (lVar14 < lVar18);
  }
  puVar9 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd2b8);
    (*pcVar1)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar17 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar17) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd2b4);
      (*pcVar1)();
    }
    lVar10 = uVar17 - 1;
    lVar14 = *(long *)(puVar9 + uVar17 * 0x10);
    lVar3 = *(long *)(puVar9 + lVar10 * 0x10 + 0x28);
    FUN_1019dd614(lVar11 + lVar14 * 8,lVar11 + *(long *)(puVar9 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar3 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar3 < lVar14) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd280);
      (*pcVar1)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd284);
      (*pcVar1)();
    }
    *(long *)(puVar9 + uVar17 * 0x10) = lVar14;
    *(long *)((long)(puVar9 + uVar17 * 0x10) + 8) = lVar3;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar10);
    puVar9 = puStack_58;
    uVar17 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1019dd24c:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 1019dd2b8; end: 1019dd3ab;  */

void FUN_1019dd2b8(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    plVar9 = (long *)(lVar8 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar3 = *(long *)(lVar8 + param_3 * 8);
      lVar6 = param_1;
      plVar10 = plVar9;
      do {
        lVar7 = *plVar10;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar4 = lVar3;
        func_0x000107c3fbdc();
        lVar5 = lVar7;
        func_0x000107c3fbdc();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar7);
        if (lVar4 <= lVar5) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019dd3ac);
          (*pcVar1)();
        }
        lVar4 = *plVar10;
        lVar3 = plVar10[1];
        *plVar10 = lVar3;
        plVar10[1] = lVar4;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        plVar10 = plVar10 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar9 = plVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1019dd3ac; end: 1019dd613;  */

undefined8 FUN_1019dd3ac(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1019dd480;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5fc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1019dd4e4:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5ec);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5f4);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5d4);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5d8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5e0);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5e8);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1019dd480:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5dc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5e4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5f0);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5f8);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1019dd4e4;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd600);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5c8);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd614);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1019dd614(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5cc);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1019dd5d0);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1019dd614; end: 1019dd94b;  */

undefined8 FUN_1019dd614(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar3 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar3 = lVar8;
  }
  lVar3 = lVar3 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar9 = param_4 + lVar3;
    plVar2 = param_1;
    if (7 < lVar8) {
      do {
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar11 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar3 = lVar6;
        func_0x000107c3fbdc();
        lVar8 = lVar11;
        func_0x000107c3fbdc();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar11);
        if (lVar8 < lVar3) {
          plVar7 = param_2 + 1;
          plVar4 = param_4;
          plVar10 = param_2;
        }
        else {
          plVar4 = param_4 + 1;
          plVar10 = param_4;
          plVar7 = param_2;
        }
        param_4 = plVar4;
        if (plVar2 != plVar10) {
          *plVar2 = *plVar10;
        }
        plVar2 = plVar2 + 1;
        param_2 = plVar7;
      } while (param_4 < plVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar7 = param_4 + lVar6;
    plVar2 = param_2;
    plVar9 = plVar7;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar4 = param_2 + -1;
        plVar10 = param_3;
        while( true ) {
          param_3 = plVar10 + -1;
          plVar9 = plVar7 + -1;
          lVar6 = *plVar9;
          lVar11 = *plVar4;
          func_0x000107c61174();
          func_0x000107c61174();
          lVar3 = lVar6;
          func_0x000107c3fbdc();
          lVar8 = lVar11;
          func_0x000107c3fbdc();
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar11);
          if (lVar8 < lVar3) break;
          if (plVar10 != plVar7) {
            *param_3 = *plVar9;
          }
          plVar2 = param_2;
          plVar7 = plVar9;
          plVar10 = param_3;
          if (plVar9 <= param_4) goto LAB_1019dd8e0;
        }
        if (plVar10 != param_2) {
          *param_3 = *plVar4;
        }
        plVar2 = plVar4;
        plVar9 = plVar7;
      } while ((param_1 < plVar4) && (param_2 = plVar4, param_4 < plVar7));
    }
  }
LAB_1019dd8e0:
  uVar5 = (long)plVar9 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar2)) {
    func_0x000107c610b8(plVar2,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1019dd94c; end: 1019dda37;  */

undefined * FUN_1019dd94c(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1019dda38);
    (*pcVar2)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      FUN_1019dcae4();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar5 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar5 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar5 >> 3) << 1 | 1;
      puVar5 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019dda34);
      (*pcVar2)();
    }
    uVar4 = 0;
    FUN_1019ddbcc(0,0x112de7808,&PTR_PTR_1126a83f0);
    func_0x000107c6140c(puVar5 + 0x20,param_2 + param_3 * 8,lVar1,uVar4);
  }
  return puVar5;
}



/* Entry: 1019dda38; end: 1019ddbb7;  */

ulong FUN_1019dda38(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ddbb8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ddbac);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1019ddbcc(0,0x112de7808,&PTR_PTR_1126a83f0);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ddbb0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ddbb4);
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
          FUN_1019dcc60(uVar7,param_3,&PTR_PTR_1126a83f0,0x112de7808);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1019ddbb8; end: 1019ddbcb;  */

/* WARNING: Removing unreachable block (ram,0x0001019dc950) */
/* WARNING: Removing unreachable block (ram,0x0001019dc960) */
/* WARNING: Removing unreachable block (ram,0x0001019dca60) */
/* WARNING: Removing unreachable block (ram,0x0001019dc96c) */
/* WARNING: Removing unreachable block (ram,0x0001019dc974) */
/* WARNING: Removing unreachable block (ram,0x0001019dc9ec) */
/* WARNING: Removing unreachable block (ram,0x0001019dc9f4) */
/* WARNING: Removing unreachable block (ram,0x0001019dc9f8) */
/* WARNING: Removing unreachable block (ram,0x0001019dc9fc) */
/* WARNING: Removing unreachable block (ram,0x0001019dca0c) */

undefined * FUN_1019ddbb8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    FUN_1019dcae4();
    func_0x000107c613fc();
    puVar2 = puVar4;
    func_0x000107c610a4();
    puVar6 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar6 = puVar2 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar4;
  }
  uVar3 = 0;
  FUN_1019ddbcc(0,0x112de7808,&PTR_PTR_1126a83f0);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar3);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 1019ddbcc; end: 1019ddc0b;  */

void FUN_1019ddbcc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1019ddc0c; end: 1019ddc2b;  */

void FUN_1019ddc0c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1019ddc2c; end: 1019ddc67; -[_TtC38SCLensInteractionHistoryImplementation35LensInteractionsHistoryNullProvider init] */

void FUN_1019ddc2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019ddc68; end: 1019ddcbb;  */

void FUN_1019ddc68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019ddcbc; end: 1019ddcbf; -[_TtC38SCLensInteractionHistoryImplementation35LensInteractionsHistoryNullProvider iconImpressionsLastDate] */

void FUN_1019ddcbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1019ddcc0; end: 1019ddcc3; -[_TtC38SCLensInteractionHistoryImplementation35LensInteractionsHistoryNullProvider rtusSignal] */

void FUN_1019ddcc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1019ddcc4; end: 1019ddcc7; -[_TtC38SCLensInteractionHistoryImplementation35LensInteractionsHistoryNullProvider collectedEventLastDate] */

void FUN_1019ddcc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1019ddcc8; end: 1019ddd23;  */

int FUN_1019ddcc8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1019ddd24; end: 1019ddd57;  */

void FUN_1019ddd24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1019ddd58; end: 1019ddddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019ddd58(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126a8408;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_1019de478();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112de7918) = param_1;
  *(undefined **)(lVar3 + _DAT_112de7920) = puVar1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1019ddde0; end: 1019ddde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019ddde0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126a8408;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_1019de478();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112de7918) = unaff_x20;
  *(undefined **)(lVar3 + _DAT_112de7920) = puVar1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1019ddde8; end: 1019dde1f;  */

void FUN_1019ddde8(long param_1)

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



/* Entry: 1019dde20; end: 1019dde2f;  */

void FUN_1019dde20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1019dde30; end: 1019dde53;  */

void FUN_1019dde30(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019dde54; end: 1019dde77;  */

void FUN_1019dde54(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001007ad9d0();
  *param_1 = param_2;
  return;
}



/* Entry: 1019dde78; end: 1019de1af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dde78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  if (lStack_70 == 0) {
    (*param_5)(1);
    return;
  }
  lStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(uStack_68);
  lStack_70 = -0x2ffffffffffffff0;
  uStack_68 = 0x800000010efc78f0;
  func_0x000107c5fb78(param_1,param_2);
  uVar2 = uStack_68;
  lVar3 = lStack_70;
  func_0x000107c5fadc(lStack_70,uStack_68);
  func_0x000107c6142c(uVar2);
  lVar4 = lVar1;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar3 = lVar4;
    func_0x000107c6148c(lVar4,puVar5);
    if (lVar3 != 0) {
      func_0x000107c3ebcc();
      func_0x000107c615e8(lVar4);
      uVar6 = (uint)lVar3 ^ 1;
      goto LAB_1019ddfa4;
    }
    func_0x000107c615e8(lVar4);
  }
  uVar6 = 1;
LAB_1019ddfa4:
  (*param_5)(uVar6);
  func_0x0001019ddff4(param_1,param_2,param_3,param_4,uVar6);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1019de1b0; end: 1019de263; -[_TtC17LensCrashFuseImpl14LensCrashFuser safeInvokeForFeature:treatment:activationBlock:] */

void FUN_1019de1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  uStack_50 = param_5;
  func_0x000107c61174(param_1);
  FUN_1019dde78(param_3,param_2,param_4,uVar1,FUN_1019de498,auStack_60);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1019de264; end: 1019de26b; -[_TtC17LensCrashFuseImpl14LensCrashFuser lockFeature:] */

void FUN_1019de264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1019de26c(param_3,param_2,1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019de26c; end: 1019de377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019de26c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(uStack_48);
  lStack_50 = -0x2ffffffffffffff0;
  uStack_48 = 0x800000010efc78f0;
  func_0x000107c5fb78(param_1,param_2);
  uVar2 = uStack_48;
  lVar4 = lStack_50;
  func_0x0001000d224c(&lStack_50);
  lVar1 = lStack_50;
  if (lStack_50 == 0) {
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x0001002ed07c(0);
    uVar3 = (ulong)(param_3 & 1);
    func_0x000107c6010c(uVar3);
    func_0x000107c5fadc(lVar4,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c56bcc(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1019de378; end: 1019de37f; -[_TtC17LensCrashFuseImpl14LensCrashFuser unlockFeature:] */

void FUN_1019de378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1019de26c(param_3,param_2,0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019de380; end: 1019de3df;  */

void FUN_1019de380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1019de26c(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019de3e0; end: 1019de43f; -[_TtC17LensCrashFuseImpl14LensCrashFuser init] */

void FUN_1019de3e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCrashFuseImpl.LensCrashFuser",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019de40c);
  (*pcVar1)();
}



/* Entry: 1019de440; end: 1019de477; -[_TtC17LensCrashFuseImpl14LensCrashFuser .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019de440(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112de7918));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7920));
  return;
}



/* Entry: 1019de478; end: 1019de497;  */

void FUN_1019de478(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0160);
  return;
}



/* Entry: 1019de498; end: 1019de4ab;  */

void FUN_1019de498(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001019de4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1019de4ac; end: 1019de617;  */

uint FUN_1019de4ac(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  ulong uVar5;
  
  uVar2 = unaff_x20;
  func_0x000107c5b808();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c41640();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar4 = unaff_x20;
      func_0x000107c4a4d8();
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar3;
        func_0x000107c5c82c();
        func_0x000107c61180();
        if (uVar4 == 0) {
          uVar5 = 0;
          param_2 = 0xe000000000000000;
        }
        else {
          uVar5 = uVar4;
          func_0x000107c5faec();
          func_0x000107c61170(uVar4);
          uVar5 = uVar5 & 0xffffffffffff;
        }
        func_0x000107c6142c(param_2);
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar5 = param_2 >> 0x38 & 0xf;
        }
        if (uVar5 == 0) {
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar3);
          return 1;
        }
      }
      uVar4 = unaff_x20;
      func_0x000107c4a55c();
      if ((((int)uVar4 == 0) && (uVar4 = unaff_x20, func_0x000107c49c88(), (int)uVar4 == 0)) &&
         (uVar4 = unaff_x20, func_0x000107c49fe4(), (int)uVar4 == 0)) {
        func_0x000107c4a31c();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        return (uint)unaff_x20 ^ 1;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
      return 0;
    }
    func_0x000107c61170(uVar2);
  }
  uVar2 = unaff_x20;
  func_0x000107c4a55c();
  if ((((uVar2 & 1) == 0) && (uVar2 = unaff_x20, func_0x000107c49c88(), (uVar2 & 1) == 0)) &&
     (uVar2 = unaff_x20, func_0x000107c49fe4(), (uVar2 & 1) == 0)) {
    func_0x000107c4a31c();
    uVar1 = (uint)unaff_x20 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1019de618; end: 1019de64f; -[_TtC24SCLensInfoCardVisibility22LensInfoCardVisibility shouldShowInfoButtonForLens:] */

uint FUN_1019de618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1019de4ac();
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1019de650; end: 1019de68b; -[_TtC24SCLensInfoCardVisibility22LensInfoCardVisibility init] */

void FUN_1019de650(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019de68c; end: 1019de6df;  */

void FUN_1019de68c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1019de6e0; end: 1019de79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1019de6e0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c4456c();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019de798);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x10) = lVar2;
  lVar2 = param_3;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    uVar3 = *(undefined8 *)(param_1 + _DAT_113091ad8);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019de79c);
  (*pcVar1)();
}



/* Entry: 1019de79c; end: 1019de7bf;  */

/* WARNING: Possible PIC construction at 0x0001019de7a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019de7ac) */

void FUN_1019de79c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019de7c0; end: 1019de813;  */

void FUN_1019de7c0(void)

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



/* Entry: 1019de814; end: 1019de8db;  */

void FUN_1019de814(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110428430;
  func_0x000107c613fc(&UNK_110428430,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x0001000285a8(0x112de7978,&UNK_10d9b2660);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  pcVar3 = FUN_1019de8dc;
  func_0x0001000bdd8c(FUN_1019de8dc,puVar2);
  uVar4 = 0;
  func_0x00010023fccc(0);
  func_0x000107c610f8();
  func_0x0001007e617c(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 1019de8dc; end: 1019de8df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019de8dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = 0;
  func_0x0001008d2768();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112de7a60) = 0;
  *(undefined8 *)(lVar5 + _DAT_112de7a68) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112de7a70) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112de7a78) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1019de8e0; end: 1019de95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019de8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112de7a60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112de7a68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112de7a70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112de7a78) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1019de960; end: 1019de9a7; -[_TtC36LensConversationMetadataServicesImpl32LensConversationMetadataProvider replyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019de960(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112de7a60;
  func_0x000107c61428(param_1 + _DAT_112de7a60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1019de9a8; end: 1019deaef; -[_TtC36LensConversationMetadataServicesImpl32LensConversationMetadataProvider currentRemoteUsers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019de9a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c60bc4();
  lVar1 = _DAT_112de7a60;
  func_0x000107c61428(param_1 + _DAT_112de7a60,auStack_48,0,0);
  lVar4 = *(long *)(param_1 + lVar1);
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4(param_3);
  lVar1 = lVar4;
  func_0x000107c61174(lVar4);
  func_0x000107c61174(param_1);
  FUN_1019dee24();
  func_0x000107c61170(lVar1);
  if (lVar4 == 0) {
    uVar2 = 0;
    FUN_1019e01d4(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
    (**(code **)(param_3 + 0x10))(param_3,puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar3);
    func_0x000107c60bd0(param_3);
    func_0x000107c60bd0(param_3);
    func_0x000107c60bd0(param_3);
  }
  else {
    func_0x000107c60bc4(param_3);
    FUN_1019df8e8(lVar4,param_1,param_3);
    func_0x000107c60bd0(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(param_3);
    func_0x000107c60bd0(param_3);
    func_0x000107c60bd0(param_3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1019deaf0; end: 1019deb4b;  */

void FUN_1019deaf0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1019e01d4(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019deb4c; end: 1019debcf;  */

void FUN_1019deb4c(undefined *param_1,code *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x000100f630bc();
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 3;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined **)(puVar1 + 0x20) = param_1;
  }
  func_0x000107c61174(param_1);
  (*param_2)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 1019debd0; end: 1019dec27;  */

void FUN_1019debd0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5faec(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1019dec28; end: 1019dec5f;  */

void FUN_1019dec28(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019dec60; end: 1019ded6b;  */

/* WARNING: Possible PIC construction at 0x0001019ded1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019ded2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019ded3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019ded30) */
/* WARNING: Removing unreachable block (ram,0x0001019ded20) */
/* WARNING: Removing unreachable block (ram,0x0001019ded40) */

void FUN_1019dec60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  (*pcVar1)(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019ded6c; end: 1019dedcb; -[_TtC36LensConversationMetadataServicesImpl32LensConversationMetadataProvider init] */

void FUN_1019ded6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensConversationMetadataServicesImpl.LensConversationMetadataProvider",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ded98);
  (*pcVar1)();
}



/* Entry: 1019dedcc; end: 1019dee23; -[_TtC36LensConversationMetadataServicesImpl32LensConversationMetadataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019dede8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dee08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019dedec) */
/* WARNING: Removing unreachable block (ram,0x0001019dee0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dedcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de7a68));
  return;
}



/* Entry: 1019dee24; end: 1019df7d3;  */

undefined8 FUN_1019dee24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [2];
  
  auStack_80[0] = 0;
  if (param_1 == 0) {
    puVar16 = (undefined *)0x0;
    uVar22 = 0;
    puStack_d0 = (undefined *)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    puVar20 = (undefined *)0x0;
    puVar25 = (undefined *)0x0;
    uVar21 = 0;
    puStack_c8 = (undefined *)0x0;
    uStack_e0 = 0;
    puStack_d8 = (undefined *)0x0;
    uStack_f0 = 0;
    puStack_e8 = (undefined *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    puVar18 = (undefined *)0x0;
    uVar19 = 0;
    puVar23 = (undefined *)0x0;
    puStack_108 = (undefined *)0x0;
    uVar24 = 0;
    puVar17 = (undefined *)0x0;
    pcVar15 = (code *)0x0;
  }
  else {
    puVar16 = &UNK_110428740;
    func_0x000107c613fc(&UNK_110428740,0x18,7);
    *(undefined8 **)(puVar16 + 0x10) = auStack_80;
    puVar20 = &UNK_110428768;
    func_0x000107c613fc(&UNK_110428768,0x20,7);
    *(code **)(puVar20 + 0x10) = FUN_1019e034c;
    *(undefined **)(puVar20 + 0x18) = puVar16;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x1019e0378;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1019dec28;
    puStack_98 = &UNK_110428780;
    ppuVar3 = &puStack_b0;
    puStack_88 = puVar20;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puStack_d0 = &UNK_1104287b8;
    func_0x000107c613fc(&UNK_1104287b8,0x18,7);
    *(undefined8 **)(puStack_d0 + 0x10) = auStack_80;
    puVar20 = &UNK_1104287e0;
    func_0x000107c613fc(&UNK_1104287e0,0x20,7);
    *(undefined8 *)(puVar20 + 0x10) = 0x1019e04e4;
    *(undefined **)(puVar20 + 0x18) = puStack_d0;
    uStack_90 = 0x1019e0498;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04bc;
    puStack_98 = &UNK_1104287f8;
    ppuVar4 = &puStack_b0;
    puStack_88 = puVar20;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puVar20 = &UNK_110428830;
    func_0x000107c613fc(&UNK_110428830,0x18,7);
    *(undefined8 **)(puVar20 + 0x10) = auStack_80;
    puVar25 = &UNK_110428858;
    func_0x000107c613fc(&UNK_110428858,0x20,7);
    uStack_b8 = 0x1019e04fc;
    puStack_b0 = puVar1;
    *(undefined8 *)(puVar25 + 0x10) = 0x1019e04fc;
    *(undefined **)(puVar25 + 0x18) = puVar20;
    uStack_90 = 0x1019e049c;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04c0;
    puStack_98 = &UNK_110428870;
    ppuVar5 = &puStack_b0;
    puStack_88 = puVar25;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_88);
    puVar25 = &UNK_1104288a8;
    func_0x000107c613fc(&UNK_1104288a8,0x18,7);
    *(undefined8 **)(puVar25 + 0x10) = auStack_80;
    puVar18 = &UNK_1104288d0;
    func_0x000107c613fc(&UNK_1104288d0,0x20,7);
    uStack_c0 = 0x1019e04e8;
    *(undefined8 *)(puVar18 + 0x10) = 0x1019e04e8;
    *(undefined **)(puVar18 + 0x18) = puVar25;
    uStack_90 = 0x1019e04a0;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04c4;
    puStack_98 = &UNK_1104288e8;
    ppuVar6 = &puStack_b0;
    puStack_88 = puVar18;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_88);
    puStack_c8 = &UNK_110428920;
    func_0x000107c613fc(&UNK_110428920,0x18,7);
    *(undefined8 **)(puStack_c8 + 0x10) = auStack_80;
    puVar18 = &UNK_110428948;
    func_0x000107c613fc(&UNK_110428948,0x20,7);
    *(undefined8 *)(puVar18 + 0x10) = 0x1019e04ec;
    *(undefined **)(puVar18 + 0x18) = puStack_c8;
    uStack_90 = 0x1019e04a4;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04c8;
    puStack_98 = &UNK_110428960;
    ppuVar7 = &puStack_b0;
    puStack_88 = puVar18;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puStack_d8 = &UNK_110428998;
    func_0x000107c613fc(&UNK_110428998,0x18,7);
    *(undefined8 **)(puStack_d8 + 0x10) = auStack_80;
    puVar18 = &UNK_1104289c0;
    func_0x000107c613fc(&UNK_1104289c0,0x20,7);
    uStack_e0 = 0x1019e0398;
    *(undefined8 *)(puVar18 + 0x10) = 0x1019e0398;
    *(undefined **)(puVar18 + 0x18) = puStack_d8;
    uStack_90 = 0x1019e03c4;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_1019dec60;
    puStack_98 = &UNK_1104289d8;
    ppuVar8 = &puStack_b0;
    puStack_88 = puVar18;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puStack_e8 = &UNK_110428a10;
    func_0x000107c613fc(&UNK_110428a10,0x18,7);
    *(undefined8 **)(puStack_e8 + 0x10) = auStack_80;
    puVar18 = &UNK_110428a38;
    func_0x000107c613fc(&UNK_110428a38,0x20,7);
    uStack_f0 = 0x1019e04f0;
    *(undefined8 *)(puVar18 + 0x10) = 0x1019e04f0;
    *(undefined **)(puVar18 + 0x18) = puStack_e8;
    uStack_90 = 0x1019e04a8;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04cc;
    puStack_98 = &UNK_110428a50;
    ppuVar9 = &puStack_b0;
    puStack_88 = puVar18;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puVar18 = &UNK_110428a88;
    func_0x000107c613fc(&UNK_110428a88,0x18,7);
    *(undefined8 **)(puVar18 + 0x10) = auStack_80;
    puVar23 = &UNK_110428ab0;
    func_0x000107c613fc(&UNK_110428ab0,0x20,7);
    uStack_f8 = 0x1019e04f4;
    *(undefined8 *)(puVar23 + 0x10) = 0x1019e04f4;
    *(undefined **)(puVar23 + 0x18) = puVar18;
    uStack_90 = 0x1019e04ac;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04d0;
    puStack_98 = &UNK_110428ac8;
    ppuVar10 = &puStack_b0;
    puStack_88 = puVar23;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puVar23 = &UNK_110428b00;
    func_0x000107c613fc(&UNK_110428b00,0x18,7);
    *(undefined8 **)(puVar23 + 0x10) = auStack_80;
    puVar17 = &UNK_110428b28;
    func_0x000107c613fc(&UNK_110428b28,0x20,7);
    *(undefined8 *)(puVar17 + 0x10) = 0x1019e04f8;
    *(undefined **)(puVar17 + 0x18) = puVar23;
    uStack_90 = 0x1019e04b0;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04d4;
    puStack_98 = &UNK_110428b40;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar17;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puStack_108 = &UNK_110428b78;
    func_0x000107c613fc(&UNK_110428b78,0x18,7);
    *(undefined8 **)(puStack_108 + 0x10) = auStack_80;
    puVar17 = &UNK_110428ba0;
    func_0x000107c613fc(&UNK_110428ba0,0x20,7);
    uStack_100 = 0x1019e03e4;
    *(undefined8 *)(puVar17 + 0x10) = 0x1019e03e4;
    *(undefined **)(puVar17 + 0x18) = puStack_108;
    uStack_90 = 0x1019e04b4;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04d8;
    puStack_98 = &UNK_110428bb8;
    ppuVar12 = &puStack_b0;
    puStack_88 = puVar17;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    puVar17 = &UNK_110428bf0;
    func_0x000107c613fc(&UNK_110428bf0,0x18,7);
    *(undefined8 **)(puVar17 + 0x10) = auStack_80;
    puVar13 = &UNK_110428c18;
    func_0x000107c613fc(&UNK_110428c18,0x20,7);
    *(undefined8 *)(puVar13 + 0x10) = 0x1019e0500;
    *(undefined **)(puVar13 + 0x18) = puVar17;
    uStack_90 = 0x1019e04b8;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)0x1019e04dc;
    puStack_98 = &UNK_110428c30;
    ppuVar14 = &puStack_b0;
    puStack_88 = puVar13;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_88);
    func_0x000107c4c590(param_1);
    func_0x000107c60bd0(ppuVar14);
    uVar22 = 0x1019e04e4;
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    uVar19 = 0x1019e04f8;
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    uVar21 = 0x1019e04ec;
    func_0x000107c60bd0(ppuVar4);
    uVar24 = 0x1019e0500;
    func_0x000107c60bd0(ppuVar3);
    pcVar15 = FUN_1019e034c;
  }
  uVar2 = auStack_80[0];
  func_0x000100cc2344(pcVar15,puVar16);
  func_0x000100cc2344(uVar22,puStack_d0);
  func_0x000100cc2344(uStack_b8,puVar20);
  func_0x000100cc2344(uStack_c0,puVar25);
  func_0x000100cc2344(uVar21,puStack_c8);
  func_0x000100cc2344(uStack_e0,puStack_d8);
  func_0x000100cc2344(uStack_f0,puStack_e8);
  func_0x000100cc2344(uStack_f8,puVar18);
  func_0x000100cc2344(uVar19,puVar23);
  func_0x000100cc2344(uStack_100,puStack_108);
  func_0x000100cc2344(uVar24,puVar17);
  return uVar2;
}



/* Entry: 1019df7d4; end: 1019df8e7;  */

byte FUN_1019df7d4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  byte bStack_31;
  
  bStack_31 = 0;
  func_0x000107c501d8();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar5 = 0;
    puVar3 = (undefined *)0x0;
    bVar4 = 0;
  }
  else {
    puVar3 = &UNK_110428560;
    func_0x000107c613fc(&UNK_110428560,0x18,7);
    *(byte **)(puVar3 + 0x10) = &bStack_31;
    puVar1 = &UNK_110428588;
    func_0x000107c613fc(&UNK_110428588,0x20,7);
    uVar5 = 0x1019e0254;
    *(undefined8 *)(puVar1 + 0x10) = 0x1019e0254;
    *(undefined **)(puVar1 + 0x18) = puVar3;
    pcStack_48 = FUN_1019e0264;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_100de6bdc;
    puStack_50 = &UNK_1104285a0;
    ppuVar2 = &puStack_68;
    puStack_40 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_40);
    func_0x000107c4c79c(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
    bVar4 = bStack_31;
  }
  func_0x000100cc2344(uVar5,puVar3);
  return bVar4;
}



/* Entry: 1019df8e8; end: 1019e01c3;  */

/* WARNING: Possible PIC construction at 0x0001019df974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019df990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfdc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfe04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e00f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e0108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e0118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019e0194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfcb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfcc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dffc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dff58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019dfcdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019dffc4) */
/* WARNING: Removing unreachable block (ram,0x0001019dfccc) */
/* WARNING: Removing unreachable block (ram,0x0001019dfcbc) */
/* WARNING: Removing unreachable block (ram,0x0001019dfb9c) */
/* WARNING: Removing unreachable block (ram,0x0001019dfba8) */
/* WARNING: Removing unreachable block (ram,0x0001019dff54) */
/* WARNING: Removing unreachable block (ram,0x0001019dfbb0) */
/* WARNING: Removing unreachable block (ram,0x0001019dff68) */
/* WARNING: Removing unreachable block (ram,0x0001019dfbcc) */
/* WARNING: Removing unreachable block (ram,0x0001019dfb80) */
/* WARNING: Removing unreachable block (ram,0x0001019dfb84) */
/* WARNING: Removing unreachable block (ram,0x0001019dfb4c) */
/* WARNING: Removing unreachable block (ram,0x0001019dfb50) */
/* WARNING: Removing unreachable block (ram,0x0001019dfcd8) */
/* WARNING: Removing unreachable block (ram,0x0001019dfb64) */
/* WARNING: Removing unreachable block (ram,0x0001019dfed0) */
/* WARNING: Removing unreachable block (ram,0x0001019dff08) */
/* WARNING: Removing unreachable block (ram,0x0001019dfedc) */
/* WARNING: Removing unreachable block (ram,0x0001019dff28) */
/* WARNING: Removing unreachable block (ram,0x0001019dfeec) */
/* WARNING: Removing unreachable block (ram,0x0001019dff04) */
/* WARNING: Removing unreachable block (ram,0x0001019e0198) */
/* WARNING: Removing unreachable block (ram,0x0001019e011c) */
/* WARNING: Removing unreachable block (ram,0x0001019e010c) */
/* WARNING: Removing unreachable block (ram,0x0001019e00f4) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe08) */
/* WARNING: Removing unreachable block (ram,0x0001019dffd0) */
/* WARNING: Removing unreachable block (ram,0x0001019dffd4) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe14) */
/* WARNING: Removing unreachable block (ram,0x0001019dffe8) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe20) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe30) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe34) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe90) */
/* WARNING: Removing unreachable block (ram,0x0001019dfea8) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe38) */
/* WARNING: Removing unreachable block (ram,0x0001019dffcc) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe44) */
/* WARNING: Removing unreachable block (ram,0x0001019dffc8) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe5c) */
/* WARNING: Removing unreachable block (ram,0x0001019dfeac) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe74) */
/* WARNING: Removing unreachable block (ram,0x0001019dfe8c) */
/* WARNING: Removing unreachable block (ram,0x0001019dfff0) */
/* WARNING: Removing unreachable block (ram,0x0001019dfdc8) */
/* WARNING: Removing unreachable block (ram,0x0001019dff48) */
/* WARNING: Removing unreachable block (ram,0x0001019e0000) */
/* WARNING: Removing unreachable block (ram,0x0001019e0144) */
/* WARNING: Removing unreachable block (ram,0x0001019e001c) */
/* WARNING: Removing unreachable block (ram,0x0001019dfdd4) */
/* WARNING: Removing unreachable block (ram,0x0001019dfa58) */
/* WARNING: Removing unreachable block (ram,0x0001019df994) */
/* WARNING: Removing unreachable block (ram,0x0001019df99c) */
/* WARNING: Removing unreachable block (ram,0x0001019df978) */
/* WARNING: Removing unreachable block (ram,0x0001019df97c) */
/* WARNING: Removing unreachable block (ram,0x0001019dff5c) */
/* WARNING: Removing unreachable block (ram,0x0001019dfce0) */
/* WARNING: Removing unreachable block (ram,0x0001019dfd2c) */
/* WARNING: Removing unreachable block (ram,0x0001019e0124) */
/* WARNING: Removing unreachable block (ram,0x0001019df9d0) */
/* WARNING: Removing unreachable block (ram,0x0001019dfd70) */
/* WARNING: Removing unreachable block (ram,0x0001019df9e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019df8e8(undefined *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auStack_78 [24];
  
  puVar2 = &UNK_110428470;
  uVar6 = 0x18;
  func_0x000107c613fc(&UNK_110428470,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  func_0x000107c60bc4(param_3);
  puVar8 = param_1;
  func_0x0001019df578();
  puVar3 = param_1;
  uVar7 = uVar6;
  func_0x000107c4e004();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    if (uVar6 != 0) {
      uVar1 = (ulong)puVar8 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar1 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000107c6142c(0);
        FUN_1019df7d4();
        if (((ulong)param_1 & 1) == 0) {
          func_0x000107c6142c(uVar6);
          puVar8 = &UNK_110428498;
          func_0x000107c613fc(&UNK_110428498,0x20,7);
          *(code **)(puVar8 + 0x10) = FUN_1019e01c4;
          *(undefined **)(puVar8 + 0x18) = puVar2;
          lVar4 = _DAT_112de7a60;
          func_0x000107c61428(param_2 + _DAT_112de7a60,auStack_78,0,0);
          puVar8 = *(undefined **)(param_2 + lVar4);
          puVar3 = puVar8;
          func_0x000107c61174(puVar8);
          func_0x000107c61580(puVar2,2);
          func_0x0001019dee24(puVar8);
        }
        else {
          lVar4 = *(long *)(param_2 + _DAT_112de7a68);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (uVar6 != 0) {
            if (lVar4 != 0) {
              func_0x000107c615f0(lVar4);
              func_0x000107c5fadc(puVar8,uVar6);
              func_0x000107c6142c(uVar6);
              func_0x000107c440ac(lVar4);
              func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
              return;
            }
            func_0x000107c6142c(uVar6);
          }
          lVar4 = *(long *)(param_2 + _DAT_112de7a78);
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar4 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar7);
          }
          puVar3 = (undefined *)0x0;
          func_0x000108ef4e14(0,lVar4);
          func_0x000107c61180();
        }
        goto code_r0x000107c61170;
      }
    }
    func_0x000107c6142c(uVar6);
    uVar5 = 0;
    FUN_1019e01d4(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
    (**(code **)(param_3 + 0x10))(param_3,puVar3);
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c50210();
    func_0x000107c61180();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1019e01c4; end: 1019e01d3;  */

void FUN_1019e01c4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_1019e01d4(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019e01d4; end: 1019e0233;  */

void FUN_1019e01d4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1019e0234; end: 1019e0263;  */

void FUN_1019e0234(long param_1,long param_2)

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



/* Entry: 1019e0264; end: 1019e0283;  */

void FUN_1019e0264(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019e0284; end: 1019e0287;  */

void FUN_1019e0284(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1019e0288; end: 1019e0307;  */

void FUN_1019e0288(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1019e0308; end: 1019e034b;  */

void FUN_1019e0308(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  func_0x000107c61434();
  (*pcVar2)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 1019e034c; end: 1019e040f;  */

void FUN_1019e034c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1019e0410; end: 1019e0503;  */

void FUN_1019e0410(long param_1,long param_2)

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



/* Entry: 1019e0504; end: 1019e0523;  */

void FUN_1019e0504(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1019e0524; end: 1019e0533;  */

void FUN_1019e0524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019e0534; end: 1019e064f;  */

void FUN_1019e0534(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = 0;
  func_0x000100c0dfac();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112de7aa8,&UNK_10d9b2710);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x0001000285a8(0x112de7ab0,&UNK_10d9b2718);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  uVar2 = 0x1019e066c;
  func_0x0001000bdd8c(0x1019e066c,lVar1);
  func_0x0001000285a8(0x112de7ab8,&UNK_10d9b2720);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  uVar3 = 0x1019e0670;
  func_0x0001000bdd8c(0x1019e0670,lVar1);
  uVar4 = 0;
  func_0x0001001b9aa4(0);
  func_0x000107c610f8();
  func_0x000100c0e0f4(uVar2,uVar3,uVar4);
  func_0x000107c61574(lVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1019e0650; end: 1019e0673;  */

void FUN_1019e0650(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  param_1[3] = *unaff_x20;
  param_1[4] = &PTR_DAT_110428d00;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1019e0674; end: 1019e06d3;  */

long FUN_1019e0674(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112de7aa8,&UNK_10d9b2710);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1019e06d4; end: 1019e06f7;  */

void FUN_1019e06d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019e06f8; end: 1019e076b;  */

void FUN_1019e06f8(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  func_0x000100087c34(&uStack_50);
  return;
}



/* Entry: 1019e076c; end: 1019e0773;  */

void FUN_1019e076c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019e0774; end: 1019e0797;  */

void FUN_1019e0774(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019e0798; end: 1019e07f7;  */

void FUN_1019e0798(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001003d4ba0();
  *param_1 = param_2;
  return;
}



/* Entry: 1019e07f8; end: 1019e08fb;  */

void FUN_1019e07f8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  uVar3 = 0x800000010efc7f90;
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7f90);
  lVar4 = lStack_48;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(uVar1);
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      goto LAB_1019e08c0;
    }
  }
  lVar4 = 0;
  uVar3 = 0xf000000000000000;
LAB_1019e08c0:
  lVar2 = lVar4;
  FUN_1019e0904(lVar4,uVar3);
  func_0x0001000b44c0(lVar4,uVar3);
  *param_1 = lVar2;
  return;
}



/* Entry: 1019e08fc; end: 1019e0903;  */

void FUN_1019e08fc(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar3 = 0x800000010efc7f90;
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc7f90);
  lVar4 = lStack_48;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(uVar1);
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      goto LAB_1019e08c0;
    }
  }
  lVar4 = 0;
  uVar3 = 0xf000000000000000;
LAB_1019e08c0:
  lVar2 = lVar4;
  FUN_1019e0904(lVar4,uVar3);
  func_0x0001000b44c0(lVar4,uVar3);
  *param_1 = lVar2;
  return;
}



/* Entry: 1019e0904; end: 1019e16c3;  */

/* WARNING: Removing unreachable block (ram,0x0001019e0ca8) */
/* WARNING: Removing unreachable block (ram,0x0001019e1430) */
/* WARNING: Removing unreachable block (ram,0x0001019e143c) */
/* WARNING: Removing unreachable block (ram,0x0001019e0d30) */
/* WARNING: Removing unreachable block (ram,0x0001019e1440) */
/* WARNING: Removing unreachable block (ram,0x0001019e0d38) */
/* WARNING: Removing unreachable block (ram,0x0001019e16b4) */
/* WARNING: Removing unreachable block (ram,0x0001019e0d44) */
/* WARNING: Removing unreachable block (ram,0x0001019e1444) */

undefined * FUN_1019e0904(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  ulong uVar17;
  long lVar18;
  long extraout_x12;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  code *pcVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong auStack_1e8 [7];
  undefined auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_168;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_1b0 + -extraout_x8;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar21 = puVar20 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar26 = (long)puVar21 - extraout_x12;
  lVar6 = 0;
  func_0x000107c5eb9c();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  uVar17 = uVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (0xe < param_2 >> 0x3c) goto LAB_1019e14b4;
  unaff_x19 = param_2 >> 0x3e;
  uVar3 = (uint)(param_2 >> 0x20);
  lVar18 = (long)param_1 >> 0x20;
  if (uVar3 >> 0x1e < 2) {
    if (uVar3 >> 0x1e != 0) {
      if ((int)param_1 == lVar18) goto LAB_1019e14b4;
      goto LAB_1019e0a70;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_1019e14a0;
  }
  else {
    if (uVar3 >> 0x1e != 2) {
LAB_1019e14a0:
      func_0x0001000b44c0(param_1,param_2);
      puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_1019e14b4;
    }
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_1019e14b4;
LAB_1019e0a70:
    func_0x000100de78a0(param_1,param_2);
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x0;
  uStack_98 = 0;
  puStack_a0 = (undefined *)0x0;
  puVar7 = param_1;
  uVar9 = param_2;
  func_0x00010006c00c();
  FUN_1019e3370();
  puStack_178 = puVar21;
  puStack_f0 = puVar7;
  uStack_e8 = uVar9;
  uStack_e0 = param_3;
  if (uVar3 >> 0x1e == 2) {
    lVar18 = *(long *)(param_1 + 0x10);
    lVar24 = *(long *)(param_1 + 0x18);
    func_0x000107c5ec30();
    puVar21 = puVar7;
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c5ec3c();
      if (SBORROW8(lVar18,(long)puVar21)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1019e16b0);
        (*pcVar25)();
      }
      puVar7 = puVar7 + (lVar18 - (long)puVar21);
    }
    puVar23 = (undefined *)(lVar24 - lVar18);
    if (SBORROW8(lVar24,lVar18)) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x1019e16ac);
      (*pcVar25)();
    }
    func_0x000107c5ec38();
    puVar12 = puVar21;
    if ((long)puVar23 <= (long)puVar21) {
      puVar12 = puVar23;
    }
    puVar23 = (undefined *)0x0;
    if (puVar7 != (undefined *)0x0) {
      puVar23 = puVar12 + (long)puVar7;
    }
    FUN_1019e3268();
    func_0x00010006ae80(puVar7,puVar23,&puStack_b0,0,100,0,&UNK_110429018,puVar21);
  }
  else {
    if (uVar3 >> 0x1e == 1) {
      lVar24 = (long)(int)param_1;
      if (lVar18 < lVar24) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1019e16a8);
        (*pcVar25)();
      }
      func_0x000107c5ec30();
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c5ec38();
        ppuVar8 = (undefined **)0x0;
        puVar23 = puVar7;
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar23 = puVar7;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar24,(long)puVar23)) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1019e16b4);
          (*pcVar25)();
        }
        ppuVar1 = (undefined **)(puVar7 + (lVar24 - (long)puVar23));
        func_0x000107c5ec38();
        puVar7 = puVar23;
        if (lVar18 - lVar24 <= (long)puVar23) {
          puVar7 = (undefined *)(lVar18 - lVar24);
        }
        ppuVar8 = (undefined **)0x0;
        if (ppuVar1 != (undefined **)0x0) {
          ppuVar8 = ppuVar1;
        }
        puVar21 = (undefined *)0x0;
        if (ppuVar1 != (undefined **)0x0) {
          puVar21 = puVar7 + (long)ppuVar1;
        }
      }
      FUN_1019e3268();
      puVar7 = puVar23;
    }
    else {
      uStack_100._0_6_ = (undefined6)param_2;
      puVar21 = (undefined *)((long)&puStack_108 + (param_2 >> 0x30 & 0xff));
      puStack_108 = param_1;
      FUN_1019e3268();
      ppuVar8 = &puStack_108;
    }
    func_0x00010006ae80(ppuVar8,puVar21,&puStack_b0,0,100,0,&UNK_110429018,puVar7);
  }
  func_0x0001000b44c0(param_1,param_2);
  func_0x0001019e3318(&puStack_b0,0x112d49548,&UNK_10d90fde0);
  puVar7 = puStack_f0;
  uStack_188 = uStack_e8;
  uStack_190 = uStack_e0;
  puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  lStack_110 = *(long *)(puVar7 + 0x10);
  puStack_180 = puVar21;
  if (lStack_110 != 0) {
    uStack_1a8 = 0;
    puStack_1a0 = param_1;
    uStack_198 = param_2;
    func_0x000107c61434(puVar7);
    puVar21 = PTR___sSSN_11034da80;
    puStack_118 = (undefined *)0x0;
    puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar18 = 0x20;
    do {
      lStack_110 = lStack_110 + -1;
      puVar2 = (undefined8 *)(puVar7 + lVar18);
      uStack_88 = puVar2[5];
      uStack_90 = puVar2[4];
      uStack_78 = puVar2[7];
      uStack_80 = puVar2[6];
      uVar27 = puVar2[1];
      puStack_108 = (undefined *)*puVar2;
      uStack_98 = puVar2[3];
      puStack_a0 = (undefined *)puVar2[2];
      uStack_100 = uVar27;
      puStack_b0 = puStack_108;
      uStack_a8 = uVar27;
      func_0x0001019e32a8(&puStack_b0,&puStack_f0);
      uVar13 = uVar27;
      func_0x000107c61434(uVar27);
      func_0x000107c5eb88(uVar17);
      func_0x000100e8b654();
      uVar19 = uVar17;
      puVar12 = puVar21;
      func_0x000107c601f0(uVar17,puVar21,uVar13);
      pcVar25 = *(code **)(lVar16 + 8);
      (*pcVar25)(uVar17,lVar6);
      func_0x000107c6142c(uVar27);
      uVar9 = uStack_98;
      puStack_f0 = puStack_a0;
      uStack_e8 = uStack_98;
      func_0x000107c61434(uStack_98);
      func_0x000107c5eb88(uVar17);
      uVar22 = uVar17;
      puVar23 = puVar21;
      func_0x000107c601f0(uVar17,puVar21,uVar13);
      (*pcVar25)(uVar17,lVar6);
      func_0x000107c6142c(uVar9);
      uVar9 = uVar19 & 0xffffffffffff;
      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
        uVar9 = (ulong)puVar12 >> 0x38 & 0xf;
      }
      if (uVar9 == 0) {
        func_0x0001019e32e4(&puStack_b0);
        func_0x000107c6142c(puVar12);
LAB_1019e1128:
        func_0x000107c6142c(puVar23);
LAB_1019e112c:
        bVar4 = SCARRY8((long)puStack_118,1);
        puStack_118 = puStack_118 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1019e1690);
          (*pcVar25)();
        }
      }
      else {
        func_0x000107c5edd0(puVar20,uVar22,puVar23);
        func_0x000107c6142c(puVar23);
        puVar23 = puVar20;
        (**(code **)(lVar15 + 0x30))(puVar20,1,lVar5);
        if ((int)puVar23 == 1) {
          func_0x0001019e32e4(&puStack_b0);
          func_0x000107c6142c(puVar12);
          func_0x0001019e3318(puVar20,0x112d36580,&UNK_10d9016d0);
          goto LAB_1019e112c;
        }
        uVar9 = uVar26;
        puVar23 = puVar20;
        (**(code **)(lVar15 + 0x20))(uVar26,puVar20,lVar5);
        func_0x000107c5edc8();
        if (puVar23 == (undefined *)0x0) {
LAB_1019e10b0:
          func_0x000107c6142c(puVar12);
          func_0x0001019e32e4(&puStack_b0);
          (**(code **)(lVar15 + 8))(uVar26,lVar5);
          goto LAB_1019e112c;
        }
        puVar10 = puVar23;
        func_0x000107c5fb1c();
        puVar11 = puVar10;
        func_0x000107c6142c(puVar23);
        if ((uVar9 == 0x7370747468) && (puVar10 == (undefined *)0xe500000000000000)) {
          func_0x000107c6142c();
        }
        else {
          puVar11 = puVar10;
          func_0x000107c605b8(uVar9,puVar10,0x7370747468,0xe500000000000000,0);
          func_0x000107c6142c();
          if ((uVar9 & 1) == 0) goto LAB_1019e10b0;
        }
        func_0x000107c5edbc();
        if (puVar11 == (undefined *)0x0) {
LAB_1019e1108:
          pcVar25 = *(code **)(lVar15 + 8);
LAB_1019e1114:
          (*pcVar25)(uVar26,lVar5);
          func_0x0001019e32e4(&puStack_b0);
          puVar23 = puVar12;
          goto LAB_1019e1128;
        }
        puVar23 = puVar11;
        puVar14 = puVar11;
        func_0x000107c6142c();
        uVar9 = (ulong)puVar10 & 0xffffffffffff;
        if (((ulong)puVar11 & 0x2000000000000000) != 0) {
          uVar9 = (ulong)puVar11 >> 0x38 & 0xf;
        }
        if (uVar9 == 0) goto LAB_1019e1108;
        func_0x000107c5edc4();
        puVar10 = puVar14;
        puVar11 = puVar14;
        func_0x000107c6142c();
        uVar9 = (ulong)puVar23 & 0xffffffffffff;
        if (((ulong)puVar14 & 0x2000000000000000) != 0) {
          uVar9 = (ulong)puVar14 >> 0x38 & 0xf;
        }
        if (uVar9 == 0) {
          pcVar25 = *(code **)(lVar15 + 8);
          goto LAB_1019e1114;
        }
        func_0x000107c5edc4();
        if ((puVar10 == (undefined *)0x2f) && (puVar11 == (undefined *)0xe100000000000000)) {
          func_0x000107c6142c(0xe100000000000000);
          goto LAB_1019e1108;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(puVar11);
        puVar23 = puStack_178;
        if (((ulong)puVar10 & 1) != 0) goto LAB_1019e1108;
        (**(code **)(lVar15 + 0x10))(puStack_178,uVar26,lVar5);
        uVar27 = uStack_88;
        uVar13 = uStack_90;
        func_0x000100464414(0);
        func_0x000107c610f8();
        func_0x000107c61434(puVar12);
        func_0x000107c61434(uVar27);
        uVar9 = uVar19;
        func_0x000103f54014(uVar19,puVar12,puVar23,uVar13,uVar27);
        puVar23 = puStack_180;
        if (*(long *)(puStack_180 + 0x10) == 0) {
LAB_1019e1298:
          uVar22 = (ulong)puStack_168 >> 0x3e;
          if (uVar22 == 0) {
            puVar23 = *(undefined **)(((ulong)puStack_168 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar23 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
            if (((ulong)puStack_168 & 0x8000000000000000) != 0) {
              puVar23 = puStack_168;
            }
            func_0x000107c60480(puVar23);
          }
          puVar10 = puStack_180;
          puVar11 = puStack_180;
          func_0x000107c61558(puStack_180);
          puStack_f0 = puVar10;
          FUN_101687ce0(puVar23,uVar19,puVar12,puVar11);
          func_0x000107c6142c(puVar12);
          puStack_180 = puStack_f0;
          func_0x000107c61174();
          puVar23 = puStack_168;
          func_0x000107c61550();
          if ((uVar22 != 0) || (((ulong)puVar23 & 1) == 0)) {
            if (uVar22 == 0) {
              puVar23 = *(undefined **)(((ulong)puStack_168 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar23 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
              if (((ulong)puStack_168 & 0x8000000000000000) != 0) {
                puVar23 = puStack_168;
              }
              func_0x000107c60480(puVar23);
            }
            puVar12 = (undefined *)0x0;
            FUN_1019e2f0c(0,puVar23 + 1,1,puStack_168);
            puStack_168 = puVar12;
          }
          uVar22 = (ulong)puStack_168 & 0xffffffffffffff8;
          uVar19 = *(ulong *)(uVar22 + 0x10);
          if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar19) {
            puVar23 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
            FUN_1019e2f0c(puVar23,uVar19 + 1,1,puStack_168);
            uVar22 = (ulong)puVar23 & 0xffffffffffffff8;
            puStack_168 = puVar23;
          }
          *(ulong *)(uVar22 + 0x10) = uVar19 + 1;
          *(ulong *)(uVar22 + uVar19 * 8 + 0x20) = uVar9;
          func_0x0001019e32e4(&puStack_b0);
          func_0x000107c61170(uVar9);
          (**(code **)(lVar15 + 8))(uVar26,lVar5);
        }
        else {
          func_0x000107c61434(puStack_180);
          uVar22 = uVar19;
          puVar10 = puVar12;
          func_0x000100029284();
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000107c6142c(puVar23);
            goto LAB_1019e1298;
          }
          uVar19 = *(ulong *)(*(long *)(puVar23 + 0x38) + uVar22 * 8);
          func_0x000107c6142c(puVar23);
          func_0x000107c6142c(puVar12);
          puVar23 = puStack_168;
          func_0x000107c61550();
          if ((((int)puVar23 == 0) || ((long)puStack_168 < 0)) ||
             (((ulong)puStack_168 >> 0x3e & 1) != 0)) {
            FUN_1019e31ac();
          }
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x1019e16bc);
            (*pcVar25)();
          }
          uVar22 = *(ulong *)(((ulong)puStack_168 & 0xffffffffffffff8) + 0x10);
          func_0x0001019e32e4(&puStack_b0);
          if (uVar22 <= uVar19) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x1019e16c0);
            (*pcVar25)();
          }
          (**(code **)(lVar15 + 8))(uVar26,lVar5);
          lVar24 = ((ulong)puStack_168 & 0xffffffffffffff8) + uVar19 * 8;
          uVar13 = *(undefined8 *)(lVar24 + 0x20);
          *(ulong *)(lVar24 + 0x20) = uVar9;
          func_0x000107c61170(uVar13);
        }
      }
      if (lStack_110 == 0) goto LAB_1019e1414;
      lVar18 = lVar18 + 0x40;
    } while( true );
  }
  puStack_118 = (undefined *)0x0;
  goto LAB_1019e14f0;
LAB_1019e1414:
  func_0x000107c6142c(puVar7);
  param_2 = uStack_198;
  param_1 = puStack_1a0;
LAB_1019e14f0:
  puStack_b0 = (undefined *)0x0;
  uStack_a8 = 0xe000000000000000;
  func_0x000107c602fc(0x39);
  func_0x000107c5fb78(0xd000000000000023,0x800000010efc7fe0);
  puStack_f0 = *(undefined **)(puVar7 + 0x10);
  puVar21 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar21);
  func_0x000107c5fb78(0x3d64696c617620,0xe700000000000000);
  if ((ulong)puStack_168 >> 0x3e == 0) {
    puVar21 = *(undefined **)(((ulong)puStack_168 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar21 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_168) {
      puVar21 = puStack_168;
    }
    func_0x000107c60480();
  }
  puStack_f0 = puVar21;
  func_0x000107c61434(puStack_168);
  puVar21 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar23 = PTR___sSiN_11034deb0;
  puVar20 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar20);
  func_0x000107c5fb78(0x64696c61766e6920,0xe90000000000003d);
  puVar12 = puVar21;
  puStack_f0 = puStack_118;
  func_0x000107c6057c(puVar23,puVar21);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar12);
  unaff_x19 = uStack_a8;
  func_0x0001007d6c6c(1,puStack_b0,uStack_a8,unaff_x20,&PTR_DAT_110428e30);
  func_0x0001000b44c0(param_1,param_2);
  func_0x000107c6142c(puVar7);
  func_0x00010006c090(uStack_188,uStack_190);
  func_0x000107c6142c(puStack_180);
  func_0x000107c6142c(puStack_168);
  func_0x000107c6142c(unaff_x19);
LAB_1019e14b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puStack_168;
  }
  func_0x000107c60e78();
  *(undefined **)(uVar17 - 0x30) = puVar20;
  *(undefined **)(uVar17 - 0x28) = puVar21;
  *(undefined8 *)(uVar17 - 0x20) = unaff_x20;
  *(ulong *)(uVar17 - 0x18) = unaff_x19;
  *(undefined1 **)(uVar17 - 0x10) = &stack0xfffffffffffffff0;
  *(code **)(uVar17 - 8) = FUN_1019e16c4;
  func_0x000107c6157c();
  func_0x0001000d224c(uVar17 - 0x38);
  puVar20 = *(undefined **)(uVar17 - 0x38);
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc7a30);
  puVar21 = puVar20;
  func_0x000107c3ebd4(puVar20);
  func_0x000107c61574(puStack_168);
  func_0x000107c615e8(puVar20);
  func_0x000107c61170(uVar13);
  return puVar21;
}



/* Entry: 1019e16c4; end: 1019e1757; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider isTappableLinksEnabled] */

undefined8 FUN_1019e16c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc7a30);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1019e1758; end: 1019e17eb; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider isTappableLinksFromRequestEnabled] */

undefined8 FUN_1019e1758(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efc7a50);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1019e17ec; end: 1019e17f7; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider lensesUpdateBitmojiCTADisallowedTaxonomies] */

void FUN_1019e17ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1019e17f8();
  func_0x000107c61574(param_1);
  uVar2 = uVar1;
  func_0x000107c5fe08(uVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1019e17f8; end: 1019e19e3;  */

undefined * FUN_1019e17f8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *apuStack_80 [2];
  undefined8 *puStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(apuStack_80);
  puVar6 = apuStack_80[0];
  uVar3 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010efc7a80);
  uVar4 = 0;
  uVar8 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar5 = puVar6;
  func_0x000107c5c1dc(puVar6);
  func_0x000107c61180();
  func_0x000107c615e8(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  puVar6 = puVar5;
  func_0x000107c5faec(puVar5);
  func_0x000107c61170(puVar5);
  uStack_60 = 0x2c;
  uStack_58 = 0xe100000000000000;
  puStack_70 = &uStack_60;
  lVar7 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1019e31fc,apuStack_80,puVar6,uVar8);
  lVar9 = *(long *)(lVar7 + 0x10);
  if (lVar9 == 0) {
    func_0x000107c6142c(lVar7);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar9,0);
    puVar10 = (undefined8 *)(lVar7 + 0x38);
    do {
      puVar6 = apuStack_80[0];
      uVar3 = puVar10[-3];
      uVar8 = puVar10[-2];
      uVar4 = puVar10[-1];
      uVar2 = *puVar10;
      func_0x000107c61434(uVar2);
      func_0x000107c5fb2c(uVar3,uVar8,uVar4,uVar2);
      func_0x000107c6142c(uVar2);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      apuStack_80[0] = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = apuStack_80[0];
      puVar10 = puVar10 + 4;
      *(ulong *)(apuStack_80[0] + 0x10) = uVar1 + 1;
      *(undefined8 *)(apuStack_80[0] + uVar1 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(apuStack_80[0] + uVar1 * 0x10 + 0x28) = uVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    func_0x000107c6142c(lVar7);
  }
  puVar5 = puVar6;
  func_0x000100403a6c(puVar6);
  func_0x000107c6142c(puVar6);
  return puVar5;
}



/* Entry: 1019e19e4; end: 1019e1a33; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider fullScreenGameActivationCategories] */

void FUN_1019e19e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1019e1a34();
  func_0x000107c61574(param_1);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1019e1a34; end: 1019e1a8f;  */

long FUN_1019e1a34(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_1019e1ac8();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}



/* Entry: 1019e1a90; end: 1019e1ac7; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider setFullScreenGameActivationCategories:] */

void FUN_1019e1a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1019e1ac8; end: 1019e1da3;  */

undefined8 * FUN_1019e1ac8(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lStack_a8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar14 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&uStack_a0);
  uVar7 = uStack_a0;
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010efc7f60);
  uVar5 = 0;
  uVar12 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar6 = uVar7;
  func_0x000107c5c1dc(uVar7);
  func_0x000107c61180();
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar7 = uVar6;
  func_0x000107c5faec(uVar6);
  func_0x000107c61170(uVar6);
  puStack_70 = (undefined *)0x2c;
  uStack_68 = 0xe100000000000000;
  ppuStack_90 = &puStack_70;
  lVar8 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1019e3358,&uStack_a0,uVar7,uVar12);
  lVar15 = *(long *)(lVar8 + 0x10);
  if (lVar15 == 0) {
    func_0x000107c6142c(lVar8);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar15,0);
    puVar13 = (undefined8 *)(lVar8 + 0x38);
    lStack_b0 = lVar8;
    do {
      puVar16 = puStack_70;
      uVar7 = puVar13[-3];
      uVar4 = puVar13[-2];
      uVar6 = puVar13[-1];
      uVar5 = *puVar13;
      func_0x000107c61434(uVar5);
      func_0x000107c5fb2c(uVar7,uVar4,uVar6,uVar5);
      uStack_a0 = uVar7;
      uStack_98 = uVar4;
      func_0x000107c5eb68(lVar14);
      func_0x000100e8b654();
      lVar8 = lVar14;
      puVar9 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar14,PTR___sSSN_11034da80,uVar7);
      func_0x000107c6142c(uVar5);
      (**(code **)(lStack_a8 + 8))(lVar14,lVar3);
      func_0x000107c6142c(uVar4);
      uVar1 = *(ulong *)(puVar16 + 0x10);
      puStack_70 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar16 + 0x18),uVar1 + 1,1);
      }
      puVar16 = puStack_70;
      puVar13 = puVar13 + 4;
      *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
      *(long *)(puStack_70 + uVar1 * 0x10 + 0x20) = lVar8;
      *(undefined **)(puStack_70 + uVar1 * 0x10 + 0x28) = puVar9;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    func_0x000107c6142c(lStack_b0);
  }
  puVar9 = puVar16;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar16);
  puVar13 = *(undefined8 **)(puVar9 + 0x10);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x000107c6142c(puVar9);
    puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = puVar13;
    func_0x00010109b448(puVar13,0);
    puVar11 = &uStack_a0;
    func_0x00010109b930(puVar11,puVar10 + 4,puVar13,puVar9);
    func_0x00010109bac0(uStack_a0,uStack_98,ppuStack_90,uStack_88,uStack_80);
    if (puVar11 != puVar13) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019e1d70);
      (*pcVar2)();
    }
  }
  return puVar10;
}



/* Entry: 1019e1da4; end: 1019e1e37; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider isPlayGameCTAReplyCameraEnabled] */

undefined8 FUN_1019e1da4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010efc7ab0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1019e1e38; end: 1019e1ecb; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider isGamesExplorerLensNamesEnabled] */

undefined8 FUN_1019e1e38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc7ae0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 1019e1ecc; end: 1019e1f5f; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider isGamesExplorerStaticPreviewsEnabled] */

undefined8 FUN_1019e1ecc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efc7b10);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 1019e1f60; end: 1019e1ff3; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider isMainCameraGamesButtonAlwaysEnabled] */

undefined8 FUN_1019e1f60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efc7b40);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 1019e1ff4; end: 1019e2057; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider gamesExplorerHeroTiles] */

void FUN_1019e1ff4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61574(param_1);
  uVar1 = 0;
  func_0x000100464414(0);
  uVar2 = uStack_28;
  func_0x000107c5fc48(uStack_28,uVar1);
  func_0x000107c6142c(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


