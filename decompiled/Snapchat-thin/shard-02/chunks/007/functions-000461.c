/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102047190; end: 102047193; -[SCSpotlightBatchUserFeedCardRequester onAppWillResignActive] */

void FUN_102047190(void)

{
  return;
}



/* Entry: 102047194; end: 102047197; -[SCSpotlightBatchUserFeedCardRequester onAppDidEnterBackground] */

void FUN_102047194(void)

{
  return;
}



/* Entry: 102047198; end: 10204719b; -[SCSpotlightBatchUserFeedCardRequester onAppWillTerminate] */

void FUN_102047198(void)

{
  return;
}



/* Entry: 10204719c; end: 1020471ff;  */

void FUN_10204719c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_102047200();
    FUN_1020475e0();
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar1);
  }
  return;
}



/* Entry: 102047200; end: 1020475df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102047200(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uStack_b8;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e52d10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000103f1a13c();
    lVar5 = lVar4;
    func_0x000107c497f8();
    if (0 < lVar5) {
      puVar6 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar19 = *(ulong *)(unaff_x20 + _DAT_112e52d48);
      if (uVar19 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar19 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar19) {
          uVar7 = uVar19;
        }
        func_0x000107c60480();
      }
      if (uVar7 != 0) {
        uVar1 = *(ulong *)(unaff_x20 + _DAT_112e52d18);
        uVar2 = ((ulong *)(unaff_x20 + _DAT_112e52d18))[1];
        pcVar3 = *(code **)(unaff_x20 + _DAT_112e52d30);
        func_0x000107c61434(uVar19);
        lVar20 = 4;
        uVar18 = 0;
        if ((uVar19 & 0xc000000000000001) == 0) goto LAB_1020472fc;
LAB_1020472ec:
        uVar8 = uVar18;
        uVar16 = uVar19;
        func_0x00010117ea28();
        lVar21 = lVar20;
        do {
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020475c0);
            (*pcVar3)();
          }
          uVar9 = uVar8;
          func_0x000107c42924();
          func_0x000107c61180();
          uVar10 = uVar9;
          func_0x000107cf9e44();
          param_2 = uVar16;
          uVar13 = uVar9;
          if ((uVar10 & 1) == 0) {
            uVar10 = uVar9;
            func_0x000107cf9bb0();
            func_0x000107c61180();
            param_2 = uVar16;
            if (uVar10 == 0) goto LAB_1020473e4;
            uVar11 = uVar10;
            func_0x000107c5d984();
            func_0x000107c61180();
            param_2 = uVar16;
            uVar13 = uVar10;
            if (uVar11 == 0) {
LAB_1020473d8:
              func_0x000107c61170(uVar9);
              goto LAB_1020473e4;
            }
            uVar12 = uVar11;
            func_0x000107c5faec();
            uVar13 = uVar12 & 0xffffffffffff;
            if ((uVar16 & 0x2000000000000000) != 0) {
              uVar13 = uVar16 >> 0x38 & 0xf;
            }
            param_2 = uVar16;
            if ((uVar13 == 0) ||
               (((uVar12 == uVar1 && (uVar16 == uVar2)) ||
                (uStack_b8 = uVar12, func_0x000107c605b8(uVar12,uVar16,uVar1,uVar2,0),
                (uStack_b8 & 1) != 0)))) {
              func_0x000107c6142c(uVar16);
              func_0x000107c61170(uVar9);
              uVar13 = uVar8;
              uVar8 = uVar11;
              uVar9 = uVar10;
              goto LAB_1020473d8;
            }
            (*pcVar3)();
            if (param_2 == 0) {
              uStack_b8 = 0;
            }
            else {
              func_0x000107c5fadc();
              func_0x000107c6142c(param_2);
            }
            uVar13 = uVar11;
            uVar17 = uStack_b8;
            func_0x000108f4d71c();
            func_0x000107c61180();
            func_0x000107c61170(uVar11);
            func_0x000107c61170(uStack_b8);
            if (uVar13 == 0) {
              func_0x000107c61170(uVar10);
              func_0x000107c61170(uVar9);
            }
            else {
              uVar12 = uVar13;
              func_0x000107c5faec(uVar13);
              func_0x000107c6142c(uVar16);
              func_0x000107c61170(uVar13);
              func_0x000107c61170(uVar10);
              func_0x000107c61170(uVar9);
              uVar16 = uVar17;
            }
            param_2 = uVar16;
            func_0x000107c5fadc(uVar12);
            func_0x000107c6142c(uVar16);
            func_0x000107c3d798(puVar6);
            func_0x000107c61170(uVar12);
            puVar14 = puVar6;
            func_0x000107c61174();
            puVar15 = puVar14;
            func_0x000107c40808();
            func_0x000107c61170(puVar14);
            func_0x000107c61170(uVar8);
            if ((long)puVar15 < lVar5) goto LAB_1020473f4;
LAB_102047518:
            func_0x000107c6142c(uVar19);
            break;
          }
LAB_1020473e4:
          func_0x000107c61170(uVar13);
          func_0x000107c61170(uVar8);
LAB_1020473f4:
          if (uVar18 + 1 == uVar7) goto LAB_102047518;
          lVar20 = lVar21 + 1;
          uVar18 = lVar21 - 3;
          if ((uVar19 & 0xc000000000000001) != 0) goto LAB_1020472ec;
LAB_1020472fc:
          if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020475c4);
            (*pcVar3)();
          }
          uVar8 = *(ulong *)(uVar19 + lVar20 * 8);
          func_0x000107c61174();
          uVar16 = param_2;
          lVar21 = lVar20;
        } while( true );
      }
      puVar14 = puVar6;
      func_0x000107c3e15c();
      func_0x000107c61180();
      puVar15 = puVar14;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar14);
      puVar14 = puVar15;
      func_0x000101158fcc();
      func_0x000107c6142c(puVar15);
      if (puVar14 != (undefined *)0x0) {
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(puVar6);
        return puVar14;
      }
      func_0x000107c61170(puVar6);
    }
    func_0x000107c615e8(lVar4);
  }
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 1020475e0; end: 102047663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020475e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(unaff_x20 + _DAT_112e52d10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      func_0x000103f1a040();
      puVar3 = puVar1;
      func_0x000107c3ebc4(puVar1,param_2,*puVar2);
      if (((int)puVar3 != 0) && (FUN_102047664(), ((ulong)puVar3 & 1) != 0)) {
        func_0x000102047834(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 102047664; end: 102047ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102047664(double param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffff90 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  puVar3 = *(undefined8 **)(unaff_x20 + _DAT_112e52d10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x000103f1a3f0();
    uVar5 = *puVar4;
    func_0x000107c61174(uVar5);
    puVar4 = puVar3;
    func_0x000107c497f8();
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(puVar3);
    uVar7 = (ulong)puVar4 & ((long)puVar4 >> 0x3f ^ 0xffffffffffffffffU);
    uVar1 = uVar7 * 0x3c;
    if (SUB168(SEXT816((long)uVar7) * SEXT816(0x3c),8) != (long)uVar1 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102047834);
      (*pcVar8)();
    }
    if (uVar1 != 0) {
      FUN_10204808c(puVar9);
      puVar6 = puVar9;
      (**(code **)(lVar12 + 0x30))(puVar9,1,lVar2);
      if ((int)puVar6 != 1) {
        (**(code **)(lVar12 + 0x20))(lVar11,puVar9,lVar2);
        func_0x000107c5eea0(lVar10);
        func_0x000107c5ee68(lVar11);
        pcVar8 = *(code **)(lVar12 + 8);
        (*pcVar8)(lVar10,lVar2);
        (*pcVar8)(lVar11,lVar2);
        return (double)uVar1 <= param_1;
      }
      func_0x0001000d1dcc(puVar9);
    }
  }
  return true;
}



/* Entry: 102047ad4; end: 102048013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102047ad4(double param_1,undefined *param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    return;
  }
  *(undefined1 *)(param_4 + _DAT_112e52d58) = 0;
  func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(param_5);
  (**(code **)(lVar10 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  lVar2 = _DAT_112e52d38;
  param_1 = param_1 * 1000.0;
  if (param_2 == (undefined *)0x0) {
    uVar8 = *(undefined8 *)(param_4 + _DAT_112e52d38);
    uVar3 = 0x6572756c696166;
    func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047ea8);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047eac);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047eb0);
      (*pcVar1)();
    }
    func_0x000107c92d08(uVar8,uVar3,(long)param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c92e7c(*(undefined8 *)(param_4 + lVar2),0,1);
    if (param_3 == (undefined *)0x0) {
      puVar9 = (undefined *)0x800000010f05d4f0;
      param_2 = (undefined *)0xd000000000000010;
    }
    else {
      func_0x000107c5ed2c();
      puVar7 = param_3;
      func_0x000107c3fcb0();
      param_2 = PTR___sSiN_11034deb0;
      puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puStack_a8 = puVar7;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c61170(param_3);
    }
    uVar3 = *(undefined8 *)(param_4 + lVar2);
    func_0x000107c5fadc(param_2,puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000107c92f94(uVar3,param_2,1);
  }
  else {
    uVar8 = *(undefined8 *)(param_4 + _DAT_112e52d38);
    func_0x000107c61174(param_2);
    uVar3 = 0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047e9c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047ea0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047ea4);
      (*pcVar1)();
    }
    func_0x000107c92d08(uVar8,uVar3,(long)param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c92e7c(*(undefined8 *)(param_4 + lVar2),1,1);
    uVar4 = *(ulong *)(param_4 + _DAT_112e52cf8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c50648();
      if (((uVar5 & 1) == 0) ||
         (uVar5 = uVar4,
         func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                             PTR_s_handlePrefetchedStoriesBatchResp_1125d2198), (uVar5 & 1) == 0)) {
        func_0x000107c61170(param_4);
        func_0x000107c615e8(uVar4);
      }
      else {
        puVar9 = &UNK_1104c0c58;
        func_0x000107c613fc(&UNK_1104c0c58,0x18,7);
        func_0x000107c61614(puVar9 + 0x10,param_4);
        pcStack_88 = FUN_102048388;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f3aa0;
        puStack_90 = &UNK_1104c0ce8;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar6);
        puVar7 = puStack_80;
        func_0x000107c615f0(uVar4);
        func_0x000107c61580(puVar9,2);
        func_0x000107c61574(puVar7);
        func_0x000107c44638(uVar4);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61578(puVar9,2);
        func_0x000107c61170(param_4);
        func_0x000107c615ec(uVar4,2);
      }
      goto LAB_102047e70;
    }
  }
  func_0x000107c61170(param_4);
LAB_102047e70:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102048014; end: 10204808b;  */

