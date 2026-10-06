/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100014064; end: 10001406b;  */

void FUN_100014064(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar2 = param_1;
    }
    uVar3 = 0;
    if (param_4 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
      uVar3 = param_3;
    }
    if (param_5 != 0) {
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (param_5,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
                 PTR___ss11AnyHashableVSHsWP_1000a0730);
    }
    func_0x00010006eda0(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(param_5);
  }
  return;
}



/* Entry: 10001406c; end: 10001408f;  */

void FUN_10001406c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100014090; end: 1000140bf;  */

void FUN_100014090(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return;
}



/* Entry: 1000140c0; end: 10001410f;  */

void FUN_1000140c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000dd208 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000dd1f0;
  FUN_100014110(0x1000dd1f0,&UNK_10008f250);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_1000a00c0;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_1000a00c0,uVar1);
  puRam00000001000dd208 = puVar2;
  return;
}



/* Entry: 100014110; end: 100014163;  */

ulong FUN_100014110(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Entry: 100014164; end: 100014253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014164(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

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
  lVar1 = _DAT_1000dd220;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_1000dd220,auStack_80,0x21,0);
    _swift_bridgeObjectRetain(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_1000154b8(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    _swift_endAccess(auStack_80);
    _objc_release(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 100014254; end: 10001426f;  */

void FUN_100014254(void)

{
  long unaff_x20;
  
  FUN_100014164(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100014270; end: 1000142bf; -[SCEventListenerAnnouncer addListener:] */

undefined8 FUN_100014270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_100013de4(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1000142c0; end: 10001434b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000142c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_1000a1180;
  _swift_allocObject(&UNK_1000a1180,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_10001463c,auStack_50,PTR___sytN_1000a08a8 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 10001434c; end: 10001463b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001434c(long param_1,long param_2)

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
  lVar6 = _DAT_1000dd220;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_1000dd220,puVar4,0,0);
    lVar6 = *(long *)(lVar9 + lVar6);
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lVar9);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar9 = param_2, FUN_1000155e8(), ((ulong)puVar4 & 1) == 0)) {
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
        FUN_1000149d8();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_100014518;
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
            if (uVar7 == 0) goto LAB_100014584;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_100014518:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_100014580;
            uVar3 = 0;
            auStack_f0[0] = uVar7;
            __s7Combine14AnyCancellableCMa(0);
            _swift_dynamicCast(auStack_d8,auStack_f0,PTR___syXlN_1000a0898 + 8,uVar3,7);
            uVar5 = uVar11;
            uVar7 = auStack_d8[0];
            lVar6 = lVar9;
            lVar10 = lVar9;
          }
        }
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10001463c);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_100014580:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_100014584:
      FUN_100014a1c(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_1000dd220,auStack_f0,0x21,0);
    FUN_100015434(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 10001463c; end: 100014653;  */

void FUN_10001463c(void)

{
  long unaff_x20;
  
  FUN_10001434c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100014654; end: 10001470b; -[SCEventListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_1000a1180;
  _swift_allocObject(&UNK_1000a1180,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_100014a24,auStack_60,PTR___sytN_1000a08a8 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 10001470c; end: 10001478f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001470c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 100014790; end: 10001488b; -[SCEventListenerAnnouncer didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014790(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

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
              (param_5,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
               PTR___ss11AnyHashableVSHsWP_1000a0730);
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



/* Entry: 10001488c; end: 1000148ab;  */

void FUN_10001488c(void)

{
  _objc_opt_self(&PTR_PTR_1000d3318);
  return;
}



/* Entry: 1000148ac; end: 10001495f; -[SCEventListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000148ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_1000dd210;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_1000dd220) = PTR___swiftEmptyDictionarySingleton_1000a08b8;
  lVar1 = _DAT_1000dd200;
  uVar2 = 0x1000dd1f0;
  FUN_1000103e0(0x1000dd1f0,&UNK_10008f250);
  _swift_allocObject();
  __s7Combine18PassthroughSubjectCACyxq_Gycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_10001488c();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100014960; end: 10001498f;  */

void FUN_100014960(void)

{
  FUN_10001488c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 100014990; end: 1000149d7; -[SCEventListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014990(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1000dd210));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000dd220));
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(*(undefined8 *)(param_1 + _DAT_1000dd200));
  return;
}



/* Entry: 1000149d8; end: 100014a1b;  */

void FUN_1000149d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000dd250 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s7Combine14AnyCancellableCMa(0xff);
  puVar2 = PTR___s7Combine14AnyCancellableCSHAAMc_1000a00a0;
  _swift_getWitnessTable(PTR___s7Combine14AnyCancellableCSHAAMc_1000a00a0,uVar1);
  puRam00000001000dd250 = puVar2;
  return;
}



/* Entry: 100014a1c; end: 100014a23;  */

void FUN_100014a1c(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 100014a24; end: 100014a37;  */

void FUN_100014a24(void)

{
  FUN_10001463c();
  return;
}



/* Entry: 100014a38; end: 100014a3b;  */

void FUN_100014a38(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100014a3c; end: 100014b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100014a3c(undefined8 param_1)

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
  
  puStack_48 = PTR___swiftEmptySetSingleton_1000a08c0;
  puVar1 = &UNK_1000a11a8;
  _swift_allocObject(&UNK_1000a11a8,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  uVar2 = 0x1000dd1f8;
  FUN_1000103e0(0x1000dd1f8,&UNK_10008f290);
  uVar3 = uVar2;
  FUN_100014c38();
  pcVar4 = FUN_100014c30;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_100014c30,puVar1,uVar2,uVar3);
  _swift_release(puVar1);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_48);
  _swift_release(pcVar4);
  puVar1 = &UNK_1000a11d0;
  _swift_allocObject(&UNK_1000a11d0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar2 = 0x1000dd218;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  FUN_1000103e0(0x1000dd218,&UNK_10008f258);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&uStack_49,FUN_100014d78,auStack_80,uVar2);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(puStack_48);
  return 1;
}



/* Entry: 100014b80; end: 100014ba3;  */

void FUN_100014b80(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100014ba4; end: 100014c2f;  */

void FUN_100014ba4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  lVar1 = param_1[1];
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    }
    func_0x00010006edc0(param_2);
    _swift_unknownObjectRelease(param_2);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 100014c30; end: 100014c37;  */

void FUN_100014c30(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  lVar1 = param_1[1];
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar1);
    }
    func_0x00010006edc0(lVar2);
    _swift_unknownObjectRelease(lVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 100014c38; end: 100014c87;  */

void FUN_100014c38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000dd260 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000dd1f8;
  FUN_100014110(0x1000dd1f8,&UNK_10008f290);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_1000a00c0;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_1000a00c0,uVar1);
  puRam00000001000dd260 = puVar2;
  return;
}



/* Entry: 100014c88; end: 100014d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014c88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

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
  lVar1 = _DAT_1000dd270;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_1000dd270,auStack_80,0x21,0);
    _swift_bridgeObjectRetain(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_1000154b8(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    _swift_endAccess(auStack_80);
    _objc_release(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 100014d78; end: 100014d93;  */

void FUN_100014d78(void)

{
  long unaff_x20;
  
  FUN_100014c88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100014d94; end: 100014de3; -[SCUpdateListenerAnnouncer addListener:] */

undefined8 FUN_100014d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_100014a3c(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 100014de4; end: 100014e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014de4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_1000a11d0;
  _swift_allocObject(&UNK_1000a11d0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_100015160,auStack_50,PTR___sytN_1000a08a8 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 100014e70; end: 10001515f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014e70(long param_1,long param_2)

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
  lVar6 = _DAT_1000dd270;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_1000dd270,puVar4,0,0);
    lVar6 = *(long *)(lVar9 + lVar6);
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lVar9);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar9 = param_2, FUN_1000155e8(), ((ulong)puVar4 & 1) == 0)) {
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
        FUN_1000149d8();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_10001503c;
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
            if (uVar7 == 0) goto LAB_1000150a8;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_10001503c:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1000150a4;
            uVar3 = 0;
            auStack_f0[0] = uVar7;
            __s7Combine14AnyCancellableCMa(0);
            _swift_dynamicCast(auStack_d8,auStack_f0,PTR___syXlN_1000a0898 + 8,uVar3,7);
            uVar5 = uVar11;
            uVar7 = auStack_d8[0];
            lVar6 = lVar9;
            lVar10 = lVar9;
          }
        }
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100015160);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1000150a4:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1000150a8:
      FUN_100014a1c(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_1000dd270,auStack_f0,0x21,0);
    FUN_100015434(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 100015160; end: 100015177;  */

void FUN_100015160(void)

{
  long unaff_x20;
  
  FUN_100014e70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100015178; end: 10001522f; -[SCUpdateListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_1000a11d0;
  _swift_allocObject(&UNK_1000a11d0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_100015ba8,auStack_60,PTR___sytN_1000a08a8 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 100015230; end: 100015267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_30);
  return;
}



/* Entry: 100015268; end: 1000152e7; -[SCUpdateListenerAnnouncer didUpdateWithAnnouncerIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015268(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain();
  __s7Combine18PassthroughSubjectC4sendyyxF(&lStack_40);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1000152e8; end: 100015307;  */

void FUN_1000152e8(void)

{
  _objc_opt_self(&PTR_PTR_1000d3410);
  return;
}



/* Entry: 100015308; end: 1000153bb; -[SCUpdateListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015308(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_1000dd268;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_1000dd270) = PTR___swiftEmptyDictionarySingleton_1000a08b8;
  lVar1 = _DAT_1000dd258;
  uVar2 = 0x1000dd1f8;
  FUN_1000103e0(0x1000dd1f8,&UNK_10008f290);
  _swift_allocObject();
  __s7Combine18PassthroughSubjectCACyxq_Gycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_1000152e8();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 1000153bc; end: 1000153eb;  */

void FUN_1000153bc(void)

{
  FUN_1000152e8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 1000153ec; end: 100015433; -[SCUpdateListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000153ec(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1000dd268));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000dd270));
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(*(undefined8 *)(param_1 + _DAT_1000dd258));
  return;
}



