/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104925cd8; end: 104925d53;  */

void FUN_104925cd8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309d8f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd48aa0;
  _swift_getWitnessTable(&UNK_10dd48aa0,&UNK_1107b85d8);
  puRam000000011309d8f0 = puVar1;
  return;
}



/* Entry: 104925d54; end: 104925d57;  */

void FUN_104925d54(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined auStack_1c0 [8];
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  uint uStack_16c;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = 0x11309c5e0;
  uStack_16c = param_3;
  lStack_158 = param_2;
  func_0x0001048db364();
  lVar13 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lStack_1b0 = *(long *)(lVar4 + -8);
  puStack_1b8 = auStack_1c0 + -(lVar13 + 0xfU & 0xfffffffffffffff0) +
                -(*(long *)(lStack_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (ulong *)(param_1 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar18 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  uVar15 = uVar15 + 0x3f >> 6;
  uStack_190 = 0x800000010f21c960;
  uStack_1a8 = 0x800000010f21c980;
  _swift_bridgeObjectRetain(param_1);
  uStack_198 = 2;
  uStack_1a0 = 1;
  puVar11 = auStack_1c0 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  puStack_188 = puVar19;
  lVar13 = 0;
  lStack_178 = param_1;
joined_r0x0001049265fc:
  do {
    lStack_168 = lVar4;
    puStack_160 = puVar11;
    if (uVar18 == 0) {
      uVar18 = uVar15;
      if ((long)uVar15 <= lVar13 + 1) {
        uVar18 = lVar13 + 1;
      }
      lVar16 = uVar18 - 1;
      lVar17 = lVar13;
      do {
        lVar13 = lVar17 + 1;
        if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104926c98);
          (*pcVar3)();
        }
        if ((long)uVar15 <= lVar13) {
          uVar18 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
          goto LAB_10492677c;
        }
        uVar18 = puVar19[lVar13];
        lVar17 = lVar17 + 1;
      } while (uVar18 == 0);
    }
    uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 - 1 & uVar18;
    uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar13 << 6;
    puVar1 = (undefined8 *)(*(long *)(lStack_178 + 0x30) + uVar14 * 0x10);
    uStack_d0 = *puVar1;
    lVar17 = puVar1[1];
    lStack_c8 = lVar17;
    func_0x0001000bb420(*(long *)(lStack_178 + 0x38) + uVar14 * 0x20,&uStack_c0);
    _swift_bridgeObjectRetain(lVar17);
    lVar16 = lVar13;
LAB_10492677c:
    lVar17 = lStack_c8;
    puVar9 = PTR___sypN_11034f1a8;
    lStack_98 = lStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    if (lStack_c8 == 0) {
      _swift_release(lStack_178);
      return;
    }
    uStack_150 = uStack_d0;
    func_0x000100102924(&uStack_90,&uStack_d0);
    func_0x0001000bb420(&uStack_d0,&puStack_f0);
    puVar7 = PTR___sSiN_11034deb0;
    ppuVar6 = &puStack_140;
    _swift_dynamicCast(ppuVar6,&puStack_f0,puVar9 + 8,PTR___sSiN_11034deb0,6);
    lVar13 = lVar16;
    if ((int)ppuVar6 == 0) {
      func_0x0001000bb420(&uStack_d0,&puStack_f0);
      uVar5 = 0;
      func_0x0001002ed07c(0);
      ppuVar6 = &puStack_140;
      _swift_dynamicCast(ppuVar6,&puStack_f0,puVar9 + 8,uVar5,6);
      puVar2 = puStack_140;
      if ((int)ppuVar6 != 0) {
        puVar9 = puStack_140;
        puVar11 = PTR_s_stringValue_112674fe8;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(puVar2);
        _objc_release(puVar9);
        goto LAB_10492690c;
      }
      func_0x0001000bb420(&uStack_d0,&puStack_f0);
      puVar7 = puVar11;
      _swift_dynamicCast(puVar11,&puStack_f0,puVar9 + 8,lVar4,6);
      lVar16 = lStack_1b0;
      if (((ulong)puVar7 & 1) != 0) {
        (**(code **)(lStack_1b0 + 0x38))(puVar11,0,1,lVar4);
        puVar9 = puStack_1b8;
        puVar7 = puStack_1b8;
        (**(code **)(lVar16 + 0x20))(puStack_1b8,puVar11,lVar4);
        __s10Foundation3URLV14absoluteStringSSvg();
        puVar19 = puStack_188;
        (**(code **)(lVar16 + 8))(puVar9,lVar4);
        goto LAB_10492690c;
      }
      _swift_bridgeObjectRelease(lVar17);
      (**(code **)(lStack_1b0 + 0x38))(puVar11,1,1,lVar4);
      func_0x000104925d18(puVar11,0x11309c5e0);
    }
    else {
      puStack_f0 = puStack_140;
      puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
LAB_10492690c:
      if ((uStack_16c & 1) != 0) {
        puStack_180 = puVar7;
        _swift_weakInit(&puStack_140,lStack_158);
        _swift_bridgeObjectRetain_n(puVar11,2);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,1,1,puVar9);
        uVar14 = *(ulong *)(puVar7 + 0x10);
        puVar9 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar14) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          func_0x0001000d182c(puVar9,uVar14 + 1,1,puVar7);
        }
        *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
        *(undefined8 *)(puVar9 + uVar14 * 0x10 + 0x20) = 0xd00000000000001e;
        *(undefined8 *)(puVar9 + uVar14 * 0x10 + 0x28) = uStack_1a8;
        puStack_f0 = (undefined *)0x223d656d616e;
        puStack_e8 = (undefined *)0xe600000000000000;
        __sSS6appendyySSF(uStack_150,lVar17);
        __sSS6appendyySSF(0x22,0xe100000000000000);
        puVar2 = puStack_e8;
        puVar7 = puStack_f0;
        uVar14 = *(ulong *)(puVar9 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar14) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          func_0x0001000d182c(puVar10,uVar14 + 1,1,puVar9);
        }
        *(ulong *)(puVar10 + 0x10) = uVar14 + 1;
        *(undefined **)(puVar10 + uVar14 * 0x10 + 0x20) = puVar7;
        *(undefined **)(puVar10 + uVar14 * 0x10 + 0x28) = puVar2;
        uVar5 = 0x11309c618;
        puStack_f0 = puVar10;
        func_0x0001048db364(0x11309c618);
        uVar8 = 0x112d38278;
        func_0x000104927cb4(0x112d38278,FUN_1048e5f1c,PTR___sSayxGSKsMc_11034dcf0);
        puVar9 = (undefined *)0x203b;
        uVar12 = 0xe200000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x203b,0xe200000000000000,uVar5,uVar8);
        _swift_bridgeObjectRelease(puVar10);
        puStack_f0 = puVar9;
        puStack_e8 = (undefined *)uVar12;
        __sSS6appendyySSF(0xa0d,0xe200000000000000);
        puVar9 = puStack_e8;
        func_0x000104935330(puStack_f0,puStack_e8);
        _swift_bridgeObjectRelease(puVar9);
        func_0x000104935330(0xa0d,0xe200000000000000);
        _swift_beginAccess(&puStack_140,auStack_108,0,0);
        ppuVar6 = &puStack_140;
        _swift_weakLoadStrong();
        puVar9 = puStack_180;
        if (ppuVar6 != (undefined **)0x0) {
          func_0x000104935330(puStack_180,puVar11);
          _swift_release(ppuVar6);
        }
        lVar4 = lStack_158;
        func_0x000104935330(0xa0d,0xe200000000000000);
        _swift_bridgeObjectRelease_n(puVar11,2);
        _swift_weakDestroy(&puStack_140);
        puStack_d8 = PTR___sSSN_11034da80;
        puStack_f0 = puVar9;
        puStack_e8 = puVar11;
        _swift_beginAccess(lVar4 + 0x20,auStack_120,0x21,0);
        func_0x000100102924(&puStack_f0,&puStack_140);
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        _swift_isUniquelyReferenced_nonNull_native(uVar5);
        uStack_148 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar4 + 0x20) = 0x8000000000000000;
        func_0x0001001029e8(&puStack_140,uStack_150,lVar17,uVar5);
        _swift_bridgeObjectRelease(lVar17);
        *(undefined8 *)(lVar4 + 0x20) = uStack_148;
        _swift_endAccess(auStack_120);
        func_0x000100183ab8(&uStack_d0);
        puVar11 = puStack_160;
        puVar19 = puStack_188;
        lVar4 = lStack_168;
        goto joined_r0x0001049265fc;
      }
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(lVar17);
    }
    lVar4 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x18) = uStack_198;
    *(undefined8 *)(lVar4 + 0x10) = uStack_1a0;
    puStack_f0 = (undefined *)0x0;
    puStack_e8 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x24);
    _swift_bridgeObjectRelease(puStack_e8);
    puStack_140 = (undefined *)0xd000000000000017;
    uStack_138 = uStack_190;
    func_0x0001000bb420(&uStack_d0,&puStack_f0);
    puVar11 = PTR___sypN_11034f1a8 + 8;
    __sSS10describingSSx_tclufC(&puStack_f0,puVar11);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x697070696b73202c,0xeb000000002e676e);
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x20) = puStack_140;
    *(undefined8 *)(lVar4 + 0x28) = uStack_138;
    __ss5print_9separator10terminatoryypd_S2StF(lVar4,0x20,0xe100000000000000,10,0xe100000000000000)
    ;
    _swift_bridgeObjectRelease(lVar4);
    func_0x000100183ab8(&uStack_d0);
    puVar11 = puStack_160;
    lVar4 = lStack_168;
  } while( true );
}



