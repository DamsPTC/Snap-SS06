/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10430309c; end: 1043030e3; -[SCPlaceLoadedEvent init] */

void FUN_10430309c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PlaceLoadedEventWrapper.swift",0x3a,2,0x10d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043030e4);
  (*pcVar1)();
}



/* Entry: 1043030e4; end: 1043030e7;  */

void FUN_1043030e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043030e8; end: 10430311b;  */

void FUN_1043030e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430311c; end: 1043031e7; -[SCPlaceLoadedEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430311c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306c9d0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c9d8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306c9e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c9f8));
  return;
}



/* Entry: 1043031e8; end: 104303207;  */

void FUN_1043031e8(void)

{
  _objc_opt_self(&PTR_PTR_1129977c8);
  return;
}



/* Entry: 104303208; end: 104303243;  */

undefined8 FUN_104303208(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104303244; end: 104303283;  */

void FUN_104303244(void)

{
  _objc_opt_self(&PTR_PTR_1129978b0);
  return;
}



/* Entry: 104303284; end: 1043033eb;  */

int FUN_104303284(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104303300;
        goto LAB_1043032e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043032e4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104303300:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043033ec; end: 10430342b;  */

void FUN_1043033ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011306caa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce7f24;
  _swift_getWitnessTable(&UNK_10dce7f24,&UNK_110756ea0);
  puRam000000011306caa8 = puVar1;
  return;
}



/* Entry: 10430342c; end: 10430342f; -[SCPinType copyWithZone:] */

void FUN_10430342c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104303430; end: 104303433; -[SCPromotedPlaceAttributes copyWithZone:] */

void FUN_104303430(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104303434; end: 10430343f; -[SCPlaceLoadedEvent copyWithZone:] */

void FUN_104303434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104303440; end: 10430348b; -[SCPromotedPlaceImpression placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104303440(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cab0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306cab0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430348c; end: 10430349b; -[SCPromotedPlaceImpression tileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10430348c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306cab8);
}



/* Entry: 10430349c; end: 1043034eb; -[SCPromotedPlaceImpression events] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430349c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cac0);
  func_0x00010430189c(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043034ec; end: 10430356f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043034ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cab0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306cab8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306cac0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104303570; end: 10430366f; -[SCPromotedPlaceImpression initWithPlaceId:tileId:events:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104303570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = 0;
  func_0x00010430189c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_11306cab0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306cab8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306cac0) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104303670; end: 1043038ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104303670(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long alStack_b0 [3];
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1042dde50();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar13 = (undefined8 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cab0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306cab8) = param_3;
  lVar4 = *(long *)(param_4 + 0x10);
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(param_4);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    alStack_b0[0] = param_2;
    _swift_bridgeObjectRetain();
    FUN_1042f4848(0,lVar4,0);
    lVar14 = param_4 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    alStack_b0[1] = param_4;
    do {
      puVar10 = puStack_68;
      func_0x000104303ff4(lVar14,puVar13,FUN_1042dde50);
      lVar6 = 0;
      func_0x00010430189c();
      lVar7 = lVar6;
      _objc_allocWithZone();
      uVar3 = puVar13[1];
      puVar1 = (undefined8 *)(lVar7 + _DAT_11306c970);
      *puVar1 = *puVar13;
      puVar1[1] = uVar3;
      func_0x000104303ff4((long)puVar13 + (long)*(int *)(lVar5 + 0x14),lVar12,FUN_1042dddf8);
      _swift_bridgeObjectRetain(uVar3);
      lVar8 = lVar12;
      FUN_1042ffe44();
      *(long *)(lVar7 + _DAT_11306c960) = lVar8;
      *(undefined8 *)(lVar7 + _DAT_11306c968) =
           *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar5 + 0x18));
      plVar9 = &lStack_78;
      lStack_78 = lVar7;
      lStack_70 = lVar6;
      _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
      FUN_1042f4634(puVar13);
      uVar2 = *(ulong *)(puVar10 + 0x10);
      puStack_68 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
        FUN_1042f4848(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
      }
      puVar10 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(long **)(puStack_68 + uVar2 * 8 + 0x20) = plVar9;
      lVar14 = lVar14 + lVar11;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    _swift_bridgeObjectRelease(alStack_b0[1]);
    _swift_bridgeObjectRelease(alStack_b0[0]);
  }
  *(undefined **)(unaff_x20 + _DAT_11306cac0) = puVar10;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104303900; end: 104303903; -[SCPromotedPlaceImpression copyWithZone:] */

void FUN_104303900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104303904; end: 104303a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104303904(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306cab0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11306cab0))[1]);
  uVar1 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x44495f454c4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f454c4954,0xe700000000000000);
  func_0x00010bf92fa0(param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cac0);
  uVar2 = 0;
  func_0x00010430189c(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = 0x53544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53544e455645,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104303a14; end: 104303a63; -[SCPromotedPlaceImpression encodeWithCoder:] */

void FUN_104303a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104303904(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104303a64; end: 104303a93;  */

void FUN_104303a64(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104303a94(param_1);
  return;
}



/* Entry: 104303a94; end: 104303d13;  */

undefined8 FUN_104303a94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x44495f4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4543414c50,0xe800000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_104303cc4;
    }
    uVar5 = 0x44495f454c4954;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f454c4954,0xe700000000000000);
    func_0x00010bf66f00(param_1);
    _objc_release(uVar5);
    uVar5 = 0x53544e455645;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x53544e455645,0xe600000000000000);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      uVar5 = 0x11306cac8;
      func_0x0001000285a8(0x11306cac8,&UNK_10dce7fc8);
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar5,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        uVar7 = 0;
        func_0x00010430189c(0);
        uVar5 = uStack_a0;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_a0,uVar7);
        _swift_bridgeObjectRelease(uStack_a0);
        func_0x00010c0365e0();
        _objc_release(uVar2);
        _objc_release(uVar5);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_104303cc4;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_104303cc4:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104303d14; end: 104303d3b; -[SCPromotedPlaceImpression initWithCoder:] */

