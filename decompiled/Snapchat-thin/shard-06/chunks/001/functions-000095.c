/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044d4328; end: 1044d4343;  */

void FUN_1044d4328(void)

{
  long unaff_x20;
  
  FUN_1044d4238(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1044d4344; end: 1044d4393; -[SCStoriesCachedSummaryInfoUpdateListenerAnnouncer addListener:] */

undefined8 FUN_1044d4344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_1044d406c(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1044d4394; end: 1044d441f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4394(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11077bfe0;
  _swift_allocObject(&UNK_11077bfe0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1044d4710,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044d4420; end: 1044d470f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4420(long param_1,long param_2)

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
  lVar6 = _DAT_113080438;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_113080438,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_1044d45ec;
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
            if (uVar7 == 0) goto LAB_1044d4658;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_1044d45ec:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1044d4654;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d4710);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1044d4654:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1044d4658:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_113080438,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044d4710; end: 1044d4727;  */

void FUN_1044d4710(void)

{
  long unaff_x20;
  
  FUN_1044d4420(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1044d4728; end: 1044d47df; -[SCStoriesCachedSummaryInfoUpdateListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11077bfe0;
  _swift_allocObject(&UNK_11077bfe0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1044d49e8,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044d47e0; end: 1044d4817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d47e0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044d4818; end: 1044d489b; -[SCStoriesCachedSummaryInfoUpdateListenerAnnouncer didUpdateCachedStoriesSummaryInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4818(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  lStack_38 = param_3;
  _objc_retain();
  __s7Combine18PassthroughSubjectC4sendyyxF(&lStack_38);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Entry: 1044d489c; end: 1044d48bb;  */

void FUN_1044d489c(void)

{
  _objc_opt_self(&PTR_PTR_1129c2b88);
  return;
}



/* Entry: 1044d48bc; end: 1044d496f; -[SCStoriesCachedSummaryInfoUpdateListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d48bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_113080430;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_113080438) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_113080428;
  uVar2 = 0x113080270;
  func_0x0001000285a8(0x113080270,&UNK_10dd0b430);
  _swift_allocObject();
  __s7Combine18PassthroughSubjectCACyxq_Gycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_1044d489c();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d4970; end: 1044d499f;  */

void FUN_1044d4970(void)

{
  FUN_1044d489c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044d49a0; end: 1044d49e7; -[SCStoriesCachedSummaryInfoUpdateListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d49a0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080430));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080438));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113080428));
  return;
}



/* Entry: 1044d49e8; end: 1044d49fb;  */

void FUN_1044d49e8(void)

{
  FUN_1044d4710();
  return;
}



/* Entry: 1044d49fc; end: 1044d4a73;  */

void FUN_1044d49fc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  uVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    _objc_msgSend();
    if ((uVar2 & 1) != 0) {
      func_0x00010bf7e4a0(uVar1);
    }
    _swift_unknownObjectRelease(uVar1);
  }
  return;
}



/* Entry: 1044d4a74; end: 1044d4a7b;  */

void FUN_1044d4a74(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    _objc_msgSend();
    if ((uVar2 & 1) != 0) {
      func_0x00010bf7e4a0(uVar1);
    }
    _swift_unknownObjectRelease(uVar1);
  }
  return;
}



/* Entry: 1044d4a7c; end: 1044d4af3;  */

void FUN_1044d4a7c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  uVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    _objc_msgSend();
    if ((uVar2 & 1) != 0) {
      func_0x00010bf7e4c0(uVar1);
    }
    _swift_unknownObjectRelease(uVar1);
  }
  return;
}



/* Entry: 1044d4af4; end: 1044d4afb;  */

void FUN_1044d4af4(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    _objc_msgSend();
    if ((uVar2 & 1) != 0) {
      func_0x00010bf7e4c0(uVar1);
    }
    _swift_unknownObjectRelease(uVar1);
  }
  return;
}



/* Entry: 1044d4afc; end: 1044d4b73;  */