/* Entry: 104925d58; end: 104926063;  */

void FUN_104925d58(long param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4,
                  code *param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long alStack_80 [4];
  
  lVar1 = 0;
  uStack_b0 = param_6;
  pcStack_a8 = param_5;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar6 = (long)&uStack_b0 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation8URLErrorVMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar10 = lVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    puVar3 = param_3;
    _swift_dynamicCastObjCClass(param_3,puVar2);
    if (puVar3 != (undefined1 *)0x0) {
      if (param_4 == (undefined *)0x0) {
        lStack_88 = 0;
        _swift_beginAccess(param_7 + 0x10,auStack_a0,0,0);
        puVar7 = (undefined1 *)(param_7 + 0x10);
        _swift_unknownObjectWeakLoadStrong();
        _objc_retain();
        puVar8 = param_3;
        if (puVar7 != (undefined1 *)0x0) {
          _objc_msgSend(puVar3,PTR_s_statusCode_1126725e0);
          func_0x000104927580(param_1,param_2,&lStack_88,puVar3);
          _objc_release();
          lVar1 = lStack_88;
          if (lStack_88 != 0) {
            _swift_errorRetain(lStack_88);
            _swift_bridgeObjectRelease(param_1);
            alStack_80[1] = 0;
            alStack_80[0] = 0;
            alStack_80[3] = 0;
            alStack_80[2] = 0;
            _swift_errorRetain(lVar1);
            (*pcStack_a8)(alStack_80,lVar1);
            _objc_release(param_3);
            _swift_errorRelease(lVar1);
            _swift_errorRelease(lVar1);
            func_0x000104925d18(alStack_80,0x11309c428);
            _swift_errorRelease(lVar1);
            return;
          }
          puVar8 = puVar7;
          if (param_1 != 0) {
            uVar5 = 0x11309c420;
            func_0x0001048db364();
            alStack_80[0] = param_1;
            alStack_80[3] = uVar5;
            (*pcStack_a8)(alStack_80,0);
            _objc_release(param_3);
            goto LAB_104926034;
          }
        }
        func_0x000104925cd8();
        alStack_80[1] = 0;
        alStack_80[0] = 0;
        alStack_80[3] = 0;
        alStack_80[2] = 0;
        param_4 = &UNK_1107b85d8;
        _swift_allocError(&UNK_1107b85d8,puVar8,0,0);
        *puVar8 = 2;
        (*pcStack_a8)(alStack_80,param_4);
        _objc_release(param_3);
      }
      else {
        alStack_80[1] = 0;
        alStack_80[0] = 0;
        alStack_80[3] = 0;
        alStack_80[2] = 0;
        _objc_retain(param_3);
        _swift_errorRetain(param_4);
        (*pcStack_a8)(alStack_80,param_4);
        _objc_release(param_3);
      }
      _swift_errorRelease(param_4);
      goto LAB_104926034;
    }
  }
  alStack_80[1] = 0;
  alStack_80[0] = 0;
  alStack_80[3] = 0;
  alStack_80[2] = 0;
  __s10Foundation8URLErrorV4CodeV17badServerResponseAEvgZ(lVar6);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000101f20194();
  _swift_release(puVar2);
  uVar5 = 0x112e40888;
  func_0x000104927cb4(0x112e40888,PTR___s10Foundation8URLErrorVMa_110350ee0,
                      PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_110350ed8);
  __s10Foundation21_BridgedStoredNSErrorPAAE_8userInfox4CodeQz_SDySSypGtcfC
            (lVar10,lVar6,puVar4,lVar1,uVar5);
  __s10Foundation8URLErrorV8_nsErrorSo7NSErrorCvg();
  (**(code **)(lVar9 + 8))(lVar10,lVar1);
  (*pcStack_a8)(alStack_80,lVar6);
  _objc_release(lVar6);
LAB_104926034:
  func_0x000104925d18(alStack_80,0x11309c428);
  return;
}



/* Entry: 104926064; end: 104926067;  */

undefined * FUN_104926064(undefined *param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long alStack_f0 [2];
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_e0 + lVar1;
  if (0xe < param_2 >> 0x3c) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100214a84();
    _swift_release(puVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar4;
    }
    goto LAB_104927a70;
  }
  func_0x00010006c00c(param_1,param_2);
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar6);
  puVar11 = param_1;
  uVar12 = param_2;
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar6);
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x0;
  lStack_98 = 0;
  uStack_a0 = 0;
  if (uVar12 == 0) {
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
    uVar2 = (uint)(param_2 >> 0x20);
    uVar10 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 != 0) {
        if ((long)(int)param_1 != (long)param_1 >> 0x20) goto LAB_104927710;
        goto LAB_1049277e8;
      }
      if ((param_2 & 0xff000000000000) == 0) goto LAB_1049277e8;
LAB_104927710:
      _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
      uVar12 = 1;
      puVar11 = param_1;
      __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
                (1,param_1,param_2);
      uVar12 = uVar12 & 0xffffffffffff;
    }
    else {
      if ((uVar10 == 2) && (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)))
      goto LAB_104927710;
