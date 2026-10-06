/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045249dc; end: 104524a2b;  */

void FUN_1045249dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113083958 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113083940;
  func_0x00010002969c(0x113083940,&UNK_10dd14690);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam0000000113083958 = puVar2;
  return;
}



/* Entry: 104524a2c; end: 104524b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524a2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_113083968;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_113083968,auStack_80,0x21,0);
    _swift_bridgeObjectRetain(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    func_0x00010049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    _swift_endAccess(auStack_80);
    _objc_release(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 104524b1c; end: 104524b37;  */

void FUN_104524b1c(void)

{
  long unaff_x20;
  
  FUN_104524a2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104524b38; end: 104524b87; -[SCEventListenerAnnouncer addListener:] */

undefined8 FUN_104524b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_104524748(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 104524b88; end: 104524c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524b88(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_110784050;
  _swift_allocObject(&UNK_110784050,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_104524f04,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 104524c14; end: 104524f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524c14(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_f0 [3];
  ulong auStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  lVar9 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar6 = _DAT_113083968;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_113083968,puVar4,0,0);
    lVar6 = *(long *)(lVar9 + lVar6);
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lVar9);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar9 = param_2, func_0x0001000a7158(), ((ulong)puVar4 & 1) == 0)) {
      _swift_bridgeObjectRelease(lVar6);
    }
    else {
      uVar13 = *(ulong *)(*(long *)(lVar6 + 0x38) + lVar9 * 8);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRelease(lVar6);
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar7 = -1L << ((ulong)*(byte *)(uVar13 + 0x20) & 0x3f);
        puVar12 = (ulong *)(uVar13 + 0x38);
        uVar8 = ~uVar7;
        uVar7 = -uVar7;
        uVar5 = 0xffffffffffffffff;
        if (uVar7 < 0x40) {
          uVar5 = ~(-1L << (uVar7 & 0x3f));
        }
        uVar5 = uVar5 & *puVar12;
        uVar7 = uVar13;
        _swift_bridgeObjectRetain();
        lVar9 = 0;
        uVar14 = uVar13;
      }
      else {
        uVar7 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar7 = uVar13;
        }
        _swift_bridgeObjectRetain(uVar13);
        __ss10__CocoaSetV12makeIteratorAB0D0CyF();
        uVar2 = 0;
        __s7Combine14AnyCancellableCMa(0);
        uVar3 = uVar2;
        func_0x000103b8dfcc();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_104524de0;
      while( true ) {
        while (uVar5 != 0) {
          uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = *(ulong *)(*(long *)(uVar14 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                            lVar6 * 0x200);
          auStack_d8[0] = uVar7;
          _swift_retain(uVar7);
          uVar5 = uVar5 - 1 & uVar5;
          lVar10 = lVar9;
          while( true ) {
            lVar9 = lVar6;
            if (uVar7 == 0) goto LAB_104524e4c;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_104524de0:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_104524e48;
            uVar3 = 0;
            auStack_f0[0] = uVar7;
            __s7Combine14AnyCancellableCMa(0);
            _swift_dynamicCast(auStack_d8,auStack_f0,PTR___syXlN_11034f1a0 + 8,uVar3,7);
            uVar5 = uVar11;
            uVar7 = auStack_d8[0];
            lVar6 = lVar9;
            lVar10 = lVar9;
          }
        }
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104524f04);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_104524e48:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_104524e4c:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_113083968,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 104524f04; end: 104524f1b;  */

void FUN_104524f04(void)

{
  long unaff_x20;
  
  FUN_104524c14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104524f1c; end: 104524fd3; -[SCEventListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110784050;
  _swift_allocObject(&UNK_110784050,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1045251cc,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 104524fd4; end: 104525057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104524fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_58);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 104525058; end: 104525153; -[SCEventListenerAnnouncer didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525058(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_5 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  _objc_retain();
  lStack_78 = param_3;
  uStack_70 = uVar1;
  lStack_68 = param_4;
  uStack_60 = param_2;
  lStack_58 = param_5;
  __s7Combine18PassthroughSubjectC4sendyyxF(&lStack_78);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_5);
  return;
}



/* Entry: 104525154; end: 104525183;  */

void FUN_104525154(void)

{
  func_0x000100431464();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104525184; end: 1045251cb; -[SCEventListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525184(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113083960));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083968));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083950));
  return;
}