/* WARNING: Possible PIC construction at 0x000102048070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102048074) */

void FUN_102048014(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10204808c; end: 102048193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204808c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e52d08);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000041;
    func_0x000107c5fadc(0xd000000000000041,0x800000010f05d510);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar5 = lVar3;
      func_0x000107c6148c(lVar3,puVar4);
      if (lVar5 != 0) {
        func_0x000107c4223c();
        func_0x000107c5ee88(param_1);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar3);
        uVar2 = 0;
        goto LAB_102048164;
      }
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar3);
    }
  }
  uVar2 = 1;
LAB_102048164:
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000102048190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,uVar2,1,lVar1);
  return;
}



/* Entry: 102048194; end: 1020481f3; -[SCSpotlightBatchUserFeedCardRequester init] */

void FUN_102048194(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightBatchUserNetworkRequester.SCSpotlightBatchUserFeedCardRequester",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020481c0);
  (*pcVar1)();
}



/* Entry: 1020481f4; end: 1020482f3; -[SCSpotlightBatchUserFeedCardRequester .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102048284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102048288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020481f4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e52ce8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e52cf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e52cf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e52d00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e52d08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e52d10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e52d18 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e52d20));
  return;
}



/* Entry: 1020482f4; end: 102048313;  */

void FUN_1020482f4(void)

{
  func_0x000107c61168(&PTR_PTR_112819c90);
  return;
}



/* Entry: 102048314; end: 102048337;  */

