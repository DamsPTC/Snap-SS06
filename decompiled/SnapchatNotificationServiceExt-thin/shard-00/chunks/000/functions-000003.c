/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001d1f8; end: 10001d247;  */

undefined8 FUN_10001d1f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000dd948;
  FUN_1000103e0(0x1000dd948,&UNK_10008f840);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001d248; end: 10001d267;  */

void FUN_10001d248(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001d25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(*param_1);
  return;
}



/* Entry: 10001d268; end: 10001d2a7;  */

undefined8 FUN_10001d268(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000103e0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10001d2a8; end: 10001d497;  */

void FUN_10001d2a8(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100010aa4(param_2);
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010001d510();
    }
    FUN_100010e28(*(long *)(lVar2 + 0x30) + param_2 * 0x28);
    FUN_100017688(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    func_0x00010001d970(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 10001d498; end: 10001d50f;  */

void FUN_10001d498(ulong param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 0x28);
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  puVar3[4] = param_2[4];
  FUN_100017688(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001d510);
  (*pcVar2)();
}



/* Entry: 10001d510; end: 10001db13;  */

void FUN_10001d510(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1000103e0(0x1000dd8e0,&UNK_10008f7d8);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_10001d5f4;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        lVar11 = uVar7 * 0x28;
        func_0x0001000126c8(*(long *)(lVar8 + 0x30) + lVar11,&uStack_88);
        lVar10 = uVar7 * 0x20;
        FUN_100012008(*(long *)(lVar8 + 0x38) + lVar10,auStack_a8);
        puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + lVar11);
        puVar2[4] = uStack_68;
        puVar2[1] = uStack_80;
        *puVar2 = uStack_88;
        puVar2[3] = uStack_70;
        puVar2[2] = uStack_78;
        FUN_100017688(auStack_a8,*(long *)(lVar4 + 0x38) + lVar10);
        if (uVar5 != 0) break;
LAB_10001d5f4:
        do {
          lVar10 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10001d6b4);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar10) goto LAB_10001d684;
          uVar5 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar10;
      }
    } while( true );
  }
LAB_10001d684:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10001db14; end: 10001dbbb; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults init] */

undefined * FUN_10001db14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  _swift_getObjectType();
  puVar2 = PTR__OBJC_CLASS___SCAppExtensionStorageServiceImpl_1000d1bb0;
  _objc_opt_self(PTR__OBJC_CLASS___SCAppExtensionStorageServiceImpl_1000d1bb0);
  func_0x000100073a00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010006dca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___SCTimeProvider_1000d1de0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCTimeProvider_1000d1de0);
  func_0x00010006ff60();
  uVar4 = uVar1;
  _objc_allocWithZone(uVar1);
  FUN_10001e500(puVar3,puVar2,uVar4);
  _swift_deallocPartialClassInstance(param_1,uVar1,0x28,7);
  return puVar3;
}



/* Entry: 10001dbbc; end: 10001ddeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10001dbbc(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(ulong *)(unaff_x20 + _DAT_1000dd988);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar6 = 0x8000000100093630;
    uVar3 = 0xd00000000000003c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003c);
    uVar4 = uVar2;
    func_0x000100073e60();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(uVar2);
    _objc_release(uVar3);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar4);
      if (param_1 == uVar2 && param_2 == uVar6) {
        _swift_bridgeObjectRelease();
      }
      else {
        uVar4 = param_1;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,uVar2,uVar6,0);
        _swift_bridgeObjectRelease();
        if ((uVar4 & 1) == 0) goto LAB_10001ddc4;
      }
      func_0x00010001dea4();
      if (uVar6 != 0) {
        lVar8 = *(long *)(uVar6 + _DAT_1000ddb18);
        _swift_bridgeObjectRetain(lVar8);
        _objc_release(uVar6);
        if (*(long *)(lVar8 + 0x10) == 0) {
          _swift_bridgeObjectRelease(lVar8);
        }
        else {
          _swift_bridgeObjectRetain(lVar8);
          FUN_100015f94();
          if ((param_2 & 1) != 0) {
            lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + param_1 * 8);
            _objc_retain(lVar5);
            _swift_bridgeObjectRelease_n(lVar8,2);
            lVar8 = _DAT_1000e9fb0;
            uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1000dd990);
            func_0x00010006e920(uVar3);
            _objc_retainAutoreleasedReturnValue();
            __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar9);
            _objc_release(uVar3);
            lVar8 = lVar5 + lVar8;
            __s10Foundation4DateV1goiySbAC_ACtFZ(lVar8,puVar9);
            uVar7 = (uint)lVar8;
            _objc_release(lVar5);
            (**(code **)(lVar10 + 8))(puVar9,lVar1);
            goto LAB_10001ddc8;
          }
          _swift_bridgeObjectRelease_n(lVar8,2);
        }
      }
    }
  }
LAB_10001ddc4:
  uVar7 = 0;
LAB_10001ddc8:
  return uVar7 & 1;
}



/* Entry: 10001ddec; end: 10001e033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ddec(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_1000dd988);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = 0xd00000000000003c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003c,0x8000000100093630);
    lVar3 = lVar1;
    func_0x000100073e60();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(uVar2);
    if (lVar3 != 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 10001e034; end: 10001e09b; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults isEligibleForLoggedOutNotificationForUserId:] */

