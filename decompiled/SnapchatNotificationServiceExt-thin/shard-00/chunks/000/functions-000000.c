/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100010000; end: 100010023; -[_TtC26HermodNotificationModifier26HermodNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1000a0598)(param_4,PTR_s_onSuppressNotification__1000d1028,0xf);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_4,PTR_s_onSuccess__1000d1020,*(undefined8 *)(param_1 + _DAT_1000dd058));
  return;
}



/* Entry: 100010024; end: 100010033; -[_TtC26HermodNotificationModifier26HermodNotificationModifier bestAttemptContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_1000a05e8)
            (*(undefined8 *)(param_1 + _DAT_1000dd058));
  return;
}



/* Entry: 100010034; end: 100010097; -[_TtC26HermodNotificationModifier26HermodNotificationModifier init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010034(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_1000dd058;
  puVar3 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
  _objc_allocWithZone();
  func_0x00010006ff60();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100010098; end: 1000100cb;  */

void FUN_100010098(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 1000100cc; end: 1000100db; -[_TtC26HermodNotificationModifier26HermodNotificationModifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000100cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(*(undefined8 *)(param_1 + _DAT_1000dd058));
  return;
}



/* Entry: 1000100dc; end: 1000100fb;  */

void FUN_1000100dc(void)

{
  _objc_opt_self(&PTR_PTR_1000d2f48);
  return;
}



/* Entry: 1000100fc; end: 100010147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000100fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1000dd088) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100010148; end: 10001019f; -[_TtC26HermodNotificationModifier34HermodNotificationModifierProvider initWithProcessingScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1000dd088) = param_3;
  puVar1 = PTR_s_init_1000d07d0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1000101a0; end: 1000101bf; -[_TtC26HermodNotificationModifier34HermodNotificationModifierProvider getModifier:] */

void FUN_1000101a0(void)

{
  FUN_1000100dc(0);
  _objc_allocWithZone();
  func_0x00010006ff60();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000101c0; end: 100010333; -[_TtC26HermodNotificationModifier34HermodNotificationModifierProvider getTaskHandlers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000101c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  _objc_retain();
  lVar1 = param_1;
  FUN_100030c18();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _sc_extensionArgosProvider();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001000103ac();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar8 = *(undefined8 *)(param_1 + _DAT_1000dd088);
  lVar4 = 0;
  FUN_100012044();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined8 *)(lVar5 + _DAT_1000dd0c8) = uVar8;
  *(long *)(lVar5 + _DAT_1000dd0d0) = lVar1;
  *(long *)(lVar5 + _DAT_1000dd0d8) = lVar2;
  _objc_retain();
  _objc_retain();
  _swift_unknownObjectRetain(lVar1);
  _swift_unknownObjectRetain(lVar2);
  uVar6 = uVar8;
  FUN_100010b90();
  *(undefined8 *)(lVar5 + _DAT_1000dd0e0) = uVar6;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1000d07d0);
  _objc_release(param_1);
  _objc_release(uVar8);
  _swift_unknownObjectRelease(lVar1);
  _swift_unknownObjectRelease(lVar2);
  *(long **)(lVar3 + 0x20) = plVar7;
  uVar6 = 0x1000dd0b8;
  FUN_1000103e0(0x1000dd0b8,&UNK_10008ef98);
  lVar1 = lVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar6);
  _swift_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar1);
  return;
}



/* Entry: 100010334; end: 10001033b; -[_TtC26HermodNotificationModifier34HermodNotificationModifierProvider getBadgeCountProviders] */

void FUN_100010334(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(0);
  return;
}



/* Entry: 10001033c; end: 10001039b; -[_TtC26HermodNotificationModifier34HermodNotificationModifierProvider init] */

void FUN_10001033c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("HermodNotificationModifier.HermodNotificationModifierProvider",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100010368);
  (*pcVar1)();
}



/* Entry: 10001039c; end: 1000103bf; -[_TtC26HermodNotificationModifier34HermodNotificationModifierProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001039c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(*(undefined8 *)(param_1 + _DAT_1000dd088));
  return;
}



/* Entry: 1000103c0; end: 1000103df;  */

void FUN_1000103c0(void)

{
  _objc_opt_self(&PTR_PTR_1000d3000);
  return;
}



/* Entry: 1000103e0; end: 10001042f;  */

void FUN_1000103e0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 100010430; end: 1000104ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100010430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1000dd0c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1000dd0d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1000dd0d8) = param_3;
  _objc_retain();
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_1;
  FUN_100010b90();
  *(undefined8 *)(unaff_x20 + _DAT_1000dd0e0) = uVar1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1000d07d0);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar2;
}



/* Entry: 100010500; end: 1000105df; -[_TtC26HermodNotificationModifier29HermodNotificationTaskHandler initWithProcessingScope:deviceCheckManager:attestationProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100010500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1000dd0c8) = param_3;
  *(undefined8 *)(param_1 + _DAT_1000dd0d0) = param_4;
  *(undefined8 *)(param_1 + _DAT_1000dd0d8) = param_5;
  _objc_retain();
  _swift_unknownObjectRetain_n(param_4,2);
  _swift_unknownObjectRetain_n(param_5,2);
  _objc_retain();
  uVar2 = param_3;
  FUN_100010b90();
  *(undefined8 *)(param_1 + _DAT_1000dd0e0) = uVar2;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1000d07d0);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  return (undefined1 *)plVar3;
}



/* Entry: 1000105e0; end: 10001065b; -[_TtC26HermodNotificationModifier29HermodNotificationTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_1000105e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __Block_copy(param_4);
  __Block_copy();
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000100011910(param_3,param_1,param_4);
  __Block_release(param_4);
  __Block_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 10001065c; end: 100010817;  */

void FUN_10001065c(ulong param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 == 0) {
    (*param_4)();
  }
  else {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x8000000100092d40);
      _objc_release();
      (*param_4)();
    }
    else {
      lVar5 = 0x1000dd118;
      FUN_1000103e0(0x1000dd118,&UNK_10008eff0);
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      puVar4 = PTR___sSSN_1000a0680;
      *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(lVar5 + 0x28) = 0x8000000100092d20;
      *(undefined **)(lVar5 + 0x58) = puVar4;
      *(undefined **)(lVar5 + 0x38) = puVar4;
      *(ulong *)(lVar5 + 0x40) = param_1;
      *(ulong *)(lVar5 + 0x48) = param_2;
      FUN_100012168(0,0x1000dd120,&PTR__OBJC_CLASS___NSDictionary_1000d1d40);
      _swift_bridgeObjectRetain(param_2);
      __sSo12NSDictionaryC10FoundationE17dictionaryLiteralAByp_yptd_tcfC(lVar5);
      uVar2 = 0;
      if (param_7 != 0) {
        uVar2 = param_6;
      }
      lVar3 = -0x2000000000000000;
      if (param_7 != 0) {
        lVar3 = param_7;
      }
      _swift_retain(param_5);
      _swift_bridgeObjectRetain(param_7);
      FUN_1000121a8(lVar5,uVar2,lVar3,param_3,param_4,param_5);
      _swift_bridgeObjectRelease(lVar3);
      _swift_release(param_5);
      _objc_release(param_3);
      param_3 = lVar5;
    }
    _objc_release(param_3);
  }
  return;
}



