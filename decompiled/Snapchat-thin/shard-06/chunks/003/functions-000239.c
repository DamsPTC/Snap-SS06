/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047dc54c; end: 1047dc573; -[SCAdSnapAppInstall initWithCoder:] */

void FUN_1047dc54c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047dbbe0();
  return;
}



/* Entry: 1047dc574; end: 1047dc5ff; -[SCAdSnapAppInstall description] */

void FUN_1047dc574(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10470fbcc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047dc600(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001047dd018(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_10470fbcc);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047dc600; end: 1047dce93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dc600(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long extraout_x12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar6 = 0;
  FUN_10470ee30();
  lStack_c8 = *(long *)(lVar6 + -8);
  lStack_108 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  puVar11 = (undefined8 *)((long)&puStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_c0 = puVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_110 = (undefined8 *)((long)puVar11 - extraout_x12);
  uVar17 = ((undefined8 *)(param_2 + _DAT_11308faa8))[1];
  *param_1 = *(undefined8 *)(param_2 + _DAT_11308faa8);
  param_1[1] = uVar17;
  puVar11 = (undefined8 *)(param_2 + _DAT_11308fab0);
  uVar14 = puVar11[1];
  uVar12 = *puVar11;
  param_1[3] = puVar11[1];
  param_1[2] = uVar12;
  if (*(long *)(param_2 + _DAT_11308fab8) == 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[10] = 1;
  }
  else {
    FUN_1047fc030(&uStack_b0);
    param_1[5] = uStack_a8;
    param_1[4] = uStack_b0;
    param_1[7] = uStack_98;
    param_1[6] = uStack_a0;
    param_1[9] = uStack_88;
    param_1[8] = uStack_90;
    param_1[10] = uStack_80;
  }
  lVar6 = *(long *)(param_2 + _DAT_11308fac0);
  if (lVar6 == 0) {
    uVar9 = 0;
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar6 + _DAT_11308fa20);
    uVar10 = *(undefined8 *)(lVar6 + _DAT_11308fa28);
    uVar12 = *(undefined8 *)(lVar6 + _DAT_11308fa30);
  }
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar10;
  param_1[0xd] = uVar12;
  *(bool *)(param_1 + 0xe) = lVar6 == 0;
  puVar11 = (undefined8 *)(param_2 + _DAT_11308fac8);
  uVar12 = puVar11[1];
  uVar9 = *puVar11;
  uVar3 = *(undefined1 *)(param_2 + _DAT_11308fad0);
  param_1[0x10] = puVar11[1];
  param_1[0xf] = uVar9;
  *(undefined1 *)(param_1 + 0x11) = uVar3;
  lVar6 = *(long *)(param_2 + _DAT_11308fad8);
  if (lVar6 == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 1;
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar17);
    uVar10 = uVar9;
  }
  else {
    lVar15 = *(long *)(lVar6 + _DAT_11308fb38);
    if (lVar15 != 0) {
      _swift_bridgeObjectRetain(uVar12);
      _objc_retain();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar14);
      func_0x00010bfb2c80(lVar15);
      uVar17 = *(undefined8 *)(lVar6 + _DAT_11308fb40);
      uVar14 = ((undefined8 *)(lVar6 + _DAT_11308fb40))[1];
      uVar10 = uVar9;
      _swift_bridgeObjectRetain(uVar14);
      _objc_release(lVar6);
      *(int *)(param_1 + 0x12) = (int)uVar9;
      *(undefined1 *)((long)param_1 + 0x94) = 0;
      param_1[0x13] = uVar17;
      param_1[0x14] = uVar14;
      goto LAB_1047dc870;
    }
    puVar11 = (undefined8 *)(lVar6 + _DAT_11308fb40);
    uVar9 = puVar11[1];
    uVar20 = puVar11[1];
    uVar10 = *puVar11;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined1 *)((long)param_1 + 0x94) = 1;
    param_1[0x14] = uVar20;
    param_1[0x13] = uVar10;
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar12);
    uVar14 = uVar9;
  }
  _swift_bridgeObjectRetain(uVar14);