void FUN_104303d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104303a94();
  return;
}



/* Entry: 104303d3c; end: 104303d93; -[SCPromotedPlaceImpression description] */

void FUN_104303d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain();
  FUN_104304038();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104303d94; end: 104303e0f; -[SCPromotedPlaceImpression init] */

void FUN_104303d94(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/PromotedPlaceImpressionWrapper.swift",0x41,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104303ddc);
  (*pcVar1)();
}



/* Entry: 104303e10; end: 104304037; -[SCPromotedPlaceImpression .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104303e10(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306cab0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306cac0));
  return;
}



/* Entry: 104304038; end: 104304277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104304038(long param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong auStack_90 [5];
  undefined *puStack_68;
  
  lVar4 = 0;
  FUN_1042dde50();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_90 + lVar2);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11306cab8);
  uVar13 = *(undefined8 *)(param_1 + _DAT_11306cab0);
  auStack_90[1] = ((undefined8 *)(param_1 + _DAT_11306cab0))[1];
  uVar10 = *(ulong *)(param_1 + _DAT_11306cac0);
  if (uVar10 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar12 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  auStack_90[3] = uVar13;
  if (uVar12 == 0) {
    _swift_bridgeObjectRetain(auStack_90[1]);
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(auStack_90[1]);
    func_0x0001042f4864(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104304278);
      (*pcVar3)();
    }
    uVar11 = 0;
    auStack_90[4] = uVar10 & 0xc000000000000001;
    puVar6 = puStack_68;
    auStack_90[2] = uVar7;
    do {
      if (auStack_90[4] == 0) {
        uVar5 = *(ulong *)(uVar10 + uVar11 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar5 = uVar11;
        func_0x000104303e4c();
      }
      uVar13 = ((undefined8 *)(uVar5 + _DAT_11306c970))[1];
      *puVar9 = *(undefined8 *)(uVar5 + _DAT_11306c970);
      *(undefined8 *)((long)auStack_90 + lVar2 + 8) = uVar13;
      uVar13 = *(undefined8 *)(uVar5 + _DAT_11306c960);
      iVar1 = *(int *)(lVar4 + 0x14);
      _swift_bridgeObjectRetain();
      _objc_retain(uVar13);
      FUN_1042fbf40((long)puVar9 + (long)iVar1);
      uVar13 = *(undefined8 *)(uVar5 + _DAT_11306c968);
      _objc_release(uVar5);
      *(undefined8 *)((long)puVar9 + (long)*(int *)(lVar4 + 0x18)) = uVar13;
      uVar5 = *(ulong *)(puVar6 + 0x10);
      puStack_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar5) {
        func_0x0001042f4864(1 < *(ulong *)(puVar6 + 0x18),uVar5 + 1,1);
      }
      puVar6 = puStack_68;
      uVar11 = uVar11 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      func_0x0001025f45dc(puVar9,puStack_68 +
                                 *(long *)(lVar8 + 0x48) * uVar5 +
                                 ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
    } while (uVar12 != uVar11);
  }
  return auStack_90[3];
}



/* Entry: 104304278; end: 104304297;  */