LAB_1049277e8:
      _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
      uVar12 = 0;
      puVar11 = (undefined *)0xe000000000000000;
    }
    _swift_bridgeObjectRelease(puVar11);
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar12 != 0) {
      uVar12 = 0x11309d598;
      func_0x0001048db364();
      _swift_allocObject();
      *(undefined8 *)(uVar12 + 0x18) = 2;
      *(undefined8 *)(uVar12 + 0x10) = 1;
      *(undefined **)(uVar12 + 0x38) = PTR___sSSN_11034da80;
      *(undefined8 *)(uVar12 + 0x20) = 0xd000000000000018;
      *(undefined8 *)(uVar12 + 0x28) = 0x800000010f21c920;
      __ss5print_9separator10terminatoryypd_S2StF();
      goto LAB_1049278dc;
    }
  }
  else {
    if (*param_3 == 0) {
      puStack_d0 = puVar11;
      uStack_c8 = uVar12;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar6);
      func_0x000100e8b654();
      uVar9 = 0;
      puVar5 = puVar6;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (puVar6,0,PTR___sSSN_11034da80,puVar11);
      (**(code **)(lVar13 + 8))(puVar6,lVar3);
      if (uVar9 >> 0x3c < 0xf) {
        puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        _swift_getInitializedObjCClass();
        puVar6 = puVar5;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar5,uVar9);
        lStack_d8 = 0;
        _objc_msgSend(puVar11,PTR_s_JSONObjectWithData_options_error_11254dfe0,puVar6,0,&lStack_d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        lVar3 = lStack_d8;
        _objc_retain();
        if (puVar11 != (undefined *)0x0) {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_d0,puVar11);
          func_0x0001000b44c0(puVar5,uVar9);
          _swift_unknownObjectRelease(puVar11);
          func_0x000104925d18(&puStack_b0,0x11309c428);
          uStack_a8 = uStack_c8;
          puStack_b0 = puStack_d0;
          lStack_98 = lStack_b8;
          uStack_a0 = uStack_c0;
          uStack_88 = uStack_c8;
          puStack_90 = puStack_d0;
          uStack_80 = uStack_c0;
          lStack_78 = lStack_b8;
          goto LAB_1049278cc;
        }
        lVar13 = lVar3;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(lVar3);
        _swift_willThrow();
        func_0x0001000b44c0(puVar5,uVar9);
        func_0x000104925d18(&puStack_b0,0x11309c428);
        *param_3 = lVar13;
      }
      else {
        func_0x000104925d18(&puStack_b0,0x11309c428);
      }
      uStack_80 = 0;
      lStack_78 = 0;
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
    }
    else {
      uStack_88 = 0;
      puStack_90 = (undefined *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
LAB_1049278cc:
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
LAB_1049278dc:
    _swift_bridgeObjectRelease(uVar12);
  }
  if (lStack_78 == 0) {
    if (*param_3 != 0) goto LAB_104927944;
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_allocWithZone();
    uVar8 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f21c940);
    _objc_msgSend(puVar11,PTR_s_initWithDomain_code_userInfo__1125e1288,uVar8,param_4,0);
    _objc_release(uVar8);
    func_0x0001000b44c0(param_1,param_2);
    func_0x000104925d18(&puStack_90,0x11309c428);
    *param_3 = (long)puVar11;
    puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else if (*param_3 == 0) {
LAB_104927944:
    func_0x0001000b44c0(param_1,param_2);
    uStack_a8 = uStack_88;
    puStack_b0 = puStack_90;
    lStack_98 = lStack_78;
    uStack_a0 = uStack_80;
    if (lStack_78 == 0) {
      func_0x000104925d18(&puStack_b0,0x11309c428);
      puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
    else {
      uVar8 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      ppuVar7 = &puStack_d0;
      _swift_dynamicCast(ppuVar7,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar8,6);
      puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (((ulong)ppuVar7 & 1) != 0) {
        _swift_release(PTR___swiftEmptyDictionarySingleton_11034f1d0);
        puVar11 = puStack_d0;
      }
    }
  }
  else {
    _swift_release(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100214a84();
    _swift_release(puVar4);
    func_0x0001000b44c0(param_1,param_2);
    func_0x000104925d18(&puStack_90,0x11309c428);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar11;
  }
LAB_104927a70:
  ___stack_chk_fail();
  if (puRam000000011309d8f8 != (undefined *)0x0) {
    return puRam000000011309d8f8;
  }
  *(undefined1 **)((long)alStack_f0 + lVar1) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_f0 + lVar1 + 8) = FUN_104927a74;
  puVar11 = &UNK_10dd48a38;
  _swift_getWitnessTable(&UNK_10dd48a38,&UNK_1107b85d8);
  puRam000000011309d8f8 = puVar11;
  return puVar11;
}



/* Entry: 104926068; end: 104926383; -[_TtC8FBAEMKit12AEMNetworker startGraphRequestWithGraphPath:parameters:tokenString:HTTPMethod:completion:] */

void FUN_104926068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  __Block_copy(param_7);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  puVar1 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  puVar2 = (undefined *)0x0;
  if (param_5 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    puVar2 = puVar1;
  }
  if (param_6 == 0) {
    param_6 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_1);
  __Block_copy(param_7);
  FUN_104926cbc(param_3,param_2,param_4,param_6,puVar1,param_1,param_7);
  __Block_release(param_7);
  __Block_release(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 104926384; end: 1049263f7;  */

void FUN_104926384(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049263f8; end: 104926453; -[_TtC8FBAEMKit12AEMNetworker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049263f8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_11309d8e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_11309d8e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104926454; end: 104926487;  */

void FUN_104926454(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104926488; end: 1049264c7; -[_TtC8FBAEMKit12AEMNetworker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104926488(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309d8e0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309d8e8 + 8))
  ;
  return;
}



/* Entry: 1049264c8; end: 104926c97;  */

void FUN_1049264c8(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined auStack_1c0 [8];
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  uint uStack_16c;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = 0x11309c5e0;
  uStack_16c = param_3;
  lStack_158 = param_2;
  func_0x0001048db364();
  lVar13 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lStack_1b0 = *(long *)(lVar4 + -8);
  puStack_1b8 = auStack_1c0 + -(lVar13 + 0xfU & 0xfffffffffffffff0) +
                -(*(long *)(lStack_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (ulong *)(param_1 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar18 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  uVar15 = uVar15 + 0x3f >> 6;
  uStack_190 = 0x800000010f21c960;
  uStack_1a8 = 0x800000010f21c980;
  _swift_bridgeObjectRetain(param_1);
  uStack_198 = 2;
  uStack_1a0 = 1;
  puVar11 = auStack_1c0 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  puStack_188 = puVar19;
  lVar13 = 0;
  lStack_178 = param_1;
joined_r0x0001049265fc:
  do {
    lStack_168 = lVar4;
    puStack_160 = puVar11;
    if (uVar18 == 0) {
      uVar18 = uVar15;
      if ((long)uVar15 <= lVar13 + 1) {
        uVar18 = lVar13 + 1;
      }
      lVar16 = uVar18 - 1;
      lVar17 = lVar13;
      do {
        lVar13 = lVar17 + 1;
        if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104926c98);
          (*pcVar3)();
        }
        if ((long)uVar15 <= lVar13) {
          uVar18 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
          goto LAB_10492677c;
        }
        uVar18 = puVar19[lVar13];
        lVar17 = lVar17 + 1;
      } while (uVar18 == 0);
    }
    uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 - 1 & uVar18;
    uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar13 << 6;
    puVar1 = (undefined8 *)(*(long *)(lStack_178 + 0x30) + uVar14 * 0x10);
    uStack_d0 = *puVar1;
    lVar17 = puVar1[1];
    lStack_c8 = lVar17;
    func_0x0001000bb420(*(long *)(lStack_178 + 0x38) + uVar14 * 0x20,&uStack_c0);
    _swift_bridgeObjectRetain(lVar17);
    lVar16 = lVar13;
LAB_10492677c:
    lVar17 = lStack_c8;
    puVar9 = PTR___sypN_11034f1a8;
    lStack_98 = lStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    if (lStack_c8 == 0) {
      _swift_release(lStack_178);
      return;
    }
    uStack_150 = uStack_d0;
    func_0x000100102924(&uStack_90,&uStack_d0);
    func_0x0001000bb420(&uStack_d0,&puStack_f0);
    puVar7 = PTR___sSiN_11034deb0;
    ppuVar6 = &puStack_140;
    _swift_dynamicCast(ppuVar6,&puStack_f0,puVar9 + 8,PTR___sSiN_11034deb0,6);
    lVar13 = lVar16;
    if ((int)ppuVar6 == 0) {
      func_0x0001000bb420(&uStack_d0,&puStack_f0);
      uVar5 = 0;
      func_0x0001002ed07c(0);
      ppuVar6 = &puStack_140;
      _swift_dynamicCast(ppuVar6,&puStack_f0,puVar9 + 8,uVar5,6);
      puVar2 = puStack_140;
      if ((int)ppuVar6 != 0) {
        puVar9 = puStack_140;
        puVar11 = PTR_s_stringValue_112674fe8;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar9;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(puVar2);
        _objc_release(puVar9);
        goto LAB_10492690c;
      }
      func_0x0001000bb420(&uStack_d0,&puStack_f0);
      puVar7 = puVar11;
      _swift_dynamicCast(puVar11,&puStack_f0,puVar9 + 8,lVar4,6);
      lVar16 = lStack_1b0;
      if (((ulong)puVar7 & 1) != 0) {
        (**(code **)(lStack_1b0 + 0x38))(puVar11,0,1,lVar4);
        puVar9 = puStack_1b8;
        puVar7 = puStack_1b8;
        (**(code **)(lVar16 + 0x20))(puStack_1b8,puVar11,lVar4);
        __s10Foundation3URLV14absoluteStringSSvg();
        puVar19 = puStack_188;
        (**(code **)(lVar16 + 8))(puVar9,lVar4);
        goto LAB_10492690c;
      }
      _swift_bridgeObjectRelease(lVar17);
      (**(code **)(lStack_1b0 + 0x38))(puVar11,1,1,lVar4);
      func_0x000104925d18(puVar11,0x11309c5e0);
    }
    else {
      puStack_f0 = puStack_140;
      puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
LAB_10492690c:
      if ((uStack_16c & 1) != 0) {
        puStack_180 = puVar7;
        _swift_weakInit(&puStack_140,lStack_158);
        _swift_bridgeObjectRetain_n(puVar11,2);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar7 = (undefined *)0x0;
        func_0x0001000d182c(0,1,1,puVar9);
        uVar14 = *(ulong *)(puVar7 + 0x10);
        puVar9 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar14) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          func_0x0001000d182c(puVar9,uVar14 + 1,1,puVar7);
        }
        *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
        *(undefined8 *)(puVar9 + uVar14 * 0x10 + 0x20) = 0xd00000000000001e;
        *(undefined8 *)(puVar9 + uVar14 * 0x10 + 0x28) = uStack_1a8;
        puStack_f0 = (undefined *)0x223d656d616e;
        puStack_e8 = (undefined *)0xe600000000000000;
        __sSS6appendyySSF(uStack_150,lVar17);
        __sSS6appendyySSF(0x22,0xe100000000000000);
        puVar2 = puStack_e8;
        puVar7 = puStack_f0;
        uVar14 = *(ulong *)(puVar9 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar14) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          func_0x0001000d182c(puVar10,uVar14 + 1,1,puVar9);
        }
        *(ulong *)(puVar10 + 0x10) = uVar14 + 1;
        *(undefined **)(puVar10 + uVar14 * 0x10 + 0x20) = puVar7;
        *(undefined **)(puVar10 + uVar14 * 0x10 + 0x28) = puVar2;
        uVar5 = 0x11309c618;
        puStack_f0 = puVar10;
        func_0x0001048db364(0x11309c618);
        uVar8 = 0x112d38278;
        func_0x000104927cb4(0x112d38278,FUN_1048e5f1c,PTR___sSayxGSKsMc_11034dcf0);
        puVar9 = (undefined *)0x203b;
        uVar12 = 0xe200000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x203b,0xe200000000000000,uVar5,uVar8);
        _swift_bridgeObjectRelease(puVar10);
        puStack_f0 = puVar9;
        puStack_e8 = (undefined *)uVar12;
        __sSS6appendyySSF(0xa0d,0xe200000000000000);
        puVar9 = puStack_e8;
        func_0x000104935330(puStack_f0,puStack_e8);
        _swift_bridgeObjectRelease(puVar9);
        func_0x000104935330(0xa0d,0xe200000000000000);
        _swift_beginAccess(&puStack_140,auStack_108,0,0);
        ppuVar6 = &puStack_140;
        _swift_weakLoadStrong();
        puVar9 = puStack_180;
        if (ppuVar6 != (undefined **)0x0) {
          func_0x000104935330(puStack_180,puVar11);
          _swift_release(ppuVar6);
        }
        lVar4 = lStack_158;
        func_0x000104935330(0xa0d,0xe200000000000000);
        _swift_bridgeObjectRelease_n(puVar11,2);
        _swift_weakDestroy(&puStack_140);
        puStack_d8 = PTR___sSSN_11034da80;
        puStack_f0 = puVar9;
        puStack_e8 = puVar11;
        _swift_beginAccess(lVar4 + 0x20,auStack_120,0x21,0);
        func_0x000100102924(&puStack_f0,&puStack_140);
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        _swift_isUniquelyReferenced_nonNull_native(uVar5);
        uStack_148 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar4 + 0x20) = 0x8000000000000000;
        func_0x0001001029e8(&puStack_140,uStack_150,lVar17,uVar5);
        _swift_bridgeObjectRelease(lVar17);
        *(undefined8 *)(lVar4 + 0x20) = uStack_148;
        _swift_endAccess(auStack_120);
        func_0x000100183ab8(&uStack_d0);
        puVar11 = puStack_160;
        puVar19 = puStack_188;
        lVar4 = lStack_168;
        goto joined_r0x0001049265fc;
      }
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(lVar17);
    }
    lVar4 = 0x11309d598;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x18) = uStack_198;
    *(undefined8 *)(lVar4 + 0x10) = uStack_1a0;
    puStack_f0 = (undefined *)0x0;
    puStack_e8 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x24);
    _swift_bridgeObjectRelease(puStack_e8);
    puStack_140 = (undefined *)0xd000000000000017;
    uStack_138 = uStack_190;
    func_0x0001000bb420(&uStack_d0,&puStack_f0);
    puVar11 = PTR___sypN_11034f1a8 + 8;
    __sSS10describingSSx_tclufC(&puStack_f0,puVar11);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x697070696b73202c,0xeb000000002e676e);
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x20) = puStack_140;
    *(undefined8 *)(lVar4 + 0x28) = uStack_138;
    __ss5print_9separator10terminatoryypd_S2StF(lVar4,0x20,0xe100000000000000,10,0xe100000000000000)
    ;
    _swift_bridgeObjectRelease(lVar4);
    func_0x000100183ab8(&uStack_d0);
    puVar11 = puStack_160;
    lVar4 = lStack_168;
  } while( true );
}