/* Entry: 100015434; end: 1000154b7;  */

undefined8 FUN_100015434(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  FUN_1000155e8();
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10001567c();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000100015a3c(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 1000154b8; end: 1000155e7;  */

void FUN_1000154b8(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1000155e8();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001557c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1000157d8(lVar5);
    uVar2 = param_2;
    FUN_1000155e8();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSON_1000a0638);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100015548);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10001567c();
    lVar5 = *unaff_x20;
    goto joined_r0x000100015590;
  }
  lVar5 = *unaff_x20;
joined_r0x000100015590:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010006bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_1000a08f8)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000155e8);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 1000155e8; end: 100015617;  */

void FUN_1000155e8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100015618; end: 10001567b;  */

void FUN_100015618(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10001567c; end: 1000157d7;  */

void FUN_10001567c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  FUN_1000103e0(0x1000dd2a0,&UNK_10008f2b8);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_100015758;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar6 != 0) break;
LAB_100015758:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000157d8);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1000157b0;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1000157b0:
  _swift_release(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1000157d8; end: 100015ba7;  */

void FUN_1000157d8(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x1000dd2a0;
  FUN_1000103e0(0x1000dd2a0,&UNK_10008f2b8);
  lVar4 = lVar11;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100015a08:
    _swift_release(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100015a38);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              _bzero(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_100015a08;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100015a3c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 100015ba8; end: 100015bbb;  */

void FUN_100015ba8(void)

{
  FUN_100015160();
  return;
}



/* Entry: 100015bbc; end: 100015bbf;  */

void FUN_100015bbc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100015bc0; end: 100015c2b;  */

bool FUN_100015bc0(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(param_3 + 0x28);
  lVar4 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    uVar2 = plVar3[-1];
    lVar1 = *plVar3;
    if (uVar2 == param_1 && lVar1 == param_2) break;
    plVar3 = plVar3 + 2;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,lVar1,param_1,param_2,0);
  } while ((uVar2 & 1) == 0);
  return lVar4 != 0;
}



/* Entry: 100015c2c; end: 100015c3b; +[SCMessagingNotificationTypeHelpers isSnapPushType:] */

uint FUN_100015c2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    lVar1 = 0x1000dd2a8;
    FUN_1000103e0(0x1000dd2a8,&UNK_10008f2c0);
    _swift_initStaticObject();
    FUN_100015bc0(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    _swift_bridgeObjectRelease(param_2);
    _swift_arrayDestroy(lVar1 + 0x20,2,PTR___sSSN_1000a0680);
  }
  return uVar2 & 1;
}