LAB_1047dc870:
  uVar13 = *(ulong *)(param_2 + _DAT_11308fae0);
  puStack_100 = param_1;
  lStack_f8 = param_2;
  if (uVar13 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    if (uVar13 >> 0x3e == 0) {
      uVar16 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = uVar13;
      if (-1 < (long)uVar13) {
        uVar16 = uVar13 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar16 != 0) {
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001046c7340(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1047dce8c);
        (*pcVar5)();
      }
      uVar18 = 0;
      uStack_f0 = uVar13 & 0xc000000000000001;
      uStack_e8 = uVar16;
      uStack_e0 = uVar13;
      do {
        puVar19 = puStack_b8;
        if (uStack_f0 == 0) {
          uVar13 = *(ulong *)(uStack_e0 + uVar18 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar13 = uVar18;
          FUN_1046c4a18(uVar18,uStack_e0);
        }
        lVar6 = *(long *)(uVar13 + _DAT_113090400);
        if (lVar6 == 0) {
          uVar12 = 0;
          uVar17 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uVar14 = 1;
        }
        else {
          uStack_d0 = *(undefined8 *)(lVar6 + _DAT_113090438);
          uStack_d8 = *(undefined8 *)(lVar6 + _DAT_113090440);
          uVar14 = ((undefined8 *)(lVar6 + _DAT_113090440))[1];
          uVar17 = *(undefined8 *)(lVar6 + _DAT_113090448);
          uVar12 = ((undefined8 *)(lVar6 + _DAT_113090448))[1];
          _swift_bridgeObjectRetain(uVar12);
          _swift_bridgeObjectRetain(uVar14);
        }
        uVar9 = *(undefined8 *)(uVar13 + _DAT_113090408);
        uVar20 = ((undefined8 *)(uVar13 + _DAT_113090408))[1];
        _swift_bridgeObjectRetain(uVar20);
        _objc_release(uVar13);
        uVar13 = *(ulong *)(puVar19 + 0x10);
        puStack_b8 = puVar19;
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar13) {
          func_0x0001046c7340(1 < *(ulong *)(puVar19 + 0x18),uVar13 + 1,1);
        }
        uVar18 = uVar18 + 1;
        *(ulong *)(puStack_b8 + 0x10) = uVar13 + 1;
        *(undefined8 *)(puStack_b8 + uVar13 * 0x38 + 0x20) = uStack_d0;
        *(undefined8 *)(puStack_b8 + uVar13 * 0x38 + 0x28) = uStack_d8;
        *(undefined8 *)(puStack_b8 + uVar13 * 0x38 + 0x30) = uVar14;
        *(undefined8 *)(puStack_b8 + uVar13 * 0x38 + 0x38) = uVar17;
        *(undefined8 *)(puStack_b8 + uVar13 * 0x38 + 0x40) = uVar12;
        *(undefined8 *)(puStack_b8 + uVar13 * 0x38 + 0x48) = uVar9;
        *(undefined8 *)(puStack_b8 + uVar13 * 0x38 + 0x50) = uVar20;
        param_2 = lStack_f8;
        param_1 = puStack_100;
        puVar19 = puStack_b8;
      } while (uStack_e8 != uVar18);
    }
  }
  param_1[0x15] = puVar19;
  uVar13 = *(ulong *)(param_2 + _DAT_11308fae8);
  if (uVar13 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    if (uVar13 >> 0x3e == 0) {
      uVar16 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = uVar13;
      if (-1 < (long)uVar13) {
        uVar16 = uVar13 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar16 != 0) {
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001015528dc(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
      lVar6 = lStack_108;
      puVar11 = puStack_110;
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1047dce90);
        (*pcVar5)();
      }
      uVar18 = 0;
      puVar19 = puStack_b8;
      do {
        if ((uVar13 & 0xc000000000000001) == 0) {
          uVar7 = *(ulong *)(uVar13 + uVar18 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar7 = uVar18;
          func_0x0001046c4bb4(uVar18,uVar13);
        }
        uVar17 = ((undefined8 *)(uVar7 + _DAT_11308fa60))[1];
        *puVar11 = *(undefined8 *)(uVar7 + _DAT_11308fa60);
        puVar11[1] = uVar17;
        lVar15 = *(long *)(uVar7 + _DAT_11308fa68);
        if (lVar15 == 0) {
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 1;
          _swift_bridgeObjectRetain();
        }
        else {
          _swift_bridgeObjectRetain();
          func_0x00010bf885a0(lVar15);
          puVar11[2] = uVar10;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        func_0x0001047dd054(uVar7 + _DAT_113815310,(long)puVar11 + (long)*(int *)(lVar6 + 0x18),
                            0x112d373d8,&UNK_10d9014c0);
        uVar17 = ((undefined8 *)(uVar7 + _DAT_113815318))[1];
        puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar6 + 0x1c));
        *puVar1 = *(undefined8 *)(uVar7 + _DAT_113815318);
        puVar1[1] = uVar17;
        uVar17 = *(undefined8 *)(uVar7 + _DAT_113815320);
        uVar14 = ((undefined8 *)(uVar7 + _DAT_113815320))[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar14);
        _objc_release(uVar7);
        puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar6 + 0x20));
        *puVar1 = uVar17;
        puVar1[1] = uVar14;
        uVar7 = *(ulong *)(puVar19 + 0x10);
        puStack_b8 = puVar19;
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar7) {
          func_0x0001015528dc(1 < *(ulong *)(puVar19 + 0x18),uVar7 + 1,1);
        }
        puVar19 = puStack_b8;
        uVar18 = uVar18 + 1;
        *(ulong *)(puStack_b8 + 0x10) = uVar7 + 1;
        func_0x0001047dd09c(puVar11,puStack_b8 +
                                    *(long *)(lStack_c8 + 0x48) * uVar7 +
                                    ((ulong)*(byte *)(lStack_c8 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lStack_c8 + 0x50) ^ 0xffffffffffffffff)),
                            FUN_10470ee30);
        param_2 = lStack_f8;
        param_1 = puStack_100;
      } while (uVar16 != uVar18);
    }
  }
  param_1[0x16] = puVar19;
  uVar13 = *(ulong *)(param_2 + _DAT_11308faf0);
  if (uVar13 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    if (uVar13 >> 0x3e == 0) {
      uVar16 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = uVar13;
      if (-1 < (long)uVar13) {
        uVar16 = uVar13 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    lVar6 = lStack_108;
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar16 != 0) {
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001015528dc(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1047dce94);
        (*pcVar5)();
      }
      uVar18 = 0;
      puVar19 = puStack_b8;
      do {
        if ((uVar13 & 0xc000000000000001) == 0) {
          uVar7 = *(ulong *)(uVar13 + uVar18 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar7 = uVar18;
          func_0x0001046c4bb4(uVar18,uVar13);
        }
        puVar11 = puStack_c0;
        uVar17 = ((undefined8 *)(uVar7 + _DAT_11308fa60))[1];
        *puStack_c0 = *(undefined8 *)(uVar7 + _DAT_11308fa60);
        puVar11[1] = uVar17;
        lVar15 = *(long *)(uVar7 + _DAT_11308fa68);
        if (lVar15 == 0) {
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 1;
          _swift_bridgeObjectRetain();
          puVar11 = puStack_c0;
        }
        else {
          _swift_bridgeObjectRetain();
          func_0x00010bf885a0(lVar15);
          puVar11 = puStack_c0;
          puStack_c0[2] = uVar10;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        func_0x0001047dd054(uVar7 + _DAT_113815310,(long)puVar11 + (long)*(int *)(lVar6 + 0x18),
                            0x112d373d8,&UNK_10d9014c0);
        uVar17 = ((undefined8 *)(uVar7 + _DAT_113815318))[1];
        puVar11 = (undefined8 *)((long)puStack_c0 + (long)*(int *)(lVar6 + 0x1c));
        *puVar11 = *(undefined8 *)(uVar7 + _DAT_113815318);
        puVar11[1] = uVar17;
        uVar17 = *(undefined8 *)(uVar7 + _DAT_113815320);
        uVar14 = ((undefined8 *)(uVar7 + _DAT_113815320))[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar14);
        _objc_release(uVar7);
        puVar11 = (undefined8 *)((long)puStack_c0 + (long)*(int *)(lVar6 + 0x20));
        *puVar11 = uVar17;
        puVar11[1] = uVar14;
        uVar7 = *(ulong *)(puVar19 + 0x10);
        puStack_b8 = puVar19;
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar7) {
          func_0x0001015528dc(1 < *(ulong *)(puVar19 + 0x18),uVar7 + 1,1);
        }
        puVar19 = puStack_b8;
        uVar18 = uVar18 + 1;
        *(ulong *)(puStack_b8 + 0x10) = uVar7 + 1;
        func_0x0001047dd09c(puStack_c0,
                            puStack_b8 +
                            *(long *)(lStack_c8 + 0x48) * uVar7 +
                            ((ulong)*(byte *)(lStack_c8 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lStack_c8 + 0x50) ^ 0xffffffffffffffff)),FUN_10470ee30
                           );
      } while (uVar16 != uVar18);
    }
  }
  puVar11 = puStack_100;
  puStack_100[0x17] = puVar19;
  lVar6 = _DAT_11308faf8;
  lVar8 = 0;
  FUN_10470fbcc();
  lVar15 = lStack_f8;
  iVar4 = *(int *)(lVar8 + 0x38);
  bVar2 = *(long *)(lStack_f8 + lVar6) == 0;
  if (!bVar2) {
    _objc_retain();
    FUN_1047fe454((long)puVar11 + (long)iVar4);
  }
  lVar6 = 0;
  FUN_104742f28();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)puVar11 + (long)iVar4,bVar2,1,lVar6);
  _objc_release(lVar15);
  return;
}



