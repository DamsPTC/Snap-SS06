/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026e3208; end: 1026e3253;  */

void FUN_1026e3208(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb7a50,&UNK_10dacea30);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026e32c0,param_1);
  return;
}



/* Entry: 1026e3254; end: 1026e32bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3254(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026e33f0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb7a58) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1026e32c0; end: 1026e32c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e32c0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026e33f0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7a58) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1026e32c8; end: 1026e3367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e32c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7a58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e3368; end: 1026e33ef; -[_TtC34MapArrivalNotificationsUpsellScope43MapArrivalNotificationsUpsellFactoryService build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1026e33f0; end: 1026e340f;  */

void FUN_1026e33f0(void)

{
  func_0x000107c61168(&PTR_PTR_11285a028);
  return;
}



/* Entry: 1026e3410; end: 1026e346b; -[_TtC34MapArrivalNotificationsUpsellScope43MapArrivalNotificationsUpsellFactoryService init] */

void FUN_1026e3410(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsUpsellScope.MapArrivalNotificationsUpsellFactoryService"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e343c);
  (*pcVar1)();
}



/* Entry: 1026e346c; end: 1026e348b; -[_TtC34MapArrivalNotificationsUpsellScope43MapArrivalNotificationsUpsellFactoryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e346c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb7a58));
  return;
}



/* Entry: 1026e348c; end: 1026e34cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e348c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7a90;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7a90,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1026e34d0; end: 1026e361b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e34d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7a90;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7a90,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026e361c; end: 1026e36d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026e361c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112eb7a90;
  func_0x000107c61614(unaff_x20 + _DAT_112eb7a90,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb7a88) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1026e36d8; end: 1026e3783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026e36d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112eb7a90;
  func_0x000107c61614(unaff_x20 + _DAT_112eb7a90,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb7a88) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  FUN_1026e3784();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = &stack0xffffffffffffffa8;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1026e3784; end: 1026e37a3;  */

void FUN_1026e3784(void)

{
  func_0x000107c61168(&PTR_PTR_11285a0f0);
  return;
}



/* Entry: 1026e37a4; end: 1026e383b; -[_TtC34MapArrivalNotificationsUpsellScope34MapArrivalNotificationsUpsellScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e37a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112eb7a90;
  func_0x000107c61614(param_1 + _DAT_112eb7a90,0);
  *(undefined8 *)(param_1 + _DAT_112eb7a88) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  FUN_1026e3784();
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_58,puVar1);
  return;
}



/* Entry: 1026e383c; end: 1026e3897; -[_TtC34MapArrivalNotificationsUpsellScope34MapArrivalNotificationsUpsellScope init] */

void FUN_1026e383c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapArrivalNotificationsUpsellScope.MapArrivalNotificationsUpsellScope",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e3868);
  (*pcVar1)();
}



/* Entry: 1026e3898; end: 1026e393f; -[_TtC34MapArrivalNotificationsUpsellScope34MapArrivalNotificationsUpsellScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026e3898(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb7a88));
  param_1 = param_1 + _DAT_112eb7a90;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e3940; end: 1026e39ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3940(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026e3adc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb7ac8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1026e39ac; end: 1026e39b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e39ac(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026e3adc();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7ac8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1026e39b4; end: 1026e3a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e39b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7ac8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e3a54; end: 1026e3adb; -[_TtC31MapRequestRealTimeLocationScope40MapRequestRealTimeLocationFactoryService build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1026e3adc; end: 1026e3afb;  */

void FUN_1026e3adc(void)

{
  func_0x000107c61168(&PTR_PTR_11285a1d0);
  return;
}



/* Entry: 1026e3afc; end: 1026e3b57; -[_TtC31MapRequestRealTimeLocationScope40MapRequestRealTimeLocationFactoryService init] */

void FUN_1026e3afc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRequestRealTimeLocationScope.MapRequestRealTimeLocationFactoryService",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e3b28);
  (*pcVar1)();
}