void FUN_102048314(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_102047200();
    FUN_1020475e0();
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 102048338; end: 102048387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102048338(double param_1,undefined *param_2,undefined *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = 0;
  func_0x000107c5eea4();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 == 0) {
    return;
  }
  *(undefined1 *)(lVar7 + _DAT_112e52d58) = 0;
  func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)));
  (**(code **)(lVar11 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  lVar2 = _DAT_112e52d38;
  param_1 = param_1 * 1000.0;
  if (param_2 == (undefined *)0x0) {
    uVar9 = *(undefined8 *)(lVar7 + _DAT_112e52d38);
    uVar3 = 0x6572756c696166;
    func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047ea8);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047eac);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047eb0);
      (*pcVar1)();
    }
    func_0x000107c92d08(uVar9,uVar3,(long)param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c92e7c(*(undefined8 *)(lVar7 + lVar2),0,1);
    if (param_3 == (undefined *)0x0) {
      puVar10 = (undefined *)0x800000010f05d4f0;
      param_2 = (undefined *)0xd000000000000010;
    }
    else {
      func_0x000107c5ed2c();
      puVar6 = param_3;
      func_0x000107c3fcb0();
      param_2 = PTR___sSiN_11034deb0;
      puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puStack_a8 = puVar6;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c61170(param_3);
    }
    uVar3 = *(undefined8 *)(lVar7 + lVar2);
    func_0x000107c5fadc(param_2,puVar10);
    func_0x000107c6142c(puVar10);
    func_0x000107c92f94(uVar3,param_2,1);
  }
  else {
    uVar9 = *(undefined8 *)(lVar7 + _DAT_112e52d38);
    func_0x000107c61174(param_2);
    uVar3 = 0x73736563637573;
    func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047e9c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047ea0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102047ea4);
      (*pcVar1)();
    }
    func_0x000107c92d08(uVar9,uVar3,(long)param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c92e7c(*(undefined8 *)(lVar7 + lVar2),1,1);
    uVar8 = *(ulong *)(lVar7 + _DAT_112e52cf8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar8 != 0) {
      uVar4 = uVar8;
      func_0x000107c50648();
      if (((uVar4 & 1) == 0) ||
         (uVar4 = uVar8,
         func_0x000107c61150(uVar8,PTR_s_respondsToSelector__11262c7e0,
                             PTR_s_handlePrefetchedStoriesBatchResp_1125d2198), (uVar4 & 1) == 0)) {
        func_0x000107c61170(lVar7);
        func_0x000107c615e8(uVar8);
      }
      else {
        puVar10 = &UNK_1104c0c58;
        func_0x000107c613fc(&UNK_1104c0c58,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,lVar7);
        pcStack_88 = FUN_102048388;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f3aa0;
        puStack_90 = &UNK_1104c0ce8;
        ppuVar5 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar5);
        puVar6 = puStack_80;
        func_0x000107c615f0(uVar8);
        func_0x000107c61580(puVar10,2);
        func_0x000107c61574(puVar6);
        func_0x000107c44638(uVar8);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61578(puVar10,2);
        func_0x000107c61170(lVar7);
        func_0x000107c615ec(uVar8,2);
      }
      goto LAB_102047e70;
    }
  }
  func_0x000107c61170(lVar7);
LAB_102047e70:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102048388; end: 10204838f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102048388(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((param_2 & 1) == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c5eea0(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      lVar3 = *(long *)(lVar2 + _DAT_112e52d08);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5ee8c();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c466c0(param_1);
        lVar5 = -0x2fffffffffffffbf;
        func_0x000107c5fadc(0xd000000000000041,0x800000010f05d510);
        func_0x000107c56bcc(lVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar4);
        lVar2 = lVar5;
      }
      func_0x000107c61170(lVar2);
      (**(code **)(lVar6 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    }
  }
  return;
}



/* Entry: 102048390; end: 1020483d3;  */

void FUN_102048390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d61f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b14e0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d61f70 = puVar1;
  return;
}



/* Entry: 1020483d4; end: 102048403;  */

undefined1  [16] FUN_1020483d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102048404; end: 102048407; -[SCSpotlightBatchUserFeedCardRequester onUserLoggedIn] */