void FUN_1044d4afc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  uVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    _objc_msgSend();
    if ((uVar2 & 1) != 0) {
      func_0x00010bf7e720(uVar1);
    }
    _swift_unknownObjectRelease(uVar1);
  }
  return;
}



/* Entry: 1044d4b74; end: 1044d4b7b;  */

void FUN_1044d4b74(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    _objc_msgSend();
    if ((uVar2 & 1) != 0) {
      func_0x00010bf7e720(uVar1);
    }
    _swift_unknownObjectRelease(uVar1);
  }
  return;
}



/* Entry: 1044d4b7c; end: 1044d4c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4b7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11077c030;
  _swift_allocObject(&UNK_11077c030,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1044d4ef8,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044d4c08; end: 1044d4ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4c08(long param_1,long param_2)

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
  lVar6 = _DAT_1130804a0;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_1130804a0,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_1044d4dd4;
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
            if (uVar7 == 0) goto LAB_1044d4e40;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_1044d4dd4:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1044d4e3c;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d4ef8);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1044d4e3c:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1044d4e40:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_1130804a0,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044d4ef8; end: 1044d4f0f;  */

void FUN_1044d4ef8(void)

{
  long unaff_x20;
  
  FUN_1044d4c08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1044d4f10; end: 1044d4fc7; -[SCStoriesMediaCoordinatingListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11077c030;
  _swift_allocObject(&UNK_11077c030,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1044d5194,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044d4fc8; end: 1044d4fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d4fc8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044d5000; end: 1044d500b; -[SCStoriesMediaCoordinatingListenerAnnouncer didUpdateMediaStateChangeRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044d500c; end: 1044d5043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d500c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044d5044; end: 1044d504f; -[SCStoriesMediaCoordinatingListenerAnnouncer didUpdateMediaStateIdempotencyRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044d5050; end: 1044d5087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5050(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044d5088; end: 1044d5093; -[SCStoriesMediaCoordinatingListenerAnnouncer didUpdateStoriesMediaAddedRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044d5094; end: 1044d50fb;  */

void FUN_1044d5094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044d50fc; end: 1044d512b;  */

void FUN_1044d50fc(void)

{
  func_0x000100938aa4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044d512c; end: 1044d5193; -[SCStoriesMediaCoordinatingListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d512c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080498));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130804a0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080468));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080478));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113080488));
  return;
}



/* Entry: 1044d5194; end: 1044d51a7;  */

void FUN_1044d5194(void)

{
  FUN_1044d4ef8();
  return;
}



/* Entry: 1044d51a8; end: 1044d5203;  */

void FUN_1044d51a8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x00010bf7e840();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044d5204; end: 1044d520b;  */