/* Entry: 104926c98; end: 104926ca3;  */

void FUN_104926c98(long param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long alStack_80 [4];
  
  pcStack_a8 = *(code **)(unaff_x20 + 0x10);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar6 = (long)&uStack_b0 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation8URLErrorVMa();
  lVar10 = *(long *)(lVar1 + -8);
  lVar11 = lVar6 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    puVar3 = param_3;
    _swift_dynamicCastObjCClass(param_3,puVar2);
    if (puVar3 != (undefined1 *)0x0) {
      if (param_4 == (undefined *)0x0) {
        lStack_88 = 0;
        _swift_beginAccess(lVar9 + 0x10,auStack_a0,0,0);
        puVar7 = (undefined1 *)(lVar9 + 0x10);
        _swift_unknownObjectWeakLoadStrong();
        _objc_retain();
        puVar8 = param_3;
        if (puVar7 != (undefined1 *)0x0) {
          _objc_msgSend(puVar3,PTR_s_statusCode_1126725e0);
          func_0x000104927580(param_1,param_2,&lStack_88,puVar3);
          _objc_release();
          lVar1 = lStack_88;
          if (lStack_88 != 0) {
            _swift_errorRetain(lStack_88);
            _swift_bridgeObjectRelease(param_1);
            alStack_80[1] = 0;
            alStack_80[0] = 0;
            alStack_80[3] = 0;
            alStack_80[2] = 0;
            _swift_errorRetain(lVar1);
            (*pcStack_a8)(alStack_80,lVar1);
            _objc_release(param_3);
            _swift_errorRelease(lVar1);
            _swift_errorRelease(lVar1);
            func_0x000104925d18(alStack_80,0x11309c428);
            _swift_errorRelease(lVar1);
            return;
          }
          puVar8 = puVar7;
          if (param_1 != 0) {
            uVar5 = 0x11309c420;
            func_0x0001048db364();
            alStack_80[0] = param_1;
            alStack_80[3] = uVar5;
            (*pcStack_a8)(alStack_80,0);
            _objc_release(param_3);
            goto LAB_104926034;
          }
        }
        func_0x000104925cd8();
        alStack_80[1] = 0;
        alStack_80[0] = 0;
        alStack_80[3] = 0;
        alStack_80[2] = 0;
        param_4 = &UNK_1107b85d8;
        _swift_allocError(&UNK_1107b85d8,puVar8,0,0);
        *puVar8 = 2;
        (*pcStack_a8)(alStack_80,param_4);
        _objc_release(param_3);
      }
      else {
        alStack_80[1] = 0;
        alStack_80[0] = 0;
        alStack_80[3] = 0;
        alStack_80[2] = 0;
        _objc_retain(param_3);
        _swift_errorRetain(param_4);
        (*pcStack_a8)(alStack_80,param_4);
        _objc_release(param_3);
      }
      _swift_errorRelease(param_4);
      goto LAB_104926034;
    }
  }
  alStack_80[1] = 0;
  alStack_80[0] = 0;
  alStack_80[3] = 0;
  alStack_80[2] = 0;
  __s10Foundation8URLErrorV4CodeV17badServerResponseAEvgZ(lVar6);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000101f20194();
  _swift_release(puVar2);
  uVar5 = 0x112e40888;
  func_0x000104927cb4(0x112e40888,PTR___s10Foundation8URLErrorVMa_110350ee0,
                      PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_110350ed8);
  __s10Foundation21_BridgedStoredNSErrorPAAE_8userInfox4CodeQz_SDySSypGtcfC
            (lVar11,lVar6,puVar4,lVar1,uVar5);
  __s10Foundation8URLErrorV8_nsErrorSo7NSErrorCvg();
  (**(code **)(lVar10 + 8))(lVar11,lVar1);
  (*pcStack_a8)(alStack_80,lVar6);
  _objc_release(lVar6);
LAB_104926034:
  func_0x000104925d18(alStack_80,0x11309c428);
  return;
}



/* Entry: 104926ca4; end: 104926cbb;  */

void FUN_104926ca4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 104926cbc; end: 104927a73;  */

