/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044e0730; end: 1044e07b3;  */

void FUN_1044e0730(void)

{
  long in_x4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(in_x4 + 0x10,auStack_58,0,0);
  in_x4 = in_x4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x4 != 0) {
    func_0x00010c2a6da0();
    _swift_unknownObjectRelease(in_x4);
  }
  return;
}



/* Entry: 1044e07b4; end: 1044e07bb;  */

void FUN_1044e07b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010c2a6da0();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e07bc; end: 1044e07ef;  */

void FUN_1044e07bc(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(undefined1 *)(param_1 + 1),*(undefined1 *)((long)param_1 + 9),param_1[2]);
  return;
}



/* Entry: 1044e07f0; end: 1044e08a7;  */

void FUN_1044e07f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long in_x6;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(in_x6 + 0x10,auStack_68,0,0);
  in_x6 = in_x6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x6 != 0) {
    if (param_3 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
    }
    func_0x00010bf76ac0(in_x6);
    _swift_unknownObjectRelease(in_x6);
    _objc_release(param_3);
  }
  return;
}



/* Entry: 1044e08a8; end: 1044e08af;  */

void FUN_1044e08a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    if (param_3 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
    }
    func_0x00010bf76ac0(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_3);
  }
  return;
}



/* Entry: 1044e08b0; end: 1044e08e7;  */

void FUN_1044e08b0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),
             *(undefined1 *)((long)param_1 + 0x19),param_1[4]);
  return;
}



/* Entry: 1044e08e8; end: 1044e096b;  */

void FUN_1044e08e8(void)

{
  long in_x4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(in_x4 + 0x10,auStack_58,0,0);
  in_x4 = in_x4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x4 != 0) {
    func_0x00010c2a6d00();
    _swift_unknownObjectRelease(in_x4);
  }
  return;
}



/* Entry: 1044e096c; end: 1044e0977;  */

void FUN_1044e096c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010c2a6d00();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e0978; end: 1044e0afb;  */

void FUN_1044e0978(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long extraout_x8;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_7 + 0x10,auStack_78,0,0);
  param_7 = param_7 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_7 != 0) {
    func_0x000100672b50(param_3,auStack_98);
    if (lStack_80 == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      func_0x0001006732c8(auStack_98,lStack_80);
      lVar1 = *(long *)(lStack_80 + -8);
      puStack_a0 = (undefined1 *)&puStack_a0;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
      puVar3 = auStack_98 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(lVar1 + 0x10))(puVar3);
      puVar2 = puVar3;
      __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar3,lStack_80);
      (**(code **)(lVar1 + 8))(puVar3,lStack_80);
      func_0x000100183ab8(auStack_98);
    }
    if (param_4 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_4);
    }
    func_0x00010bf76a00(param_7);
    _swift_unknownObjectRelease(param_7);
    _swift_unknownObjectRelease(puVar2);
    _objc_release(param_4);
  }
  return;
}



/* Entry: 1044e0afc; end: 1044e0b03;  */

void FUN_1044e0afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000100672b50(param_3,auStack_98);
    if (lStack_80 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      func_0x0001006732c8(auStack_98,lStack_80);
      lVar2 = *(long *)(lStack_80 + -8);
      puStack_a0 = (undefined1 *)&puStack_a0;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
      puVar4 = auStack_98 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(lVar2 + 0x10))(puVar4);
      puVar3 = puVar4;
      __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar4,lStack_80);
      (**(code **)(lVar2 + 8))(puVar4,lStack_80);
      func_0x000100183ab8(auStack_98);
    }
    if (param_4 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_4);
    }
    func_0x00010bf76a00(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _swift_unknownObjectRelease(puVar3);
    _objc_release(param_4);
  }
  return;
}



/* Entry: 1044e0b04; end: 1044e0b3b;  */

void FUN_1044e0b04(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,param_1[1],param_1 + 2,param_1[6],*(undefined1 *)(param_1 + 7),param_1[8]);
  return;
}



/* Entry: 1044e0b3c; end: 1044e0baf;  */

void FUN_1044e0b3c(void)