/* Entry: 1026e3b58; end: 1026e3b77; -[_TtC31MapRequestRealTimeLocationScope40MapRequestRealTimeLocationFactoryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb7ac8));
  return;
}



/* Entry: 1026e3b78; end: 1026e3d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1026e3b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112eb7b00;
  func_0x000107c61614(unaff_x20 + _DAT_112eb7b00,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb7af8) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb7b08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar4;
}



/* Entry: 1026e3d30; end: 1026e3dff; -[_TtC31MapRequestRealTimeLocationScope31MapRequestRealTimeLocationScope initWithUiContainer:delegate:friendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3d30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar3 = _DAT_112eb7b00;
  func_0x000107c61614(param_1 + _DAT_112eb7b00,0);
  *(undefined8 *)(param_1 + _DAT_112eb7af8) = param_3;
  func_0x000107c61428(param_1 + lVar3,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar3,param_4);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb7b08);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar4;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_78,puVar2);
  return;
}



/* Entry: 1026e3e00; end: 1026e3e5f; -[_TtC31MapRequestRealTimeLocationScope31MapRequestRealTimeLocationScope init] */

void FUN_1026e3e00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRequestRealTimeLocationScope.MapRequestRealTimeLocationScope",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e3e2c);
  (*pcVar1)();
}



/* Entry: 1026e3e60; end: 1026e3eab; -[_TtC31MapRequestRealTimeLocationScope31MapRequestRealTimeLocationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3e60(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb7af8));
  FUN_1026e3ecc(param_1 + _DAT_112eb7b00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb7b08 + 8))
  ;
  return;
}



/* Entry: 1026e3eac; end: 1026e3ecb;  */

void FUN_1026e3eac(void)

{
  func_0x000107c61168(&PTR_PTR_11285a298);
  return;
}



/* Entry: 1026e3ecc; end: 1026e3eef;  */

undefined8 FUN_1026e3ecc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e3ef0; end: 1026e3f0f; -[MapFocusCardsFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3ef0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb7b38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026e3f10; end: 1026e3f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3f10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e3f5c; end: 1026e3fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3f5c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b38) = param_1;
  func_0x0001026e3f98();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e3fe8; end: 1026e3ff7; -[MapFocusCardsFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e3fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb7b38));
  return;
}



/* Entry: 1026e3ff8; end: 1026e401f; -[_TtC18MapFocusCardsScope24MapFocusCardsFriendsData dataType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026e3ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eb7b68);
}



/* Entry: 1026e4020; end: 1026e405f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026e4020(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb7b80;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7b80,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1026e4804;
  return auVar2;
}



/* Entry: 1026e4060; end: 1026e406b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4060(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7b88;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7b88,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1026e406c; end: 1026e40ab;  */

void FUN_1026e406c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1026e40ac; end: 1026e40b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e40ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7b88;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7b88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1026e40b8; end: 1026e4107;  */

void FUN_1026e40b8(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1026e4108; end: 1026e4147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026e4108(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb7b88;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7b88,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026e4148;
  return auVar2;
}



/* Entry: 1026e4148; end: 1026e414b;  */

void FUN_1026e4148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026e414c; end: 1026e421f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e414c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b68) = 0;
  lVar1 = _DAT_112eb7b80;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b80) = 0;
  lVar2 = _DAT_112eb7b88;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b70) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112eb7b78) = param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_80,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_4;
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e4220; end: 1026e42db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4220(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b68) = 0;
  lVar1 = _DAT_112eb7b80;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b80) = 0;
  lVar2 = _DAT_112eb7b88;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b70) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112eb7b78) = param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_70,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_4;
  FUN_1026e42dc();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e42dc; end: 1026e42fb;  */

void FUN_1026e42dc(void)

{
  func_0x000107c61168(&PTR_PTR_11285a428);
  return;
}



/* Entry: 1026e42fc; end: 1026e4393; -[_TtC18MapFocusCardsScope24MapFocusCardsFriendsData initWithFriendIds:includeClusteredFriends:reactions:reactionImages:] */

