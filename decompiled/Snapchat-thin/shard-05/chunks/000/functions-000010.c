/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a28a64; end: 103a28b07; -[_TtC33SCMapStateComplianceTakeoverScope33SCMapStateComplianceTakeoverScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a28a64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fccf88;
  func_0x000107c61614(param_1 + _DAT_112fccf88,0);
  *(undefined8 *)(param_1 + _DAT_112fccf80) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 103a28b08; end: 103a28b67; -[_TtC33SCMapStateComplianceTakeoverScope33SCMapStateComplianceTakeoverScope init] */

void FUN_103a28b08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapStateComplianceTakeoverScope.SCMapStateComplianceTakeoverScope",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a28b34);
  (*pcVar1)();
}



/* Entry: 103a28b68; end: 103a28bc3; -[_TtC33SCMapStateComplianceTakeoverScope33SCMapStateComplianceTakeoverScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a28b68(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fccf80));
  param_1 = param_1 + _DAT_112fccf88;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103a28bc4; end: 103a28c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a28bc4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034a798();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fccfc0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103a28c30; end: 103a28c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a28c30(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034a798();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fccfc0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103a28c38; end: 103a28c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a28c38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fccfc0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a28c84; end: 103a28ca3; -[_TtC22ShareLocationFlowScope32ShareLocationFlowFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a28c84(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fccfc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a28ca4; end: 103a28d03; -[_TtC22ShareLocationFlowScope32ShareLocationFlowFactoryServices init] */

void FUN_103a28ca4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareLocationFlowScope.ShareLocationFlowFactoryServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a28cd0);
  (*pcVar1)();
}



/* Entry: 103a28d04; end: 103a28d37; -[_TtC22ShareLocationFlowScope32ShareLocationFlowFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a28d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fccfc0));
  return;
}



/* Entry: 103a28d38; end: 103a28de3;  */

void FUN_103a28d38(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a28de4; end: 103a28e0b;  */

void FUN_103a28de4(ulong *param_1,ulong *param_2)

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



/* Entry: 103a28e0c; end: 103a28ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103a28e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fccff8;
  func_0x000107c61614(unaff_x20 + _DAT_112fccff8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fccff0) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112fcd000) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd008) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd010) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 103a28ff4; end: 103a290e3; -[_TtC22ShareLocationFlowScope22ShareLocationFlowScope initWithUiContainer:delegate:source:recipients:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a28ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  lVar2 = _DAT_112fccff8;
  func_0x000107c61614(param_1 + _DAT_112fccff8,0);
  *(undefined8 *)(param_1 + _DAT_112fccff0) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_112fcd000) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fcd008) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fcd010) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 103a290e4; end: 103a29143; -[_TtC22ShareLocationFlowScope22ShareLocationFlowScope init] */

void FUN_103a290e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareLocationFlowScope.ShareLocationFlowScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a29110);
  (*pcVar1)();
}



/* Entry: 103a29144; end: 103a291af; -[_TtC22ShareLocationFlowScope22ShareLocationFlowScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29144(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fccff0));
  func_0x000103a2918c(param_1 + _DAT_112fccff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fcd008));
  return;
}



/* Entry: 103a291b0; end: 103a291b3;  */

void FUN_103a291b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3c7e0;
  func_0x000107c61520(&UNK_10dc3c7e0,&UNK_1106c0080);
  puRam0000000112fcd018 = puVar1;
  return;
}



/* Entry: 103a291b4; end: 103a291f3;  */

void FUN_103a291b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3c7e0;
  func_0x000107c61520(&UNK_10dc3c7e0,&UNK_1106c0080);
  puRam0000000112fcd018 = puVar1;
  return;
}



/* Entry: 103a291f4; end: 103a29203;  */

undefined1  [16] FUN_103a291f4(void)

{
  return ZEXT816(0x1106c0080);
}



/* Entry: 103a29204; end: 103a2926f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29204(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002ae7f8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fcd050) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103a29270; end: 103a29277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29270(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002ae7f8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd050) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103a29278; end: 103a292c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29278(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd050) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a292c4; end: 103a2934b; -[_TtC31MapFriendCompassFactoryServices31MapFriendCompassFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a292c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 103a2934c; end: 103a293ab; -[_TtC31MapFriendCompassFactoryServices31MapFriendCompassFactoryServices init] */