void FUN_104926cbc(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_140 [8];
  long lStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_b8;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar2 = 0;
  uStack_130 = param_6;
  uStack_128 = param_3;
  lStack_120 = param_5;
  lStack_100 = param_4;
  __s10Foundation10URLRequestVMa();
  lStack_118 = *(long *)(lVar2 + -8);
  puVar17 = auStack_140 + -(*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x11309c5e0;
  lStack_110 = lVar2;
  func_0x0001048db364();
  puVar18 = puVar17 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar3 + -8);
  uVar13 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = (long)puVar18 - uVar13;
  lVar19 = lVar2 - uVar13;
  puVar4 = &UNK_1107b85f8;
  _swift_allocObject(&UNK_1107b85f8,0x18,7);
  *(long *)(puVar4 + 0x10) = param_7;
  puStack_f0 = (undefined *)0xd000000000000021;
  uStack_e8 = 0x800000010f21c830;
  lStack_108 = param_7;
  puStack_f8 = puVar4;
  __Block_copy(param_7);
  __sSS6appendyySSF(param_1,param_2);
  uVar14 = uStack_e8;
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar18,puStack_f0,uStack_e8);
  _swift_bridgeObjectRelease(uVar14);
  puVar5 = puVar18;
  (**(code **)(lVar15 + 0x30))(puVar18,1,lVar3);
  if ((int)puVar5 == 1) {
    func_0x000104925d18(puVar18,0x11309c5e0);
    func_0x000104925cd8();
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    puStack_d8 = (undefined *)0x0;
    puStack_e0 = (undefined *)0x0;
    puVar4 = &UNK_1107b85d8;
    _swift_allocError(&UNK_1107b85d8,puVar18,0,0);
    *puVar18 = 1;
    func_0x000104927c70(&puStack_f0,auStack_88,0x11309c428);
    if (lStack_70 == 0) {
      lVar3 = 0;
    }
    else {
      puVar5 = auStack_88;
      func_0x0001006732c8(puVar5,lStack_70);
      lVar2 = *(long *)(lStack_70 + -8);
      lVar19 = lVar19 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar2 + 0x10))(lVar19,puVar5,lStack_70);
      lVar3 = lVar19;
      __ss27_bridgeAnythingToObjectiveCyyXlxlF(lVar19,lStack_70);
      (**(code **)(lVar2 + 8))(lVar19,lStack_70);
      func_0x000100183ab8(auStack_88);
    }
    puVar11 = puVar4;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(puVar4);
    (**(code **)(lStack_108 + 0x10))(lStack_108,lVar3,puVar11);
    _swift_unknownObjectRelease(lVar3);
    _objc_release(puVar11);
    _swift_errorRelease(puVar4);
    func_0x000104925d18(&puStack_f0,0x11309c428);
    puVar12 = puStack_f8;
    goto LAB_10492755c;
  }
  (**(code **)(lVar15 + 0x20))(lVar19,puVar18,lVar3);
  lStack_138 = lVar15;
  (**(code **)(lVar15 + 0x10))(lVar2,lVar19,lVar3);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (puVar17,0x404e000000000000,lVar2,0);
  lVar2 = lStack_120;
  _swift_bridgeObjectRetain(lStack_120);
  lVar15 = lVar2;
  __s10Foundation10URLRequestV10httpMethodSSSgvs(lStack_100,lVar2);
  uVar14 = uStack_130;
  FUN_10492537c();
  __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF();
  _swift_bridgeObjectRelease(lVar15);
  __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
            (0xd000000000000010,0x800000010f21c860,0x2d746e65746e6f43,0xec00000065707954);
  __s10Foundation10URLRequestV23httpShouldHandleCookiesSbvs(0);
  lVar15 = 0;
  func_0x0001049355fc();
  _swift_initStackObject();
  *(undefined8 *)(lVar15 + 0x18) = 0xc000000000000000;
  *(undefined8 *)(lVar15 + 0x10) = 0;
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar4 = PTR___sSSN_11034da80;
  *(undefined **)(lVar15 + 0x20) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_d8 = puVar4;
  puStack_f0 = (undefined *)0x6e6f736a;
  uStack_e8 = 0xe400000000000000;
  func_0x000100102924(&puStack_f0,auStack_88);
  _swift_retain(puVar11);
  uVar13 = uStack_128;
  uVar6 = uStack_128;
  _swift_bridgeObjectRetain(uStack_128);
  _swift_isUniquelyReferenced_nonNull_native();
  uStack_b8 = uVar13;
  func_0x0001001029e8(auStack_88,0x74616d726f66,0xe600000000000000,uVar6);
  uVar13 = uStack_b8;
  puStack_d8 = puVar4;
  puStack_f0 = (undefined *)0x736f69;
  uStack_e8 = 0xe300000000000000;
  func_0x000100102924(&puStack_f0,auStack_88);
  uVar6 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native(uVar13);
  uStack_b8 = uVar13;
  func_0x0001001029e8(auStack_88,0x6b6473,0xe300000000000000,uVar6);
  uVar13 = uStack_b8;
  puStack_d8 = puVar4;
  puStack_f0 = (undefined *)0x65736c6166;
  uStack_e8 = 0xe500000000000000;
  func_0x000100102924(&puStack_f0,auStack_88);
  uVar6 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native(uVar13);
  uStack_b8 = uVar13;
  func_0x0001001029e8(auStack_88,0x5f6564756c636e69,0xef73726564616568,uVar6);
  uVar13 = uStack_b8;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else if ((lStack_100 == 0x54534f50) && (lVar2 == -0x1c00000000000000)) {
    uVar1 = 1;
  }
  else {
    lVar16 = lStack_100;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lStack_100,lVar2,0x54534f50,0xe400000000000000,0);
    uVar1 = (uint)lVar16;
  }
  lVar2 = lVar15;
  FUN_1049264c8(uVar13,lVar15,uVar1 & 1);
  _swift_release();
  __s10Foundation10URLRequestV10httpMethodSSSgvg();
  if (lVar2 == 0) {
LAB_10492726c:
    func_0x000104934f60();
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
  }
  else {
    if ((uVar13 == 0x54534f50) && (lVar2 == -0x1c00000000000000)) {
      _swift_bridgeObjectRelease(0xe400000000000000);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(lVar2);
      if ((uVar13 & 1) == 0) goto LAB_10492726c;
    }
    FUN_104934e58();
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
    __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
              (0x70697a67,0xe400000000000000,0xd000000000000010,0x800000010f21c880);
  }
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined1 *)0x0) {
    func_0x000104925cd8();
    uStack_e8 = 0;
    puStack_f0 = (undefined *)0x0;
    puStack_d8 = (undefined *)0x0;
    puStack_e0 = (undefined *)0x0;
    puVar11 = &UNK_1107b85d8;
    _swift_allocError(&UNK_1107b85d8,puVar4,0,0);
    *puVar4 = 0;
    func_0x000104927c70(&puStack_f0,auStack_88,0x11309c428);
    if (lStack_70 == 0) {
      lVar2 = 0;
    }
    else {
      puVar5 = auStack_88;
      func_0x0001006732c8(puVar5,lStack_70);
      lVar20 = *(long *)(lStack_70 + -8);
      lVar16 = lVar19 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar20 + 0x10))(lVar16,puVar5,lStack_70);
      lVar2 = lVar16;
      __ss27_bridgeAnythingToObjectiveCyyXlxlF(lVar16,lStack_70);
      (**(code **)(lVar20 + 8))(lVar16,lStack_70);
      func_0x000100183ab8(auStack_88);
    }
    puVar4 = puVar11;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(puVar11);
    (**(code **)(lStack_108 + 0x10))(lStack_108,lVar2,puVar4);
    _swift_unknownObjectRelease(lVar2);
    _objc_release(puVar4);
    _swift_errorRelease(puVar11);
    _swift_setDeallocating(lVar15);
    func_0x00010006c090(*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + 0x20));
    func_0x000104925d18(&puStack_f0,0x11309c428);
    (**(code **)(lStack_118 + 8))(puVar17,lStack_110);
    (**(code **)(lStack_138 + 8))(lVar19,lVar3);
    puVar12 = puStack_f8;
  }
  else {
    puVar7 = PTR_PTR_1126add80;
    _objc_allocWithZone(PTR_PTR_1126add80);
    _objc_msgSend();
    puVar8 = puVar7;
    __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
    puVar11 = &UNK_1107b84d8;
    _swift_allocObject(&UNK_1107b84d8,0x18,7);
    _swift_unknownObjectWeakInit(puVar11 + 0x10,uVar14);
    puVar9 = &UNK_1107b8620;
    _swift_allocObject(&UNK_1107b8620,0x28,7);
    puVar12 = puStack_f8;
    *(code **)(puVar9 + 0x10) = FUN_104927c3c;
    *(undefined **)(puVar9 + 0x18) = puStack_f8;
    *(undefined **)(puVar9 + 0x20) = puVar11;
    pcStack_d0 = FUN_104927cf8;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0x42000000;
    puStack_e0 = &UNK_1012d0a0c;
    puStack_d8 = &UNK_1107b8638;
    ppuVar10 = &puStack_f0;
    puStack_c8 = puVar9;
    __Block_copy(ppuVar10);
    puVar11 = puStack_c8;
    _swift_retain(puVar12);
    _swift_release(puVar11);
    _objc_msgSend(puVar7,PTR_s_executeURLRequest_completionHand_1125c45b8,puVar8,ppuVar10);
    __Block_release(ppuVar10);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _swift_setDeallocating(lVar15);
    func_0x00010006c090(*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x18));
    uVar14 = *(undefined8 *)(lVar15 + 0x20);
    _objc_release(puVar4);
    _swift_bridgeObjectRelease(uVar14);
    (**(code **)(lStack_118 + 8))(puVar17,lStack_110);
    (**(code **)(lStack_138 + 8))(lVar19,lVar3);
  }
LAB_10492755c:
  _swift_release(puVar12);
  return;
}



/* Entry: 104927a74; end: 104927c3b;  */

void FUN_104927a74(void)