void FUN_104304278(void)

{
  _objc_opt_self(&PTR_PTR_112997a68);
  return;
}



/* Entry: 104304298; end: 104304407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304298(undefined8 param_1)

{
  long unaff_x20;
  ulong uVar1;
  undefined1 auStack_40 [8];
  
  uVar1 = (ulong)((uint)param_1 >> 8 & 0xff);
  _objc_allocWithZone();
  FUN_1043054a8(param_1,FUN_104305590,&DAT_11306cb08);
  *(undefined8 *)(unaff_x20 + _DAT_11306caf8) = param_1;
  FUN_1043054a8(uVar1,0x1043055b0,&DAT_11306cb10);
  *(ulong *)(unaff_x20 + _DAT_11306cb00) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104304408; end: 10430444f; -[SCSessionEventType init] */

void FUN_104304408(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/SessionPauseResumeEventWrapper.swift",0x41,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104304450);
  (*pcVar1)();
}



/* Entry: 104304450; end: 10430451f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11306cb08) == '\0') {
    uVar2 = 0xed00005445534e55;
  }
  else if (*(char *)(unaff_x20 + _DAT_11306cb08) == '\x01') {
    uVar2 = 0xed00004553554150;
  }
  else {
    uVar2 = 0xee00454d55534552;
  }
  uVar1 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar2);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104304520; end: 10430456f; -[SCSessionEventType encodeWithCoder:] */

void FUN_104304520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104304450(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104304570; end: 10430459f;  */

void FUN_104304570(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043045a0(param_1);
  return;
}



/* Entry: 1043045a0; end: 104304853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043045a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_10430481c;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_104304814:
    _objc_release(param_1);
LAB_10430481c:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffabbaacb1ab)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed00005445534e55,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306cb08) = 0;
    goto LAB_1043046e4;
  }
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffbaacaabeb0)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed00004553554150,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306cb08) = 1;
    puVar5 = auStack_b0;
    goto LAB_1043046e4;
  }
  if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x11ffbab2aaacbaae)) {
    _swift_bridgeObjectRelease(0xee00454d55534552);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5f45505954425553,0xee00454d55534552,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar6 & 1) == 0) goto LAB_104304814;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cb08) = 2;
  puVar5 = auStack_a0;
LAB_1043046e4:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 104304854; end: 10430487b; -[SCSessionEventType initWithCoder:] */

void FUN_104304854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1043045a0();
  return;
}



/* Entry: 10430487c; end: 10430488b; +[SCSessionEventType unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430487c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cb08) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430488c; end: 10430489b; +[SCSessionEventType pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430488c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cb08) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430489c; end: 1043048ab; +[SCSessionEventType resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430489c(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cb08) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043048ac; end: 1043048bb; -[SCSessionEventType matchUnset:pause:resume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043048ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11306cb08) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11306cb08) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x000104304e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1043048bc; end: 1043048bf; -[SCSessionEventType .cxx_destruct] */

void FUN_1043048bc(void)

{
  return;
}



/* Entry: 1043048c0; end: 104304943;  */

void FUN_1043048c0(void)

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



/* Entry: 104304944; end: 10430498b; -[SCSessionPauseReason init] */

void FUN_104304944(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/SessionPauseResumeEventWrapper.swift",0x41,2,0xad,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430498c);
  (*pcVar1)();
}



/* Entry: 10430498c; end: 104304a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430498c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11306cb10) == '\0') {
    uVar1 = 0x5f45505954425553;
    uVar2 = 0xed00005445534e55;
  }
  else if (*(char *)(unaff_x20 + _DAT_11306cb10) == '\x01') {
    uVar2 = 0x800000010f1f43a0;
    uVar1 = 0xd000000000000018;
  }
  else {
    uVar1 = 0xd00000000000001a;
    uVar2 = 0x800000010f1f4840;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,uVar2);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104304a70; end: 104304abf; -[SCSessionPauseReason encodeWithCoder:] */

void FUN_104304a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10430498c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104304ac0; end: 104304aef;  */

void FUN_104304ac0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104304af0(param_1);
  return;
}