uint FUN_10001e034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_10001dbbc(param_3,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 10001e09c; end: 10001e103; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults mostRecentLogoutUser] */

void FUN_10001e09c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10001ddec();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10001e104; end: 10001e257; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults setMostRecentLogoutUser:] */

void FUN_10001e104(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  func_0x00010001e168(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 10001e258; end: 10001e28b; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults oneTapLoginUserDataSnapshot] */

void FUN_10001e258(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010001dea4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10001e28c; end: 10001e2df; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults setOneTapLoginUserDataSnapshot:] */

void FUN_10001e28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10001e2e0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 10001e2e0; end: 10001e473;  */

/* WARNING: Removing unreachable block (ram,0x00010001e36c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e2e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_1000dd988);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar6 = 0xd000000000000041;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000041,0x8000000100093670);
      func_0x000100072640(lVar1);
      _swift_unknownObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000a05d0)(uVar6);
      return;
    }
    lVar2 = param_1;
    FUN_100020f0c();
    lVar3 = lVar2;
    lStack_48 = lVar2;
    func_0x00010001e6b4();
    _objc_retain(param_1);
    puVar7 = &UNK_1000a1ab0;
    plVar4 = &lStack_48;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(plVar4,&UNK_1000a1ab0,lVar3);
    _swift_bridgeObjectRelease(lVar2);
    plVar5 = plVar4;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(plVar4,puVar7);
    uVar6 = 0xd000000000000041;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000041,0x8000000100093670);
    func_0x000100073340(lVar1);
    _objc_release(plVar5);
    _objc_release(uVar6);
    FUN_1000120f8(plVar4,puVar7);
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10001e474; end: 10001e4a7;  */

void FUN_10001e474(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 10001e4a8; end: 10001e4ff; -[_TtC37AuthNotificationExtensionUserDefaults37AuthNotificationExtensionUserDefaults .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e4a8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1000dd988));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1000dd990));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1000dd998));
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(*(undefined8 *)(param_1 + _DAT_1000dd9a0));
  return;
}



/* Entry: 10001e500; end: 10001e693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e500(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_3;
  uStack_80 = param_1;
  uStack_78 = param_2;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation11JSONDecoderC20DateDecodingStrategyOMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation11JSONEncoderC20DateEncodingStrategyOMa();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_1000dd998;
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  (**(code **)(lVar6 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO7iso8601yA2EmFWC_1000a0aa0
             ,lVar4);
  __s10Foundation11JSONEncoderC20dateEncodingStrategyAC04DatedE0OvsTj(lVar8);
  *(undefined8 *)(param_3 + lVar1) = uVar5;
  lVar1 = _DAT_1000dd9a0;
  uVar5 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  (**(code **)(lVar9 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyO7iso8601yA2EmFWC_1000a0a68
             ,lVar3);
  __s10Foundation11JSONDecoderC20dateDecodingStrategyAC04DatedE0OvsTj(lVar7);
  *(undefined8 *)(param_3 + lVar1) = uVar5;
  *(undefined8 *)(param_3 + _DAT_1000dd988) = uStack_80;
  *(undefined8 *)(param_3 + _DAT_1000dd990) = uStack_78;
  lStack_70 = param_3;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 10001e694; end: 10001e733;  */

void FUN_10001e694(void)

{
  _objc_opt_self(&PTR_PTR_1000d3a18);
  return;
}



/* Entry: 10001e734; end: 10001e743;  */

undefined1  [16] FUN_10001e734(void)

{
  return ZEXT816(0x1000a1a90);
}



/* Entry: 10001e744; end: 10001e74f;  */

undefined8 FUN_10001e744(void)

{
  return 1;
}



/* Entry: 10001e750; end: 10001e773;  */