void FUN_1044d5204(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf7e840();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044d520c; end: 1044d5297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d520c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11077c080;
  _swift_allocObject(&UNK_11077c080,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1044d5588,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044d5298; end: 1044d5587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5298(long param_1,long param_2)

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
  lVar6 = _DAT_1130804e8;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_1130804e8,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_1044d5464;
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
            if (uVar7 == 0) goto LAB_1044d54d0;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_1044d5464:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1044d54cc;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d5588);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1044d54cc:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1044d54d0:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_1130804e8,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044d5588; end: 1044d559f;  */

void FUN_1044d5588(void)

{
  long unaff_x20;
  
  FUN_1044d5298(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1044d55a0; end: 1044d5657; -[SCStoriesThumbnailCoordinatingListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d55a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11077c080;
  _swift_allocObject(&UNK_11077c080,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1044d5774,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044d5658; end: 1044d568f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5658(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044d5690; end: 1044d56fb; -[SCStoriesThumbnailCoordinatingListenerAnnouncer didUpdateThumbnailStateChangeRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044d56fc; end: 1044d572b;  */

void FUN_1044d56fc(void)

{
  func_0x00010044b9a4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044d572c; end: 1044d5773; -[SCStoriesThumbnailCoordinatingListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d572c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130804e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130804e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130804d0));
  return;
}



/* Entry: 1044d5774; end: 1044d5787;  */

void FUN_1044d5774(void)

{
  FUN_1044d5588();
  return;
}



/* Entry: 1044d5788; end: 1044d57a3;  */

undefined8 FUN_1044d5788(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *param_2) || (uVar2 != uVar4)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,uVar2,*param_2,uVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if ((uVar5 != 0) &&
          (((uVar7 == uVar1 && (uVar3 == uVar5)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,uVar3,uVar1,uVar5,0), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1044d57a4; end: 1044d585b;  */

undefined8
FUN_1044d57a4(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1044d585c; end: 1044d58eb;  */

long FUN_1044d585c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1044d58ec; end: 1044d5957;  */

undefined8 * FUN_1044d58ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1044d5958; end: 1044d599b;  */

undefined8 * FUN_1044d5958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1044d599c; end: 1044d5a5b;  */

int FUN_1044d599c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044d5a5c; end: 1044d5a6b; -[_TtC36SCMediaComponentsCoordinatorServices36SCMediaComponentsCoordinatorServices mediaEncryptionCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080518));
  return;
}



/* Entry: 1044d5a6c; end: 1044d5a7b; -[_TtC36SCMediaComponentsCoordinatorServices36SCMediaComponentsCoordinatorServices mediaOverlayCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113080520));
  return;
}



/* Entry: 1044d5a7c; end: 1044d5adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5a7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113080518) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113080520) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d5ae0; end: 1044d5b3f; -[_TtC36SCMediaComponentsCoordinatorServices36SCMediaComponentsCoordinatorServices init] */

void FUN_1044d5ae0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMediaComponentsCoordinatorServices.SCMediaComponentsCoordinatorServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d5b0c);
  (*pcVar1)();
}



/* Entry: 1044d5b40; end: 1044d5b77; -[_TtC36SCMediaComponentsCoordinatorServices36SCMediaComponentsCoordinatorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5b40(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113080518));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113080520));
  return;
}



/* Entry: 1044d5b78; end: 1044d5b83; -[SCMediaEncryptionInfo key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5b78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080550))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080550);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044d5b84; end: 1044d5b8f; -[SCMediaEncryptionInfo iv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5b84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080558))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080558);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044d5b90; end: 1044d5be7;  */

void FUN_1044d5b90(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044d5be8; end: 1044d5bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080550);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080558);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d5bf0; end: 1044d5d93; -[SCMediaEncryptionInfo initWithKey:iv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5bf0(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113080550);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_113080558);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d5d94; end: 1044d5dc7; -[SCMediaEncryptionInfo hash] */

undefined8 FUN_1044d5d94(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044d5dc8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044d5dc8; end: 1044d5ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d5dc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113080550))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113080550);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113080558))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113080558);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044d5ff8; end: 1044d6077; -[SCMediaEncryptionInfo isEqual:] */

uint FUN_1044d5ff8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001044d5e8c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044d6078; end: 1044d607b; -[SCMediaEncryptionInfo copyWithZone:] */

void FUN_1044d6078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044d607c; end: 1044d614f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d607c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113080550))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113080550);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x59454b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59454b,0xe300000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113080558))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113080558);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5649;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5649,0xe200000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1044d6150; end: 1044d619f; -[SCMediaEncryptionInfo encodeWithCoder:] */

void FUN_1044d6150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1044d607c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044d61a0; end: 1044d61cf;  */

void FUN_1044d61a0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044d61d0(param_1);
  return;
}



/* Entry: 1044d61d0; end: 1044d63d7;  */

undefined8 FUN_1044d61d0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x59454b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59454b,0xe300000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0x5649;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5649,0xe200000000000000);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_a0;
    lVar7 = lStack_98;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c020b60();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1044d63d8; end: 1044d63ff; -[SCMediaEncryptionInfo initWithCoder:] */

void FUN_1044d63d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1044d61d0();
  return;
}



/* Entry: 1044d6400; end: 1044d641b; -[SCMediaEncryptionInfo description] */

