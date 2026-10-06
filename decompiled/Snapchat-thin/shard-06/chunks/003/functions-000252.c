/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048183b8; end: 1048184ab; -[SCAdMediaReminderCountdown initWithName:startTimestamp:itemAttachment:bottomSnapProto:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048183b8(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_2;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar5 = param_3;
  }
  _objc_retain();
  uVar4 = param_6;
  _objc_retain(param_6);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(uVar4);
  plVar1 = (long *)(param_2 + _DAT_113090c98);
  *plVar1 = param_4;
  plVar1[1] = lVar5;
  *(undefined8 *)(param_2 + _DAT_113090ca0) = param_1;
  *(undefined8 *)(param_2 + _DAT_113090ca8) = param_5;
  puVar2 = (undefined8 *)(param_2 + _DAT_113090cb0);
  *puVar2 = param_6;
  puVar2[1] = param_3;
  lStack_70 = param_2;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048184ac; end: 1048184db;  */

void FUN_1048184ac(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048184dc(param_1);
  return;
}



/* Entry: 1048184dc; end: 10481860f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1048184dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  
  _swift_getObjectType();
  lVar3 = 0;
  FUN_104754770();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113090c98);
  puVar2[1] = param_1[1];
  *puVar2 = uVar5;
  uVar5 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113090ca0) = param_1[2];
  lVar3 = 0;
  FUN_104750be8();
  func_0x000103bffd90((long)param_1 + (long)*(int *)(lVar3 + 0x18),puVar4);
  FUN_104819fa4(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar5);
  FUN_104819640();
  *(undefined1 **)(unaff_x20 + _DAT_113090ca8) = puVar4;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c));
  uVar5 = puVar2[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090cb0);
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  func_0x00010006c00c();
  puVar4 = &stack0xffffffffffffffa0;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  func_0x000102c8c1ac(param_1);
  return puVar4;
}



/* Entry: 104818610; end: 104818643; -[SCAdMediaReminderCountdown hash] */

undefined8 FUN_104818610(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104818644();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104818644; end: 104818733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104818644(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113090c98))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113090ca0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_113090ca0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  FUN_104819200();
  __ss6HasherV8_combineyySuF();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090cb0);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090cb0))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104818734; end: 1048188db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104818734(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar7 = ((long *)(unaff_x20 + _DAT_113090c98))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_113090c98))[1];
      uVar9 = (uint)(lVar7 == 0 && lVar8 == 0);
      if (lVar7 != 0 && lVar8 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113090c98);
        if (lVar4 == *(long *)(lStack_88 + _DAT_113090c98) && lVar7 == lVar8) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar4;
        }
      }
      dVar11 = *(double *)(unaff_x20 + _DAT_113090ca0);
      dVar12 = *(double *)(lStack_88 + _DAT_113090ca0);
      uVar10 = *(undefined8 *)(lStack_88 + _DAT_113090ca8);
      uVar5 = 0;
      FUN_104819fa4();
      auStack_80[0] = uVar10;
      lStack_68 = uVar5;
      _objc_retain(uVar10);
      puVar6 = auStack_80;
      func_0x0001048192b8(puVar6);
      func_0x00010006e7f4(auStack_80);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113090cb0);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_113090cb0))[1];
      uVar10 = *(undefined8 *)(lStack_88 + _DAT_113090cb0);
      uVar2 = ((undefined8 *)(lStack_88 + _DAT_113090cb0))[1];
      func_0x00010006c00c(uVar10,uVar2);
      func_0x000100e25fcc(uVar5,uVar1,uVar10,uVar2);
      func_0x00010006c090(uVar10,uVar2);
      _objc_release(lStack_88);
      return uVar9 & (uint)puVar6 & (uint)uVar5 & (uint)(dVar11 == dVar12);
    }
  }
  return 0;
}



/* Entry: 1048188dc; end: 10481895b; -[SCAdMediaReminderCountdown isEqual:] */

uint FUN_1048188dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104818734(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10481895c; end: 10481895f; -[SCAdMediaReminderCountdown copyWithZone:] */

void FUN_10481895c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104818960; end: 104818ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104818960(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113090c98))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090c98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454d414e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090ca0);
  uVar1 = 0x49545f5452415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545f5452415453,0xef504d415453454d);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x5454415f4d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5454415f4d455449,0xef544e454d484341);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090cb0);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113090cb0))[1]);
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2103a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104818ad4; end: 104818b23; -[SCAdMediaReminderCountdown encodeWithCoder:] */