/* Entry: 1047dce94; end: 1047dcf0f; -[SCAdSnapAppInstall init] */

void FUN_1047dce94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdSnapAppInstallWrapper.swift",
             0x29,2,0xa8,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047dcedc);
  (*pcVar1)();
}



/* Entry: 1047dcf10; end: 1047dd0df; -[SCAdSnapAppInstall .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dcf10(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308faa8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fab0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fab8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fac0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fac8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fad8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fae0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fae8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308faf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308faf8));
  return;
}



/* Entry: 1047dd0e0; end: 1047dd0ff;  */

void FUN_1047dd0e0(void)

{
  _objc_opt_self(&PTR_PTR_1129d5d40);
  return;
}



/* Entry: 1047dd100; end: 1047dd1af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd100(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  if ((param_1 & 0xff00000000) == 0x100000000) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c0138c0(param_1 & 0xffffffff);
  }
  *(undefined **)(unaff_x20 + _DAT_11308fb38) = puVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fb40);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047dd1b0; end: 1047dd277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd1b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fb38);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308fb40))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fb40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047dd278; end: 1047dd3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047dd278(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_11308fb38);
      lVar6 = *(long *)(lStack_68 + _DAT_11308fb38);
      uVar4 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar6);
        _objc_retain(lVar5);
        lVar3 = lVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar3;
        _objc_release(lVar5);
        _objc_release(lVar6);
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_11308fb40))[1];
      lVar5 = ((long *)(lStack_68 + _DAT_11308fb40))[1];
      if (lVar6 == 0) {
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lStack_68);
        if (lVar5 != 0) {
          _swift_bridgeObjectRelease(lVar5);
          uVar4 = 0;
          goto LAB_1047dd3ac;
        }
LAB_1047dd3f4:
        uVar4 = uVar4 & 1;
      }
      else {
        uVar1 = 0;
        if (lVar5 != 0) {
          lVar3 = *(long *)(unaff_x20 + _DAT_11308fb40);
          if (lVar3 == *(long *)(lStack_68 + _DAT_11308fb40) && lVar6 == lVar5) {
            _objc_release(lStack_68);
            goto LAB_1047dd3f4;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar1 = (uint)lVar3;
        }
        _objc_release(lStack_68);
        uVar4 = uVar4 & uVar1;
      }
      goto LAB_1047dd3ac;
    }
  }
  uVar4 = 0;
LAB_1047dd3ac:
  return uVar4 & 1;
}



/* Entry: 1047dd400; end: 1047dd40f; -[SCAppPrice price] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fb38));
  return;
}



/* Entry: 1047dd410; end: 1047dd46b; -[SCAppPrice currencyCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd410(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fb40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fb40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047dd46c; end: 1047dd4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fb38) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fb40);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047dd4d8; end: 1047dd567; -[SCAppPrice initWithPrice:currencyCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd4d8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11308fb38) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11308fb40);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1047dd568; end: 1047dd59b; -[SCAppPrice hash] */

undefined8 FUN_1047dd568(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047dd1b0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047dd59c; end: 1047dd61b; -[SCAppPrice isEqual:] */

uint FUN_1047dd59c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047dd278(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047dd61c; end: 1047dd61f; -[SCAppPrice copyWithZone:] */

void FUN_1047dd61c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047dd620; end: 1047dd6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd620(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x4543495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543495250,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fb40))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fb40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x59434e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59434e4552525543,0xed000045444f435f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047dd6ec; end: 1047dd73b; -[SCAppPrice encodeWithCoder:] */

void FUN_1047dd6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047dd620(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047dd73c; end: 1047dd76b;  */

void FUN_1047dd73c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047dd76c(param_1);
  return;
}



/* Entry: 1047dd76c; end: 1047dd943;  */

undefined8 FUN_1047dd76c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar2 = (int)&uStack_90;
  uVar6 = 0;
  uVar3 = 0x4543495250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4543495250,0xe500000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x0001002ed07c(0);
    _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,uVar3,6);
    uVar3 = uStack_90;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0x59434e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59434e4552525543,0xed000045444f435f);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar4 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
    if ((uVar6 & 1) != 0) {
      uVar5 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      goto LAB_1047dd8fc;
    }
  }
  uVar5 = 0;