void FUN_1044d6400(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044d641c; end: 1044d6497; -[SCMediaEncryptionInfo init] */

void FUN_1044d641c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMediaComponentsCoordinatorServices/SCMediaEncryptionInfoWrapper.swift",0x47,2,0x45,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d6464);
  (*pcVar1)();
}



/* Entry: 1044d6498; end: 1044d64d7; -[SCMediaEncryptionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d6498(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080550 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113080558 + 8))
  ;
  return;
}



/* Entry: 1044d64d8; end: 1044d64f7;  */

void FUN_1044d64d8(void)

{
  _objc_opt_self(&PTR_PTR_1129c2f58);
  return;
}



/* Entry: 1044d64f8; end: 1044d6517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044d64f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080550);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113080558);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d6518; end: 1044d65c7;  */

void FUN_1044d6518(void)

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



/* Entry: 1044d65c8; end: 1044d6647;  */

long FUN_1044d65c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 1;
  }
  else {
    _swift_unknownObjectRetain();
    uVar1 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f203cb0);
    lVar2 = param_1;
    func_0x00010bf1f440(param_1);
    _swift_unknownObjectRelease(param_1);
    _objc_release(uVar1);
  }
  return lVar2;
}



/* Entry: 1044d6648; end: 1044d674b; +[SCMediaHEVCGating decodeAllowed:] */

long FUN_1044d6648(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    _swift_unknownObjectRetain(param_3);
    uVar1 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f203cb0);
    lVar2 = param_3;
    func_0x00010bf1f440(param_3);
    _swift_unknownObjectRelease(param_3);
    _objc_release(uVar1);
    return lVar2;
  }
  return 1;
}



/* Entry: 1044d674c; end: 1044d684f; +[SCMediaHEVCGating av1DecodeAllowed:] */

long FUN_1044d674c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    _swift_unknownObjectRetain(param_3);
    uVar1 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f203cd0);
    lVar2 = param_3;
    func_0x00010bf1f440(param_3);
    _swift_unknownObjectRelease(param_3);
    _objc_release(uVar1);
    return lVar2;
  }
  return 1;
}



/* Entry: 1044d6850; end: 1044d68d3; +[SCMediaHEVCGating shouldBlockDownload:] */

long FUN_1044d6850(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    _swift_unknownObjectRetain(param_3);
    uVar1 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f203cf0);
    lVar2 = param_3;
    func_0x00010bf1f440(param_3);
    _swift_unknownObjectRelease(param_3);
    _objc_release(uVar1);
    return lVar2;
  }
  return 0;
}



/* Entry: 1044d68d4; end: 1044d691b; +[SCMediaHEVCGating downloadBlockCodec:] */

uint FUN_1044d68d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_3 < 5) {
    return 0xdU >> (ulong)((uint)param_3 & 0x1f) & 1;
  }
  uStack_18 = param_3;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11077c278,&uStack_18,&UNK_11077c278,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d691c);
  (*pcVar1)();
}



/* Entry: 1044d691c; end: 1044d69e3;  */

uint FUN_1044d691c(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uStack_38;
  
  if (param_2 != 0) {
    _swift_unknownObjectRetain(param_2);
    uVar2 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f203cf0);
    lVar3 = param_2;
    func_0x00010bf1f440();
    _swift_unknownObjectRelease(param_2);
    _objc_release(uVar2);
    if ((int)lVar3 != 0) {
      if (4 < param_1) {
        uStack_38 = param_1;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_11077c278,&uStack_38,&UNK_11077c278,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d69e4);
        (*pcVar1)();
      }
      uVar4 = 0xd >> (ulong)((uint)param_1 & 0x1f);
      goto LAB_1044d69a8;
    }
  }
  uVar4 = 0;
LAB_1044d69a8:
  return uVar4 & 1;
}



/* Entry: 1044d69e4; end: 1044d6abb; +[SCMediaHEVCGating downloadBlockedForCodec:configProvider:] */

