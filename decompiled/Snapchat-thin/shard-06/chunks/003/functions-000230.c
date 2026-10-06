/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047b1f14; end: 1047b1f8f; -[SCAdBrandSafetyPods init] */

void FUN_1047b1f14(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdBrandSafetyPodsWrapper.swift",
             0x2a,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b1f5c);
  (*pcVar1)();
}



/* Entry: 1047b1f90; end: 1047b1feb; -[SCAdBrandSafetyPods .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b1f90(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308ee80 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ee88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308ee90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308ee98));
  return;
}



/* Entry: 1047b1fec; end: 1047b260f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b1fec(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined1 auStack_170 [88];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  lVar5 = 0;
  func_0x000100b91d00();
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)&lStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_178 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = lVar5 - extraout_x12;
  uStack_188 = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar6 - extraout_x12_00;
  puStack_1a8 = *(undefined **)(param_2 + _DAT_11308ee80);
  uVar2 = ((undefined8 *)(param_2 + _DAT_11308ee80))[1];
  lVar5 = *(long *)(param_2 + _DAT_11308ee88);
  uStack_1b0 = uVar2;
  puStack_1a0 = param_1;
  lStack_198 = param_2;
  if (lVar5 == 0) {
    _swift_bridgeObjectRetain();
    uStack_1b8 = 0;
    uStack_190 = 0;
    puVar11 = (undefined *)0x0;
  }
  else {
    uStack_1b8 = *(undefined8 *)(lVar5 + _DAT_11308f090);
    uStack_190 = ((undefined8 *)(lVar5 + _DAT_11308f090))[1];
    uStack_180 = *(ulong *)(lVar5 + _DAT_11308f098);
    if (uStack_180 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uStack_180 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uStack_180 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uStack_180) {
        uVar6 = uStack_180;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar6 == 0) {
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uStack_190);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uStack_190);
      _objc_retain();
      lStack_1c0 = lVar5;
      func_0x0001046c7150(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1047b2608);
        (*pcVar4)();
      }
      uVar9 = 0;
      uVar14 = uStack_180 & 0xc000000000000001;
      uVar10 = uStack_180;
      puVar11 = puStack_c0;
      do {
        if (uVar14 == 0) {
          _objc_retain(*(undefined8 *)(uVar10 + uVar9 * 8 + 0x20));
        }
        else {
          func_0x000102d09448(uVar9,uVar10);
        }
        FUN_1047b6fb0(lVar12);
        uVar1 = *(ulong *)(puVar11 + 0x10);
        puStack_c0 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
          func_0x0001046c7150(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
          uVar10 = uStack_180;
        }
        puVar11 = puStack_c0;
        uVar9 = uVar9 + 1;
        *(ulong *)(puStack_c0 + 0x10) = uVar1 + 1;
        func_0x0001016855d8(lVar12,puStack_c0 +
                                   *(long *)(lVar8 + 0x48) * uVar1 +
                                   ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      } while (uVar6 != uVar9);
      _objc_release(lStack_1c0);
      param_2 = lStack_198;
    }
  }
  lVar5 = *(long *)(param_2 + _DAT_11308ee90);
  if (lVar5 == 0) {
    uStack_1c8 = 0;
    lStack_1c0 = 0;
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + _DAT_11308f090);
    uVar3 = ((undefined8 *)(lVar5 + _DAT_11308f090))[1];
    uVar6 = *(ulong *)(lVar5 + _DAT_11308f098);
    if (uVar6 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar9 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    uStack_1c8 = uVar3;
    lStack_1c0 = uVar2;
    if (uVar9 == 0) {
      _swift_bridgeObjectRetain(uVar3);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain();
      lStack_1d0 = lVar5;
      func_0x0001046c7150(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1047b260c);
        (*pcVar4)();
      }
      uVar10 = 0;
      uStack_180 = uVar6 & 0xc000000000000001;
      uVar14 = uStack_188;
      puVar13 = puStack_c0;
      do {
        if (uStack_180 == 0) {
          _objc_retain(*(undefined8 *)(uVar6 + uVar10 * 8 + 0x20));
        }
        else {
          func_0x000102d09448(uVar10);
        }
        FUN_1047b6fb0(uVar14);
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puStack_c0 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          func_0x0001046c7150(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
          uVar14 = uStack_188;
        }
        puVar13 = puStack_c0;
        uVar10 = uVar10 + 1;
        *(ulong *)(puStack_c0 + 0x10) = uVar1 + 1;
        func_0x0001016855d8(uVar14,puStack_c0 +
                                   *(long *)(lVar8 + 0x48) * uVar1 +
                                   ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      } while (uVar9 != uVar10);
      _objc_release(lStack_1d0);
      param_2 = lStack_198;
    }
  }
  lVar5 = *(long *)(param_2 + _DAT_11308ee98);
  if (lVar5 == 0) {
    _objc_release(param_2);
    lStack_d8 = 0;
    lStack_d0 = 0;
    puStack_c8 = (undefined *)0x0;
  }
  else {
    lStack_1d0 = *(long *)(lVar5 + _DAT_11308f090);
    lVar12 = ((long *)(lVar5 + _DAT_11308f090))[1];
    uVar6 = *(ulong *)(lVar5 + _DAT_11308f098);
    if (uVar6 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar9 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    lStack_1d8 = lVar12;
    if (uVar9 == 0) {
      _swift_bridgeObjectRetain();
      _objc_release(param_2);
      lStack_d8 = lStack_1d0;
      lStack_d0 = lStack_1d8;
      puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain();
      _objc_retain();
      lStack_1e0 = lVar5;
      func_0x0001046c7150(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1047b2610);
        (*pcVar4)();
      }
      uVar10 = 0;
      uStack_188 = uVar6 & 0xc000000000000001;
      puVar7 = puStack_c0;
      uStack_180 = uVar6;
      do {
        if (uStack_188 == 0) {
          _objc_retain(*(undefined8 *)(uStack_180 + uVar10 * 8 + 0x20));
        }
        else {
          func_0x000102d09448(uVar10);
        }
        lVar5 = lStack_178;
        FUN_1047b6fb0(lStack_178);
        uVar6 = *(ulong *)(puVar7 + 0x10);
        puStack_c0 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar6) {
          func_0x0001046c7150(1 < *(ulong *)(puVar7 + 0x18),uVar6 + 1,1);
        }
        puVar7 = puStack_c0;
        uVar10 = uVar10 + 1;
        *(ulong *)(puStack_c0 + 0x10) = uVar6 + 1;
        func_0x0001016855d8(lVar5,puStack_c0 +
                                  *(long *)(lVar8 + 0x48) * uVar6 +
                                  ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      } while (uVar9 != uVar10);
      _objc_release(lStack_198);
      _objc_release(lStack_1e0);
      lStack_d8 = lStack_1d0;
      lStack_d0 = lStack_1d8;
      puStack_c8 = puVar7;
    }
  }
  puStack_118 = puStack_1a8;
  uStack_110 = uStack_1b0;
  uStack_108 = uStack_1b8;
  uStack_100 = uStack_190;
  uStack_f0 = lStack_1c0;
  uStack_e8 = uStack_1c8;
  puStack_c0 = puStack_1a8;
  uStack_b8 = uStack_1b0;
  uStack_b0 = uStack_1b8;
  uStack_a8 = uStack_190;
  uStack_98 = lStack_1c0;
  uStack_90 = uStack_1c8;
  puStack_f8 = puVar11;
  puStack_e0 = puVar13;
  puStack_a0 = puVar11;
  puStack_88 = puVar13;
  lStack_80 = lStack_d8;
  lStack_78 = lStack_d0;
  puStack_70 = puStack_c8;
  func_0x0001046c2d6c(&puStack_118,auStack_170);
  func_0x0001046c2da0(&puStack_c0);
  puStack_1a0[5] = uStack_f0;
  puStack_1a0[4] = puStack_f8;
  puStack_1a0[7] = puStack_e0;
  puStack_1a0[6] = uStack_e8;
  puStack_1a0[9] = lStack_d0;
  puStack_1a0[8] = lStack_d8;
  puStack_1a0[10] = puStack_c8;
  puStack_1a0[1] = uStack_110;
  *puStack_1a0 = puStack_118;
  puStack_1a0[3] = uStack_100;
  puStack_1a0[2] = uStack_108;
  return;
}



/* Entry: 1047b2610; end: 1047b262f;  */

