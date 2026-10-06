/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103eedd64; end: 103eede3b;  */

void FUN_103eedd64(void)

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



/* Entry: 103eede3c; end: 103eede5b;  */

void FUN_103eede3c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103eede5c; end: 103eede9b;  */

void FUN_103eede5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302d2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca91f0;
  _swift_getWitnessTable(&UNK_10dca91f0,&UNK_110720578);
  puRam000000011302d2c8 = puVar1;
  return;
}



/* Entry: 103eede9c; end: 103eedeab;  */

undefined1  [16] FUN_103eede9c(void)

{
  return ZEXT816(0x110720578);
}



/* Entry: 103eedeac; end: 103eedebb; -[_TtC20SCOurStoriesServices20SCOurStoriesServices ourStoriesAttributionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eedeac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d2d8));
  return;
}



/* Entry: 103eedebc; end: 103eedecb; -[_TtC20SCOurStoriesServices20SCOurStoriesServices ourStoriesOnboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eedebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d2e0));
  return;
}



/* Entry: 103eedecc; end: 103eededb; -[_TtC20SCOurStoriesServices20SCOurStoriesServices ourStoriesDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eedecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302d2e8));
  return;
}



/* Entry: 103eededc; end: 103eedf4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eededc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302d2d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302d2e0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302d2e8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eedf50; end: 103eedfaf; -[_TtC20SCOurStoriesServices20SCOurStoriesServices init] */

void FUN_103eedf50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCOurStoriesServices.SCOurStoriesServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eedf7c);
  (*pcVar1)();
}



/* Entry: 103eedfb0; end: 103eedff7; -[_TtC20SCOurStoriesServices20SCOurStoriesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eedfb0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d2d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302d2e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302d2e8));
  return;
}



/* Entry: 103eedff8; end: 103eee13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103eedff8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_110720670;
  _swift_allocObject(&UNK_110720670,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  uVar2 = 0x11302d2d0;
  func_0x0001000285a8(0x11302d2d0,&UNK_10dca92d0);
  uVar3 = uVar2;
  FUN_103eee1a0();
  pcVar4 = FUN_103eee198;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_103eee198,puVar1,uVar2,uVar3);
  _swift_release(puVar1);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_48);
  _swift_release(pcVar4);
  puVar1 = &UNK_110720698;
  _swift_allocObject(&UNK_110720698,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_49,FUN_103eee2e0,auStack_80,uVar2);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(puStack_48);
  return 1;
}



/* Entry: 103eee13c; end: 103eee197;  */

void FUN_103eee13c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000107c41e24();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 103eee198; end: 103eee19f;  */

void FUN_103eee198(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c41e24();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 103eee1a0; end: 103eee1ef;  */

void FUN_103eee1a0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011302d320 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11302d2d0;
  func_0x00010002969c(0x11302d2d0,&UNK_10dca92d0);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam000000011302d320 = puVar2;
  return;
}



/* Entry: 103eee1f0; end: 103eee2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee1f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

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
  lVar1 = _DAT_11302d330;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_11302d330,auStack_80,0x21,0);
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



/* Entry: 103eee2e0; end: 103eee2fb;  */

void FUN_103eee2e0(void)

{
  long unaff_x20;
  
  FUN_103eee1f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103eee2fc; end: 103eee34b; -[SCOurStoriesAttributionListenerAnnouncer addListener:] */

undefined8 FUN_103eee2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103eedff8(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 103eee34c; end: 103eee3d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee34c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_110720698;
  _swift_allocObject(&UNK_110720698,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_103eee6c8,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 103eee3d8; end: 103eee6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee3d8(long param_1,long param_2)

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
  lVar6 = _DAT_11302d330;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_11302d330,puVar4,0,0);
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
        FUN_103b8dfcc();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_103eee5a4;
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
            if (uVar7 == 0) goto LAB_103eee610;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_103eee5a4:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_103eee60c;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103eee6c8);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_103eee60c:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_103eee610:
      FUN_103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_11302d330,auStack_f0,0x21,0);
    FUN_103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 103eee6c8; end: 103eee6df;  */

void FUN_103eee6c8(void)