/* Entry: 100015c3c; end: 100015c4b; +[SCMessagingNotificationTypeHelpers isChatPushType:] */

uint FUN_100015c3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    lVar1 = 0x1000dd2a8;
    FUN_1000103e0(0x1000dd2a8,&UNK_10008f2c0);
    _swift_initStaticObject();
    FUN_100015bc0(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    _swift_bridgeObjectRelease(param_2);
    _swift_arrayDestroy(lVar1 + 0x20,3,PTR___sSSN_1000a0680);
  }
  return uVar2 & 1;
}



/* Entry: 100015c4c; end: 100015ceb;  */

uint FUN_100015c4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    lVar1 = 0x1000dd2a8;
    FUN_1000103e0(0x1000dd2a8,&UNK_10008f2c0);
    _swift_initStaticObject();
    FUN_100015bc0(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    _swift_bridgeObjectRelease(param_2);
    _swift_arrayDestroy(lVar1 + 0x20,param_5,PTR___sSSN_1000a0680);
  }
  return uVar2 & 1;
}



/* Entry: 100015cec; end: 100015d7f; +[SCMessagingNotificationTypeHelpers isBitmojiReactionPushType:] */

uint FUN_100015cec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    lVar1 = 0x1000dd2a8;
    FUN_1000103e0(0x1000dd2a8,&UNK_10008f2c0);
    _swift_initStaticObject();
    FUN_100015bc0(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    _swift_arrayDestroy(lVar1 + 0x20,10,PTR___sSSN_1000a0680);
    _swift_bridgeObjectRelease(param_2);
  }
  return uVar2 & 1;
}



/* Entry: 100015d80; end: 100015dbb; -[SCMessagingNotificationTypeHelpers init] */

void FUN_100015d80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100015dbc; end: 100015e0f;  */

void FUN_100015dbc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 100015e10; end: 100015eb7; +[SCFriendingNotificationSnapchatterConverter ExtractNotificationSnapchattersFrom:type:error:] */

void FUN_100015e10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_retain();
  lVar1 = param_3;
  FUN_1000171a8();
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_2);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001000175f8(0,0x1000dd468,&PTR_PTR_1000d21b0);
    lVar3 = lVar1;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar2);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar3);
  return;
}



/* Entry: 100015eb8; end: 100015ef3; -[SCFriendingNotificationSnapchatterConverter init] */

void FUN_100015eb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_100017590();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100015ef4; end: 100015f23;  */

void FUN_100015ef4(void)

