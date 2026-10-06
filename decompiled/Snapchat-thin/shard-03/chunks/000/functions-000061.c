/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102442bb0; end: 102442dbf;  */

/* WARNING: Possible PIC construction at 0x000102442c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102442cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102442c54) */
/* WARNING: Removing unreachable block (ram,0x000102442c88) */
/* WARNING: Removing unreachable block (ram,0x000102442c94) */
/* WARNING: Removing unreachable block (ram,0x000102442da4) */
/* WARNING: Removing unreachable block (ram,0x000102442ca0) */
/* WARNING: Removing unreachable block (ram,0x000102442cac) */
/* WARNING: Removing unreachable block (ram,0x000102442ce4) */
/* WARNING: Removing unreachable block (ram,0x000102442cfc) */
/* WARNING: Removing unreachable block (ram,0x000102442d04) */
/* WARNING: Removing unreachable block (ram,0x000102442d10) */
/* WARNING: Removing unreachable block (ram,0x000102442d18) */
/* WARNING: Removing unreachable block (ram,0x000102442d50) */
/* WARNING: Removing unreachable block (ram,0x000102442d6c) */
/* WARNING: Removing unreachable block (ram,0x000102442d64) */
/* WARNING: Removing unreachable block (ram,0x000102442d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102442bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = unaff_x20 + _DAT_112e9a5b8;
  *(undefined8 *)(lVar1 + 8) = param_5;
  func_0x000107c61604(lVar1,param_4);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e9a5c0);
  uVar3 = puVar2[1];
  *puVar2 = param_8;
  puVar2[1] = param_9;
  func_0x000107c61434(param_9);
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112e9a5c8) = param_7;
  func_0x000107c61174(param_1);
  FUN_102441b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102442dc0; end: 10244339b;  */

/* WARNING: Possible PIC construction at 0x0001024432e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244312c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024432e8) */
/* WARNING: Removing unreachable block (ram,0x000102443334) */
/* WARNING: Removing unreachable block (ram,0x000102443304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102442dc0(char param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 *puVar10;
  long extraout_x8_00;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  double dVar26;
  ulong auStack_f0 [7];
  undefined1 auStack_b0 [48];
  
  lVar6 = 0;
  func_0x000102441e94();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)auStack_f0 + lVar5);
  lVar7 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar21 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + _DAT_112e9a5d0);
  lVar13 = *plVar1;
  if (lVar13 == 0) {
    return;
  }
  lVar17 = plVar1[1];
  lVar14 = lVar13;
  func_0x000107c614f0();
  pcVar19 = *(code **)(lVar17 + 0x10);
  func_0x000107c615f0(lVar13);
  (*pcVar19)(lVar14,lVar17);
  func_0x000107c615e8(lVar13);
  if (lVar14 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)(lVar14 + _DAT_11308f138);
  uVar22 = ((undefined8 *)(lVar14 + _DAT_11308f138))[1];
  func_0x000107c61434(uVar22);
  func_0x000107c61170(lVar14);
  if (uVar22 == 0) {
    return;
  }
  lVar13 = *plVar1;
  if (lVar13 == 0) goto code_r0x000107c6142c;
  lVar17 = plVar1[1];
  lVar14 = lVar13;
  auStack_f0[5] = uVar11;
  auStack_f0[6] = uVar22;
  func_0x000107c614f0();
  pcVar19 = *(code **)(lVar17 + 0x10);
  func_0x000107c615f0(lVar13);
  (*pcVar19)(lVar14,lVar17);
  func_0x000107c615e8(lVar13);
  uVar22 = auStack_f0[6];
  if (lVar14 == 0) goto code_r0x000107c6142c;
  uVar11 = *(undefined8 *)(lVar14 + _DAT_11308f140);
  lVar13 = ((undefined8 *)(lVar14 + _DAT_11308f140))[1];
  func_0x000107c61434(lVar13);
  func_0x000107c61170(lVar14);
  uVar22 = auStack_f0[6];
  if (lVar13 == 0) goto code_r0x000107c6142c;
  lVar14 = *plVar1;
  auStack_f0[4] = uVar11;
  if (lVar14 == 0) {
    func_0x000107c6142c(lVar13);
    goto code_r0x000107c6142c;
  }
  lVar18 = plVar1[1];
  lVar17 = lVar14;
  auStack_f0[3] = lVar13;
  func_0x000107c614f0();
  pcVar19 = *(code **)(lVar18 + 8);
  func_0x000107c615f0(lVar14);
  (*pcVar19)();
  func_0x000107c615e8();
  uVar22 = auStack_f0[3];
  if (lVar17 == 0) goto code_r0x000107c6142c;
  func_0x000107c5eec4(lVar21);
  func_0x000107c5eeac();
  auStack_f0[1] = lVar14;
  auStack_f0[2] = lVar18;
  (**(code **)(lVar15 + 8))(lVar21,lVar7);
  if (param_1 == '\x01') {
    lVar7 = *plVar1;
    uVar23 = 0;
    if (lVar7 == 0) {
      uVar22 = 0;
      uVar16 = 0;
      uVar20 = 2;
      uVar24 = 0;
    }
    else {
      lVar15 = plVar1[1];
      lVar13 = lVar7;
      func_0x000107c614f0();
      pcVar19 = *(code **)(lVar15 + 0x18);
      func_0x000107c615f0(lVar7);
      (*pcVar19)(lVar13,lVar15);
      func_0x000107c615e8(lVar7);
      lVar7 = _DAT_113090860;
      if (lVar13 == 0) {
        uVar22 = 0;
        uVar16 = 0;
        uVar20 = 2;
        uVar24 = 0;
      }
      else {
        dVar25 = *(double *)(lVar13 + _DAT_113090850);
        if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x102443388);
          (*pcVar19)();
        }
        if (dVar25 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10244338c);
          (*pcVar19)();
        }
        if (9.223372036854776e+18 <= dVar25) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x102443390);
          (*pcVar19)();
        }
        dVar26 = *(double *)(lVar13 + _DAT_113090858);
        if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x102443394);
          (*pcVar19)();
        }
        if (dVar26 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x102443398);
          (*pcVar19)();
        }
        uVar22 = 0x43e0000000000000;
        if (9.223372036854776e+18 <= dVar26) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10244339c);
          (*pcVar19)();
        }
        uVar20 = (ulong)*(byte *)(lVar13 + _DAT_113090848);
        lVar15 = *(long *)(lVar13 + _DAT_113090860);
        uVar24 = 0;
        if (lVar15 != 0) {
          if (*(long *)(lVar15 + _DAT_113090748) != 0) {
            func_0x000107c4223c();
            lVar15 = *(long *)(lVar13 + lVar7);
            uVar23 = uVar22;
            if (lVar15 == 0) goto LAB_102443104;
          }
          if (*(long *)(lVar15 + _DAT_113090750) != 0) {
            func_0x000107c4223c();
            uVar24 = uVar22;
          }
        }
LAB_102443104:
        func_0x000107c61170(lVar13);
        uVar22 = (ulong)dVar25;
        uVar16 = (ulong)dVar26;
      }
    }
    puVar8 = PTR___sSiN_11034deb0;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(_DAT_1130907c0);
    uVar4 = *(undefined1 *)(lVar17 + _DAT_1130907e0);
    func_0x000107c5eea0((long)puVar10 + (long)*(int *)(lVar6 + 0x28));
    uVar12 = 0xe700000000000000;
    uVar11 = 0x72656b63697473;
  }
  else {
    puVar8 = PTR___sSiN_11034deb0;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(_DAT_1130907c0);
    uVar4 = *(undefined1 *)(lVar17 + _DAT_1130907e0);
    func_0x000107c5eea0((long)puVar10 + (long)*(int *)(lVar6 + 0x28));
    uVar16 = 0;
    uVar22 = 0;
    uVar11 = 0x6e6f74747562;
    if (param_1 != '\0') {
      uVar11 = 0x726143646e457261;
    }
    uVar24 = 0;
    uVar12 = 0xe600000000000000;
    if (param_1 != '\0') {
      uVar12 = 0xe900000000000064;
    }
    uVar23 = 0;
    uVar20 = 2;
  }
  *puVar10 = auStack_f0[5];
  *(ulong *)((long)auStack_f0 + lVar5 + 8) = auStack_f0[6];
  *(ulong *)((long)auStack_f0 + lVar5 + 0x10) = auStack_f0[4];
  *(ulong *)((long)auStack_f0 + lVar5 + 0x18) = auStack_f0[3];
  *(ulong *)((long)auStack_f0 + lVar5 + 0x20) = auStack_f0[1];
  *(ulong *)((long)auStack_f0 + lVar5 + 0x28) = auStack_f0[2];
  *(undefined **)((long)auStack_f0 + lVar5 + 0x30) = puVar8;
  *(undefined **)(auStack_b0 + lVar5 + -8) = puVar9;
  auStack_b0[lVar5] = uVar4;
  auStack_b0[lVar5 + 1] = 1;
  puVar2 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar6 + 0x2c));
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar3 = (ulong *)((long)puVar10 + (long)*(int *)(lVar6 + 0x30));
  *puVar3 = uVar20;
  puVar3[1] = uVar22;
  puVar3[2] = uVar16;
  puVar3[3] = uVar23;
  puVar3[4] = uVar24;
  plVar1 = (long *)(unaff_x20 + _DAT_112e9a650);
  uVar22 = plVar1[1];
  *plVar1 = auStack_f0[1];
  plVar1[1] = auStack_f0[2];
  func_0x000107c61434();
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar22);
  return;
}



/* Entry: 10244339c; end: 10244452b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10244339c(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lStack_68;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e9a5d0);
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    return (undefined *)0x0;
  }
  lVar9 = plVar1[1];
  lVar2 = lVar8;
  func_0x000107c614f0();
  pcVar10 = *(code **)(lVar9 + 8);
  func_0x000107c615f0(lVar8);
  (*pcVar10)(lVar2,lVar9);
  func_0x000107c615e8(lVar8);
  if (lVar2 == 0) {
    return (undefined *)0x0;
  }
  puVar3 = PTR___sSiN_11034deb0;
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(_DAT_1130907c0,PTR___sSiN_11034deb0,
                      PTR___sSis23CustomStringConvertiblesWP_11034df00);
  puVar4 = PTR_PTR_1126b0820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lStack_68 = *(long *)(lVar2 + _DAT_1130907c8);
  if (2 < lStack_68 + 1U) {
    func_0x000107c60614(&UNK_11079a940,&lStack_68,&UNK_11079a940,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1024436e0);
    (*pcVar10)();
  }
  puVar5 = puVar3;
  func_0x000107c5fadc(puVar3,puVar7);
  puVar6 = puVar4;
  func_0x000107c5e650(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c5e848(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e418(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar5 = puVar4;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e9a610);
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    lVar13 = plVar1[1];
    lVar9 = lVar8;
    func_0x000107c614f0();
    pcVar10 = *(code **)(lVar13 + 0x10);
    func_0x000107c615f0(lVar8);
    (*pcVar10)(lVar9,lVar13);
    func_0x000107c615e8(lVar8);
    uVar11 = 0;
    if (lVar9 != 0) {
      uVar11 = *(undefined8 *)(lVar9 + _DAT_11308f138);
      lVar8 = ((undefined8 *)(lVar9 + _DAT_11308f138))[1];
      func_0x000107c61434(lVar8);
      func_0x000107c61170(lVar9);
      if (lVar8 == 0) {
        uVar11 = 0;
      }
      else {
        func_0x000107c5fadc(uVar11,lVar8);
        func_0x000107c6142c(lVar8);
      }
    }
  }
  func_0x000107c55b0c(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c5fadc(puVar3,puVar7);
  func_0x000107c6142c(puVar7);
  func_0x000107c55d74(uVar12);
  func_0x000107c61170(puVar3);
  lVar8 = *plVar1;
  if (lVar8 != 0) {
    lVar13 = plVar1[1];
    lVar9 = lVar8;
    func_0x000107c614f0();
    pcVar10 = *(code **)(lVar13 + 0x10);
    func_0x000107c615f0(lVar8);
    (*pcVar10)(lVar9,lVar13);
    func_0x000107c615e8(lVar8);
    uVar11 = 0;
    if (lVar9 == 0) goto LAB_102443658;
    uVar11 = *(undefined8 *)(lVar9 + _DAT_113815260);
    lVar8 = ((undefined8 *)(lVar9 + _DAT_113815260))[1];
    func_0x000107c61434(lVar8);
    func_0x000107c61170(lVar9);
    if (lVar8 != 0) {
      func_0x000107c5fadc(uVar11,lVar8);
      func_0x000107c6142c(lVar8);
      goto LAB_102443658;
    }
  }
  uVar11 = 0;
LAB_102443658:
  func_0x000107c57b2c(uVar12);
  func_0x000107c61170(uVar11);
  FUN_102444be4((*(byte *)(unaff_x20 + _DAT_112e9a5c8) ^ 0xff) & 1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 10244452c; end: 102444587; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl init] */