void FUN_10001e750(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 10001e774; end: 10001e78b;  */

void FUN_10001e774(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001e78c; end: 10001e80b;  */

void FUN_10001e78c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x75;
  if (param_2 == 0x7372657375 && param_3 == -0x1b00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x7372657375,0xe500000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10001e80c; end: 10001e823;  */

undefined1  [16] FUN_10001e80c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10001e824; end: 10001e873;  */

void FUN_10001e824(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001f448();
                    /* WARNING: Could not recover jumptable at 0x00010006b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000a0888)(param_1,uVar1);
  return;
}



/* Entry: 10001e874; end: 10001edeb;  */

undefined8 FUN_10001e874(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *extraout_x13;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long alStack_a0 [3];
  long *plStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  FUN_10001f3cc();
  lStack_68 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lStack_68 + 0x40));
  uVar13 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = uVar13;
  (*(code *)PTR____chkstk_darwin_1000a0100)();
  lVar11 = uVar13 - extraout_x12;
  lVar4 = 0x1000ddb08;
  FUN_1000103e0(0x1000ddb08,&UNK_10008fc78);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_1000a0100)();
  plStack_88 = (long *)((lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
  if (param_1 == param_2) {
    uVar7 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar8 = *(ulong *)(param_1 + 0x40);
      uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar13 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar13 = ~(-1L << (uVar9 & 0x3f));
      }
      uVar9 = uVar9 + 0x3f >> 6;
      alStack_a0[1] = param_1;
      puStack_80 = extraout_x13;
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar4 = 0;
      uVar13 = uVar13 & uVar8;
      alStack_a0[2] = lVar11;
      do {
        puVar12 = puStack_80;
        lVar11 = alStack_a0[1];
        lVar6 = 0x1000ddb10;
        if (uVar13 == 0) {
          uVar13 = uVar9;
          if ((long)uVar9 <= lVar4 + 1) {
            uVar13 = lVar4 + 1;
          }
          lVar14 = uVar13 - 1;
          lVar10 = lVar4;
          do {
            lVar4 = lVar10 + 1;
            if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10001ec30);
              (*pcVar3)();
            }
            if ((long)uVar9 <= lVar4) {
              FUN_1000103e0(0x1000ddb10,&UNK_10008fc80);
              puVar12 = puStack_80;
              (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puStack_80,1,1,lVar6);
              uStack_70 = 0;
              goto LAB_10001eaa8;
            }
            uVar13 = ((ulong *)(param_1 + 0x40))[lVar4];
            lVar10 = lVar10 + 1;
          } while (uVar13 == 0);
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar13 - 1 & uVar13;
          uVar13 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 * 0x40;
        }
        else {
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar13 - 1 & uVar13;
          uVar13 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar4 << 6;
        }
        puVar1 = (undefined8 *)(*(long *)(alStack_a0[1] + 0x30) + uVar13 * 0x10);
        uVar7 = puVar1[1];
        *puStack_80 = *puVar1;
        puStack_80[1] = uVar7;
        FUN_1000103e0(0x1000ddb10,&UNK_10008fc80);
        FUN_10001f404(*(long *)(lVar11 + 0x38) + *(long *)(lStack_68 + 0x48) * uVar13,
                      (long)puVar12 + (long)*(int *)(lVar6 + 0x30));
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar12,0,1,lVar6);
        _swift_bridgeObjectRetain(uVar7);
        lVar14 = lVar4;
LAB_10001eaa8:
        plVar2 = plStack_88;
        lVar11 = 0x1000ddb10;
        func_0x00010001fce0(puVar12,plStack_88);
        FUN_1000103e0(0x1000ddb10,&UNK_10008fc80);
        plVar5 = plVar2;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(plVar2,1,lVar11);
        lVar4 = alStack_a0[2];
        if ((int)plVar5 == 1) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          return 1;
        }
        lVar6 = *plVar2;
        uVar13 = plVar2[1];
        FUN_10001f690((long)plVar2 + (long)*(int *)(lVar11 + 0x30),alStack_a0[2]);
        uVar8 = uVar13;
        FUN_100015f94(lVar6);
        _swift_bridgeObjectRelease(uVar13);
        uVar13 = uStack_78;
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          func_0x00010001fd30(lVar4);
          goto LAB_10001ec08;
        }
        FUN_10001f404(*(long *)(param_2 + 0x38) + *(long *)(lStack_68 + 0x48) * lVar6,uStack_78);
        uVar8 = uVar13;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar13,lVar4);
        func_0x00010001fd30(uVar13);
        func_0x00010001fd30(lVar4);
        lVar4 = lVar14;
        uVar13 = uStack_70;
      } while ((uVar8 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(alStack_a0[1],2);
    }
LAB_10001ec08:
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 10001edec; end: 10001eefb;  */

void FUN_10001edec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar3 = 0x1000dd9e0;
  FUN_1000103e0(0x1000dd9e0,&UNK_10008f910);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_100012ae0(param_1,uVar1);
  FUN_10001f448();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_1000a1bd8,&UNK_1000a1bd8,param_1,uVar1,uVar2);
  uStack_58 = param_2;
  FUN_1000103e0(0x1000dd9f0,&UNK_10008f918);
  FUN_10001f488();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF(&uStack_58);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 10001eefc; end: 10001ef23;  */

void FUN_10001eefc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10001f518();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10001ef24; end: 10001ef3b;  */

void FUN_10001ef24(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10001edec(param_1,*unaff_x20);
  return;
}



/* Entry: 10001ef3c; end: 10001ef4f;  */