/* Entry: 1045251cc; end: 1045251df;  */

void FUN_1045251cc(void)

{
  FUN_104524f04();
  return;
}



/* Entry: 1045251e0; end: 10452526b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045251e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_1107840a0;
  _swift_allocObject(&UNK_1107840a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_10452555c,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 10452526c; end: 10452555b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452526c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_f0 [3];
  ulong auStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  lVar9 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar6 = _DAT_1130839b0;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_1130839b0,puVar4,0,0);
    lVar6 = *(long *)(lVar9 + lVar6);
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lVar9);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar9 = param_2, func_0x0001000a7158(), ((ulong)puVar4 & 1) == 0)) {
      _swift_bridgeObjectRelease(lVar6);
    }
    else {
      uVar13 = *(ulong *)(*(long *)(lVar6 + 0x38) + lVar9 * 8);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRelease(lVar6);
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar7 = -1L << ((ulong)*(byte *)(uVar13 + 0x20) & 0x3f);
        puVar12 = (ulong *)(uVar13 + 0x38);
        uVar8 = ~uVar7;
        uVar7 = -uVar7;
        uVar5 = 0xffffffffffffffff;
        if (uVar7 < 0x40) {
          uVar5 = ~(-1L << (uVar7 & 0x3f));
        }
        uVar5 = uVar5 & *puVar12;
        uVar7 = uVar13;
        _swift_bridgeObjectRetain();
        lVar9 = 0;
        uVar14 = uVar13;
      }
      else {
        uVar7 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar7 = uVar13;
        }
        _swift_bridgeObjectRetain(uVar13);
        __ss10__CocoaSetV12makeIteratorAB0D0CyF();
        uVar2 = 0;
        __s7Combine14AnyCancellableCMa(0);
        uVar3 = uVar2;
        func_0x000103b8dfcc();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_104525438;
      while( true ) {
        while (uVar5 != 0) {
          uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = *(ulong *)(*(long *)(uVar14 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                            lVar6 * 0x200);
          auStack_d8[0] = uVar7;
          _swift_retain(uVar7);
          uVar5 = uVar5 - 1 & uVar5;
          lVar10 = lVar9;
          while( true ) {
            lVar9 = lVar6;
            if (uVar7 == 0) goto LAB_1045254a4;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_104525438:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1045254a0;
            uVar3 = 0;
            auStack_f0[0] = uVar7;
            __s7Combine14AnyCancellableCMa(0);
            _swift_dynamicCast(auStack_d8,auStack_f0,PTR___syXlN_11034f1a0 + 8,uVar3,7);
            uVar5 = uVar11;
            uVar7 = auStack_d8[0];
            lVar6 = lVar9;
            lVar10 = lVar9;
          }
        }
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10452555c);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1045254a0:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1045254a4:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_1130839b0,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 10452555c; end: 104525573;  */

void FUN_10452555c(void)

