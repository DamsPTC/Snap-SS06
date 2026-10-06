/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f9da08; end: 103f9db1f; -[SCMediaDecodeBlockedAlert init] */

void FUN_103f9da08(undefined8 param_1)

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



/* Entry: 103f9db20; end: 103f9e197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9db20(void)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puVar11 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_opt_self();
  func_0x000107c5a9c4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf07b60();
  _objc_release(puVar11);
  if (puVar3 == (undefined *)0x0) {
    if (lRam00000001135f2000 != 0) {
      lVar14 = lRam00000001135f2000;
      _objc_retain();
      lVar13 = lVar14;
      func_0x000107c508f0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar13;
      func_0x000107c4f078();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      if (lVar8 != 0) {
        _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar14);
        return;
      }
      if (lRam00000001135f2000 == 0) {
        lVar13 = 0;
      }
      else {
        func_0x000107c550d8();
        lVar13 = lRam00000001135f2000;
      }
      lRam00000001135f2000 = 0;
      _objc_release(lVar14);
      _objc_release(lVar13);
    }
    puVar11 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    _objc_opt_self();
    func_0x000107c5a9c4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    uVar4 = 0;
    func_0x000103f9eb20(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar15 = uVar4;
    func_0x000100deaee4();
    puVar11 = puVar3;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(puVar3,uVar4,uVar15)
    ;
    _objc_release(puVar3);
    puVar3 = puVar11;
    FUN_103f9e1f8();
    _swift_bridgeObjectRelease(puVar11);
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar11 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar3) {
        puVar11 = puVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
      return;
    }
    lVar14 = 4;
    do {
      uVar12 = lVar14 - 4;
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f9e13c);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(puVar3 + lVar14 * 8);
        _objc_retain();
      }
      else {
        uVar5 = uVar12;
        func_0x0001012bfb38(uVar12,puVar3);
      }
      puVar6 = (undefined *)(lVar14 + -3);
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f9e138);
        (*pcVar2)();
      }
      uVar12 = uVar5;
      func_0x00010bef0360();
      if (uVar12 == 0) goto LAB_103f9dd50;
      _objc_release(uVar5);
      lVar14 = lVar14 + 1;
    } while (puVar6 != puVar11);
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f9e190);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(puVar3 + 0x20);
      _objc_retain();
    }
    else {
      uVar5 = 0;
      func_0x0001012bfb38(0,puVar3);
    }
LAB_103f9dd50:
    _swift_bridgeObjectRelease();
    if (uVar5 != 0) {
      FUN_103f9e6d0();
      _swift_getObjCClassFromMetadata();
      _objc_allocWithZone();
      func_0x000107c453e4();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x000107c5de64();
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f9e194);
        (*pcVar2)();
      }
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
      puVar7 = puVar6;
      func_0x00010bf3ae40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c52b50(puVar11);
      _objc_release(puVar11);
      _objc_release(puVar7);
      plVar1 = (long *)(puVar3 + _DAT_1130392c0);
      lVar14 = *plVar1;
      lVar13 = plVar1[1];
      *plVar1 = 0x103f9eb70;
      plVar1[1] = 0;
      func_0x00010058d43c(lVar14,lVar13);
      func_0x000103f9e9c8();
      _objc_allocWithZone();
      func_0x000107c495e8();
      uVar15 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
      _objc_retain();
      func_0x000107c5a738(uVar15);
      _objc_retain();
      func_0x00010bf3ae40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c52b50(lVar14);
      _objc_release(puVar6);
      func_0x000107c57f18(lVar14);
      _objc_release(puVar3);
      func_0x000107c550d8(lVar14);
      _objc_release(lVar14);
      lVar13 = lRam00000001135f2000;
      lRam00000001135f2000 = lVar14;
      _objc_release(lVar13);
      lVar8 = 0x79616b6f;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79616b6f,0xe400000000000000);
      uVar15 = 0;
      __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
      lVar13 = lVar8;
      func_0x00010bcbeaa8(lVar8,uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(uVar15);
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f9e198);
        (*pcVar2)();
      }
      puVar11 = &UNK_11072a5c8;
      _swift_allocObject(&UNK_11072a5c8,0x18,7);
      *(undefined8 *)(puVar11 + 0x10) = unaff_x20;
      uStack_88 = 0x103f9ea98;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100de205c;
      puStack_90 = &UNK_11072a5e0;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar11;
      __Block_copy(ppuVar9);
      puVar11 = PTR_PTR_1126aed70;
      _objc_opt_self();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      __Block_release(ppuVar9);
      _objc_release(lVar13);
      _swift_release(puStack_80);
      lVar8 = -0x2fffffffffffffe3;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f0151a0);
      uVar4 = 0;
      __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
      lVar13 = lVar8;
      uVar15 = uVar4;
      func_0x00010bcbeaa8(lVar8,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(uVar4);
      if (lVar13 == 0) {
        lStack_b0 = 0;
        uVar15 = 0;
      }
      else {
        lStack_b0 = lVar13;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(lVar13);
      }
      lVar13 = -0x2fffffffffffffe1;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f0151c0);
      uVar10 = 0;
      __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
      lVar8 = lVar13;
      uVar4 = uVar10;
      func_0x00010bcbeaa8(lVar13,uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(uVar10);
      if (lVar8 == 0) {
        lVar13 = 0;
        uVar4 = 0;
      }
      else {
        lVar13 = lVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar8);
        _objc_release(lVar8);
      }
      lVar8 = 0x112d360a8;
      FUN_103f9e9e8(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
      _swift_allocObject();
      *(undefined8 *)(lVar8 + 0x18) = 3;
      *(undefined8 *)(lVar8 + 0x10) = 1;
      *(undefined **)(lVar8 + 0x20) = puVar11;
      _objc_allocWithZone(PTR_PTR_1126aed78);
      _objc_retain(puVar11);
      func_0x000100fe8774(lStack_b0,uVar15,lVar13,uVar4,lVar8);
      func_0x000107c53fcc();
      func_0x000107c4f018(puVar3);
      _objc_release(uVar5);
      _objc_release(puVar3);
      _objc_release(lVar14);
      _objc_release(puVar11);
      _objc_release(lStack_b0);
    }
  }
  return;
}



/* Entry: 103f9e198; end: 103f9e1b7;  */