{
  undefined *puVar1;
  
  if (puRam000000011309d8f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd48a38;
  _swift_getWitnessTable(&UNK_10dd48a38,&UNK_1107b85d8);
  puRam000000011309d8f8 = puVar1;
  return;
}



/* Entry: 104927c3c; end: 104927c43;  */

void FUN_104927c3c(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000103be02d8(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  if (param_2 != 0) {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2,param_2);
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 104927c44; end: 104927cf7;  */

void FUN_104927c44(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104927cf8; end: 104927cfb;  */

void FUN_104927cf8(long param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long alStack_80 [4];
  
  pcStack_a8 = *(code **)(unaff_x20 + 0x10);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __s10Foundation8URLErrorV4CodeVMa();
  lVar6 = (long)&uStack_b0 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation8URLErrorVMa();
  lVar10 = *(long *)(lVar1 + -8);
  lVar11 = lVar6 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    puVar3 = param_3;
    _swift_dynamicCastObjCClass(param_3,puVar2);
    if (puVar3 != (undefined1 *)0x0) {
      if (param_4 == (undefined *)0x0) {
        lStack_88 = 0;
        _swift_beginAccess(lVar9 + 0x10,auStack_a0,0,0);
        puVar7 = (undefined1 *)(lVar9 + 0x10);
        _swift_unknownObjectWeakLoadStrong();
        _objc_retain();
        puVar8 = param_3;
        if (puVar7 != (undefined1 *)0x0) {
          _objc_msgSend(puVar3,PTR_s_statusCode_1126725e0);
          func_0x000104927580(param_1,param_2,&lStack_88,puVar3);
          _objc_release();
          lVar1 = lStack_88;
          if (lStack_88 != 0) {
            _swift_errorRetain(lStack_88);
            _swift_bridgeObjectRelease(param_1);
            alStack_80[1] = 0;
            alStack_80[0] = 0;
            alStack_80[3] = 0;
            alStack_80[2] = 0;
            _swift_errorRetain(lVar1);
            (*pcStack_a8)(alStack_80,lVar1);
            _objc_release(param_3);
            _swift_errorRelease(lVar1);
            _swift_errorRelease(lVar1);
            func_0x000104925d18(alStack_80,0x11309c428);
            _swift_errorRelease(lVar1);
            return;
          }
          puVar8 = puVar7;
          if (param_1 != 0) {
            uVar5 = 0x11309c420;
            func_0x0001048db364();
            alStack_80[0] = param_1;
            alStack_80[3] = uVar5;
            (*pcStack_a8)(alStack_80,0);
            _objc_release(param_3);
            goto LAB_104926034;
          }
        }
        func_0x000104925cd8();
        alStack_80[1] = 0;
        alStack_80[0] = 0;
        alStack_80[3] = 0;
        alStack_80[2] = 0;
        param_4 = &UNK_1107b85d8;
        _swift_allocError(&UNK_1107b85d8,puVar8,0,0);
        *puVar8 = 2;
        (*pcStack_a8)(alStack_80,param_4);
        _objc_release(param_3);
      }
      else {
        alStack_80[1] = 0;
        alStack_80[0] = 0;
        alStack_80[3] = 0;
        alStack_80[2] = 0;
        _objc_retain(param_3);
        _swift_errorRetain(param_4);
        (*pcStack_a8)(alStack_80,param_4);
        _objc_release(param_3);
      }
      _swift_errorRelease(param_4);
      goto LAB_104926034;
    }
  }
  alStack_80[1] = 0;
  alStack_80[0] = 0;
  alStack_80[3] = 0;
  alStack_80[2] = 0;
  __s10Foundation8URLErrorV4CodeV17badServerResponseAEvgZ(lVar6);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000101f20194();
  _swift_release(puVar2);
  uVar5 = 0x112e40888;
  func_0x000104927cb4(0x112e40888,PTR___s10Foundation8URLErrorVMa_110350ee0,
                      PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_110350ed8);
  __s10Foundation21_BridgedStoredNSErrorPAAE_8userInfox4CodeQz_SDySSypGtcfC
            (lVar11,lVar6,puVar4,lVar1,uVar5);
  __s10Foundation8URLErrorV8_nsErrorSo7NSErrorCvg();
  (**(code **)(lVar10 + 8))(lVar11,lVar1);
  (*pcStack_a8)(alStack_80,lVar6);
  _objc_release(lVar6);
LAB_104926034:
  func_0x000104925d18(alStack_80,0x11309c428);
  return;
}



/* Entry: 104927cfc; end: 104927cff;  */

void FUN_104927cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104927d00; end: 104927ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104927d00(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined *puStack_80;
  long *plStack_70;
  ulong uStack_68;
  
  uVar14 = *param_1;
  uVar15 = uVar14;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)uVar15 == 0) || ((long)uVar14 < 0)) || ((uVar14 >> 0x3e & 1) != 0)) {
    FUN_10492fdd8(uVar14,FUN_104915284);
  }
  uVar7 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  plVar1 = (long *)((uVar14 & 0xffffffffffffff8) + 0x20);
  uVar15 = uVar7;
  plStack_70 = plVar1;
  uStack_68 = uVar7;
  __ss22_minimumMergeRunLengthyS2iF();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)uVar15 < (long)uVar7) {
    puVar12 = (undefined *)(uVar7 >> 1);
    if (uVar7 < 2) {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    else {
      uVar5 = 0;
      func_0x00010491bee4(0);
      puVar6 = puVar12;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar12,uVar5);
      *(undefined **)(((ulong)puVar6 & 0xfffffffffffff8) + 0x10) = puVar12;
    }
    lStack_88 = ((ulong)puVar6 & 0xffffffffffffff8) + 0x20;
    puStack_80 = puVar12;
    FUN_10492f324(&lStack_88,auStack_a0,&plStack_70,uVar15);
    *(undefined8 *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar6);
  }
  else if (1 < uVar7) {
    lVar9 = -1;
    uVar15 = 1;
    plVar13 = plVar1;
    do {
      lVar10 = plVar1[uVar15];
      lVar11 = lVar9;
      plVar16 = plVar13;
      do {
        lVar2 = _DAT_11309d710;
        lVar8 = *plVar16;
        _swift_beginAccess(lVar10 + _DAT_11309d710,&lStack_88,0,0);
        lVar3 = _DAT_11309d710;
        lVar10 = *(long *)(lVar10 + lVar2);
        _swift_beginAccess(lVar8 + _DAT_11309d710,auStack_a0,0,0);
        if (*(long *)(lVar8 + lVar3) <= lVar10) break;
        lVar2 = *plVar16;
        lVar10 = plVar16[1];
        *plVar16 = lVar10;
        plVar16[1] = lVar2;
        bVar4 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        plVar16 = plVar16 + -1;
      } while (bVar4);
      uVar15 = uVar15 + 1;
      plVar13 = plVar13 + 1;
      lVar9 = lVar9 + -1;
    } while (uVar15 != uVar7);
  }
  *param_1 = uVar14;
  return;
}



/* Entry: 104927ed0; end: 104927ee7;  */

undefined8 FUN_104927ed0(void)

{
  return 0x113815730;
}



/* Entry: 104927ee8; end: 104927ef3; +[FBAEMReporter networker] */

void FUN_104927ee8(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815730,auStack_38,0,0);
  _swift_unknownObjectRetain(uRam0000000113815730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104927ef4; end: 104927eff;  */

void FUN_104927ef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815730,auStack_38,1,0);
  uVar1 = uRam0000000113815730;
  uRam0000000113815730 = param_1;
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104927f00; end: 104927f0b; +[FBAEMReporter setNetworker:] */

void FUN_104927f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815730,auStack_48,1,0);
  uVar1 = uRam0000000113815730;
  uRam0000000113815730 = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104927f0c; end: 104927f67;  */

undefined1  [16] FUN_104927f0c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815730,param_1,0x21,0);
  auVar1._8_8_ = 0x113815730;
  auVar1._0_8_ = FUN_104934d8c;
  return auVar1;
}



/* Entry: 104927f68; end: 104927f77; +[FBAEMReporter appID] */

void FUN_104927f68(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815738,auStack_38,0,0);
  lVar1 = lRam0000000113815740;
  uVar2 = uRam0000000113815738;
  if (lRam0000000113815740 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lRam0000000113815740);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104927f78; end: 104927f87;  */

void FUN_104927f78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815738,auStack_48,1,0);
  uVar1 = uRam0000000113815740;
  uRam0000000113815738 = param_1;
  uRam0000000113815740 = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104927f88; end: 104927f97; +[FBAEMReporter setAppID:] */

void FUN_104927f88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_beginAccess(0x113815738,auStack_48,1,0);
  uVar1 = uRam0000000113815740;
  lRam0000000113815738 = param_3;
  uRam0000000113815740 = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104927f98; end: 104927ff7;  */

undefined1  [16] FUN_104927f98(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815738,param_1,0x21,0);
  auVar1._8_8_ = 0x113815738;
  auVar1._0_8_ = 0x104934d90;
  return auVar1;
}



/* Entry: 104927ff8; end: 10492801b; +[FBAEMReporter nullAppID] */

void FUN_104927ff8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x296c6c756e28,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10492801c; end: 104928037;  */

undefined8 FUN_10492801c(void)

{
  return 0x113815748;
}



/* Entry: 104928038; end: 104928047; +[FBAEMReporter analyticsAppID] */