LAB_1047dd8fc:
  func_0x00010c039e80();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar3);
  return unaff_x20;
}



/* Entry: 1047dd944; end: 1047dd96b; -[SCAppPrice initWithCoder:] */

void FUN_1047dd944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047dd76c();
  return;
}



/* Entry: 1047dd96c; end: 1047dd997; -[SCAppPrice description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dd96c(long param_1)

{
  func_0x00010bfb2c80(*(undefined8 *)(param_1 + _DAT_11308fb38));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047dd998; end: 1047dda13; -[SCAppPrice init] */

void FUN_1047dd998(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AppPriceWrapper.swift",0x21,2,
             0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047dd9e0);
  (*pcVar1)();
}



/* Entry: 1047dda14; end: 1047dda4f; -[SCAppPrice .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dda14(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fb38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308fb40 + 8))
  ;
  return;
}



/* Entry: 1047dda50; end: 1047dda6f;  */

void FUN_1047dda50(void)

{
  _objc_opt_self(&PTR_PTR_1129d5e60);
  return;
}



/* Entry: 1047dda70; end: 1047dda7f; -[SCAdCaptionCtaImpression captionCtaPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dda70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fb70));
  return;
}



/* Entry: 1047dda80; end: 1047dda8f; -[SCAdCaptionCtaImpression captionCtaRenderedRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dda80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fb78));
  return;
}



/* Entry: 1047dda90; end: 1047ddaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dda90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fb70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fb78) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ddaf4; end: 1047ddb6b; -[SCAdCaptionCtaImpression initWithCaptionCtaPosition:captionCtaRenderedRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ddaf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308fb70) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308fb78) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1047ddb6c; end: 1047ddb9b;  */

void FUN_1047ddb6c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047ddb9c(param_1);
  return;
}



/* Entry: 1047ddb9c; end: 1047ddcf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ddb9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  long lStack_78;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_80;
  _swift_getObjectType();
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  lVar1 = 0;
  FUN_1047e0d80();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308fc38) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_11308fc40) = uVar7;
  *(undefined8 *)(lVar2 + _DAT_11308fc48) = uVar8;
  *(undefined8 *)(lVar2 + _DAT_11308fc50) = uVar9;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308fb70) = plVar3;
  puVar5 = (undefined1 *)0x0;
  if (*(char *)(param_1 + 8) != '\x01') {
    uVar7 = param_1[6];
    uVar6 = param_1[7];
    uVar9 = param_1[4];
    uVar8 = param_1[5];
    lVar1 = 0;
    FUN_10481a744();
    lVar2 = lVar1;
    _objc_allocWithZone();
    *(undefined8 *)(lVar2 + _DAT_113090d18) = uVar9;
    *(undefined8 *)(lVar2 + _DAT_113090d20) = uVar8;
    *(undefined8 *)(lVar2 + _DAT_113090d28) = uVar7;
    *(undefined8 *)(lVar2 + _DAT_113090d30) = uVar6;
    lStack_80 = lVar2;
    lStack_78 = lVar1;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar5 = (undefined1 *)plVar4;
  }
  *(undefined1 **)(unaff_x20 + _DAT_11308fb78) = puVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047ddcf4; end: 1047ddd13; -[SCAdCaptionCtaImpression hash] */

void FUN_1047ddcf4(void)

{
  FUN_1047ddd14();
  return;
}



/* Entry: 1047ddd14; end: 1047ddedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047ddd14(void)

{
  double dVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  lVar2 = *(long *)(unaff_x20 + _DAT_11308fb70);
  __ss6HasherVABycfC(auStack_d0);
  dVar1 = 0.0;
  if (*(double *)(lVar2 + _DAT_11308fc38) != 0.0) {
    dVar1 = *(double *)(lVar2 + _DAT_11308fc38);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(lVar2 + _DAT_11308fc40) != 0.0) {
    dVar1 = *(double *)(lVar2 + _DAT_11308fc40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(lVar2 + _DAT_11308fc48) != 0.0) {
    dVar1 = *(double *)(lVar2 + _DAT_11308fc48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(lVar2 + _DAT_11308fc50) != 0.0) {
    dVar1 = *(double *)(lVar2 + _DAT_11308fc50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar2 = *(long *)(unaff_x20 + _DAT_11308fb78);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_118);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_113090d18) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_113090d18);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_113090d20) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_113090d20);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_113090d28) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_113090d28);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    dVar1 = 0.0;
    if (*(double *)(lVar2 + _DAT_113090d30) != 0.0) {
      dVar1 = *(double *)(lVar2 + _DAT_113090d30);
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(dVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047ddee0; end: 1047de037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047ddee0(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lStack_58;
  long alStack_50 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_50);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,alStack_50,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar5 = *(long *)(lStack_58 + _DAT_11308fb70);
      uVar2 = 0;
      FUN_1047e0d80();
      alStack_50[0] = lVar5;
      alStack_50[3] = uVar2;
      _objc_retain(lVar5);
      plVar1 = alStack_50;
      FUN_1047e0630(plVar1);
      func_0x00010006e7f4(alStack_50);
      if (*(long *)(unaff_x20 + _DAT_11308fb78) == 0) {
        lVar6 = *(long *)(lStack_58 + _DAT_11308fb78);
        lVar5 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_58);
        if (lVar6 != 0) {
          _objc_release(lVar5);
          uVar4 = 0;
          goto LAB_1047de018;
        }
        uVar4 = 1;
      }
      else {
        lVar5 = *(long *)(lStack_58 + _DAT_11308fb78);
        if (lVar5 == 0) {
          uVar2 = 0;
          alStack_50[1] = 0;
          alStack_50[2] = 0;
        }
        else {
          uVar2 = 0;
          FUN_10481a744();
        }
        alStack_50[0] = lVar5;
        alStack_50[3] = uVar2;
        _objc_retain(lVar5);
        plVar3 = alStack_50;
        FUN_104819fc4(plVar3);
        uVar4 = (uint)plVar3;
        _objc_release(lStack_58);
        func_0x00010006e7f4(alStack_50);
      }
      uVar4 = (uint)plVar1 & uVar4;
      goto LAB_1047de018;
    }
  }
  uVar4 = 0;
LAB_1047de018:
  return uVar4 & 1;
}



/* Entry: 1047de038; end: 1047de0b7; -[SCAdCaptionCtaImpression isEqual:] */