/* Entry: 100010818; end: 10001086b;  */

void FUN_100010818(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_2);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000a08f8)(uVar3);
  return;
}



/* Entry: 10001086c; end: 100010957;  */

void FUN_10001086c(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    (*param_3)(1);
  }
  else {
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    _swift_errorRetain(param_2);
    __ss11_StringGutsV4growyySiF(0x2e);
    _swift_bridgeObjectRelease(uStack_48);
    uStack_50 = 0xd00000000000002c;
    uStack_48 = 0x8000000100092cf0;
    _swift_getErrorValue(param_2,auStack_58,auStack_70);
    uVar1 = uStack_60;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_68,uStack_60);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = uStack_48;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
    _objc_release();
    _swift_bridgeObjectRelease(uVar1);
    (*param_3)(0);
    _swift_errorRelease(param_2);
  }
  return;
}



/* Entry: 100010958; end: 1000109b7; -[_TtC26HermodNotificationModifier29HermodNotificationTaskHandler init] */

void FUN_100010958(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("HermodNotificationModifier.HermodNotificationTaskHandler",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100010984);
  (*pcVar1)();
}



/* Entry: 1000109b8; end: 100010a0f; -[_TtC26HermodNotificationModifier29HermodNotificationTaskHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000109b8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1000dd0c8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1000dd0d0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1000dd0d8));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(*(undefined8 *)(param_1 + _DAT_1000dd0e0));
  return;
}



/* Entry: 100010a10; end: 100010aa3;  */

void FUN_100010a10(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_50 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar3 = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
  }
  else {
    lVar3 = param_2;
    _swift_getObjectType();
  }
  alStack_50[0] = param_2;
  alStack_50[3] = lVar3;
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  uVar4 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(alStack_50,param_3);
  _swift_release(uVar2);
  _objc_release(uVar4);
  func_0x000100010e5c(alStack_50);
  return;
}



/* Entry: 100010aa4; end: 100010ad3;  */

undefined1  [16] FUN_100010aa4(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_78 [40];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  __ss11AnyHashableV13_rawHashValue4seedS2i_tF();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    do {
      func_0x0001000126c8(*(long *)(unaff_x20 + 0x30) + uVar1 * 0x28,auStack_78);
      puVar2 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar2,param_1);
      uVar4 = (uint)puVar2;
      FUN_100010e28(auStack_78);
      if (((ulong)puVar2 & 1) != 0) break;
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = uVar1;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100010ad4; end: 100010b8f;  */

undefined1  [16] FUN_100010ad4(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long unaff_x20;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_78 [40];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      func_0x0001000126c8(*(long *)(unaff_x20 + 0x30) + param_2 * 0x28,auStack_78);
      puVar1 = auStack_78;
      __ss11AnyHashableV2eeoiySbAB_ABtFZ(puVar1,param_1);
      uVar3 = (uint)puVar1;
      FUN_100010e28(auStack_78);
      if (((ulong)puVar1 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar4._8_4_ = uVar3 & 1;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Entry: 100010b90; end: 100010e27;  */

void FUN_100010b90(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x000100074680();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000100073bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_1000d20e8;
      _objc_opt_self(PTR__OBJC_CLASS___SCNGrpcParamsBuilder_1000d20e8);
      func_0x00010006e3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x8000000100092db0);
      puVar3 = puVar2;
      func_0x000100072ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar3);
      func_0x0001000735a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000100073740(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000100072c20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000100073640(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000d1f10;
      _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_1000d1f10);
      func_0x000100070d40();
      puVar4 = PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70;
      _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70);
      uVar5 = 0xd000000000000016;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x8000000100092dd0);
      func_0x000100070520(puVar4);
      _objc_release(uVar5);
      puVar6 = PTR__OBJC_CLASS___SCNativeDispatchQueue_1000d2098;
      _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_1000d2098);
      func_0x000100070740();
      puVar7 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_1000d20f0;
      _objc_opt_self();
      uVar5 = 0x7544646f6d726548;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7544646f6d726548,0xec00000078656c70);
      func_0x00010006e8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (puVar7 != (undefined *)0x0) {
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar4);
        _swift_unknownObjectRelease(lVar1);
        _objc_release(param_1);
        return;
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x8000000100092df0);
      _objc_release();
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _swift_unknownObjectRelease(lVar1);
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 100010e28; end: 100010ea3;  */

undefined8 FUN_100010e28(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___ss11AnyHashableVN_1000a0728 + -8) + 8))();
  return param_1;
}