void FUN_1047b2610(void)

{
  _objc_opt_self(&PTR_PTR_1129d3518);
  return;
}



/* Entry: 1047b2630; end: 1047b263f; -[SCAdChatFeedInsertionConfig feedCellIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b2630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eec8);
}



/* Entry: 1047b2640; end: 1047b264f; -[SCAdChatFeedInsertionConfig minTimeSecondsToRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b2640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eed0);
}



/* Entry: 1047b2650; end: 1047b265f; -[SCAdChatFeedInsertionConfig minSessionsToRefresh] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b2650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eed8);
}



/* Entry: 1047b2660; end: 1047b266f; -[SCAdChatFeedInsertionConfig minSessionsToInsertFirst] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b2660(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eee0);
}



/* Entry: 1047b2670; end: 1047b267f; -[SCAdChatFeedInsertionConfig sponsoredSnapDisplayMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b2670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eee8);
}



/* Entry: 1047b2680; end: 1047b27c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b2680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308eec8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308eed0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308eed8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308eee0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308eee8) = param_5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b27c8; end: 1047b286b; -[SCAdChatFeedInsertionConfig initWithFeedCellIndex:minTimeSecondsToRefresh:minSessionsToRefresh:minSessionsToInsertFirst:sponsoredSnapDisplayMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b27c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11308eec8) = param_4;
  *(undefined8 *)(param_2 + _DAT_11308eed0) = param_1;
  *(undefined8 *)(param_2 + _DAT_11308eed8) = param_5;
  *(undefined8 *)(param_2 + _DAT_11308eee0) = param_6;
  *(undefined8 *)(param_2 + _DAT_11308eee8) = param_7;
  lStack_60 = param_2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b286c; end: 1047b28f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b286c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308eec8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308eed0) = param_1[1];
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11308eed8) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11308eee0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11308eee8) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b28f8; end: 1047b29bf; -[SCAdChatFeedInsertionConfig hash] */