undefined8 FUN_10001ef3c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *extraout_x13;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long alStack_a0 [3];
  long *plStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar8 = *param_1;
  lVar9 = *param_2;
  lVar4 = 0;
  FUN_10001f3cc();
  lStack_68 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lStack_68 + 0x40));
  uVar15 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = uVar15;
  (*(code *)PTR____chkstk_darwin_1000a0100)();
  lVar13 = uVar15 - extraout_x12;
  lVar4 = 0x1000ddb08;
  FUN_1000103e0(0x1000ddb08,&UNK_10008fc78);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_1000a0100)();
  plStack_88 = (long *)((lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
  if (lVar8 == lVar9) {
    uVar7 = 1;
  }
  else {
    if (*(long *)(lVar8 + 0x10) == *(long *)(lVar9 + 0x10)) {
      uVar10 = *(ulong *)(lVar8 + 0x40);
      uVar11 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
      uVar15 = 0xffffffffffffffff;
      if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
        uVar15 = ~(-1L << (uVar11 & 0x3f));
      }
      uVar11 = uVar11 + 0x3f >> 6;
      alStack_a0[1] = lVar8;
      puStack_80 = extraout_x13;
      _swift_bridgeObjectRetain_n(lVar8,2);
      _swift_bridgeObjectRetain(lVar9);
      lVar4 = 0;
      uVar15 = uVar15 & uVar10;
      alStack_a0[2] = lVar13;
      do {
        puVar14 = puStack_80;
        lVar13 = alStack_a0[1];
        lVar6 = 0x1000ddb10;
        if (uVar15 == 0) {
          uVar15 = uVar11;
          if ((long)uVar11 <= lVar4 + 1) {
            uVar15 = lVar4 + 1;
          }
          lVar16 = uVar15 - 1;
          lVar12 = lVar4;
          do {
            lVar4 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10001ec30);
              (*pcVar3)();
            }
            if ((long)uVar11 <= lVar4) {
              FUN_1000103e0(0x1000ddb10,&UNK_10008fc80);
              puVar14 = puStack_80;
              (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puStack_80,1,1,lVar6);
              uStack_70 = 0;
              goto LAB_10001eaa8;
            }
            uVar15 = ((ulong *)(lVar8 + 0x40))[lVar4];
            lVar12 = lVar12 + 1;
          } while (uVar15 == 0);
          uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar15 - 1 & uVar15;
          uVar15 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar4 * 0x40;
        }
        else {
          uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uStack_70 = uVar15 - 1 & uVar15;
          uVar15 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar4 << 6;
        }
        puVar1 = (undefined8 *)(*(long *)(alStack_a0[1] + 0x30) + uVar15 * 0x10);
        uVar7 = puVar1[1];
        *puStack_80 = *puVar1;
        puStack_80[1] = uVar7;
        FUN_1000103e0(0x1000ddb10,&UNK_10008fc80);
        FUN_10001f404(*(long *)(lVar13 + 0x38) + *(long *)(lStack_68 + 0x48) * uVar15,
                      (long)puVar14 + (long)*(int *)(lVar6 + 0x30));
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar14,0,1,lVar6);
        _swift_bridgeObjectRetain(uVar7);
        lVar16 = lVar4;
LAB_10001eaa8:
        plVar2 = plStack_88;
        lVar13 = 0x1000ddb10;
        func_0x00010001fce0(puVar14,plStack_88);
        FUN_1000103e0(0x1000ddb10,&UNK_10008fc80);
        plVar5 = plVar2;
        (**(code **)(*(long *)(lVar13 + -8) + 0x30))(plVar2,1,lVar13);
        lVar4 = alStack_a0[2];
        if ((int)plVar5 == 1) {
          _swift_bridgeObjectRelease(lVar9);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          return 1;
        }
        lVar6 = *plVar2;
        uVar15 = plVar2[1];
        FUN_10001f690((long)plVar2 + (long)*(int *)(lVar13 + 0x30),alStack_a0[2]);
        uVar10 = uVar15;
        FUN_100015f94(lVar6);
        _swift_bridgeObjectRelease(uVar15);
        uVar15 = uStack_78;
        if ((uVar10 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar9);
          _swift_bridgeObjectRelease_n(alStack_a0[1],2);
          func_0x00010001fd30(lVar4);
          goto LAB_10001ec08;
        }
        FUN_10001f404(*(long *)(lVar9 + 0x38) + *(long *)(lStack_68 + 0x48) * lVar6,uStack_78);
        uVar10 = uVar15;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar15,lVar4);
        func_0x00010001fd30(uVar15);
        func_0x00010001fd30(lVar4);
        lVar4 = lVar16;
        uVar15 = uStack_70;
      } while ((uVar10 & 1) != 0);
      _swift_bridgeObjectRelease(lVar9);
      _swift_bridgeObjectRelease_n(alStack_a0[1],2);
    }
LAB_10001ec08:
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 10001ef50; end: 10001efcb;  */

void FUN_10001ef50(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001efcc; end: 10001efeb;  */

undefined1  [16] FUN_10001efcc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000797269;
  auVar1._0_8_ = 0x7078456e656b6f74;
  return auVar1;
}



/* Entry: 10001efec; end: 10001f073;  */

void FUN_10001efec(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x7078456e656b6f74 && param_3 == -0x14ffffffff868d97) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_bridgeObjectRelease(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10001f074; end: 10001f07f;  */

undefined1  [16] FUN_10001f074(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10001f080; end: 10001f0cf;  */

void FUN_10001f080(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001f650();
                    /* WARNING: Could not recover jumptable at 0x00010006b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000a0888)(param_1,uVar1);
  return;
}



/* Entry: 10001f0d0; end: 10001f29f;  */

void FUN_10001f0d0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  uStack_78 = param_1;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000dda20;
  FUN_1000103e0(0x1000dda20,&UNK_10008f928);
  lStack_70 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(long *)(lStack_70 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)puVar5 - extraout_x8_00;
  lVar4 = 0;
  FUN_10001f3cc();
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_100012ae0(param_2,uVar1);
  FUN_10001f650();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar7,&UNK_1000a1b48,&UNK_1000a1b48,lVar4,uVar1,uVar2);
  uVar1 = uStack_78;
  if (unaff_x21 == 0) {
    func_0x00010001fca0(0x1000dda28,PTR___s10Foundation4DateVMa_1000a0b68,
                        PTR___s10Foundation4DateVSeAAMc_1000a0b80);
    lVar4 = lStack_68;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(puVar5,lStack_68);
    (**(code **)(lStack_70 + 8))(lVar7,lVar3);
    (**(code **)(lVar6 + 0x20))(lVar8,puVar5,lVar4);
    FUN_10001f690(lVar8,uVar1);
  }
  FUN_100013400(param_2);
  return;
}



/* Entry: 10001f2a0; end: 10001f2b3;  */

void FUN_10001f2a0(void)

{
  FUN_10001f0d0();
  return;
}



/* Entry: 10001f2b4; end: 10001f3c7;  */

void FUN_10001f2b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar3 = 0x1000dda08;
  FUN_1000103e0(0x1000dda08,&UNK_10008f920);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_100012ae0(param_1,uVar1);
  FUN_10001f650();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffb0 + -extraout_x8,&UNK_1000a1b48,&UNK_1000a1b48,param_1,uVar1,
             uVar2);
  __s10Foundation4DateVMa(0);
  func_0x00010001fca0(0x1000dda18,PTR___s10Foundation4DateVMa_1000a0b68,
                      PTR___s10Foundation4DateVSEAAMc_1000a0b78);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF();
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 10001f3c8; end: 10001f3cb;  */