/* Entry: 100010ea4; end: 100011f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010ea4(char *param_1,char *param_2,char *param_3,char *param_4,char **param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  char **ppcVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  char *pcVar22;
  char **ppcVar23;
  uint uVar24;
  long extraout_x8;
  long lVar25;
  char *pcVar26;
  char *pcVar27;
  ulong uVar28;
  undefined8 uStack_190;
  byte abStack_188 [8];
  ulong uStack_180;
  undefined1 auStack_178 [40];
  long alStack_150 [16];
  char acStack_d0 [8];
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  pcVar27 = (char *)0xd000000000000022;
  lVar2 = 0;
  pcVar22 = param_4;
  ppcVar23 = param_5;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar8 = acStack_d0 + lVar2;
  puVar3 = &UNK_1000a0d50;
  _swift_allocObject(&UNK_1000a0d50,0x18,7);
  *(char ***)(puVar3 + 0x10) = param_5;
  puVar4 = &UNK_1000a0d78;
  _swift_allocObject(&UNK_1000a0d78,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100012740;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcVar5 = "";
  pcVar17 = (char *)0x20;
  pcVar21 = (char *)0x7;
  _swift_allocObject();
  *(code **)(pcVar5 + 0x10) = FUN_10001215c;
  *(undefined **)(pcVar5 + 0x18) = puVar4;
  pcVar26 = *(char **)(param_4 + _DAT_1000dd0e0);
  if (pcVar26 == (char *)0x0) {
    __Block_copy(param_5);
    _swift_retain(puVar3);
    __Block_copy(param_5);
    _swift_retain(puVar3);
    __Block_copy(param_5);
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x8000000100092c00);
    _objc_release();
    pcVar17 = "generate attestation payload";
    __Block_copy(param_5);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x8000000100092bd0);
    _objc_release();
    (*(code *)param_5[2])(param_5);
    __Block_release(param_5);
    _swift_release(puVar4);
    _swift_release(pcVar5);
  }
  else {
    pcVar27 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
    _objc_opt_self();
    pcStack_a0 = (char *)0x0;
    __Block_copy(param_5);
    _swift_retain(puVar3);
    __Block_copy(param_5);
    _swift_retain(puVar3);
    __Block_copy(param_5);
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    pcVar21 = pcVar26;
    _objc_retain();
    ppcVar23 = &pcStack_a0;
    pcVar22 = (char *)0x0;
    pcVar6 = pcVar27;
    pcStack_a8 = pcVar21;
    func_0x00010006ea40();
    _objc_retainAutoreleasedReturnValue();
    pcVar21 = pcStack_a0;
    _objc_retain();
    if (pcVar6 == (char *)0x0) {
      pcVar6 = pcVar21;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(pcVar21);
      _swift_willThrow();
      _swift_errorRelease(pcVar6);
      pcVar7 = param_3;
LAB_100011380:
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x8000000100092c30);
      _objc_release();
      __Block_copy(param_5);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x8000000100092bd0);
      _objc_release();
      (*(code *)param_5[2])(param_5);
      __Block_release(param_5);
      _swift_release(puVar4);
      param_3 = pcVar5;
LAB_1000113e4:
      pcVar17 = "generate attestation payload";
      _swift_release(pcVar5);
      pcVar5 = pcStack_a8;
    }
    else {
      pcVar7 = pcVar6;
      pcStack_b0 = pcVar5;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(pcVar6);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar8);
      pcVar5 = pcVar7;
      pcVar6 = pcVar17;
      param_1 = pcVar8;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC();
      if (pcVar6 == (char *)0x0) {
        FUN_1000120f8(pcVar7,pcVar17);
        pcVar5 = pcStack_b0;
        pcVar6 = pcVar26;
        pcVar27 = pcVar17;
        goto LAB_100011380;
      }
      pcVar8 = PTR_PTR_1000d1ee0;
      pcStack_c0 = pcVar7;
      pcStack_b8 = pcVar17;
      _objc_allocWithZone();
      func_0x00010006ff60();
      pcVar7 = param_2;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
      func_0x000100073700(pcVar8);
      _objc_release(pcVar7);
      pcVar27 = pcVar6;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar6);
      param_1 = pcVar5;
      func_0x000100073060(pcVar8);
      _objc_release(pcVar5);
      pcVar5 = pcVar8;
      func_0x00010006e9c0();
      _objc_retainAutoreleasedReturnValue();
      if (pcVar5 == (char *)0x0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000031,0x8000000100092c60)
        ;
        _objc_release();
        __Block_copy(param_5);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x8000000100092bd0)
        ;
        _objc_release();
        (*(code *)param_5[2])(param_5);
        __Block_release(param_5);
        _objc_release(pcVar8);
        FUN_1000120f8(pcStack_c0,pcStack_b8);
        _swift_release(puVar4);
        pcVar5 = pcStack_b0;
        pcVar27 = pcVar17;
        goto LAB_1000113e4;
      }
      pcVar7 = pcVar5;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      pcStack_c8 = pcVar7;
      _objc_release(pcVar5);
      puVar9 = &UNK_1000a0dc8;
      _swift_allocObject(&UNK_1000a0dc8,0x20,7);
      pcVar5 = pcStack_b0;
      *(undefined8 *)(puVar9 + 0x10) = 0x10001273c;
      *(char **)(puVar9 + 0x18) = pcStack_b0;
      uVar10 = 0;
      FUN_100012168(0,0x1000dd128,&PTR_PTR_1000d1b70);
      pcVar6 = PTR__OBJC_CLASS___SCNGrpcUnaryEventHandlerImpl_1000d21b8;
      _objc_allocWithZone();
      uStack_80 = 0x100012160;
      pcStack_a0 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_100010a10;
      puStack_88 = &UNK_1000a0de0;
      ppcVar23 = &pcStack_a0;
      puStack_78 = puVar9;
      __Block_copy(ppcVar23);
      _swift_getObjCClassFromMetadata(uVar10);
      _swift_retain(pcVar5);
      func_0x0001000704a0();
      __Block_release(ppcVar23);
      _swift_release(puStack_78);
      pcVar17 = (char *)0xd000000000000045;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000045,0x8000000100092ca0);
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(pcVar7,pcVar27);
      _objc_retain();
      param_3 = pcStack_a8;
      ppcVar23 = (char **)0x0;
      param_2 = pcStack_a8;
      param_1 = pcVar17;
      pcVar22 = pcVar7;
      func_0x0001000743e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar17);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      _objc_release(pcVar6);
      _objc_release(param_2);
      FUN_1000120f8(pcStack_c8,pcVar27);
      _objc_release(pcVar8);
      FUN_1000120f8(pcStack_c0,pcStack_b8);
      _swift_release(puVar4);
      _swift_release(pcStack_b0);
      pcVar5 = param_3;
    }
    _objc_release(pcVar5);
    pcVar21 = param_1;
    pcVar5 = param_3;
    pcVar26 = pcVar6;
    param_3 = pcVar7;
  }
  lVar18 = 3;
  _swift_release_n(puVar3);
  __Block_release(param_5);
  ppcVar11 = param_5;
  __Block_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(char **)((long)alStack_150 + lVar2 + 0x20) = param_2;
  *(char **)((long)alStack_150 + lVar2 + 0x28) = param_3;
  *(char **)((long)alStack_150 + lVar2 + 0x30) = pcVar8;
  *(char **)((long)alStack_150 + lVar2 + 0x38) = pcVar27;
  *(char **)((long)alStack_150 + lVar2 + 0x40) = pcVar26;
  *(undefined **)((long)alStack_150 + lVar2 + 0x48) = puVar4;
  *(char **)((long)alStack_150 + lVar2 + 0x50) = pcVar5;
  *(char **)((long)alStack_150 + lVar2 + 0x58) = pcVar17;
  *(undefined **)((long)alStack_150 + lVar2 + 0x60) = puVar3;
  *(char ***)((long)alStack_150 + lVar2 + 0x68) = param_5;
  *(undefined1 **)((long)alStack_150 + lVar2 + 0x70) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_150 + lVar2 + 0x78) = 0x1000114c0;
  *(char ***)((long)&uStack_190 + lVar2) = ppcVar11;
  pbVar13 = abStack_188 + lVar2;
  pbVar13[0] = 0x16;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0xd0;
  *(undefined8 *)((long)&uStack_180 + lVar2) = 0x8000000100092b30;
  __Block_copy(ppcVar23);
  __Block_copy(ppcVar23);
  puVar3 = PTR___sSSN_1000a0680;
  puVar4 = PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_178 + lVar2,abStack_188 + lVar2,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (*(long *)(pcVar21 + 0x10) == 0) {
LAB_100011584:
    *(undefined8 *)((long)alStack_150 + lVar2 + 8) = 0;
    *(undefined8 *)((long)alStack_150 + lVar2) = 0;
    *(undefined8 *)((long)alStack_150 + lVar2 + 0x18) = 0;
    *(undefined8 *)((long)alStack_150 + lVar2 + 0x10) = 0;
  }
  else {
    _swift_bridgeObjectRetain(pcVar21);
    puVar12 = auStack_178 + lVar2;
    FUN_100010aa4(puVar12);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar21);
      goto LAB_100011584;
    }
    FUN_100012008(*(long *)(pcVar21 + 0x38) + (long)puVar12 * 0x20,(long)alStack_150 + lVar2);
    _swift_bridgeObjectRelease(pcVar21);
  }
  FUN_100010e28(auStack_178 + lVar2);
  puVar4 = PTR___sypN_1000a08a0;
  if (*(long *)((long)alStack_150 + lVar2 + 0x18) == 0) {
    func_0x000100010e5c((long)alStack_150 + lVar2);
LAB_1000115d8:
    pbVar13 = abStack_188 + lVar2;
    pbVar13[0] = 0x12;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    pbVar13[4] = 0;
    pbVar13[5] = 0;
    pbVar13[6] = 0;
    pbVar13[7] = 0xd0;
    *(undefined8 *)((long)&uStack_180 + lVar2) = 0x8000000100092b50;
    puVar9 = PTR___sSSN_1000a0680;
    __ss11AnyHashableVyABxcSHRzlufC
              (auStack_178 + lVar2,abStack_188 + lVar2,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690
              );
    if (*(long *)(pcVar21 + 0x10) == 0) {
LAB_100011648:
      *(undefined8 *)((long)alStack_150 + lVar2 + 8) = 0;
      *(undefined8 *)((long)alStack_150 + lVar2) = 0;
      *(undefined8 *)((long)alStack_150 + lVar2 + 0x18) = 0;
      *(undefined8 *)((long)alStack_150 + lVar2 + 0x10) = 0;
    }
    else {
      _swift_bridgeObjectRetain(pcVar21);
      puVar12 = auStack_178 + lVar2;
      FUN_100010aa4(puVar12);
      if (((ulong)puVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(pcVar21);
        goto LAB_100011648;
      }
      FUN_100012008(*(long *)(pcVar21 + 0x38) + (long)puVar12 * 0x20,(long)alStack_150 + lVar2);
      _swift_bridgeObjectRelease(pcVar21);
    }
    FUN_100010e28(auStack_178 + lVar2);
    if (*(long *)((long)alStack_150 + lVar2 + 0x18) == 0) {
      func_0x000100010e5c((long)alStack_150 + lVar2);
      goto LAB_1000116b8;
    }
    pbVar13 = abStack_188 + lVar2;
    _swift_dynamicCast(pbVar13,(long)alStack_150 + lVar2,puVar4 + 8,PTR___sSSN_1000a0680,6);
    if (((ulong)pbVar13 & 1) == 0) goto LAB_1000116b8;
    uVar10 = *(undefined8 *)(abStack_188 + lVar2);
    uVar19 = *(ulong *)((long)&uStack_180 + lVar2);
    uVar28 = uVar19;
    __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
              (uVar10,uVar19,0);
    _swift_bridgeObjectRelease(uVar19);
    if (0xe < uVar28 >> 0x3c) goto LAB_1000116b8;
  }
  else {
    pbVar13 = abStack_188 + lVar2;
    _swift_dynamicCast(pbVar13,(long)alStack_150 + lVar2,PTR___sypN_1000a08a0 + 8,
                       PTR___sSbN_1000a06c0,6);
    if ((((ulong)pbVar13 & 1) == 0) || ((abStack_188[lVar2] & 1) == 0)) goto LAB_1000115d8;
LAB_1000116b8:
    uVar10 = 0;
    uVar28 = 0xc000000000000000;
  }
  lVar25 = *(long *)(pcVar22 + _DAT_1000dd0d8);
  uVar14 = 0x645f646f6d726568;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x645f646f6d726568,0xea00000000007075);
  uVar16 = uVar10;
  uVar19 = uVar28;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar10);
  func_0x00010006f620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar16);
  lVar15 = lVar25;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(lVar25);
  uVar1 = (uint)(uVar19 >> 0x20);
  uVar24 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar24 == 0) {
      if ((uVar19 & 0xff000000000000) != 0) {
LAB_100011770:
        lVar25 = 0x1000dd118;
        FUN_1000103e0(0x1000dd118,&UNK_10008eff0);
        _swift_allocObject();
        *(undefined8 *)(lVar25 + 0x18) = 2;
        *(undefined8 *)(lVar25 + 0x10) = 1;
        *(undefined **)(lVar25 + 0x38) = puVar3;
        *(undefined8 *)(lVar25 + 0x20) = 0xd000000000000013;
        *(undefined8 *)(lVar25 + 0x28) = 0x8000000100092b70;
        uVar16 = 0;
        lVar20 = lVar15;
        __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
                  (0,lVar15,uVar19);
        *(undefined **)(lVar25 + 0x58) = puVar3;
        *(undefined8 *)(lVar25 + 0x40) = uVar16;
        *(long *)(lVar25 + 0x48) = lVar20;
        uVar16 = 0;
        FUN_100012168(0,0x1000dd120,&PTR__OBJC_CLASS___NSDictionary_1000d1d40);
        __sSo12NSDictionaryC10FoundationE17dictionaryLiteralAByp_yptd_tcfC(lVar25,uVar16);
        uVar16 = 0;
        if (lVar18 != 0) {
          uVar16 = *(undefined8 *)((long)&uStack_190 + lVar2);
        }
        lVar2 = -0x2000000000000000;
        if (lVar18 != 0) {
          lVar2 = lVar18;
        }
        __Block_copy(ppcVar23);
        _swift_bridgeObjectRetain(lVar18);
        FUN_100010ea4(lVar25,uVar16,lVar2,pcVar22,ppcVar23);
        __Block_release(ppcVar23);
        _objc_release(lVar25);
        FUN_1000120f8(lVar15,uVar19);
        _swift_bridgeObjectRelease(lVar2);
        goto LAB_1000118d4;
      }
    }
    else if ((long)(int)lVar15 != lVar15 >> 0x20) goto LAB_100011770;
  }
  else if ((uVar24 == 2) && (*(long *)(lVar15 + 0x10) != *(long *)(lVar15 + 0x18)))
  goto LAB_100011770;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003c,0x8000000100092b90);
  _objc_release();
  __Block_copy(ppcVar23);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x8000000100092bd0);
  _objc_release();
  (*(code *)ppcVar23[2])(ppcVar23);
  __Block_release(ppcVar23);
  FUN_1000120f8(lVar15,uVar19);
LAB_1000118d4:
  FUN_1000120f8(uVar10,uVar28);
  __Block_release(ppcVar23);
  __Block_release(ppcVar23);
  return;
}



/* Entry: 100011f9c; end: 100011fbf;  */