void FUN_10244452c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularLensWorkflowServicesImpl.ModularLensWorkflowImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102444558);
  (*pcVar1)();
}



/* Entry: 102444588; end: 1024446db; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024445a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102444634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102444654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024446c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102444658) */
/* WARNING: Removing unreachable block (ram,0x000102444638) */
/* WARNING: Removing unreachable block (ram,0x0001024445a8) */
/* WARNING: Removing unreachable block (ram,0x0001024446c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9a5d8));
  return;
}



/* Entry: 1024446dc; end: 1024446e3;  */

/* WARNING: Possible PIC construction at 0x000102442c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102442cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102442c54) */
/* WARNING: Removing unreachable block (ram,0x000102442c88) */
/* WARNING: Removing unreachable block (ram,0x000102442c94) */
/* WARNING: Removing unreachable block (ram,0x000102442da4) */
/* WARNING: Removing unreachable block (ram,0x000102442ca0) */
/* WARNING: Removing unreachable block (ram,0x000102442cac) */
/* WARNING: Removing unreachable block (ram,0x000102442ce4) */
/* WARNING: Removing unreachable block (ram,0x000102442cfc) */
/* WARNING: Removing unreachable block (ram,0x000102442d04) */
/* WARNING: Removing unreachable block (ram,0x000102442d10) */
/* WARNING: Removing unreachable block (ram,0x000102442d18) */
/* WARNING: Removing unreachable block (ram,0x000102442d50) */
/* WARNING: Removing unreachable block (ram,0x000102442d6c) */
/* WARNING: Removing unreachable block (ram,0x000102442d64) */
/* WARNING: Removing unreachable block (ram,0x000102442d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024446dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = unaff_x20 + _DAT_112e9a5b8;
  *(undefined8 *)(lVar1 + 8) = param_5;
  func_0x000107c61604(lVar1,param_4);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e9a5c0);
  uVar3 = puVar2[1];
  *puVar2 = param_8;
  puVar2[1] = param_9;
  func_0x000107c61434(param_9);
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112e9a5c8) = param_7;
  func_0x000107c61174(param_1);
  FUN_102441b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024446e4; end: 102444b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024446e4(double param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  lVar12 = _DAT_112e9a5e0;
  if (*(char *)(unaff_x20 + _DAT_112e9a5e0) != '\x01') {
    return;
  }
  iVar6 = (int)*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9a5e8) + _DAT_112f95fb8);
  func_0x000107c49f74();
  if (iVar6 == 0) {
    return;
  }
  *(byte *)(unaff_x20 + lVar12) = (*(byte *)(unaff_x20 + lVar12) ^ 0xff) & 1;
  func_0x00010244549c(9,0);
  plVar1 = (long *)(unaff_x20 + _DAT_112e9a5d0);
  lVar12 = *plVar1;
  if (lVar12 == 0) {
    return;
  }
  lVar13 = plVar1[1];
  lVar7 = lVar12;
  func_0x000107c614f0();
  pcVar14 = *(code **)(lVar13 + 0x10);
  func_0x000107c615f0(lVar12);
  (*pcVar14)(lVar7,lVar13);
  func_0x000107c615e8(lVar12);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(lVar7 + _DAT_11308f130);
    uVar3 = ((undefined8 *)(lVar7 + _DAT_11308f130))[1];
    func_0x000107c61434(uVar3);
    func_0x000107c61170(lVar7);
    func_0x0001000d224c(&puStack_80);
    puVar11 = puStack_80;
    if (puStack_80 == (undefined *)0x0) {
      func_0x000107c6142c(uVar3);
      lVar12 = *plVar1;
      goto joined_r0x000102444828;
    }
    func_0x000107c5fadc(uVar8,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c4532c(puVar11);
    func_0x000107c615e8(puVar11);
    func_0x000107c61170(uVar8);
  }
  lVar12 = *plVar1;
joined_r0x000102444828:
  if (lVar12 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5f0);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e9a5f0))[1];
    lVar13 = plVar1[1];
    lVar7 = lVar12;
    func_0x000107c614f0();
    pcVar14 = *(code **)(lVar13 + 0x10);
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(lVar12);
    (*pcVar14)(lVar7,lVar13);
    func_0x000107c615e8(lVar12);
    if (lVar7 != 0) {
      uVar2 = *(undefined8 *)(lVar7 + _DAT_11308f130);
      uVar4 = ((undefined8 *)(lVar7 + _DAT_11308f130))[1];
      func_0x000107c61434(uVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
      puStack_80 = (undefined *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
      func_0x000107c5fb78(uVar2,uVar4);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar11 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar11);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1 * 1000.0,&puStack_80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar5 = uStack_78;
      puVar11 = puStack_80;
      puVar9 = PTR_PTR_1126b90e8;
      func_0x000107c610f8(PTR_PTR_1126b90e8);
      puVar10 = puVar11;
      func_0x000107c5fadc(puVar11,uVar5);
      func_0x000107c5fadc(uVar8,uVar3);
      func_0x000107c30d80(puVar9,puVar10,2,0,0,uVar8,0);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(uVar8);
      func_0x000102445074(param_1 * 1000.0,puVar11,uVar5,uVar2,uVar4,0xd000000000000015,
                          0x800000010f09d420);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar5);
      if (puVar11 != (undefined *)0x0) {
        func_0x00010468c5c4(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar9);
        func_0x000107c61174();
        puVar10 = puVar11;
        func_0x00010468be64();
        puStack_80 = puVar10;
        func_0x0001002a64a8(&puStack_80);
        lVar12 = unaff_x20 + _DAT_112e9a5b8;
        lVar7 = lVar12;
        func_0x000107c61618();
        if (lVar7 != 0) {
          lVar13 = *(long *)(lVar12 + 8);
          lVar12 = lVar7;
          func_0x000107c614f0();
          (**(code **)(lVar13 + 0x20))(puVar10,lVar12,lVar13);
          func_0x000107c615e8(lVar7);
        }
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar9);
        puVar9 = puVar11;
      }
      func_0x000107c61170(puVar9);
    }
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102444b14; end: 102444b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444b14(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar11 = _DAT_112e9a5e0;
  if ((*(byte *)(unaff_x20 + _DAT_112e9a5e0) & 1) == 0) {
    iVar4 = (int)*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9a5e8) + _DAT_112f95fb8);
    func_0x000107c49f74();
    if (iVar4 != 0) {
      *(byte *)(unaff_x20 + lVar11) = (*(byte *)(unaff_x20 + lVar11) ^ 0xff) & 1;
      lVar11 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
      if (lVar11 != 0) {
        lVar10 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
        lVar5 = lVar11;
        func_0x000107c614f0();
        pcVar14 = *(code **)(lVar10 + 0x10);
        func_0x000107c615f0(lVar11);
        (*pcVar14)(lVar5,lVar10);
        func_0x000107c615e8(lVar11);
        if (lVar5 != 0) {
          uVar1 = *(undefined8 *)(lVar5 + _DAT_11308f130);
          uVar2 = ((undefined8 *)(lVar5 + _DAT_11308f130))[1];
          uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5f8);
          func_0x000107c61434(uVar2);
          func_0x000107c3ceac(uVar12);
          lStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x1f);
          func_0x000107c5fb78(0xd000000000000013,0x800000010f09d460);
          func_0x000107c5fb78(uVar1,uVar2);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar3 = PTR___sSiN_11034deb0;
          puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar8);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c6057c(puVar3,puVar9);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar9);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c5fddc(param_1 * 1000.0,&lStack_80,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0x29,0xe100000000000000);
          uVar12 = uStack_78;
          lVar11 = lStack_80;
          FUN_102445074(param_1 * 1000.0,lStack_80,uStack_78,uVar1,uVar2,0xd00000000000001d,
                        0x800000010f09d480);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(uVar12);
          if (lVar11 != 0) {
            lVar6 = lVar11;
            FUN_10244711c(lVar11,10,0);
            lVar10 = unaff_x20 + _DAT_112e9a5b8;
            lVar7 = lVar10;
            func_0x000107c61618();
            if (lVar7 != 0) {
              lVar13 = *(long *)(lVar10 + 8);
              lVar10 = lVar7;
              func_0x000107c614f0();
              (**(code **)(lVar13 + 0x18))(lVar11,lVar6,lVar10,lVar13);
              func_0x000107c615e8(lVar7);
            }
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar11);
            lVar5 = lVar6;
          }
          func_0x000107c61170(lVar5);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 102444b18; end: 102444b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444b18(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar11 = _DAT_112e9a5e0;
  if ((*(byte *)(unaff_x20 + _DAT_112e9a5e0) & 1) == 0) {
    iVar4 = (int)*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9a5e8) + _DAT_112f95fb8);
    func_0x000107c49f74();
    if (iVar4 != 0) {
      *(byte *)(unaff_x20 + lVar11) = (*(byte *)(unaff_x20 + lVar11) ^ 0xff) & 1;
      lVar11 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
      if (lVar11 != 0) {
        lVar10 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
        lVar5 = lVar11;
        func_0x000107c614f0();
        pcVar14 = *(code **)(lVar10 + 0x10);
        func_0x000107c615f0(lVar11);
        (*pcVar14)(lVar5,lVar10);
        func_0x000107c615e8(lVar11);
        if (lVar5 != 0) {
          uVar1 = *(undefined8 *)(lVar5 + _DAT_11308f130);
          uVar2 = ((undefined8 *)(lVar5 + _DAT_11308f130))[1];
          uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5f8);
          func_0x000107c61434(uVar2);
          func_0x000107c3ceac(uVar12);
          lStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x1f);
          func_0x000107c5fb78(0xd000000000000013,0x800000010f09d460);
          func_0x000107c5fb78(uVar1,uVar2);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar3 = PTR___sSiN_11034deb0;
          puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar8);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c6057c(puVar3,puVar9);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar9);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c5fddc(param_1 * 1000.0,&lStack_80,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0x29,0xe100000000000000);
          uVar12 = uStack_78;
          lVar11 = lStack_80;
          FUN_102445074(param_1 * 1000.0,lStack_80,uStack_78,uVar1,uVar2,0xd00000000000001d,
                        0x800000010f09d480);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(uVar12);
          if (lVar11 != 0) {
            lVar6 = lVar11;
            FUN_10244711c(lVar11,10,0);
            lVar10 = unaff_x20 + _DAT_112e9a5b8;
            lVar7 = lVar10;
            func_0x000107c61618();
            if (lVar7 != 0) {
              lVar13 = *(long *)(lVar10 + 8);
              lVar10 = lVar7;
              func_0x000107c614f0();
              (**(code **)(lVar13 + 0x18))(lVar11,lVar6,lVar10,lVar13);
              func_0x000107c615e8(lVar7);
            }
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar11);
            lVar5 = lVar6;
          }
          func_0x000107c61170(lVar5);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 102444b88; end: 102444ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444b88(double param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000107c61174();
    lVar14 = lVar3;
    FUN_102441b44();
    func_0x000107c61170(lVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112e9a5d0);
    lVar3 = *plVar1;
    *plVar1 = lVar14;
    plVar1[1] = (long)&PTR_DAT_110509478;
    func_0x000107c615e8(lVar3);
  }
  puVar2 = (ulong *)(unaff_x20 + _DAT_112e9a5d0);
  uVar16 = *puVar2;
  if (uVar16 == 0) {
    return;
  }
  uVar18 = puVar2[1];
  uVar17 = uVar16;
  func_0x000107c614f0();
  pcVar12 = *(code **)(uVar18 + 8);
  func_0x000107c615f0(uVar16);
  (*pcVar12)(uVar17,uVar18);
  func_0x000107c615e8(uVar16);
  if (uVar17 == 0) {
    return;
  }
  func_0x000107c61170();
  if ((param_2 != 0) && (uVar16 = *puVar2, uVar16 != 0)) {
    uVar17 = puVar2[1];
    uVar18 = uVar16;
    func_0x000107c614f0();
    pcVar12 = *(code **)(uVar17 + 0x10);
    func_0x000107c615f0(uVar16);
    (*pcVar12)(uVar18,uVar17);
    func_0x000107c615e8();
    uVar17 = uVar16;
    if (uVar18 != 0) {
      uVar16 = *(ulong *)(uVar18 + _DAT_113815208);
      func_0x000107c61434(uVar16);
      func_0x000107c61170();
      uVar17 = uVar18;
      if (uVar16 != 0) {
        uVar17 = uVar16 & 0xffffffffffffff8;
        if (uVar16 >> 0x3e == 0) {
          uVar18 = *(ulong *)(uVar17 + 0x10);
        }
        else {
          uVar18 = uVar16;
          if (-1 < (long)uVar16) {
            uVar18 = uVar17;
          }
          func_0x000107c60480();
        }
        if (uVar18 != 0) {
          if ((uVar16 & 0xc000000000000001) == 0) {
            lVar3 = *(long *)(uVar17 + 0x10);
            func_0x000107c6142c();
            uVar17 = uVar16;
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1024478fc);
              (*pcVar12)();
            }
            goto LAB_10244732c;
          }
          func_0x000100e471e4(0,uVar16);
          func_0x000107c615e8();
        }
        func_0x000107c6142c();
        uVar17 = uVar16;
      }
    }
  }
LAB_10244732c:
  FUN_102445a38();
  uVar16 = *(ulong *)(uVar17 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar16,0);
    uVar18 = 0;
    do {
      uVar4 = 0x635f646e655f7261;
      uVar13 = 0xeb00000000647261;
      if (*(ulong *)(uVar17 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1024478cc);
        (*pcVar12)();
      }
      lVar3 = *(long *)(uVar17 + 0x20 + uVar18 * 8);
      if (lVar3 < 2) {
        if (lVar3 == 0) {
          uVar13 = 0xe400000000000000;
          uVar4 = 0x656e6f6e;
        }
        else {
          if (lVar3 != 1) {
LAB_1024478fc:
            lStack_78 = lVar3;
            func_0x000107c60614(&UNK_110715778,&lStack_78,&UNK_110715778,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x102447920);
            (*pcVar12)();
          }
          uVar13 = 0xe600000000000000;
          uVar4 = 0x6e6f74747562;
        }
      }
      else if (lVar3 == 2) {
        uVar13 = 0xe700000000000000;
        uVar4 = 0x72656b63697473;
      }
      else if (lVar3 != 3) goto LAB_1024478fc;
      uVar19 = *(ulong *)(puStack_88 + 0x10);
      if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar19) {
        func_0x000100403514(1 < *(ulong *)(puStack_88 + 0x18),uVar19 + 1,1);
      }
      uVar18 = uVar18 + 1;
      *(ulong *)(puStack_88 + 0x10) = uVar19 + 1;
      *(undefined8 *)(puStack_88 + uVar19 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(puStack_88 + uVar19 * 0x10 + 0x28) = uVar13;
      puVar6 = puStack_88;
    } while (uVar16 != uVar18);
  }
  uVar4 = 0x112d38270;
  puStack_88 = puVar6;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar13 = uVar4;
  func_0x00010011d734();
  uVar5 = 0x2d;
  uVar10 = 0xe100000000000000;
  func_0x000107c5fa80(0x2d,0xe100000000000000,uVar4,uVar13);
  func_0x000107c6142c(puVar6);
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9a618);
  if (lVar3 == 0) {
    func_0x000107c6142c(uVar10);
    lVar14 = *(long *)(uVar17 + 0x10);
  }
  else {
    func_0x000107c5fadc(uVar5,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c4b9d8(lVar3);
    func_0x000107c61170(uVar5);
    lVar14 = *(long *)(uVar17 + 0x10);
  }
  for (; lVar14 != 0; lVar14 = lVar14 + -1) {
    if (lVar3 != 0) {
      func_0x000107c542ac(lVar3);
      func_0x000107c4bf54(lVar3);
    }
  }
  func_0x000107c6142c(uVar17);
  uVar16 = *puVar2;
  if (uVar16 != 0) {
    uVar18 = puVar2[1];
    uVar17 = uVar16;
    func_0x000107c614f0();
    pcVar12 = *(code **)(uVar18 + 8);
    func_0x000107c615f0(uVar16);
    (*pcVar12)(uVar17,uVar18);
    func_0x000107c615e8(uVar16);
    if (uVar17 != 0) {
      puVar6 = PTR___sSiN_11034deb0;
      puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(_DAT_1130907c0,PTR___sSiN_11034deb0,
                          PTR___sSis23CustomStringConvertiblesWP_11034df00);
      uVar16 = *puVar2;
      if (uVar16 != 0) {
        uVar19 = puVar2[1];
        uVar18 = uVar16;
        func_0x000107c614f0();
        pcVar12 = *(code **)(uVar19 + 0x10);
        func_0x000107c615f0(uVar16);
        (*pcVar12)(uVar18,uVar19);
        func_0x000107c615e8(uVar16);
        if (uVar18 != 0) {
          uVar4 = *(undefined8 *)(uVar18 + _DAT_11308f130);
          uVar13 = ((undefined8 *)(uVar18 + _DAT_11308f130))[1];
          func_0x000107c61434(uVar13);
          func_0x000107c61170(uVar18);
          func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
          puStack_88 = (undefined *)0x0;
          uStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x1b);
          func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
          func_0x000107c5fb78(uVar4,uVar13);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          lStack_78 = 5;
          puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
          func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar9);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c5fddc(param_1 * 1000.0,&puStack_88,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          uVar5 = uStack_80;
          puVar9 = puStack_88;
          puVar7 = PTR_PTR_1126b90e8;
          func_0x000107c610f8(PTR_PTR_1126b90e8);
          puVar8 = puVar9;
          func_0x000107c5fadc(puVar9,uVar5);
          func_0x000107c5fadc(puVar6,puVar11);
          func_0x000107c30d80(puVar7,puVar8,5,puVar6,0,0,0);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar6);
          FUN_102445074(param_1 * 1000.0,puVar9,uVar5,uVar4,uVar13,0xd000000000000015,
                        0x800000010f09d420);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar5);
          if (puVar9 != (undefined *)0x0) {
            func_0x00010468c5c4(0);
            func_0x000107c610f8();
            func_0x000107c61174(puVar7);
            func_0x000107c61174();
            puVar6 = puVar9;
            func_0x00010468be64();
            puStack_88 = puVar6;
            func_0x0001002a64a8(&puStack_88);
            lVar3 = unaff_x20 + _DAT_112e9a5b8;
            lVar14 = lVar3;
            func_0x000107c61618();
            if (lVar14 != 0) {
              lVar15 = *(long *)(lVar3 + 8);
              lVar3 = lVar14;
              func_0x000107c614f0();
              (**(code **)(lVar15 + 0x20))(puVar6,lVar3,lVar15);
              func_0x000107c615e8(lVar14);
            }
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar7);
            puVar7 = puVar9;
          }
          func_0x000107c61170(puVar7);
        }
      }
      func_0x000107c61170(uVar17);
      func_0x000107c6142c(puVar11);
    }
  }
  return;
}



/* Entry: 102444ba4; end: 102444be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444ba4(void)

{
  long unaff_x20;
  
  func_0x000107c5052c(*(undefined8 *)(unaff_x20 + _DAT_112e9a610));
  if (*(long *)(unaff_x20 + _DAT_112e9a618) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1914d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112e9a618),
               PTR_s_setDpaAdShownWithIsShown_buttonT_112641f50,0,0);
    return;
  }
  return;
}



/* Entry: 102444be4; end: 102444ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444be4(double param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
  if (lVar8 != 0) {
    lVar9 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
    lVar4 = lVar8;
    func_0x000107c614f0();
    pcVar10 = *(code **)(lVar9 + 0x10);
    func_0x000107c615f0(lVar8);
    (*pcVar10)(lVar4,lVar9);
    func_0x000107c615e8(lVar8);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(lVar4 + _DAT_11308f130);
      uVar2 = ((undefined8 *)(lVar4 + _DAT_11308f130))[1];
      func_0x000107c61434(uVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
      puStack_80 = (undefined *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
      func_0x000107c5fb78(uVar1,uVar2);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1 * 1000.0,&puStack_80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar3 = uStack_78;
      puVar7 = puStack_80;
      puVar5 = PTR_PTR_1126b90e8;
      func_0x000107c610f8(PTR_PTR_1126b90e8);
      puVar6 = puVar7;
      func_0x000107c5fadc(puVar7,uVar3);
      func_0x000107c30d80(puVar5,puVar6,0,0,0,0,param_2 & 1);
      func_0x000107c61170(puVar6);
      FUN_102445074(param_1 * 1000.0,puVar7,uVar3,uVar1,uVar2,0xd000000000000015,0x800000010f09d420)
      ;
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar3);
      if (puVar7 != (undefined *)0x0) {
        func_0x00010468c5c4(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar5);
        func_0x000107c61174();
        puVar6 = puVar7;
        func_0x00010468be64();
        puStack_80 = puVar6;
        func_0x0001002a64a8(&puStack_80);
        lVar8 = unaff_x20 + _DAT_112e9a5b8;
        lVar4 = lVar8;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar9 = *(long *)(lVar8 + 8);
          lVar8 = lVar4;
          func_0x000107c614f0();
          (**(code **)(lVar9 + 0x20))(puVar6,lVar8,lVar9);
          func_0x000107c615e8(lVar4);
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        puVar5 = puVar7;
      }
      func_0x000107c61170(puVar5);
    }
  }
  return;
}



/* Entry: 102444ec4; end: 102444f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444ec4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2 + _DAT_112e9a5b8;
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      func_0x000107c614f0();
      (**(code **)(lVar3 + 8))
                (param_1,*(undefined8 *)(param_3 + _DAT_11308f130),
                 ((undefined8 *)(param_3 + _DAT_11308f130))[1],0,lVar2,lVar3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102444f88; end: 102445073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102444f88(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e9a5e8;
  if (param_1 != 0) {
    iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + _DAT_112e9a5e8) + _DAT_112f95fb8);
    func_0x000107c49f74();
    if (iVar2 != 0) {
      func_0x000107c4283c(*(undefined8 *)(*(long *)(param_1 + lVar1) + _DAT_112f95fb8));
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + lVar1) + _DAT_112f95fc0);
    func_0x000107c3edd4(uVar3);
    func_0x000107c61180();
    func_0x000107c4ab30(*(undefined8 *)(*(long *)(param_1 + lVar1) + _DAT_112f95fb8));
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102445074; end: 10244574f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102445074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uStack_90;
  ulong uStack_88;
  ulong auStack_80 [2];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e9a5d0);
  lVar13 = *plVar1;
  if (lVar13 == 0) {
    return (undefined *)0x0;
  }
  lVar10 = plVar1[1];
  lVar3 = lVar13;
  func_0x000107c614f0();
  pcVar16 = *(code **)(lVar10 + 0x10);
  func_0x000107c615f0(lVar13);
  (*pcVar16)(lVar3,lVar10);
  func_0x000107c615e8(lVar13);
  if (lVar3 == 0) {
    return (undefined *)0x0;
  }
  lVar13 = *plVar1;
  if (lVar13 != 0) {
    lVar11 = plVar1[1];
    lVar10 = lVar13;
    func_0x000107c614f0();
    pcVar16 = *(code **)(lVar11 + 0x10);
    func_0x000107c615f0(lVar13);
    (*pcVar16)(lVar10,lVar11);
    func_0x000107c615e8(lVar13);
    if (lVar10 != 0) {
      uVar12 = *(ulong *)(lVar10 + _DAT_113815208);
      func_0x000107c61434(uVar12);
      func_0x000107c61170(lVar10);
      if (uVar12 != 0) {
        uVar14 = uVar12 & 0xffffffffffffff8;
        if (uVar12 >> 0x3e == 0) {
          if (*(long *)(uVar14 + 0x10) == 0) goto LAB_1024451b8;
LAB_102445178:
          if ((uVar12 & 0xc000000000000001) == 0) {
            if (*(long *)(uVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10244549c);
              (*pcVar16)();
            }
            uVar4 = *(undefined8 *)(uVar12 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar4 = 0;
            func_0x000100e471e4(0,uVar12);
          }
        }
        else {
          uVar5 = uVar12;
          if (-1 < (long)uVar12) {
            uVar5 = uVar14;
          }
          func_0x000107c60480();
          if (uVar5 != 0) goto LAB_102445178;
LAB_1024451b8:
          uVar4 = 0;
        }
        func_0x000107c6142c(uVar12);
        goto LAB_1024451c4;
      }
    }
  }
  uVar4 = 0;
LAB_1024451c4:
  lVar13 = lVar3;
  func_0x0001084c6f7c(lVar3,uVar4);
  func_0x0001000d224c(auStack_80);
  uVar12 = auStack_80[0];
  if (auStack_80[0] == 0) {
    uStack_88 = 0;
  }
  else {
    uVar6 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    uStack_88 = uVar12;
    func_0x000107c5ce1c();
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar6);
  }
  func_0x0001000d224c(auStack_80);
  uVar12 = auStack_80[0];
  if (auStack_80[0] == 0) {
    uStack_90 = 0;
  }
  else {
    uVar6 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    uStack_90 = uVar12;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar6);
  }
  func_0x0001000d224c(auStack_80);
  if (auStack_80[0] == 0) {
    uVar12 = 0;
  }
  else {
    uVar6 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    uVar12 = auStack_80[0];
    func_0x000107c42f50();
    func_0x000107c615e8(auStack_80[0]);
    func_0x000107c61170(uVar6);
  }
  if ((long)(uStack_90 | uStack_88 | uVar12) < 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x102445488);
    (*pcVar16)();
  }
  uVar6 = *(undefined8 *)(lVar3 + _DAT_11308f140);
  lVar10 = ((undefined8 *)(lVar3 + _DAT_11308f140))[1];
  uVar15 = *(undefined8 *)(lVar3 + _DAT_11308f138);
  lVar11 = ((undefined8 *)(lVar3 + _DAT_11308f138))[1];
  uVar9 = *(undefined8 *)(lVar3 + _DAT_113815200);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5c0);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e9a5c0))[1];
  uVar8 = *(undefined8 *)(lVar3 + _DAT_11308f128);
  func_0x000107c61434(lVar2);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  uVar17 = 0;
  if (lVar10 != 0) {
    func_0x000107c5fadc(uVar6,lVar10);
    uVar17 = uVar6;
  }
  if (lVar11 == 0) {
    uVar15 = 0;
  }
  else {
    func_0x000107c5fadc(uVar15,lVar11);
  }
  if (lVar2 == 0) {
    uVar18 = 0;
  }
  else {
    func_0x000107c5fadc(uVar18,lVar2);
    func_0x000107c6142c(lVar2);
  }
  puVar7 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c30ad4(param_1,puVar7,param_2,param_4,uVar17,uVar15,uVar18,uStack_88,uStack_90,uVar12
                      ,0,0,uVar9,lVar13,lVar13,uVar8,param_6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(param_6);
  return puVar7;
}



/* Entry: 102445750; end: 102445a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102445750(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
  if (lVar8 != 0) {
    lVar9 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
    lVar4 = lVar8;
    func_0x000107c614f0();
    pcVar10 = *(code **)(lVar9 + 0x10);
    func_0x000107c615f0(lVar8);
    (*pcVar10)(lVar4,lVar9);
    func_0x000107c615e8(lVar8);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(lVar4 + _DAT_11308f130);
      uVar2 = ((undefined8 *)(lVar4 + _DAT_11308f130))[1];
      func_0x000107c61434(uVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
      puStack_70 = (undefined *)0x0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
      func_0x000107c5fb78(uVar1,uVar2);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1 * 1000.0,&puStack_70,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar3 = uStack_68;
      puVar7 = puStack_70;
      puVar5 = PTR_PTR_1126b90e8;
      func_0x000107c610f8(PTR_PTR_1126b90e8);
      puVar6 = puVar7;
      func_0x000107c5fadc(puVar7,uVar3);
      func_0x000107c30d80(puVar5,puVar6,4,0,0,0,0);
      func_0x000107c61170(puVar6);
      FUN_102445074(param_1 * 1000.0,puVar7,uVar3,uVar1,uVar2,0xd000000000000015,0x800000010f09d420)
      ;
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar3);
      if (puVar7 != (undefined *)0x0) {
        func_0x00010468c5c4(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar5);
        func_0x000107c61174();
        puVar6 = puVar7;
        func_0x00010468be64();
        puStack_70 = puVar6;
        func_0x0001002a64a8(&puStack_70);
        lVar8 = unaff_x20 + _DAT_112e9a5b8;
        lVar4 = lVar8;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar9 = *(long *)(lVar8 + 8);
          lVar8 = lVar4;
          func_0x000107c614f0();
          (**(code **)(lVar9 + 0x20))(puVar6,lVar8,lVar9);
          func_0x000107c615e8(lVar4);
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        puVar5 = puVar7;
      }
      func_0x000107c61170(puVar5);
    }
  }
  func_0x00010244549c(3,2);
  return;
}



/* Entry: 102445a38; end: 102445d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102445a38(void)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  byte bVar11;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (ulong *)(unaff_x20 + _DAT_112e9a5d0);
  uVar7 = *puVar1;
  if (uVar7 == 0) goto LAB_102445c1c;
  uVar8 = puVar1[1];
  uVar3 = uVar7;
  func_0x000107c614f0();
  pcVar10 = *(code **)(uVar8 + 8);
  func_0x000107c615f0(uVar7);
  (*pcVar10)(uVar3,uVar8);
  func_0x000107c615e8(uVar7);
  if (uVar3 == 0) {
    uVar7 = *puVar1;
    if (uVar7 == 0) goto LAB_102445c1c;
    bVar11 = 0;
LAB_102445ae4:
    uVar8 = puVar1[1];
    uVar3 = uVar7;
    func_0x000107c614f0();
    pcVar10 = *(code **)(uVar8 + 0x18);
    func_0x000107c615f0(uVar7);
    (*pcVar10)(uVar3,uVar8);
    func_0x000107c615e8(uVar7);
    bVar2 = uVar3 == 0;
    if (uVar3 != 0) {
      func_0x000107c61170(uVar3);
    }
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      if ((bVar11 & 1) != 0) {
        uVar8 = 0;
        goto LAB_102445b80;
      }
      if (uVar3 == 0) goto LAB_102445c1c;
      uVar8 = 0;
LAB_102445c74:
      puVar5 = (undefined *)0x0;
      FUN_102441548(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      goto LAB_102445bcc;
    }
    uVar9 = puVar1[1];
    uVar8 = uVar7;
    func_0x000107c614f0();
    pcVar10 = *(code **)(uVar9 + 0x28);
    func_0x000107c615f0(uVar7);
    (*pcVar10)(uVar8,uVar9);
    func_0x000107c615e8(uVar7);
    if (bVar11 != 0) goto LAB_102445b80;
    if (uVar3 != 0) goto LAB_102445bc0;
  }
  else {
    bVar11 = *(byte *)(uVar3 + _DAT_113090800);
    func_0x000107c61170(uVar3);
    uVar7 = *puVar1;
    if (uVar7 != 0) goto LAB_102445ae4;
    if ((bVar11 & 1) == 0) goto LAB_102445c1c;
    uVar8 = 0;
    bVar2 = true;
LAB_102445b80:
    puVar4 = (undefined *)0x0;
    FUN_102441548(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    uVar7 = *(ulong *)(puVar4 + 0x10);
    puVar6 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_102441548(puVar6,uVar7 + 1,1,puVar4);
    }
    *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
    *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = 1;
    if (!bVar2) {
LAB_102445bc0:
      puVar4 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) goto LAB_102445c74;
LAB_102445bcc:
      uVar7 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_102441548(puVar6,uVar7 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = 2;
    }
  }
  if ((uVar8 & 1) != 0) {
    puVar4 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_102441548(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar7 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_102441548(puVar6,uVar7 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
    *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = 3;
  }
LAB_102445c1c:
  if (*(long *)(puVar6 + 0x10) == 0) {
    puVar4 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_102441548(0,1,1,puVar6);
    }
    uVar7 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_102441548(puVar6,uVar7 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
    *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = 0;
  }
  return puVar6;
}



/* Entry: 102445d50; end: 102446117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102445d50(double param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined *puStack_80;
  long lStack_78;
  
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5f8);
  func_0x000107c3ceac(uVar12);
  param_1 = param_1 * 1000.0;
  puStack_80 = (undefined *)0x0;
  lStack_78 = -0x2000000000000000;
  func_0x000107c602fc(0x21);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f09d440);
  func_0x000107c5fddc(param_1,&puStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  lVar4 = lStack_78;
  puVar9 = puStack_80;
  plVar1 = (long *)(unaff_x20 + _DAT_112e9a5f0);
  puVar5 = (undefined *)*plVar1;
  lVar10 = plVar1[1];
  if ((puVar5 != puStack_80 || lVar10 != lStack_78) &&
     (func_0x000107c605b8(puVar5,lVar10,puStack_80,lStack_78,0), ((ulong)puVar5 & 1) == 0)) {
    *plVar1 = (long)puVar9;
    plVar1[1] = lVar4;
    func_0x000107c6142c(lVar10);
    func_0x000107c61434(lVar4);
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
  if (lVar10 != 0) {
    lVar11 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
    lVar6 = lVar10;
    func_0x000107c614f0();
    pcVar13 = *(code **)(lVar11 + 0x10);
    func_0x000107c615f0(lVar10);
    (*pcVar13)(lVar6,lVar11);
    func_0x000107c615e8(lVar10);
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(lVar6 + _DAT_11308f130);
      uVar3 = ((undefined8 *)(lVar6 + _DAT_11308f130))[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c3ceac(uVar12);
      puStack_80 = (undefined *)0x0;
      lStack_78 = -0x2000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
      func_0x000107c5fb78(uVar2,uVar3);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar5 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1 * 1000.0,&puStack_80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      lVar10 = lStack_78;
      puVar5 = puStack_80;
      puVar7 = PTR_PTR_1126b90e8;
      func_0x000107c610f8(PTR_PTR_1126b90e8);
      puVar8 = puVar5;
      func_0x000107c5fadc(puVar5,lVar10);
      func_0x000107c5fadc(puVar9,lVar4);
      func_0x000107c30d80(puVar7,puVar8,2,0,0,puVar9,0);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      FUN_102445074(param_1 * 1000.0,puVar5,lVar10,uVar2,uVar3,0xd000000000000015,0x800000010f09d420
                   );
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(lVar10);
      if (puVar5 != (undefined *)0x0) {
        func_0x00010468c5c4(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar7);
        func_0x000107c61174();
        puVar9 = puVar5;
        func_0x00010468be64();
        puStack_80 = puVar9;
        func_0x0001002a64a8(&puStack_80);
        lVar10 = unaff_x20 + _DAT_112e9a5b8;
        lVar6 = lVar10;
        func_0x000107c61618();
        if (lVar6 != 0) {
          lVar11 = *(long *)(lVar10 + 8);
          lVar10 = lVar6;
          func_0x000107c614f0();
          (**(code **)(lVar11 + 0x20))(puVar9,lVar10,lVar11);
          func_0x000107c615e8(lVar6);
        }
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar7);
        puVar7 = puVar5;
      }
      func_0x000107c61170(puVar7);
    }
  }
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 102446118; end: 1024461f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102446118(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e9a5e8) + _DAT_112f95fb8);
  puVar1 = &UNK_110509578;
  func_0x000107c613fc(&UNK_110509578,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x102447b68;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110509590;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c42844(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 1024461f4; end: 10244621b; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl sponsoredLensCTAPressed] */