void FUN_103a2934c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendCompassFactoryServices.MapFriendCompassFactoryServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a29378);
  (*pcVar1)();
}



/* Entry: 103a293ac; end: 103a293cb; -[_TtC31MapFriendCompassFactoryServices31MapFriendCompassFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a293ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcd050));
  return;
}



/* Entry: 103a293cc; end: 103a2940f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a293cc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fcd088;
  func_0x000107c61428(unaff_x20 + _DAT_112fcd088,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103a29410; end: 103a2955b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29410(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fcd088;
  func_0x000107c61428(unaff_x20 + _DAT_112fcd088,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103a2955c; end: 103a2961b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a2955c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fcd088;
  func_0x000107c61614(unaff_x20 + _DAT_112fcd088,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fcd080) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 103a2961c; end: 103a296b3; -[_TtC31MapFriendCompassFactoryServices21MapFriendCompassScope initWithViewModelObservable:compassDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2961c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112fcd088;
  func_0x000107c61614(param_1 + _DAT_112fcd088,0);
  *(undefined8 *)(param_1 + _DAT_112fcd080) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  func_0x0001002a73fc();
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_58,puVar1);
  return;
}



/* Entry: 103a296b4; end: 103a2970f; -[_TtC31MapFriendCompassFactoryServices21MapFriendCompassScope init] */

void FUN_103a296b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendCompassFactoryServices.MapFriendCompassScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a296e0);
  (*pcVar1)();
}



/* Entry: 103a29710; end: 103a29747; -[_TtC31MapFriendCompassFactoryServices21MapFriendCompassScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a29710(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fcd080));
  param_1 = param_1 + _DAT_112fcd088;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103a29748; end: 103a29757; -[_TtC21MapQuickShareServices21MapQuickShareServices mapQuickShareProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd0b8));
  return;
}



/* Entry: 103a29758; end: 103a297ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29758(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd0b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a297f0; end: 103a29847; -[_TtC21MapQuickShareServices21MapQuickShareServices initWithMapQuickShareProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a297f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd0b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103a29848; end: 103a298a7; -[_TtC21MapQuickShareServices21MapQuickShareServices init] */

void FUN_103a29848(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapQuickShareServices.MapQuickShareServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a29874);
  (*pcVar1)();
}



/* Entry: 103a298a8; end: 103a298cb; -[_TtC21MapQuickShareServices21MapQuickShareServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a298a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd0b8));
  return;
}



/* Entry: 103a298cc; end: 103a29977;  */

void FUN_103a298cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a29978; end: 103a2999f;  */

void FUN_103a29978(ulong *param_1,ulong *param_2)

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



/* Entry: 103a299a0; end: 103a299af; -[_TtC21MapQuickShareServices22LocationQuickShareInfo friend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a299a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd0e8));
  return;
}



/* Entry: 103a299b0; end: 103a299bf; -[_TtC21MapQuickShareServices22LocationQuickShareInfo source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a299b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fcd0f0);
}



/* Entry: 103a299c0; end: 103a299cf; -[_TtC21MapQuickShareServices22LocationQuickShareInfo isSharingWithUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103a299c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fcd0f8);
}



/* Entry: 103a299d0; end: 103a29a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a299d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd0e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd0f0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fcd0f8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a29a44; end: 103a29ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29a44(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fcd0e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd0f0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fcd0f8) = param_3;
  func_0x000103a29a98();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a29ab8; end: 103a29b13; -[_TtC21MapQuickShareServices22LocationQuickShareInfo init] */

void FUN_103a29ab8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapQuickShareServices.LocationQuickShareInfo",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a29ae4);
  (*pcVar1)();
}



/* Entry: 103a29b14; end: 103a29b27; -[_TtC21MapQuickShareServices22LocationQuickShareInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd0e8));
  return;
}



/* Entry: 103a29b28; end: 103a29b67;  */