uint FUN_1044d69e4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uStack_38;
  
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_unknownObjectRetain_n(param_4,2);
    uVar2 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f203cf0);
    lVar3 = param_4;
    func_0x00010bf1f440();
    _swift_unknownObjectRelease(param_4);
    _objc_release(uVar2);
    uVar4 = 0;
    if ((int)lVar3 != 0) {
      if (4 < param_3) {
        uStack_38 = param_3;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_11077c278,&uStack_38,&UNK_11077c278,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d6abc);
        (*pcVar1)();
      }
      uVar4 = 0xd >> (ulong)((uint)param_3 & 0x1f);
    }
    _swift_unknownObjectRelease(param_4);
  }
  return uVar4 & 1;
}



/* Entry: 1044d6abc; end: 1044d6ac3;  */

ulong FUN_1044d6abc(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x8;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar5 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar9 = 1;
    lVar8 = 1;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    uVar2 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f203cb0);
    lVar8 = param_3;
    func_0x00010bf1f440();
    _swift_unknownObjectRelease(param_3);
    _objc_release(uVar2);
    _swift_unknownObjectRetain(param_3);
    uVar2 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f203cd0);
    lVar9 = param_3;
    func_0x00010bf1f440();
    _swift_unknownObjectRelease(param_3);
    _objc_release(uVar2);
  }
  uVar7 = (uint)lVar8;
  if ((uVar7 & (uint)lVar9 & 1) != 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    _objc_retain(param_1);
  }
  else {
    uVar10 = param_1;
    _objc_retain(param_1);
    func_0x00010bf3efc0();
    if (param_2 < 3) {
      if (param_2 == 1) {
        _objc_release(uVar10);
        return (ulong)(uVar7 ^ 1);
      }
      if (param_2 == 2) {
LAB_1044d7294:
        _objc_release(uVar10);
        return 0;
      }
    }
    else {
      if (param_2 == 3) {
        _objc_release(uVar10);
        if ((uint)lVar9 != 0) {
          return 0;
        }
        return 2;
      }
      if (param_2 == 4) goto LAB_1044d7294;
    }
  }
  uVar10 = param_1;
  func_0x00010c2791a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000102159a9c(0);
  uVar3 = uVar10;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar2);
  _objc_release(uVar10);
  if (uVar3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar10 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRelease(uVar3);
  if (uVar10 == 0) {
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_self();
    uVar10 = param_1;
    _swift_dynamicCastObjCClass();
    uVar3 = param_1;
    if (uVar10 != 0) {
      _objc_retain(param_1);
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5);
      _objc_release();
      __s10Foundation3URLV13pathExtensionSSvg();
      (**(code **)(lVar11 + 8))(lVar5,lVar1);
      uStack_80 = 0x3875336d;
      uStack_78 = 0xe400000000000000;
      uStack_70 = uVar10;
      puStack_68 = puVar4;
      func_0x000100e8b654();
      puVar6 = &uStack_80;
      __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                (puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar5,lVar5);
      _swift_bridgeObjectRelease(puVar4);
      _objc_release(uVar3);
      if (puVar6 == (undefined8 *)0x0) goto LAB_1044d724c;
    }
    _objc_release(uVar3);
    param_1 = 1;
    if (uVar7 != 0) {
      param_1 = 2;
    }
  }
  else {
LAB_1044d724c:
    uVar10 = param_1;
    _objc_retain(param_1);
    FUN_1044d6d38(param_1,lVar8,lVar9);
    _objc_release(uVar10);
    _objc_release(uVar10);
  }
  return param_1;
}



/* Entry: 1044d6ac4; end: 1044d6b47; +[SCMediaHEVCGating blockedCodecForAsset:variantInfo:configProvider:] */

undefined8
FUN_1044d6ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  func_0x0001044d709c(param_3,param_4,param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_5);
  return param_3;
}



/* Entry: 1044d6b48; end: 1044d6b9f; +[SCMediaHEVCGating blockedCodecForAssetTrack:hevcAllowed:av1Allowed:] */

undefined8
FUN_1044d6b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001044d73dc(param_3,param_4,param_5);
  _objc_release(uVar1);
  return param_3;
}