uint FUN_1047de038(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047ddee0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047de0b8; end: 1047de0bb; -[SCAdCaptionCtaImpression copyWithZone:] */

void FUN_1047de0b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047de0bc; end: 1047de197; -[SCAdCaptionCtaImpression encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047de0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20e8c0);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20e8e0);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1047de198; end: 1047de1c7;  */

void FUN_1047de198(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047de1c8(param_1);
  return;
}



/* Entry: 1047de1c8; end: 1047de3c3;  */

undefined8 FUN_1047de1c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20e8c0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0;
    FUN_1047e0d80(0);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_88;
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20e8e0);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar3 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        func_0x00010006e7f4(&uStack_60);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        FUN_10481a744(0);
        puVar4 = &uStack_88;
        _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
        uVar5 = uStack_88;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      func_0x00010bffc580();
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar5);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047de3c4; end: 1047de3eb; -[SCAdCaptionCtaImpression initWithCoder:] */

void FUN_1047de3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047de1c8();
  return;
}



/* Entry: 1047de3ec; end: 1047de417; -[SCAdCaptionCtaImpression description] */

void FUN_1047de3ec(void)

{
  undefined1 auStack_58 [72];
  
  FUN_1047de524(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047de418; end: 1047de46f;  */

void FUN_1047de418(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_1047de524(&uStack_68);
  _objc_release(param_2);
  param_1[5] = uStack_40;
  param_1[4] = uStack_48;
  param_1[7] = uStack_30;
  param_1[6] = uStack_38;
  *(undefined1 *)(param_1 + 8) = uStack_28;
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  param_1[3] = uStack_50;
  param_1[2] = uStack_58;
  return;
}



/* Entry: 1047de470; end: 1047de4eb; -[SCAdCaptionCtaImpression init] */

void FUN_1047de470(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdCaptionCtaImpressionWrapper.swift",0x2f,2,0x4b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047de4b8);
  (*pcVar1)();
}



/* Entry: 1047de4ec; end: 1047de523; -[SCAdCaptionCtaImpression .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047de4ec(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fb70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fb78));
  return;
}



/* Entry: 1047de524; end: 1047de5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047de524(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(param_2 + _DAT_11308fb70);
  uVar7 = *(undefined8 *)(lVar1 + _DAT_11308fc40);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_11308fc48);
  uVar9 = *(undefined8 *)(lVar1 + _DAT_11308fc50);
  lVar5 = *(long *)(param_2 + _DAT_11308fb78);
  if (lVar5 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + _DAT_113090d18);
    uVar3 = *(undefined8 *)(lVar5 + _DAT_113090d20);
    uVar4 = *(undefined8 *)(lVar5 + _DAT_113090d28);
    uVar6 = *(undefined8 *)(lVar5 + _DAT_113090d30);
  }
  *param_1 = *(undefined8 *)(lVar1 + _DAT_11308fc38);
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar6;
  *(bool *)(param_1 + 8) = lVar5 == 0;
  return;
}



/* Entry: 1047de5f0; end: 1047de60f;  */

void FUN_1047de5f0(void)

{
  _objc_opt_self(&PTR_PTR_1129d5f38);
  return;
}



/* Entry: 1047de610; end: 1047de6bb;  */

void FUN_1047de610(void)

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



/* Entry: 1047de6bc; end: 1047de6fb;  */

void FUN_1047de6bc(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1047de6fc; end: 1047de73f; -[SCAdClickInfo description] */

void FUN_1047de6fc(undefined8 param_1)

{
  undefined1 auStack_98 [120];
  
  _objc_retain();
  FUN_1047df1f4(auStack_98);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047de740; end: 1047de787; -[SCAdClickInfo init] */

void FUN_1047de740(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdClickInfoWrapper.swift",0x24,2,
             0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047de788);
  (*pcVar1)();
}



/* Entry: 1047de788; end: 1047de7bb; -[SCAdClickInfo hash] */

undefined8 FUN_1047de788(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047de7bc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047de7bc; end: 1047dea0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047de7bc(void)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_11308fba8);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11308fbb0) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047e2170();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308fbb8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047e0dd4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047dea0c; end: 1047dea8b; -[SCAdClickInfo isEqual:] */

uint FUN_1047dea0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001047de88c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047dea8c; end: 1047dea8f; -[SCAdClickInfo copyWithZone:] */

void FUN_1047dea8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047dea90; end: 1047debd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dea90(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (*(char *)(unaff_x20 + _DAT_11308fba8) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_11308fbb8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047debd0);
      (*pcVar1)();
    }
    uVar2 = 0x4e495f4550495753;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f4550495753,0xea00000000004f46);
    func_0x00010bf93020(param_1);
    uVar3 = 0xed00004550495753;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_11308fbb0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047debd4);
      (*pcVar1)();
    }
    uVar2 = 0x4f464e495f504154;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f464e495f504154,0xe800000000000000);
    func_0x00010bf93020(param_1);
    uVar3 = 0xeb00000000504154;
  }
  _objc_release(uVar2);
  uVar2 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar3);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1047debd4; end: 1047dec23; -[SCAdClickInfo encodeWithCoder:] */