void FUN_103f9e198(void)

{
  FUN_103f9db20();
  return;
}



/* Entry: 103f9e1b8; end: 103f9e1d3;  */

void FUN_103f9e1b8(long param_1,long param_2)

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



/* Entry: 103f9e1d4; end: 103f9e1f7; +[SCMediaDecodeBlockedAlert present] */

void FUN_103f9e1d4(void)

{
  _swift_getObjCClassMetadata();
  func_0x000103f9da44();
  return;
}



/* Entry: 103f9e1f8; end: 103f9e4bb;  */

undefined * FUN_103f9e1f8(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    _swift_bridgeObjectRetain();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    uVar4 = 0;
    func_0x000103f9eb20(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (puVar10 == (undefined *)0x0) {
LAB_103f9e478:
        puStack_58 = (undefined *)0x0;
LAB_103f9e47c:
        func_0x000100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      func_0x000103f9eb20(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      _swift_dynamicCast(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f9e4bc);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_103f9e478;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      _objc_retain(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_103f9e47c;
    _objc_opt_self(puVar7);
    puVar6 = puVar10;
    _swift_dynamicCastObjCClass(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar10 = puStack_98;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
        }
        puVar10 = (undefined *)0x0;
        func_0x00010109b320(0,puVar7 + 1,1,puStack_98);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x00010109b320(puVar10,uVar13 + 1,1,puStack_98);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}



/* Entry: 103f9e4bc; end: 103f9e4bf;  */

void FUN_103f9e4bc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f9e4c0; end: 103f9e4c3; -[SCMediaDecodeBlockedAlert .cxx_destruct] */

void FUN_103f9e4c0(void)

{
  return;
}



/* Entry: 103f9e4c4; end: 103f9e4e3;  */

void FUN_103f9e4c4(void)

{
  _objc_opt_self(&PTR_PTR_112972aa0);
  return;
}



/* Entry: 103f9e4e4; end: 103f9e553; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF29AlertWindowRootViewController dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9e4e4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_1130392c0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_1130392c0))[1];
  _objc_retain();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  _objc_release(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 103f9e554; end: 103f9e62b; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF29AlertWindowRootViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f9e554(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_1130392c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    _objc_retain(param_4);
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    puVar1 = (undefined8 *)(param_1 + _DAT_1130392c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    _objc_retain(param_4);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  return (undefined1 *)plVar3;
}



/* Entry: 103f9e62c; end: 103f9e6bb; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF29AlertWindowRootViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f9e62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar3 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130392c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (plVar4 != (long *)0x0) {
    _objc_release(plVar4);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 103f9e6bc; end: 103f9e6cf; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF29AlertWindowRootViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9e6bc(long param_1)

{
  if (*(long *)(param_1 + _DAT_1130392c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_1130392c0))[1]);
    return;
  }
  return;
}



/* Entry: 103f9e6d0; end: 103f9e6ef;  */

void FUN_103f9e6d0(void)

{
  _objc_opt_self(&PTR_PTR_112972b50);
  return;
}



/* Entry: 103f9e6f0; end: 103f9e7eb;  */

undefined1 * FUN_103f9e6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  _swift_getObjectType();
  _objc_msgSendSuper2(param_1,param_2,&stack0xffffffffffffffb0,PTR_s_hitTest_withEvent__1125d6850,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retain();
  func_0x000107c508f0();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x20 == (undefined1 *)0x0) {
    if (puVar2 != (undefined1 *)0x0) {
LAB_103f9e7b4:
      _objc_release(puVar2);
      return puVar1;
    }
  }
  else {
    puVar3 = unaff_x20;
    func_0x000107c5de64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    if (puVar2 == (undefined1 *)0x0) {
      if (puVar3 != (undefined1 *)0x0) {
        _swift_unknownObjectRelease(puVar3);
      }
    }
    else {
      if (puVar3 == (undefined1 *)0x0) goto LAB_103f9e7b4;
      _swift_unknownObjectRelease(puVar3);
      _objc_release(puVar2);
      if (puVar2 != puVar3) {
        return puVar1;
      }
      _objc_release(puVar2);
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 103f9e7ec; end: 103f9e863; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF22PassthroughAlertWindow hitTest:withEvent:] */

void FUN_103f9e7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_103f9e6f0(param_1,param_2,param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 103f9e864; end: 103f9e8a7; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF22PassthroughAlertWindow initWithWindowScene:] */

void FUN_103f9e864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithWindowScene__1125f66b8,param_3);
  return;
}



/* Entry: 103f9e8a8; end: 103f9e913; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF22PassthroughAlertWindow initWithFrame:] */

void FUN_103f9e8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  _swift_getObjectType();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 103f9e914; end: 103f9e993; -[_TtC25SCMediaDecodeBlockedAlertP33_3C3B3A0D6A37737E21D5780D72D953FF22PassthroughAlertWindow initWithCoder:] */

undefined1 * FUN_103f9e914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 103f9e994; end: 103f9e9e7;  */

void FUN_103f9e994(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f9e9e8; end: 103f9ea5f;  */

void FUN_103f9e9e8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000103f9eb20(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103f9ea60; end: 103f9ea63;  */

void FUN_103f9ea60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = lRam00000001135f2000;
  if (lRam00000001135f2000 != 0) {
    func_0x000107c550d8(lRam00000001135f2000,param_2,1);
    lVar1 = lRam00000001135f2000;
  }
  lRam00000001135f2000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103f9ea64; end: 103f9eb5f;  */

void FUN_103f9ea64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = lRam00000001135f2000;
  if (lRam00000001135f2000 != 0) {
    func_0x000107c550d8(lRam00000001135f2000,param_2,1);
    lVar1 = lRam00000001135f2000;
  }
  lRam00000001135f2000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103f9eb60; end: 103f9eb7b;  */

void FUN_103f9eb60(long param_1,long param_2)

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



/* Entry: 103f9eb7c; end: 103f9ec03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f9eb7c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a52b64();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113039318) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113039320) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9ec04);
  (*pcVar1)();
}



/* Entry: 103f9ec04; end: 103f9ec63; -[_TtC31MapsUserSessionScopeGraphBridge46MapsUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103f9ec04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapsUserSessionScopeGraphBridge.MapsUserSessionScopeGraphBridgeSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9ec30);
  (*pcVar1)();
}



/* Entry: 103f9ec64; end: 103f9ec9b; -[_TtC31MapsUserSessionScopeGraphBridge46MapsUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9ec64(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113039318));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113039320));
  return;
}



/* Entry: 103f9ec9c; end: 103f9ecc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9ec9c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113039320),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113039318));
  return;
}



/* Entry: 103f9ecc4; end: 103f9ed27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f9ecc4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113039840);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103f9ed28; end: 103f9ed2f;  */

void FUN_103f9ed28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f9ed30; end: 103f9edcf;  */

void FUN_103f9ed30(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f9edd0; end: 103f9edef;  */

void FUN_103f9edd0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103f9edf0; end: 103f9ee53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f9edf0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113039848);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103f9ee54; end: 103f9ee5b;  */

void FUN_103f9ee54(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f9ee5c; end: 103f9eefb;  */

void FUN_103f9ee5c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f9eefc; end: 103f9ef1b;  */

void FUN_103f9eefc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103f9ef1c; end: 103f9ef7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f9ef1c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113039850);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103f9ef80; end: 103f9ef87;  */

void FUN_103f9ef80(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f9ef88; end: 103f9f027;  */

void FUN_103f9ef88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f9f028; end: 103f9f047;  */

void FUN_103f9f028(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103f9f048; end: 103f9f0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f9f048(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113039858);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103f9f0ac; end: 103f9f0b3;  */

void FUN_103f9f0ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f9f0b4; end: 103f9f153;  */

void FUN_103f9f0b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f9f154; end: 103f9f173;  */

void FUN_103f9f154(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103f9f174; end: 103f9f1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f9f174(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113039860);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103f9f1d8; end: 103f9f1df;  */

void FUN_103f9f1d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f9f1e0; end: 103f9f27f;  */

void FUN_103f9f1e0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f9f280; end: 103f9f29f;  */

void FUN_103f9f280(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103f9f2a0; end: 103f9f303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f9f2a0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113039868);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103f9f304; end: 103f9f30b;  */

void FUN_103f9f304(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103f9f30c; end: 103f9f3ab;  */

void FUN_103f9f30c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f9f3ac; end: 103f9f3cb;  */

void FUN_103f9f3ac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103f9f3cc; end: 103f9f47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9f3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113039840) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113039848) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113039850) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113039858) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113039860) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113039868) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f9f480; end: 103f9f4df; -[_TtC31MapsUserSessionScopeGraphBridge39MapsUserSessionScopeGraphBridgeServices init] */

void FUN_103f9f480(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapsUserSessionScopeGraphBridge.MapsUserSessionScopeGraphBridgeServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9f4ac);
  (*pcVar1)();
}



/* Entry: 103f9f4e0; end: 103f9f5b3; -[_TtC31MapsUserSessionScopeGraphBridge39MapsUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9f4e0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113039840));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113039848));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113039850));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113039858));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113039860));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113039868));
  return;
}



/* Entry: 103f9f5b4; end: 103f9f5eb;  */

undefined1  [16] FUN_103f9f5b4(void)

{
  return ZEXT816(0x11072a7d8);
}



/* Entry: 103f9f5ec; end: 103f9f62f; -[SCMapsUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103f9f5ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9f630; end: 103f9f663;  */

void FUN_103f9f630(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f9f664; end: 103f9f6ab; -[SCMapsUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9f664(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130398c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130398c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130398d0));
  return;
}



/* Entry: 103f9f6ac; end: 103f9f6cb;  */

void FUN_103f9f6ac(void)

{
  _objc_opt_self(&PTR_PTR_112972e68);
  return;
}



/* Entry: 103f9f6cc; end: 103f9f6d7; -[SCNextGenLocationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9f6cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113039900;
  _swift_beginAccess(param_1 + _DAT_113039900,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9f6d8; end: 103f9f6e3; -[SCNextGenLocationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9f6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113039900;
  _swift_beginAccess(param_1 + _DAT_113039900,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f9f6e4; end: 103f9f6ef; -[SCNextGenLocationServicesSaberServiceProvider mapsUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9f6e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113039908;
  _swift_beginAccess(param_1 + _DAT_113039908,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9f6f0; end: 103f9f733;  */

void FUN_103f9f6f0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9f734; end: 103f9f73f; -[SCNextGenLocationServicesSaberServiceProvider setMapsUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9f734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113039908;
  _swift_beginAccess(param_1 + _DAT_113039908,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f9f740; end: 103f9f793;  */

void FUN_103f9f740(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f9f794; end: 103f9f9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f9f794(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c494();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103f9ed54();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113039840);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113039910);
      *(long *)(unaff_x20 + _DAT_113039910) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "MapsUserSessionScopeGraphBridge/SCNextGenLocationServicesSaberServiceProvider.swift",
             0x53,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9f8c0);
  (*pcVar1)();
}



/* Entry: 103f9f9a8; end: 103f9f9db; -[SCNextGenLocationServicesSaberServiceProvider provide] */

void FUN_103f9f9a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f9f794();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f9f9dc; end: 103f9fa0f; -[SCNextGenLocationServicesSaberServiceProvider __safeProvide] */

void FUN_103f9f9dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103f9f8c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f9fa10; end: 103f9fa53; -[SCNextGenLocationServicesSaberServiceProvider end] */

void FUN_103f9fa10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9fa54; end: 103f9fbeb;  */

void FUN_103f9fa54(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e2aab0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1d5550,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MapsUserSessionScopeGraphBridge/SCNextGenLocationServicesSaberServiceProvider.swift"
                   ,0x53,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9fbec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c562e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103f9fbec; end: 103f9fc97; -[SCNextGenLocationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103f9fbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103f9fa54(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103f9fc98; end: 103f9fd0b; -[SCNextGenLocationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9fc98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113039900,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113039908,0);
  *(undefined8 *)(param_1 + _DAT_113039910) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f9fd0c; end: 103f9fd3f;  */

void FUN_103f9fd0c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f9fd40; end: 103f9fd87; -[SCNextGenLocationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9fd40(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113039900);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113039908);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113039910));
  return;
}



/* Entry: 103f9fd88; end: 103f9fda7;  */

void FUN_103f9fd88(void)

{
  _objc_opt_self(&PTR_PTR_113039958);
  return;
}



/* Entry: 103f9fda8; end: 103f9fdb3; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9fda8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130399c0;
  _swift_beginAccess(param_1 + _DAT_1130399c0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9fdb4; end: 103f9fdbf; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9fdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130399c0;
  _swift_beginAccess(param_1 + _DAT_1130399c0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f9fdc0; end: 103f9fdcb; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider mapsUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9fdc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130399c8;
  _swift_beginAccess(param_1 + _DAT_1130399c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9fdcc; end: 103f9fe0f;  */

void FUN_103f9fdcc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f9fe10; end: 103f9fe1b; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider setMapsUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f9fe10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130399c8;
  _swift_beginAccess(param_1 + _DAT_1130399c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f9fe1c; end: 103f9fe6f;  */

void FUN_103f9fe1c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f9fe70; end: 103fa0083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f9fe70(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c494();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103f9ee80();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113039848);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130399d0);
      *(long *)(unaff_x20 + _DAT_1130399d0) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "MapsUserSessionScopeGraphBridge/SCSCLegacyMapNetworkingServicesSaberServiceProvider.swift"
             ,0x59,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f9ff9c);
  (*pcVar1)();
}