void FUN_1047b28f8(void)

{
  func_0x0001047b2918();
  return;
}



/* Entry: 1047b29c0; end: 1047b2ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047b29c0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11308eec8);
      lVar4 = *(long *)(lStack_88 + _DAT_11308eec8);
      dVar10 = *(double *)(unaff_x20 + _DAT_11308eed0);
      dVar11 = *(double *)(lStack_88 + _DAT_11308eed0);
      lVar5 = *(long *)(unaff_x20 + _DAT_11308eed8);
      lVar6 = *(long *)(lStack_88 + _DAT_11308eed8);
      lVar7 = *(long *)(unaff_x20 + _DAT_11308eee0);
      lVar8 = *(long *)(lStack_88 + _DAT_11308eee0);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308eee8);
      uVar9 = *(undefined8 *)(lStack_88 + _DAT_11308eee8);
      _objc_release();
      return (int)uVar3 == (int)uVar9 &&
             (lVar7 == lVar8 && (dVar10 == dVar11 && (lVar2 == lVar4 && lVar5 == lVar6)));
    }
  }
  return false;
}



/* Entry: 1047b2ad4; end: 1047b2b53; -[SCAdChatFeedInsertionConfig isEqual:] */

uint FUN_1047b2ad4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047b29c0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047b2b54; end: 1047b2b57; -[SCAdChatFeedInsertionConfig copyWithZone:] */

void FUN_1047b2b54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b2b58; end: 1047b2ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b2b58(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0x4c45435f44454546;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c45435f44454546,0xef5845444e495f4c);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308eed0);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d320);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d340);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20d360);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d380);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047b2ce4; end: 1047b2d33; -[SCAdChatFeedInsertionConfig encodeWithCoder:] */

void FUN_1047b2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047b2b58(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b2d34; end: 1047b2d63;  */

void FUN_1047b2d34(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047b2d64(param_1);
  return;
}



/* Entry: 1047b2d64; end: 1047b2f1f;  */

undefined8 FUN_1047b2d64(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0x4c45435f44454546;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c45435f44454546,0xef5845444e495f4c);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d320);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d340);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20d360);
  func_0x00010bf66f40(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d380);
  uVar2 = param_2;
  func_0x00010bf66f40();
  _objc_release(uVar1);
  if (uVar2 < 2) {
    func_0x00010c012400(param_1);
    _objc_release(param_2);
  }
  else {
    _objc_release(param_2);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1047b2f20; end: 1047b2f47; -[SCAdChatFeedInsertionConfig initWithCoder:] */

void FUN_1047b2f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047b2d64();
  return;
}



/* Entry: 1047b2f48; end: 1047b2f63; -[SCAdChatFeedInsertionConfig description] */

void FUN_1047b2f48(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b2f64; end: 1047b2fdf; -[SCAdChatFeedInsertionConfig init] */

void FUN_1047b2f64(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdChatFeedInsertionConfigWrapper.swift",0x32,2,0x65,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b2fac);
  (*pcVar1)();
}



/* Entry: 1047b2fe0; end: 1047b2fe3; -[SCAdChatFeedInsertionConfig .cxx_destruct] */

void FUN_1047b2fe0(void)

{
  return;
}



/* Entry: 1047b2fe4; end: 1047b3003;  */

void FUN_1047b2fe4(void)

{
  _objc_opt_self(&PTR_PTR_1129d3600);
  return;
}



/* Entry: 1047b3004; end: 1047b3017; -[SCAdChatFeedProperties isAISponsoredSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b3004(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308ef18);
}



/* Entry: 1047b3018; end: 1047b30af; -[SCAdChatFeedProperties initWithIsAISponsoredSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3018(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_11308ef18) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b30b0; end: 1047b30f7; -[SCAdChatFeedProperties hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b30b0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11308ef18));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047b30f8; end: 1047b319b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1047b30f8(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar3 = &lStack_58;
    _swift_dynamicCast(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar4 = *(byte *)(unaff_x20 + _DAT_11308ef18);
      bVar1 = *(byte *)(lStack_58 + _DAT_11308ef18);
      _objc_release();
      bVar4 = bVar4 ^ bVar1 ^ 1;
      goto LAB_1047b3184;
    }
  }
  bVar4 = 0;
LAB_1047b3184:
  return bVar4 & 1;
}



/* Entry: 1047b319c; end: 1047b321b; -[SCAdChatFeedProperties isEqual:] */

uint FUN_1047b319c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047b30f8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047b321c; end: 1047b321f; -[SCAdChatFeedProperties copyWithZone:] */

void FUN_1047b321c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b3220; end: 1047b332f; -[SCAdChatFeedProperties encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f0810);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b3330; end: 1047b33b3; -[SCAdChatFeedProperties initWithCoder:] */

undefined8 FUN_1047b3330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f0810);
  func_0x00010bf66ce0(param_3);
  _objc_release(uVar1);
  func_0x00010c01ebe0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1047b33b4; end: 1047b33cf; -[SCAdChatFeedProperties description] */