void FUN_104818ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104818960(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104818b24; end: 104818b53;  */

void FUN_104818b24(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104818b54(param_1);
  return;
}



/* Entry: 104818b54; end: 104818eb3;  */

undefined8 FUN_104818b54(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 unaff_x20;
  long lVar10;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  iVar2 = (int)&lStack_b0;
  uVar6 = 0;
  uVar8 = 0;
  uVar3 = 0x454d414e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e,0xe400000000000000);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar10 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  uVar3 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    _swift_dynamicCast(&lStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar9 = lStack_a8;
    lVar10 = lStack_b0;
    if (iVar2 == 0) {
      lVar10 = 0;
      lVar9 = 0;
    }
  }
  uVar4 = 0x49545f5452415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545f5452415453,0xef504d415453454d);
  func_0x00010bf66da0(param_1);
  _objc_release(uVar4);
  uVar4 = 0x5454415f4d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5454415f4d455449,0xef544e454d484341);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
LAB_104818de0:
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar9);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar4 = 0;
    FUN_104819fa4(0);
    _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,uVar4,6);
    lVar5 = lStack_b0;
    if ((uVar6 & 1) != 0) {
      uVar4 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2103a0);
      lVar7 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar7 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
        _swift_unknownObjectRelease(lVar7);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        _objc_release(param_1);
        param_1 = lVar5;
        goto LAB_104818de0;
      }
      _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
      if ((uVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar10 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar10,lVar9);
          _swift_bridgeObjectRelease(lVar9);
        }
        lVar9 = lStack_b0;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lStack_b0,lStack_a8);
        func_0x00010c02dae0(uVar3);
        _objc_release(lVar5);
        func_0x00010006c090(lStack_b0,lStack_a8);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar5;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar9);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104818eb4; end: 104818edb; -[SCAdMediaReminderCountdown initWithCoder:] */

void FUN_104818eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104818b54();
  return;
}



/* Entry: 104818edc; end: 104818f23; -[SCAdMediaReminderCountdown description] */

void FUN_104818edc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104818f24();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104818f24; end: 1048190e3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104818f24(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_2c0;
  undefined8 auStack_2b8 [77];
  
  lVar3 = 0;
  FUN_104750be8();
  lVar7 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)&uStack_2c0 + lVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090c98);
  uVar6 = puVar1[1];
  uVar9 = *puVar1;
  *(undefined8 *)((long)auStack_2b8 + lVar2) = puVar1[1];
  *puVar5 = uVar9;
  *(undefined8 *)((long)auStack_2b8 + lVar2 + 8U) = *(undefined8 *)(unaff_x20 + _DAT_113090ca0);
  lVar8 = *(long *)(unaff_x20 + _DAT_113090ca8);
  lVar2 = (long)puVar5 + (long)*(int *)(lVar7 + 0x18);
  lVar7 = *(long *)(lVar8 + _DAT_113090ce0);
  if (lVar7 == 0) {
    lVar7 = 0;
    FUN_104739264();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar2,1,1,lVar7);
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    _objc_retain(lVar7);
    func_0x0001047e75ac(lVar2);
    lVar7 = 0;
    FUN_104739264();
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar2,0,1,lVar7);
  }
  lVar7 = _DAT_113090ce8;
  lVar4 = 0;
  FUN_104754770();
  lVar4 = (long)*(int *)(lVar4 + 0x14);
  if (*(long *)(lVar8 + lVar7) == 0) {
    func_0x000101551a34(auStack_2b8);
    _memcpy(lVar2 + lVar4,auStack_2b8,0x260);
  }
  else {
    _objc_retain();
    FUN_104833ab4(auStack_2b8);
    _memcpy(lVar2 + lVar4,auStack_2b8,0x260);
    func_0x000101553e8c(lVar2 + lVar4);
  }
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_113090cb0))[1];
  puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar3 + 0x1c));
  *puVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090cb0);
  puVar1[1] = uVar6;
  func_0x00010006c00c();
  func_0x000102c8c1ac(puVar5);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1048190e4; end: 10481915f; -[SCAdMediaReminderCountdown init] */

void FUN_1048190e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaReminderCountdownWrapper.swift",0x31,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10481912c);
  (*pcVar1)();
}