void FUN_1047debd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047dea90(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047dec24; end: 1047dec53;  */

void FUN_1047dec24(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047dec54(param_1);
  return;
}



/* Entry: 1047dec54; end: 1047df027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047dec54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar6 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) goto LAB_1047defd0;
  plVar3 = &lStack_a0;
  _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar2 = lStack_a0;
  if (((ulong)plVar3 & 1) == 0) {
LAB_1047defe4:
    _objc_release(param_1);
  }
  else {
    uVar7 = 0x5f45505954425553;
    if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x14ffffffffafbeac)) ||
       (uVar4 = uVar7,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (0x5f45505954425553,0xeb00000000504154,lStack_a0,lStack_98,0), (uVar4 & 1) != 0)) {
      _swift_bridgeObjectRelease(lStack_98);
      uVar1 = 0x4f464e495f504154;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f464e495f504154,0xe800000000000000);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (lVar2 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 != 0) {
        uVar1 = 0;
        FUN_1047e29a4(0);
        plVar3 = &lStack_a0;
        _swift_dynamicCast(plVar3,&uStack_70,puVar6 + 8,uVar1,6);
        if (((ulong)plVar3 & 1) != 0) {
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_11308fba8) = 0;
          *(long *)(unaff_x20 + _DAT_11308fbb0) = lStack_a0;
          *(undefined8 *)(unaff_x20 + _DAT_11308fbb8) = 0;
          puVar6 = PTR_s_init_1125d9248;
          _objc_retain(lStack_a0);
          goto LAB_1047dee54;
        }
        goto LAB_1047defe4;
      }
    }
    else {
      if ((lVar2 == 0x5f45505954425553) && (lStack_98 == -0x12ffffbaafb6a8ad)) {
        _swift_bridgeObjectRelease(0xed00004550495753);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5f45505954425553,0xed00004550495753,lVar2,lStack_98,0);
        _swift_bridgeObjectRelease(lStack_98);
        if ((uVar7 & 1) == 0) goto LAB_1047defe4;
      }
      uVar1 = 0x4e495f4550495753;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f4550495753,0xea00000000004f46);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (lVar2 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 != 0) {
        uVar1 = 0;
        FUN_1047e2060(0);
        plVar3 = &lStack_a0;
        _swift_dynamicCast(plVar3,&uStack_70,puVar6 + 8,uVar1,6);
        if (((ulong)plVar3 & 1) != 0) {
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_11308fba8) = 1;
          *(undefined8 *)(unaff_x20 + _DAT_11308fbb0) = 0;
          *(long *)(unaff_x20 + _DAT_11308fbb8) = lStack_a0;
          puVar6 = PTR_s_init_1125d9248;
          _objc_retain(lStack_a0);
          puVar5 = auStack_b0;
LAB_1047dee54:
          _objc_msgSendSuper2(puVar5,puVar6);
          _objc_release(lStack_a0);
          _objc_release(param_1);
          _swift_getObjectType();
          _swift_deallocPartialClassInstance();
          return puVar5;
        }
        goto LAB_1047defe4;
      }
    }
LAB_1047defd0:
    uStack_90 = uStack_70;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
    lStack_78 = lStack_58;
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 1047df028; end: 1047df04f; -[SCAdClickInfo initWithCoder:] */

void FUN_1047df028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047dec54();
  return;
}



/* Entry: 1047df050; end: 1047df0c3; +[SCAdClickInfo tapWithInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df050(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308fba8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308fbb0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11308fbb8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047df0c4; end: 1047df13b; +[SCAdClickInfo swipeWithInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308fba8) = 1;
  *(undefined8 *)(lVar2 + _DAT_11308fbb0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11308fbb8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047df13c; end: 1047df187; -[SCAdClickInfo matchTap:swipe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df13c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11308fba8) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_11308fbb8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047df168);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_11308fbb0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1047df188);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0001047df180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1047df188; end: 1047df1bb;  */

void FUN_1047df188(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1047df1bc; end: 1047df1f3; -[SCAdClickInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df1bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fbb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fbb8));
  return;
}



/* Entry: 1047df1f4; end: 1047df533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df1f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x26;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_6 + _DAT_11308fba8) == '\x01') {
    lVar2 = *(long *)(param_6 + _DAT_11308fbb8);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047df350);
      (*pcVar1)();
    }
    _objc_retain();
    FUN_1047e1f1c(&uStack_d8);
    _objc_release(lVar2);
    uVar3 = uStack_70 & 1 | 0x8000000000000000;
  }
  else {
    lVar2 = *(long *)(param_6 + _DAT_11308fbb0);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047df354);
      (*pcVar1)();
    }
    uVar3 = 0;
    lVar4 = *(long *)(lVar2 + _DAT_11308fce8);
    uStack_d8 = *(undefined8 *)(lVar4 + _DAT_11308fc38);
    uStack_d0 = *(undefined8 *)(lVar4 + _DAT_11308fc40);
    uStack_c8 = *(undefined8 *)(lVar4 + _DAT_11308fc48);
    uStack_c0 = *(undefined8 *)(lVar4 + _DAT_11308fc50);
    uStack_b0 = *(undefined8 *)(lVar2 + _DAT_11308fcf8);
    uStack_a8 = 0;
    uStack_b8 = *(undefined8 *)(lVar2 + _DAT_11308fcf0);
    uStack_68 = unaff_x26;
    uStack_a0 = param_3;
    uStack_98 = in_register_00005028;
    uStack_90 = param_4;
    uStack_88 = in_register_00005048;
    uStack_80 = param_5;
    uStack_78 = in_register_00005068;
  }
  *param_1 = uStack_d8;
  param_1[1] = uStack_d0;
  param_1[2] = uStack_c8;
  param_1[3] = uStack_c0;
  param_1[4] = uStack_b8;
  param_1[6] = uStack_a8;
  param_1[5] = uStack_b0;
  param_1[8] = uStack_98;
  param_1[7] = uStack_a0;
  param_1[10] = uStack_88;
  param_1[9] = uStack_90;
  param_1[0xc] = uStack_78;
  param_1[0xb] = uStack_80;
  param_1[0xd] = uVar3;
  param_1[0xe] = uStack_68;
  return;
}



/* Entry: 1047df534; end: 1047df553;  */