{
  FUN_100017590();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 100015f24; end: 100015f27; -[SCFriendingNotificationSnapchatterConverter .cxx_destruct] */

void FUN_100015f24(void)

{
  return;
}



/* Entry: 100015f28; end: 100015f93;  */

void FUN_100015f28(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100021220(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001000175f8(0,0x1000dd468,&PTR_PTR_1000d21b0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x1000dd490;
      plVar5 = (long *)&UNK_10008f398;
      goto FUN_1000103e0;
    }
  }
  puVar2 = (ulong *)0x1000dd488;
  plVar5 = (long *)&UNK_10008f390;
FUN_1000103e0:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    _swift_getTypeByMangledNameInContext(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100015f94; end: 100015ff7;  */

undefined1  [16] FUN_100015f94(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_10001608c;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_10001608c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 100015ff8; end: 1000160a3;  */

undefined1  [16] FUN_100015ff8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_10001608c;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_10001608c:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 1000160a4; end: 100016267;  */

ulong FUN_1000160a4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100016188);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001618c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___SCPBNFriendingSuggestion_1000d1b78;
    _objc_opt_self(PTR__OBJC_CLASS___SCPBNFriendingSuggestion_1000d1b78);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___SCPBNFriendingSuggestion_1000d1b78;
    _objc_opt_self(PTR__OBJC_CLASS___SCPBNFriendingSuggestion_1000d1b78);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001000175f8(0,0x1000dd480,&PTR__OBJC_CLASS___SCPBNFriendingSuggestion_1000d1b78);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100016268);
  (*pcVar2)();
}



/* Entry: 100016268; end: 10001638f;  */

ulong FUN_100016268(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100016390);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100016390(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001638c);
      (*pcVar1)();
    }
    FUN_100016410(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 100016390; end: 10001640f;  */

undefined * FUN_100016390(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_1000a08b0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100015f28();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100016410; end: 100016527;  */

long FUN_100016410(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100016524);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100016528);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001000175f8(0,0x1000dd468,&PTR_PTR_1000d21b0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001000175f8(0,0x1000dd468,&PTR_PTR_1000d21b0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100016520);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_1000a0780)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100016528; end: 100016633;  */

undefined * FUN_100016528(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_1000a08b8;
  if (puVar8 != (undefined *)0x0) {
    FUN_1000103e0(0x1000dd498,&UNK_10008f3a0);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      func_0x000100017638(param_1,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      FUN_100015f94();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100016630);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100017688(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100016634);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 100016634; end: 1000171a7;  */

/* WARNING: Type propagation algorithm not settling */

undefined *
FUN_100016634(undefined8 param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined8 *param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 auStack_1b8 [80];
  undefined1 auStack_168 [80];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [88];
  
  ppuVar3 = param_2;
  ppuVar18 = param_3;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10001717c);
    (*pcVar2)();
  }
  ppuVar4 = ppuVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuVar7 = ppuVar18;
  _objc_release(ppuVar3);
  _swift_bridgeObjectRelease(ppuVar18);
  uVar1 = (ulong)ppuVar4 & 0xffffffffffff;
  if (((ulong)ppuVar18 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)ppuVar18 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    if (param_5 == (undefined8 *)0x0) {
      return (undefined *)0x0;
    }
    lVar6 = 0x1000dd470;
    FUN_1000103e0(0x1000dd470,&UNK_10008f380);
    puVar14 = auStack_1b8;
    _swift_initStackObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar16 = (undefined8 *)(lVar6 + 0x20);
    *puVar16 = uVar8;
    puVar10 = PTR___sSSN_1000a0680;
    *(undefined **)(lVar6 + 0x48) = PTR___sSSN_1000a0680;
    *(undefined1 **)(lVar6 + 0x28) = puVar14;
    *(undefined8 *)(lVar6 + 0x30) = 0x73755f7974706d65;
    uVar8 = 0xed000064695f7265;
    goto LAB_1000168b8;
  }
  ppuVar3 = param_2;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar18 = ppuVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar4 = ppuVar7;
    _objc_release(ppuVar3);
    ppuVar5 = &PTR____CFConstantStringClassReference_1000a5148;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar3 = ppuVar4;
    if (ppuVar7 == (undefined **)0x0) goto LAB_1000167c4;
    ppuVar3 = ppuVar7;
    if (ppuVar18 == ppuVar5 && ppuVar7 == ppuVar4) {
LAB_100016824:
      _swift_bridgeObjectRelease(ppuVar3);
      _swift_bridgeObjectRelease(ppuVar4);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (ppuVar18,ppuVar7,ppuVar5,ppuVar4,0);
      _swift_bridgeObjectRelease(ppuVar7);
      _swift_bridgeObjectRelease(ppuVar4);
      if (((ulong)ppuVar18 & 1) == 0) goto LAB_1000167cc;
    }
LAB_100016834:
    if (param_5 == (undefined8 *)0x0) {
      return (undefined *)0x0;
    }
    lVar6 = 0x1000dd470;
    FUN_1000103e0(0x1000dd470,&UNK_10008f380);
    puVar14 = auStack_168;
    _swift_initStackObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar16 = (undefined8 *)(lVar6 + 0x20);
    *puVar16 = uVar8;
    puVar10 = PTR___sSSN_1000a0680;
    *(undefined **)(lVar6 + 0x48) = PTR___sSSN_1000a0680;
    *(undefined1 **)(lVar6 + 0x28) = puVar14;
    *(undefined8 *)(lVar6 + 0x30) = 0x5f746f6270616e73;
    uVar8 = 0xef64695f72657375;
LAB_1000168b8:
    *(undefined8 *)(lVar6 + 0x38) = uVar8;
    lVar9 = lVar6;
    FUN_100016528(lVar6);
    _swift_setDeallocating(lVar6);
    FUN_1000175b0(puVar16);
    puVar12 = PTR__OBJC_CLASS___NSError_1000d21a8;
    _objc_allocWithZone();
    uVar8 = 0xd000000000000029;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x8000000100092fa0);
    lVar6 = lVar9;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar9,puVar10,PTR___sypN_1000a08a0 + 8,PTR___sSSSHsWP_1000a0690);
    _swift_bridgeObjectRelease(lVar9);
    func_0x0001000702a0();
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_autorelease(puVar12);
    *param_5 = puVar12;
    return (undefined *)0x0;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_1000a5148);
  ppuVar3 = ppuVar7;
LAB_1000167c4:
  _swift_bridgeObjectRelease(ppuVar3);
LAB_1000167cc:
  ppuVar18 = param_2;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar18 == (undefined **)0x0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_1000a64a8);
    ppuVar18 = ppuVar3;
  }
  else {
    ppuVar7 = ppuVar18;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar4 = ppuVar3;
    _objc_release(ppuVar18);
    ppuVar5 = &PTR____CFConstantStringClassReference_1000a64a8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar18 = ppuVar4;
    if (ppuVar3 != (undefined **)0x0) {
      if ((ppuVar7 == ppuVar5) && (ppuVar3 == ppuVar4)) goto LAB_100016824;
      ppuVar18 = ppuVar3;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (ppuVar7,ppuVar3,ppuVar5,ppuVar4,0);
      _swift_bridgeObjectRelease(ppuVar3);
      _swift_bridgeObjectRelease(ppuVar4);
      if (((ulong)ppuVar7 & 1) == 0) goto LAB_100016980;
      goto LAB_100016834;
    }
  }
  _swift_bridgeObjectRelease(ppuVar18);