/* Entry: 104819160; end: 1048191af; -[SCAdMediaReminderCountdown .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819160(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090c98 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090ca8));
  uVar2 = *(ulong *)(param_1 + _DAT_113090cb0);
  uVar1 = ((ulong *)(param_1 + _DAT_113090cb0))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1048191b0; end: 1048191cf;  */

void FUN_1048191b0(void)

{
  _objc_opt_self(&PTR_PTR_1129d9378);
  return;
}



/* Entry: 1048191d0; end: 1048191ff;  */

void FUN_1048191d0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104819640(param_1);
  return;
}



/* Entry: 104819200; end: 104819443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819200(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_113090ce0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047e6e30();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113090ce8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104819444; end: 104819543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819444(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_2a0 [608];
  
  bVar1 = *(long *)(param_2 + _DAT_113090ce0) == 0;
  if (!bVar1) {
    _objc_retain();
    func_0x0001047e75ac(param_1);
  }
  lVar2 = 0;
  FUN_104739264();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,bVar1,1,lVar2);
  lVar2 = _DAT_113090ce8;
  lVar3 = 0;
  FUN_104754770();
  lVar3 = (long)*(int *)(lVar3 + 0x14);
  if (*(long *)(param_2 + lVar2) == 0) {
    _objc_release(param_2);
    func_0x000101551a34(auStack_2a0);
    _memcpy(param_1 + lVar3,auStack_2a0,0x260);
    return;
  }
  _objc_retain();
  FUN_104833ab4(auStack_2a0);
  _memcpy(param_1 + lVar3,auStack_2a0,0x260);
  func_0x000101553e8c(param_1 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104819544; end: 104819553; -[SCAdMediaReminderItemAttachment deepLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090ce0));
  return;
}



/* Entry: 104819554; end: 104819563; -[SCAdMediaReminderItemAttachment webviewAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090ce8));
  return;
}



/* Entry: 104819564; end: 1048195c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819564(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090ce0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090ce8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048195c8; end: 10481963f; -[SCAdMediaReminderItemAttachment initWithDeepLink:webviewAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048195c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113090ce0) = param_3;
  *(undefined8 *)(param_1 + _DAT_113090ce8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104819640; end: 104819887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104819640(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_7a0 [8];
  undefined1 auStack_798 [608];
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  _swift_getObjectType();
  lVar2 = 0;
  FUN_104739264();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = auStack_7a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar4 - extraout_x12;
  lVar5 = 0x112db3ce0;
  func_0x0001000285a8(0x112db3ce0,&UNK_10d95e240);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar8 - extraout_x8_00;
  func_0x000104819cb8(param_1,lVar9,0x112db3ce0,&UNK_10d95e240);
  lVar5 = lVar9;
  (**(code **)(lVar7 + 0x30))(lVar9,1,lVar2);
  puVar6 = (undefined1 *)0x0;
  if ((int)lVar5 != 1) {
    func_0x0001034a9054(lVar9,lVar8);
    func_0x000104819d40(lVar8,puVar4);
    uVar3 = 0;
    FUN_1047e97cc(0);
    _objc_allocWithZone();
    FUN_1047e7f98(puVar4,uVar3);
    func_0x000104819d84(lVar8,FUN_104739264);
    puVar6 = puVar4;
  }
  *(undefined1 **)(unaff_x20 + _DAT_113090ce0) = puVar6;
  lVar5 = 0;
  FUN_104754770();
  _memcpy(auStack_528,param_1 + *(int *)(lVar5 + 0x14),0x260);
  iVar1 = (int)auStack_528;
  func_0x0001015538ec();
  puVar6 = (undefined1 *)0x0;
  if (iVar1 != 1) {
    _memcpy(auStack_2c8,auStack_528,0x260);
    FUN_104834c18(0);
    _objc_allocWithZone();
    func_0x000104819cb8(auStack_528,auStack_798,0x112db3ce8,&UNK_10d98ff60);
    puVar6 = auStack_2c8;
    FUN_1048331f8();
    func_0x000104819d00(auStack_528,0x112db3ce8,&UNK_10d98ff60);
  }
  *(undefined1 **)(unaff_x20 + _DAT_113090ce8) = puVar6;
  puVar6 = &stack0xfffffffffffffac8;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  func_0x000104819d84(param_1,FUN_104754770);
  return puVar6;
}



/* Entry: 104819888; end: 1048198bb; -[SCAdMediaReminderItemAttachment hash] */