void FUN_1047df534(void)

{
  _objc_opt_self(&PTR_PTR_1129d6010);
  return;
}



/* Entry: 1047df554; end: 1047df6bb;  */

int FUN_1047df554(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1047df5d0;
        goto LAB_1047df5b4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1047df5b4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1047df5d0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1047df6bc; end: 1047df6fb;  */

void FUN_1047df6bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308fbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35b54;
  _swift_getWitnessTable(&UNK_10dd35b54,&UNK_1107a1a10);
  puRam000000011308fbe8 = puVar1;
  return;
}



/* Entry: 1047df6fc; end: 1047df7a7;  */

void FUN_1047df6fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_1047e04f8(&uStack_c8);
  _objc_release(param_2);
  param_1[0x11] = uStack_40;
  param_1[0x10] = uStack_48;
  param_1[0x13] = uStack_30;
  param_1[0x12] = uStack_38;
  *(undefined1 *)(param_1 + 0x14) = uStack_28;
  param_1[9] = uStack_80;
  param_1[8] = uStack_88;
  param_1[0xb] = uStack_70;
  param_1[10] = uStack_78;
  param_1[0xd] = uStack_60;
  param_1[0xc] = uStack_68;
  param_1[0xf] = uStack_50;
  param_1[0xe] = uStack_58;
  param_1[1] = uStack_c0;
  *param_1 = uStack_c8;
  param_1[3] = uStack_b0;
  param_1[2] = uStack_b8;
  param_1[5] = uStack_a0;
  param_1[4] = uStack_a8;
  param_1[7] = uStack_90;
  param_1[6] = uStack_98;
  return;
}



/* Entry: 1047df7a8; end: 1047df7b7; -[SCAdClickInteraction clickInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df7a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fbf0));
  return;
}



/* Entry: 1047df7b8; end: 1047df7c7; -[SCAdClickInteraction attachmentFullyVisibleTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fbf8));
  return;
}



/* Entry: 1047df7c8; end: 1047df7d7; -[SCAdClickInteraction attachmentTriggeredTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df7c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fc00));
  return;
}



/* Entry: 1047df7d8; end: 1047df7e7; -[SCAdClickInteraction multiSegmentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df7d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fc08));
  return;
}



/* Entry: 1047df7e8; end: 1047df873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fbf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fbf8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc08) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047df874; end: 1047df923; -[SCAdClickInteraction initWithClickInfo:attachmentFullyVisibleTimestampMs:attachmentTriggeredTimestampMs:multiSegmentIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308fbf0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308fbf8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308fc00) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308fc08) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1047df924; end: 1047dfa53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047df924(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  _swift_getObjectType();
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_50 = param_1[0xe];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  puVar1 = &uStack_c0;
  func_0x0001047df354();
  *(undefined8 **)(unaff_x20 + _DAT_11308fbf0) = puVar1;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[0xf];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308fbf8) = puVar2;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[0x11];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_11308fc00) = puVar2;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308fc08) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffff30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047dfa54; end: 1047dfa87; -[SCAdClickInteraction hash] */

undefined8 FUN_1047dfa54(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047dfa88();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047dfa88; end: 1047dfbb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dfa88(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  FUN_1047de7bc();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fbf8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fc00);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fc08);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047dfbb4; end: 1047dfe03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047dfbb4(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar2 = &lStack_78;
    _swift_dynamicCast(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar9 = *(undefined8 *)(lStack_78 + _DAT_11308fbf0);
      uVar3 = 0;
      FUN_1047df534();
      auStack_70[0] = uVar9;
      lStack_58 = uVar3;
      _objc_retain(uVar9);
      uVar1 = 0;
      func_0x0001047de88c();
      func_0x00010006e7f4(auStack_70);
      lVar8 = *(long *)(unaff_x20 + _DAT_11308fbf8);
      lVar11 = *(long *)(lStack_78 + _DAT_11308fbf8);
      uVar10 = (uint)(lVar8 == 0 && lVar11 == 0);
      if (lVar8 != 0 && lVar11 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar10 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar11);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308fc00);
      lVar11 = *(long *)(lStack_78 + _DAT_11308fc00);
      uVar6 = (uint)(lVar8 == 0 && lVar11 == 0);
      if ((lVar8 != 0) && (lVar11 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar11);
        _objc_retain(lVar8);
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar6 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar11);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11308fc08);
      lVar11 = *(long *)(lStack_78 + _DAT_11308fc08);
      if (lVar8 == 0) {
        lVar4 = lVar11;
        _objc_retain(lVar11);
        _objc_release(lStack_78);
        if (lVar11 != 0) {
          uVar7 = 0;
          goto LAB_1047dfdbc;
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        lVar4 = lStack_78;
        if (lVar11 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar11);
          _objc_retain(lVar8);
          lVar5 = lVar8;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar7 = (uint)lVar5;
          _objc_release(lVar8);
          _objc_release(lVar11);
        }
LAB_1047dfdbc:
        _objc_release(lVar4);
      }
      if ((uVar1 & uVar10 & 1) != 0) {
        uVar6 = uVar6 & uVar7;
        goto LAB_1047dfde4;
      }
    }
  }
  uVar6 = 0;
LAB_1047dfde4:
  return uVar6 & 1;
}



/* Entry: 1047dfe04; end: 1047dfe83; -[SCAdClickInteraction isEqual:] */