void FUN_104928038(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815748,auStack_38,0,0);
  lVar1 = lRam0000000113815750;
  uVar2 = uRam0000000113815748;
  if (lRam0000000113815750 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lRam0000000113815750);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104928048; end: 104928057;  */

void FUN_104928048(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815748,auStack_48,1,0);
  uVar1 = uRam0000000113815750;
  uRam0000000113815748 = param_1;
  uRam0000000113815750 = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104928058; end: 104928067; +[FBAEMReporter setAnalyticsAppID:] */

void FUN_104928058(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_beginAccess(0x113815748,auStack_48,1,0);
  uVar1 = uRam0000000113815750;
  lRam0000000113815748 = param_3;
  uRam0000000113815750 = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104928068; end: 1049280bf;  */

undefined1  [16] FUN_104928068(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815748,param_1,0x21,0);
  auVar1._8_8_ = 0x113815748;
  auVar1._0_8_ = 0x104934db0;
  return auVar1;
}



/* Entry: 1049280c0; end: 1049280cb; +[FBAEMReporter reporter] */

void FUN_1049280c0(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815758,auStack_38,0,0);
  _swift_unknownObjectRetain(uRam0000000113815758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049280cc; end: 1049280d7;  */

void FUN_1049280cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815758,auStack_38,1,0);
  uVar1 = uRam0000000113815758;
  uRam0000000113815758 = param_1;
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 1049280d8; end: 1049280e3; +[FBAEMReporter setReporter:] */

void FUN_1049280d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815758,auStack_48,1,0);
  uVar1 = uRam0000000113815758;
  uRam0000000113815758 = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 1049280e4; end: 104928177;  */

undefined1  [16] FUN_1049280e4(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815758,param_1,0x21,0);
  auVar1._8_8_ = 0x113815758;
  auVar1._0_8_ = 0x104934d94;
  return auVar1;
}



/* Entry: 104928178; end: 104928183; +[FBAEMReporter dataStore] */

void FUN_104928178(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815760,auStack_38,0,0);
  _swift_unknownObjectRetain(uRam0000000113815760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104928184; end: 1049281c3;  */

void FUN_104928184(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3,auStack_38,0,0);
  _swift_unknownObjectRetain(*param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049281c4; end: 104928217;  */

void FUN_1049281c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815760,auStack_38,1,0);
  uVar1 = uRam0000000113815760;
  uRam0000000113815760 = param_1;
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104928218; end: 104928223; +[FBAEMReporter setDataStore:] */

void FUN_104928218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815760,auStack_48,1,0);
  uVar1 = uRam0000000113815760;
  uRam0000000113815760 = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104928224; end: 10492827f;  */

void FUN_104928224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_4,auStack_48,1,0);
  uVar1 = *param_4;
  *param_4 = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 104928280; end: 1049282bf;  */

undefined1  [16] FUN_104928280(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815760,param_1,0x21,0);
  auVar1._8_8_ = 0x113815760;
  auVar1._0_8_ = 0x104934d98;
  return auVar1;
}



/* Entry: 1049282c0; end: 10492831b;  */

void FUN_1049282c0(undefined8 *param_1)

{
  undefined8 *in_x4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(in_x4,auStack_48,1,0);
  uVar2 = *in_x4;
  *in_x4 = uVar1;
  _swift_unknownObjectRetain(uVar1);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 10492831c; end: 104928367;  */

undefined8 FUN_10492831c(void)

{
  return 0x113815768;
}



/* Entry: 104928368; end: 1049283a7; +[FBAEMReporter isAEMReportEnabled] */

undefined1 FUN_104928368(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815768,auStack_38,0,0);
  return uRam0000000113815768;
}



/* Entry: 1049283a8; end: 1049283eb;  */

void FUN_1049283a8(undefined1 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815768,auStack_38,1,0);
  uRam0000000113815768 = param_1;
  return;
}



/* Entry: 1049283ec; end: 10492842f; +[FBAEMReporter setIsAEMReportEnabled:] */

void FUN_1049283ec(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815768,auStack_38,1,0);
  uRam0000000113815768 = param_3;
  return;
}



/* Entry: 104928430; end: 1049284bb;  */

undefined1  [16] FUN_104928430(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815768,param_1,0x21,0);
  auVar1._8_8_ = 0x113815768;
  auVar1._0_8_ = 0x104934d9c;
  return auVar1;
}



/* Entry: 1049284bc; end: 1049284fb; +[FBAEMReporter isLoadingConfiguration] */

undefined1 FUN_1049284bc(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815769,auStack_38,0,0);
  return uRam0000000113815769;
}



/* Entry: 1049284fc; end: 10492853f;  */

void FUN_1049284fc(undefined1 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815769,auStack_38,1,0);
  uRam0000000113815769 = param_1;
  return;
}



/* Entry: 104928540; end: 104928583; +[FBAEMReporter setIsLoadingConfiguration:] */

void FUN_104928540(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815769,auStack_38,1,0);
  uRam0000000113815769 = param_3;
  return;
}



/* Entry: 104928584; end: 10492860f;  */

undefined1  [16] FUN_104928584(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815769,param_1,0x21,0);
  auVar1._8_8_ = 0x113815769;
  auVar1._0_8_ = 0x104934da0;
  return auVar1;
}



/* Entry: 104928610; end: 10492864f; +[FBAEMReporter isConversionFilteringEnabled] */

undefined1 FUN_104928610(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11381576a,auStack_38,0,0);
  return uRam000000011381576a;
}



/* Entry: 104928650; end: 10492871f;  */

void FUN_104928650(undefined1 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11381576a,auStack_38,1,0);
  uRam000000011381576a = param_1;
  return;
}



/* Entry: 104928720; end: 10492875f; +[FBAEMReporter isCatalogMatchingEnabled] */

undefined1 FUN_104928720(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11381576b,auStack_38,0,0);
  return uRam000000011381576b;
}



/* Entry: 104928760; end: 10492882f;  */

void FUN_104928760(undefined1 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11381576b,auStack_38,1,0);
  uRam000000011381576b = param_1;
  return;
}



/* Entry: 104928830; end: 10492886f; +[FBAEMReporter isAdvertiserRuleMatchInServerEnabled] */

undefined1 FUN_104928830(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11381576c,auStack_38,0,0);
  return uRam000000011381576c;
}



/* Entry: 104928870; end: 1049288f3;  */

void FUN_104928870(undefined1 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11381576c,auStack_38,1,0);
  uRam000000011381576c = param_1;
  return;
}



/* Entry: 1049288f4; end: 104928aa3;  */

void FUN_1049288f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar11 = *(long *)(lVar3 + -8);
  lVar9 = (long)&uStack_70 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  lVar10 = lVar9 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar5 = lVar10 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  func_0x000104934c68(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_70 = uVar6;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar5);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4ac68;
  func_0x000104934ca8(0x112d4ac68,puVar2,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  _swift_retain(puVar1);
  uVar7 = 0x11309d9b0;
  func_0x0001048db364(0x11309d9b0);
  uVar8 = 0x112d4ac78;
  func_0x000104931470(0x112d4ac78,0x11309d9b8,puVar2,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&puStack_68,uVar7,uVar8,lVar4,uVar6);
  (**(code **)(lVar11 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar3);
  uVar6 = 0xd000000000000028;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000028,0x800000010f21d050,lVar5,lVar10,lVar9,0);
  uRam0000000113815770 = uVar6;
  return;
}



/* Entry: 104928aa4; end: 104928b4b;  */

undefined8 FUN_104928aa4(void)

{
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  return 0x113815770;
}



/* Entry: 104928b4c; end: 104928bb7; +[FBAEMReporter serialQueue] */

void FUN_104928b4c(void)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(uRam0000000113815770);
  return;
}



/* Entry: 104928bb8; end: 104928c2b;  */

void FUN_104928bb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_38,1,0);
  uVar1 = uRam0000000113815770;
  uRam0000000113815770 = param_1;
  _objc_release(uVar1);
  return;
}



/* Entry: 104928c2c; end: 104928ca7; +[FBAEMReporter setSerialQueue:] */

void FUN_104928c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = lRam000000011309d028;
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_38,1,0);
  uVar2 = uRam0000000113815770;
  uRam0000000113815770 = param_3;
  _objc_release(uVar2);
  return;
}



/* Entry: 104928ca8; end: 104928d13;  */

undefined1  [16] FUN_104928ca8(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,param_1,0x21,0);
  auVar1._8_8_ = 0x113815770;
  auVar1._0_8_ = 0x104934db4;
  return auVar1;
}



/* Entry: 104928d14; end: 104928dff;  */

void FUN_104928d14(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d028 != -1) {
    _swift_once(0x11309d028,FUN_1049288f4);
  }
  _swift_beginAccess(0x113815770,auStack_38,0,0);
  *param_1 = uRam0000000113815770;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104928e00; end: 104928e6b;  */

undefined8 FUN_104928e00(void)

{
  return 0x113815778;
}



/* Entry: 104928e6c; end: 104928e7b; +[FBAEMReporter reportFile] */