undefined8 FUN_104819888(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104819200();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048198bc; end: 10481994b; -[SCAdMediaReminderItemAttachment isEqual:] */

uint FUN_1048198bc(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001048192b8(&uStack_40);
  _objc_release(param_1);
  func_0x000104819d00(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10481994c; end: 10481994f; -[SCAdMediaReminderItemAttachment copyWithZone:] */

void FUN_10481994c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104819950; end: 104819a1f; -[SCAdMediaReminderItemAttachment encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4e494c5f50454544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xe90000000000004b);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20ecb0);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104819a20; end: 104819a5f;  */

undefined8 FUN_104819a20(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104819dc0(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104819a60; end: 104819a9b; -[SCAdMediaReminderItemAttachment initWithCoder:] */

undefined8 FUN_104819a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104819dc0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104819a9c; end: 104819ae3; -[SCAdMediaReminderItemAttachment description] */

void FUN_104819a9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_104819ae4();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104819ae4; end: 104819c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104819ae4(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [616];
  
  lVar3 = 0;
  FUN_104754770();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + _DAT_113090ce0);
  bVar1 = lVar4 == 0;
  if (bVar1) {
    FUN_104739264();
  }
  else {
    _objc_retain();
    func_0x0001047e75ac(puVar5);
    lVar4 = 0;
    FUN_104739264();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar5,bVar1,1);
  iVar2 = *(int *)(lVar3 + 0x14);
  if (*(long *)(unaff_x20 + _DAT_113090ce8) == 0) {
    func_0x000101551a34(auStack_298);
    _memcpy(puVar5 + iVar2,auStack_298,0x260);
  }
  else {
    _objc_retain();
    FUN_104833ab4(auStack_298);
    _memcpy(puVar5 + iVar2,auStack_298,0x260);
    func_0x000101553e8c(puVar5 + iVar2);
  }
  func_0x000104819d84(puVar5,FUN_104754770);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104819c04; end: 104819c7f; -[SCAdMediaReminderItemAttachment init] */

void FUN_104819c04(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdMediaReminderItemAttachmentWrapper.swift",0x36,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104819c4c);
  (*pcVar1)();
}



/* Entry: 104819c80; end: 104819dbf; -[SCAdMediaReminderItemAttachment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104819c80(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113090ce8));
  return;
}



/* Entry: 104819dc0; end: 104819fa3;  */

undefined8 FUN_104819dc0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4e494c5f50454544;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e494c5f50454544,0xe90000000000004b);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x000104819d00(&uStack_60,0x112d387f8,&UNK_10d902650);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047e97cc(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar2,6);
    uVar2 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20ecb0);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x000104819d00(&uStack_60,0x112d387f8,&UNK_10d902650);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_104834c18(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
    uVar5 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  func_0x00010c009a20();
  _objc_release(uVar2);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 104819fa4; end: 104819fc3;  */

void FUN_104819fa4(void)

{
  _objc_opt_self(&PTR_PTR_1129d9460);
  return;
}



/* Entry: 104819fc4; end: 10481a0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104819fc4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      dVar3 = *(double *)(unaff_x20 + _DAT_113090d18);
      dVar4 = *(double *)(lStack_88 + _DAT_113090d18);
      dVar5 = *(double *)(unaff_x20 + _DAT_113090d20);
      dVar6 = *(double *)(lStack_88 + _DAT_113090d20);
      dVar7 = *(double *)(unaff_x20 + _DAT_113090d28);
      dVar8 = *(double *)(lStack_88 + _DAT_113090d28);
      dVar9 = *(double *)(unaff_x20 + _DAT_113090d30);
      dVar10 = *(double *)(lStack_88 + _DAT_113090d30);
      _objc_release();
      return dVar9 == dVar10 && (dVar7 == dVar8 && (dVar5 == dVar6 && dVar3 == dVar4));
    }
  }
  return false;
}



/* Entry: 10481a0c4; end: 10481a0d3; -[SCAdRenderedBoundingRect originXRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481a0c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090d18);
}



/* Entry: 10481a0d4; end: 10481a0e3; -[SCAdRenderedBoundingRect originYRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481a0d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090d20);
}



/* Entry: 10481a0e4; end: 10481a0f3; -[SCAdRenderedBoundingRect widthRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481a0e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090d28);
}



/* Entry: 10481a0f4; end: 10481a107; -[SCAdRenderedBoundingRect heightRelative] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481a0f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090d30);
}



/* Entry: 10481a108; end: 10481a18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481a108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090d18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090d20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090d28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113090d30) = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481a18c; end: 10481a217; -[SCAdRenderedBoundingRect initWithOriginXRelative:originYRelative:widthRelative:heightRelative:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481a18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  _swift_getObjectType();
  *(undefined8 *)(param_5 + _DAT_113090d18) = param_1;
  *(undefined8 *)(param_5 + _DAT_113090d20) = param_2;
  *(undefined8 *)(param_5 + _DAT_113090d28) = param_3;
  *(undefined8 *)(param_5 + _DAT_113090d30) = param_4;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481a218; end: 10481a2d7; -[SCAdRenderedBoundingRect hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481a218(long param_1)

{
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_113090d18) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_113090d18);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_113090d20) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_113090d20);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_113090d28) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_113090d28);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_113090d30) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_113090d30);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10481a2d8; end: 10481a357; -[SCAdRenderedBoundingRect isEqual:] */

uint FUN_10481a2d8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104819fc4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10481a358; end: 10481a35b; -[SCAdRenderedBoundingRect copyWithZone:] */

void FUN_10481a358(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10481a35c; end: 10481a4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481a35c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090d18);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210440);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090d20);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210460);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090d28);
  uVar1 = 0x45525f4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f4854444957,0xee0045564954414c);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090d30);
  uVar1 = 0x525f544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f544847494548,0xef45564954414c45);
  func_0x00010bf92e80(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10481a4a4; end: 10481a4f3; -[SCAdRenderedBoundingRect encodeWithCoder:] */

void FUN_10481a4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10481a35c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10481a4f4; end: 10481a533;  */

undefined8 FUN_10481a4f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10481a60c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10481a534; end: 10481a56f; -[SCAdRenderedBoundingRect initWithCoder:] */

undefined8 FUN_10481a534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10481a60c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10481a570; end: 10481a58b; -[SCAdRenderedBoundingRect description] */

void FUN_10481a570(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10481a58c; end: 10481a607; -[SCAdRenderedBoundingRect init] */

void FUN_10481a58c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdRenderedBoundingRectWrapper.swift",0x2f,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10481a5d4);
  (*pcVar1)();
}



/* Entry: 10481a608; end: 10481a60b; -[SCAdRenderedBoundingRect .cxx_destruct] */

void FUN_10481a608(void)

{
  return;
}



/* Entry: 10481a60c; end: 10481a743;  */

void FUN_10481a60c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210440);
  func_0x00010bf66da0(param_2);
  uVar4 = param_1;
  _objc_release(uVar1);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210460);
  func_0x00010bf66da0(param_2);
  uVar1 = uVar4;
  _objc_release(uVar2);
  uVar3 = 0x45525f4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45525f4854444957,0xee0045564954414c);
  func_0x00010bf66da0(param_2);
  uVar2 = uVar1;
  _objc_release(uVar3);
  uVar3 = 0x525f544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f544847494548,0xef45564954414c45);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c0324d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar4,uVar1,uVar2);
  return;
}