void FUN_10001f3c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4DateV2eeoiySbAC_ACtFZ_1000a0b50)();
  return;
}



/* Entry: 10001f3cc; end: 10001f403;  */

void FUN_10001f3cc(undefined8 param_1)

{
  if (lRam00000001000dda88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100091894);
  return;
}



/* Entry: 10001f404; end: 10001f447;  */

undefined8 FUN_10001f404(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001f3cc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001f448; end: 10001f487;  */

void FUN_10001f448(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fc20;
  _swift_getWitnessTable(&UNK_10008fc20,&UNK_1000a1bd8);
  puRam00000001000dd9e8 = puVar1;
  return;
}



/* Entry: 10001f488; end: 10001f517;  */

void FUN_10001f488(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000dd9f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000dd9f0;
  FUN_100014110(0x1000dd9f0,&UNK_10008f918);
  uVar2 = 0x1000dda00;
  func_0x00010001fca0(0x1000dda00,FUN_10001f3cc,&UNK_10008f9d0);
  puStack_30 = PTR___sSSSEsWP_1000a0688;
  puVar3 = PTR___sSDyxq_GSEsSERzSER_rlMc_1000a0628;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSDyxq_GSEsSERzSER_rlMc_1000a0628,uVar1,&puStack_30);
  puRam00000001000dd9f8 = puVar3;
  return;
}



/* Entry: 10001f518; end: 10001f64f;  */

long FUN_10001f518(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x1000ddaf0;
  FUN_1000103e0(0x1000ddaf0,&UNK_10008fc70);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_100012ae0(param_1,uVar5);
  lVar4 = lVar3;
  FUN_10001f448();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&UNK_1000a1bd8,&UNK_1000a1bd8,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x1000dd9f0;
    FUN_1000103e0(0x1000dd9f0,&UNK_10008f918);
    FUN_10001fc10();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    FUN_100013400(param_1);
  }
  else {
    FUN_100013400(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 10001f650; end: 10001f68f;  */

void FUN_10001f650(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dda10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fbd0;
  _swift_getWitnessTable(&UNK_10008fbd0,&UNK_1000a1b48);
  puRam00000001000dda10 = puVar1;
  return;
}



/* Entry: 10001f690; end: 10001f6d3;  */

undefined8 FUN_10001f690(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001f3cc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001f6d4; end: 10001f6e3;  */

undefined1  [16] FUN_10001f6d4(void)

{
  return ZEXT816(0x1000a1ab0);
}



/* Entry: 10001f6e4; end: 10001f863;  */

void FUN_10001f6e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010001f71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2,lVar1);
  return;
}



/* Entry: 10001f864; end: 10001f86f;  */

void FUN_10001f864(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000a0958)();
  return;
}



/* Entry: 10001f870; end: 10001f8ab;  */

void FUN_10001f870(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010001f8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Entry: 10001f8ac; end: 10001f8b7;  */

void FUN_10001f8ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000a0a00)();
  return;
}



/* Entry: 10001f8b8; end: 10001f95f;  */

void FUN_10001f8b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010001f8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 10001f960; end: 10001fa7b;  */

void FUN_10001f960(void)

{
  return;
}



/* Entry: 10001fa7c; end: 10001fabb;  */

void FUN_10001fa7c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008faf0;
  _swift_getWitnessTable(&UNK_10008faf0,&UNK_1000a1bd8);
  puRam00000001000ddac0 = puVar1;
  return;
}



/* Entry: 10001fabc; end: 10001fabf;  */

void FUN_10001fabc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fba8;
  _swift_getWitnessTable(&UNK_10008fba8,&UNK_1000a1b48);
  puRam00000001000ddac8 = puVar1;
  return;
}



/* Entry: 10001fac0; end: 10001faff;  */

void FUN_10001fac0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fba8;
  _swift_getWitnessTable(&UNK_10008fba8,&UNK_1000a1b48);
  puRam00000001000ddac8 = puVar1;
  return;
}



/* Entry: 10001fb00; end: 10001fb03;  */

void FUN_10001fb00(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fb40;
  _swift_getWitnessTable(&UNK_10008fb40,&UNK_1000a1b48);
  puRam00000001000ddad0 = puVar1;
  return;
}



/* Entry: 10001fb04; end: 10001fb43;  */