void FUN_103a29b28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3c980;
  func_0x000107c61520(&UNK_10dc3c980,&UNK_1106c0238);
  puRam0000000112fcd100 = puVar1;
  return;
}



/* Entry: 103a29b68; end: 103a29b8f;  */

undefined1  [16] FUN_103a29b68(void)

{
  return ZEXT816(0x1106c0238);
}



/* Entry: 103a29b90; end: 103a29bcf;  */

void FUN_103a29b90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ca80;
  func_0x000107c61520(&UNK_10dc3ca80,&UNK_1106c0338);
  puRam0000000112fcd130 = puVar1;
  return;
}



/* Entry: 103a29bd0; end: 103a29c7b;  */

void FUN_103a29bd0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a29c7c; end: 103a29cb3;  */

void FUN_103a29c7c(ulong *param_1,ulong *param_2)

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



/* Entry: 103a29cb4; end: 103a29cc3; -[_TtC21SCEmbeddedMapServices29SCComposerEmbeddedMapServices urlGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd138));
  return;
}



/* Entry: 103a29cc4; end: 103a29d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29cc4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd138) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a29d10; end: 103a29d67; -[_TtC21SCEmbeddedMapServices29SCComposerEmbeddedMapServices initWithUrlGenerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd138) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103a29d68; end: 103a29dc7; -[_TtC21SCEmbeddedMapServices29SCComposerEmbeddedMapServices init] */

void FUN_103a29d68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCEmbeddedMapServices.SCComposerEmbeddedMapServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a29d94);
  (*pcVar1)();
}



/* Entry: 103a29dc8; end: 103a29dd7; -[_TtC21SCEmbeddedMapServices29SCComposerEmbeddedMapServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd138));
  return;
}



/* Entry: 103a29dd8; end: 103a29de7; -[_TtC21SCEmbeddedMapServices21SCEmbeddedMapServices embeddedStaticMapGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd168));
  return;
}



/* Entry: 103a29de8; end: 103a29df7; -[_TtC21SCEmbeddedMapServices21SCEmbeddedMapServices mapSnapshotProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd170));
  return;
}



/* Entry: 103a29df8; end: 103a29e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29df8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd168) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd170) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a29e5c; end: 103a29ed3; -[_TtC21SCEmbeddedMapServices21SCEmbeddedMapServices initWithEmbeddedStaticMapGenerator:mapSnapshotProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29e5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd168) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fcd170) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103a29ed4; end: 103a29f33; -[_TtC21SCEmbeddedMapServices21SCEmbeddedMapServices init] */

void FUN_103a29ed4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCEmbeddedMapServices.SCEmbeddedMapServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a29f00);
  (*pcVar1)();
}



/* Entry: 103a29f34; end: 103a29f6b; -[_TtC21SCEmbeddedMapServices21SCEmbeddedMapServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a29f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a29f54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a29f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd168));
  return;
}



/* Entry: 103a29f6c; end: 103a29f83;  */

bool FUN_103a29f6c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a29f84; end: 103a29fc3;  */

void FUN_103a29f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd1a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cba0;
  func_0x000107c61520(&UNK_10dc3cba0,&UNK_1106c0438);
  puRam0000000112fcd1a0 = puVar1;
  return;
}



/* Entry: 103a29fc4; end: 103a2a06f;  */

void FUN_103a29fc4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a2a070; end: 103a2a0a7;  */

void FUN_103a2a070(ulong *param_1,ulong *param_2)

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



/* Entry: 103a2a0a8; end: 103a2a0b7; -[_TtC29SCMapDropsPersistenceServices29SCMapDropsPersistenceServices dropsPersistenceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd1a8));
  return;
}



/* Entry: 103a2a0b8; end: 103a2a103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a0b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd1a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2a104; end: 103a2a15b; -[_TtC29SCMapDropsPersistenceServices29SCMapDropsPersistenceServices initWithDropsPersistenceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd1a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103a2a15c; end: 103a2a1bb; -[_TtC29SCMapDropsPersistenceServices29SCMapDropsPersistenceServices init] */

void FUN_103a2a15c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapDropsPersistenceServices.SCMapDropsPersistenceServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2a188);
  (*pcVar1)();
}