/* Entry: 10481a744; end: 10481a763;  */

void FUN_10481a744(void)

{
  _objc_opt_self(&PTR_PTR_1129d9538);
  return;
}



/* Entry: 10481a764; end: 10481a767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481a764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090d18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090d20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090d28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113090d30) = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481a768; end: 10481a777; -[SCAdInventoryRequestDebugFlags dpaTopSnapDynamic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10481a768(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113090d60);
}



/* Entry: 10481a778; end: 10481a787; -[SCAdInventoryRequestDebugFlags creativeInteractionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481a778(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090d68);
}



/* Entry: 10481a788; end: 10481a79b; -[SCAdInventoryRequestDebugFlags collectionDefaultFallbackInteractionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481a788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090d70);
}



/* Entry: 10481a79c; end: 10481a883; -[SCAdInventoryRequestDebugFlags initWithDpaTopSnapDynamic:creativeInteractionType:collectionDefaultFallbackInteractionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481a79c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113090d60) = param_3;
  *(undefined8 *)(param_1 + _DAT_113090d68) = param_4;
  *(undefined8 *)(param_1 + _DAT_113090d70) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481a884; end: 10481a8f3; -[SCAdInventoryRequestDebugFlags hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481a884(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_113090d60));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113090d68));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_113090d70));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10481a8f4; end: 10481a9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10481a8f4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_113090d60);
      bVar2 = *(byte *)(lStack_68 + _DAT_113090d60);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113090d68);
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_113090d68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113090d70);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_113090d70);
      _objc_release();
      if ((int)uVar5 != (int)uVar8) {
        return 0;
      }
      return (int)uVar6 == (int)uVar7 & (bVar1 ^ bVar2 ^ 0xff);
    }
  }
  return 0;
}



/* Entry: 10481a9cc; end: 10481aa4b; -[SCAdInventoryRequestDebugFlags isEqual:] */