void FUN_102048404(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10204709c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102048408; end: 10204840b; -[SCSpotlightBatchUserFeedCardRequester onUserRegistered] */

void FUN_102048408(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10204709c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10204840c; end: 10204840f; -[SCSpotlightBatchUserFeedCardRequester onAppWillEnterForeground] */

void FUN_10204840c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10204709c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102048410; end: 1020484e3;  */

void FUN_102048410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  return;
}



/* Entry: 1020484e4; end: 102048b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020484e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar10 = &puStack_90;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + _DAT_11302e640);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar7 = uVar11;
  func_0x000107c5faec();
  func_0x000107c61170(uVar11);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar9 = &UNK_1104c0d98;
  func_0x000107c613fc(&UNK_1104c0d98,0x50,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar1;
  *(undefined8 *)(puVar9 + 0x18) = uVar4;
  *(undefined8 *)(puVar9 + 0x20) = uVar3;
  *(undefined8 *)(puVar9 + 0x28) = uVar2;
  *(undefined8 *)(puVar9 + 0x30) = uVar5;
  *(undefined8 *)(puVar9 + 0x38) = uVar6;
  *(undefined8 *)(puVar9 + 0x40) = uVar7;
  *(undefined8 *)(puVar9 + 0x48) = param_2;
  pcStack_70 = FUN_102048b98;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102048e34;
  puStack_78 = &UNK_1104c0db0;
  puStack_68 = puVar9;
  func_0x000107c60bc4(&puStack_90);
  puVar9 = puStack_68;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  FUN_10204918c(0);
  func_0x000107c610f8();
  func_0x0001020490a4(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  return puVar8;
}



/* Entry: 102048b98; end: 102048bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102048b98(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long *plVar15;
  long extraout_x8;
  long lVar16;
  long *plVar17;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  plVar7 = *(long **)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  lStack_a8 = *(long *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  lVar6 = 0;
  func_0x000107c5f804();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  func_0x000107c43a80();
  func_0x000107c61180();
  lVar8 = *(long *)(lVar8 + _DAT_112ff11d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar16 = *(long *)(lVar2 + _DAT_112fb69c8);
    if (lVar16 != 0) {
      plVar17 = *(long **)(lVar3 + _DAT_113093a98);
      uStack_b8 = uVar9;
      uStack_b0 = uVar4;
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (plVar17 == (long *)0x0) {
        (**(code **)(lVar18 + 0x68))
                  (auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                   *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar6)
        ;
        plVar10 = (long *)PTR_PTR_1126ae790;
        func_0x000107c610f8();
        uVar9 = 0xd000000000000033;
        func_0x000107c5fadc(0xd000000000000033,0x800000010f05d5c0);
        func_0x000107c5f800();
        func_0x000107c470d0();
        func_0x000107c61170(uVar9);
        (**(code **)(lVar18 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6);
      }
      else {
        uVar9 = 0xd000000000000033;
        func_0x000107c5fadc(0xd000000000000033,0x800000010f05d5c0);
        plVar10 = plVar17;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c615e8(plVar17);
        func_0x000107c61170(uVar9);
      }
      plVar17 = plVar10;
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (plVar17 == (long *)0x0) {
        func_0x000102048df0();
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c615e8(plVar10);
        func_0x000107c61170(plVar7);
        func_0x000107c61170(lVar16);
        func_0x000107c615e8(lVar8);
        return plVar17;
      }
      puVar11 = PTR_PTR_1126ae720;
      plStack_c8 = plVar17;
      func_0x000107c61168();
      puVar12 = &UNK_1104c0de8;
      func_0x000107c613fc(&UNK_1104c0de8,0x18,7);
      *(long *)(puVar12 + 0x10) = lVar8;
      uStack_70 = 0x102048e10;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x102048e38;
      puStack_78 = &UNK_1104c0e00;
      ppuVar13 = &puStack_90;
      lStack_c0 = lVar8;
      puStack_68 = puVar12;
      func_0x000107c60bc4(ppuVar13);
      puVar12 = puStack_68;
      plStack_d0 = plVar10;
      func_0x000107c615f0(lVar8);
      func_0x000107c61574(puVar12);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar13);
      uVar19 = *(undefined8 *)(lVar2 + _DAT_112fb69d0);
      lVar8 = 0;
      FUN_1020482f4();
      lStack_d8 = lVar8;
      func_0x000107c610f8();
      lVar2 = _DAT_112e52d38;
      puVar12 = PTR_PTR_1126d7120;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar8 + lVar2) = puVar12;
      lVar2 = _DAT_112e52d40;
      uVar14 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      uVar4 = uStack_b0;
      uVar9 = uStack_b8;
      plVar15 = plStack_c8;
      plVar10 = plStack_d0;
      *(undefined8 *)(lVar8 + lVar2) = uVar14;
      *(undefined **)(lVar8 + _DAT_112e52d48) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined1 *)(lVar8 + _DAT_112e52d58) = 0;
      *(undefined8 *)(lVar8 + _DAT_112e52d50) = 0;
      *(undefined **)(lVar8 + _DAT_112e52ce8) = puVar11;
      *(long **)(lVar8 + _DAT_112e52cf0) = plVar7;
      *(long *)(lVar8 + _DAT_112e52cf8) = lVar16;
      *(undefined8 *)(lVar8 + _DAT_112e52d00) = uVar19;
      *(undefined8 *)(lVar8 + _DAT_112e52d08) = uStack_b8;
      *(undefined8 *)(lVar8 + _DAT_112e52d10) = uStack_b0;
      plVar17 = (long *)(lVar8 + _DAT_112e52d18);
      *plVar17 = lStack_a8;
      plVar17[1] = lVar5;
      *(long **)(lVar8 + _DAT_112e52d20) = plStack_d0;
      *(long **)(lVar8 + _DAT_112e52d28) = plStack_c8;
      puVar1 = (undefined8 *)(lVar8 + _DAT_112e52d30);
      *puVar1 = FUN_102046844;
      puVar1[1] = 0;
      puVar12 = PTR_s_init_1125d9248;
      lStack_98 = lStack_d8;
      lStack_a0 = lVar8;
      func_0x000107c61174();
      lStack_a8 = lVar16;
      func_0x000107c61174(puVar11);
      func_0x000107c61174(plVar7);
      func_0x000107c61174(uVar19);
      func_0x000107c61174(uVar9);
      func_0x000107c61174(uVar4);
      func_0x000107c61434(lVar5);
      func_0x000107c615f0(plVar10);
      func_0x000107c61174(plVar15);
      plVar17 = &lStack_a0;
      func_0x000107c61154(plVar17,puVar12);
      func_0x000107c61180();
      FUN_102046b38();
      func_0x000102046c5c();
      func_0x000107c615e8(lStack_c0);
      func_0x000107c61170(plVar17);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(plVar7);
      func_0x000107c61170(lStack_a8);
      func_0x000107c615e8(plVar10);
      plVar7 = plVar15;
      goto LAB_102048b3c;
    }
    func_0x000107c615e8();
  }
  plVar17 = (long *)0x0;
  func_0x000102048df0(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_102048b3c:
  func_0x000107c61170(plVar7);
  return plVar17;
}



/* Entry: 102048bac; end: 102048be3;  */

void FUN_102048bac(long param_1)

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



/* Entry: 102048be4; end: 102048bff;  */

void FUN_102048be4(long param_1,long param_2)

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



/* Entry: 102048c00; end: 102048d37;  */

/* WARNING: Possible PIC construction at 0x000102048c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102048c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102048c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102048c20) */
/* WARNING: Removing unreachable block (ram,0x000102048c10) */
/* WARNING: Removing unreachable block (ram,0x000102048c30) */

void FUN_102048c00(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102048d38; end: 102048d5b;  */

void FUN_102048d38(undefined8 *param_1,undefined8 param_2)

{
  FUN_1020484e4();
  *param_1 = param_2;
  return;
}



/* Entry: 102048d5c; end: 102048d5f; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onUserLoggedIn] */

void FUN_102048d5c(void)

{
  return;
}



/* Entry: 102048d60; end: 102048d63; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onUserRegistered] */

void FUN_102048d60(void)

{
  return;
}



/* Entry: 102048d64; end: 102048d67; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_102048d64(void)

{
  return;
}



/* Entry: 102048d68; end: 102048d6b; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onAppDidFinishLaunching] */

void FUN_102048d68(void)

{
  return;
}



/* Entry: 102048d6c; end: 102048d6f; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onAppWillEnterForeground] */

void FUN_102048d6c(void)

{
  return;
}



/* Entry: 102048d70; end: 102048d73; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onAppDidBecomeActive] */

void FUN_102048d70(void)

{
  return;
}



/* Entry: 102048d74; end: 102048d77; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onAppWillResignActive] */

void FUN_102048d74(void)

{
  return;
}



/* Entry: 102048d78; end: 102048d7b; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onAppDidEnterBackground] */

void FUN_102048d78(void)

{
  return;
}



/* Entry: 102048d7c; end: 102048d7f; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver onAppWillTerminate] */

void FUN_102048d7c(void)

{
  return;
}



/* Entry: 102048d80; end: 102048dbb; -[_TtC36SCSpotlightBatchUserNetworkRequesterP33_7BF00D218ECF1B39BBC57BB993E4A22E33NoOpAppUserLifecycleEventObserver init] */

void FUN_102048d80(undefined8 param_1)

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



/* Entry: 102048dbc; end: 102048e2b;  */

void FUN_102048dbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102048e2c; end: 102048e3b;  */

void FUN_102048e2c(long param_1,long param_2)

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



/* Entry: 102048e3c; end: 102048e8f;  */

undefined8 FUN_102048e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102048e90(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102048e90; end: 102048fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102048e90(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = *(long *)(param_2 + _DAT_112e52f58);
  *(long *)(unaff_x20 + 0x10) = lVar1;
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    lVar4 = 0;
  }
  else {
    lVar4 = param_3;
    func_0x000107c3dec0();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      uVar3 = 0xd00000000000002a;
      func_0x000107c5fadc(0xd00000000000002a,0x800000010f05d600);
      lVar4 = lVar2;
      func_0x000107c40938();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
      if (lVar4 != 0) {
        func_0x000107c615f0(lVar4);
        func_0x000107c3e7d8();
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_1);
        goto LAB_102048fc8;
      }
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(lVar1);
    lVar4 = 0;
    param_3 = param_2;
  }
LAB_102048fc8:
  func_0x000107c61170(param_3);
  *(long *)(unaff_x20 + 0x18) = lVar4;
  return;
}



/* Entry: 102048ff0; end: 10204901b;  */

void FUN_102048ff0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10204901c; end: 102049027;  */

void FUN_10204901c(void)

{
  return;
}



/* Entry: 102049028; end: 102049047;  */

void FUN_102049028(void)

{
  func_0x000107c61168(&PTR_PTR_112e52ef0);
  return;
}



/* Entry: 102049048; end: 102049057; -[_TtC35SCSpotlightBatchUserNetworkServices35SCSpotlightBatchUserNetworkServices spotlightBatchUserNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102049048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e52f58));
  return;
}



/* Entry: 102049058; end: 1020490ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102049058(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e52f58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020490f0; end: 102049147; -[_TtC35SCSpotlightBatchUserNetworkServices35SCSpotlightBatchUserNetworkServices initWithSpotlightBatchUserNetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020490f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e52f58) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102049148; end: 10204917b;  */

void FUN_102049148(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10204917c; end: 10204918b; -[_TtC35SCSpotlightBatchUserNetworkServices35SCSpotlightBatchUserNetworkServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204917c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e52f58));
  return;
}