void FUN_1024461f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102446118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244621c; end: 1024465fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244621c(double param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lStack_80;
  undefined8 uStack_78;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112e9a5d0);
  uVar12 = *puVar1;
  if (uVar12 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5f0);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e9a5f0))[1];
    uVar14 = puVar1[1];
    uVar6 = uVar12;
    func_0x000107c614f0();
    pcVar15 = *(code **)(uVar14 + 0x10);
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(uVar12);
    (*pcVar15)(uVar6,uVar14);
    func_0x000107c615e8(uVar12);
    if (uVar6 != 0) {
      uVar2 = *(undefined8 *)(uVar6 + _DAT_11308f130);
      uVar4 = ((undefined8 *)(uVar6 + _DAT_11308f130))[1];
      func_0x000107c61434(uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
      func_0x000107c5fb78(uVar2,uVar4);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1 * 1000.0,&lStack_80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar5 = uStack_78;
      lVar8 = lStack_80;
      puVar7 = PTR_PTR_1126b90e8;
      func_0x000107c610f8(PTR_PTR_1126b90e8);
      lVar13 = lVar8;
      func_0x000107c5fadc(lVar8,uVar5);
      func_0x000107c5fadc(uVar11,uVar3);
      func_0x000107c30d80(puVar7,lVar13,3,0,0,uVar11,0);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(uVar11);
      FUN_102445074(param_1 * 1000.0,lVar8,uVar5,uVar2,uVar4,0xd000000000000015,0x800000010f09d420);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar5);
      if (lVar8 == 0) {
        func_0x000107c61170(puVar7);
      }
      else {
        func_0x00010468c5c4(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar7);
        func_0x000107c61174();
        lVar9 = lVar8;
        func_0x00010468be64();
        lStack_80 = lVar9;
        func_0x0001002a64a8(&lStack_80);
        lVar13 = unaff_x20 + _DAT_112e9a5b8;
        lVar10 = lVar13;
        func_0x000107c61618();
        if (lVar10 != 0) {
          lVar16 = *(long *)(lVar13 + 8);
          lVar13 = lVar10;
          func_0x000107c614f0();
          (**(code **)(lVar16 + 0x20))(lVar9,lVar13,lVar16);
          func_0x000107c615e8(lVar10);
        }
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(lVar8);
      }
    }
    func_0x000107c6142c(uVar3);
  }
  lVar8 = _DAT_112f95fb8;
  lVar13 = *(long *)(unaff_x20 + _DAT_112e9a5e8);
  uVar12 = *(ulong *)(lVar13 + _DAT_112f95fb8);
  func_0x000107c49f74();
  if ((uVar12 & 1) != 0) {
    func_0x000107c4283c(*(undefined8 *)(lVar13 + lVar8));
  }
  uVar12 = *puVar1;
  if (uVar12 != 0) {
    uVar14 = puVar1[1];
    uVar6 = uVar12;
    func_0x000107c614f0();
    pcVar15 = *(code **)(uVar14 + 0x20);
    func_0x000107c615f0(uVar12);
    (*pcVar15)(uVar6,uVar14);
    func_0x000107c615e8(uVar12);
    if ((uVar6 & 1) != 0) {
      func_0x00010244549c(8,0);
    }
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e9a620);
  func_0x000107c5aab0(uVar11);
  func_0x000107c61180();
  func_0x000107c4283c();
  func_0x000107c61170(uVar11);
  return;
}