void FUN_10001fb04(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fb40;
  _swift_getWitnessTable(&UNK_10008fb40,&UNK_1000a1b48);
  puRam00000001000ddad0 = puVar1;
  return;
}



/* Entry: 10001fb44; end: 10001fb47;  */

void FUN_10001fb44(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fb18;
  _swift_getWitnessTable(&UNK_10008fb18,&UNK_1000a1b48);
  puRam00000001000ddad8 = puVar1;
  return;
}



/* Entry: 10001fb48; end: 10001fb87;  */

void FUN_10001fb48(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fb18;
  _swift_getWitnessTable(&UNK_10008fb18,&UNK_1000a1b48);
  puRam00000001000ddad8 = puVar1;
  return;
}



/* Entry: 10001fb88; end: 10001fb8b;  */

void FUN_10001fb88(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fa88;
  _swift_getWitnessTable(&UNK_10008fa88,&UNK_1000a1bd8);
  puRam00000001000ddae0 = puVar1;
  return;
}



/* Entry: 10001fb8c; end: 10001fbcb;  */

void FUN_10001fb8c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fa88;
  _swift_getWitnessTable(&UNK_10008fa88,&UNK_1000a1bd8);
  puRam00000001000ddae0 = puVar1;
  return;
}



/* Entry: 10001fbcc; end: 10001fbcf;  */

void FUN_10001fbcc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fa60;
  _swift_getWitnessTable(&UNK_10008fa60,&UNK_1000a1bd8);
  puRam00000001000ddae8 = puVar1;
  return;
}



/* Entry: 10001fbd0; end: 10001fc0f;  */

void FUN_10001fbd0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000ddae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008fa60;
  _swift_getWitnessTable(&UNK_10008fa60,&UNK_1000a1bd8);
  puRam00000001000ddae8 = puVar1;
  return;
}



/* Entry: 10001fc10; end: 10001fd6b;  */

void FUN_10001fc10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000ddaf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000dd9f0;
  FUN_100014110(0x1000dd9f0,&UNK_10008f918);
  uVar2 = 0x1000ddb00;
  func_0x00010001fca0(0x1000ddb00,FUN_10001f3cc,&UNK_10008f9a8);
  puStack_30 = PTR___sSSSesWP_1000a06a0;
  puVar3 = PTR___sSDyxq_GSesSeRzSeR_rlMc_1000a0630;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSDyxq_GSesSeRzSeR_rlMc_1000a0630,uVar1,&puStack_30);
  puRam00000001000ddaf8 = puVar3;
  return;
}



/* Entry: 10001fd6c; end: 10001fd9b;  */

void FUN_10001fd6c(void)

{
  __ss6HasherV8_combineyySuF(0);
  return;
}



/* Entry: 10001fd9c; end: 10001fdcb;  */

void FUN_10001fd9c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10001fef4(param_1);
  return;
}



/* Entry: 10001fdcc; end: 10001fe77; -[SCOneTapLoginUserDataSnapshot users] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001fdcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1000ddb18);
  FUN_100021100(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10001fe78; end: 10001fef3; -[SCOneTapLoginUserDataSnapshot initWithUsers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001fe78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_100021100(0);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_1000a0680,uVar2,PTR___sSSSHsWP_1000a0690);
  *(undefined8 *)(param_1 + _DAT_1000ddb18) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 10001fef4; end: 10002015b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001fef4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  ulong uStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar17 = unaff_x20;
  _swift_getObjectType();
  lVar7 = 0;
  lStack_c8 = lVar17;
  FUN_10001f3cc();
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000103e0(0x1000ddb20,&UNK_10008fc90);
  lVar7 = param_1;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  lVar17 = 0;
  uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uStack_90 = ~(-1L << (uVar16 & 0x3f));
  }
  uStack_90 = uStack_90 & *(ulong *)(param_1 + 0x40);
  if (uStack_90 == 0) goto LAB_10001ffe8;
  do {
    uVar14 = (uStack_90 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_90 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
    uStack_90 = uStack_90 - 1 & uStack_90;
    while( true ) {
      uVar14 = LZCOUNT(uVar14);
      uVar18 = uVar14 | lVar17 << 6;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar18 * 0x10);
      FUN_10001f404(*(long *)(param_1 + 0x38) + *(long *)(lVar12 + 0x48) * uVar18,puVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar8 = 0;
      FUN_100021100();
      lVar9 = lVar8;
      _objc_allocWithZone();
      lVar1 = _DAT_1000e9fb0;
      lVar10 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 0x10))(lVar9 + lVar1,puVar13,lVar10);
      puVar5 = PTR_s_init_1000d07d0;
      lStack_80 = lVar9;
      lStack_78 = lVar8;
      _swift_bridgeObjectRetain(uVar4);
      plVar11 = &lStack_80;
      _objc_msgSendSuper2(plVar11,puVar5);
      func_0x00010001fd30(puVar13);
      uVar15 = (uVar14 & 0xffffffffffffffc0 | lVar17 << 6) >> 3;
      *(ulong *)(lVar7 + 0x40 + uVar15) = *(ulong *)(lVar7 + 0x40 + uVar15) | 1L << (uVar14 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar18 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(long **)(*(long *)(lVar7 + 0x38) + uVar18 * 8) = plVar11;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10002015c);
        (*pcVar6)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      if (uStack_90 != 0) break;
LAB_10001ffe8:
      do {
        lVar1 = lVar17 + 1;
        if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100020158);
          (*pcVar6)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar1) {
          _swift_bridgeObjectRelease(param_1);
          *(long *)(unaff_x20 + _DAT_1000ddb18) = lVar7;
          lStack_68 = lStack_c8;
          _objc_msgSendSuper2(auStack_70,PTR_s_init_1000d07d0);
          return;
        }
        uStack_90 = ((ulong *)(param_1 + 0x40))[lVar1];
        lVar17 = lVar17 + 1;
      } while (uStack_90 == 0);
      uVar14 = (uStack_90 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_90 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uStack_90 = uStack_90 - 1 & uStack_90;
      lVar17 = lVar1;
    }
  } while( true );
}



/* Entry: 10002015c; end: 1000201df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10002015c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar1 = _DAT_1000e9fb0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1000d07d0);
  func_0x00010001fd30(param_1);
  return puVar3;
}



/* Entry: 1000201e0; end: 10002035b; -[SCOneTapLoginUserDataSnapshot hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000201e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1000ddb18);
  uVar1 = 0;
  FUN_100021100(0);
  _objc_retain(param_1);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar2,PTR___sSSN_1000a0680,uVar1,PTR___sSSSHsWP_1000a0690);
  uVar1 = uVar2;
  func_0x00010006fd00();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10002035c; end: 10002036b; -[SCOneTapLoginUserDataSnapshot isEqual:] */