{
  long in_x3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_48,0,0);
  in_x3 = in_x3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x3 != 0) {
    func_0x00010c2a6d60();
    _swift_unknownObjectRelease(in_x3);
  }
  return;
}



/* Entry: 1044e0bb0; end: 1044e0bb7;  */

void FUN_1044e0bb0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010c2a6d60();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e0bb8; end: 1044e0be7;  */

void FUN_1044e0bb8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1),param_1[2]);
  return;
}



/* Entry: 1044e0be8; end: 1044e0c87;  */

void FUN_1044e0be8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_5 != 0) {
    if (param_2 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
    }
    func_0x00010bf76a60(param_5);
    _swift_unknownObjectRelease(param_5);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1044e0c88; end: 1044e0c8f;  */

void FUN_1044e0c88(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
    }
    func_0x00010bf76a60(lVar1);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1044e0c90; end: 1044e0cbf;  */

void FUN_1044e0c90(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),param_1[3]);
  return;
}



/* Entry: 1044e0cc0; end: 1044e0d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e0cc0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11077d5d8;
  _swift_allocObject(&UNK_11077d5d8,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1044e103c,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044e0d4c; end: 1044e103b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e0d4c(long param_1,long param_2)

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
  lVar6 = _DAT_113080d98;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_113080d98,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_1044e0f18;
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
            if (uVar7 == 0) goto LAB_1044e0f84;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_1044e0f18:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1044e0f80;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e103c);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1044e0f80:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1044e0f84:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_113080d98,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044e103c; end: 1044e1053;  */

void FUN_1044e103c(void)

{
  long unaff_x20;
  
  FUN_1044e0d4c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1044e1054; end: 1044e110b; -[SCLensDataFetcherListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11077d5d8;
  _swift_allocObject(&UNK_11077d5d8,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1044e1d48,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044e110c; end: 1044e1197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e110c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_3f = param_4;
  uStack_38 = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_50);
  _swift_unknownObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e1198; end: 1044e126f; -[SCLensDataFetcherListenerAnnouncer willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1198(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined8 uStack_58;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001019c8110(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  }
  uStack_70 = param_3;
  lStack_68 = param_4;
  uStack_60 = param_5;
  uStack_5f = param_6;
  uStack_58 = param_7;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_70);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_4);
  return;
}



/* Entry: 1044e1270; end: 1044e127b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1270(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_3f = param_3;
  uStack_38 = param_4;
  _objc_retain();
  _swift_unknownObjectRetain(param_4);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e127c; end: 1044e1287; -[SCLensDataFetcherListenerAnnouncer willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e127c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_3f = param_5;
  uStack_38 = param_6;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e1288; end: 1044e132b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_4f = param_6;
  uStack_48 = param_7;
  _objc_retain();
  _swift_bridgeObjectRetain(param_3);
  _swift_errorRetain(param_4);
  _swift_unknownObjectRetain(param_7);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_70);
  _swift_bridgeObjectRelease(param_3);
  _objc_release(param_1);
  _swift_errorRelease(param_4);
  _swift_unknownObjectRelease(param_7);
  return;
}



/* Entry: 1044e132c; end: 1044e1413; -[SCLensDataFetcherListenerAnnouncer didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e132c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined8 uStack_58;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  uStack_80 = param_3;
  lStack_78 = param_4;
  uStack_70 = param_2;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_5f = param_7;
  uStack_58 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_80);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1044e1414; end: 1044e141f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1414(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_3f = param_3;
  uStack_38 = param_4;
  _objc_retain();
  _swift_unknownObjectRetain(param_4);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e1420; end: 1044e148b;  */

void FUN_1044e1420(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_3f = param_3;
  uStack_38 = param_4;
  _objc_retain();
  _swift_unknownObjectRetain(param_4);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e148c; end: 1044e1497; -[SCLensDataFetcherListenerAnnouncer willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e148c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_3f = param_5;
  uStack_38 = param_6;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e1498; end: 1044e151f;  */

void FUN_1044e1498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_3f = param_5;
  uStack_38 = param_6;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e1520; end: 1044e15c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_4f = param_5;
  uStack_48 = param_6;
  _objc_retain();
  _objc_retain(param_2);
  _swift_errorRetain(param_3);
  _swift_unknownObjectRetain(param_6);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_68);
  _objc_release(param_2);
  _objc_release(param_1);
  _swift_errorRelease(param_3);
  _swift_unknownObjectRelease(param_6);
  return;
}



/* Entry: 1044e15c8; end: 1044e168f; -[SCLensDataFetcherListenerAnnouncer didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e15c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_4f = param_7;
  uStack_48 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  _objc_retain(param_5);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_68);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e1690; end: 1044e1717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1690(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_50);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e1718; end: 1044e186f; -[SCLensDataFetcherListenerAnnouncer willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_60);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e1870; end: 1044e19f3; -[SCLensDataFetcherListenerAnnouncer didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_5 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _swift_unknownObjectRetain(param_8);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _swift_unknownObjectRetain(param_8);
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_5);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70);
    _swift_unknownObjectRelease(param_5);
  }
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  func_0x000100672b50(&uStack_70,auStack_a8);
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_8);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_b8);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_8);
  func_0x0001044e1d08(&uStack_b8,0x113080d90,&UNK_10dd0cb80);
  func_0x0001044e1d08(&uStack_70,0x112d387f8,&UNK_10d902650);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e19f4; end: 1044e1a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e19f4(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain();
  _swift_unknownObjectRetain(param_3);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e1a60; end: 1044e1b67; -[SCLensDataFetcherListenerAnnouncer willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e1b68; end: 1044e1c0f; -[SCLensDataFetcherListenerAnnouncer didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  _objc_retain(param_4);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_60);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e1c10; end: 1044e1c3f;  */

void FUN_1044e1c10(void)

{
  func_0x000100bb7f50();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e1c40; end: 1044e1d47; -[SCLensDataFetcherListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e1c40(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d88));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080d98));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d00));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d10));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d20));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d30));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d38));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d48));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d58));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080d68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113080d78));
  return;
}