/* Entry: 1024465fc; end: 102446623; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl sponsoredLensCameraDismissed] */

void FUN_1024465fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10244621c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102446624; end: 1024466bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102446624(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  long lStack_80;
  undefined8 uStack_78;
  
  FUN_102445d50();
  uVar13 = *(ulong *)(unaff_x20 + _DAT_112e9a5d0);
  if (uVar13 != 0) {
    uVar15 = ((ulong *)(unaff_x20 + _DAT_112e9a5d0))[1];
    uVar7 = uVar13;
    func_0x000107c614f0();
    pcVar16 = *(code **)(uVar15 + 0x20);
    func_0x000107c615f0(uVar13);
    (*pcVar16)(uVar7,uVar15);
    func_0x000107c615e8(uVar13);
    if ((uVar7 & 1) != 0) {
      lVar11 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
      if (lVar11 != 0) {
        lVar10 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
        lVar4 = lVar11;
        func_0x000107c614f0();
        pcVar16 = *(code **)(lVar10 + 0x10);
        func_0x000107c615f0(lVar11);
        (*pcVar16)(lVar4,lVar10);
        func_0x000107c615e8(lVar11);
        if (lVar4 != 0) {
          uVar1 = *(undefined8 *)(lVar4 + _DAT_11308f130);
          uVar2 = ((undefined8 *)(lVar4 + _DAT_11308f130))[1];
          uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5f8);
          func_0x000107c61434(uVar2);
          func_0x000107c3ceac(uVar12);
          lStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x1f);
          func_0x000107c5fb78(0xd000000000000013,0x800000010f09d460);
          func_0x000107c5fb78(uVar1,uVar2);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar3 = PTR___sSiN_11034deb0;
          puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar8);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c6057c(puVar3,puVar9);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar9);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c5fddc(param_1 * 1000.0,&lStack_80,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c5fb78(0x29,0xe100000000000000);
          uVar12 = uStack_78;
          lVar11 = lStack_80;
          FUN_102445074(param_1 * 1000.0,lStack_80,uStack_78,uVar1,uVar2,0xd00000000000001d,
                        0x800000010f09d480);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(uVar12);
          if (lVar11 != 0) {
            lVar5 = lVar11;
            FUN_10244711c(lVar11,6,0);
            lVar10 = unaff_x20 + _DAT_112e9a5b8;
            lVar6 = lVar10;
            func_0x000107c61618();
            if (lVar6 != 0) {
              lVar14 = *(long *)(lVar10 + 8);
              lVar10 = lVar6;
              func_0x000107c614f0();
              (**(code **)(lVar14 + 0x18))(lVar11,lVar5,lVar10,lVar14);
              func_0x000107c615e8(lVar6);
            }
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar11);
            lVar4 = lVar5;
          }
          func_0x000107c61170(lVar4);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 1024466bc; end: 1024466e3; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl sponsoredLensCameraPresented] */