void FUN_100011f9c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100011fc0; end: 100011fc3;  */

void FUN_100011fc0(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x8000000100092d80);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 100011fc4; end: 100011fe7;  */

void FUN_100011fc4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100011fe8; end: 100012007;  */

void FUN_100011fe8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  pcVar5 = *(code **)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
  lVar8 = lVar8 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 == 0) {
    (*pcVar5)();
  }
  else {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x8000000100092d40);
      _objc_release();
      (*pcVar5)();
    }
    else {
      lVar9 = 0x1000dd118;
      FUN_1000103e0(0x1000dd118,&UNK_10008eff0);
      _swift_allocObject();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      puVar7 = PTR___sSSN_1000a0680;
      *(undefined8 *)(lVar9 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(lVar9 + 0x28) = 0x8000000100092d20;
      *(undefined **)(lVar9 + 0x58) = puVar7;
      *(undefined **)(lVar9 + 0x38) = puVar7;
      *(ulong *)(lVar9 + 0x40) = param_1;
      *(ulong *)(lVar9 + 0x48) = param_2;
      FUN_100012168(0,0x1000dd120,&PTR__OBJC_CLASS___NSDictionary_1000d1d40);
      _swift_bridgeObjectRetain(param_2);
      __sSo12NSDictionaryC10FoundationE17dictionaryLiteralAByp_yptd_tcfC(lVar9);
      uVar2 = 0;
      if (lVar10 != 0) {
        uVar2 = uVar6;
      }
      lVar3 = -0x2000000000000000;
      if (lVar10 != 0) {
        lVar3 = lVar10;
      }
      _swift_retain(uVar4);
      _swift_bridgeObjectRetain(lVar10);
      FUN_1000121a8(lVar9,uVar2,lVar3,lVar8,pcVar5,uVar4);
      _swift_bridgeObjectRelease(lVar3);
      _swift_release(uVar4);
      _objc_release(lVar8);
      lVar8 = lVar9;
    }
    _objc_release(lVar8);
  }
  return;
}