/* Entry: 1044d6ba0; end: 1044d6bf7; +[SCMediaHEVCGating blockedCodecForAsset:hevcAllowed:av1Allowed:] */

undefined8
FUN_1044d6ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044d6d38(param_3,param_4,param_5);
  _objc_release(uVar1);
  return param_3;
}



/* Entry: 1044d6bf8; end: 1044d6bfb;  */

bool FUN_1044d6bf8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar3 = 1;
    lVar2 = 1;
  }
  else {
    _swift_unknownObjectRetain(param_2);
    uVar1 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f203cb0);
    lVar2 = param_2;
    func_0x00010bf1f440(param_2);
    _swift_unknownObjectRelease(param_2);
    _objc_release(uVar1);
    _swift_unknownObjectRetain(param_2);
    uVar1 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f203cd0);
    lVar3 = param_2;
    func_0x00010bf1f440(param_2);
    _swift_unknownObjectRelease(param_2);
    _objc_release(uVar1);
  }
  FUN_1044d6d38(param_1,lVar2,lVar3);
  return (int)param_1 != 0;
}



/* Entry: 1044d6bfc; end: 1044d6c5b; +[SCMediaHEVCGating shouldBlockDecodeForAsset:configProvider:] */

uint FUN_1044d6bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  FUN_1044d7604(param_3,param_4);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_4);
  return (uint)param_3 & 1;
}



/* Entry: 1044d6c5c; end: 1044d6cb7; +[SCMediaHEVCGating shouldBlockDecodeForAsset:hevcAllowed:av1Allowed:] */

bool FUN_1044d6c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044d6d38(param_3,param_4,param_5);
  _objc_release(uVar1);
  return (int)param_3 != 0;
}



/* Entry: 1044d6cb8; end: 1044d6cf3; -[SCMediaHEVCGating init] */

void FUN_1044d6cb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044d6cf4; end: 1044d6d27;  */

void FUN_1044d6cf4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044d6d28; end: 1044d6d37;  */