void FUN_1024466bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102446624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024466e4; end: 102446a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024466e4(double param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lStack_80;
  undefined8 uStack_78;
  
  FUN_102444be4(0);
  puVar1 = (ulong *)(unaff_x20 + _DAT_112e9a5d0);
  uVar13 = *puVar1;
  if (uVar13 != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e9a5f0);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e9a5f0))[1];
    uVar14 = puVar1[1];
    uVar6 = uVar13;
    func_0x000107c614f0();
    pcVar15 = *(code **)(uVar14 + 0x10);
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(uVar13);
    (*pcVar15)(uVar6,uVar14);
    func_0x000107c615e8(uVar13);
    if (uVar6 != 0) {
      uVar2 = *(undefined8 *)(uVar6 + _DAT_11308f130);
      uVar4 = ((undefined8 *)(uVar6 + _DAT_11308f130))[1];
      func_0x000107c61434(uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
      func_0x000107c5fb78(uVar2,uVar4);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1 * 1000.0,&lStack_80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar5 = uStack_78;
      lVar10 = lStack_80;
      puVar7 = PTR_PTR_1126b90e8;
      func_0x000107c610f8(PTR_PTR_1126b90e8);
      lVar8 = lVar10;
      func_0x000107c5fadc(lVar10,uVar5);
      func_0x000107c5fadc(uVar9,uVar3);
      func_0x000107c30d80(puVar7,lVar8,3,0,0,uVar9,0);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar9);
      FUN_102445074(param_1 * 1000.0,lVar10,uVar5,uVar2,uVar4,0xd000000000000015,0x800000010f09d420)
      ;
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar5);
      if (lVar10 == 0) {
        func_0x000107c61170(puVar7);
      }
      else {
        func_0x00010468c5c4(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar7);
        func_0x000107c61174();
        lVar11 = lVar10;
        func_0x00010468be64();
        lStack_80 = lVar11;
        func_0x0001002a64a8(&lStack_80);
        lVar8 = unaff_x20 + _DAT_112e9a5b8;
        lVar12 = lVar8;
        func_0x000107c61618();
        if (lVar12 != 0) {
          lVar16 = *(long *)(lVar8 + 8);
          lVar8 = lVar12;
          func_0x000107c614f0();
          (**(code **)(lVar16 + 0x20))(lVar11,lVar8,lVar16);
          func_0x000107c615e8(lVar12);
        }
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(lVar10);
      }
    }
    func_0x000107c6142c(uVar3);
    uVar13 = *puVar1;
    if (uVar13 != 0) {
      uVar14 = puVar1[1];
      uVar6 = uVar13;
      func_0x000107c614f0();
      pcVar15 = *(code **)(uVar14 + 0x20);
      func_0x000107c615f0(uVar13);
      (*pcVar15)(uVar6,uVar14);
      func_0x000107c615e8(uVar13);
      if ((uVar6 & 1) != 0) {
        func_0x00010244549c(4,2);
      }
    }
  }
  return;
}