/* Entry: 100012008; end: 100012043;  */

long FUN_100012008(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100012044; end: 100012063;  */

void FUN_100012044(void)

{
  _objc_opt_self(&PTR_PTR_1000d30c0);
  return;
}



/* Entry: 100012064; end: 10001206f;  */

void FUN_100012064(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010001206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100012070; end: 1000120af;  */

void FUN_100012070(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x8000000100092d80);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 1000120b0; end: 1000120b3;  */

void FUN_1000120b0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 1000120b4; end: 1000120e7;  */

void FUN_1000120b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 1000120e8; end: 1000120f7;  */

void FUN_1000120e8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  pcVar5 = *(code **)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
  lVar8 = lVar8 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 == 0) {
    (*pcVar5)();
  }
  else {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x8000000100092d40);
      _objc_release();
      (*pcVar5)();
    }
    else {
      lVar9 = 0x1000dd118;
      FUN_1000103e0(0x1000dd118,&UNK_10008eff0);
      _swift_allocObject();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      puVar7 = PTR___sSSN_1000a0680;
      *(undefined8 *)(lVar9 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(lVar9 + 0x28) = 0x8000000100092d20;
      *(undefined **)(lVar9 + 0x58) = puVar7;
      *(undefined **)(lVar9 + 0x38) = puVar7;
      *(ulong *)(lVar9 + 0x40) = param_1;
      *(ulong *)(lVar9 + 0x48) = param_2;
      FUN_100012168(0,0x1000dd120,&PTR__OBJC_CLASS___NSDictionary_1000d1d40);
      _swift_bridgeObjectRetain(param_2);
      __sSo12NSDictionaryC10FoundationE17dictionaryLiteralAByp_yptd_tcfC(lVar9);
      uVar2 = 0;
      if (lVar10 != 0) {
        uVar2 = uVar6;
      }
      lVar3 = -0x2000000000000000;
      if (lVar10 != 0) {
        lVar3 = lVar10;
      }
      _swift_retain(uVar4);
      _swift_bridgeObjectRetain(lVar10);
      FUN_1000121a8(lVar9,uVar2,lVar3,lVar8,pcVar5,uVar4);
      _swift_bridgeObjectRelease(lVar3);
      _swift_release(uVar4);
      _objc_release(lVar8);
      lVar8 = lVar9;
    }
    _objc_release(lVar8);
  }
  return;
}



/* Entry: 1000120f8; end: 100012137;  */

void FUN_1000120f8(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100012138; end: 10001215b;  */

void FUN_100012138(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 10001215c; end: 100012167;  */

void FUN_10001215c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x8000000100092bd0);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 100012168; end: 1000121a7;  */

void FUN_100012168(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1000121a8; end: 100012667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000121a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long alStack_d0 [4];
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_1000a0e18;
  lVar10 = 0x20;
  _swift_allocObject(&UNK_1000a0e18,0x20,7);
  *(code **)(puVar2 + 0x10) = param_5;
  *(long *)(puVar2 + 0x18) = param_6;
  lVar12 = *(long *)(param_4 + _DAT_1000dd0e0);
  if (lVar12 == 0) {
    _swift_retain(param_6);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x8000000100092c00);
    _objc_release();
    (*param_5)();
    if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_1000a09e0)(puVar2);
      return;
    }
    goto LAB_100012664;
  }
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
  _objc_opt_self();
  puStack_a0 = (undefined *)0x0;
  _swift_retain(param_6);
  _objc_retain();
  func_0x00010006ea40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puStack_a0;
  _objc_retain(puStack_a0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar4;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar4);
    _swift_willThrow();
    _swift_errorRelease(puVar3);