void FUN_1047b33b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b33d0; end: 1047b344b; -[SCAdChatFeedProperties init] */

void FUN_1047b33d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdChatFeedPropertiesWrapper.swift",0x2d,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b3418);
  (*pcVar1)();
}



/* Entry: 1047b344c; end: 1047b344f; -[SCAdChatFeedProperties .cxx_destruct] */

void FUN_1047b344c(void)

{
  return;
}



/* Entry: 1047b3450; end: 1047b346f;  */

void FUN_1047b3450(void)

{
  _objc_opt_self(&PTR_PTR_1129d36f0);
  return;
}



/* Entry: 1047b3470; end: 1047b3473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3470(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11308ef18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b3474; end: 1047b3483; -[SCAdCustomColor red] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b3474(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ef48);
}



/* Entry: 1047b3484; end: 1047b3493; -[SCAdCustomColor green] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b3484(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ef50);
}



/* Entry: 1047b3494; end: 1047b34a3; -[SCAdCustomColor blue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b3494(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ef58);
}



/* Entry: 1047b34a4; end: 1047b34bb; -[SCAdCustomColor alpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b34a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ef60);
}



/* Entry: 1047b34bc; end: 1047b3547; -[SCAdCustomColor initWithRed:green:blue:alpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b34bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  _swift_getObjectType();
  *(undefined8 *)(param_5 + _DAT_11308ef48) = param_1;
  *(undefined8 *)(param_5 + _DAT_11308ef50) = param_2;
  *(undefined8 *)(param_5 + _DAT_11308ef58) = param_3;
  *(undefined8 *)(param_5 + _DAT_11308ef60) = param_4;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b3548; end: 1047b364f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308ef48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308ef50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ef58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308ef60) = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b3650; end: 1047b37cf; -[SCAdCustomColor hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3650(long param_1)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308ef48) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308ef48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308ef50) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308ef50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308ef58) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308ef58);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11308ef60) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11308ef60);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047b37d0; end: 1047b38cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1047b37d0(undefined8 param_1)

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
      dVar3 = *(double *)(unaff_x20 + _DAT_11308ef48);
      dVar4 = *(double *)(lStack_88 + _DAT_11308ef48);
      dVar5 = *(double *)(unaff_x20 + _DAT_11308ef50);
      dVar6 = *(double *)(lStack_88 + _DAT_11308ef50);
      dVar7 = *(double *)(unaff_x20 + _DAT_11308ef58);
      dVar8 = *(double *)(lStack_88 + _DAT_11308ef58);
      dVar9 = *(double *)(unaff_x20 + _DAT_11308ef60);
      dVar10 = *(double *)(lStack_88 + _DAT_11308ef60);
      _objc_release();
      return dVar9 == dVar10 && (dVar7 == dVar8 && (dVar5 == dVar6 && dVar3 == dVar4));
    }
  }
  return false;
}



/* Entry: 1047b38d0; end: 1047b394f; -[SCAdCustomColor isEqual:] */

uint FUN_1047b38d0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047b37d0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047b3950; end: 1047b3953; -[SCAdCustomColor copyWithZone:] */

