/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044a97f0; end: 1044a986f;  */

void FUN_1044a97f0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dd09f00;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 1044a9870; end: 1044a9b6f;  */

int FUN_1044a9870(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x10] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1044a9b70; end: 1044a9b83;  */

bool FUN_1044a9b70(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1044a9b84; end: 1044a9c5b;  */

void FUN_1044a9b84(void)

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



/* Entry: 1044a9c5c; end: 1044a9c7b;  */

void FUN_1044a9c5c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1044a9c7c; end: 1044a9cbb;  */

void FUN_1044a9c7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307eda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd09f60;
  _swift_getWitnessTable(&UNK_10dd09f60,&UNK_11077adb0);
  puRam000000011307eda0 = puVar1;
  return;
}



/* Entry: 1044a9cbc; end: 1044a9ccb;  */

undefined1  [16] FUN_1044a9cbc(void)

{
  return ZEXT816(0x11077adb0);
}



/* Entry: 1044a9ccc; end: 1044a9cdb; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices myStoriesPlaybackDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044a9ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307eda8));
  return;
}



/* Entry: 1044a9cdc; end: 1044a9ceb; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices friendStoriesNonFriendStoriesCombinedPlaybackDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044a9cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307edb8));
  return;
}



/* Entry: 1044a9cec; end: 1044a9cfb; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices remoteStoriesDataProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044a9cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307edc8));
  return;
}



/* Entry: 1044a9cfc; end: 1044a9d0b; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices singleSnapStoriesDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044a9cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307edd0));
  return;
}



/* Entry: 1044a9d0c; end: 1044a9ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1044a9d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar3 = auStack_a0;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307eda8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307edb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307edb8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307edc0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11307edc8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307edd0) = param_6;
  puVar1 = PTR_PTR_1126ae720;
  _objc_opt_self();
  puStack_70 = &UNK_1005afd28;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1005afcf0;
  puStack_78 = &UNK_11077ae18;
  ppuVar2 = &puStack_90;
  __Block_copy(ppuVar2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar2);
  *(undefined **)(unaff_x20 + _DAT_11307edd8) = puVar1;
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  return puVar3;
}



/* Entry: 1044a9ecc; end: 1044a9f2b; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices init] */

void FUN_1044a9ecc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCStoriesPlaybackServices.SCStoriesPlaybackServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044a9ef8);
  (*pcVar1)();
}



/* Entry: 1044a9f2c; end: 1044a9fb3; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044a9f2c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307eda8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307edb0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307edb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307edc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307edc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307edd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307edd8));
  return;
}



/* Entry: 1044a9fb4; end: 1044aa0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044a9fb4(undefined8 param_1)

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
  puVar1 = &UNK_11077ae78;
  _swift_allocObject(&UNK_11077ae78,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  uVar2 = 0x11307e8e0;
  func_0x0001000285a8(0x11307e8e0,&UNK_10dd08e60);
  uVar3 = uVar2;
  FUN_1044aa15c();
  pcVar4 = FUN_1044aa154;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_1044aa154,puVar1,uVar2,uVar3);
  _swift_release(puVar1);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_48);
  _swift_release(pcVar4);
  puVar1 = &UNK_11077aea0;
  _swift_allocObject(&UNK_11077aea0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_49,FUN_1044aa29c,auStack_80,uVar2);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(puStack_48);
  return 1;
}



/* Entry: 1044aa0f8; end: 1044aa153;  */

void FUN_1044aa0f8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x00010bf7e5e0();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044aa154; end: 1044aa15b;  */

void FUN_1044aa154(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf7e5e0();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044aa15c; end: 1044aa1ab;  */

void FUN_1044aa15c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011307ee10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11307e8e0;
  func_0x00010002969c(0x11307e8e0,&UNK_10dd08e60);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam000000011307ee10 = puVar2;
  return;
}



/* Entry: 1044aa1ac; end: 1044aa29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa1ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

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
  lVar1 = _DAT_11307ee20;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_11307ee20,auStack_80,0x21,0);
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



/* Entry: 1044aa29c; end: 1044aa2b7;  */