uint FUN_10002035c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*(code *)0x10002028c)(&uStack_50);
  _objc_release(param_1);
  FUN_100021138(&uStack_50,0x1000dd0e8,&UNK_10008efc0);
  return uVar1 & 1;
}



/* Entry: 10002036c; end: 100020427; -[SCOneTapLoginUserDataSnapshot encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002036c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1000ddb18);
  uVar1 = 0;
  FUN_100021100(0);
  _objc_retain(param_3);
  _objc_retain(param_1);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar2,PTR___sSSN_1000a0680,uVar1,PTR___sSSSHsWP_1000a0690);
  uVar1 = 0x5352455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5352455355,0xe500000000000000);
  func_0x00010006f220(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100020428; end: 100020457;  */

void FUN_100020428(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_100020458(param_1);
  return;
}



/* Entry: 100020458; end: 1000205cf;  */

undefined8 FUN_100020458(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0x5352455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5352455355,0xe500000000000000);
  lVar2 = param_1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    _objc_release(param_1);
    FUN_100021138(&uStack_50,0x1000dd0e8,&UNK_10008efc0);
  }
  else {
    uVar1 = 0x1000ddb28;
    FUN_1000103e0(0x1000ddb28,&UNK_10008fca0);
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,&uStack_50,PTR___sypN_1000a08a0 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = 0;
      FUN_100021100(0);
      uVar1 = uStack_78;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (uStack_78,PTR___sSSN_1000a0680,uVar4,PTR___sSSSHsWP_1000a0690);
      _swift_bridgeObjectRelease(uStack_78);
      func_0x000100070fc0();
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



/* Entry: 1000205d0; end: 1000205f7; -[SCOneTapLoginUserDataSnapshot initWithCoder:] */

void FUN_1000205d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_100020458();
  return;
}



/* Entry: 1000205f8; end: 10002061b; -[SCOneTapLoginUserDataSnapshot description] */

void FUN_1000205f8(void)

{
  FUN_100020f0c();
  _swift_bridgeObjectRelease();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10002061c; end: 100020663; -[SCOneTapLoginUserDataSnapshot init] */

void FUN_10002061c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AuthNotificationExtensionUserDefaults/OneTapLoginUserDataSnapshotWrapper.swift",0x4e,2
             ,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100020664);
  (*pcVar1)();
}



/* Entry: 100020664; end: 100020667;  */

void FUN_100020664(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 100020668; end: 100020677; -[SCOneTapLoginUserDataSnapshot .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000a08f8)(*(undefined8 *)(param_1 + _DAT_1000ddb18));
  return;
}



/* Entry: 100020678; end: 10002070f; -[SCOneTapLoginUserData tokenExpiry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020678(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1000e9fb0,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100020710; end: 1000207a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100020710(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  lVar1 = _DAT_1000e9fb0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1000d07d0);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 1000207a8; end: 100020873; -[SCOneTapLoginUserData initWithTokenExpiry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1000207a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_3);
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_1000e9fb0,lVar4,lVar2);
  plVar3 = &lStack_50;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1000d07d0);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return plVar3;
}



/* Entry: 100020874; end: 1000209b3; -[SCOneTapLoginUserData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100020874(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  _objc_retain(param_1);
  uVar1 = param_1;
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  uVar2 = uVar1;
  func_0x00010006fd00();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1000209b4; end: 1000209bf; -[SCOneTapLoginUserData isEqual:] */

uint FUN_1000209b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*(code *)0x1000208fc)(&uStack_50);
  _objc_release(param_1);
  FUN_100021138(&uStack_50,0x1000dd0e8,&UNK_10008efc0);
  return uVar1 & 1;
}



/* Entry: 1000209c0; end: 100020a5b;  */

uint FUN_1000209c0(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  FUN_100021138(&uStack_50,0x1000dd0e8,&UNK_10008efc0);
  return uVar1 & 1;
}