void FUN_1047b3950(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b3954; end: 1047b3a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3954(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ef48);
  uVar1 = 0x444552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444552,0xe300000000000000);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ef50);
  uVar1 = 0x4e45455247;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e45455247,0xe500000000000000);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ef58);
  uVar1 = 0x45554c42;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c42,0xe400000000000000);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308ef60);
  uVar1 = 0x4148504c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4148504c41,0xe500000000000000);
  func_0x00010bf92e80(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047b3a64; end: 1047b3ab3; -[SCAdCustomColor encodeWithCoder:] */

void FUN_1047b3a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047b3954(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b3ab4; end: 1047b3af3;  */

undefined8 FUN_1047b3ab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047b3bcc(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047b3af4; end: 1047b3b2f; -[SCAdCustomColor initWithCoder:] */

undefined8 FUN_1047b3af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047b3bcc();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047b3b30; end: 1047b3b4b; -[SCAdCustomColor description] */

void FUN_1047b3b30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b3b4c; end: 1047b3bc7; -[SCAdCustomColor init] */

void FUN_1047b3b4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdCustomColorWrapper.swift",0x26,
             2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b3b94);
  (*pcVar1)();
}



/* Entry: 1047b3bc8; end: 1047b3bcb; -[SCAdCustomColor .cxx_destruct] */

void FUN_1047b3bc8(void)

{
  return;
}



/* Entry: 1047b3bcc; end: 1047b3ccb;  */

void FUN_1047b3bcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0x444552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444552,0xe300000000000000);
  func_0x00010bf66da0(param_2);
  uVar4 = param_1;
  _objc_release(uVar1);
  uVar2 = 0x4e45455247;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e45455247,0xe500000000000000);
  func_0x00010bf66da0(param_2);
  uVar1 = uVar4;
  _objc_release(uVar2);
  uVar3 = 0x45554c42;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45554c42,0xe400000000000000);
  func_0x00010bf66da0(param_2);
  uVar2 = uVar1;
  _objc_release(uVar3);
  uVar3 = 0x4148504c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4148504c41,0xe500000000000000);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c03d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar4,uVar1,uVar2);
  return;
}



/* Entry: 1047b3ccc; end: 1047b3ceb;  */

void FUN_1047b3ccc(void)

{
  _objc_opt_self(&PTR_PTR_1129d37c0);
  return;
}



/* Entry: 1047b3cec; end: 1047b3cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308ef48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308ef50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ef58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308ef60) = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b3cf0; end: 1047b3d4b; -[SCAdErrorResponse identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3cf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308ef90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308ef90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047b3d4c; end: 1047b3d5f; -[SCAdErrorResponse errorResponseType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b3d4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308ef98);
}



/* Entry: 1047b3d60; end: 1047b3e4f; -[SCAdErrorResponse initWithIdentifier:errorResponseType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3d60(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11308ef90);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308ef98) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b3e50; end: 1047b3e53; -[SCAdErrorResponse copyWithZone:] */

void FUN_1047b3e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b3e54; end: 1047b3e6f; -[SCAdErrorResponse description] */

void FUN_1047b3e54(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047b3e70; end: 1047b3eeb; -[SCAdErrorResponse init] */

void FUN_1047b3e70(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdErrorResponseWrapper.swift",
             0x28,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047b3eb8);
  (*pcVar1)();
}



/* Entry: 1047b3eec; end: 1047b3eff; -[SCAdErrorResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308ef90 + 8))
  ;
  return;
}



/* Entry: 1047b3f00; end: 1047b3f1f;  */

void FUN_1047b3f00(void)

{
  _objc_opt_self(&PTR_PTR_1129d38a8);
  return;
}



/* Entry: 1047b3f20; end: 1047b3f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308ef90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308ef98) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b3f24; end: 1047b40ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b3f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  long unaff_x20;
  undefined1 auStack_a0 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308efc8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308efd0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308efd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308efe0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11308efe8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308eff0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308eff8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308f000) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308f008) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f010) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f018) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11308f020) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11308f028) = (undefined1)param_14;
  *(undefined1 *)(unaff_x20 + _DAT_11308f030) = param_14._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11308f038) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11308f040) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11308f048) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308f050) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11308f058) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11308f060) = param_21;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b4100; end: 1047b419f;  */

void FUN_1047b4100(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_e0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1047b5628(&uStack_e0);
  _objc_release(param_2);
  param_1[0x11] = uStack_58;
  param_1[0x10] = uStack_60;
  param_1[0x13] = uStack_48;
  param_1[0x12] = uStack_50;
  param_1[0x15] = CONCAT71(uStack_37,uStack_38);
  param_1[0x14] = uStack_40;
  *(undefined8 *)((long)param_1 + 0xb1) = uStack_2f;
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_30,uStack_37);
  param_1[9] = uStack_98;
  param_1[8] = uStack_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = uStack_90;
  param_1[0xd] = uStack_78;
  param_1[0xc] = uStack_80;
  param_1[0xf] = uStack_68;
  param_1[0xe] = uStack_70;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  return;
}