void FUN_1044aa29c(void)

{
  long unaff_x20;
  
  FUN_1044aa1ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1044aa2b8; end: 1044aa307; -[SCStoriesPlaybackManagementDataProvidingListenerAnnouncer addListener:] */

undefined8 FUN_1044aa2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_1044a9fb4(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1044aa308; end: 1044aa393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa308(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11077aea0;
  _swift_allocObject(&UNK_11077aea0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1044aa684,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044aa394; end: 1044aa683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa394(long param_1,long param_2)

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
  lVar6 = _DAT_11307ee20;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_11307ee20,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_1044aa560;
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
            if (uVar7 == 0) goto LAB_1044aa5cc;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_1044aa560:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1044aa5c8;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044aa684);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1044aa5c8:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1044aa5cc:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_11307ee20,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044aa684; end: 1044aa69b;  */

void FUN_1044aa684(void)

{
  long unaff_x20;
  
  FUN_1044aa394(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1044aa69c; end: 1044aa753; -[SCStoriesPlaybackManagementDataProvidingListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11077aea0;
  _swift_allocObject(&UNK_11077aea0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1044aa944,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044aa754; end: 1044aa78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa754(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044aa78c; end: 1044aa7f7; -[SCStoriesPlaybackManagementDataProvidingListenerAnnouncer didUpdateSCStoriesPlaybackUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa78c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1044aa7f8; end: 1044aa817;  */

void FUN_1044aa7f8(void)

{
  _objc_opt_self(&PTR_PTR_1129bf1f8);
  return;
}



/* Entry: 1044aa818; end: 1044aa8cb; -[SCStoriesPlaybackManagementDataProvidingListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa818(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_11307ee18;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_11307ee20) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_11307ee08;
  uVar2 = 0x11307e8e0;
  func_0x0001000285a8(0x11307e8e0,&UNK_10dd08e60);
  _swift_allocObject();
  __s7Combine18PassthroughSubjectCACyxq_Gycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_1044aa7f8();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044aa8cc; end: 1044aa8fb;  */

void FUN_1044aa8cc(void)

{
  FUN_1044aa7f8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044aa8fc; end: 1044aa943; -[SCStoriesPlaybackManagementDataProvidingListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa8fc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11307ee18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ee20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307ee08));
  return;
}



/* Entry: 1044aa944; end: 1044aa957;  */

void FUN_1044aa944(void)

{
  FUN_1044aa684();
  return;
}



/* Entry: 1044aa958; end: 1044aa9b3; -[SCStoriesOperaPlayableDataModel storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa958(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ee50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ee50);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044aa9b4; end: 1044aa9c3; -[SCStoriesOperaPlayableDataModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044aa9b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307ee58);
}



/* Entry: 1044aa9c4; end: 1044aa9d3; -[SCStoriesOperaPlayableDataModel itemPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044aa9c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307ee60);
}



/* Entry: 1044aa9d4; end: 1044aa9e3; -[SCStoriesOperaPlayableDataModel swipeToDismissEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044aa9d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ee68);
}



/* Entry: 1044aa9e4; end: 1044aab0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aa9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ee50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307ee58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307ee60) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11307ee68) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044aab0c; end: 1044aabb7; -[SCStoriesOperaPlayableDataModel initWithStoryId:type:itemPosition:swipeToDismissEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aab0c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11307ee50);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11307ee58) = param_4;
  *(undefined8 *)(param_1 + _DAT_11307ee60) = param_5;
  *(undefined1 *)(param_1 + _DAT_11307ee68) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044aabb8; end: 1044aac33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aabb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ee50);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307ee58) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11307ee60) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11307ee68) = *(undefined1 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044aac34; end: 1044aac67; -[SCStoriesOperaPlayableDataModel hash] */

undefined8 FUN_1044aac34(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044aac68();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044aac68; end: 1044aad23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aac68(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11307ee50))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11307ee50);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11307ee58));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11307ee60));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11307ee68));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044aad24; end: 1044aae6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044aad24(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar4 = &lStack_78;
    _swift_dynamicCast(plVar4,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar4 & 1) != 0) {
      lVar5 = ((long *)(unaff_x20 + _DAT_11307ee50))[1];
      lVar6 = ((long *)(lStack_78 + _DAT_11307ee50))[1];
      uVar8 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_11307ee50);
        if (lVar7 == *(long *)(lStack_78 + _DAT_11307ee50) && lVar5 == lVar6) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar7);
          uVar8 = (uint)lVar7;
        }
      }
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11307ee58);
      uVar10 = *(undefined8 *)(lStack_78 + _DAT_11307ee58);
      lVar5 = *(long *)(unaff_x20 + _DAT_11307ee60);
      lVar6 = *(long *)(lStack_78 + _DAT_11307ee60);
      bVar2 = *(byte *)(unaff_x20 + _DAT_11307ee68);
      bVar3 = *(byte *)(lStack_78 + _DAT_11307ee68);
      _objc_release();
      uVar1 = 0;
      if (lVar5 == lVar6) {
        uVar1 = uVar8 & (int)uVar9 == (int)uVar10;
      }
      return uVar1 & ((bVar2 ^ bVar3) ^ 1);
    }
  }
  return 0;
}