uint FUN_10481a9cc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10481a8f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10481aa4c; end: 10481aa4f; -[SCAdInventoryRequestDebugFlags copyWithZone:] */

void FUN_10481aa4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10481aa50; end: 10481ab43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481aa50(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2104b0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f2104d0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000002c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f2104f0);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10481ab44; end: 10481ab93; -[SCAdInventoryRequestDebugFlags encodeWithCoder:] */

void FUN_10481ab44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10481aa50(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10481ab94; end: 10481abc3;  */

void FUN_10481ab94(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10481abc4(param_1);
  return;
}



/* Entry: 10481abc4; end: 10481ad13;  */

undefined8 FUN_10481abc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2104b0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  uVar3 = 0xf2104d0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019);
  uVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  FUN_1046afd70(uVar2);
  if ((uVar3 & 0xff) != 1) {
    uVar1 = 0xd00000000000002c;
    uVar3 = 0xf2104f0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c);
    uVar2 = param_1;
    func_0x00010bf66f40(param_1);
    _objc_release(uVar1);
    FUN_1046afd70(uVar2);
    if ((uVar3 & 0xff) != 1) {
      func_0x00010c00e4c0();
      _objc_release(param_1);
      return unaff_x20;
    }
  }
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10481ad14; end: 10481ad3b; -[SCAdInventoryRequestDebugFlags initWithCoder:] */

void FUN_10481ad14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10481abc4();
  return;
}



/* Entry: 10481ad3c; end: 10481ad57; -[SCAdInventoryRequestDebugFlags description] */

void FUN_10481ad3c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10481ad58; end: 10481add3; -[SCAdInventoryRequestDebugFlags init] */

void FUN_10481ad58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdInventoryRequestDebugFlagsWrapper.swift",0x35,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10481ada0);
  (*pcVar1)();
}



/* Entry: 10481add4; end: 10481add7; -[SCAdInventoryRequestDebugFlags .cxx_destruct] */

void FUN_10481add4(void)

{
  return;
}



/* Entry: 10481add8; end: 10481adf7;  */

void FUN_10481add8(void)

{
  _objc_opt_self(&PTR_PTR_1129d9620);
  return;
}



/* Entry: 10481adf8; end: 10481adfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481adf8(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113090d60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090d68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090d70) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481adfc; end: 10481ae0b; -[SCAdRankingContext fourthTabTotalTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481adfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090da0);
}



/* Entry: 10481ae0c; end: 10481ae1b; -[SCAdRankingContext fourthTabSessionTimeSpentMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481ae0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090da8);
}



/* Entry: 10481ae1c; end: 10481ae2b; -[SCAdRankingContext fourthTabFriendStoriesTotalViewTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481ae1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090db0);
}



/* Entry: 10481ae2c; end: 10481ae3b; -[SCAdRankingContext fourthTabFriendStoriesSessionViewTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481ae2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090db8);
}



/* Entry: 10481ae3c; end: 10481ae4b; -[SCAdRankingContext fourthTabNonFriendStoriesTotalViewTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481ae3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090dc0);
}



/* Entry: 10481ae4c; end: 10481ae5b; -[SCAdRankingContext fourthTabNonFriendStoriesSessionViewTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481ae4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090dc8);
}



/* Entry: 10481ae5c; end: 10481af0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481ae5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090da0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090da8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090db0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113090db8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113090dc0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113090dc8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481af10; end: 10481afc3; -[SCAdRankingContext initWithFourthTabTotalTimeSpentMillis:fourthTabSessionTimeSpentMillis:fourthTabFriendStoriesTotalViewTimeMillis:fourthTabFriendStoriesSessionViewTimeMillis:fourthTabNonFriendStoriesTotalViewTimeMillis:fourthTabNonFriendStoriesSessionViewTimeMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481af10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113090da0) = param_3;
  *(undefined8 *)(param_1 + _DAT_113090da8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113090db0) = param_5;
  *(undefined8 *)(param_1 + _DAT_113090db8) = param_6;
  *(undefined8 *)(param_1 + _DAT_113090dc0) = param_7;
  *(undefined8 *)(param_1 + _DAT_113090dc8) = param_8;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481afc4; end: 10481b0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481afc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113090da0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090da8) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113090db0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113090db8) = uVar1;
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113090dc0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113090dc8) = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481b0ec; end: 10481b0ef; -[SCAdRankingContext copyWithZone:] */