{
  long unaff_x20;
  
  FUN_10452526c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104525574; end: 10452562b; -[SCUpdateListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_1107840a0;
  _swift_allocObject(&UNK_1107840a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1045256dc,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 10452562c; end: 104525663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452562c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_30);
  return;
}



/* Entry: 104525664; end: 104525693;  */

void FUN_104525664(void)

{
  func_0x000100498b14();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104525694; end: 1045256db; -[SCUpdateListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525694(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130839a8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130839b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113083998));
  return;
}



/* Entry: 1045256dc; end: 1045256ef;  */

void FUN_1045256dc(void)

{
  FUN_10452555c();
  return;
}



/* Entry: 1045256f0; end: 104525b57;  */

void FUN_1045256f0(undefined8 *param_1)

{
  _objc_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 104525b58; end: 104525b6f;  */

bool FUN_104525b58(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104525b70; end: 104525baf;  */

void FUN_104525b70(void)

{
  undefined *puVar1;
  
  if (puRam00000001130839e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14760;
  _swift_getWitnessTable(&UNK_10dd14760,&UNK_110784250);
  puRam00000001130839e0 = puVar1;
  return;
}



/* Entry: 104525bb0; end: 104525c5b;  */

void FUN_104525bb0(void)

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



/* Entry: 104525c5c; end: 104525cab;  */

void FUN_104525c5c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 104525cac; end: 104525ceb;  */

void FUN_104525cac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130839e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14820;
  _swift_getWitnessTable(&UNK_10dd14820,&UNK_1107842c8);
  puRam00000001130839e8 = puVar1;
  return;
}



/* Entry: 104525cec; end: 104525d97;  */

void FUN_104525cec(void)

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



/* Entry: 104525d98; end: 104525dcf;  */

void FUN_104525d98(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 104525dd0; end: 104525ddf; -[SCOverlayItem itemView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130839f0));
  return;
}



/* Entry: 104525de0; end: 104525df3; -[SCOverlayItem itemOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104525de0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_1130839f8);
}



/* Entry: 104525df4; end: 104525e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130839f0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130839f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104525e60; end: 104525ed7; -[SCOverlayItem initWithItemView:itemOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525e60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_1130839f0) = param_5;
  puVar1 = (undefined8 *)(param_3 + _DAT_1130839f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_3;
  lStack_38 = lVar3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104525ed8; end: 104525f37; -[SCOverlayItem init] */

void FUN_104525ed8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCPresentation.OverlayItem",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104525f04);
  (*pcVar1)();
}



/* Entry: 104525f38; end: 104525f47; -[SCOverlayItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104525f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130839f0));
  return;
}



/* Entry: 104525f48; end: 104525f67;  */

void FUN_104525f48(void)

{
  _objc_opt_self(&PTR_PTR_1129cbc80);
  return;
}



/* Entry: 104525f68; end: 104525f6b;  */

void FUN_104525f68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14928;
  _swift_getWitnessTable(&UNK_10dd14928,&UNK_110784340);
  puRam0000000113083a28 = puVar1;
  return;
}



/* Entry: 104525f6c; end: 104525fab;  */

void FUN_104525f6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14928;
  _swift_getWitnessTable(&UNK_10dd14928,&UNK_110784340);
  puRam0000000113083a28 = puVar1;
  return;
}



/* Entry: 104525fac; end: 104525faf;  */

void FUN_104525fac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14960;
  _swift_getWitnessTable(&UNK_10dd14960,&UNK_110784340);
  puRam0000000113083a30 = puVar1;
  return;
}



/* Entry: 104525fb0; end: 104525fef;  */

void FUN_104525fb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14960;
  _swift_getWitnessTable(&UNK_10dd14960,&UNK_110784340);
  puRam0000000113083a30 = puVar1;
  return;
}



/* Entry: 104525ff0; end: 10452601b;  */

void FUN_104525ff0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10452601c; end: 10452605b;  */

void FUN_10452601c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14a28;
  _swift_getWitnessTable(&UNK_10dd14a28,&UNK_110784340);
  puRam0000000113083a38 = puVar1;
  return;
}



/* Entry: 10452605c; end: 10452605f;  */

void FUN_10452605c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14a50;
  _swift_getWitnessTable(&UNK_10dd14a50,&UNK_110784340);
  puRam0000000113083a40 = puVar1;
  return;
}



/* Entry: 104526060; end: 10452609f;  */

void FUN_104526060(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14a50;
  _swift_getWitnessTable(&UNK_10dd14a50,&UNK_110784340);
  puRam0000000113083a40 = puVar1;
  return;
}



/* Entry: 1045260a0; end: 10452621f;  */

void FUN_1045260a0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 104526220; end: 1045262c7;  */

void FUN_104526220(ulong *param_1,long param_2)

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
      if (uVar2 == uVar4) goto LAB_1045262b4;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1045262b4:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1045262c8; end: 1045262f3;  */

undefined1  [16] FUN_1045262c8(void)

{
  return ZEXT816(0x110784340);
}



/* Entry: 1045262f4; end: 1045263cb;  */

void FUN_1045262f4(void)

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



/* Entry: 1045263cc; end: 1045263eb;  */

void FUN_1045263cc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1045263ec; end: 10452642b;  */

void FUN_1045263ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14aa0;
  _swift_getWitnessTable(&UNK_10dd14aa0,&UNK_110784480);
  puRam0000000113083a48 = puVar1;
  return;
}



/* Entry: 10452642c; end: 104526453;  */

undefined1  [16] FUN_10452642c(void)

{
  return ZEXT816(0x110784480);
}



/* Entry: 104526454; end: 104526493;  */

void FUN_104526454(void)