LAB_1000125ac:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x8000000100092c30);
    _objc_release();
    (*param_5)();
    _swift_release(puVar2);
  }
  else {
    puVar4 = puVar3;
    lStack_a8 = lVar12;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(puVar3);
    _objc_release(puVar3);
    __sSS10FoundationE8EncodingV4utf8ACvgZ((long)&lStack_b0 + lVar1);
    puVar3 = puVar4;
    lVar12 = lVar10;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
              (puVar4,lVar10,(long)&lStack_b0 + lVar1);
    if (lVar12 == 0) {
      FUN_1000120f8(puVar4,lVar10);
      lVar12 = lStack_a8;
      goto LAB_1000125ac;
    }
    puVar5 = PTR_PTR_1000d1ee0;
    _objc_allocWithZone();
    func_0x00010006ff60();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    func_0x000100073700(puVar5);
    _objc_release(param_2);
    lVar11 = lVar12;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar3,lVar12);
    _swift_bridgeObjectRelease(lVar12);
    func_0x000100073060(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010006e9c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000031,0x8000000100092c60);
      _objc_release();
      (*param_5)();
      _objc_release(puVar5);
      FUN_1000120f8(puVar4,lVar10);
      _swift_release(puVar2);
      lVar12 = lStack_a8;
    }
    else {
      puVar6 = puVar3;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar3);
      puVar3 = &UNK_1000a0e40;
      _swift_allocObject(&UNK_1000a0e40,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_100012668;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      uVar7 = 0;
      FUN_100012168(0,0x1000dd128,&PTR_PTR_1000d1b70);
      puVar8 = PTR__OBJC_CLASS___SCNGrpcUnaryEventHandlerImpl_1000d21b8;
      _objc_allocWithZone(PTR__OBJC_CLASS___SCNGrpcUnaryEventHandlerImpl_1000d21b8);
      uStack_80 = 0x100012738;
      puStack_a0 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_100010a10;
      puStack_88 = &UNK_1000a0e58;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar3;
      __Block_copy(ppuVar9);
      _swift_getObjCClassFromMetadata(uVar7);
      _swift_retain(puVar2);
      func_0x0001000704a0(puVar8);
      __Block_release(ppuVar9);
      _swift_release(puStack_78);
      uVar7 = 0xd000000000000045;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000045,0x8000000100092ca0);
      puVar3 = puVar6;
      lStack_b0 = lVar10;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar6,lVar11);
      _objc_retain(puVar8);
      param_6 = lStack_a8;
      lVar12 = lStack_a8;
      func_0x0001000743e0(lStack_a8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar8);
      _objc_release(lVar12);
      FUN_1000120f8(puVar6,lVar11);
      _objc_release(puVar5);
      FUN_1000120f8(puVar4,lStack_b0);
      _swift_release(puVar2);
      lVar12 = param_6;
    }
  }
  _objc_release(lVar12);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
    return;
  }
LAB_100012664:
  ___stack_chk_fail();
  *(long *)((long)alStack_d0 + lVar1) = param_6;
  *(undefined **)((long)alStack_d0 + lVar1 + 8) = puVar2;
  *(undefined1 **)((long)alStack_d0 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_d0 + lVar1 + 0x18) = FUN_100012668;
  (**(code **)(param_6 + 0x10))();
  return;
}



/* Entry: 100012668; end: 100012703;  */

void FUN_100012668(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100012704; end: 10001274b;  */

void FUN_100012704(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 10001274c; end: 10001278b;  */

void FUN_10001274c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000a09f0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10001278c; end: 10001279f;  */

bool FUN_10001278c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1000127a0; end: 10001284b;  */

void FUN_1000127a0(void)

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



/* Entry: 10001284c; end: 1000128af;  */

undefined1  [16] FUN_10001284c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0xe900000000000079;
  uVar2 = 0x654b63696c627570;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6e6f6973726576;
  }
  uVar1 = 0xea00000000007965;
  uVar3 = 0x4b65746176697270;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1000128b0; end: 1000128d3;  */

void FUN_1000128b0(undefined1 *param_1,undefined1 param_2)

{
  FUN_100012c18();
  *param_1 = param_2;
  return;
}



/* Entry: 1000128d4; end: 1000128eb;  */

undefined1  [16] FUN_1000128d4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1000128ec; end: 10001293b;  */

void FUN_1000128ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100012b04();
                    /* WARNING: Could not recover jumptable at 0x00010006b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000a0888)(param_1,uVar1);
  return;
}



/* Entry: 10001293c; end: 100012adf;  */

void FUN_10001293c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [23];
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0x1000dd130;
  FUN_1000103e0(0x1000dd130,&UNK_10008f000);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_100012ae0(param_1,uVar1);
  FUN_100012b04();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_a0 + -extraout_x8,&UNK_1000a1008,&UNK_1000a1008,param_1,uVar1,uVar2);
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_81 = 0;
  puVar4 = &uStack_60;
  FUN_100012b44(puVar4,auStack_98);
  FUN_100012b80();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_80,&uStack_81,lVar3,PTR___s10Foundation4DataVN_1000a0b08,puVar4);
  FUN_1000120f8(uStack_80,uStack_78);
  if (unaff_x21 == 0) {
    uStack_68 = unaff_x20[3];
    uStack_70 = unaff_x20[2];
    uStack_78 = unaff_x20[3];
    uStack_80 = unaff_x20[2];
    uStack_81 = 1;
    FUN_100012b44(&uStack_70,auStack_98);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&uStack_80,&uStack_81,lVar3,PTR___s10Foundation4DataVN_1000a0b08,puVar4);
    FUN_1000120f8(uStack_80,uStack_78);
    uStack_80 = CONCAT71(uStack_80._1_7_,2);
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[4],&uStack_80,lVar3);
  }
  (**(code **)(lVar5 + 8))(auStack_a0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 100012ae0; end: 100012b03;  */

long * FUN_100012ae0(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100012b04; end: 100012b43;  */

void FUN_100012b04(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f160;
  _swift_getWitnessTable(&UNK_10008f160,&UNK_1000a1008);
  puRam00000001000dd138 = puVar1;
  return;
}



/* Entry: 100012b44; end: 100012b7f;  */

undefined8 FUN_100012b44(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___s10Foundation4DataVN_1000a0b08 + -8) + 0x10))(param_2,param_1);
  return param_2;
}



/* Entry: 100012b80; end: 100012bbf;  */

void FUN_100012b80(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd140 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSEAAMc_1000a0b10;
  _swift_getWitnessTable
            (PTR___s10Foundation4DataVSEAAMc_1000a0b10,PTR___s10Foundation4DataVN_1000a0b08);
  puRam00000001000dd140 = puVar1;
  return;
}



/* Entry: 100012bc0; end: 100012c03;  */

void FUN_100012bc0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100012d3c(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    param_1[4] = uStack_28;
  }
  return;
}



/* Entry: 100012c04; end: 100012c17;  */

void FUN_100012c04(void)

{
  FUN_10001293c();
  return;
}



/* Entry: 100012c18; end: 100012d3b;  */

undefined4 FUN_100012c18(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x4b65746176697270 && param_2 == -0x15ffffffffff869b) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x4b65746176697270,0xea00000000007965,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x654b63696c627570) && (param_2 == -0x16ffffffffffff87)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x654b63696c627570,0xe900000000000079,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x6e6f6973726576) && (param_2 == -0x1900000000000000)) {
        _swift_bridgeObjectRelease(0xe700000000000000);
        uVar2 = 2;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6e6f6973726576,0xe700000000000000,param_1,param_2,0);
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 100012d3c; end: 100012f7f;  */