/* Entry: 1047b41a0; end: 1047b41af; -[SCAdInsertionConfig minStoriesFromStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b41a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308efc8);
}



/* Entry: 1047b41b0; end: 1047b41bf; -[SCAdInsertionConfig minSnapsFromStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b41b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308efd0);
}



/* Entry: 1047b41c0; end: 1047b41cf; -[SCAdInsertionConfig minTimeFromStartSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b41c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308efd8);
}



/* Entry: 1047b41d0; end: 1047b41df; -[SCAdInsertionConfig minStoriesBetweenAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b41d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308efe0);
}



/* Entry: 1047b41e0; end: 1047b41ef; -[SCAdInsertionConfig minSnapsBetweenAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b41e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308efe8);
}



/* Entry: 1047b41f0; end: 1047b41ff; -[SCAdInsertionConfig minTimeBetweenAdsSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b41f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eff0);
}



/* Entry: 1047b4200; end: 1047b420f; -[SCAdInsertionConfig minStoriesBeforeEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b4200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308eff8);
}



/* Entry: 1047b4210; end: 1047b421f; -[SCAdInsertionConfig minSnapsBeforeEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b4210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f000);
}



/* Entry: 1047b4220; end: 1047b422f; -[SCAdInsertionConfig minTimeBeforeEndSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b4220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f008);
}



/* Entry: 1047b4230; end: 1047b423f; -[SCAdInsertionConfig minTimeInsertionThresholdSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b4230(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f010);
}



/* Entry: 1047b4240; end: 1047b424f; -[SCAdInsertionConfig maxSnapsNum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b4240(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f018);
}



/* Entry: 1047b4250; end: 1047b425f; -[SCAdInsertionConfig conjunctionFromStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b4250(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f020);
}



/* Entry: 1047b4260; end: 1047b426f; -[SCAdInsertionConfig conjunctionBetweenAds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b4260(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f028);
}



/* Entry: 1047b4270; end: 1047b427f; -[SCAdInsertionConfig conjunctionBeforeEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b4270(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f030);
}



/* Entry: 1047b4280; end: 1047b428f; -[SCAdInsertionConfig chatFeedCellIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b4280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f038));
  return;
}



/* Entry: 1047b4290; end: 1047b429f; -[SCAdInsertionConfig minStoriesBetweenAdsAcrossInventory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b4290(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f040);
}



/* Entry: 1047b42a0; end: 1047b42af; -[SCAdInsertionConfig minSnapsBetweenAdsAcrossInventory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b42a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f048);
}



/* Entry: 1047b42b0; end: 1047b42bf; -[SCAdInsertionConfig minTimeBetweenAdsAcrossInventorySeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047b42b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f050);
}



/* Entry: 1047b42c0; end: 1047b42cf; -[SCAdInsertionConfig conjunctionBetweenAdsAcrossInventory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047b42c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f058);
}



/* Entry: 1047b42d0; end: 1047b42df; -[SCAdInsertionConfig chatFeedInsertionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b42d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f060));
  return;
}



/* Entry: 1047b42e0; end: 1047b44bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b42e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11308efc8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308efd0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308efd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308efe0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11308efe8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11308eff0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308eff8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11308f000) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308f008) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f010) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f018) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11308f020) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11308f028) = (undefined1)param_14;
  *(undefined1 *)(unaff_x20 + _DAT_11308f030) = param_14._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11308f038) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_11308f040) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11308f048) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308f050) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11308f058) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_11308f060) = param_21;
  _objc_msgSendSuper2(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b44bc; end: 1047b45bf; -[SCAdInsertionConfig initWithMinStoriesFromStart:minSnapsFromStart:minTimeFromStartSeconds:minStoriesBetweenAds:minSnapsBetweenAds:minTimeBetweenAdsSeconds:minStoriesBeforeEnd:minSnapsBeforeEnd:minTimeBeforeEndSeconds:minTimeInsertionThresholdSeconds:maxSnapsNum:conjunctionFromStart:conjunctionBetweenAds:conjunctionBeforeEnd:chatFeedCellIndex:minStoriesBetweenAdsAcrossInventory:minSnapsBetweenAdsAcrossInventory:minTimeBetweenAdsAcrossInventorySeconds:conjunctionBetweenAdsAcrossInventory:chatFeedInsertionConfig:] */

void FUN_1047b44bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17)

{
  undefined8 in_stack_00000030;
  
  _objc_retain(param_17);
  _objc_retain(in_stack_00000030);
  FUN_1047b42e0(param_1,param_2,param_3,param_4,param_5,param_8,param_9,param_10,param_11,param_12,
                param_13,param_14,param_15);
  return;
}