/* Entry: 1044e1d48; end: 1044e1d5b;  */

void FUN_1044e1d48(void)

{
  FUN_1044e103c();
  return;
}



/* Entry: 1044e1d5c; end: 1044e1d63;  */

void FUN_1044e1d5c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(undefined1 *)(param_1 + 1),*(undefined1 *)((long)param_1 + 9),param_1[2]);
  return;
}



/* Entry: 1044e1d64; end: 1044e2037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044e1d64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar8 = &UNK_11077d600;
  puVar1 = puVar8;
  _swift_allocObject(&UNK_11077d600,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d628;
  _swift_allocObject(&UNK_11077d628,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1044e20ac;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080ce0;
  func_0x0001000285a8(0x113080ce0,&UNK_10dd0cbe0);
  uVar4 = 0x113080dd0;
  func_0x0001044e2170(0x113080dd0,0x113080ce0,&UNK_10dd0cbe0);
  uVar5 = 0x1044e20b4;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (0x1044e20b4,puVar2,uVar3,uVar4);
  _swift_release(puVar2);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_68);
  _swift_release(uVar5);
  puVar1 = puVar8;
  _swift_allocObject(&UNK_11077d600,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d650;
  _swift_allocObject(&UNK_11077d650,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1044e213c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar5 = 0x113080ce8;
  func_0x0001000285a8(0x113080ce8,&UNK_10dd0cb28);
  uVar6 = 0x113080de0;
  func_0x0001044e2170(0x113080de0,0x113080ce8,&UNK_10dd0cb28);
  uVar7 = 0x1044e2144;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (0x1044e2144,puVar2,uVar5,uVar6);
  _swift_release(puVar2);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_68);
  _swift_release(uVar7);
  _swift_allocObject(&UNK_11077d600,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10,param_1);
  puVar2 = &UNK_11077d678;
  _swift_allocObject(&UNK_11077d678,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1044e2228;
  *(undefined **)(puVar2 + 0x18) = puVar8;
  pcVar9 = FUN_1044e2b5c;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_1044e2b5c,puVar2,uVar3,uVar4);
  _swift_release(puVar2);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_68);
  _swift_release(pcVar9);
  puVar8 = &UNK_11077d6a0;
  _swift_allocObject(&UNK_11077d6a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10);
  ppuStack_80 = &puStack_68;
  uVar3 = 0x112d518a8;
  puStack_90 = puVar8;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_69,FUN_1044e234c,auStack_a0,uVar3);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(puStack_68);
  return 1;
}



/* Entry: 1044e2038; end: 1044e20ab;  */