/* Entry: 10204918c; end: 1020491ab;  */

void FUN_10204918c(void)

{
  func_0x000107c61168(&PTR_PTR_112819e70);
  return;
}



/* Entry: 1020491ac; end: 1020491b3;  */

undefined8 FUN_1020491ac(void)

{
  return 0x1b;
}



/* Entry: 1020491b4; end: 102049d1b;  */

void FUN_1020491b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104c0fc8;
  func_0x000107c613fc(&UNK_1104c0fc8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(0x1020492a0,puVar1);
  return;
}



/* Entry: 102049d1c; end: 102049d1f;  */

void FUN_102049d1c(void)

{
  return;
}



/* Entry: 102049d20; end: 102049efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102049d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _DAT_112e52fa0) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112e52fa0) = 1;
      lVar1 = param_1 + _DAT_112e52f90;
      func_0x000107c61618();
      if (lVar1 != 0) {
        uVar2 = 0;
        func_0x00010451c820(0);
        func_0x0001045198cc(param_2,param_3,0,0,5,uVar2);
        func_0x0001045162e4(0);
        func_0x000107c610f8();
        uVar2 = 0xd;
        func_0x000104515e00(0xd,4,0x1e,0x19);
        puVar3 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        puVar4 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        func_0x000107c4a8a4();
        func_0x000107c61180();
        func_0x000107c61174(puVar3);
        lVar5 = param_1;
        func_0x000104517200(param_1,uVar2,puVar4,puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
        lVar7 = *(long *)(param_1 + _DAT_112e52fe0);
        lVar6 = lVar7;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar7);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        func_0x000107c42c1c(lVar7);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(param_2);
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102049efc; end: 102049f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102049efc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + _DAT_112e52fa0) & 1) == 0) {
      *(undefined1 *)(lVar1 + _DAT_112e52fa0) = 1;
      lVar2 = lVar1 + _DAT_112e52f90;
      func_0x000107c61618();
      if (lVar2 != 0) {
        uVar3 = 0;
        func_0x00010451c820(0);
        func_0x0001045198cc(uVar4,uVar9,0,0,5,uVar3);
        func_0x0001045162e4(0);
        func_0x000107c610f8();
        uVar9 = 0xd;
        func_0x000104515e00(0xd,4,0x1e,0x19);
        puVar5 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        puVar6 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        func_0x000107c4a8a4();
        func_0x000107c61180();
        func_0x000107c61174(puVar5);
        lVar7 = lVar1;
        func_0x000104517200(lVar1,uVar9,puVar6,puVar5);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        lVar10 = *(long *)(lVar1 + _DAT_112e52fe0);
        lVar8 = lVar10;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar8 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar10);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        func_0x000107c42c1c(lVar10);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102049f08; end: 10204a043;  */