{
  undefined *puVar1;
  
  if (puRam0000000113083a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd14b60;
  _swift_getWitnessTable(&UNK_10dd14b60,&UNK_1107844f8);
  puRam0000000113083a50 = puVar1;
  return;
}



/* Entry: 104526494; end: 10452653f;  */

void FUN_104526494(void)

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



/* Entry: 104526540; end: 10452657b;  */

void FUN_104526540(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10452657c; end: 1045265df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452657c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083a58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083a60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045265e0; end: 1045265e3; -[SCContainerFooterConfig copyWithZone:] */

void FUN_1045265e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1045265e4; end: 1045265ff; -[SCContainerFooterConfig description] */

void FUN_1045265e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104526600; end: 104526647; -[SCContainerFooterConfig init] */

void FUN_104526600(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCPresentation/SCContainerFooterConfigWrapper.swift",0x33,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104526648);
  (*pcVar1)();
}



/* Entry: 104526648; end: 104526663; +[SCContainerFooterConfigBuilder containerFooterConfig] */

void FUN_104526648(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104526664; end: 1045266a3; +[SCContainerFooterConfigBuilder containerFooterConfigWithExistingContainerFooterConfig:] */

void FUN_104526664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104526978(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1045266a4; end: 104526703; -[SCContainerFooterConfigBuilder withDefaultBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1045266a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113083a68);
  *(undefined8 *)(param_1 + _DAT_113083a68) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104526704; end: 104526763; -[SCContainerFooterConfigBuilder withBackgroundObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104526704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113083a70);
  *(undefined8 *)(param_1 + _DAT_113083a70) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104526764; end: 1045267ef; -[SCContainerFooterConfigBuilder build] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526764(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113083a68);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113083a70);
  FUN_104526a38();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113083a58) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_113083a60) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045267f0; end: 10452687b; -[SCContainerFooterConfigBuilder safeBuildAndReturnError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045267f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113083a68);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113083a70);
  FUN_104526a38();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113083a58) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_113083a60) = uVar4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10452687c; end: 1045268cf; -[SCContainerFooterConfigBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10452687c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083a68) = 0;
  *(undefined8 *)(param_1 + _DAT_113083a70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1045268d0; end: 1045268d3;  */

void FUN_1045268d0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045268d4; end: 10452690b; -[SCContainerFooterConfigBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045268d4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083a68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083a70));
  return;
}



/* Entry: 10452690c; end: 10452693f;  */

void FUN_10452690c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104526940; end: 104526977; -[SCContainerFooterConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526940(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083a58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083a60));
  return;
}



/* Entry: 104526978; end: 104526a37;  */

/* WARNING: Possible PIC construction at 0x0001045269ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001045269b0) */

void FUN_104526978(long param_1)