/* Entry: 104304af0; end: 104304dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104304af0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_104304d74;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_104304d6c:
    _objc_release(param_1);
LAB_104304d74:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar4 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffabbaacb1ab)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f45505954425553,0xed00005445534e55,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306cb10) = 0;
    goto LAB_104304c30;
  }
  if ((lStack_90 != -0x2fffffffffffffe8) || (lStack_88 != -0x7ffffffef0e0bc60)) {
    uVar4 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000018,0x800000010f1f43a0,lStack_90,lStack_88,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      if ((lStack_90 == -0x2fffffffffffffe6) && (lStack_88 == -0x7ffffffef0e0b7c0)) {
        _swift_bridgeObjectRelease(0x800000010f1f4840);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd00000000000001a,0x800000010f1f4840,lStack_90,lStack_88,0);
        _swift_bridgeObjectRelease(lStack_88);
        if ((uVar4 & 1) == 0) goto LAB_104304d6c;
      }
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_11306cb10) = 2;
      puVar5 = auStack_a0;
      goto LAB_104304c30;
    }
  }
  _swift_bridgeObjectRelease(lStack_88);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cb10) = 1;
  puVar5 = auStack_b0;
LAB_104304c30:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 104304dac; end: 104304dd3; -[SCSessionPauseReason initWithCoder:] */

void FUN_104304dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104304af0();
  return;
}



/* Entry: 104304dd4; end: 104304de3; +[SCSessionPauseReason unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304dd4(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cb10) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104304de4; end: 104304df3; +[SCSessionPauseReason appBackgrounded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304de4(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cb10) = 1;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104304df4; end: 104304e03; +[SCSessionPauseReason modalPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304df4(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306cb10) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104304e04; end: 104304e5b;  */

void FUN_104304e04(long param_1,undefined8 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + *param_3) = param_4;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104304e5c; end: 104304e8f; -[SCSessionPauseReason matchUnset:appBackgrounded:modalPresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304e5c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11306cb10) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11306cb10) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x000104304e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 104304e90; end: 104304e93; -[SCSessionPauseReason .cxx_destruct] */

void FUN_104304e90(void)

{
  return;
}



/* Entry: 104304e94; end: 104304ea3; -[SCSessionPauseResumeEvent type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304e94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306caf8));
  return;
}



/* Entry: 104304ea4; end: 104304eb3; -[SCSessionPauseResumeEvent pauseReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306cb00));
  return;
}



/* Entry: 104304eb4; end: 104304f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304eb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306caf8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306cb00) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104304f18; end: 104304f8f; -[SCSessionPauseResumeEvent initWithType:pauseReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104304f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306caf8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306cb00) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104304f90; end: 104305013; -[SCSessionPauseResumeEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104304f90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306caf8);
  _objc_retain();
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306cb00);
  func_0x00010bfde980(uVar1);
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104305014; end: 104305093; -[SCSessionPauseResumeEvent isEqual:] */

uint FUN_104305014(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104304330(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104305094; end: 10430515b; -[SCSessionPauseResumeEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0x45525f4553554150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f4553554150,0xec0000004e4f5341);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10430515c; end: 10430518b;  */

void FUN_10430515c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10430518c(param_1);
  return;
}



/* Entry: 10430518c; end: 10430537f;  */

undefined8 FUN_10430518c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
    lVar2 = lVar3;
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_104305328:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    FUN_104305590();
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      lVar5 = 0x45525f4553554150;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f4553554150,0xec0000004e4f5341);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar2 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
        _swift_unknownObjectRelease(lVar2);
        lVar5 = lVar2;
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_104305328;
      }
      func_0x0001043055b0();
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,lVar5,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c055ea0();
        _objc_release(param_1);
        _objc_release(lStack_88);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104305380; end: 1043053a7; -[SCSessionPauseResumeEvent initWithCoder:] */

void FUN_104305380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10430518c();
  return;
}



/* Entry: 1043053a8; end: 1043053cb; -[SCSessionPauseResumeEvent description] */

void FUN_1043053a8(void)

{
  _objc_retain();
  func_0x000104305520();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043053cc; end: 104305447; -[SCSessionPauseResumeEvent init] */

void FUN_1043053cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/SessionPauseResumeEventWrapper.swift",0x41,2,0x140,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104305414);
  (*pcVar1)();
}



/* Entry: 104305448; end: 10430547f; -[SCSessionPauseResumeEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305448(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306caf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306cb00));
  return;
}



/* Entry: 104305480; end: 1043054a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305480(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_60 [6];
  
  uVar1 = param_1;
  FUN_104305590();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_60;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_60 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_60 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_11306cb08) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043054a8; end: 10430558f;  */

void FUN_1043054a8(ulong param_1,code *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_60 [6];
  
  uVar1 = param_1;
  (*param_2)();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_60;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_60 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_60 + 4;
    }
  }
  *(char *)(uVar2 + *param_3) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104305590; end: 1043055ef;  */