/* Entry: 103a2a1bc; end: 103a2a1cb; -[_TtC29SCMapDropsPersistenceServices29SCMapDropsPersistenceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd1a8));
  return;
}



/* Entry: 103a2a1cc; end: 103a2a21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a1cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd1d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2a220; end: 103a2a27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a220(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd1d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000103a2a260();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2a280; end: 103a2a2ab; -[_TtC34SCMapFootstepsMemoryStreamServices14FootstepMemory init] */

void FUN_103a2a280(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapFootstepsMemoryStreamServices.FootstepMemory",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2a2ac);
  (*pcVar1)();
}



/* Entry: 103a2a2ac; end: 103a2a2b3;  */

undefined8 FUN_103a2a2ac(void)

{
  return 1;
}



/* Entry: 103a2a2b4; end: 103a2a353;  */

void FUN_103a2a2b4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a2a354; end: 103a2a36f;  */

undefined1  [16] FUN_103a2a354(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006574;
  auVar1._0_8_ = 0x616e6964726f6f63;
  return auVar1;
}



/* Entry: 103a2a370; end: 103a2a3fb;  */

void FUN_103a2a370(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 99;
  if (param_2 == 0x616e6964726f6f63 && param_3 == -0x15ffffffffff9a8c) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x616e6964726f6f63,0xea00000000006574,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 103a2a3fc; end: 103a2a413;  */

undefined1  [16] FUN_103a2a3fc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103a2a414; end: 103a2a463;  */

void FUN_103a2a414(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103a2a5a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103a2a464; end: 103a2a493;  */

void FUN_103a2a464(void)

{
  func_0x000103a2a260();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a2a494; end: 103a2a5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a494(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar4 = 0x112fcd1e0;
  func_0x0001000285a8(0x112fcd1e0,&UNK_10dc3cca0);
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_103a2a5a8();
  func_0x000107c606ec(&stack0xffffffffffffffb0 + -extraout_x8,&UNK_1106c0638,&UNK_1106c0638,param_1,
                      uVar1,uVar2);
  lVar3 = _DAT_112fcd1d8;
  func_0x0001010cd634(0);
  FUN_103a2a7c0(0x112fcd1f0,&UNK_10dc3cea0);
  func_0x000107c60554(unaff_x20 + lVar3);
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar4);
  return;
}



/* Entry: 103a2a5a8; end: 103a2a5e7;  */

void FUN_103a2a5a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cfb0;
  func_0x000107c61520(&UNK_10dc3cfb0,&UNK_1106c0638);
  puRam0000000112fcd1e8 = puVar1;
  return;
}



/* Entry: 103a2a5e8; end: 103a2a627;  */

void FUN_103a2a5e8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103a2a628(param_1);
  return;
}



/* Entry: 103a2a628; end: 103a2a7bf;  */

/* WARNING: Removing unreachable block (ram,0x000103a2a720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a2a628(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0x112fcd1f8;
  func_0x0001000285a8(0x112fcd1f8,&UNK_10dc3cca8);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  puVar6 = puVar5;
  FUN_103a2a5a8();
  func_0x000107c606e0(&stack0xffffffffffffff80 + -extraout_x8,&UNK_1106c0638,&UNK_1106c0638,puVar6,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    func_0x0001010cd634();
    FUN_103a2a7c0(0x112fcd200,&UNK_10dc3ce74);
    func_0x000107c60508(&uStack_70);
    puVar3 = (undefined8 *)(unaff_x20 + _DAT_112fcd1d8);
    puVar3[1] = uStack_68;
    *puVar3 = uStack_70;
    func_0x000103a2a260();
    puVar5 = &stack0xffffffffffffff80;
    func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
    (**(code **)(lVar7 + 8))(&stack0xffffffffffffff80 + -extraout_x8,lVar4);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    func_0x000103a2a260();
    func_0x000107c61464();
  }
  return puVar5;
}



/* Entry: 103a2a7c0; end: 103a2a7ff;  */