{
  if (param_1 == 0) {
    func_0x000104526a58();
    _objc_allocWithZone();
  }
  else {
    func_0x000104526a58();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104526a38; end: 104526a77;  */

void FUN_104526a38(void)

{
  _objc_opt_self(&PTR_PTR_1129cbd48);
  return;
}



/* Entry: 104526a78; end: 104526a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526a78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083a58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083a60) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104526a80; end: 104526b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526a80(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083ac8) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113083ad0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113083ad8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104526b54; end: 104526b57; -[SCContainerViewLayoutConfig copyWithZone:] */

void FUN_104526b54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104526b58; end: 104526b73; -[SCContainerViewLayoutConfig description] */

void FUN_104526b58(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104526b74; end: 104526bbb; -[SCContainerViewLayoutConfig init] */

void FUN_104526b74(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCPresentation/SCContainerViewLayoutConfigWrapper.swift",0x37,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104526bbc);
  (*pcVar1)();
}



/* Entry: 104526bbc; end: 104526bd7; +[SCContainerViewLayoutConfigBuilder containerViewLayoutConfig] */

void FUN_104526bbc(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104526bd8; end: 104526c17; +[SCContainerViewLayoutConfigBuilder containerViewLayoutConfigWithExistingContainerViewLayoutConfig:] */

void FUN_104526bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_104526fcc(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104526c18; end: 104526c77; -[SCContainerViewLayoutConfigBuilder withFooterConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104526c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113083ae0);
  *(undefined8 *)(param_1 + _DAT_113083ae0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104526c78; end: 104526c87; -[SCContainerViewLayoutConfigBuilder withDisableBorderAndCornerViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526c78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113083ae8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104526c88; end: 104526c97; -[SCContainerViewLayoutConfigBuilder withOverlayIsEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526c88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113083af0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104526c98; end: 104526d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526c98(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_113083ae8);
  if (bVar1 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113083ae8) = 0;
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_113083af0);
  if (bVar2 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113083af0) = 0;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113083ae0);
  FUN_104527094();
  lVar4 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_113083ac8) = uVar5;
  *(byte *)(lVar4 + _DAT_113083ad0) = bVar1 & 1;
  *(byte *)(lVar4 + _DAT_113083ad8) = bVar2 & 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = param_1;
  _objc_retain(uVar5);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 104526d64; end: 104526da7; -[SCContainerViewLayoutConfigBuilder build] */

void FUN_104526d64(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104526c98();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104526da8; end: 104526deb; -[SCContainerViewLayoutConfigBuilder safeBuildAndReturnError:] */

void FUN_104526da8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104526c98();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104526dec; end: 104526e4f; -[SCContainerViewLayoutConfigBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526dec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083ae0) = 0;
  *(undefined1 *)(param_1 + _DAT_113083ae8) = 2;
  *(undefined1 *)(param_1 + _DAT_113083af0) = 2;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104526e50; end: 104526e53;  */

void FUN_104526e50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104526e54; end: 104526e63; -[SCContainerViewLayoutConfigBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083ae0));
  return;
}



/* Entry: 104526e64; end: 104526e97;  */

void FUN_104526e64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104526e98; end: 104526ea7; -[SCContainerViewLayoutConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526e98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113083ac8));
  return;
}



/* Entry: 104526ea8; end: 104526f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104526ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar2 = &lStack_70;
  _swift_getObjectType();
  if (param_1 == 1) {
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = 0;
    FUN_104526a38();
    lVar4 = lVar3;
    _objc_allocWithZone();
    *(long *)(lVar4 + _DAT_113083a58) = param_1;
    *(undefined8 *)(lVar4 + _DAT_113083a60) = param_2;
    puVar1 = PTR_s_init_1125d9248;
    lStack_70 = lVar4;
    lStack_68 = lVar3;
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_msgSendSuper2(&lStack_70,puVar1);
  }
  *(long **)(unaff_x20 + _DAT_113083ac8) = plVar2;
  *(byte *)(unaff_x20 + _DAT_113083ad0) = (byte)param_3 & 1;
  *(byte *)(unaff_x20 + _DAT_113083ad8) = (byte)((ulong)param_3 >> 8) & 1;
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104526f9c; end: 104526fcb;  */

void FUN_104526f9c(long param_1,undefined8 param_2)

{
  if (param_1 == 1) {
    return;
  }
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104526fcc; end: 104527093;  */

/* WARNING: Possible PIC construction at 0x000104527000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104527004) */

void FUN_104526fcc(long param_1)

{
  if (param_1 == 0) {
    func_0x0001045270b4();
    _objc_allocWithZone();
  }
  else {
    func_0x0001045270b4();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104527094; end: 1045270d3;  */

void FUN_104527094(void)

{
  _objc_opt_self(&PTR_PTR_1129cbed8);
  return;
}



/* Entry: 1045270d4; end: 1045270d7;  */

void FUN_1045270d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045270d8; end: 1045270df; +[SCPanTransitionOptions none] */

undefined8 FUN_1045270d8(void)

{
  return 0;
}



/* Entry: 1045270e0; end: 1045270e7; +[SCPanTransitionOptions slideAbove] */

undefined8 FUN_1045270e0(void)

{
  return 1;
}



/* Entry: 1045270e8; end: 1045270ef; +[SCPanTransitionOptions slideToReveal] */

undefined8 FUN_1045270e8(void)

{
  return 2;
}



/* Entry: 1045270f0; end: 10452718b; -[SCPanTransitionOptions init] */

void FUN_1045270f0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCPresentation/SCPanTransitionOptionsWrapper.swift",0x32,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104527138);
  (*pcVar1)();
}



/* Entry: 10452718c; end: 1045271e7;  */

long FUN_10452718c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1045271e8; end: 1045272bf;  */

undefined8 * FUN_1045271e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar2);
  return param_1;
}