void FUN_10481b0ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10481b0f0; end: 10481b2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481b0f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f210560);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f210590);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000030;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x800000010f2105c0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000032;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f210600);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000034;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f210640);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000036;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000036,0x800000010f210680);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10481b2a8; end: 10481b2f7; -[SCAdRankingContext encodeWithCoder:] */

void FUN_10481b2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10481b0f0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10481b2f8; end: 10481b337;  */

undefined8 FUN_10481b2f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10481b410(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10481b338; end: 10481b373; -[SCAdRankingContext initWithCoder:] */

undefined8 FUN_10481b338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10481b410();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10481b374; end: 10481b38f; -[SCAdRankingContext description] */

void FUN_10481b374(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10481b390; end: 10481b40b; -[SCAdRankingContext init] */

void FUN_10481b390(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdRankingContextWrapper.swift",
             0x29,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10481b3d8);
  (*pcVar1)();
}



/* Entry: 10481b40c; end: 10481b40f; -[SCAdRankingContext .cxx_destruct] */

void FUN_10481b40c(void)

{
  return;
}



/* Entry: 10481b410; end: 10481b5af;  */

void FUN_10481b410(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f210560);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f210590);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000030;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x800000010f2105c0);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000032;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f210600);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000034;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x800000010f210640);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000036;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000036,0x800000010f210680);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c013dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10481b5b0; end: 10481b5cf;  */

void FUN_10481b5b0(void)

{
  _objc_opt_self(&PTR_PTR_1129d9700);
  return;
}



/* Entry: 10481b5d0; end: 10481b6bb;  */

void FUN_10481b5d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010481c2dc(&uStack_48);
  _objc_release(param_2);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  param_1[4] = uStack_28;
  return;
}



/* Entry: 10481b6bc; end: 10481b79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481b6bc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113090df8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090df8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090e00));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090e08));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090e10));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113090e18));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090e20));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10481b7a0; end: 10481b92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10481b7a0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,auStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar8 = ((long *)(unaff_x20 + _DAT_113090df8))[1];
      lVar9 = ((long *)(lStack_88 + _DAT_113090df8))[1];
      if (lVar8 == 0 || lVar9 == 0) {
        uStack_8c = (uint)(lVar8 == 0 && lVar9 == 0);
      }
      else {
        lVar10 = *(long *)(unaff_x20 + _DAT_113090df8);
        if (lVar10 == *(long *)(lStack_88 + _DAT_113090df8) && lVar8 == lVar9) {
          uStack_8c = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_8c = (uint)lVar10;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_113090e00);
      lVar9 = *(long *)(lStack_88 + _DAT_113090e00);
      bVar1 = *(byte *)(unaff_x20 + _DAT_113090e08);
      bVar2 = *(byte *)(lStack_88 + _DAT_113090e08);
      bVar3 = *(byte *)(unaff_x20 + _DAT_113090e10);
      bVar4 = *(byte *)(lStack_88 + _DAT_113090e10);
      bVar5 = *(byte *)(unaff_x20 + _DAT_113090e18);
      bVar6 = *(byte *)(lStack_88 + _DAT_113090e18);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_113090e20);
      uVar11 = *(undefined8 *)(lStack_88 + _DAT_113090e20);
      _objc_release();
      if ((int)uVar12 != (int)uVar11) {
        return 0;
      }
      return uStack_8c & lVar8 == lVar9 & ((bVar1 ^ bVar2) ^ 0xffffffff) &
             ((bVar3 ^ bVar4) ^ 0xffffffff) & ((bVar5 ^ bVar6) ^ 0xffffffff);
    }
  }
  return 0;
}



/* Entry: 10481b930; end: 10481b98b; -[SCAdServeLoggingContext storySessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481b930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090df8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090df8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10481b98c; end: 10481b99b; -[SCAdServeLoggingContext viewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481b98c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090e00);
}