/* Entry: 102446a78; end: 102446a9f; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl sponsoredLensCameraPaused] */

void FUN_102446a78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024466e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102446aa0; end: 102446daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102446aa0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  FUN_102444be4(1);
  lVar8 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
  if (lVar8 != 0) {
    lVar9 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
    lVar4 = lVar8;
    func_0x000107c614f0();
    pcVar10 = *(code **)(lVar9 + 0x10);
    func_0x000107c615f0(lVar8);
    (*pcVar10)(lVar4,lVar9);
    func_0x000107c615e8(lVar8);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(lVar4 + _DAT_11308f130);
      uVar2 = ((undefined8 *)(lVar4 + _DAT_11308f130))[1];
      func_0x000107c61434(uVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
      puStack_80 = (undefined *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
      func_0x000107c5fb78(uVar1,uVar2);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      puVar7 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fddc(param_1 * 1000.0,&puStack_80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      uVar3 = uStack_78;
      puVar7 = puStack_80;
      puVar5 = PTR_PTR_1126b90e8;
      func_0x000107c610f8(PTR_PTR_1126b90e8);
      puVar6 = puVar7;
      func_0x000107c5fadc(puVar7,uVar3);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c30d80(puVar5,puVar6,1,0,param_2,0,0);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(param_2);
      FUN_102445074(param_1 * 1000.0,puVar7,uVar3,uVar1,uVar2,0xd000000000000015,0x800000010f09d420)
      ;
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar3);
      if (puVar7 != (undefined *)0x0) {
        func_0x00010468c5c4(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar5);
        func_0x000107c61174();
        puVar6 = puVar7;
        func_0x00010468be64();
        puStack_80 = puVar6;
        func_0x0001002a64a8(&puStack_80);
        lVar8 = unaff_x20 + _DAT_112e9a5b8;
        lVar4 = lVar8;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar9 = *(long *)(lVar8 + 8);
          lVar8 = lVar4;
          func_0x000107c614f0();
          (**(code **)(lVar9 + 0x20))(puVar6,lVar8,lVar9);
          func_0x000107c615e8(lVar4);
        }
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        puVar5 = puVar7;
      }
      func_0x000107c61170(puVar5);
    }
  }
  FUN_102445d50();
  return;
}



/* Entry: 102446db0; end: 102446e0b; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl sponsoredLensCameraResumedWith:] */

void FUN_102446db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102446aa0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102446e0c; end: 102446e97; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl shoppingLensCameraWantsToExit:] */

/* WARNING: Possible PIC construction at 0x000102446e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102446e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102446e5c) */
/* WARNING: Removing unreachable block (ram,0x000102446e80) */
/* WARNING: Removing unreachable block (ram,0x000102446e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102446e0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e9a620);
  func_0x000107c61174();
  func_0x000107c5aab0(uVar1);
  func_0x000107c61180();
  func_0x000107c49f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102446e98; end: 102446e9b; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl shoppingLensCameraDidExit] */

void FUN_102446e98(void)

{
  return;
}



/* Entry: 102446e9c; end: 102446eef;  */

void FUN_102446e9c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102445750();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102446ef0; end: 102446f17; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl shoppingLensDidTapOnProduct:] */

void FUN_102446ef0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10244793c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102446f18; end: 102446f57; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl adModularLensEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102446f18(undefined8 param_1)

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



/* Entry: 102446f58; end: 102446f97; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl adLifecycleEventObservableV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102446f58(undefined8 param_1)

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



/* Entry: 102446f98; end: 102446fbb; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl streamsType] */

undefined8 FUN_102446f98(void)

{
  return 0;
}



/* Entry: 102446fbc; end: 102447027;  */

void FUN_102446fbc(code *param_1,ulong *param_2,long *param_3)

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



/* Entry: 102447028; end: 1024470fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102447028(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9a5d0);
  if (lVar3 != 0) {
    lVar4 = ((long *)(unaff_x20 + _DAT_112e9a5d0))[1];
    lVar1 = lVar3;
    func_0x000107c614f0();
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar1,lVar4);
    func_0x000107c615e8(lVar3);
    if (lVar1 != 0) {
      func_0x000107c61170(lVar1);
      lVar3 = *(long *)(unaff_x20 + _DAT_112e9a618);
      if (param_1 == '\0') {
        if (lVar3 == 0) {
          return;
        }
        uVar2 = 1;
      }
      else if (param_1 == '\x01') {
        if (lVar3 == 0) {
          return;
        }
        uVar2 = 2;
      }
      else {
        if (lVar3 == 0) {
          return;
        }
        uVar2 = 3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c0b20d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar3,PTR_s_logTryOnTappedWithButtonType__11260a240,uVar2);
      return;
    }
  }
  return;
}



/* Entry: 1024470fc; end: 10244711b;  */

void FUN_1024470fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128406c8);
  return;
}



/* Entry: 10244711c; end: 1024471c7;  */

undefined * FUN_10244711c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar1 = PTR_PTR_1126b8fa8;
  func_0x000107c610f8(PTR_PTR_1126b8fa8);
  func_0x000107c30b18();
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1024471c8; end: 10244791f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024471c8(double param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000107c61174();
    lVar14 = lVar3;
    FUN_102441b44();
    func_0x000107c61170(lVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112e9a5d0);
    lVar3 = *plVar1;
    *plVar1 = lVar14;
    plVar1[1] = (long)&PTR_DAT_110509478;
    func_0x000107c615e8(lVar3);
  }
  puVar2 = (ulong *)(unaff_x20 + _DAT_112e9a5d0);
  uVar16 = *puVar2;
  if (uVar16 == 0) {
    return;
  }
  uVar18 = puVar2[1];
  uVar17 = uVar16;
  func_0x000107c614f0();
  pcVar12 = *(code **)(uVar18 + 8);
  func_0x000107c615f0(uVar16);
  (*pcVar12)(uVar17,uVar18);
  func_0x000107c615e8(uVar16);
  if (uVar17 == 0) {
    return;
  }
  func_0x000107c61170();
  if ((param_2 != 0) && (uVar16 = *puVar2, uVar16 != 0)) {
    uVar17 = puVar2[1];
    uVar18 = uVar16;
    func_0x000107c614f0();
    pcVar12 = *(code **)(uVar17 + 0x10);
    func_0x000107c615f0(uVar16);
    (*pcVar12)(uVar18,uVar17);
    func_0x000107c615e8();
    uVar17 = uVar16;
    if (uVar18 != 0) {
      uVar16 = *(ulong *)(uVar18 + _DAT_113815208);
      func_0x000107c61434(uVar16);
      func_0x000107c61170();
      uVar17 = uVar18;
      if (uVar16 != 0) {
        uVar17 = uVar16 & 0xffffffffffffff8;
        if (uVar16 >> 0x3e == 0) {
          uVar18 = *(ulong *)(uVar17 + 0x10);
        }
        else {
          uVar18 = uVar16;
          if (-1 < (long)uVar16) {
            uVar18 = uVar17;
          }
          func_0x000107c60480();
        }
        if (uVar18 != 0) {
          if ((uVar16 & 0xc000000000000001) == 0) {
            lVar3 = *(long *)(uVar17 + 0x10);
            func_0x000107c6142c();
            uVar17 = uVar16;
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1024478fc);
              (*pcVar12)();
            }
            goto LAB_10244732c;
          }
          func_0x000100e471e4(0,uVar16);
          func_0x000107c615e8();
        }
        func_0x000107c6142c();
        uVar17 = uVar16;
      }
    }
  }