LAB_100016980:
  ppuVar3 = param_2;
  func_0x000100071c00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100017180);
    (*pcVar2)();
  }
  ppuVar7 = ppuVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuVar4 = ppuVar18;
  _objc_release(ppuVar3);
  _swift_bridgeObjectRelease(ppuVar18);
  uVar1 = (ulong)ppuVar7 & 0xffffffffffff;
  if (((ulong)ppuVar18 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)ppuVar18 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) && (param_5 != (undefined8 *)0x0)) {
    lVar6 = 0x1000dd470;
    FUN_1000103e0(0x1000dd470,&UNK_10008f380);
    puVar14 = auStack_118;
    _swift_initStackObject();
    param_1 = 1;
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    ppuVar4 = (undefined **)PTR___sSSN_1000a0680;
    *(undefined **)(lVar6 + 0x48) = PTR___sSSN_1000a0680;
    *(undefined1 **)(lVar6 + 0x28) = puVar14;
    *(undefined8 *)(lVar6 + 0x30) = 0xd000000000000016;
    *(undefined8 *)(lVar6 + 0x38) = 0x8000000100093030;
    lVar9 = lVar6;
    FUN_100016528(lVar6);
    _swift_setDeallocating(lVar6);
    FUN_1000175b0((undefined8 *)(lVar6 + 0x20));
    puVar10 = PTR__OBJC_CLASS___NSError_1000d21a8;
    _objc_allocWithZone();
    uVar8 = 0xd000000000000029;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x8000000100092fa0);
    lVar6 = lVar9;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar9,ppuVar4,PTR___sypN_1000a08a0 + 8,PTR___sSSSHsWP_1000a0690);
    _swift_bridgeObjectRelease(lVar9);
    func_0x0001000702a0();
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_autorelease(puVar10);
    *param_5 = puVar10;
  }
  ppuVar3 = param_2;
  func_0x00010006ee40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100017184);
    (*pcVar2)();
  }
  ppuVar7 = ppuVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuVar18 = ppuVar4;
  _objc_release(ppuVar3);
  _swift_bridgeObjectRelease(ppuVar4);
  uVar1 = (ulong)ppuVar7 & 0xffffffffffff;
  if (((ulong)ppuVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)ppuVar4 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) && (param_5 != (undefined8 *)0x0)) {
    lVar6 = 0x1000dd470;
    FUN_1000103e0(0x1000dd470,&UNK_10008f380);
    puVar14 = auStack_c8;
    _swift_initStackObject();
    param_1 = 1;
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar6 + 0x20) = uVar8;
    ppuVar18 = (undefined **)PTR___sSSN_1000a0680;
    *(undefined **)(lVar6 + 0x48) = PTR___sSSN_1000a0680;
    *(undefined1 **)(lVar6 + 0x28) = puVar14;
    *(undefined8 *)(lVar6 + 0x30) = 0xd000000000000012;
    *(undefined8 *)(lVar6 + 0x38) = 0x8000000100093010;
    lVar9 = lVar6;
    FUN_100016528(lVar6);
    _swift_setDeallocating(lVar6);
    FUN_1000175b0((undefined8 *)(lVar6 + 0x20));
    puVar10 = PTR__OBJC_CLASS___NSError_1000d21a8;
    _objc_allocWithZone();
    uVar8 = 0xd000000000000029;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x8000000100092fa0);
    lVar6 = lVar9;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar9,ppuVar18,PTR___sypN_1000a08a0 + 8,PTR___sSSSHsWP_1000a0690);
    _swift_bridgeObjectRelease(lVar9);
    func_0x0001000702a0();
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_autorelease(puVar10);
    *param_5 = puVar10;
  }
  ppuVar3 = param_2;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100017188);
    (*pcVar2)();
  }
  ppuVar4 = param_2;
  func_0x000100071c00();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar3);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100017194);
    (*pcVar2)();
  }
  ppuVar7 = param_2;
  func_0x00010006ee40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == (undefined **)0x0) {
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000171a8);
    (*pcVar2)();
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_1000a6088;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if ((param_3 == ppuVar5) && (param_4 == ppuVar18)) {
    _swift_bridgeObjectRelease(ppuVar18);
    ppuVar21 = ppuVar18;
  }
  else {
    ppuVar20 = param_3;
    ppuVar21 = param_4;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_3,param_4,ppuVar5,ppuVar18,0);
    _swift_bridgeObjectRelease(ppuVar18);
    if (((ulong)ppuVar20 & 1) == 0) {
      ppuVar18 = &PTR____CFConstantStringClassReference_1000a60a8;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if ((param_3 == ppuVar18) && (param_4 == ppuVar21)) {
        _swift_bridgeObjectRelease(ppuVar21);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_3,param_4,ppuVar18,ppuVar21,0);
        _swift_bridgeObjectRelease(ppuVar21);
        ppuVar21 = param_4;
      }
    }
  }
  ppuVar18 = param_2;
  func_0x00010006e120();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar18 == (undefined **)0x0) {
    ppuStack_1e8 = (undefined **)0x0;
    ppuVar18 = (undefined **)0x0;
    ppuVar5 = ppuVar21;
  }
  else {
    ppuStack_1e8 = ppuVar18;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar5 = ppuVar21;
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar21;
  }
  ppuVar20 = param_2;
  func_0x00010006e260();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar20 == (undefined **)0x0) {
    ppuStack_1f0 = (undefined **)0x0;
    ppuVar20 = (undefined **)0x0;
    ppuVar21 = ppuVar5;
  }
  else {
    ppuStack_1f0 = ppuVar20;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar21 = ppuVar5;
    _objc_release(ppuVar20);
    ppuVar20 = ppuVar5;
  }
  ppuVar5 = param_2;
  func_0x00010006e220();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 == (undefined **)0x0) {
    ppuStack_1f8 = (undefined **)0x0;
    ppuVar5 = (undefined **)0x0;
    ppuVar19 = ppuVar21;
  }
  else {
    ppuStack_1f8 = ppuVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar19 = ppuVar21;
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar21;
  }
  ppuVar21 = param_2;
  func_0x00010006e140();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar21 == (undefined **)0x0) {
    ppuStack_200 = (undefined **)0x0;
    ppuVar21 = (undefined **)0x0;
    ppuVar17 = ppuVar19;
  }
  else {
    ppuStack_200 = ppuVar21;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar17 = ppuVar19;
    _objc_release(ppuVar21);
    ppuVar21 = ppuVar19;
  }
  func_0x000100071120(param_2);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  _objc_allocWithZone();
  func_0x000100070160();
  ppuVar19 = param_2;
  func_0x000100074040();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar19 == (undefined **)0x0) {
    ppuStack_208 = (undefined **)0x0;
    ppuVar19 = (undefined **)0x0;
    ppuVar11 = ppuVar17;
  }
  else {
    ppuStack_208 = ppuVar19;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar11 = ppuVar17;
    _objc_release(ppuVar19);
    ppuVar19 = ppuVar17;
  }
  ppuVar17 = param_2;
  func_0x00010006d940();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar17 == (undefined **)0x0) {
    ppuStack_210 = (undefined **)0x0;
    ppuVar17 = (undefined **)0x0;
    ppuVar15 = ppuVar11;
  }
  else {
    ppuStack_210 = ppuVar17;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    ppuVar15 = ppuVar11;
    _objc_release(ppuVar17);
    ppuVar17 = ppuVar11;
  }
  ppuVar11 = param_2;
  func_0x000100074060();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
    ppuStack_218 = (undefined **)0x0;
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuStack_218 = ppuVar11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(ppuVar11);
  }
  func_0x000100071280(param_2);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  _objc_allocWithZone();
  func_0x000100070160();
  puVar13 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x00010006ff60();
  func_0x000100074240();
  _objc_release(puVar13);
  if (ppuVar18 == (undefined **)0x0) {
    ppuStack_1e8 = (undefined **)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_1e8,ppuVar18);
    _swift_bridgeObjectRelease(ppuVar18);
  }
  if (ppuVar20 == (undefined **)0x0) {
    ppuStack_1f0 = (undefined **)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_1f0,ppuVar20);
    _swift_bridgeObjectRelease(ppuVar20);
  }
  if (ppuVar5 == (undefined **)0x0) {
    ppuStack_1f8 = (undefined **)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_1f8,ppuVar5);
    _swift_bridgeObjectRelease(ppuVar5);
  }
  if (ppuVar21 == (undefined **)0x0) {
    ppuStack_200 = (undefined **)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_200,ppuVar21);
    _swift_bridgeObjectRelease(ppuVar21);
  }
  if (ppuVar19 == (undefined **)0x0) {
    ppuStack_208 = (undefined **)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_208,ppuVar19);
    _swift_bridgeObjectRelease(ppuVar19);
  }
  if (ppuVar17 == (undefined **)0x0) {
    ppuStack_210 = (undefined **)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_210,ppuVar17);
    _swift_bridgeObjectRelease(ppuVar17);
  }
  if (ppuVar15 == (undefined **)0x0) {
    ppuStack_218 = (undefined **)0x0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_218,ppuVar15);
    _swift_bridgeObjectRelease(ppuVar15);
  }
  puVar13 = PTR_PTR_1000d21b0;
  _objc_allocWithZone(PTR_PTR_1000d21b0);
  func_0x000100070e80(param_1);
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuVar7);
  _objc_release(ppuStack_1e8);
  _objc_release(ppuStack_1f0);
  _objc_release(ppuStack_1f8);
  _objc_release(ppuStack_200);
  _objc_release(ppuStack_208);
  _objc_release(ppuStack_210);
  _objc_release(ppuStack_218);
  return puVar13;
}