{
  long unaff_x20;
  
  FUN_103eee3d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103eee6e0; end: 103eee797; -[SCOurStoriesAttributionListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110720698;
  _swift_allocObject(&UNK_110720698,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_103eee964,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 103eee798; end: 103eee7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee798(undefined1 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_21);
  return;
}



/* Entry: 103eee7d0; end: 103eee817; -[SCOurStoriesAttributionListenerAnnouncer didUpdateOurStoriesAttributionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee7d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  _objc_retain();
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_21);
  _objc_release(param_1);
  return;
}



/* Entry: 103eee818; end: 103eee837;  */

void FUN_103eee818(void)

{
  _objc_opt_self(&PTR_PTR_112963978);
  return;
}



/* Entry: 103eee838; end: 103eee8eb; -[SCOurStoriesAttributionListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee838(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_11302d328;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_11302d330) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_11302d318;
  uVar2 = 0x11302d2d0;
  func_0x0001000285a8(0x11302d2d0,&UNK_10dca92d0);
  _swift_allocObject();
  __s7Combine18PassthroughSubjectCACyxq_Gycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_103eee818();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eee8ec; end: 103eee91b;  */

void FUN_103eee8ec(void)

{
  FUN_103eee818();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eee91c; end: 103eee963; -[SCOurStoriesAttributionListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eee91c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302d328));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302d330));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302d318));
  return;
}



/* Entry: 103eee964; end: 103eee977;  */

void FUN_103eee964(void)

{
  FUN_103eee6c8();
  return;
}



/* Entry: 103eee978; end: 103eee9c7;  */

void FUN_103eee978(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000001e;
  func_0x000100442ccc(0xd00000000000001e,0x800000010f1cdae0,0);
  uRam0000000113812328 = uVar1;
  return;
}



/* Entry: 103eee9c8; end: 103eee9e3; +[SCSpotlightContextFeatureConfigKeys madeOnSnapchatEnabled] */

void FUN_103eee9c8(void)

{
  if (lRam00000001135e8860 != -1) {
    _swift_once(0x1135e8860,FUN_103eee978);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812328);
  return;
}



/* Entry: 103eee9e4; end: 103eeea33;  */

void FUN_103eee9e4(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000001e;
  func_0x000100442ccc(0xd00000000000001e,0x800000010f1cdac0,0);
  uRam0000000113812330 = uVar1;
  return;
}



/* Entry: 103eeea34; end: 103eeea4f; +[SCSpotlightContextFeatureConfigKeys operaResizingWhenCommentsTrayOpen] */

void FUN_103eeea34(void)