LAB_10244732c:
  FUN_102445a38();
  uVar16 = *(ulong *)(uVar17 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar16,0);
    uVar18 = 0;
    do {
      uVar4 = 0x635f646e655f7261;
      uVar13 = 0xeb00000000647261;
      if (*(ulong *)(uVar17 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1024478cc);
        (*pcVar12)();
      }
      lVar3 = *(long *)(uVar17 + 0x20 + uVar18 * 8);
      if (lVar3 < 2) {
        if (lVar3 == 0) {
          uVar13 = 0xe400000000000000;
          uVar4 = 0x656e6f6e;
        }
        else {
          if (lVar3 != 1) {
LAB_1024478fc:
            lStack_78 = lVar3;
            func_0x000107c60614(&UNK_110715778,&lStack_78,&UNK_110715778,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x102447920);
            (*pcVar12)();
          }
          uVar13 = 0xe600000000000000;
          uVar4 = 0x6e6f74747562;
        }
      }
      else if (lVar3 == 2) {
        uVar13 = 0xe700000000000000;
        uVar4 = 0x72656b63697473;
      }
      else if (lVar3 != 3) goto LAB_1024478fc;
      uVar19 = *(ulong *)(puStack_88 + 0x10);
      if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar19) {
        func_0x000100403514(1 < *(ulong *)(puStack_88 + 0x18),uVar19 + 1,1);
      }
      uVar18 = uVar18 + 1;
      *(ulong *)(puStack_88 + 0x10) = uVar19 + 1;
      *(undefined8 *)(puStack_88 + uVar19 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(puStack_88 + uVar19 * 0x10 + 0x28) = uVar13;
      puVar6 = puStack_88;
    } while (uVar16 != uVar18);
  }
  uVar4 = 0x112d38270;
  puStack_88 = puVar6;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar13 = uVar4;
  func_0x00010011d734();
  uVar5 = 0x2d;
  uVar10 = 0xe100000000000000;
  func_0x000107c5fa80(0x2d,0xe100000000000000,uVar4,uVar13);
  func_0x000107c6142c(puVar6);
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9a618);
  if (lVar3 == 0) {
    func_0x000107c6142c(uVar10);
    lVar14 = *(long *)(uVar17 + 0x10);
  }
  else {
    func_0x000107c5fadc(uVar5,uVar10);
    func_0x000107c6142c(uVar10);
    func_0x000107c4b9d8(lVar3);
    func_0x000107c61170(uVar5);
    lVar14 = *(long *)(uVar17 + 0x10);
  }
  for (; lVar14 != 0; lVar14 = lVar14 + -1) {
    if (lVar3 != 0) {
      func_0x000107c542ac(lVar3);
      func_0x000107c4bf54(lVar3);
    }
  }
  func_0x000107c6142c(uVar17);
  uVar16 = *puVar2;
  if (uVar16 != 0) {
    uVar18 = puVar2[1];
    uVar17 = uVar16;
    func_0x000107c614f0();
    pcVar12 = *(code **)(uVar18 + 8);
    func_0x000107c615f0(uVar16);
    (*pcVar12)(uVar17,uVar18);
    func_0x000107c615e8(uVar16);
    if (uVar17 != 0) {
      puVar6 = PTR___sSiN_11034deb0;
      puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(_DAT_1130907c0,PTR___sSiN_11034deb0,
                          PTR___sSis23CustomStringConvertiblesWP_11034df00);
      uVar16 = *puVar2;
      if (uVar16 != 0) {
        uVar19 = puVar2[1];
        uVar18 = uVar16;
        func_0x000107c614f0();
        pcVar12 = *(code **)(uVar19 + 0x10);
        func_0x000107c615f0(uVar16);
        (*pcVar12)(uVar18,uVar19);
        func_0x000107c615e8(uVar16);
        if (uVar18 != 0) {
          uVar4 = *(undefined8 *)(uVar18 + _DAT_11308f130);
          uVar13 = ((undefined8 *)(uVar18 + _DAT_11308f130))[1];
          func_0x000107c61434(uVar13);
          func_0x000107c61170(uVar18);
          func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e9a5f8));
          puStack_88 = (undefined *)0x0;
          uStack_80 = 0xe000000000000000;
          func_0x000107c602fc(0x1b);
          func_0x000107c5fb78(0xd000000000000013,0x800000010f09d400);
          func_0x000107c5fb78(uVar4,uVar13);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          lStack_78 = 5;
          puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
          func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar9);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          func_0x000107c5fddc(param_1 * 1000.0,&puStack_88,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          uVar5 = uStack_80;
          puVar9 = puStack_88;
          puVar7 = PTR_PTR_1126b90e8;
          func_0x000107c610f8(PTR_PTR_1126b90e8);
          puVar8 = puVar9;
          func_0x000107c5fadc(puVar9,uVar5);
          func_0x000107c5fadc(puVar6,puVar11);
          func_0x000107c30d80(puVar7,puVar8,5,puVar6,0,0,0);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar6);
          FUN_102445074(param_1 * 1000.0,puVar9,uVar5,uVar4,uVar13,0xd000000000000015,
                        0x800000010f09d420);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar5);
          if (puVar9 != (undefined *)0x0) {
            func_0x00010468c5c4(0);
            func_0x000107c610f8();
            func_0x000107c61174(puVar7);
            func_0x000107c61174();
            puVar6 = puVar9;
            func_0x00010468be64();
            puStack_88 = puVar6;
            func_0x0001002a64a8(&puStack_88);
            lVar3 = unaff_x20 + _DAT_112e9a5b8;
            lVar14 = lVar3;
            func_0x000107c61618();
            if (lVar14 != 0) {
              lVar15 = *(long *)(lVar3 + 8);
              lVar3 = lVar14;
              func_0x000107c614f0();
              (**(code **)(lVar15 + 0x20))(puVar6,lVar3,lVar15);
              func_0x000107c615e8(lVar14);
            }
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar7);
            puVar7 = puVar9;
          }
          func_0x000107c61170(puVar7);
        }
      }
      func_0x000107c61170(uVar17);
      func_0x000107c6142c(puVar11);
    }
  }
  return;
}



/* Entry: 102447920; end: 10244793b;  */

void FUN_102447920(long param_1,long param_2)

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



/* Entry: 10244793c; end: 102447a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244793c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e9a620);
  func_0x000107c5aab0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_110509578;
  func_0x000107c613fc(&UNK_110509578,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_102447a30;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_1105095f0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c42840(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102447a0c; end: 102447a2f;  */

undefined8 FUN_102447a0c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102447a30; end: 102447a47;  */

void FUN_102447a30(void)

{
  FUN_102446e9c();
  return;
}



/* Entry: 102447a48; end: 102447a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102447a48(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e9a5e8;
  if (lVar3 != 0) {
    iVar2 = (int)*(undefined8 *)(*(long *)(lVar3 + _DAT_112e9a5e8) + _DAT_112f95fb8);
    func_0x000107c49f74();
    if (iVar2 != 0) {
      func_0x000107c4283c(*(undefined8 *)(*(long *)(lVar3 + lVar1) + _DAT_112f95fb8));
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + lVar1) + _DAT_112f95fc0);
    func_0x000107c3edd4(uVar4);
    func_0x000107c61180();
    func_0x000107c4ab30(*(undefined8 *)(*(long *)(lVar3 + lVar1) + _DAT_112f95fb8));
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 102447a50; end: 102447a7b;  */

void FUN_102447a50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102447a7c; end: 102447a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102447a7c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar5 = lVar3 + _DAT_112e9a5b8;
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar5 + 8);
      lVar5 = lVar4;
      func_0x000107c614f0();
      puVar1 = (undefined8 *)(lVar2 + _DAT_11308f130);
      (**(code **)(lVar6 + 8))(param_1,*puVar1,puVar1[1],0,lVar5,lVar6);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102447a84; end: 102447b4f;  */

undefined8 FUN_102447a84(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102447b50; end: 102447b5f;  */

void FUN_102447b50(long param_1,long param_2)

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



/* Entry: 102447b60; end: 102447b63; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl adInteractionEventObservable] */

void FUN_102447b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102447b64; end: 102447b6b; -[_TtC31ModularLensWorkflowServicesImpl23ModularLensWorkflowImpl adLifecycleEventObservable] */

void FUN_102447b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102447b6c; end: 102447b9b;  */

void FUN_102447b6c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102447b9c; end: 102447bbf;  */

void FUN_102447b9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102447bc0; end: 102447c37;  */

void FUN_102447bc0(void)

{
  func_0x000107c615f0();
  return;
}



/* Entry: 102447c38; end: 102447c57;  */

void FUN_102447c38(void)

{
  func_0x000107c61168(&PTR_PTR_112e9a6d0);
  return;
}



/* Entry: 102447c58; end: 102447d1b;  */

void FUN_102447c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 102447d1c; end: 102447f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102447d1c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000102442b90();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  uVar9 = *(undefined8 *)(lVar6 + _DAT_113013000);
  *(undefined8 *)(lVar3 + 0x20) = uVar9;
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar10 = *(undefined8 *)(lVar2 + _DAT_11308b850);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar9);
  func_0x0001000bda74();
  *(undefined8 *)(lVar3 + 0x28) = uVar10;
  func_0x0001000285a8(0x112dbe700,&UNK_10d990210);
  uVar5 = *(undefined8 *)(lVar2 + _DAT_11308b848);
  func_0x0001000bda74();
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  lVar6 = *(long *)(lVar4 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar7);
  }
  else {
    uVar5 = *(undefined8 *)(lVar7 + _DAT_113012fb8);
    func_0x000107c6157c(uVar5);
    func_0x0001000d224c(&lStack_68);
    func_0x000107c61574(uVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar7);
    if (lStack_68 == 0) {
      func_0x000107c615e8(lVar6);
    }
    else {
      lVar7 = 0;
      func_0x000102441e74();
      func_0x000107c613fc();
      *(long *)(lVar7 + 0x10) = lVar6;
      *(long *)(lVar3 + 0x38) = lStack_68;
      *(long *)(lVar3 + 0x40) = lVar7;
    }
  }
  func_0x0001000285a8(0x112e9a730,&UNK_10daa7560);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar3);
  pcVar8 = FUN_102447f8c;
  func_0x0001000bdd8c(FUN_102447f8c,lVar3);
  uVar5 = 0;
  func_0x0001003780ec(0);
  func_0x000107c610f8();
  func_0x000102c476e0(pcVar8,uVar5);
  func_0x000107c61574(lVar3);
  return pcVar8;
}



/* Entry: 102447f44; end: 102447f8b;  */