/* WARNING: Removing unreachable block (ram,0x000100012f00) */
/* WARNING: Removing unreachable block (ram,0x000100012ea8) */
/* WARNING: Removing unreachable block (ram,0x000100012f04) */
/* WARNING: Removing unreachable block (ram,0x000100012f1c) */
/* WARNING: Removing unreachable block (ram,0x000100012e2c) */

void FUN_100012d3c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar4 = 0x1000dd160;
  FUN_1000103e0(0x1000dd160,&UNK_10008f1b0);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_100012ae0(param_2,uVar1);
  FUN_100012b04();
  puVar6 = &UNK_1000a1008;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_90 + -extraout_x8,&UNK_1000a1008,&UNK_1000a1008,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    FUN_100013420();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_70,PTR___s10Foundation4DataVN_1000a0b08,&uStack_51,lVar4,
               PTR___s10Foundation4DataVN_1000a0b08,puVar6);
    uVar1 = CONCAT71(uStack_6f,uStack_70);
    uStack_78 = uStack_68;
    uStack_51 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&uStack_70,PTR___s10Foundation4DataVN_1000a0b08,&uStack_51,lVar4,
               PTR___s10Foundation4DataVN_1000a0b08,puVar6);
    uStack_88 = CONCAT71(uStack_6f,uStack_70);
    uStack_80 = uStack_68;
    uStack_70 = 2;
    puVar7 = &uStack_70;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar7,lVar4);
    (**(code **)(lVar8 + 8))(auStack_90 + -extraout_x8,lVar4);
    uVar3 = uStack_78;
    FUN_10001274c(uVar1,uStack_78);
    uVar2 = uStack_80;
    FUN_10001274c(uStack_88,uStack_80);
    FUN_100013400(param_2);
    FUN_1000120f8(uVar1,uVar3);
    FUN_1000120f8(uStack_88,uVar2);
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uStack_88;
    param_1[3] = uVar2;
    param_1[4] = puVar7;
  }
  else {
    FUN_100013400(param_2);
  }
  return;
}



/* Entry: 100012f80; end: 100012fd7;  */

long FUN_100012f80(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100012fd8; end: 10001309f;  */

undefined8 * FUN_100012fd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_10001274c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  FUN_10001274c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 1000130a0; end: 1000130b3;  */

void FUN_1000130a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1000130b4; end: 100013103;  */

undefined8 * FUN_1000130b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_1000120f8(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_1000120f8(uVar1,uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 100013104; end: 100013337;  */

int FUN_100013104(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100013338; end: 100013377;  */

void FUN_100013338(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f138;
  _swift_getWitnessTable(&UNK_10008f138,&UNK_1000a1008);
  puRam00000001000dd148 = puVar1;
  return;
}



/* Entry: 100013378; end: 10001337b;  */

void FUN_100013378(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f0d0;
  _swift_getWitnessTable(&UNK_10008f0d0,&UNK_1000a1008);
  puRam00000001000dd150 = puVar1;
  return;
}



/* Entry: 10001337c; end: 1000133bb;  */

void FUN_10001337c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f0d0;
  _swift_getWitnessTable(&UNK_10008f0d0,&UNK_1000a1008);
  puRam00000001000dd150 = puVar1;
  return;
}



/* Entry: 1000133bc; end: 1000133bf;  */

void FUN_1000133bc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f0a8;
  _swift_getWitnessTable(&UNK_10008f0a8,&UNK_1000a1008);
  puRam00000001000dd158 = puVar1;
  return;
}



/* Entry: 1000133c0; end: 1000133ff;  */

void FUN_1000133c0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f0a8;
  _swift_getWitnessTable(&UNK_10008f0a8,&UNK_1000a1008);
  puRam00000001000dd158 = puVar1;
  return;
}



/* Entry: 100013400; end: 10001341f;  */

void FUN_100013400(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100013414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(*param_1);
  return;
}



/* Entry: 100013420; end: 10001345f;  */

void FUN_100013420(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd168 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSeAAMc_1000a0b18;
  _swift_getWitnessTable
            (PTR___s10Foundation4DataVSeAAMc_1000a0b18,PTR___s10Foundation4DataVN_1000a0b08);
  puRam00000001000dd168 = puVar1;
  return;
}



/* Entry: 100013460; end: 10001356f;  */

/* WARNING: Removing unreachable block (ram,0x0001000134d4) */

undefined8 FUN_100013460(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_60 = param_1[4];
  uVar4 = uVar1;
  func_0x000100013730();
  puVar5 = &UNK_1000a0f68;
  puVar2 = &uStack_80;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar2,&UNK_1000a0f68,uVar4);
  puVar3 = puVar2;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  uVar4 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x8000000100092e30);
  func_0x000100073340(param_2);
  FUN_1000120f8(puVar2,puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _swift_release(uVar1);
  return 1;
}



/* Entry: 100013570; end: 1000136df;  */

/* WARNING: Removing unreachable block (ram,0x000100013690) */

void FUN_100013570(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x8000000100092e30);
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60,param_2);
    _swift_unknownObjectRelease(param_2);
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  lStack_88 = lStack_48;
  uStack_90 = uStack_50;
  if (lStack_48 == 0) {
    func_0x000100010e5c(&uStack_a0);
  }
  else {
    puVar2 = &uStack_70;
    _swift_dynamicCast(puVar2,&uStack_a0,PTR___sypN_1000a08a0 + 8,
                       PTR___s10Foundation4DataVN_1000a0b08,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar3 = 0;
      __s10Foundation11JSONDecoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONDecoderCACycfc();
      uVar1 = uVar3;
      FUN_1000136f0();
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (&uStack_a0,&UNK_1000a0f68,uStack_70,uStack_68,&UNK_1000a0f68,uVar1);
      _swift_release(uVar3);
      FUN_1000120f8(uStack_70,uStack_68);
      goto LAB_1000136b4;
    }
  }
  uStack_80 = 0;
  uStack_98 = 0xf000000000000000;
  uStack_a0 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
LAB_1000136b4:
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = lStack_88;
  param_1[2] = uStack_90;
  param_1[4] = uStack_80;
  return;
}



/* Entry: 1000136e0; end: 1000136ef;  */

undefined1  [16] FUN_1000136e0(void)

{
  return ZEXT816(0x1000a10d8);
}



/* Entry: 1000136f0; end: 10001376f;  */

void FUN_1000136f0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f008;
  _swift_getWitnessTable(&UNK_10008f008,&UNK_1000a0f68);
  puRam00000001000dd170 = puVar1;
  return;
}



/* Entry: 100013770; end: 100013867; +[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper putUserIdentityWithPrivateKey:publicKey:version:in:] */