/* WARNING: Possible PIC construction at 0x000102049fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102049ff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102049f08(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x20;
  
  plVar1 = *(long **)(unaff_x20 + _DAT_112e52fa8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar2 = plVar1;
  func_0x000107c5deec();
  func_0x000107c61180();
  plVar3 = plVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(plVar2);
  if (plVar3 != (long *)0x0) {
    func_0x0001000285a8(0x112e53058,&UNK_10da53920);
    func_0x0001000b637c();
    puVar4 = &UNK_1104c0ff0;
    func_0x000107c613fc(&UNK_1104c0ff0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    (**(code **)(*plVar3 + 0x60))(FUN_10204b004,puVar4);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(plVar1);
  return;
}



/* Entry: 10204a044; end: 10204a473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204a044(double param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar7;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  long alStack_140 [2];
  long lStack_130;
  long lStack_128;
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [40];
  long alStack_a0 [6];
  
  lVar13 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar10 = (long)&lStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar13 - extraout_x12_00;
  func_0x000107c4b6ac(*(undefined8 *)(unaff_x20 + _DAT_112e52fd0));
  if (param_1 <= 0.0) {
    return;
  }
  dVar15 = param_1;
  func_0x000107c5eea0(lVar8);
  lVar12 = *(long *)(unaff_x20 + _DAT_112e52fd8);
  if (lVar12 == 0) {
    (**(code **)(lVar14 + 0x38))(lVar9,1,1,lVar3);
  }
  else {
    uVar4 = 0xd000000000000022;
    lStack_130 = lVar13;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f05d6e0);
    lVar13 = lVar12;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (lVar13 == 0) {
      pcVar7 = *(code **)(lVar14 + 0x38);
      uVar6 = 1;
    }
    else {
      uVar4 = 0x112d373e8;
      alStack_a0[0] = lVar13;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      lVar13 = lVar9;
      func_0x000107c6147c(lVar9,alStack_a0,uVar4,lVar3,6);
      pcVar7 = *(code **)(lVar14 + 0x38);
      uVar6 = (uint)lVar13 ^ 1;
    }
    lVar13 = lVar9;
    (*pcVar7)(lVar9,uVar6,1,lVar3);
    func_0x000107c5ee70();
    uVar4 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f05d6e0);
    func_0x000107c56bcc(lVar12);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(uVar4);
    lVar13 = lStack_130;
  }
  func_0x0001009f0578(lVar9,lVar10);
  lVar12 = lVar10;
  (**(code **)(lVar14 + 0x30))(lVar10,1,lVar3);
  if ((int)lVar12 == 1) {
    FUN_10204b41c(lVar10,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar14 + 0x20))(lVar13,lVar10,lVar3);
    func_0x000107c5ee68(lVar13);
    lVar2 = _DAT_112e52fc8;
    lVar12 = _DAT_112e52fc0;
    lVar10 = _DAT_112e52fb8;
    if (param_1 < dVar15) {
      plVar1 = (long *)(unaff_x20 + _DAT_112e52f88);
      lVar11 = plVar1[1];
      lStack_128 = plVar1[1];
      lStack_130 = *plVar1;
      FUN_10204b32c(unaff_x20 + _DAT_112e52fb0,alStack_a0);
      FUN_10204b32c(unaff_x20 + lVar12,auStack_c8);
      FUN_10204b32c(unaff_x20 + lVar10,auStack_f0);
      FUN_10204b32c(unaff_x20 + lVar2,auStack_118);
      puVar5 = &UNK_1104c1168;
      func_0x000107c613fc(&UNK_1104c1168,200,7);
      func_0x000100cded74(alStack_a0,puVar5 + 0x10);
      func_0x000100cded74(auStack_c8,puVar5 + 0x38);
      func_0x000100cded74(auStack_f0,puVar5 + 0x60);
      *(long *)(puVar5 + 0x88) = unaff_x20;
      func_0x000100cded74(auStack_118,puVar5 + 0x90);
      *(long *)(puVar5 + 0xc0) = lStack_128;
      *(long *)(puVar5 + 0xb8) = lStack_130;
      func_0x000107c61580(lVar11,2);
      func_0x000107c61174();
      *(undefined **)(lVar8 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar4 = 9;
      func_0x0001001ca524(9,3,0x50,4,0,0,&UNK_10da53938,puVar5);
      func_0x000107c61574(lVar11);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar4);
      pcVar7 = *(code **)(lVar14 + 8);
      (*pcVar7)(lVar13,lVar3);
      FUN_10204b41c(lVar9,0x112d373d8,&UNK_10d9014c0);
      goto LAB_10204a444;
    }
    (**(code **)(lVar14 + 8))(lVar13,lVar3);
  }
  FUN_10204b41c(lVar9,0x112d373d8,&UNK_10d9014c0);
  pcVar7 = *(code **)(lVar14 + 8);
LAB_10204a444:
  (*pcVar7)(lVar8,lVar3);
  return;
}



/* Entry: 10204a474; end: 10204a47f;  */

void FUN_10204a474(void)

{
  return;
}



/* Entry: 10204a480; end: 10204a577;  */

void FUN_10204a480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  lVar2 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = 0;
  func_0x000103a814dc();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  lVar2 = 0;
  func_0x000103a82768();
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10204a578,0,0);
  return;
}



/* Entry: 10204a578; end: 10204a62b;  */

void FUN_10204a578(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 *puVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  puVar6 = *(uint3 **)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(puVar6 + 6);
  lVar3 = *(long *)(puVar6 + 8);
  func_0x0001000a8868(puVar6,uVar2);
  func_0x000103a83ea8();
  *(uint3 **)(unaff_x22 + 0x90) = puVar6;
  uVar9 = *(undefined8 *)(puVar6 + 2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  uVar4 = *puVar6;
  uVar5 = puVar6[4];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10204a62c;
                    /* WARNING: Could not recover jumptable at 0x00010204a628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))((ulong)uVar4,uVar9,(char)uVar5,uVar2,lVar3);
  return;
}



/* Entry: 10204a62c; end: 10204a6d7;  */

void FUN_10204a62c(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x22;
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x98));
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
    uVar1 = *(undefined8 *)(lVar5 + 0x80);
    uVar2 = *(undefined8 *)(lVar5 + 0x60);
    uVar3 = *(undefined8 *)(lVar5 + 0x68);
    uVar6 = *(undefined8 *)(lVar5 + 0x48);
    func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x88));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010204a6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
  *(undefined1 *)(lVar5 + 0xb8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10204a6d8,0,0);
  return;
}