void FUN_104928e6c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815778,auStack_38,0,0);
  lVar1 = lRam0000000113815780;
  uVar2 = uRam0000000113815778;
  if (lRam0000000113815780 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lRam0000000113815780);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104928e7c; end: 104928eef;  */

void FUN_104928e7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3,auStack_38,0,0);
  lVar1 = *param_4;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104928ef0; end: 104928f5b;  */

void FUN_104928ef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x113815778,auStack_48,1,0);
  uVar1 = uRam0000000113815780;
  uRam0000000113815778 = param_1;
  uRam0000000113815780 = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104928f5c; end: 104928f6b; +[FBAEMReporter setReportFile:] */

void FUN_104928f5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_beginAccess(0x113815778,auStack_48,1,0);
  uVar1 = uRam0000000113815780;
  lRam0000000113815778 = param_3;
  uRam0000000113815780 = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104928f6c; end: 104928fdf;  */

void FUN_104928f6c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_beginAccess(param_4,auStack_48,1,0);
  uVar1 = *param_5;
  *param_4 = param_3;
  *param_5 = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104928fe0; end: 104929023;  */

undefined1  [16] FUN_104928fe0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x113815778,param_1,0x21,0);
  auVar1._8_8_ = 0x113815778;
  auVar1._0_8_ = 0x104929020;
  return auVar1;
}



/* Entry: 104929024; end: 10492908f;  */

void FUN_104929024(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_x4;
  undefined8 *in_x5;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_beginAccess(in_x4,auStack_58,1,0);
  uVar3 = *in_x5;
  *in_x4 = uVar1;
  *in_x5 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 104929090; end: 1049290cf;  */

void FUN_104929090(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000104915df0();
  _swift_release(puVar1);
  puRam0000000113815788 = puVar2;
  return;
}



/* Entry: 1049290d0; end: 10492912b;  */

undefined8 FUN_1049290d0(void)

{
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  return 0x113815788;
}



/* Entry: 10492912c; end: 1049291d3; +[FBAEMReporter configurations] */

void FUN_10492912c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_38,0,0);
  uVar1 = uRam0000000113815788;
  _swift_bridgeObjectRetain(uRam0000000113815788);
  uVar2 = 0x11309d950;
  func_0x0001048db364(0x11309d950);
  uVar3 = uVar1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049291d4; end: 1049291ef;  */

void FUN_1049291d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_38,1,0);
  uVar1 = uRam0000000113815788;
  uRam0000000113815788 = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 1049291f0; end: 10492928f; +[FBAEMReporter setConfigurations:] */

void FUN_1049291f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = 0x11309d950;
  func_0x0001048db364(0x11309d950);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,auStack_38,1,0);
  uVar1 = uRam0000000113815788;
  uRam0000000113815788 = param_3;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 104929290; end: 1049292fb;  */

undefined1  [16] FUN_104929290(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  if (lRam000000011309d030 != -1) {
    _swift_once(0x11309d030,FUN_104929090);
  }
  _swift_beginAccess(0x113815788,param_1,0x21,0);
  auVar1._8_8_ = 0x113815788;
  auVar1._0_8_ = 0x104934db8;
  return auVar1;
}



/* Entry: 1049292fc; end: 10492930f;  */

void FUN_1049292fc(void)

{
  puRam0000000113815790 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 104929310; end: 10492936b;  */

undefined8 FUN_104929310(void)

{
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  return 0x113815790;
}



/* Entry: 10492936c; end: 1049293ff; +[FBAEMReporter invocations] */

void FUN_10492936c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_38,0,0);
  uVar1 = uRam0000000113815790;
  FUN_1049246d8(0);
  uVar2 = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104929400; end: 10492941b;  */

void FUN_104929400(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_38,1,0);
  uVar1 = uRam0000000113815790;
  uRam0000000113815790 = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 10492941c; end: 1049294a7; +[FBAEMReporter setInvocations:] */

void FUN_10492941c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = 0;
  FUN_1049246d8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,auStack_38,1,0);
  uVar1 = uRam0000000113815790;
  uRam0000000113815790 = param_3;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 1049294a8; end: 104929513;  */

undefined1  [16] FUN_1049294a8(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  if (lRam000000011309d038 != -1) {
    _swift_once(0x11309d038,FUN_1049292fc);
  }
  _swift_beginAccess(0x113815790,param_1,0x21,0);
  auVar1._8_8_ = 0x113815790;
  auVar1._0_8_ = 0x104934dbc;
  return auVar1;
}



/* Entry: 104929514; end: 10492951f;  */

void FUN_104929514(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x113815798);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000104929694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  return;
}



/* Entry: 104929520; end: 104929557;  */

undefined8 FUN_104929520(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (lRam000000011309d040 != -1) {
    _swift_once(0x11309d040,FUN_104929514);
  }
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  uVar2 = 0x113815798;
  if ((*(byte *)(*(long *)(lVar1 + -8) + 0x52) >> 1 & 1) != 0) {
    uVar2 = uRam0000000113815798;
  }
  return uVar2;
}



/* Entry: 104929558; end: 104929573; +[FBAEMReporter configRefreshTimestamp] */

void FUN_104929558(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [32];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = auStack_60 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (lRam000000011309d040 != -1) {
    _swift_once(0x11309d040,FUN_104929514);
  }
  func_0x000100028790();
  _swift_beginAccess();
  FUN_104934c24(lVar1,puVar4,0x11309c628);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104929574; end: 10492958f;  */

void FUN_104929574(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (lRam000000011309d040 != -1) {
    _swift_once(0x11309d040,FUN_104929514);
  }
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028790();
  _swift_beginAccess();
  func_0x000100ed9c6c(param_1,uVar1);
  _swift_endAccess(auStack_48);
  FUN_1049349e8(param_1,0x11309c628);
  return;
}



/* Entry: 104929590; end: 1049295ab; +[FBAEMReporter setConfigRefreshTimestamp:] */

void FUN_104929590(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar3 = auStack_60 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar2 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar2 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_3 == 0,1);
  if (lRam000000011309d040 != -1) {
    _swift_once(0x11309d040,FUN_104929514);
  }
  func_0x000100028790(lVar1,0x113815798);
  _swift_beginAccess();
  func_0x000100ed9c6c(puVar3,lVar1);
  _swift_endAccess(auStack_58);
  FUN_1049349e8(puVar3,0x11309c628);
  return;
}



/* Entry: 1049295ac; end: 104929627;  */

undefined1  [16] FUN_1049295ac(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (lRam000000011309d040 != -1) {
    _swift_once(0x11309d040,FUN_104929514);
  }
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028790();
  _swift_beginAccess();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 0x104934dc0;
  return auVar2;
}



/* Entry: 104929628; end: 104929633;  */

void FUN_104929628(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x1138157b0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000104929694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  return;
}



/* Entry: 104929634; end: 104929697;  */

void FUN_104929634(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028750();
  func_0x000100028790(uVar1,param_2);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000104929694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  return;
}



/* Entry: 104929698; end: 104929797;  */

undefined8 FUN_104929698(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  uVar2 = 0x1138157b0;
  if ((*(byte *)(*(long *)(lVar1 + -8) + 0x52) >> 1 & 1) != 0) {
    uVar2 = uRam00000001138157b0;
  }
  return uVar2;
}



/* Entry: 104929798; end: 1049297b3; +[FBAEMReporter minAggregationRequestTimestamp] */

void FUN_104929798(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [32];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = auStack_60 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  func_0x000100028790();
  _swift_beginAccess();
  FUN_104934c24(lVar1,puVar4,0x11309c628);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049297b4; end: 1049298bb;  */

void FUN_1049297b4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [32];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar4 = auStack_60 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*param_3 != -1) {
    _swift_once(param_3,param_5);
  }
  func_0x000100028790();
  _swift_beginAccess();
  FUN_104934c24(lVar1,puVar4,0x11309c628);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049298bc; end: 10492996f;  */

void FUN_1049298bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  uVar1 = 0x11309c628;
  func_0x0001048db364(0x11309c628);
  func_0x000100028790();
  _swift_beginAccess();
  func_0x000100ed9c6c(param_1,uVar1);
  _swift_endAccess(auStack_48);
  FUN_1049349e8(param_1,0x11309c628);
  return;
}



/* Entry: 104929970; end: 10492998b; +[FBAEMReporter setMinAggregationRequestTimestamp:] */

void FUN_104929970(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x11309c628;
  func_0x0001048db364();
  puVar3 = auStack_60 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar2 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar2 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,param_3 == 0,1);
  if (lRam000000011309d048 != -1) {
    _swift_once(0x11309d048,FUN_104929628);
  }
  func_0x000100028790(lVar1,0x1138157b0);
  _swift_beginAccess();
  func_0x000100ed9c6c(puVar3,lVar1);
  _swift_endAccess(auStack_58);
  FUN_1049349e8(puVar3,0x11309c628);
  return;
}