uint FUN_100013770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _swift_unknownObjectRetain(param_6);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar3 = param_2;
  _objc_release(uVar1);
  uVar1 = param_4;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(param_4);
  uStack_78 = param_3;
  uStack_70 = param_2;
  uStack_68 = uVar1;
  uStack_60 = uVar3;
  uStack_58 = param_5;
  FUN_10001274c(param_3,param_2);
  FUN_10001274c(uVar1,uVar3);
  puVar2 = &uStack_78;
  FUN_100013460(puVar2,param_6);
  FUN_10001396c(&uStack_78);
  FUN_1000120f8(uVar1,uVar3);
  FUN_1000120f8(param_3,param_2);
  _swift_unknownObjectRelease(param_6);
  return (uint)puVar2 & 1;
}



/* Entry: 100013868; end: 1000138a3; +[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper userIdentityFrom:] */

void FUN_100013868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  FUN_1000139a0(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 1000138a4; end: 1000138ff; +[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper cleanupUserIdentityIn:] */

void FUN_1000138a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x8000000100092e30);
  func_0x000100072640(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_1000a0a08)(param_3);
  return;
}



/* Entry: 100013900; end: 10001393b; -[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper init] */

void FUN_100013900(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_100013aac();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 10001393c; end: 10001396b;  */

void FUN_10001393c(void)

{
  FUN_100013aac();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 10001396c; end: 10001399f;  */

undefined8 FUN_10001396c(undefined8 param_1)

{
  (*(code *)(undefined *)0x100012fac)();
  return param_1;
}



/* Entry: 1000139a0; end: 100013aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1000139a0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100013570(&uStack_78);
  if (uStack_70 >> 0x3c < 0xf) {
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_50 = uStack_78;
    uStack_48 = uStack_70;
    lVar3 = 0;
    FUN_100013c54();
    lVar4 = lVar3;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar4 + _DAT_1000dd1b0);
    puVar1[1] = uStack_48;
    *puVar1 = uStack_50;
    puVar1 = (undefined8 *)(lVar4 + _DAT_1000dd1b8);
    puVar1[1] = uStack_60;
    *puVar1 = uStack_68;
    *(undefined8 *)(lVar4 + _DAT_1000dd1c0) = uStack_58;
    FUN_100012b44(&uStack_50,auStack_88);
    FUN_100012b44(&uStack_40,auStack_88);
    FUN_100012b44(&uStack_50,auStack_88);
    FUN_100012b44(&uStack_40,auStack_88);
    plVar2 = &lStack_98;
    lStack_98 = lVar4;
    lStack_90 = lVar3;
    _objc_msgSendSuper2(plVar2,PTR_s_init_1000d07d0);
    FUN_100013acc(&uStack_78);
    func_0x000100013b14(&uStack_40);
    func_0x000100013b14(&uStack_50);
  }
  else {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}



/* Entry: 100013aac; end: 100013acb;  */

void FUN_100013aac(void)

{
  _objc_opt_self(&PTR_PTR_1000d3198);
  return;
}



/* Entry: 100013acc; end: 100013b47;  */

undefined8 FUN_100013acc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x1000dd1a8;
  FUN_1000103e0(0x1000dd1a8,&UNK_10008f218);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100013b48; end: 100013bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1000dd1b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1000dd1b8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1000dd1c0) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100013bd4; end: 100013bdf; -[SCFideliusExtensionIdentity privateKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013bd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1000dd1b0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1000dd1b0))[1];
  FUN_10001274c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_1000120f8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar3);
  return;
}



/* Entry: 100013be0; end: 100013beb; -[SCFideliusExtensionIdentity publicKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013be0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1000dd1b8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_1000dd1b8))[1];
  FUN_10001274c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_1000120f8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar3);
  return;
}



/* Entry: 100013bec; end: 100013c43;  */

void FUN_100013bec(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  FUN_10001274c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_1000120f8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar3);
  return;
}



/* Entry: 100013c44; end: 100013c53; -[SCFideliusExtensionIdentity version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100013c44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1000dd1c0);
}



/* Entry: 100013c54; end: 100013c73;  */

void FUN_100013c54(void)

{
  _objc_opt_self(&PTR_PTR_1000d3248);
  return;
}



/* Entry: 100013c74; end: 100013d47; -[SCFideliusExtensionIdentity initWithPrivateKey:publicKey:version:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013c74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar3 = param_2;
  _objc_release(uVar2);
  uVar2 = param_4;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release();
  puVar1 = (undefined8 *)(param_1 + _DAT_1000dd1b0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1000dd1b8);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_1000dd1c0) = param_5;
  FUN_100013c54();
  lStack_60 = param_1;
  uStack_58 = param_4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100013d48; end: 100013da3; -[SCFideliusExtensionIdentity init] */

void FUN_100013d48(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FideliusExtensionIdentityUtil.FideliusExtensionIdentityObjc",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100013d74);
  (*pcVar1)();
}



/* Entry: 100013da4; end: 100013de3; -[SCFideliusExtensionIdentity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013da4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  FUN_1000120f8(*(undefined8 *)(param_1 + _DAT_1000dd1b0),
                ((undefined8 *)(param_1 + _DAT_1000dd1b0))[1]);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1000dd1b8))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + _DAT_1000dd1b8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100013de4; end: 100013f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100013de4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_1000a08c0;
  puVar1 = &UNK_1000a1130;
  _swift_allocObject(&UNK_1000a1130,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1000a1158;
  _swift_allocObject(&UNK_1000a1158,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_100014064;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x1000dd1f0;
  FUN_1000103e0(0x1000dd1f0,&UNK_10008f250);
  uVar4 = uVar3;
  FUN_1000140c0();
  pcVar5 = FUN_100014090;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_100014090,puVar2,uVar3,uVar4);
  _swift_release(puVar2);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_48);
  _swift_release(pcVar5);
  puVar1 = &UNK_1000a1180;
  _swift_allocObject(&UNK_1000a1180,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar3 = 0x1000dd218;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  FUN_1000103e0(0x1000dd218,&UNK_10008f258);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&uStack_49,FUN_100014254,auStack_80,uVar3);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(puStack_48);
  return 1;
}



/* Entry: 100013f4c; end: 100013f6f;  */

void FUN_100013f4c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100013f70; end: 100014063;  */

void FUN_100013f70(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_6 + 0x10,auStack_58,0,0);
  param_6 = param_6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_6 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar1 = param_1;
    }
    uVar2 = 0;
    if (param_4 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
      uVar2 = param_3;
    }
    if (param_5 != 0) {
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (param_5,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
                 PTR___ss11AnyHashableVSHsWP_1000a0730);
    }
    func_0x00010006eda0(param_6);
    _swift_unknownObjectRelease(param_6);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_5);
  }
  return;
}