/* Entry: 1044aae70; end: 1044aaeef; -[SCStoriesOperaPlayableDataModel isEqual:] */

uint FUN_1044aae70(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1044aad24(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044aaef0; end: 1044aaef3; -[SCStoriesOperaPlayableDataModel copyWithZone:] */

void FUN_1044aaef0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044aaef4; end: 1044aaf0f; -[SCStoriesOperaPlayableDataModel description] */

void FUN_1044aaef4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044aaf10; end: 1044aaf8b; -[SCStoriesOperaPlayableDataModel init] */

void FUN_1044aaf10(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesOperaPlayableDataModelWrapper.swift",0x46,2,0x46,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044aaf58);
  (*pcVar1)();
}



/* Entry: 1044aaf8c; end: 1044aaf9f; -[SCStoriesOperaPlayableDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aaf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307ee50 + 8))
  ;
  return;
}



/* Entry: 1044aafa0; end: 1044aafbf;  */

void FUN_1044aafa0(void)

{
  _objc_opt_self(&PTR_PTR_1129bf2f0);
  return;
}



/* Entry: 1044aafc0; end: 1044aafcb; -[SCStoriesPlaybackDiscoverStoryMetadata compositeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aafc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ee98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ee98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044aafcc; end: 1044aafdb; -[SCStoriesPlaybackDiscoverStoryMetadata feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044aafcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307eea0));
  return;
}



/* Entry: 1044aafdc; end: 1044aafeb; -[SCStoriesPlaybackDiscoverStoryMetadata discoverStoryDedupeFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044aafdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307eea8);
}



/* Entry: 1044aafec; end: 1044aaffb; -[SCStoriesPlaybackDiscoverStoryMetadata isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044aafec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307eeb0);
}



/* Entry: 1044aaffc; end: 1044ab00b; -[SCStoriesPlaybackDiscoverStoryMetadata showOfficialBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044aaffc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307eeb8);
}



/* Entry: 1044ab00c; end: 1044ab01b; -[SCStoriesPlaybackDiscoverStoryMetadata officialBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044ab00c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307eec0);
}



/* Entry: 1044ab01c; end: 1044ab02b; -[SCStoriesPlaybackDiscoverStoryMetadata isOfficial] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab01c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307eec8);
}



/* Entry: 1044ab02c; end: 1044ab03b; -[SCStoriesPlaybackDiscoverStoryMetadata qualifiedBrandSafeStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab02c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307eed0);
}



/* Entry: 1044ab03c; end: 1044ab04b; -[SCStoriesPlaybackDiscoverStoryMetadata impalaMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ab03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307eed8));
  return;
}



/* Entry: 1044ab04c; end: 1044ab05b; -[SCStoriesPlaybackDiscoverStoryMetadata brandFriendliness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044ab04c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307eee0);
}



/* Entry: 1044ab05c; end: 1044ab06b; -[SCStoriesPlaybackDiscoverStoryMetadata isPromoted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab05c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307eee8);
}



/* Entry: 1044ab06c; end: 1044ab07b; -[SCStoriesPlaybackDiscoverStoryMetadata isExplorationStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab06c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307eef0);
}



/* Entry: 1044ab07c; end: 1044ab08b; -[SCStoriesPlaybackDiscoverStoryMetadata isRetrievedFromBoosts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab07c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307eef8);
}



/* Entry: 1044ab08c; end: 1044ab09b; -[SCStoriesPlaybackDiscoverStoryMetadata isUpNextRecommendedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab08c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ef00);
}



/* Entry: 1044ab09c; end: 1044ab0a7; -[SCStoriesPlaybackDiscoverStoryMetadata creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ab09c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ef08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef08);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044ab0a8; end: 1044ab0ff;  */

void FUN_1044ab0a8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044ab100; end: 1044ab10f; -[SCStoriesPlaybackDiscoverStoryMetadata isSuggestive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab100(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ef10);
}



/* Entry: 1044ab110; end: 1044ab11f; -[SCStoriesPlaybackDiscoverStoryMetadata isFriendStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ef18);
}



/* Entry: 1044ab120; end: 1044ab12f; -[SCStoriesPlaybackDiscoverStoryMetadata isSensitive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab120(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ef20);
}



/* Entry: 1044ab130; end: 1044ab13f; -[SCStoriesPlaybackDiscoverStoryMetadata hideSpotlightShareableActions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab130(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ef28);
}



/* Entry: 1044ab140; end: 1044ab18f; -[SCStoriesPlaybackDiscoverStoryMetadata contentCategories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ab140(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef30);
  func_0x0001002ed07c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044ab190; end: 1044ab19f; -[SCStoriesPlaybackDiscoverStoryMetadata isCreatorMonetizable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044ab190(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ef38);
}



/* Entry: 1044ab1a0; end: 1044ab5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ab1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined1 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ee98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307eea0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307eea8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11307eeb0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11307eeb8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11307eec0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11307eec8) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_11307eed0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11307eed8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11307eee0) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11307eee8) = (undefined1)param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11307eef0) = param_13._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11307eef8) = param_13._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef00) = param_13._3_1_;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef08);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef10) = (undefined1)param_17;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef18) = param_17._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef20) = param_17._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef28) = param_17._3_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11307ef30) = param_19;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef38) = param_20;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ab5c0; end: 1044ab733; -[SCStoriesPlaybackDiscoverStoryMetadata initWithCompositeId:feedType:discoverStoryDedupeFp:isSubscribed:showOfficialBadge:officialBadgeType:isOfficial:qualifiedBrandSafeStory:impalaMetadata:brandFriendliness:isPromoted:isExplorationStory:isRetrievedFromBoosts:isUpNextRecommendedStory:creatorId:isSuggestive:isFriendStory:isSensitive:hideSpotlightShareableActions:contentCategories:isCreatorMonetizable:] */

void FUN_1044ab5c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 uStack_a8;
  long lStack_a0;
  
  if (param_3 == 0) {
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_2;
    lStack_a0 = param_3;
  }
  if (in_stack_00000020 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  uVar1 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (in_stack_00000030,uVar1);
  _objc_retain(param_4);
  _objc_retain(param_11);
  func_0x0001044ab3b0(lStack_a0,uStack_a8,param_4,param_5,param_6,param_7,param_8,
                      (undefined1)param_9,param_9._1_1_);
  return;
}



/* Entry: 1044ab734; end: 1044ab7a3;  */

undefined8 FUN_1044ab734(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1044ab8d0(param_1);
  func_0x00010449a89c(param_1);
  return uVar1;
}



/* Entry: 1044ab7a4; end: 1044ab7a7; -[SCStoriesPlaybackDiscoverStoryMetadata copyWithZone:] */

void FUN_1044ab7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ab7a8; end: 1044ab7e3; -[SCStoriesPlaybackDiscoverStoryMetadata description] */

void FUN_1044ab7a8(void)

{
  undefined1 auStack_108 [232];
  
  FUN_1044abbdc(auStack_108);
  func_0x00010449a89c(auStack_108);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ab7e4; end: 1044ab85f; -[SCStoriesPlaybackDiscoverStoryMetadata init] */

void FUN_1044ab7e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackDiscoverStoryMetadataWrapper.swift",0x4d,2,
             0x74,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ab82c);
  (*pcVar1)();
}



/* Entry: 1044ab860; end: 1044ab8cf; -[SCStoriesPlaybackDiscoverStoryMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ab860(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ee98 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307eea0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307eed8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ef08 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307ef30));
  return;
}



/* Entry: 1044ab8d0; end: 1044abbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ab8d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c0;
  long lStack_b8;
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
  undefined1 uStack_50;
  
  _swift_getObjectType();
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ee98);
  puVar1[1] = uStack_148;
  *puVar1 = uStack_150;
  uStack_158 = param_1[2];
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11307eea0) = uStack_158;
  *(undefined8 *)(unaff_x20 + _DAT_11307eea8) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11307eeb0) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(unaff_x20 + _DAT_11307eeb8) = *(undefined1 *)((long)param_1 + 0x21);
  *(undefined8 *)(unaff_x20 + _DAT_11307eec0) = param_1[5];
  *(undefined1 *)(unaff_x20 + _DAT_11307eec8) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(unaff_x20 + _DAT_11307eed0) = *(undefined1 *)((long)param_1 + 0x31);
  lStack_b8 = param_1[8];
  uStack_c0 = param_1[7];
  uStack_a8 = param_1[10];
  uStack_b0 = param_1[9];
  uStack_98 = param_1[0xc];
  uStack_a0 = param_1[0xb];
  uStack_88 = param_1[0xe];
  uStack_90 = param_1[0xd];
  uStack_78 = param_1[0x10];
  uStack_80 = param_1[0xf];
  uStack_68 = param_1[0x12];
  uStack_70 = param_1[0x11];
  uStack_58 = param_1[0x14];
  uStack_60 = param_1[0x13];
  uStack_50 = *(undefined1 *)(param_1 + 0x15);
  if (lStack_b8 == 1) {
    FUN_1044abe44(&uStack_150,&uStack_140,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044abe44(&uStack_158,&uStack_140,0x112dc3de0,&UNK_10d9813c0);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_f8 = param_1[0x10];
    uStack_100 = param_1[0xf];
    uStack_e8 = param_1[0x12];
    uStack_f0 = param_1[0x11];
    uStack_d8 = param_1[0x14];
    uStack_e0 = param_1[0x13];
    uStack_d0 = *(undefined1 *)(param_1 + 0x15);
    uStack_138 = param_1[8];
    uStack_140 = param_1[7];
    uStack_128 = param_1[10];
    uStack_130 = param_1[9];
    uStack_118 = param_1[0xc];
    uStack_120 = param_1[0xb];
    uStack_108 = param_1[0xe];
    uStack_110 = param_1[0xd];
    FUN_1044ac6f8(0);
    _objc_allocWithZone();
    FUN_1044abe44(&uStack_150,&uStack_200,0x112d35ff8,&UNK_10d900cd0);
    FUN_1044abe44(&uStack_158,&uStack_200,0x112dc3de0,&UNK_10d9813c0);
    FUN_1044abe44(&uStack_c0,&uStack_200,0x11307e998,&UNK_10dd09750);
    puVar1 = &uStack_140;
    FUN_1044ac37c();
  }
  *(undefined8 **)(unaff_x20 + _DAT_11307eed8) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11307eee0) = param_1[0x16];
  *(undefined1 *)(unaff_x20 + _DAT_11307eee8) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(unaff_x20 + _DAT_11307eef0) = *(undefined1 *)((long)param_1 + 0xb9);
  *(undefined1 *)(unaff_x20 + _DAT_11307eef8) = *(undefined1 *)((long)param_1 + 0xba);
  *(undefined1 *)(unaff_x20 + _DAT_11307ef00) = *(undefined1 *)((long)param_1 + 0xbb);
  uVar2 = param_1[0x18];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef08);
  puVar1[1] = param_1[0x19];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef10) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(unaff_x20 + _DAT_11307ef18) = *(undefined1 *)((long)param_1 + 0xd1);
  *(undefined1 *)(unaff_x20 + _DAT_11307ef20) = *(undefined1 *)((long)param_1 + 0xd2);
  uStack_1f8 = param_1[0x19];
  uStack_200 = param_1[0x18];
  *(undefined1 *)(unaff_x20 + _DAT_11307ef28) = *(undefined1 *)((long)param_1 + 0xd3);
  uStack_160 = param_1[0x1b];
  *(undefined8 *)(unaff_x20 + _DAT_11307ef30) = uStack_160;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef38) = *(undefined1 *)(param_1 + 0x1c);
  FUN_1044abe44(&uStack_200,auStack_170,0x112d35ff8,&UNK_10d900cd0);
  FUN_1044abe44(&uStack_160,auStack_170,0x112da1fa0,&UNK_10d945e90);
  _objc_msgSendSuper2(&stack0xfffffffffffffe80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044abbdc; end: 1044abe23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abbdc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
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
  undefined1 uStack_70;
  
  uVar19 = *(undefined8 *)(param_2 + _DAT_11307ee98);
  uVar2 = ((undefined8 *)(param_2 + _DAT_11307ee98))[1];
  uVar18 = *(undefined8 *)(param_2 + _DAT_11307eea0);
  uVar21 = *(undefined8 *)(param_2 + _DAT_11307eea8);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11307eeb0);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11307eeb8);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11307eec0);
  uVar5 = *(undefined1 *)(param_2 + _DAT_11307eec8);
  uVar6 = *(undefined1 *)(param_2 + _DAT_11307eed0);
  if (*(long *)(param_2 + _DAT_11307eed8) == 0) {
    uStack_70 = 0;
    uStack_d8 = 1;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    FUN_1044ac5f4(&uStack_e0);
  }
  uVar17 = *(undefined8 *)(param_2 + _DAT_11307eee0);
  uVar7 = *(undefined1 *)(param_2 + _DAT_11307eee8);
  uVar8 = *(undefined1 *)(param_2 + _DAT_11307eef0);
  uVar9 = *(undefined1 *)(param_2 + _DAT_11307eef8);
  uVar10 = *(undefined1 *)(param_2 + _DAT_11307ef00);
  uVar11 = *(undefined1 *)(param_2 + _DAT_11307ef10);
  uVar12 = *(undefined1 *)(param_2 + _DAT_11307ef18);
  uVar13 = *(undefined1 *)(param_2 + _DAT_11307ef20);
  uVar14 = *(undefined1 *)(param_2 + _DAT_11307ef28);
  uVar20 = *(undefined8 *)(param_2 + _DAT_11307ef30);
  puVar1 = (undefined8 *)(param_2 + _DAT_11307ef08);
  uVar15 = *(undefined1 *)(param_2 + _DAT_11307ef38);
  *param_1 = uVar19;
  param_1[1] = uVar2;
  param_1[2] = uVar18;
  param_1[3] = uVar21;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar4;
  param_1[5] = uVar16;
  *(undefined1 *)(param_1 + 6) = uVar5;
  *(undefined1 *)((long)param_1 + 0x31) = uVar6;
  param_1[8] = uStack_d8;
  param_1[7] = uStack_e0;
  param_1[10] = uStack_c8;
  param_1[9] = uStack_d0;
  param_1[0xc] = uStack_b8;
  param_1[0xb] = uStack_c0;
  param_1[0xe] = uStack_a8;
  param_1[0xd] = uStack_b0;
  param_1[0x10] = uStack_98;
  param_1[0xf] = uStack_a0;
  param_1[0x12] = uStack_88;
  param_1[0x11] = uStack_90;
  param_1[0x14] = uStack_78;
  param_1[0x13] = uStack_80;
  *(undefined1 *)(param_1 + 0x15) = uStack_70;
  param_1[0x16] = uVar17;
  *(undefined1 *)(param_1 + 0x17) = uVar7;
  *(undefined1 *)((long)param_1 + 0xb9) = uVar8;
  *(undefined1 *)((long)param_1 + 0xba) = uVar9;
  *(undefined1 *)((long)param_1 + 0xbb) = uVar10;
  uVar19 = puVar1[1];
  uVar16 = *puVar1;
  param_1[0x19] = puVar1[1];
  param_1[0x18] = uVar16;
  *(undefined1 *)(param_1 + 0x1a) = uVar11;
  *(undefined1 *)((long)param_1 + 0xd1) = uVar12;
  *(undefined1 *)((long)param_1 + 0xd2) = uVar13;
  *(undefined1 *)((long)param_1 + 0xd3) = uVar14;
  param_1[0x1b] = uVar20;
  *(undefined1 *)(param_1 + 0x1c) = uVar15;
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(uVar18);
  _swift_bridgeObjectRetain(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar20);
  return;
}



/* Entry: 1044abe24; end: 1044abe43;  */

void FUN_1044abe24(void)

{
  _objc_opt_self(&PTR_PTR_1129bf3d0);
  return;
}



/* Entry: 1044abe44; end: 1044abebb;  */

undefined8 FUN_1044abe44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1044abebc; end: 1044abec7; -[SCStoriesPlaybackImpalaMetadata businessName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abebc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ef68))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef68);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044abec8; end: 1044abed3; -[SCStoriesPlaybackImpalaMetadata businessId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abec8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ef70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef70);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044abed4; end: 1044abedf; -[SCStoriesPlaybackImpalaMetadata businessLogoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abed4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ef78))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef78);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044abee0; end: 1044abeeb; -[SCStoriesPlaybackImpalaMetadata businessLinkURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abee0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ef80))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef80);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044abeec; end: 1044abef7; -[SCStoriesPlaybackImpalaMetadata bitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abeec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ef88))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef88);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044abef8; end: 1044abf03; -[SCStoriesPlaybackImpalaMetadata bitmojiAvatarSelfieId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abef8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11307ef90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11307ef90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044abf04; end: 1044abf5b;  */

void FUN_1044abf04(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1044abf5c; end: 1044abf6b; -[SCStoriesPlaybackImpalaMetadata showOfficialBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044abf5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307ef98);
}



/* Entry: 1044abf6c; end: 1044abf7b; -[SCStoriesPlaybackImpalaMetadata officialBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044abf6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11307efa0);
}



/* Entry: 1044abf7c; end: 1044abf8b; -[SCStoriesPlaybackImpalaMetadata publicStoriesProfileMonetizedStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1044abf7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307efa8);
}



/* Entry: 1044abf8c; end: 1044ac203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044abf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef70);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef78);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef80);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef88);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef90);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef98) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11307efa0) = param_15;
  *(undefined1 *)(unaff_x20 + _DAT_11307efa8) = param_16;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ac204; end: 1044ac37b; -[SCStoriesPlaybackImpalaMetadata initWithBusinessName:businessId:businessLogoURL:businessLinkURL:bitmojiAvatarId:bitmojiAvatarSelfieId:showOfficialBadge:officialBadgeType:publicStoriesProfileMonetizedStatus:] */

void FUN_1044ac204(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined1 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_78 = param_2;
    uStack_70 = param_3;
  }
  if (param_4 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    param_4 = uStack_80;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_2;
  }
  if (param_5 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_98 = param_2;
    uStack_90 = param_5;
  }
  lVar2 = param_6;
  _objc_retain();
  lVar3 = param_7;
  _objc_retain();
  lVar4 = param_8;
  _objc_retain();
  if (lVar2 == 0) {
    param_6 = 0;
    uVar1 = 0;
    uVar5 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
    uVar5 = param_2;
    _objc_release(lVar2);
    uVar1 = param_2;
  }
  if (lVar3 == 0) {
    param_7 = 0;
    uVar6 = 0;
    uVar7 = uVar5;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = uVar5;
    _objc_release(lVar3);
    uVar6 = uVar5;
  }
  if (lVar4 == 0) {
    param_8 = 0;
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  func_0x0001044ac0c8(uStack_70,uStack_78,param_4,uStack_88,uStack_90,uStack_98,param_6,uVar1,
                      param_7,uVar6,param_8,uVar7,param_9);
  return;
}



/* Entry: 1044ac37c; end: 1044ac4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ac37c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
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
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef68);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef70);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef78);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uVar2 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef80);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef88);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307ef90);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11307ef98) = *(undefined1 *)(param_1 + 0xc);
  *(undefined8 *)(unaff_x20 + _DAT_11307efa0) = param_1[0xd];
  func_0x000101223174(&uStack_40,auStack_a0);
  func_0x000101223174(&uStack_50,auStack_a0);
  func_0x000101223174(&uStack_60,auStack_a0);
  func_0x000101223174(&uStack_70,auStack_a0);
  func_0x000101223174(&uStack_80,auStack_a0);
  func_0x000101223174(&uStack_90,auStack_a0);
  func_0x00010449a868(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_11307efa8) = *(undefined1 *)(param_1 + 0xe);
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ac4b0; end: 1044ac4b3; -[SCStoriesPlaybackImpalaMetadata copyWithZone:] */

void FUN_1044ac4b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ac4b4; end: 1044ac4e7; -[SCStoriesPlaybackImpalaMetadata description] */

void FUN_1044ac4b4(void)

{
  undefined1 auStack_88 [120];
  
  FUN_1044ac5f4(auStack_88);
  func_0x00010449a868(auStack_88);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ac4e8; end: 1044ac563; -[SCStoriesPlaybackImpalaMetadata init] */

void FUN_1044ac4e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPlaybackServices/SCStoriesPlaybackImpalaMetadataWrapper.swift",0x46,2,0x43,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ac530);
  (*pcVar1)();
}



/* Entry: 1044ac564; end: 1044ac5f3; -[SCStoriesPlaybackImpalaMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ac564(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ef68 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ef70 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ef78 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ef80 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11307ef88 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11307ef90 + 8))
  ;
  return;
}



/* Entry: 1044ac5f4; end: 1044ac6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ac5f4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11307ef68);
  puVar2 = (undefined8 *)(param_2 + _DAT_11307ef70);
  puVar3 = (undefined8 *)(param_2 + _DAT_11307ef78);
  puVar4 = (undefined8 *)(param_2 + _DAT_11307ef80);
  puVar5 = (undefined8 *)(param_2 + _DAT_11307ef88);
  uVar7 = *(undefined1 *)(param_2 + _DAT_11307ef98);
  puVar6 = (undefined8 *)(param_2 + _DAT_11307ef90);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11307efa0);
  uVar8 = *(undefined1 *)(param_2 + _DAT_11307efa8);
  uVar9 = puVar1[1];
  uVar12 = *puVar1;
  uVar11 = puVar2[1];
  uVar14 = puVar2[1];
  uVar13 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  uVar12 = puVar3[1];
  uVar14 = *puVar3;
  uVar13 = puVar4[1];
  uVar16 = puVar4[1];
  uVar15 = *puVar4;
  param_1[5] = puVar3[1];
  param_1[4] = uVar14;
  param_1[7] = uVar16;
  param_1[6] = uVar15;
  uVar14 = puVar5[1];
  uVar16 = *puVar5;
  uVar15 = puVar6[1];
  uVar18 = puVar6[1];
  uVar17 = *puVar6;
  param_1[9] = puVar5[1];
  param_1[8] = uVar16;
  param_1[0xb] = uVar18;
  param_1[10] = uVar17;
  *(undefined1 *)(param_1 + 0xc) = uVar7;
  param_1[0xd] = uVar10;
  *(undefined1 *)(param_1 + 0xe) = uVar8;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar15);
  return;
}



/* Entry: 1044ac6f8; end: 1044ac717;  */

void FUN_1044ac6f8(void)

{
  _objc_opt_self(&PTR_PTR_1129bf538);
  return;
}