/* Entry: 1047b45c0; end: 1047b4807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b45c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  long lStack_78;
  
  plVar3 = &lStack_80;
  _swift_getObjectType();
  uVar8 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308efc8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308efd0) = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_11308efd8) = param_1[2];
  uVar8 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11308efe0) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11308efe8) = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_11308eff0) = param_1[5];
  uVar8 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11308eff8) = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11308f000) = uVar8;
  uVar8 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11308f008) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_11308f010) = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_11308f018) = param_1[10];
  *(undefined1 *)(unaff_x20 + _DAT_11308f020) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(unaff_x20 + _DAT_11308f028) = *(undefined1 *)((long)param_1 + 0x59);
  *(undefined1 *)(unaff_x20 + _DAT_11308f030) = *(undefined1 *)((long)param_1 + 0x5a);
  if (*(char *)(param_1 + 0xd) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f038) = puVar2;
  uVar8 = param_1[0xf];
  *(undefined8 *)(unaff_x20 + _DAT_11308f040) = param_1[0xe];
  *(undefined8 *)(unaff_x20 + _DAT_11308f048) = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_11308f050) = param_1[0x10];
  *(undefined1 *)(unaff_x20 + _DAT_11308f058) = *(undefined1 *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x17) == '\x01') {
    plVar3 = (long *)0x0;
  }
  else {
    uVar8 = param_1[0x15];
    uVar1 = param_1[0x16];
    uVar6 = param_1[0x14];
    uVar9 = param_1[0x13];
    uVar7 = param_1[0x12];
    lVar4 = 0;
    FUN_1047b2fe4();
    lVar5 = lVar4;
    _objc_allocWithZone();
    *(undefined8 *)(lVar5 + _DAT_11308eec8) = uVar7;
    *(undefined8 *)(lVar5 + _DAT_11308eed0) = uVar9;
    *(undefined8 *)(lVar5 + _DAT_11308eed8) = uVar6;
    *(undefined8 *)(lVar5 + _DAT_11308eee0) = uVar8;
    *(undefined8 *)(lVar5 + _DAT_11308eee8) = uVar1;
    lStack_80 = lVar5;
    lStack_78 = lVar4;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_11308f060) = plVar3;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047b4808; end: 1047b483b; -[SCAdInsertionConfig hash] */