/* Entry: 1000171a8; end: 10001758f;  */

undefined * FUN_1000171a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_120;
  ulong uStack_110;
  undefined1 auStack_108 [80];
  undefined1 auStack_b8 [88];
  
  lVar4 = param_1;
  func_0x000100074080();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100017590);
    (*pcVar3)();
  }
  lVar5 = lVar4;
  func_0x00010006e840();
  _objc_release(lVar4);
  if (lVar5 < 1) {
    if (param_4 == (undefined8 *)0x0) {
      return (undefined *)0x0;
    }
    lVar4 = 0x1000dd470;
    FUN_1000103e0(0x1000dd470,&UNK_10008f380);
    puVar11 = auStack_b8;
    _swift_initStackObject();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar13 = (undefined8 *)(lVar4 + 0x20);
    *puVar13 = uVar6;
    puVar10 = PTR___sSSN_1000a0680;
    pcVar1 = "empty_suggestions";
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_1000a0680;
    lVar5 = -0x18;
  }
  else {
    func_0x000100074080();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      uStack_110 = 0;
      uVar6 = 0;
      func_0x0001000175f8(0,0x1000dd480,&PTR__OBJC_CLASS___SCPBNFriendingSuggestion_1000d1b78);
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (param_1,&uStack_110,uVar6);
      _objc_release(param_1);
      uVar2 = uStack_110;
      if (uStack_110 != 0) {
        uVar16 = uStack_110 & 0xffffffffffffff8;
        if (uStack_110 >> 0x3e == 0) {
          uVar14 = *(ulong *)(uVar16 + 0x10);
        }
        else {
          uVar14 = uStack_110;
          if (-1 < (long)uStack_110) {
            uVar14 = uVar16;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        puStack_120 = PTR___swiftEmptyArrayStorage_1000a08b0;
        uVar15 = 0;
        while( true ) {
          if (uVar14 == uVar15) {
            _swift_bridgeObjectRelease(uVar2);
            return puStack_120;
          }
          if ((uVar2 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar16 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100017578);
              (*pcVar3)();
            }
            uVar7 = *(ulong *)(uVar2 + uVar15 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar7 = uVar15;
            FUN_1000160a4(uVar15,uVar2);
          }
          if (SCARRY8(uVar15,1)) break;
          uVar12 = uVar15 + 1;
          uVar8 = uVar7;
          FUN_100016634();
          _objc_release(uVar7);
          uVar15 = uVar15 + 1;
          if (uVar8 != 0) {
            puVar10 = puStack_120;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if ((((int)puVar10 == 0) || ((long)puStack_120 < 0)) ||
               (puVar10 = puStack_120, ((ulong)puStack_120 >> 0x3e & 1) != 0)) {
              if ((ulong)puStack_120 >> 0x3e == 0) {
                puVar9 = *(undefined **)(((ulong)puStack_120 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar9 = (undefined *)((ulong)puStack_120 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puStack_120) {
                  puVar9 = puStack_120;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg(puVar9);
              }
              puVar10 = (undefined *)0x0;
              FUN_100016268(0,puVar9 + 1,1,puStack_120);
            }
            uVar7 = (ulong)puVar10 & 0xffffffffffffff8;
            uVar15 = *(ulong *)(uVar7 + 0x10);
            puStack_120 = puVar10;
            if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar15) {
              puStack_120 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
              FUN_100016268(puStack_120,uVar15 + 1,1,puVar10);
              uVar7 = (ulong)puStack_120 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar7 + 0x10) = uVar15 + 1;
            *(ulong *)(uVar7 + uVar15 * 8 + 0x20) = uVar8;
            uVar15 = uVar12;
          }
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100017574);
        (*pcVar3)();
      }
    }
    if (param_4 == (undefined8 *)0x0) {
      return (undefined *)0x0;
    }
    lVar4 = 0x1000dd470;
    FUN_1000103e0(0x1000dd470,&UNK_10008f380);
    puVar11 = auStack_108;
    _swift_initStackObject();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1000a0030;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar13 = (undefined8 *)(lVar4 + 0x20);
    *puVar13 = uVar6;
    puVar10 = PTR___sSSN_1000a0680;
    pcVar1 = "Invalid suggestions array";
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_1000a0680;
    lVar5 = -0x10;
  }
  *(undefined1 **)(lVar4 + 0x28) = puVar11;
  *(long *)(lVar4 + 0x30) = lVar5 + -0x2fffffffffffffd7;
  *(ulong *)(lVar4 + 0x38) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  lVar5 = lVar4;
  FUN_100016528(lVar4);
  _swift_setDeallocating(lVar4);
  func_0x0001000175b0(puVar13);
  puVar9 = PTR__OBJC_CLASS___NSError_1000d21a8;
  _objc_allocWithZone();
  uVar6 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x8000000100092fa0);
  lVar4 = lVar5;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar5,puVar10,PTR___sypN_1000a08a0 + 8,PTR___sSSSHsWP_1000a0690);
  _swift_bridgeObjectRelease(lVar5);
  func_0x0001000702a0();
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_autorelease(puVar9);
  *param_4 = puVar9;
  return (undefined *)0x0;
}