{
  if (lRam00000001135e8868 != -1) {
    _swift_once(0x1135e8868,FUN_103eee9e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812330);
  return;
}



/* Entry: 103eeea50; end: 103eeea9f;  */

void FUN_103eeea50(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000023;
  func_0x000100442ccc(0xd000000000000023,0x800000010f1cda90,0);
  uRam0000000113812338 = uVar1;
  return;
}



/* Entry: 103eeeaa0; end: 103eeeadf;  */

undefined8 FUN_103eeeaa0(void)

{
  if (lRam00000001135e8870 != -1) {
    _swift_once(0x1135e8870,FUN_103eeea50);
  }
  return 0x113812338;
}



/* Entry: 103eeeae0; end: 103eeeafb; +[SCSpotlightContextFeatureConfigKeys quickShareUseSendToApiEnabled] */

void FUN_103eeeae0(void)

{
  if (lRam00000001135e8870 != -1) {
    _swift_once(0x1135e8870,FUN_103eeea50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812338);
  return;
}



/* Entry: 103eeeafc; end: 103eeeb53;  */

void FUN_103eeeafc(void)

{
  undefined8 uVar1;
  
  func_0x000103f1fab8(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000021;
  FUN_103f1f884(0x3dcccccd,0xd000000000000021,0x800000010f1cda60);
  uRam0000000113812340 = uVar1;
  return;
}



/* Entry: 103eeeb54; end: 103eeeb6f; +[SCSpotlightContextFeatureConfigKeys oneTapToSharePShareThreshold] */

void FUN_103eeeb54(void)

{
  if (lRam00000001135e8878 != -1) {
    _swift_once(0x1135e8878,FUN_103eeeafc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812340);
  return;
}



/* Entry: 103eeeb70; end: 103eeebbf;  */

void FUN_103eeeb70(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000027;
  func_0x000100442ccc(0xd000000000000027,0x800000010f1cda30,0);
  uRam0000000113812348 = uVar1;
  return;
}



/* Entry: 103eeebc0; end: 103eeebdb; +[SCSpotlightContextFeatureConfigKeys oneTapToShareIncludeGroupsEnabled] */

void FUN_103eeebc0(void)

{
  if (lRam00000001135e8880 != -1) {
    _swift_once(0x1135e8880,FUN_103eeeb70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812348);
  return;
}



/* Entry: 103eeebdc; end: 103eeec2b;  */

void FUN_103eeebdc(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002c;
  func_0x000100442ccc(0xd00000000000002c,0x800000010f1cda00,0);
  uRam0000000113812350 = uVar1;
  return;
}



/* Entry: 103eeec2c; end: 103eeec6b;  */

undefined8 FUN_103eeec2c(void)

{
  if (lRam00000001135e8888 != -1) {
    _swift_once(0x1135e8888,FUN_103eeebdc);
  }
  return 0x113812350;
}



/* Entry: 103eeec6c; end: 103eeec87; +[SCSpotlightContextFeatureConfigKeys quickShareIncludeGroupsEnabled] */

void FUN_103eeec6c(void)

{
  if (lRam00000001135e8888 != -1) {
    _swift_once(0x1135e8888,FUN_103eeebdc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812350);
  return;
}



/* Entry: 103eeec88; end: 103eeecd7;  */

void FUN_103eeec88(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002a;
  func_0x000100442ccc(0xd00000000000002a,0x800000010f1cd9d0,0);
  uRam0000000113812358 = uVar1;
  return;
}



/* Entry: 103eeecd8; end: 103eeed17;  */

undefined8 FUN_103eeecd8(void)

{
  if (lRam00000001135e8890 != -1) {
    _swift_once(0x1135e8890,FUN_103eeec88);
  }
  return 0x113812358;
}



/* Entry: 103eeed18; end: 103eeed33; +[SCSpotlightContextFeatureConfigKeys quickShareDragToSendEnabled] */

void FUN_103eeed18(void)

{
  if (lRam00000001135e8890 != -1) {
    _swift_once(0x1135e8890,FUN_103eeec88);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812358);
  return;
}



/* Entry: 103eeed34; end: 103eeed83;  */

void FUN_103eeed34(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000001f;
  func_0x000100442ccc(0xd00000000000001f,0x800000010f1cd9b0,0);
  uRam0000000113812360 = uVar1;
  return;
}



/* Entry: 103eeed84; end: 103eeed9f; +[SCSpotlightContextFeatureConfigKeys spotlightQuickCommentEnabled] */

void FUN_103eeed84(void)

{
  if (lRam00000001135e8898 != -1) {
    _swift_once(0x1135e8898,FUN_103eeed34);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812360);
  return;
}



/* Entry: 103eeeda0; end: 103eeedef;  */

void FUN_103eeeda0(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000001d;
  func_0x000100442ccc(0xd00000000000001d,0x800000010f1cd990,0);
  uRam0000000113812368 = uVar1;
  return;
}



/* Entry: 103eeedf0; end: 103eeee0b; +[SCSpotlightContextFeatureConfigKeys spotlightQuickShareEnabled] */

void FUN_103eeedf0(void)

{
  if (lRam00000001135e88a0 != -1) {
    _swift_once(0x1135e88a0,FUN_103eeeda0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812368);
  return;
}



/* Entry: 103eeee0c; end: 103eeee5b;  */

void FUN_103eeee0c(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000028;
  func_0x000100bd65fc(0xd000000000000028,0x800000010f1cd960,0);
  uRam0000000113812370 = uVar1;
  return;
}



/* Entry: 103eeee5c; end: 103eeee77; +[SCSpotlightContextFeatureConfigKeys spotlightCommentEmptyStateLabelMode] */

void FUN_103eeee5c(void)

{
  if (lRam00000001135e88a8 != -1) {
    _swift_once(0x1135e88a8,FUN_103eeee0c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812370);
  return;
}



/* Entry: 103eeee78; end: 103eeeec7;  */

void FUN_103eeee78(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000029;
  func_0x000100bd65fc(0xd000000000000029,0x800000010f1cd930,1);
  uRam0000000113812378 = uVar1;
  return;
}



/* Entry: 103eeeec8; end: 103eeeee3; +[SCSpotlightContextFeatureConfigKeys quickShareUpsellTriggers] */

void FUN_103eeeec8(void)

{
  if (lRam00000001135e88b0 != -1) {
    _swift_once(0x1135e88b0,FUN_103eeee78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812378);
  return;
}



/* Entry: 103eeeee4; end: 103eeef33;  */

void FUN_103eeeee4(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002c;
  func_0x000100bd65fc(0xd00000000000002c,0x800000010f1cd900,0);
  uRam0000000113812380 = uVar1;
  return;
}



/* Entry: 103eeef34; end: 103eeef4f; +[SCSpotlightContextFeatureConfigKeys quickShareUpsellCooldownAnchor] */

void FUN_103eeef34(void)

{
  if (lRam00000001135e88b8 != -1) {
    _swift_once(0x1135e88b8,FUN_103eeeee4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812380);
  return;
}



/* Entry: 103eeef50; end: 103eeef9f;  */

void FUN_103eeef50(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002b;
  func_0x000100442ccc(0xd00000000000002b,0x800000010f1cd8d0,0);
  uRam0000000113812388 = uVar1;
  return;
}



/* Entry: 103eeefa0; end: 103eeefbb; +[SCSpotlightContextFeatureConfigKeys madeOnSnapchatLeftAlignedEnabled] */

void FUN_103eeefa0(void)

{
  if (lRam00000001135e88c0 != -1) {
    _swift_once(0x1135e88c0,FUN_103eeef50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812388);
  return;
}



/* Entry: 103eeefbc; end: 103eef00b;  */

void FUN_103eeefbc(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002b;
  func_0x000100442ccc(0xd00000000000002b,0x800000010f1cd8a0,0);
  uRam0000000113812390 = uVar1;
  return;
}



/* Entry: 103eef00c; end: 103eef027; +[SCSpotlightContextFeatureConfigKeys madeOnSnapchatInlineLabelEnabled] */

void FUN_103eef00c(void)

{
  if (lRam00000001135e88c8 != -1) {
    _swift_once(0x1135e88c8,FUN_103eeefbc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812390);
  return;
}



/* Entry: 103eef028; end: 103eef077;  */

void FUN_103eef028(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000032;
  func_0x000100bd65fc(0xd000000000000032,0x800000010f1cd860,3);
  uRam0000000113812398 = uVar1;
  return;
}



/* Entry: 103eef078; end: 103eef093; +[SCSpotlightContextFeatureConfigKeys madeOnSnapchatInlineLabelImpressionCap] */

void FUN_103eef078(void)

{
  if (lRam00000001135e88d0 != -1) {
    _swift_once(0x1135e88d0,FUN_103eef028);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812398);
  return;
}



/* Entry: 103eef094; end: 103eef0e3;  */

void FUN_103eef094(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000022;
  func_0x000100442ccc(0xd000000000000022,0x800000010f1cd830,0);
  uRam00000001138123a0 = uVar1;
  return;
}



/* Entry: 103eef0e4; end: 103eef0ff; +[SCSpotlightContextFeatureConfigKeys madeOnSnapchatPPMEnabled] */

void FUN_103eef0e4(void)

{
  if (lRam00000001135e88d8 != -1) {
    _swift_once(0x1135e88d8,FUN_103eef094);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123a0);
  return;
}



/* Entry: 103eef100; end: 103eef14f;  */

void FUN_103eef100(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002d;
  func_0x000100442ccc(0xd00000000000002d,0x800000010f1cd800,0);
  uRam00000001138123a8 = uVar1;
  return;
}



/* Entry: 103eef150; end: 103eef16b; +[SCSpotlightContextFeatureConfigKeys madeOnSnapchatPublicProfileSpotlightEnabled] */

void FUN_103eef150(void)

{
  if (lRam00000001135e88e0 != -1) {
    _swift_once(0x1135e88e0,FUN_103eef100);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123a8);
  return;
}



/* Entry: 103eef16c; end: 103eef1bb;  */

void FUN_103eef16c(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000019;
  func_0x000100442ccc(0xd000000000000019,0x800000010f0f2a00,0);
  uRam00000001138123b0 = uVar1;
  return;
}



/* Entry: 103eef1bc; end: 103eef1fb;  */

undefined8 FUN_103eef1bc(void)

{
  if (lRam00000001135e88e8 != -1) {
    _swift_once(0x1135e88e8,FUN_103eef16c);
  }
  return 0x1138123b0;
}



/* Entry: 103eef1fc; end: 103eef217; +[SCSpotlightContextFeatureConfigKeys renameToReals] */

void FUN_103eef1fc(void)

{
  if (lRam00000001135e88e8 != -1) {
    _swift_once(0x1135e88e8,FUN_103eef16c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123b0);
  return;
}



/* Entry: 103eef218; end: 103eef267;  */

void FUN_103eef218(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000036;
  func_0x000100442ccc(0xd000000000000036,0x800000010f1cd7c0,0);
  uRam00000001138123b8 = uVar1;
  return;
}



/* Entry: 103eef268; end: 103eef283; +[SCSpotlightContextFeatureConfigKeys dynamicSpotlightLayoutGuideKillSwitch] */

void FUN_103eef268(void)

{
  if (lRam00000001135e88f0 != -1) {
    _swift_once(0x1135e88f0,FUN_103eef218);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123b8);
  return;
}



/* Entry: 103eef284; end: 103eef2d3;  */

void FUN_103eef284(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000028;
  func_0x000100442ccc(0xd000000000000028,0x800000010f1cd790,0);
  uRam00000001138123c0 = uVar1;
  return;
}



/* Entry: 103eef2d4; end: 103eef2ef; +[SCSpotlightContextFeatureConfigKeys spotlightOpenMyPublicProfileEnabled] */

void FUN_103eef2d4(void)

{
  if (lRam00000001135e88f8 != -1) {
    _swift_once(0x1135e88f8,FUN_103eef284);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123c0);
  return;
}



/* Entry: 103eef2f0; end: 103eef33f;  */

void FUN_103eef2f0(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000028;
  func_0x000100442ccc(0xd000000000000028,0x800000010f1cd760,0);
  uRam00000001138123c8 = uVar1;
  return;
}



/* Entry: 103eef340; end: 103eef37f;  */

undefined8 FUN_103eef340(void)

{
  if (lRam00000001135e8900 != -1) {
    _swift_once(0x1135e8900,FUN_103eef2f0);
  }
  return 0x1138123c8;
}



/* Entry: 103eef380; end: 103eef39b; +[SCSpotlightContextFeatureConfigKeys watchSpotlightCTARedesign] */

void FUN_103eef380(void)

{
  if (lRam00000001135e8900 != -1) {
    _swift_once(0x1135e8900,FUN_103eef2f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123c8);
  return;
}



/* Entry: 103eef39c; end: 103eef3eb;  */

void FUN_103eef39c(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000030;
  func_0x000100442ccc(0xd000000000000030,0x800000010f1cd720,0);
  uRam00000001138123d0 = uVar1;
  return;
}



/* Entry: 103eef3ec; end: 103eef407; +[SCSpotlightContextFeatureConfigKeys decoupleContextLayerFromAppFooter] */

void FUN_103eef3ec(void)

{
  if (lRam00000001135e8908 != -1) {
    _swift_once(0x1135e8908,FUN_103eef39c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123d0);
  return;
}



/* Entry: 103eef408; end: 103eef457;  */

void FUN_103eef408(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002d;
  func_0x000100bd65fc(0xd00000000000002d,0x800000010f1cd6f0,10);
  uRam00000001138123d8 = uVar1;
  return;
}



/* Entry: 103eef458; end: 103eef473; +[SCSpotlightContextFeatureConfigKeys inFeedSurveyDailyImpressionCap] */

void FUN_103eef458(void)

{
  if (lRam00000001135e8910 != -1) {
    _swift_once(0x1135e8910,FUN_103eef408);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123d8);
  return;
}



/* Entry: 103eef474; end: 103eef4c3;  */

void FUN_103eef474(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002e;
  func_0x000100bd65fc(0xd00000000000002e,0x800000010f1cd6c0,0);
  uRam00000001138123e0 = uVar1;
  return;
}



/* Entry: 103eef4c4; end: 103eef4df; +[SCSpotlightContextFeatureConfigKeys inFeedSurveyWeeklyImpressionCap] */

void FUN_103eef4c4(void)

{
  if (lRam00000001135e8918 != -1) {
    _swift_once(0x1135e8918,FUN_103eef474);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123e0);
  return;
}



/* Entry: 103eef4e0; end: 103eef52f;  */

void FUN_103eef4e0(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002f;
  func_0x000100bd65fc(0xd00000000000002f,0x800000010f1cd690,0);
  uRam00000001138123e8 = uVar1;
  return;
}



/* Entry: 103eef530; end: 103eef54b; +[SCSpotlightContextFeatureConfigKeys inFeedSurveyMonthlyImpressionCap] */

void FUN_103eef530(void)

{
  if (lRam00000001135e8920 != -1) {
    _swift_once(0x1135e8920,FUN_103eef4e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123e8);
  return;
}



/* Entry: 103eef54c; end: 103eef59b;  */

void FUN_103eef54c(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000035;
  func_0x000100bd65fc(0xd000000000000035,0x800000010f1cd650,0);
  uRam00000001138123f0 = uVar1;
  return;
}



/* Entry: 103eef59c; end: 103eef5b7; +[SCSpotlightContextFeatureConfigKeys inFeedSurveyMonthlyCapCooldownSeconds] */

void FUN_103eef59c(void)

{
  if (lRam00000001135e8928 != -1) {
    _swift_once(0x1135e8928,FUN_103eef54c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123f0);
  return;
}



/* Entry: 103eef5b8; end: 103eef607;  */

void FUN_103eef5b8(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000036;
  func_0x000100442ccc(0xd000000000000036,0x800000010f1cd610,0);
  uRam00000001138123f8 = uVar1;
  return;
}



/* Entry: 103eef608; end: 103eef623; +[SCSpotlightContextFeatureConfigKeys heroContextLabelAnimateRepostFlipsOnly] */

void FUN_103eef608(void)

{
  if (lRam00000001135e8930 != -1) {
    _swift_once(0x1135e8930,FUN_103eef5b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138123f8);
  return;
}



/* Entry: 103eef624; end: 103eef673;  */

void FUN_103eef624(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000021;
  func_0x000100442ccc(0xd000000000000021,0x800000010f1cd5e0,0);
  uRam0000000113812400 = uVar1;
  return;
}



/* Entry: 103eef674; end: 103eef68f; +[SCSpotlightContextFeatureConfigKeys contextAlwaysHideTimestamp] */

void FUN_103eef674(void)

{
  if (lRam00000001135e8938 != -1) {
    _swift_once(0x1135e8938,FUN_103eef624);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812400);
  return;
}



/* Entry: 103eef690; end: 103eef6df;  */

void FUN_103eef690(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002c;
  func_0x000100442ccc(0xd00000000000002c,0x800000010f1cd5b0,0);
  uRam0000000113812408 = uVar1;
  return;
}



/* Entry: 103eef6e0; end: 103eef6fb; +[SCSpotlightContextFeatureConfigKeys heroContextRowContainerEnabled] */

void FUN_103eef6e0(void)

{
  if (lRam00000001135e8940 != -1) {
    _swift_once(0x1135e8940,FUN_103eef690);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812408);
  return;
}



/* Entry: 103eef6fc; end: 103eef73f;  */

void FUN_103eef6fc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    _swift_once(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103eef740; end: 103eef77b; -[SCSpotlightContextFeatureConfigKeys init] */

void FUN_103eef740(undefined8 param_1)

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



/* Entry: 103eef77c; end: 103eef7af;  */

void FUN_103eef77c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eef7b0; end: 103eef7b3; -[SCSpotlightContextFeatureConfigKeys .cxx_destruct] */

void FUN_103eef7b0(void)

{
  return;
}



/* Entry: 103eef7b4; end: 103eef7d3;  */

void FUN_103eef7b4(void)

{
  _objc_opt_self(&PTR_PTR_112963a70);
  return;
}



/* Entry: 103eef7d4; end: 103eef7ff;  */

void FUN_103eef7d4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103ef09b4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103eef800; end: 103eef99b;  */

void FUN_103eef800(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 103eef99c; end: 103eefac7;  */

void FUN_103eef99c(ulong *param_1,long param_2)

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
      if (uVar2 == uVar4) goto LAB_103eefa30;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103eefa30:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 103eefac8; end: 103eefae3;  */

void FUN_103eefac8(ulong *param_1,ulong *param_2)

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