void FUN_1026e42fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  if (param_5 != 0) {
    func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  }
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000100de1f70(0);
    func_0x000107c5fc54(param_6,uVar1);
  }
  FUN_1026e4220(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1026e4394; end: 1026e43bf; -[_TtC18MapFocusCardsScope24MapFocusCardsFriendsData init] */

void FUN_1026e4394(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsScope.MapFocusCardsFriendsData",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e43c0);
  (*pcVar1)();
}



/* Entry: 1026e43c0; end: 1026e43cb;  */

void FUN_1026e43c0(void)

{
  FUN_1026e42dc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e43cc; end: 1026e4413; -[_TtC18MapFocusCardsScope24MapFocusCardsFriendsData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026e43e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e43ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e43cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb7b70));
  return;
}



/* Entry: 1026e4414; end: 1026e4423; -[_TtC18MapFocusCardsScope20MapFocusCardsPetData dataType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026e4414(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eb7b90);
}



/* Entry: 1026e4424; end: 1026e447f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4424(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b90) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e4480; end: 1026e449f;  */

void FUN_1026e4480(void)

{
  func_0x000107c61168(&PTR_PTR_11285a538);
  return;
}



/* Entry: 1026e44a0; end: 1026e4507; -[_TtC18MapFocusCardsScope20MapFocusCardsPetData initWithPet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e44a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112eb7b90) = 1;
  *(undefined8 *)(param_1 + _DAT_112eb7b98) = param_3;
  lVar2 = param_1;
  FUN_1026e4480();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1026e4508; end: 1026e464f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b90) = 1;
  uVar1 = 0;
  FUN_1026eb0f4(0);
  func_0x000107c610f8();
  FUN_1026eb114(param_1,param_2,param_3,param_4,uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112eb7b98) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e4650; end: 1026e467b; -[_TtC18MapFocusCardsScope20MapFocusCardsPetData init] */

void FUN_1026e4650(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsScope.MapFocusCardsPetData",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e467c);
  (*pcVar1)();
}



/* Entry: 1026e467c; end: 1026e4687;  */

void FUN_1026e467c(void)

{
  FUN_1026e4480();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e4688; end: 1026e46b7;  */

void FUN_1026e4688(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e46b8; end: 1026e46db; -[_TtC18MapFocusCardsScope20MapFocusCardsPetData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e46b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb7b98));
  return;
}



/* Entry: 1026e46dc; end: 1026e4787;  */

void FUN_1026e46dc(void)

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



/* Entry: 1026e4788; end: 1026e47b3;  */

void FUN_1026e4788(ulong *param_1,ulong *param_2)

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



/* Entry: 1026e47b4; end: 1026e47f3;  */

void FUN_1026e47b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacec40;
  func_0x000107c61520(&UNK_10dacec40,&UNK_11053b7d8);
  puRam0000000112eb7ba0 = puVar1;
  return;
}



/* Entry: 1026e47f4; end: 1026e4807;  */

undefined1  [16] FUN_1026e47f4(void)

{
  return ZEXT816(0x11053b7d8);
}



/* Entry: 1026e4808; end: 1026e484b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4808(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7bf8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7bf8,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1026e484c; end: 1026e4997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e484c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7bf8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7bf8,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026e4998; end: 1026e49db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4998(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7c00;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c00,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1026e49dc; end: 1026e4a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e49dc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7c00;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1026e4a30; end: 1026e4a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026e4a30(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb7c00;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c00,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026e4a70;
  return auVar2;
}



/* Entry: 1026e4a70; end: 1026e4a73;  */

void FUN_1026e4a70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026e4a74; end: 1026e4ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026e4a74(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7c08;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c08,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1026e4ab4; end: 1026e4aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4ab4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7c08;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c08,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1026e4b00; end: 1026e4b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026e4b00(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb7c08;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c08,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026e4fe0;
  return auVar2;
}



/* Entry: 1026e4b8c; end: 1026e4bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4b8c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7c10;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1026e4be0; end: 1026e4c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026e4be0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb7c10;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7c10,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1026e4fe4;
  return auVar2;
}



/* Entry: 1026e4c20; end: 1026e4d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1026e4c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_90;
  func_0x000107c610f8();
  lVar2 = _DAT_112eb7bf8;
  func_0x000107c61614(unaff_x20 + _DAT_112eb7bf8,0);
  lVar3 = _DAT_112eb7c10;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c08) = param_2;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61154(auStack_90,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 1026e4d34; end: 1026e4d83;  */

undefined8
FUN_1026e4d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1026e4eb8();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1026e4d84; end: 1026e4e13; -[_TtC18MapFocusCardsScope18MapFocusCardsScope initWithInitialData:source:sourceSessionId:delegate:] */

undefined8
FUN_1026e4d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar2 = param_3;
  FUN_1026e4eb8(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_6);
  return uVar2;
}