/* Entry: 10204a6d8; end: 10204a7b3;  */

void FUN_10204a6d8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010204a748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  lVar5 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  piVar8 = *(int **)(lVar5 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10204a7b4;
                    /* WARNING: Could not recover jumptable at 0x00010204a7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar7,*(undefined8 *)(unaff_x22 + 0x68),uVar2,lVar5);
  return;
}



/* Entry: 10204a7b4; end: 10204a813;  */

void FUN_10204a7b4(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10204a814;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_10204ac84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10204a814; end: 10204a9fb;  */

void FUN_10204a814(void)

{
  int iVar1;
  undefined8 uVar2;
  uint3 uVar3;
  uint3 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int *piVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  uint3 *puVar13;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar10 = *(long *)(unaff_x22 + 0x68);
  lVar5 = lVar10;
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x30))(lVar10,1,uVar7);
  if ((int)lVar5 == 1) {
    uVar7 = 0x112e085c8;
    puVar8 = &UNK_10d9dcfb0;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x00010204b45c(lVar10,uVar2,&SUB_103a82768);
    FUN_101c0052c(uVar2,uVar11);
    func_0x000107c614c4(uVar11,uVar7);
    if ((int)uVar11 != 0) {
      if (((int)uVar11 != 1) ||
         (lVar10 = *(long *)(**(long **)(unaff_x22 + 0x80) + 0x10), func_0x000107c6142c(),
         lVar10 != 0)) {
        puVar13 = *(uint3 **)(unaff_x22 + 0x90);
        lVar5 = *(long *)(unaff_x22 + 0x20);
        uVar7 = *(undefined8 *)(lVar5 + 0x18);
        lVar10 = *(long *)(lVar5 + 0x20);
        func_0x0001000a8868(lVar5,uVar7);
        uVar11 = *(undefined8 *)(puVar13 + 2);
        piVar9 = *(int **)(lVar10 + 8);
        iVar1 = *piVar9;
        plVar6 = (long *)(ulong)(uint)piVar9[1];
        uVar3 = *puVar13;
        uVar4 = puVar13[4];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xa8) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_10204a9fc;
                    /* WARNING: Could not recover jumptable at 0x00010204a94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar9))
                  (plVar6,*(undefined8 *)(unaff_x22 + 0x48),(ulong)uVar3,uVar11,(char)uVar4,uVar7,
                   lVar10);
        return;
      }
      func_0x00010204b4a0(*(undefined8 *)(unaff_x22 + 0x88),&SUB_103a82768);
      goto LAB_10204a998;
    }
    lVar10 = *(long *)(unaff_x22 + 0x80);
    func_0x00010204b4a0(*(undefined8 *)(unaff_x22 + 0x88),&SUB_103a82768);
    lVar5 = 0x112e08440;
    func_0x0001000285a8(0x112e08440,&UNK_10d9dcd40);
    func_0x000107c6142c(*(undefined8 *)(lVar10 + *(int *)(lVar5 + 0x30)));
    uVar7 = 0x112d373d8;
    puVar8 = &UNK_10d9014c0;
  }
  FUN_10204b41c(lVar10,uVar7,puVar8);
LAB_10204a998:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010204a9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10204a9fc; end: 10204aa5b;  */

void FUN_10204a9fc(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10204aa5c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_10204ad14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10204aa5c; end: 10204ab6f;  */

void FUN_10204aa5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = uVar3;
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x30))(uVar3,1,*(undefined8 *)(unaff_x22 + 0x50));
  if ((int)uVar2 == 1) {
    func_0x00010204b4a0(*(undefined8 *)(unaff_x22 + 0x88),&SUB_103a82768);
    func_0x00010204b41c(*(undefined8 *)(unaff_x22 + 0x48),0x112d5ed18,&UNK_10d925c50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010204ab00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x00010204b45c(uVar3,*(undefined8 *)(unaff_x22 + 0x60),&SUB_103a814dc);
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10204ab70,uVar3,uVar2);
  return;
}



/* Entry: 10204ab70; end: 10204abff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204ab70(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  *(undefined1 *)(lVar2 + _DAT_112e52fa0) = 0;
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  lVar2 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar3);
  (**(code **)(lVar2 + 0x28))(uVar1,uVar4,uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10204ac00,0,0);
  return;
}



/* Entry: 10204ac00; end: 10204ac83;  */

void FUN_10204ac00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x00010204b4a0(*(undefined8 *)(unaff_x22 + 0x88),&SUB_103a82768);
  func_0x00010204b4a0(uVar3,&SUB_103a814dc);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010204ac80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10204ac84; end: 10204ad13;  */

void FUN_10204ac84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x68),1,1,*(undefined8 *)(unaff_x22 + 0x70));
  FUN_10204b41c(*(undefined8 *)(unaff_x22 + 0x68),0x112e085c8,&UNK_10d9dcfb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010204ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10204ad14; end: 10204adbb;  */

void FUN_10204ad14(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x00010204b4a0(*(undefined8 *)(unaff_x22 + 0x88),&SUB_103a82768);
  (**(code **)(lVar2 + 0x38))(uVar4,1,1,uVar1);
  func_0x00010204b41c(*(undefined8 *)(unaff_x22 + 0x48),0x112d5ed18,&UNK_10d925c50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010204adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10204adbc; end: 10204adef;  */

void FUN_10204adbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10204adf0; end: 10204aecb; -[_TtC54ExternalMusicReminderNotificationServiceImplementation40ExternalMusicReminderNotificationManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010204ae5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010204ae60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204adf0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e52fa8));
  func_0x0001000834e4(param_1 + _DAT_112e52fb0);
  func_0x0001000834e4(param_1 + _DAT_112e52fb8);
  func_0x0001000834e4(param_1 + _DAT_112e52fc0);
  func_0x0001000834e4(param_1 + _DAT_112e52fc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e52fd0));
  return;
}



/* Entry: 10204aecc; end: 10204aed7;  */

undefined1  [16] FUN_10204aecc(void)

{
  return ZEXT816(0);
}