void FUN_104305590(void)

{
  _objc_opt_self(&PTR_PTR_112997b48);
  return;
}



/* Entry: 1043055f0; end: 10430575b;  */

void FUN_1043055f0(void)

{
  return;
}



/* Entry: 10430575c; end: 10430579b;  */

void FUN_10430575c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8088;
  _swift_getWitnessTable(&UNK_10dce8088,&UNK_110757018);
  puRam000000011306cb90 = puVar1;
  return;
}



/* Entry: 10430579c; end: 10430579f;  */

void FUN_10430579c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cb98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8128;
  _swift_getWitnessTable(&UNK_10dce8128,&UNK_110756f88);
  puRam000000011306cb98 = puVar1;
  return;
}



/* Entry: 1043057a0; end: 1043057df;  */

void FUN_1043057a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306cb98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce8128;
  _swift_getWitnessTable(&UNK_10dce8128,&UNK_110756f88);
  puRam000000011306cb98 = puVar1;
  return;
}



/* Entry: 1043057e0; end: 10430580f;  */

void FUN_1043057e0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104305810; end: 104305813; -[SCSessionPauseReason description] */

void FUN_104305810(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104305814; end: 10430582f; -[SCSessionEventType description] */

void FUN_104305814(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104305830; end: 104305833; -[SCSessionPauseReason copyWithZone:] */

void FUN_104305830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104305834; end: 104305837; -[SCSessionEventType copyWithZone:] */

void FUN_104305834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104305838; end: 10430584b; -[SCSessionPauseResumeEvent copyWithZone:] */

void FUN_104305838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10430584c; end: 1043059b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430584c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306cba0));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306cba8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306cba8))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043059b4; end: 1043059c3; -[SCSessionStartEvent isRestart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043059b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306cba0);
}



/* Entry: 1043059c4; end: 104305a0f; -[SCSessionStartEvent newSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043059c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306cba8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306cba8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  return uVar2;
}



/* Entry: 104305a10; end: 104305a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305a10(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cba0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cba8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104305a14; end: 104305a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305a14(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cba0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cba8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104305a80; end: 104305af3; -[SCSessionStartEvent initWithIsRestart:newSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305a80(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined1 *)(param_1 + _DAT_11306cba0) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306cba8);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104305af4; end: 104305b27; -[SCSessionStartEvent hash] */

undefined8 FUN_104305af4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10430584c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104305b28; end: 104305ba7; -[SCSessionStartEvent isEqual:] */

uint FUN_104305b28(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001043058d0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104305ba8; end: 104305bab; -[SCSessionStartEvent copyWithZone:] */

void FUN_104305ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104305bac; end: 104305c97; -[SCSessionStartEvent encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x41545345525f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41545345525f5349,0xea00000000005452);
  func_0x00010bf92da0(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306cba8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(param_1 + _DAT_11306cba8))[1]);
  uVar2 = 0x535345535f57454e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535345535f57454e,0xee0044495f4e4f49);
  func_0x00010bf93020(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104305c98; end: 104305cc7;  */

void FUN_104305c98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104305cc8(param_1);
  return;
}



/* Entry: 104305cc8; end: 104305e57;  */

undefined8 FUN_104305cc8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0x41545345525f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41545345525f5349,0xea00000000005452);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x535345535f57454e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535345535f57454e,0xee0044495f4e4f49);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x00010c01f5c0();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104305e58; end: 104305e7f; -[SCSessionStartEvent initWithCoder:] */

void FUN_104305e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104305cc8();
  return;
}



/* Entry: 104305e80; end: 104305e9b; -[SCSessionStartEvent description] */

void FUN_104305e80(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104305e9c; end: 104305f17; -[SCSessionStartEvent init] */

void FUN_104305e9c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PromotedPlaceTrackerServices/SessionStartEventWrapper.swift",0x3b,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104305ee4);
  (*pcVar1)();
}



/* Entry: 104305f18; end: 104305f2b; -[SCSessionStartEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306cba8 + 8))
  ;
  return;
}



/* Entry: 104305f2c; end: 104305f4b;  */

void FUN_104305f2c(void)

{
  _objc_opt_self(&PTR_PTR_112997db0);
  return;
}



/* Entry: 104305f4c; end: 104305f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305f4c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306cba0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cba8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104305f50; end: 104305fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104305f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306cbd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000104306d34();
  *(undefined8 *)(unaff_x20 + _DAT_11306cbe0) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104305fd0; end: 1043060a3;  */

void FUN_104305fd0(void)

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