/* Entry: 100017590; end: 1000175af;  */

void FUN_100017590(void)

{
  _objc_opt_self(&PTR_PTR_1000d35b8);
  return;
}



/* Entry: 1000175b0; end: 100017687;  */

undefined8 FUN_1000175b0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1000dd478;
  FUN_1000103e0(0x1000dd478,&UNK_10008f388);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100017688; end: 100017697;  */

undefined8 * FUN_100017688(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Entry: 100017698; end: 1000176d7;  */

void FUN_100017698(void)

{
  char *pcVar1;
  
  FUN_1000179f0(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/df-mixer-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/df-mixer-prod",0x36,2);
  pcRam00000001000e9f78 = pcVar1;
  return;
}



/* Entry: 1000176d8; end: 1000176f3; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints defaultEndpoint] */

void FUN_1000176d8(void)

{
  if (lRam00000001000dd4a0 != -1) {
    _swift_once(0x1000dd4a0,FUN_100017698);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uRam00000001000e9f78);
  return;
}



/* Entry: 1000176f4; end: 100017733;  */

void FUN_1000176f4(void)

{
  char *pcVar1;
  
  FUN_1000179f0(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/df-spotlight-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/df-spotlight-prod",0x3a,2);
  pcRam00000001000e9f80 = pcVar1;
  return;
}



/* Entry: 100017734; end: 10001774f; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints spotlightDefaultEndpoint] */

void FUN_100017734(void)

{
  if (lRam00000001000dd4a8 != -1) {
    _swift_once(0x1000dd4a8,FUN_1000176f4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uRam00000001000e9f80);
  return;
}



/* Entry: 100017750; end: 10001778f;  */

void FUN_100017750(void)

{
  char *pcVar1;
  
  FUN_1000179f0(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/df-superfeed-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/df-superfeed-prod",0x3a,2);
  pcRam00000001000e9f88 = pcVar1;
  return;
}



/* Entry: 100017790; end: 1000177ab; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints superFeedDefaultEndpoint] */

void FUN_100017790(void)

{
  if (lRam00000001000dd4b0 != -1) {
    _swift_once(0x1000dd4b0,FUN_100017750);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uRam00000001000e9f88);
  return;
}



/* Entry: 1000177ac; end: 1000177eb;  */

void FUN_1000177ac(void)

{
  char *pcVar1;
  
  FUN_1000179f0(0);
  pcVar1 = "https://gcp.api.snapchat.com/df-mixer-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://gcp.api.snapchat.com/df-mixer-prod",0x2a,2);
  pcRam00000001000e9f90 = pcVar1;
  return;
}



/* Entry: 1000177ec; end: 100017807; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints dfRegionAgnosticEndpoint] */

void FUN_1000177ec(void)

{
  if (lRam00000001000dd4b8 != -1) {
    _swift_once(0x1000dd4b8,FUN_1000177ac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uRam00000001000e9f90);
  return;
}



/* Entry: 100017808; end: 100017847;  */

void FUN_100017808(void)

{
  char *pcVar1;
  
  FUN_1000179f0(0);
  pcVar1 = "https://gcp.api.snapchat.com/df-spotlight-prod";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://gcp.api.snapchat.com/df-spotlight-prod",0x2e,2);
  pcRam00000001000e9f98 = pcVar1;
  return;
}



/* Entry: 100017848; end: 100017863; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints spotlightRegionAgnosticEndpoint] */

void FUN_100017848(void)

{
  if (lRam00000001000dd4c0 != -1) {
    _swift_once(0x1000dd4c0,FUN_100017808);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uRam00000001000e9f98);
  return;
}



/* Entry: 100017864; end: 1000178a3;  */

void FUN_100017864(void)

{
  char *pcVar1;
  
  FUN_1000179f0(0);
  pcVar1 = "https://us-central1-gcp.api.snapchat.com/content-gateway";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://us-central1-gcp.api.snapchat.com/content-gateway",0x38,2);
  pcRam00000001000e9fa0 = pcVar1;
  return;
}



/* Entry: 1000178a4; end: 1000178bf; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints defaultGatewayEndpoint] */

void FUN_1000178a4(void)

{
  if (lRam00000001000dd4c8 != -1) {
    _swift_once(0x1000dd4c8,FUN_100017864);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uRam00000001000e9fa0);
  return;
}



/* Entry: 1000178c0; end: 1000178ff;  */

void FUN_1000178c0(void)

{
  char *pcVar1;
  
  FUN_1000179f0(0);
  pcVar1 = "https://gcp.api.snapchat.com/content-gateway";
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC
            ("https://gcp.api.snapchat.com/content-gateway",0x2c,2);
  pcRam00000001000e9fa8 = pcVar1;
  return;
}



/* Entry: 100017900; end: 10001791b; +[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints gatewayRegionAgnosticEndpoint] */

void FUN_100017900(void)

{
  if (lRam00000001000dd4d0 != -1) {
    _swift_once(0x1000dd4d0,FUN_1000178c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uRam00000001000e9fa8);
  return;
}



/* Entry: 10001791c; end: 10001795f;  */

void FUN_10001791c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
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
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)(uVar1);
  return;
}



/* Entry: 100017960; end: 10001797f;  */

void FUN_100017960(void)

{
  _objc_opt_self(&PTR_PTR_1000d3668);
  return;
}



/* Entry: 100017980; end: 1000179bb; -[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints init] */

void FUN_100017980(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_100017960();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 1000179bc; end: 1000179eb;  */

void FUN_1000179bc(void)

{
  FUN_100017960();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 1000179ec; end: 1000179ef; -[_TtC31SCStoriesMixerEndpointConstants23SCStoriesMixerEndpoints .cxx_destruct] */

void FUN_1000179ec(void)

{
  return;
}



/* Entry: 1000179f0; end: 100017a33;  */

void FUN_1000179f0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd500 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001000dd500 = puVar1;
  return;
}



/* Entry: 100017a34; end: 100017a47;  */

bool FUN_100017a34(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100017a48; end: 100017b1f;  */

void FUN_100017a48(void)

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



/* Entry: 100017b20; end: 100017b3f;  */

void FUN_100017b20(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 100017b40; end: 100017b7f;  */

void FUN_100017b40(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f3f0;
  _swift_getWitnessTable(&UNK_10008f3f0,&UNK_1000a12e8);
  puRam00000001000dd508 = puVar1;
  return;
}



/* Entry: 100017b80; end: 100017b8f;  */

undefined1  [16] FUN_100017b80(void)

{
  return ZEXT816(0x1000a12e8);
}



/* Entry: 100017b90; end: 100017bbf;  */

void FUN_100017b90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000a0918)();
  return;
}



/* Entry: 100017bc0; end: 100017c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017bc0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1000dd5a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100017c0c; end: 100017c63; -[_TtC36WidgetSuggestionNotificationModifier32WidgetSuggestionNotifTaskHandler initWithProcessingScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1000dd5a8) = param_3;
  puVar1 = PTR_s_init_1000d07d0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}