/* Entry: 10204aed8; end: 10204af97; -[_TtC54ExternalMusicReminderNotificationServiceImplementation40ExternalMusicReminderNotificationManager mapScopeDidEnd:] */

/* WARNING: Possible PIC construction at 0x00010204af40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010204af5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010204af80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010204af60) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x00010204af44) */
/* WARNING: Removing unreachable block (ram,0x00010204af84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204aed8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_1130831a0);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c41864(uVar1,param_2,0);
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10204af98; end: 10204afe3;  */

undefined ** FUN_10204af98(void)

{
  return &PTR_DAT_113066b20;
}



/* Entry: 10204afe4; end: 10204b003;  */

void FUN_10204afe4(void)

{
  func_0x000107c61168(&PTR_PTR_112819f30);
  return;
}



/* Entry: 10204b004; end: 10204b29f;  */

void FUN_10204b004(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar12 = *param_1;
  puVar4 = &UNK_1104c0ff0;
  func_0x000107c613fc(&UNK_1104c0ff0,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar5);
  func_0x000107c61614(puVar4 + 0x10,lVar5);
  func_0x000107c61170(lVar5);
  puVar6 = &UNK_1104c10a0;
  func_0x000107c613fc(&UNK_1104c10a0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10204b2a0;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x10204b2f0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_1104c10b8;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_80;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar2);
  pcStack_88 = FUN_10204a474;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100e2fcec;
  puStack_90 = &UNK_1104c10e0;
  ppuVar8 = &puStack_a8;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x10204a478;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104c1108;
  ppuVar9 = &puStack_a8;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x10204a47c;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_1104c1130;
  ppuVar10 = &puStack_a8;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_80);
  func_0x000107c4c7ac(uVar12);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar4);
  puVar4 = puVar6;
  func_0x000107c61544(puVar6,"",0x99,0x79,0x2f,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10204b294);
    (*pcVar3)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x99,0x7c,0x2b,1);
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10204b298);
    (*pcVar3)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x99,0x7d,0x24,1);
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10204b29c);
    (*pcVar3)();
  }
  uVar11 = 0;
  func_0x000107c61544(0,"",0x99,0x7e,0x25,1);
  if ((uVar11 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10204b2a0);
  (*pcVar3)();
}



/* Entry: 10204b2a0; end: 10204b30f;  */

void FUN_10204b2a0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10204a044();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10204b310; end: 10204b32b;  */

void FUN_10204b310(long param_1,long param_2)

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



/* Entry: 10204b32c; end: 10204b36f;  */

long FUN_10204b32c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10204b370; end: 10204b3df;  */

void FUN_10204b370(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x88);
  lVar3 = *(long *)(unaff_x20 + 0xb8);
  lVar1 = *(long *)(unaff_x20 + 0xc0);
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10204b3e0;
  plVar5[7] = lVar3;
  plVar5[8] = lVar1;
  plVar5[5] = lVar6;
  plVar5[6] = unaff_x20 + 0x90;
  plVar5[3] = unaff_x20 + 0x38;
  plVar5[4] = unaff_x20 + 0x60;
  plVar5[2] = unaff_x20 + 0x10;
  lVar3 = 0x112d5ed18;
  func_0x0001000285a8(0x112d5ed18,&UNK_10d925c50);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[9] = uVar2;
  lVar3 = 0;
  func_0x000103a814dc();
  plVar5[10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar2;
  lVar3 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xd] = uVar2;
  lVar3 = 0;
  func_0x000103a82768();
  plVar5[0xe] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0xf] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x10] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x11] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10204a578,0,0);
  return;
}



/* Entry: 10204b3e0; end: 10204b41b;  */

void FUN_10204b3e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010204b418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10204b41c; end: 10204b4db;  */

undefined8 FUN_10204b41c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10204b4dc; end: 10204b507;  */

void FUN_10204b4dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10204b508; end: 10204b523;  */

void FUN_10204b508(long param_1,long param_2)

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



/* Entry: 10204b524; end: 10204c0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10204b524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_10204cc54();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_15;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_16;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_17;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_18;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_19;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_20;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_21;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_22;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_23;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_24;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_25;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_26;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_27;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_28;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_29;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_30;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_31;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_32;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_33;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_34;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_35;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_36;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_37;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_38;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_39;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_40;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_41;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_42;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_43;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_44;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112e53060) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e53068) = param_45;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61170(param_33);
    func_0x000107c61170(param_34);
    func_0x000107c61170(param_35);
    func_0x000107c61170(param_36);
    func_0x000107c61170(param_37);
    func_0x000107c61170(param_38);
    func_0x000107c61170(param_39);
    func_0x000107c61170(param_40);
    func_0x000107c61170(param_41);
    func_0x000107c61170(param_42);
    func_0x000107c61170(param_43);
    func_0x000107c61170(param_44);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10204c0e8);
  (*pcVar2)();
}



/* Entry: 10204c0e8; end: 10204c147; -[_TtC27FriendsFeedScopeGraphBridge42FriendsFeedScopeGraphBridgeSaberEntryPoint init] */

void FUN_10204c0e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedScopeGraphBridge.FriendsFeedScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10204c114);
  (*pcVar1)();
}



/* Entry: 10204c148; end: 10204c17f; -[_TtC27FriendsFeedScopeGraphBridge42FriendsFeedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010204c164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010204c168) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204c148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e53060));
  return;
}



/* Entry: 10204c180; end: 10204c1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10204c180(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e53068),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e53060));
  return;
}



/* Entry: 10204c1a8; end: 10204c1c7;  */

void FUN_10204c1a8(void)

{
  func_0x000107c61168(&PTR_PTR_11281a050);
  return;
}



/* Entry: 10204c1c8; end: 10204c22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10204c1c8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e536a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10204c22c; end: 10204c233;  */

void FUN_10204c22c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10204c234; end: 10204c2d3;  */

void FUN_10204c234(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10204c2d4; end: 10204c2f3;  */

void FUN_10204c2d4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10204c2f4; end: 10204c357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10204c2f4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e536b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10204c358; end: 10204c35f;  */

void FUN_10204c358(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10204c360; end: 10204c3ff;  */

void FUN_10204c360(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10204c400; end: 10204c41f;  */

void FUN_10204c400(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10204c420; end: 10204c483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10204c420(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e536b8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}