/* Entry: 100020a5c; end: 100020afb; -[SCOneTapLoginUserData encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_1;
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  uVar2 = 0x58455f4e454b4f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x58455f4e454b4f54,0xec00000059524950);
  func_0x00010006f220(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100020afc; end: 100020b2b;  */

void FUN_100020afc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_100020b2c(param_1);
  return;
}



/* Entry: 100020b2c; end: 100020d93;  */

undefined8 FUN_100020b2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0x1000dd6b8;
  FUN_1000103e0(0x1000dd6b8,&UNK_10008f5f0);
  (*(code *)PTR____chkstk_darwin_1000a0100)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_90 - extraout_x8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x58455f4e454b4f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x58455f4e454b4f54,0xec00000059524950);
  lVar1 = param_1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar1);
    _swift_unknownObjectRelease(lVar1);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    FUN_100021138(&uStack_70,0x1000dd0e8,&UNK_10008efc0);
    (**(code **)(lVar6 + 0x38))(lVar4,1,1,lVar2);
  }
  else {
    lVar1 = lVar4;
    _swift_dynamicCast(lVar4,&uStack_70,PTR___sypN_1000a08a0 + 8,lVar2,6);
    (**(code **)(lVar6 + 0x38))(lVar4,(uint)lVar1 ^ 1,1,lVar2);
    lVar1 = lVar4;
    (**(code **)(lVar6 + 0x30))(lVar4,1,lVar2);
    if ((int)lVar1 != 1) {
      lVar1 = lVar5;
      (**(code **)(lVar6 + 0x20))(lVar5,lVar4,lVar2);
      __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
      func_0x000100070d20();
      _objc_release(param_1);
      _objc_release(lVar1);
      (**(code **)(lVar6 + 8))(lVar5,lVar2);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  FUN_100021138(lVar4,0x1000dd6b8,&UNK_10008f5f0);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 100020d94; end: 100020dbb; -[SCOneTapLoginUserData initWithCoder:] */

void FUN_100020d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_100020b2c();
  return;
}



/* Entry: 100020dbc; end: 100020e53; -[SCOneTapLoginUserData description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020dbc(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10001f3cc();
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _DAT_1000e9fb0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1 + lVar1,
             lVar2);
  func_0x00010001fd30(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100020e54; end: 100020ecf; -[SCOneTapLoginUserData init] */

void FUN_100020e54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AuthNotificationExtensionUserDefaults/OneTapLoginUserDataSnapshotWrapper.swift",0x4e,2
             ,0x88,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100020e9c);
  (*pcVar1)();
}



/* Entry: 100020ed0; end: 100020f0b; -[SCOneTapLoginUserData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020ed0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1000e9fb0;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000100020f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 100020f0c; end: 1000210ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100020f0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lVar6 = 0;
  FUN_10001f3cc();
  lStack_68 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lStack_68 + 0x40));
  puStack_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_1 + _DAT_1000ddb18);
  FUN_1000103e0(0x1000ddb90,&UNK_10008fce8);
  lVar7 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  lVar6 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar12 + 0x40);
  lStack_88 = lVar7 + 0x40;
  lStack_80 = lVar7;
  lStack_78 = lVar12;
  if (uVar14 == 0) goto LAB_100020ffc;
  do {
    uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar14 = uVar14 - 1 & uVar14;
    while( true ) {
      lVar7 = _DAT_1000e9fb0;
      uVar9 = LZCOUNT(uVar9);
      uVar13 = uVar9 | lVar6 << 6;
      puVar1 = (undefined8 *)(*(long *)(lStack_78 + 0x30) + uVar13 * 0x10);
      lVar15 = *(long *)(*(long *)(lStack_78 + 0x38) + uVar13 * 8);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      lVar8 = 0;
      __s10Foundation4DateVMa();
      puVar4 = puStack_70;
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(puStack_70,lVar15 + lVar7,lVar8);
      lVar7 = lStack_80;
      uVar10 = (uVar9 & 0xffffffffffffffc0 | lVar6 << 6) >> 3;
      *(ulong *)(lStack_88 + uVar10) = *(ulong *)(lStack_88 + uVar10) | 1L << (uVar9 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(lStack_80 + 0x30) + uVar13 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_10001f690(puVar4,*(long *)(lStack_80 + 0x38) + *(long *)(lStack_68 + 0x48) * uVar13);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100021100);
        (*pcVar5)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      _swift_bridgeObjectRetain(uVar3);
      if (uVar14 != 0) break;
LAB_100020ffc:
      do {
        lVar8 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000210fc);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar8) {
          return lVar7;
        }
        uVar14 = ((ulong *)(lVar12 + 0x40))[lVar8];
        lVar6 = lVar6 + 1;
      } while (uVar14 == 0);
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar6 = lVar8;
    }
  } while( true );
}



/* Entry: 100021100; end: 100021137;  */

void FUN_100021100(undefined8 param_1)

{
  if (lRam00000001000ddb80 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100091950);
  return;
}



/* Entry: 100021138; end: 100021177;  */

undefined8 FUN_100021138(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000103e0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100021178; end: 100021197;  */

void FUN_100021178(void)

{
  _objc_opt_self(&PTR_PTR_1000d3af0);
  return;
}



/* Entry: 100021198; end: 10002119f;  */

void FUN_100021198(void)

{
  if (lRam00000001000ddb80 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_100091950);
  return;
}