/* Entry: 103fa0084; end: 103fa00b7; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider provide] */

void FUN_103fa0084(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f9fe70();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fa00b8; end: 103fa00eb; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider __safeProvide] */

void FUN_103fa00b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103f9ff9c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fa00ec; end: 103fa012f; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider end] */

void FUN_103fa00ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fa0130; end: 103fa02c7;  */

void FUN_103fa0130(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e2aab0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1d5550,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "MapsUserSessionScopeGraphBridge/SCSCLegacyMapNetworkingServicesSaberServiceProvider.swift"
                   ,0x59,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fa02c8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c562e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fa02c8; end: 103fa0373; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fa02c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103fa0130(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fa0374; end: 103fa03e7; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fa0374(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130399c0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130399c8,0);
  *(undefined8 *)(param_1 + _DAT_1130399d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fa03e8; end: 103fa041b;  */

void FUN_103fa03e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fa041c; end: 103fa0463; -[SCSCLegacyMapNetworkingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fa041c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130399c0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130399c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130399d0));
  return;
}



/* Entry: 103fa0464; end: 103fa0483;  */

void FUN_103fa0464(void)

{
  _objc_opt_self(&PTR_PTR_113039a18);
  return;
}



/* Entry: 103fa0484; end: 103fa048f; -[SCSCMapComplianceServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fa0484(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113039a80;
  _swift_beginAccess(param_1 + _DAT_113039a80,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fa0490; end: 103fa049b; -[SCSCMapComplianceServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fa0490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113039a80;
  _swift_beginAccess(param_1 + _DAT_113039a80,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fa049c; end: 103fa04a7; -[SCSCMapComplianceServicesSaberServiceProvider mapsUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fa049c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113039a88;
  _swift_beginAccess(param_1 + _DAT_113039a88,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fa04a8; end: 103fa04eb;  */

void FUN_103fa04a8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fa04ec; end: 103fa04f7; -[SCSCMapComplianceServicesSaberServiceProvider setMapsUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fa04ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113039a88;
  _swift_beginAccess(param_1 + _DAT_113039a88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fa04f8; end: 103fa054b;  */

void FUN_103fa04f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fa054c; end: 103fa075f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fa054c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4c494();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103f9efac();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113039850);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113039a90);
      *(long *)(unaff_x20 + _DAT_113039a90) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "MapsUserSessionScopeGraphBridge/SCSCMapComplianceServicesSaberServiceProvider.swift",
             0x53,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fa0678);
  (*pcVar1)();
}



/* Entry: 103fa0760; end: 103fa0793; -[SCSCMapComplianceServicesSaberServiceProvider provide] */

void FUN_103fa0760(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fa054c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


