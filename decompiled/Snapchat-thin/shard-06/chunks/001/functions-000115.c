/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104510d30; end: 104510dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104510d30(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_110782530;
  _swift_allocObject(&UNK_110782530,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1045110ac,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 104510dbc; end: 1045110ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104510dbc(long param_1,long param_2)

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
  lVar6 = _DAT_113082cb0;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_113082cb0,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_104510f88;
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
            if (uVar7 == 0) goto LAB_104510ff4;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_104510f88:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_104510ff0;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1045110ac);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_104510ff0:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_104510ff4:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_113082cb0,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1045110ac; end: 1045110c3;  */

void FUN_1045110ac(void)

{
  long unaff_x20;
  
  FUN_104510dbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1045110c4; end: 10451117b; -[SCLensMetadataStoreListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045110c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110782530;
  _swift_allocObject(&UNK_110782530,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_104511288,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 10451117c; end: 104511193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451117c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain();
  _swift_unknownObjectRetain(param_2);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_40);
  _swift_unknownObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Entry: 104511194; end: 1045111f3;  */

void FUN_104511194(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain();
  _swift_unknownObjectRetain(param_2);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_40);
  _swift_unknownObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Entry: 1045111f4; end: 1045111ff; -[SCLensMetadataStoreListenerAnnouncer didUpdateLensesToPrefetch:lensMetadataStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045111f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc54(param_3,uVar1);
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5f1ec(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 104511200; end: 10451122f;  */

void FUN_104511200(void)

{
  func_0x00010042a814();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104511230; end: 104511287; -[SCLensMetadataStoreListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511230(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113082ca8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113082cb0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113082c90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113082ca0));
  return;
}



/* Entry: 104511288; end: 10451129b;  */

void FUN_104511288(void)

{
  FUN_1045110ac();
  return;
}



/* Entry: 10451129c; end: 10451129f;  */

void FUN_10451129c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 1045112a0; end: 10451134b;  */

void FUN_1045112a0(void)

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



/* Entry: 10451134c; end: 10451138b;  */

void FUN_10451134c(undefined1 *param_1,long *param_2)

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



/* Entry: 10451138c; end: 1045113cf; -[SCLensApplicableContextAttribute description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451138c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_113082ce0) == '\x01') && (*(long *)(param_1 + _DAT_113082ce8) == 0))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1045113d0);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045113d0; end: 104511417; -[SCLensApplicableContextAttribute init] */

void FUN_1045113d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensDataAPI/LensApplicableContextAttributeWrapper.swift",0x39,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104511418);
  (*pcVar1)();
}



/* Entry: 104511418; end: 10451144b; -[SCLensApplicableContextAttribute hash] */

undefined8 FUN_104511418(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10451144c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10451144c; end: 10451152b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451144c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_113082ce0));
  if (((undefined8 *)(unaff_x20 + _DAT_113082cf0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113082cf0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  lVar2 = *(long *)(unaff_x20 + _DAT_113082ce8);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
              (lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar3 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10451152c; end: 1045115ab; -[SCLensApplicableContextAttribute isEqual:] */

uint FUN_10451152c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000100c3f920(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045115ac; end: 1045115af; -[SCLensApplicableContextAttribute copyWithZone:] */

void FUN_1045115ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1045115b0; end: 10451163f; +[SCLensApplicableContextAttribute anyApplicableContextInSetWithApplicableContexts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045115b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113082ce0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113082cf0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113082ce8) = param_3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104511640; end: 104511673;  */

void FUN_104511640(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104511674; end: 1045116af; -[SCLensApplicableContextAttribute .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511674(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113082cf0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113082ce8));
  return;
}



/* Entry: 1045116b0; end: 10451175b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045116b0(long param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar5 = alStack_50;
  lVar3 = param_1;
  func_0x000100c3f900();
  lVar4 = lVar3;
  _objc_allocWithZone();
  if (param_3 == '\x01') {
    *(undefined1 *)(lVar4 + _DAT_113082ce0) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_113082cf0);
    *puVar1 = 0;
    puVar1[1] = 0;
    plVar5 = alStack_40;
  }
  else {
    *(undefined1 *)(lVar4 + _DAT_113082ce0) = 0;
    plVar2 = (long *)(lVar4 + _DAT_113082cf0);
    *plVar2 = param_1;
    plVar2[1] = param_2;
    param_1 = 0;
  }
  *(long *)(lVar4 + _DAT_113082ce8) = param_1;
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10451175c; end: 1045118c3;  */

int FUN_10451175c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1045117d8;
        goto LAB_1045117bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1045117bc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1045117d8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1045118c4; end: 104511903;  */

void FUN_1045118c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd128a8;
  _swift_getWitnessTable(&UNK_10dd128a8,&UNK_1107825c8);
  puRam0000000113082d20 = puVar1;
  return;
}



/* Entry: 104511904; end: 104511913; -[SCSortStrategyParameters showBirthdayReplyLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104511904(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082d28);
}



/* Entry: 104511914; end: 104511923; -[SCSortStrategyParameters originalLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082d30));
  return;
}



/* Entry: 104511924; end: 104511933; -[SCSortStrategyParameters selectedLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113082d38));
  return;
}



/* Entry: 104511934; end: 104511943; -[SCSortStrategyParameters skipExplorerLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104511934(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082d40);
}



/* Entry: 104511944; end: 104511953; -[SCSortStrategyParameters allowCarouselLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104511944(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113082d48);
}



/* Entry: 104511954; end: 1045119af; -[SCSortStrategyParameters applicableContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511954(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113082d50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113082d50);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1045119b0; end: 104511a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045119b0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113082d28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113082d30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113082d38) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_113082d40) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113082d48) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082d50);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104511a6c; end: 104511b53; -[SCSortStrategyParameters initWithShowBirthdayReplyLens:originalLens:selectedLens:skipExplorerLens:allowCarouselLoading:applicableContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511a6c(long param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,long param_8)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_8 == 0) {
    param_8 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_1 + _DAT_113082d28) = param_3;
  *(undefined8 *)(param_1 + _DAT_113082d30) = param_4;
  *(undefined8 *)(param_1 + _DAT_113082d38) = param_5;
  *(undefined1 *)(param_1 + _DAT_113082d40) = param_6;
  *(undefined1 *)(param_1 + _DAT_113082d48) = param_7;
  plVar1 = (long *)(param_1 + _DAT_113082d50);
  *plVar1 = param_8;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 104511b54; end: 104511c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104511b54(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_80;
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113082d28) = *param_1;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + _DAT_113082d30) = uStack_48;
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + _DAT_113082d38) = uStack_50;
  *(undefined1 *)(unaff_x20 + _DAT_113082d40) = param_1[0x18];
  *(undefined1 *)(unaff_x20 + _DAT_113082d48) = param_1[0x19];
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082d50);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  FUN_104511c78(&uStack_48,auStack_70,0x112d3b7d8,&UNK_10d920690);
  FUN_104511c78(&uStack_50,auStack_70,0x112d3b7d8,&UNK_10d920690);
  FUN_104511c78(&uStack_60,auStack_70,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  func_0x000104511cc0(param_1);
  return puVar2;
}



/* Entry: 104511c78; end: 104511cf3;  */

undefined8 FUN_104511c78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104511cf4; end: 104511cf7; -[SCSortStrategyParameters copyWithZone:] */

void FUN_104511cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104511cf8; end: 104511d2b; -[SCSortStrategyParameters description] */

void FUN_104511cf8(void)

{
  undefined1 auStack_40 [48];
  
  FUN_104512244(auStack_40);
  func_0x000104511cc0(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104511d2c; end: 104511d73; -[SCSortStrategyParameters init] */

void FUN_104511d2c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensDataAPI/SortStrategyParametersWrapper.swift",0x31,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104511d74);
  (*pcVar1)();
}



/* Entry: 104511d74; end: 104511d8f; +[SCSortStrategyParametersBuilder sortStrategyParameters] */

void FUN_104511d74(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104511d90; end: 104511dcf; +[SCSortStrategyParametersBuilder sortStrategyParametersWithExistingSortStrategyParameters:] */

void FUN_104511d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1045122d4(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104511dd0; end: 104511ddf; -[SCSortStrategyParametersBuilder withShowBirthdayReplyLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511dd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113082d58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104511de0; end: 104511e3f; -[SCSortStrategyParametersBuilder withOriginalLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104511de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082d60);
  *(undefined8 *)(param_1 + _DAT_113082d60) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104511e40; end: 104511e9f; -[SCSortStrategyParametersBuilder withSelectedLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104511e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082d68);
  *(undefined8 *)(param_1 + _DAT_113082d68) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104511ea0; end: 104511eaf; -[SCSortStrategyParametersBuilder withSkipExplorerLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511ea0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113082d70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104511eb0; end: 104511ebf; -[SCSortStrategyParametersBuilder withAllowCarouselLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511eb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113082d78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 104511ec0; end: 104511f23; -[SCSortStrategyParametersBuilder withApplicableContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511ec0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113082d80);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104511f24; end: 10451206f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104511f24(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  bVar4 = *(byte *)(unaff_x20 + _DAT_113082d58);
  if (bVar4 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113082d58) = 0;
  }
  bVar5 = *(byte *)(unaff_x20 + _DAT_113082d70);
  if (bVar5 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113082d70) = 0;
  }
  bVar6 = *(byte *)(unaff_x20 + _DAT_113082d78);
  if (bVar6 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113082d78) = 0;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113082d60);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_113082d68);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113082d80);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113082d80))[1];
  FUN_10451240c();
  lVar8 = param_1;
  _objc_allocWithZone();
  *(byte *)(lVar8 + _DAT_113082d28) = bVar4 & 1;
  *(undefined8 *)(lVar8 + _DAT_113082d30) = uVar9;
  *(undefined8 *)(lVar8 + _DAT_113082d38) = uVar10;
  *(byte *)(lVar8 + _DAT_113082d40) = bVar5 & 1;
  *(byte *)(lVar8 + _DAT_113082d48) = bVar6 & 1;
  puVar1 = (undefined8 *)(lVar8 + _DAT_113082d50);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar8;
  lStack_68 = param_1;
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _swift_bridgeObjectRetain(uVar3);
  _objc_msgSendSuper2(&lStack_70,puVar7);
  return;
}



/* Entry: 104512070; end: 1045120b3; -[SCSortStrategyParametersBuilder build] */

void FUN_104512070(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104511f24();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1045120b4; end: 1045120f7; -[SCSortStrategyParametersBuilder safeBuildAndReturnError:] */

void FUN_1045120b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104511f24();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1045120f8; end: 104512183; -[SCSortStrategyParametersBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045120f8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113082d58) = 2;
  *(undefined8 *)(param_1 + _DAT_113082d60) = 0;
  *(undefined8 *)(param_1 + _DAT_113082d68) = 0;
  *(undefined1 *)(param_1 + _DAT_113082d70) = 2;
  *(undefined1 *)(param_1 + _DAT_113082d78) = 2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113082d80);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104512184; end: 104512187;  */

void FUN_104512184(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104512188; end: 1045121a3; -[SCSortStrategyParametersBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104512188(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082d60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082d68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113082d80 + 8))
  ;
  return;
}



/* Entry: 1045121a4; end: 1045121d7;  */

void FUN_1045121a4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045121d8; end: 1045121f3; -[SCSortStrategyParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045121d8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082d30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113082d38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113082d50 + 8))
  ;
  return;
}



/* Entry: 1045121f4; end: 104512243;  */

void FUN_1045121f4(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  _objc_release(*(undefined8 *)(param_1 + *param_3));
  _objc_release(*(undefined8 *)(param_1 + *param_4));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + *param_5 + 8));
  return;
}



/* Entry: 104512244; end: 1045122d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104512244(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_113082d30);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113082d38);
  uVar2 = *(undefined1 *)(param_2 + _DAT_113082d40);
  uVar3 = *(undefined1 *)(param_2 + _DAT_113082d48);
  puVar1 = (undefined8 *)(param_2 + _DAT_113082d50);
  *param_1 = *(undefined1 *)(param_2 + _DAT_113082d28);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar3;
  uVar6 = puVar1[1];
  uVar7 = *puVar1;
  *(undefined8 *)(param_1 + 0x28) = puVar1[1];
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar6);
  return;
}



/* Entry: 1045122d4; end: 10451240b;  */

/* WARNING: Possible PIC construction at 0x000104512308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010451230c) */

void FUN_1045122d4(long param_1)

{
  if (param_1 == 0) {
    func_0x00010451242c();
    _objc_allocWithZone();
  }
  else {
    func_0x00010451242c();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10451240c; end: 10451244b;  */

void FUN_10451240c(void)

{
  _objc_opt_self(&PTR_PTR_1129c9830);
  return;
}



/* Entry: 10451244c; end: 10451244f;  */

void FUN_10451244c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104512450; end: 1045124ab; -[SCLensMetadataProviderSettings namespaceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104512450(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113082df0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113082df0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1045124ac; end: 104512617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045124ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113082dd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113082de0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113082de8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113082df0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104512618; end: 10451264b; -[SCLensMetadataProviderSettings hash] */

undefined8 FUN_104512618(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10451264c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10451264c; end: 10451276b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451264c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113082dd8);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113082de0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10451144c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113082de8);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
              (lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar4 = lVar2;
    func_0x00010bfde980();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_113082df0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113082df0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar1 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10451276c; end: 1045127ff; -[SCLensMetadataProviderSettings description] */

void FUN_10451276c(void)

{
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  FUN_1045129a4(auStack_88);
  uStack_28 = uStack_78;
  uStack_30 = uStack_80;
  uStack_20 = uStack_70;
  func_0x000100c3facc(&uStack_30,0x113082e68,&UNK_10dd129e8);
  uStack_38 = uStack_68;
  func_0x000100c3facc(&uStack_38,0x113082e70,&UNK_10dd129f0);
  uStack_48 = uStack_58;
  uStack_50 = uStack_60;
  func_0x000100c3facc(&uStack_50,0x112d35ff8,&UNK_10d900cd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104512800; end: 104512847; -[SCLensMetadataProviderSettings init] */

void FUN_104512800(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensDataAPI/LensMetadataProviderSettingsWrapper.swift",0x37,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104512848);
  (*pcVar1)();
}



/* Entry: 104512848; end: 104512863; +[SCLensMetadataProviderSettingsBuilder lensMetadataProviderSettings] */

void FUN_104512848(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104512864; end: 1045128c3; -[SCLensMetadataProviderSettingsBuilder withApplicableContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104512864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082e00);
  *(undefined8 *)(param_1 + _DAT_113082e00) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1045128c4; end: 104512927; -[SCLensMetadataProviderSettingsBuilder withNamespaceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045128c4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113082e10);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104512928; end: 10451296b; -[SCLensMetadataProviderSettingsBuilder safeBuildAndReturnError:] */

void FUN_104512928(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100c3f52c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10451296c; end: 10451296f;  */

void FUN_10451296c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104512970; end: 1045129a3;  */

void FUN_104512970(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045129a4; end: 104512a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045129a4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_113082dd8);
  lVar5 = *(long *)(param_2 + _DAT_113082de0);
  if (lVar5 == 0) {
    lVar3 = 0;
    lVar5 = 0;
    uVar7 = 0xff;
  }
  else {
    if (*(char *)(lVar5 + _DAT_113082ce0) == '\x01') {
      lVar3 = *(long *)(lVar5 + _DAT_113082ce8);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104512a90);
        (*pcVar2)();
      }
      lVar5 = 0;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
      lVar3 = *(long *)(lVar5 + _DAT_113082cf0);
      lVar5 = ((long *)(lVar5 + _DAT_113082cf0))[1];
    }
    _swift_bridgeObjectRetain();
  }
  uVar4 = *(undefined8 *)(param_2 + _DAT_113082de8);
  puVar1 = (undefined8 *)(param_2 + _DAT_113082df0);
  *param_1 = uVar6;
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  *(undefined1 *)(param_1 + 3) = uVar7;
  param_1[4] = uVar4;
  uVar6 = puVar1[1];
  uVar4 = *puVar1;
  param_1[6] = puVar1[1];
  param_1[5] = uVar4;
  _swift_bridgeObjectRetain();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar6);
  return;
}



/* Entry: 104512a90; end: 104512aab;  */

void FUN_104512a90(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104512aac; end: 104512aeb;  */

void FUN_104512aac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12a00;
  _swift_getWitnessTable(&UNK_10dd12a00,&UNK_1107826c8);
  puRam0000000113082e78 = puVar1;
  return;
}



/* Entry: 104512aec; end: 104512b97;  */

void FUN_104512aec(void)

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



/* Entry: 104512b98; end: 104512be7;  */

void FUN_104512b98(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 3U < 0xfffffffffffffffe;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 104512be8; end: 104512cbf;  */

void FUN_104512be8(void)

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



/* Entry: 104512cc0; end: 104512cdf;  */

void FUN_104512cc0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104512ce0; end: 104512d1f;  */

void FUN_104512ce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12ae0;
  _swift_getWitnessTable(&UNK_10dd12ae0,&UNK_110782740);
  puRam0000000113082e80 = puVar1;
  return;
}



/* Entry: 104512d20; end: 104512e7b;  */

undefined1  [16] FUN_104512d20(void)

{
  return ZEXT816(0x110782740);
}



/* Entry: 104512e7c; end: 104512ebb;  */

void FUN_104512e7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12c00;
  _swift_getWitnessTable(&UNK_10dd12c00,&UNK_110782858);
  puRam0000000113082e88 = puVar1;
  return;
}



/* Entry: 104512ebc; end: 104512f67;  */

void FUN_104512ebc(void)

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



/* Entry: 104512f68; end: 104512f9f;  */

void FUN_104512f68(ulong *param_1,ulong *param_2)

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



/* Entry: 104512fa0; end: 10451304f;  */

void FUN_104512fa0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010451306c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 104513050; end: 10451307f;  */

void FUN_104513050(ulong *param_1,ulong *param_2)

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



/* Entry: 104513080; end: 1045130bf;  */

void FUN_104513080(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12cc0;
  _swift_getWitnessTable(&UNK_10dd12cc0,&UNK_1107828d0);
  puRam0000000113082e90 = puVar1;
  return;
}



/* Entry: 1045130c0; end: 1045130c3;  */

void FUN_1045130c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12d60;
  _swift_getWitnessTable(&UNK_10dd12d60,&UNK_1107828f0);
  puRam0000000113082e98 = puVar1;
  return;
}



/* Entry: 1045130c4; end: 104513103;  */

void FUN_1045130c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12d60;
  _swift_getWitnessTable(&UNK_10dd12d60,&UNK_1107828f0);
  puRam0000000113082e98 = puVar1;
  return;
}



/* Entry: 104513104; end: 104513153;  */

undefined1  [16] FUN_104513104(void)

{
  return ZEXT816(0x1107828d0);
}



/* Entry: 104513154; end: 1045131f3;  */

void FUN_104513154(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045131f4; end: 1045131f7;  */

void FUN_1045131f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12e40;
  _swift_getWitnessTable(&UNK_10dd12e40,&UNK_1107829d8);
  puRam0000000113082ea0 = puVar1;
  return;
}



/* Entry: 1045131f8; end: 104513237;  */

void FUN_1045131f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113082ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd12e40;
  _swift_getWitnessTable(&UNK_10dd12e40,&UNK_1107829d8);
  puRam0000000113082ea0 = puVar1;
  return;
}



/* Entry: 104513238; end: 104513323;  */

uint FUN_104513238(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 104513324; end: 104513337; -[_TtC20SCNavigationServices20SCNavigationServices setUnderlyingNavigationServicesSCLazy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104513324(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_113082eb0,param_3);
  return;
}



/* Entry: 104513338; end: 10451338b; -[_TtC20SCNavigationServices20SCNavigationServices navigationDelegate] */

void FUN_104513338(undefined8 param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = &DAT_113082eb8;
  FUN_10451344c(&DAT_113082eb8,0x1045133b0,0x104513c84,&UNK_110782a20);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10451338c; end: 1045133d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10451338c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_113082eb0;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = *(undefined **)(lVar2 + _DAT_113082eb8);
      _objc_retain(puVar3);
      _objc_release(lVar2);
      return puVar3;
    }
  }
  puVar3 = PTR_PTR_1126ae720;
  _objc_opt_self(PTR_PTR_1126ae720);
  uStack_50 = 0x1045133b0;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x104513c84;
  puStack_58 = &UNK_110782a20;
  __Block_copy(&puStack_70);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  return puVar3;
}



/* Entry: 1045133d4; end: 104513427; -[_TtC20SCNavigationServices20SCNavigationServices navigationController] */

void FUN_1045133d4(undefined8 param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = &DAT_113082ec0;
  FUN_10451344c(&DAT_113082ec0,FUN_104513540,0x104513c80,&UNK_110782a48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104513428; end: 10451344b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104513428(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_113082eb0;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = *(undefined **)(lVar2 + _DAT_113082ec0);
      _objc_retain(puVar3);
      _objc_release(lVar2);
      return puVar3;
    }
  }
  puVar3 = PTR_PTR_1126ae720;
  _objc_opt_self(PTR_PTR_1126ae720);
  pcStack_50 = FUN_104513540;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x104513c80;
  puStack_58 = &UNK_110782a48;
  __Block_copy(&puStack_70);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  return puVar3;
}



/* Entry: 10451344c; end: 10451353f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10451344c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_113082eb0;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = *(undefined **)(lVar2 + *param_1);
      _objc_retain(puVar3);
      _objc_release(lVar2);
      return puVar3;
    }
  }
  puVar3 = PTR_PTR_1126ae720;
  _objc_opt_self(PTR_PTR_1126ae720);
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_2;
  __Block_copy(&puStack_70);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar4);
  return puVar3;
}



/* Entry: 104513540; end: 104513547;  */

undefined8 FUN_104513540(void)

{
  return 0;
}