/* Entry: 1026e4e14; end: 1026e4e6f; -[_TtC18MapFocusCardsScope18MapFocusCardsScope init] */

void FUN_1026e4e14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFocusCardsScope.MapFocusCardsScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e4e40);
  (*pcVar1)();
}



/* Entry: 1026e4e70; end: 1026e4eb7; -[_TtC18MapFocusCardsScope18MapFocusCardsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4e70(long param_1)

{
  FUN_1026e4fbc(param_1 + _DAT_112eb7bf8);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb7c00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb7c10));
  return;
}



/* Entry: 1026e4eb8; end: 1026e4f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e4eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112eb7bf8;
  func_0x000107c61614(unaff_x20 + _DAT_112eb7bf8,0);
  lVar3 = _DAT_112eb7c10;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c08) = param_2;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  FUN_1026e4f9c();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffff70,puVar1);
  return;
}



/* Entry: 1026e4f9c; end: 1026e4fbb;  */

void FUN_1026e4f9c(void)

{
  func_0x000107c61168(&PTR_PTR_11285a608);
  return;
}



/* Entry: 1026e4fbc; end: 1026e4fdf;  */

undefined8 FUN_1026e4fbc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e4fe0; end: 1026e4fe7;  */

void FUN_1026e4fe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026e4fe8; end: 1026e50ab;  */

void FUN_1026e4fe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  uVar3 = param_3;
  func_0x000107c44fdc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = param_3;
  param_1[3] = param_2;
  param_1[4] = 0;
  return;
}



/* Entry: 1026e50ac; end: 1026e5107;  */

long FUN_1026e50ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026e5108; end: 1026e51df;  */

undefined8 * FUN_1026e5108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1026e51e0; end: 1026e5233;  */

undefined8 * FUN_1026e51e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c61170(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 1026e5234; end: 1026e52e7;  */

int FUN_1026e5234(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026e52e8; end: 1026e5393;  */

void FUN_1026e52e8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026e5394; end: 1026e5397;  */

void FUN_1026e5394(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacee10;
  func_0x000107c61520(&UNK_10dacee10,&UNK_11053b9e0);
  puRam0000000112eb7c40 = puVar1;
  return;
}



/* Entry: 1026e5398; end: 1026e53d7;  */

void FUN_1026e5398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb7c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacee10;
  func_0x000107c61520(&UNK_10dacee10,&UNK_11053b9e0);
  puRam0000000112eb7c40 = puVar1;
  return;
}



/* Entry: 1026e53d8; end: 1026e553b;  */

int FUN_1026e53d8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1026e5454;
        goto LAB_1026e5438;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1026e5438:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1026e5454:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1026e553c; end: 1026e5597;  */

/* WARNING: Possible PIC construction at 0x0001026e5550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e5554) */

void FUN_1026e553c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1026e5598; end: 1026e55f3;  */

undefined8 * FUN_1026e5598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026e55f4; end: 1026e562f;  */

undefined8 * FUN_1026e55f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026e5630; end: 1026e56cb;  */

int FUN_1026e5630(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026e56cc; end: 1026e59ff;  */

long FUN_1026e56cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026e5a00; end: 1026e5a1f; -[_TtC22MapDestinationServices22MapDestinationServices destinationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5a00(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb7c48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026e5a20; end: 1026e5ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5a20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7c48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e5ab8; end: 1026e5aeb;  */

void FUN_1026e5ab8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e5aec; end: 1026e5afb; -[_TtC22MapDestinationServices22MapDestinationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e5aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb7c48));
  return;
}



/* Entry: 1026e5afc; end: 1026e5b1b;  */

void FUN_1026e5afc(void)

{
  func_0x000107c61168(&PTR_PTR_11285a740);
  return;
}