undefined1  [16] FUN_1044d6d28(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1044d6d38; end: 1044d7603;  */

undefined8 FUN_1044d6d38(undefined *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 uStack_c0;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  if ((param_1 != (undefined *)0x0) && (((param_2 & 1) == 0 || ((param_3 & 1) == 0)))) {
    puVar12 = *(undefined **)PTR__AVMediaTypeVideo_110348090;
    _objc_retain();
    puVar13 = param_1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
    func_0x000102159a9c();
    puVar3 = puVar13;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(puVar13);
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar13 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar13 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar3) {
        puVar13 = puVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (puVar13 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      uStack_c0 = 1;
      do {
        if (((ulong)puVar3 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d709c);
            (*pcVar1)();
          }
          puVar4 = *(undefined **)(puVar3 + (long)puVar18 * 8 + 0x20);
          _objc_retain();
          puVar14 = puVar2;
        }
        else {
          puVar4 = puVar18;
          puVar14 = puVar3;
          func_0x000100f95fe8();
        }
        if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d704c);
          (*pcVar1)();
        }
        puVar18 = puVar18 + 1;
        _objc_retain();
        _objc_retain();
        puVar5 = puVar4;
        func_0x00010c0c6c20();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar7 = puVar12;
        puVar11 = puVar14;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if ((puVar6 == puVar7) && (puVar14 == puVar11)) {
          _objc_release(puVar5);
          _swift_bridgeObjectRelease(puVar14);
          _swift_bridgeObjectRelease(puVar11);
LAB_1044d6ecc:
          puVar14 = puVar4;
          func_0x00010bfb5b00();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR___sypN_11034f1a8 + 8;
          puVar5 = puVar14;
          __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
          _objc_release(puVar14);
          uVar17 = *(ulong *)(puVar5 + 0x10);
          if (uVar17 != 0) {
            uVar15 = 0;
            puVar14 = puVar5;
            do {
              puVar14 = puVar14 + 0x20;
              if (*(ulong *)(puVar5 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1044d7048);
                (*pcVar1)();
              }
              func_0x0001000bb420(puVar14,auStack_80);
              uVar8 = 0;
              func_0x00010146f8ac(0);
              puVar9 = &uStack_88;
              puVar2 = auStack_80;
              _swift_dynamicCast(puVar9,puVar2,PTR___sypN_11034f1a8 + 8,uVar8,6);
              uVar8 = uStack_88;
              if ((int)puVar9 != 0) {
                uVar10 = uStack_88;
                _CMFormatDescriptionGetMediaSubType();
                _objc_release(uVar8);
                iVar16 = (int)uVar10;
                if (((param_2 & 1) == 0) && ((iVar16 == 0x68766331 || (iVar16 == 0x6d757861)))) {
LAB_1044d700c:
                  _swift_bridgeObjectRelease(puVar5);
                  _objc_release(puVar4);
                  _objc_release(puVar4);
                  _objc_release(param_1);
                  _swift_bridgeObjectRelease(puVar3);
                  _objc_release(puVar4);
                  return uStack_c0;
                }
                if (((param_3 & 1) == 0) && (iVar16 == 0x61763031)) {
                  uStack_c0 = 2;
                  goto LAB_1044d700c;
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar17 != uVar15);
          }
          _swift_bridgeObjectRelease(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar4);
        }
        else {
          puVar2 = puVar14;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (puVar6,puVar14,puVar7,puVar11,0);
          _objc_release(puVar5);
          _swift_bridgeObjectRelease(puVar14);
          _swift_bridgeObjectRelease(puVar11);
          if (((ulong)puVar6 & 1) != 0) goto LAB_1044d6ecc;
          _objc_release(puVar4);
          _objc_release(puVar4);
        }
        _objc_release(puVar4);
      } while (puVar18 != puVar13);
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(puVar3);
  }
  return 0;
}



/* Entry: 1044d7604; end: 1044d76ff;  */

bool FUN_1044d7604(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar3 = 1;
    lVar2 = 1;
  }
  else {
    _swift_unknownObjectRetain(param_2);
    uVar1 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f203cb0);
    lVar2 = param_2;
    func_0x00010bf1f440(param_2);
    _swift_unknownObjectRelease(param_2);
    _objc_release(uVar1);
    _swift_unknownObjectRetain(param_2);
    uVar1 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f203cd0);
    lVar3 = param_2;
    func_0x00010bf1f440(param_2);
    _swift_unknownObjectRelease(param_2);
    _objc_release(uVar1);
  }
  FUN_1044d6d38(param_1,lVar2,lVar3);
  return (int)param_1 != 0;
}



/* Entry: 1044d7700; end: 1044d7703;  */

void FUN_1044d7700(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0b710;
  _swift_getWitnessTable(&UNK_10dd0b710,&UNK_11077c258);
  puRam0000000113080588 = puVar1;
  return;
}



/* Entry: 1044d7704; end: 1044d7743;  */

void FUN_1044d7704(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0b710;
  _swift_getWitnessTable(&UNK_10dd0b710,&UNK_11077c258);
  puRam0000000113080588 = puVar1;
  return;
}



/* Entry: 1044d7744; end: 1044d7747;  */

void FUN_1044d7744(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0b7b0;
  _swift_getWitnessTable(&UNK_10dd0b7b0,&UNK_11077c278);
  puRam0000000113080590 = puVar1;
  return;
}



/* Entry: 1044d7748; end: 1044d7787;  */

void FUN_1044d7748(void)

{
  undefined *puVar1;
  
  if (puRam0000000113080590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0b7b0;
  _swift_getWitnessTable(&UNK_10dd0b7b0,&UNK_11077c278);
  puRam0000000113080590 = puVar1;
  return;
}



/* Entry: 1044d7788; end: 1044d77a7;  */

undefined1  [16] FUN_1044d7788(void)

{
  return ZEXT816(0x11077c258);
}



/* Entry: 1044d77a8; end: 1044d77c7;  */

void FUN_1044d77a8(void)

{
  _objc_opt_self(&PTR_PTR_1129c3030);
  return;
}