void FUN_1044e2038(void)

{
  long in_x3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_48,0,0);
  in_x3 = in_x3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x3 != 0) {
    func_0x00010bf4c520();
    _swift_unknownObjectRelease(in_x3);
  }
  return;
}



/* Entry: 1044e20ac; end: 1044e20b7;  */

void FUN_1044e20ac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf4c520();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e20b8; end: 1044e213b;  */

void FUN_1044e20b8(void)

{
  long in_x4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(in_x4 + 0x10,auStack_58,0,0);
  in_x4 = in_x4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x4 != 0) {
    func_0x00010bf0af20();
    _swift_unknownObjectRelease(in_x4);
  }
  return;
}



/* Entry: 1044e213c; end: 1044e2143;  */

void FUN_1044e213c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf0af20();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e2144; end: 1044e21b3;  */

void FUN_1044e2144(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Entry: 1044e21b4; end: 1044e2227;  */

void FUN_1044e21b4(void)

{
  long in_x3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_48,0,0);
  in_x3 = in_x3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x3 != 0) {
    func_0x00010bf9e000();
    _swift_unknownObjectRelease(in_x3);
  }
  return;
}



/* Entry: 1044e2228; end: 1044e222f;  */

void FUN_1044e2228(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf9e000();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e2230; end: 1044e225b;  */

void FUN_1044e2230(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 1044e225c; end: 1044e234b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e225c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

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
  lVar1 = _DAT_113080df8;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_113080df8,auStack_80,0x21,0);
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



/* Entry: 1044e234c; end: 1044e2367;  */

void FUN_1044e234c(void)

{
  long unaff_x20;
  
  FUN_1044e225c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1044e2368; end: 1044e23b7; -[SCLensDataFetcherProgressListenerAnnouncer addListener:] */

undefined8 FUN_1044e2368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_1044e1d64(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1044e23b8; end: 1044e2443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e23b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11077d6a0;
  _swift_allocObject(&UNK_11077d6a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1044e2734,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044e2444; end: 1044e2733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e2444(long param_1,long param_2)

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
  lVar6 = _DAT_113080df8;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_113080df8,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_1044e2610;
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
            if (uVar7 == 0) goto LAB_1044e267c;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_1044e2610:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1044e2678;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e2734);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1044e2678:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1044e267c:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_113080df8,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044e2734; end: 1044e274b;  */

void FUN_1044e2734(void)

{
  long unaff_x20;
  
  FUN_1044e2444(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1044e274c; end: 1044e2803; -[SCLensDataFetcherProgressListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e274c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11077d6a0;
  _swift_allocObject(&UNK_11077d6a0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1044e2b48,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044e2804; end: 1044e280f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e2804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e2810; end: 1044e281b; -[SCLensDataFetcherProgressListenerAnnouncer contentForLens:didUpdateProgress:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e2810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_58);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e281c; end: 1044e28bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e281c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_60);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e28c0; end: 1044e297b; -[SCLensDataFetcherProgressListenerAnnouncer asset:forLens:didUpdateProgress:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e28c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_60);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e297c; end: 1044e2987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e297c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e2988; end: 1044e2a03;  */

void FUN_1044e2988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e2a04; end: 1044e2a0f; -[SCLensDataFetcherProgressListenerAnnouncer externalDataForLens:didUpdateProgress:lensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e2a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_58);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e2a10; end: 1044e2aaf;  */

void FUN_1044e2a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_58);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1044e2ab0; end: 1044e2adf;  */

void FUN_1044e2ab0(void)

{
  func_0x000100bb86a4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e2ae0; end: 1044e2b47; -[SCLensDataFetcherProgressListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e2ae0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080df0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080df8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080dc8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080dd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113080de8));
  return;
}



/* Entry: 1044e2b48; end: 1044e2b5b;  */

void FUN_1044e2b48(void)

{
  FUN_1044e2734();
  return;
}



/* Entry: 1044e2b5c; end: 1044e2b5f;  */

void FUN_1044e2b5c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 1044e2b60; end: 1044e2bd3;  */

void FUN_1044e2b60(void)

{
  long in_x3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(in_x3 + 0x10,auStack_48,0,0);
  in_x3 = in_x3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (in_x3 != 0) {
    func_0x00010c092380();
    _swift_unknownObjectRelease(in_x3);
  }
  return;
}



/* Entry: 1044e2bd4; end: 1044e2bdb;  */

void FUN_1044e2bd4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010c092380();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e2bdc; end: 1044e2c63;  */

void FUN_1044e2bdc(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Entry: 1044e2c64; end: 1044e2c6b;  */

void FUN_1044e2c64(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf73920();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e2c6c; end: 1044e2cc7;  */

void FUN_1044e2c6c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x00010bf73960();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044e2cc8; end: 1044e2ccf;  */

void FUN_1044e2cc8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf73960();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e2cd0; end: 1044e2d2b;  */

void FUN_1044e2cd0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x00010bf73940();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044e2d2c; end: 1044e2d33;  */

void FUN_1044e2d2c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf73940();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e2d34; end: 1044e2d8f;  */

void FUN_1044e2d34(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x00010bf72c40();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044e2d90; end: 1044e2d97;  */

void FUN_1044e2d90(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010bf72c40();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1044e2d98; end: 1044e2e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e2d98(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_11077d718;
  _swift_allocObject(&UNK_11077d718,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_1044e3114,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044e2e24; end: 1044e3113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e2e24(long param_1,long param_2)

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
  lVar6 = _DAT_113080e68;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_113080e68,puVar4,0,0);
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
      if ((long)uVar14 < 0) goto LAB_1044e2ff0;
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
            if (uVar7 == 0) goto LAB_1044e305c;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_1044e2ff0:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_1044e3058;
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
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1044e3114);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_1044e3058:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_1044e305c:
      func_0x000103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_113080e68,auStack_f0,0x21,0);
    func_0x000103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 1044e3114; end: 1044e312b;  */

void FUN_1044e3114(void)

{
  long unaff_x20;
  
  FUN_1044e2e24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1044e312c; end: 1044e31e3; -[SCLensDataFetcherEventsListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e312c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11077d718;
  _swift_allocObject(&UNK_11077d718,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_1044e3508,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 1044e31e4; end: 1044e324f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e31e4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _swift_unknownObjectRetain();
  _objc_retain(param_2);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 1044e3250; end: 1044e32d7; -[SCLensDataFetcherEventsListenerAnnouncer lensDataFetcher:didFinishLoadingContentForLens:successfully:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e3250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_48);
  _objc_release(param_1);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_3);
  return;
}



/* Entry: 1044e32d8; end: 1044e330f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e32d8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044e3310; end: 1044e331b; -[SCLensDataFetcherEventsListenerAnnouncer didClearCacheForLensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e3310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e331c; end: 1044e3353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e331c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044e3354; end: 1044e335f; -[SCLensDataFetcherEventsListenerAnnouncer didClearIconsForLensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e3354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e3360; end: 1044e3397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e3360(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044e3398; end: 1044e33a3; -[SCLensDataFetcherEventsListenerAnnouncer didClearCacheFromTweaksForLensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e3398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e33a4; end: 1044e33db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e33a4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 1044e33dc; end: 1044e33e7; -[SCLensDataFetcherEventsListenerAnnouncer didCancelDownloadsAndClearInMemoryCacheForLensDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e33dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e33e8; end: 1044e344f;  */

void FUN_1044e33e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044e3450; end: 1044e347f;  */

void FUN_1044e3450(void)

{
  func_0x000100bb8af0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044e3480; end: 1044e3507; -[SCLensDataFetcherEventsListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044e3480(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080e60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113080e68));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080e28));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080e38));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080e48));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113080e50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113080e58));
  return;
}



/* Entry: 1044e3508; end: 1044e351b;  */

void FUN_1044e3508(void)

{
  FUN_1044e3114();
  return;
}



/* Entry: 1044e351c; end: 1044e3533;  */

bool FUN_1044e351c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}