void FUN_103a2a7c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001010cd634(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103a2a800; end: 103a2a84f;  */

void FUN_103a2a800(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = param_2;
  func_0x000103a2a260();
  func_0x000107c610f8();
  FUN_103a2a628(param_2,uVar1);
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103a2a850; end: 103a2a96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2a850(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar4 = 0x112fcd1e0;
  func_0x0001000285a8(0x112fcd1e0,&UNK_10dc3cca0);
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *unaff_x20;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_103a2a5a8();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1106c0638,&UNK_1106c0638,param_1,
                      uVar1,uVar2);
  lVar3 = _DAT_112fcd1d8;
  func_0x0001010cd634(0);
  FUN_103a2a7c0(0x112fcd1f0,&UNK_10dc3cea0);
  func_0x000107c60554(lVar6 + lVar3);
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar4);
  return;
}



/* Entry: 103a2a96c; end: 103a2a97f;  */

bool FUN_103a2a96c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a2a980; end: 103a2aae3;  */

void FUN_103a2a980(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x64757469676e6f6c;
  if (cVar2 != '\x01') {
    uVar1 = 0x656475746974616c;
  }
  uVar3 = 0xe900000000000065;
  if (cVar2 != '\x01') {
    uVar3 = 0xe800000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a2aae4; end: 103a2ab5b;  */

void FUN_103a2aae4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103a2ab5c; end: 103a2abdf;  */

void FUN_103a2ab5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x64757469676e6f6c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x656475746974616c;
  }
  uVar2 = 0xe900000000000065;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103a2abe0; end: 103a2ac5b;  */

void FUN_103a2abe0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103a2ac5c; end: 103a2ac73;  */

undefined1  [16] FUN_103a2ac5c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103a2ac74; end: 103a2acc3;  */

void FUN_103a2ac74(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103a2adf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103a2acc4; end: 103a2adf7;  */

void FUN_103a2acc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  lVar3 = 0x112fcd260;
  func_0x0001000285a8(0x112fcd260,&UNK_10dc3ccb8);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar1);
  FUN_103a2adf8();
  func_0x000107c606ec(puVar4,&UNK_1106c05a8,&UNK_1106c05a8,param_3,uVar1,uVar2);
  uStack_41 = 0;
  func_0x000107c60544(param_1,&uStack_41,lVar3);
  if (unaff_x21 == 0) {
    uStack_42 = 1;
    func_0x000107c60544(param_2,&uStack_42,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 103a2adf8; end: 103a2ae37;  */

void FUN_103a2adf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cdb0;
  func_0x000107c61520(&UNK_10dc3cdb0,&UNK_1106c05a8);
  puRam0000000112fcd268 = puVar1;
  return;
}



/* Entry: 103a2ae38; end: 103a2ae5f;  */

void FUN_103a2ae38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_103a2ae78();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 103a2ae60; end: 103a2ae77;  */

void FUN_103a2ae60(void)

{
  undefined8 *unaff_x20;
  
  FUN_103a2acc4(*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 103a2ae78; end: 103a2afd3;  */

/* WARNING: Removing unreachable block (ram,0x000103a2af40) */

undefined1  [16] FUN_103a2ae78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar6 [16];
  undefined1 auStack_70 [14];
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112fcd2c8;
  func_0x0001000285a8(0x112fcd2c8,&UNK_10dc3d000);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_103a2adf8();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1106c05a8,&UNK_1106c05a8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_61 = 0;
    func_0x000107c604fc(&uStack_61,lVar3);
    uStack_62 = 1;
    unaff_d9 = param_1;
    func_0x000107c604fc(&uStack_62,lVar3);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
  }
  else {
    func_0x0001000834e4(param_2);
    param_1 = unaff_d8;
  }
  auVar6._8_8_ = unaff_d9;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 103a2afd4; end: 103a2afd7;  */

void FUN_103a2afd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cd10;
  func_0x000107c61520(&UNK_10dc3cd10,&UNK_1106c05a8);
  puRam0000000112fcd270 = puVar1;
  return;
}



/* Entry: 103a2afd8; end: 103a2b017;  */

void FUN_103a2afd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cd10;
  func_0x000107c61520(&UNK_10dc3cd10,&UNK_1106c05a8);
  puRam0000000112fcd270 = puVar1;
  return;
}