uint FUN_1047dfe04(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047dfbb4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047dfe84; end: 1047dfe87; -[SCAdClickInteraction copyWithZone:] */

void FUN_1047dfe84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047dfe88; end: 1047dffbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047dfe88(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4e495f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f4b43494c43,0xea00000000004f46);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f20e960);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20e990);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e9c0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047dffc0; end: 1047e000f; -[SCAdClickInteraction encodeWithCoder:] */

void FUN_1047dffc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047dfe88(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e0010; end: 1047e003f;  */

void FUN_1047e0010(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e0040(param_1);
  return;
}



/* Entry: 1047e0040; end: 1047e03b7;  */

undefined8 FUN_1047e0040(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0x4e495f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e495f4b43494c43,0xea00000000004f46);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar2 = 0;
    FUN_1047df534(0);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_98;
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = 0xd000000000000025;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f20e960);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_70);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_98;
        _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
        uVar5 = uStack_98;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      uVar6 = 0xd000000000000021;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20e990);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_70);
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_98;
        _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
        uVar6 = uStack_98;
        if ((int)puVar4 == 0) {
          uVar6 = 0;
        }
      }
      uVar7 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20e9c0);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_70);
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_98;
        _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar7,6);
        uVar7 = uStack_98;
        if ((int)puVar4 == 0) {
          uVar7 = 0;
        }
      }
      func_0x00010bffee20();
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047e03b8; end: 1047e03df; -[SCAdClickInteraction initWithCoder:] */

void FUN_1047e03b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047e0040();
  return;
}



/* Entry: 1047e03e0; end: 1047e0423; -[SCAdClickInteraction description] */

void FUN_1047e03e0(undefined8 param_1)

{
  undefined1 auStack_c8 [168];
  
  _objc_retain();
  FUN_1047e04f8(auStack_c8);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047e0424; end: 1047e049f; -[SCAdClickInteraction init] */

void FUN_1047e0424(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdClickInteractionWrapper.swift",
             0x2b,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e046c);
  (*pcVar1)();
}



/* Entry: 1047e04a0; end: 1047e04f7; -[SCAdClickInteraction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e04a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fbf0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fbf8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fc00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fc08));
  return;
}



/* Entry: 1047e04f8; end: 1047e060f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e04f8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  uVar4 = *(undefined8 *)(param_3 + _DAT_11308fbf0);
  _objc_retain(uVar4);
  FUN_1047df1f4(&uStack_b8);
  _objc_release(uVar4);
  uVar4 = 0;
  bVar1 = *(long *)(param_3 + _DAT_11308fbf8) == 0;
  if (bVar1) {
    uVar6 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar6 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_11308fc00) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar4 = param_2;
  }
  lVar5 = *(long *)(param_3 + _DAT_11308fc08);
  bVar3 = lVar5 == 0;
  if (!bVar3) {
    func_0x00010c067fc0();
  }
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[0xb] = uStack_60;
  param_1[10] = uStack_68;
  param_1[0xd] = uStack_50;
  param_1[0xc] = uStack_58;
  param_1[0xe] = uStack_48;
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  param_1[0xf] = uVar6;
  *(bool *)(param_1 + 0x10) = bVar1;
  param_1[0x11] = uVar4;
  *(bool *)(param_1 + 0x12) = bVar2;
  param_1[0x13] = lVar5;
  *(bool *)(param_1 + 0x14) = bVar3;
  return;
}



/* Entry: 1047e0610; end: 1047e062f;  */

void FUN_1047e0610(void)

{
  _objc_opt_self(&PTR_PTR_1129d60e8);
  return;
}



/* Entry: 1047e0630; end: 1047e072f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047e0630(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      dVar3 = *(double *)(unaff_x20 + _DAT_11308fc38);
      dVar4 = *(double *)(lStack_88 + _DAT_11308fc38);
      dVar5 = *(double *)(unaff_x20 + _DAT_11308fc40);
      dVar6 = *(double *)(lStack_88 + _DAT_11308fc40);
      dVar7 = *(double *)(unaff_x20 + _DAT_11308fc48);
      dVar8 = *(double *)(lStack_88 + _DAT_11308fc48);
      dVar9 = *(double *)(unaff_x20 + _DAT_11308fc50);
      dVar10 = *(double *)(lStack_88 + _DAT_11308fc50);
      _objc_release();
      return dVar9 == dVar10 && (dVar7 == dVar8 && (dVar5 == dVar6 && dVar3 == dVar4));
    }
  }
  return false;
}



/* Entry: 1047e0730; end: 1047e073f; -[SCAdClickPositionInfo xPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e0730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fc38);
}



/* Entry: 1047e0740; end: 1047e074f; -[SCAdClickPositionInfo yPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e0740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fc40);
}



/* Entry: 1047e0750; end: 1047e075f; -[SCAdClickPositionInfo xPositionRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e0750(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fc48);
}



/* Entry: 1047e0760; end: 1047e0773; -[SCAdClickPositionInfo yPositionRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e0760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fc50);
}



/* Entry: 1047e0774; end: 1047e07f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e0774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fc38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc50) = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e07f8; end: 1047e0883; -[SCAdClickPositionInfo initWithXPosition:yPosition:xPositionRelative:yPositionRelative:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e07f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  _swift_getObjectType();
  *(undefined8 *)(param_5 + _DAT_11308fc38) = param_1;
  *(undefined8 *)(param_5 + _DAT_11308fc40) = param_2;
  *(undefined8 *)(param_5 + _DAT_11308fc48) = param_3;
  *(undefined8 *)(param_5 + _DAT_11308fc50) = param_4;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e0884; end: 1047e0943; -[SCAdClickPositionInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e0884(long param_1)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308fc38) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308fc38);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308fc40) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308fc40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308fc48) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308fc48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308fc50) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308fc50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e0944; end: 1047e09c3; -[SCAdClickPositionInfo isEqual:] */

uint FUN_1047e0944(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047e0630(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}