void FUN_102447f44(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102447c38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110509698;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102447f8c; end: 102447f93;  */

void FUN_102447f8c(long *param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  FUN_102447c38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110509698;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102447f94; end: 102447fcf;  */

/* WARNING: Possible PIC construction at 0x000102447fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102447fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102447fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102447fb4) */
/* WARNING: Removing unreachable block (ram,0x000102447fa4) */
/* WARNING: Removing unreachable block (ram,0x000102447fc4) */

void FUN_102447f94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102447fd0; end: 10244803b;  */

void FUN_102447fd0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10244803c; end: 1024480bf;  */

void FUN_10244803c(undefined8 param_1)

{
  if (lRam0000000112e9a760 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d8980);
  return;
}



/* Entry: 1024480c0; end: 1024480e3;  */

void FUN_1024480c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_102447d1c();
  *param_1 = param_2;
  return;
}



/* Entry: 1024480e4; end: 102448257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024480e4(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long alStack_60 [2];
  undefined1 uStack_50;
  char cStack_49;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar5 = *(undefined8 *)(lStack_38 + _DAT_11304a478);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(&uStack_48);
  func_0x000107c61574(uVar5);
  uVar5 = uStack_48;
  func_0x000107c614f0(uStack_48);
  alStack_60[0] = -0x2fffffffffffffe1;
  alStack_60[1] = 0x800000010efb44e0;
  uStack_50 = 0;
  (**(code **)(lStack_40 + 8))
            (&cStack_49,alStack_60,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lStack_40);
  func_0x000107c615e8(uStack_48);
  if (cStack_49 == '\x01') {
    func_0x000100083b20(alStack_60);
    lVar1 = alStack_60[0];
    lVar4 = alStack_60[0];
    func_0x000107c40670();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102448254);
      (*pcVar2)();
    }
    puVar3 = (undefined *)0x0;
    FUN_102448884();
  }
  else {
    func_0x000100083b20(alStack_60);
    lVar1 = alStack_60[0];
    lVar4 = alStack_60[0];
    func_0x000107c40670();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar3 = PTR_PTR_1126aa848;
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102448258);
      (*pcVar2)();
    }
  }
  func_0x000107c610f8();
  func_0x000107c46168();
  func_0x000107c61170(lVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 102448258; end: 102448267;  */

undefined1  [16] FUN_102448258(void)

{
  return ZEXT816(0x1105097c0);
}



/* Entry: 102448268; end: 102448323; -[AdMessagePostbackInfoEventHandlerSwift initWithConversationEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102448268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e9a838;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112e9a840;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined1 *)(param_1 + _DAT_112e9a848) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9a850) = param_3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_initWithConversationEventObserva_1125deca8,param_3);
  return;
}



/* Entry: 102448324; end: 102448437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102448324(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if ((*(byte *)(unaff_x20 + _DAT_112e9a848) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e9a848) = 1;
    lVar1 = *(long *)(unaff_x20 + _DAT_112e9a850);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = &UNK_110509860;
      func_0x000107c613fc(&UNK_110509860,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      pcStack_40 = FUN_102448438;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      pcStack_50 = FUN_102448614;
      puStack_48 = &UNK_110509878;
      puStack_38 = puVar2;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      lVar4 = lVar1;
      func_0x000107c5c320(lVar1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c3e924(lVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 102448438; end: 102448613;  */

void FUN_102448438(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_1105098d8;
  func_0x000107c613fc(&UNK_1105098d8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1024488a4;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x102448910;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_1105098f0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110509928;
  func_0x000107c613fc(&UNK_110509928,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102448930;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  uStack_70 = 0x1024489d8;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de58f0;
  puStack_78 = &UNK_110509940;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c5b4(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x74,0x23,0x25,1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574();
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102448610);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x74,0x26,0x32,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102448614);
  (*pcVar1)();
}



/* Entry: 102448614; end: 10244865f;  */

void FUN_102448614(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102448660; end: 10244867b;  */

void FUN_102448660(long param_1,long param_2)

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



/* Entry: 10244867c; end: 1024486a3; -[AdMessagePostbackInfoEventHandlerSwift listenToConversationEvents] */

void FUN_10244867c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102448324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024486a4; end: 1024486b7;  */

void FUN_1024486a4(void)

{
  func_0x000107c3ebcc();
  return;
}



/* Entry: 1024486b8; end: 102448793; -[AdMessagePostbackInfoEventHandlerSwift dwellRequestBridgeObservableIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024486b8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e9a838);
  pcStack_40 = FUN_1024486a4;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101b58078;
  puStack_48 = &UNK_1105098a0;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c43494(uVar3,param_2,ppuVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  uVar2 = uVar3;
  func_0x000107c5cb24(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102448794; end: 102448807; -[AdMessagePostbackInfoEventHandlerSwift fireDwellRequest] */

/* WARNING: Possible PIC construction at 0x0001024487f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024487f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102448794(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e9a838);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c45a48(puVar1,param_2,1);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102448808; end: 10244883b;  */

void FUN_102448808(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10244883c; end: 102448883; -[AdMessagePostbackInfoEventHandlerSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102448858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244885c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244883c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9a850));
  return;
}



/* Entry: 102448884; end: 1024488a3;  */

void FUN_102448884(void)

{
  func_0x000107c61168(&PTR_PTR_1128408e8);
  return;
}



/* Entry: 1024488a4; end: 10244892f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024488a4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42194(*(undefined8 *)(lVar1 + _DAT_112e9a840));
    *(undefined1 *)(lVar1 + _DAT_112e9a848) = 0;
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102448930; end: 1024489bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102448930(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112e9a838);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1024489c0; end: 1024489db;  */

void FUN_1024489c0(long param_1,long param_2)

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



/* Entry: 1024489dc; end: 102448a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024489dc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102448dd0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9a888) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102448a48; end: 102448ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102448a48(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9a888) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102448ab4; end: 102448b13; -[_TtC49SponsoredSnapPlaybackScopedFactoryServiceProvider35SponsoredSnapPlaybackScopedServices init] */

void FUN_102448ab4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapPlaybackScopedFactoryServiceProvider.SponsoredSnapPlaybackScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102448ae0);
  (*pcVar1)();
}



/* Entry: 102448b14; end: 102448b23; -[_TtC49SponsoredSnapPlaybackScopedFactoryServiceProvider35SponsoredSnapPlaybackScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102448b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9a888));
  return;
}



/* Entry: 102448b24; end: 102448b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102448b24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110509b30;
  func_0x000107c613fc(&UNK_110509b30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102448e68,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102448b90; end: 102448c2b;  */

void FUN_102448b90(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110509a40;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110509a40;
  return;
}



/* Entry: 102448c2c; end: 102448c63;  */

void FUN_102448c2c(long *param_1)

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



/* Entry: 102448c64; end: 102448c6b;  */

undefined8 FUN_102448c64(void)

{
  return 0x1b;
}



/* Entry: 102448c6c; end: 102448d9f;  */

void FUN_102448c6c(undefined8 *param_1)

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
  puVar1 = &UNK_110509b58;
  func_0x000107c613fc(&UNK_110509b58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102448e40;
  func_0x00010058fa64(FUN_102448e40,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102448da0; end: 102448dcf;  */

undefined ** FUN_102448da0(void)

{
  return &PTR_DAT_112ec2778;
}



/* Entry: 102448dd0; end: 102448def;  */

void FUN_102448dd0(void)

{
  func_0x000107c61168(&PTR_PTR_1128409b8);
  return;
}



/* Entry: 102448df0; end: 102448e3f;  */

undefined1  [16] FUN_102448df0(void)

{
  return ZEXT816(0x110509a90);
}



/* Entry: 102448e40; end: 102448e67;  */

void FUN_102448e40(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102448e68; end: 102448e6b;  */

void FUN_102448e68(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102448e6c; end: 102448f2b;  */

/* WARNING: Possible PIC construction at 0x000102448f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102448f0c) */

void FUN_102448e6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110509be0;
  func_0x000107c613fc(&UNK_110509be0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112e9a8f8;
  func_0x0001000285a8(0x112e9a8f8,&UNK_10daa7908);
  func_0x000107c613fc();
  pcVar3 = FUN_102449300;
  func_0x0001000841fc(FUN_102449300,puVar1,uVar2);
  func_0x000100084214(&UNK_10daa78d0,0x31,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102448f2c; end: 102448f47;  */

/* WARNING: Possible PIC construction at 0x000102448f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102448f0c) */

void FUN_102448f2c(undefined8 *param_1)

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
  puVar2 = &UNK_110509be0;
  func_0x000107c613fc(&UNK_110509be0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e9a8f8;
  func_0x0001000285a8(0x112e9a8f8,&UNK_10daa7908);
  func_0x000107c613fc();
  pcVar4 = FUN_102449300;
  func_0x0001000841fc(FUN_102449300,puVar2,uVar3);
  func_0x000100084214(&UNK_10daa78d0,0x31,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102448f48; end: 1024492cb;  */

void FUN_102448f48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e9a900,&UNK_10daa7910);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10244a248();
  func_0x000100082720("SCAdOperaSessionScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_10244a2d4();
  func_0x000100082720("SCAdOperaSessionScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102448c2c;
  func_0x0001000823a8(FUN_102448c2c,0);
  func_0x000100082720("SponsoredSnapPlaybackScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e9a908,&UNK_10daa7920);
  puVar5 = &UNK_110509c08;
  func_0x000107c613fc(&UNK_110509c08,0x38,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 **)(puVar5 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10244930c;
  func_0x0001000823a8(0x10244930c,puVar5);
  func_0x000100082720("SponsoredSnapPlaybackEntryPointWrapperServiceProvider",0x35,2);
  puVar6 = puVar2;
  FUN_10244a0fc();
  func_0x000100082720("SponsoredSnapPlaybackScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e9a910,&UNK_10daa7928);
  puVar5 = &UNK_110509c30;
  func_0x000107c613fc(&UNK_110509c30,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10244931c;
  func_0x0001000823a8(0x10244931c,puVar5);
  func_0x000100082720("SponsoredSnapPlaybackScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e9a890,&UNK_10daa7690);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102449328;
  func_0x0001000823a8(0x102449328,uVar7);
  func_0x000100082720("SponsoredSnapPlaybackScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e9a880,&UNK_10daa7680);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102449330;
  func_0x0001000823a8(0x102449330,uVar8);
  func_0x000100082720("SponsoredSnapPlaybackScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110509c58;
  func_0x000107c613fc(&UNK_110509c58,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102449338;
  func_0x0001000823a8(0x102449338,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SponsoredSnapPlaybackScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1024492cc; end: 1024492ff;  */

void FUN_1024492cc(void)

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



/* Entry: 102449300; end: 10244933f;  */

void FUN_102449300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e9a900,&UNK_10daa7910);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10244a248();
  func_0x000100082720("SCAdOperaSessionScopeExposerSubjectServiceProvider",0x32,2);
  puVar3 = puVar2;
  FUN_10244a2d4();
  func_0x000100082720("SCAdOperaSessionScopeExposerObservableServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102448c2c;
  func_0x0001000823a8(FUN_102448c2c,0);
  func_0x000100082720("SponsoredSnapPlaybackScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e9a908,&UNK_10daa7920);
  puVar5 = &UNK_110509c08;
  func_0x000107c613fc(&UNK_110509c08,0x38,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  *(undefined8 **)(puVar5 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar6 = 0x10244930c;
  func_0x0001000823a8(0x10244930c,puVar5);
  func_0x000100082720("SponsoredSnapPlaybackEntryPointWrapperServiceProvider",0x35,2);
  puVar7 = puVar2;
  FUN_10244a0fc();
  func_0x000100082720("SponsoredSnapPlaybackScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e9a910,&UNK_10daa7928);
  puVar5 = &UNK_110509c30;
  func_0x000107c613fc(&UNK_110509c30,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar7;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x10244931c;
  func_0x0001000823a8(0x10244931c,puVar5);
  func_0x000100082720("SponsoredSnapPlaybackScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e9a890,&UNK_10daa7690);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102449328;
  func_0x0001000823a8(0x102449328,uVar8);
  func_0x000100082720("SponsoredSnapPlaybackScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e9a880,&UNK_10daa7680);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102449330;
  func_0x0001000823a8(0x102449330,uVar9);
  func_0x000100082720("SponsoredSnapPlaybackScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110509c58;
  func_0x000107c613fc(&UNK_110509c58,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x102449338;
  func_0x0001000823a8(0x102449338,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SponsoredSnapPlaybackScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 102449340; end: 102449517;  */

void FUN_102449340(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_102449790();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e9a918,&UNK_10dabac60);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  FUN_10244c2d4(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar4 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar4;
  func_0x00010244b4a8();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  func_0x000107c61174();
  FUN_10244b5d0();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}