undefined8 FUN_1047b4808(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047b483c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047b483c; end: 1047b4ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b483c(void)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308efc8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308efd0));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308efd8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308efd8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308efe0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308efe8));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308eff0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308eff0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308eff8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f000));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f008) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308f008);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f010) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308f010);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f018));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308f020));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308f028));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308f030));
  lVar2 = *(long *)(unaff_x20 + _DAT_11308f038);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_88);
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f040));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f048));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f050) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308f050);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_11308f058);
  __ss6HasherV8_combineyys5UInt8VF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11308f060) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047b2918();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047b4ab4; end: 1047b4e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047b4ab4(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long unaff_x20;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  long lStack_d0;
  long alStack_c8 [5];
  
  lVar32 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_c8);
  if (alStack_c8[3] == 0) {
    func_0x00010006e7f4(alStack_c8);
  }
  else {
    plVar11 = &lStack_d0;
    _swift_dynamicCast(plVar11,alStack_c8,PTR___sypN_11034f1a8 + 8,lVar32,6);
    if (((ulong)plVar11 & 1) != 0) {
      lVar21 = *(long *)(unaff_x20 + _DAT_11308efc8);
      lVar14 = *(long *)(lStack_d0 + _DAT_11308efc8);
      lVar22 = *(long *)(unaff_x20 + _DAT_11308efd0);
      lVar15 = *(long *)(lStack_d0 + _DAT_11308efd0);
      dVar36 = *(double *)(unaff_x20 + _DAT_11308efd8);
      dVar35 = *(double *)(lStack_d0 + _DAT_11308efd8);
      lVar23 = *(long *)(unaff_x20 + _DAT_11308efe0);
      lVar16 = *(long *)(lStack_d0 + _DAT_11308efe0);
      lVar24 = *(long *)(unaff_x20 + _DAT_11308efe8);
      lVar17 = *(long *)(lStack_d0 + _DAT_11308efe8);
      dVar39 = *(double *)(unaff_x20 + _DAT_11308eff0);
      dVar40 = *(double *)(lStack_d0 + _DAT_11308eff0);
      lVar25 = *(long *)(unaff_x20 + _DAT_11308eff8);
      lVar18 = *(long *)(lStack_d0 + _DAT_11308eff8);
      lVar26 = *(long *)(unaff_x20 + _DAT_11308f000);
      lVar19 = *(long *)(lStack_d0 + _DAT_11308f000);
      dVar41 = *(double *)(unaff_x20 + _DAT_11308f008);
      dVar42 = *(double *)(lStack_d0 + _DAT_11308f008);
      dVar43 = *(double *)(unaff_x20 + _DAT_11308f010);
      dVar44 = *(double *)(lStack_d0 + _DAT_11308f010);
      lVar27 = *(long *)(unaff_x20 + _DAT_11308f018);
      lVar20 = *(long *)(lStack_d0 + _DAT_11308f018);
      bVar2 = *(byte *)(unaff_x20 + _DAT_11308f020);
      bVar3 = *(byte *)(lStack_d0 + _DAT_11308f020);
      bVar4 = *(byte *)(unaff_x20 + _DAT_11308f028);
      bVar5 = *(byte *)(lStack_d0 + _DAT_11308f028);
      lVar28 = *(long *)(unaff_x20 + _DAT_11308f038);
      lVar32 = *(long *)(lStack_d0 + _DAT_11308f038);
      uVar31 = (uint)(lVar28 == 0 && lVar32 == 0);
      bVar6 = *(byte *)(unaff_x20 + _DAT_11308f030);
      bVar7 = *(byte *)(lStack_d0 + _DAT_11308f030);
      if ((lVar28 != 0) && (lVar32 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar32);
        _objc_retain(lVar28);
        lVar33 = lVar28;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar31 = (uint)lVar33;
        _objc_release(lVar28);
        _objc_release(lVar32);
      }
      lVar32 = *(long *)(unaff_x20 + _DAT_11308f040);
      lVar28 = *(long *)(lStack_d0 + _DAT_11308f040);
      lVar33 = *(long *)(unaff_x20 + _DAT_11308f048);
      lVar34 = *(long *)(lStack_d0 + _DAT_11308f048);
      dVar37 = *(double *)(unaff_x20 + _DAT_11308f050);
      dVar38 = *(double *)(lStack_d0 + _DAT_11308f050);
      bVar8 = *(byte *)(unaff_x20 + _DAT_11308f058);
      bVar9 = *(byte *)(lStack_d0 + _DAT_11308f058);
      if (*(long *)(unaff_x20 + _DAT_11308f060) == 0) {
        lVar30 = *(long *)(lStack_d0 + _DAT_11308f060);
        lVar29 = lVar30;
        _objc_retain(lVar30);
        _objc_release(lStack_d0);
        if (lVar30 == 0) {
          uVar10 = 1;
        }
        else {
          _objc_release(lVar29);
          uVar10 = 0;
        }
      }
      else {
        lVar29 = *(long *)(lStack_d0 + _DAT_11308f060);
        if (lVar29 == 0) {
          uVar12 = 0;
          alStack_c8[1] = 0;
          alStack_c8[2] = 0;
        }
        else {
          uVar12 = 0;
          FUN_1047b2fe4();
        }
        alStack_c8[0] = lVar29;
        alStack_c8[3] = uVar12;
        _objc_retain(lVar29);
        plVar11 = alStack_c8;
        FUN_1047b29c0(plVar11);
        uVar10 = (uint)plVar11;
        _objc_release(lStack_d0);
        func_0x00010006e7f4(alStack_c8);
      }
      uVar13 = (uint)(lVar21 != lVar14 || lVar22 != lVar15);
      if (dVar36 != dVar35) {
        uVar13 = 1;
      }
      if (lVar23 != lVar16) {
        uVar13 = 1;
      }
      if (lVar24 != lVar17) {
        uVar13 = 1;
      }
      if (dVar39 != dVar40) {
        uVar13 = 1;
      }
      if (lVar25 != lVar18) {
        uVar13 = 1;
      }
      if (lVar26 != lVar19) {
        uVar13 = 1;
      }
      uVar1 = 0;
      if (lVar33 == lVar34) {
        uVar1 = uVar31 & ((uVar13 | (byte)(((dVar41 != dVar42 || dVar43 != dVar44) ||
                                           lVar27 != lVar20) | bVar2 ^ bVar3 | bVar4 ^ bVar5 |
                                          bVar6 ^ bVar7)) ^ 0xffffffff) & (uint)(lVar32 == lVar28);
      }
      uVar31 = 0;
      if (dVar37 == dVar38) {
        uVar31 = uVar1;
      }
      return uVar31 & ((bVar8 ^ bVar9) ^ 1) & uVar10;
    }
  }
  return 0;
}



/* Entry: 1047b4e88; end: 1047b4f07; -[SCAdInsertionConfig isEqual:] */

uint FUN_1047b4e88(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1047b4ab4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047b4f08; end: 1047b4f0b; -[SCAdInsertionConfig copyWithZone:] */

void FUN_1047b4f08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047b4f0c; end: 1047b5463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047b4f0c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d470);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000014;
  uVar1 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d490);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308efd8);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d4b0);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d4d0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20d4f0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308eff0);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20d510);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d530);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d550);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308f008);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20d570);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308f010);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f20d590);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0x50414e535f58414d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x50414e535f58414d,0xed00004d554e5f53);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d5c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d5e0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20d600);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d620);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f20d640);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f20d670);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f050);
  uVar1 = 0xd00000000000002d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x800000010f20d6a0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f20d6d0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20d700);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047b5464; end: 1047b54b3; -[SCAdInsertionConfig encodeWithCoder:] */

void FUN_1047b5464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047b4f0c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047b54b4; end: 1047b54f3;  */

undefined8 FUN_1047b54b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047b5848(param_1);
  _objc_release(param_1);
  return uVar1;
}


