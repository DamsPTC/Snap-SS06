/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10269ddf4; end: 10269df1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269ddf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb42c8 + 8);
  FUN_1026e3eac(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x0001026e3c54();
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar4 = _DAT_112eb42e0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb42e0);
  *(undefined **)(unaff_x20 + _DAT_112eb42e0) = puStack_50;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10269df1c; end: 10269df7b; -[_TtC23MapRouterImplementation28RequestLocationModalWorkflow init] */

void FUN_10269df1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.RequestLocationModalWorkflow",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269df48);
  (*pcVar1)();
}



/* Entry: 10269df7c; end: 10269dfeb; -[_TtC23MapRouterImplementation28RequestLocationModalWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269df7c(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb42c0),
                      ((undefined8 *)(param_1 + _DAT_112eb42c0))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb42c8 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb42d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb42d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb42e0));
  return;
}



/* Entry: 10269dfec; end: 10269e00b;  */

void FUN_10269dfec(void)

{
  func_0x000107c61168(&PTR_PTR_112857e70);
  return;
}



/* Entry: 10269e00c; end: 10269e00f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e00c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb42c8 + 8);
  FUN_1026e3eac(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x0001026e3c54();
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar4 = _DAT_112eb42e0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb42e0);
  *(undefined **)(unaff_x20 + _DAT_112eb42e0) = puStack_50;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10269e010; end: 10269e067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269e010(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb42c0);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269e068; end: 10269e0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e068(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb42c0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269e0c4; end: 10269e103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269e0c4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb42c0;
  func_0x000107c61428(unaff_x20 + _DAT_112eb42c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269e104;
  return auVar2;
}



/* Entry: 10269e104; end: 10269e107;  */

void FUN_10269e104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269e108; end: 10269e1a7; -[_TtC23MapRouterImplementation28RequestLocationModalWorkflow requestRealTimeLocationScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e108(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb42e0);
  *(undefined8 *)(param_1 + _DAT_112eb42e0) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb42c0);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar3,uVar2);
  }
  return;
}



/* Entry: 10269e1a8; end: 10269e307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e1a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112eb4318))[1];
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112eb4318);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  func_0x00010034a38c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000103a28f00(puVar1,unaff_x20,0,lVar4,0);
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar4 = _DAT_112eb4330;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb4330);
  *(undefined **)(unaff_x20 + _DAT_112eb4330) = puStack_50;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10269e308; end: 10269e367; -[_TtC23MapRouterImplementation26ShareLocationModalWorkflow init] */

void FUN_10269e308(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.ShareLocationModalWorkflow",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269e334);
  (*pcVar1)();
}



/* Entry: 10269e368; end: 10269e3d7; -[_TtC23MapRouterImplementation26ShareLocationModalWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e368(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb4310),
                      ((undefined8 *)(param_1 + _DAT_112eb4310))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb4318 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4320));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4328));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4330));
  return;
}



/* Entry: 10269e3d8; end: 10269e3f7;  */

void FUN_10269e3d8(void)

{
  func_0x000107c61168(&PTR_PTR_112857f50);
  return;
}



/* Entry: 10269e3f8; end: 10269e3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e3f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112eb4318))[1];
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112eb4318);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  func_0x00010034a38c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000103a28f00(puVar1,unaff_x20,0,lVar4,0);
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar4 = _DAT_112eb4330;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb4330);
  *(undefined **)(unaff_x20 + _DAT_112eb4330) = puStack_50;
  func_0x000107c615e8(uVar3);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10269e3fc; end: 10269e453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269e3fc(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4310);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269e454; end: 10269e4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e454(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4310);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269e4b0; end: 10269e4ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269e4b0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4310;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4310,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269e4f0;
  return auVar2;
}



/* Entry: 10269e4f0; end: 10269e4f3;  */

void FUN_10269e4f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269e4f4; end: 10269e593; -[_TtC23MapRouterImplementation26ShareLocationModalWorkflow shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e4f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb4330);
  *(undefined8 *)(param_1 + _DAT_112eb4330) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb4310);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar3,uVar2);
  }
  return;
}



/* Entry: 10269e594; end: 10269e79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e594(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_70 [2];
  long alStack_60 [2];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112eb4370);
  lVar3 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eb4368);
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(&stack0xffffffffffffffb0 + lVar1,1,1,lVar3);
  uVar4 = 0;
  func_0x0001043b1a4c(0);
  func_0x000107c610f8();
  *(undefined4 *)((long)alStack_60 + lVar1) = 0;
  *(undefined8 *)((long)auStack_70 + lVar1) = 0;
  *(undefined8 *)((long)auStack_70 + lVar1 + 8) = 0xf000000000000000;
  func_0x0001043b1198(uVar4,uVar7,0,0xe000000000000000,0,0xe000000000000000,
                      &stack0xffffffffffffffb0 + lVar1,0,0xf000000000000000);
  func_0x0001043ade18(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar7);
  uVar4 = 0;
  func_0x0001043ad274(0,uVar7,0);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eb4378);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  *(long *)((long)alStack_60 + lVar1) = unaff_x20;
  func_0x000107c3ed6c(uVar8);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c42c1c(lVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 10269e7a0; end: 10269e7ff; -[_TtC23MapRouterImplementation23SoundTopicModalWorkflow init] */

void FUN_10269e7a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.SoundTopicModalWorkflow",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269e7cc);
  (*pcVar1)();
}



/* Entry: 10269e800; end: 10269e85b; -[_TtC23MapRouterImplementation23SoundTopicModalWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010269e830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269e834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e800(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb4360),
                      ((undefined8 *)(param_1 + _DAT_112eb4360))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb4370));
  return;
}



/* Entry: 10269e85c; end: 10269e87b;  */

void FUN_10269e85c(void)

{
  func_0x000107c61168(&PTR_PTR_112858030);
  return;
}



/* Entry: 10269e87c; end: 10269e87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e87c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_70 [2];
  long alStack_60 [2];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112eb4370);
  lVar3 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eb4368);
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(&stack0xffffffffffffffb0 + lVar1,1,1,lVar3);
  uVar4 = 0;
  func_0x0001043b1a4c(0);
  func_0x000107c610f8();
  *(undefined4 *)((long)alStack_60 + lVar1) = 0;
  *(undefined8 *)((long)auStack_70 + lVar1) = 0;
  *(undefined8 *)((long)auStack_70 + lVar1 + 8) = 0xf000000000000000;
  func_0x0001043b1198(uVar4,uVar7,0,0xe000000000000000,0,0xe000000000000000,
                      &stack0xffffffffffffffb0 + lVar1,0,0xf000000000000000);
  func_0x0001043ade18(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar7);
  uVar4 = 0;
  func_0x0001043ad274(0,uVar7,0);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eb4378);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  *(long *)((long)alStack_60 + lVar1) = unaff_x20;
  func_0x000107c3ed6c(uVar8);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c42c1c(lVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 10269e880; end: 10269e8d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269e880(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4360);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269e8d8; end: 10269e933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269e8d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4360);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269e934; end: 10269e973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269e934(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4360;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4360,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269e974;
  return auVar2;
}



/* Entry: 10269e974; end: 10269e977;  */

void FUN_10269e974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269e978; end: 10269ea67; -[_TtC23MapRouterImplementation23SoundTopicModalWorkflow didCompleteTopicViewerMusicScope:] */

/* WARNING: Possible PIC construction at 0x00010269e9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269e9b0) */

void FUN_10269e978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010269e9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10269ea68; end: 10269eb43;  */

void FUN_10269ea68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4c330(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  plVar3 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(uVar2);
  puVar4 = &UNK_110534e80;
  func_0x000107c613fc(&UNK_110534e80,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar2 = 0x10269f31c;
  puVar5 = puVar4;
  (**(code **)(*plVar3 + 0x60))();
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined **)(unaff_x20 + 0x48) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10269eb44; end: 10269ebdf;  */

void FUN_10269eb44(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c6157c();
    uVar1 = 0x72;
    func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca530,param_2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61578(param_2,2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10269ebe0; end: 10269ec43;  */

void FUN_10269ebe0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10269ec44;
  plVar2[0xf] = param_2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x10] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x11] = lVar3;
  plVar2[0x12] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269ed44,lVar3,lVar4);
  return;
}



/* Entry: 10269ec44; end: 10269eca7;  */

void FUN_10269ec44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269eca8,uVar2,uVar1);
  return;
}



/* Entry: 10269eca8; end: 10269ecd7;  */

void FUN_10269eca8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010269ecd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10269ecd8; end: 10269ed43;  */

void FUN_10269ecd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269ed44,uVar1,uVar2);
  return;
}



/* Entry: 10269ed44; end: 10269eedb;  */

void FUN_10269ed44(void)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x78) + 0x20);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  lVar7 = *(long *)(lVar4 + 0x10);
  *(long *)(unaff_x22 + 0xa0) = lVar7;
  if (lVar7 != 0) {
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x30);
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar6 = 0;
      do {
        FUN_10269f3b4(lVar4 + uVar6 * 0x28 + 0x20,unaff_x22 + 0x10);
        FUN_10269f3f8(unaff_x22 + 0x10,unaff_x22 + 0x38);
        uVar6 = *(ulong *)(unaff_x22 + 0x50);
        lVar4 = *(long *)(unaff_x22 + 0x58);
        func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
        (**(code **)(lVar4 + 0x10))(uVar6,lVar4);
        if ((uVar6 & 1) != 0) {
          uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
          lVar4 = *(long *)(unaff_x22 + 0x58);
          func_0x0001000a8868(unaff_x22 + 0x38,uVar8);
          piVar5 = *(int **)(lVar4 + 0x18);
          iVar1 = *piVar5;
          plVar3 = (long *)(ulong)(uint)piVar5[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0xb8) = plVar3;
          *plVar3 = unaff_x22;
          plVar3[1] = (long)FUN_10269eedc;
                    /* WARNING: Could not recover jumptable at 0x00010269eed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xa8),uVar8,lVar4);
          return;
        }
        lVar4 = *(long *)(unaff_x22 + 0xb0);
        lVar7 = *(long *)(unaff_x22 + 0xa0);
        func_0x0001000834e4(unaff_x22 + 0x38);
        if (lVar4 + 1 == lVar7) goto LAB_10269ee10;
        uVar6 = *(long *)(unaff_x22 + 0xb0) + 1;
        *(ulong *)(unaff_x22 + 0xb0) = uVar6;
        lVar4 = *(long *)(unaff_x22 + 0x98);
      } while (uVar6 < *(ulong *)(lVar4 + 0x10));
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10269ee10);
    (*pcVar2)();
  }
LAB_10269ee10:
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  lVar4 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x60,0,0);
  pcVar2 = *(code **)(lVar4 + 0x10);
  if (pcVar2 != (code *)0x0) {
    uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x18);
    func_0x000107c6157c(uVar8);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010269ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10269eedc; end: 10269ef27;  */

void FUN_10269eedc(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xc0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10269ef28,*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90));
  return;
}



/* Entry: 10269ef28; end: 10269f1db;  */

void FUN_10269ef28(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xc0) & 1) == 0) {
    while (lVar11 = *(long *)(unaff_x22 + 0xb0), lVar10 = *(long *)(unaff_x22 + 0xa0),
          func_0x0001000834e4(unaff_x22 + 0x38), lVar11 + 1 != lVar10) {
      uVar5 = *(long *)(unaff_x22 + 0xb0) + 1;
      *(ulong *)(unaff_x22 + 0xb0) = uVar5;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x98) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10269f1dc);
        (*pcVar9)();
      }
      FUN_10269f3b4(*(long *)(unaff_x22 + 0x98) + uVar5 * 0x28 + 0x20,unaff_x22 + 0x10);
      FUN_10269f3f8(unaff_x22 + 0x10,unaff_x22 + 0x38);
      uVar5 = *(ulong *)(unaff_x22 + 0x50);
      lVar11 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar5);
      (**(code **)(lVar11 + 0x10))(uVar5,lVar11);
      if ((uVar5 & 1) != 0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
        lVar11 = *(long *)(unaff_x22 + 0x58);
        func_0x0001000a8868(unaff_x22 + 0x38,uVar4);
        piVar7 = *(int **)(lVar11 + 0x18);
        iVar2 = *piVar7;
        plVar6 = (long *)(ulong)(uint)piVar7[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xb8) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_10269eedc;
                    /* WARNING: Could not recover jumptable at 0x00010269f0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar7))(*(undefined8 *)(unaff_x22 + 0xa8),uVar4,lVar11);
        return;
      }
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    uVar5 = *(ulong *)(unaff_x22 + 0x50);
    lVar11 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar5);
    (**(code **)(lVar11 + 8))(uVar5,lVar11);
    uVar3 = uVar5;
    func_0x0001026a1094();
    uVar1 = (uint)uVar5 & 0xff;
    if (uVar1 == 1 || (uVar5 & 0xff) == 0) {
      if ((uVar5 & 0xff) == 0) {
        uVar8 = 0x800000010f0b5a40;
        uVar4 = 0xd000000000000015;
      }
      else {
        uVar8 = 0xee00636973756d5f;
        uVar4 = 0x6c616e7265747865;
      }
    }
    else if (uVar1 == 2) {
      uVar8 = 0x800000010f0b5a20;
      uVar4 = 0xd000000000000014;
    }
    else if (uVar1 == 3) {
      uVar8 = 0x800000010f0b5a00;
      uVar4 = 0xd000000000000011;
    }
    else {
      uVar4 = 0xd000000000000010;
      uVar8 = 0x800000010f0b59e0;
    }
    func_0x000107c5fadc(uVar4,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000105edc0c0(uVar3,uVar4,1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x0001000834e4(unaff_x22 + 0x38);
  }
  lVar11 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x60,0,0);
  pcVar9 = *(code **)(lVar11 + 0x10);
  if (pcVar9 != (code *)0x0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x18);
    func_0x000107c6157c(uVar4);
    (*pcVar9)();
    func_0x00010058d43c(pcVar9,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010269f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10269f1dc; end: 10269f247;  */

void FUN_10269f1dc(void)

{
  long unaff_x20;
  
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10269f248; end: 10269f24b;  */

void FUN_10269f248(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4c330(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  plVar3 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(uVar2);
  puVar4 = &UNK_110534e80;
  func_0x000107c613fc(&UNK_110534e80,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar2 = 0x10269f31c;
  puVar5 = puVar4;
  (**(code **)(*plVar3 + 0x60))();
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined **)(unaff_x20 + 0x48) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10269f24c; end: 10269f297;  */

undefined1  [16] FUN_10269f24c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000100b64c10(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10269f298; end: 10269f2e7;  */

void FUN_10269f298(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010058d43c(uVar1,uVar2);
  return;
}



/* Entry: 10269f2e8; end: 10269f317;  */

undefined1  [16] FUN_10269f2e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_10269f318;
  return auVar1;
}



/* Entry: 10269f318; end: 10269f323;  */

void FUN_10269f318(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269f324; end: 10269f377;  */

void FUN_10269f324(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10269f378;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar4[2] = lVar1;
  func_0x000107c5fce8();
  plVar4[3] = lVar1;
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  plVar4[4] = (long)plVar2;
  *plVar2 = (long)plVar4;
  plVar2[1] = (long)FUN_10269ec44;
  plVar2[0xf] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x10] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x11] = lVar3;
  plVar2[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269ed44,lVar3,lVar1);
  return;
}



/* Entry: 10269f378; end: 10269f3b3;  */

void FUN_10269f378(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010269f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10269f3b4; end: 10269f3f7;  */

long FUN_10269f3b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10269f3f8; end: 10269f40f;  */

undefined8 * FUN_10269f3f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10269f410; end: 10269f6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269f410(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112eb44c0);
  lVar3 = lVar10;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar10);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112eb4480);
  uVar5 = ((ulong *)(unaff_x20 + _DAT_112eb4480))[1];
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112eb4490);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar11);
  FUN_1026a0dac(uVar4,uVar5,uVar11);
  func_0x00010442bbd4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x00010442ba58();
  uVar6 = uVar5;
  FUN_10269f6fc();
  if (uVar6 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar8 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c6142c();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4478);
    func_0x000107c61428(puVar1,auStack_78,0,0);
    pcVar9 = (code *)*puVar1;
    if (pcVar9 != (code *)0x0) {
      uVar11 = puVar1[1];
      func_0x000107c6157c(uVar11);
      (*pcVar9)();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x00010058d43c(pcVar9,uVar11);
      return;
    }
    func_0x000107c61170(uVar5);
  }
  else {
    func_0x000107c5eea0(auStack_80 + lVar2);
    func_0x00010442e758(0);
    func_0x000107c610f8();
    uVar7 = 2;
    func_0x00010442e1f8(2,0x22,4,0xffffffffffffffff,0,0x15,auStack_80 + lVar2,0);
    func_0x000104432eb0(0);
    func_0x000107c610f8();
    *(undefined4 *)((long)&uStack_90 + lVar2 + 4) = 0;
    *(undefined1 *)((long)&uStack_90 + lVar2) = 0;
    uVar11 = 0;
    func_0x000104432720(0,0,0,1,0,0,1,0,0);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112eb44c8);
    uVar8 = uVar7;
    func_0x000107c61174(uVar7);
    *(undefined8 *)((long)&uStack_90 + lVar2) = 0;
    func_0x00010442cd28(uVar7,uVar12,0,uVar5,uVar11);
    func_0x000107c61170(uVar8);
    func_0x000107c6142c(uVar6);
    func_0x000107c42c1c(lVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar11);
    uVar4 = uVar7;
  }
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10269f6fc; end: 10269f9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10269f6fc(double param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb4498);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    func_0x000107c5ee58();
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10269f998);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10269f99c);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10269f9a0);
      (*pcVar2)();
    }
    lVar10 = *(long *)(unaff_x20 + _DAT_112eb4488);
    lVar4 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar4;
      func_0x000107c52060();
      func_0x000107c615e8(lVar4);
      if (lVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10269f7cc);
        (*pcVar2)();
      }
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar10;
      func_0x000107c4c45c();
      func_0x000107c615e8(lVar10);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 1;
    uStack_80 = 0;
    uStack_78 = 1;
    uStack_70 = 0;
    uStack_68 = 1;
    uStack_60 = 0;
    uStack_58 = 0;
    lVar10 = lVar3;
    lStack_a8 = lVar9;
    lStack_a0 = lVar4;
    func_0x000103964638(*(undefined8 *)(unaff_x20 + _DAT_112eb44a8),lVar3,0x15,7,0,
                        0xffffffffffffffff,(long)param_1,1,&lStack_a8);
    func_0x00010269ff10(&lStack_a8);
    FUN_10249f3c8(lVar10);
    lVar4 = *(long *)(unaff_x20 + _DAT_112eb44a0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar3);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      lVar10 = lVar4;
      func_0x000107c40bac();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar6);
      func_0x000107c615f0(lVar10);
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        func_0x0001024a29a8(0,puVar5 + 1,1,puVar7);
      }
      uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar8 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x0001024a29a8(puVar7,uVar1 + 1,1,puVar6);
        uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
      *(long *)(uVar8 + uVar1 * 8 + 0x20) = lVar10;
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar3);
    }
  }
  return puVar7;
}



/* Entry: 10269f9d8; end: 10269fa43;  */

void FUN_10269f9d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269fa44,uVar1,uVar2);
  return;
}



/* Entry: 10269fa44; end: 10269fb8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269fa44(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar2 = -0x2fffffffffffffdb;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0150d0);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = lVar2;
  func_0x000107c312f4(lVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  if (lVar4 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x28);
    puVar5 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c409d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c5c2e0(uVar3);
    func_0x000107c615e8(uVar3);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4478);
    func_0x000107c61428(puVar1,unaff_x22 + 0x10,0,0);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 == (code *)0x0) {
      func_0x000107c61170(puVar5);
    }
    else {
      uVar3 = puVar1[1];
      func_0x000107c6157c(uVar3);
      (*pcVar6)();
      func_0x000107c61170(puVar5);
      func_0x00010058d43c(pcVar6,uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010269fb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10269fb8c);
  (*pcVar6)();
}



/* Entry: 10269fb8c; end: 10269fbeb; -[_TtC23MapRouterImplementation18StoryModalWorkflow init] */

void FUN_10269fb8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.StoryModalWorkflow",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269fbb8);
  (*pcVar1)();
}



/* Entry: 10269fbec; end: 10269fcbb; -[_TtC23MapRouterImplementation18StoryModalWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010269fc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269fc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269fc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269fc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269fc74) */
/* WARNING: Removing unreachable block (ram,0x00010269fc54) */
/* WARNING: Removing unreachable block (ram,0x00010269fc34) */
/* WARNING: Removing unreachable block (ram,0x00010269fc94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269fbec(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb4478),
                      ((undefined8 *)(param_1 + _DAT_112eb4478))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb4480 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb4488));
  return;
}



/* Entry: 10269fcbc; end: 10269fcdb;  */

void FUN_10269fcbc(void)

{
  func_0x000107c61168(&PTR_PTR_112858110);
  return;
}



/* Entry: 10269fcdc; end: 10269fcdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269fcdc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112eb44c0);
  lVar3 = lVar10;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar10);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112eb4480);
  uVar5 = ((ulong *)(unaff_x20 + _DAT_112eb4480))[1];
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112eb4490);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar11);
  FUN_1026a0dac(uVar4,uVar5,uVar11);
  func_0x00010442bbd4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x00010442ba58();
  uVar6 = uVar5;
  FUN_10269f6fc();
  if (uVar6 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar8 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c6142c();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4478);
    func_0x000107c61428(puVar1,auStack_78,0,0);
    pcVar9 = (code *)*puVar1;
    if (pcVar9 != (code *)0x0) {
      uVar11 = puVar1[1];
      func_0x000107c6157c(uVar11);
      (*pcVar9)();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x00010058d43c(pcVar9,uVar11);
      return;
    }
    func_0x000107c61170(uVar5);
  }
  else {
    func_0x000107c5eea0(auStack_80 + lVar2);
    func_0x00010442e758(0);
    func_0x000107c610f8();
    uVar7 = 2;
    func_0x00010442e1f8(2,0x22,4,0xffffffffffffffff,0,0x15,auStack_80 + lVar2,0);
    func_0x000104432eb0(0);
    func_0x000107c610f8();
    *(undefined4 *)((long)&uStack_90 + lVar2 + 4) = 0;
    *(undefined1 *)((long)&uStack_90 + lVar2) = 0;
    uVar11 = 0;
    func_0x000104432720(0,0,0,1,0,0,1,0,0);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112eb44c8);
    uVar8 = uVar7;
    func_0x000107c61174(uVar7);
    *(undefined8 *)((long)&uStack_90 + lVar2) = 0;
    func_0x00010442cd28(uVar7,uVar12,0,uVar5,uVar11);
    func_0x000107c61170(uVar8);
    func_0x000107c6142c(uVar6);
    func_0x000107c42c1c(lVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar11);
    uVar4 = uVar7;
  }
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10269fce0; end: 10269fd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269fce0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4478);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269fd38; end: 10269fd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269fd38(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4478);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269fd94; end: 10269fdd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269fd94(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4478;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4478,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269fdd4;
  return auVar2;
}



/* Entry: 10269fdd4; end: 10269fdd7;  */

void FUN_10269fdd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269fdd8; end: 10269fddb; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_10269fdd8(void)

{
  return;
}



/* Entry: 10269fddc; end: 10269fddf; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_10269fddc(void)

{
  return;
}



/* Entry: 10269fde0; end: 10269fde3; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_10269fde0(void)

{
  return;
}



/* Entry: 10269fde4; end: 10269fde7; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterDidCancelDismissing:] */

void FUN_10269fde4(void)

{
  return;
}



/* Entry: 10269fde8; end: 10269fdeb; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_10269fde8(void)

{
  return;
}



/* Entry: 10269fdec; end: 10269fdf7; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterDidFailToPresent:] */

void FUN_10269fdec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10269ff44();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10269fdf8; end: 10269fdfb; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterDidFinishDismissing:] */

void FUN_10269fdf8(void)

{
  return;
}



/* Entry: 10269fdfc; end: 10269fe07; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenterDidTearDown:] */

void FUN_10269fdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x1026a0034)();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10269fe08; end: 10269fe57;  */

void FUN_10269fe08(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10269fe58; end: 10269fe9f; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_10269fe58(void)

{
  undefined8 in_x3;
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(in_x3);
  func_0x000107c60234(auStack_40,in_x3);
  func_0x000107c615e8(in_x3);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 10269fea0; end: 10269ff43; -[_TtC23MapRouterImplementation18StoryModalWorkflow operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_10269fea0(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(in_x3);
  func_0x000107c615f0(in_x4);
  func_0x000107c60234(auStack_40,in_x3);
  func_0x000107c615e8(in_x3);
  func_0x000107c60234(auStack_60,in_x4);
  func_0x000107c615e8(in_x4);
  func_0x000100183ab8(auStack_60);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 10269ff44; end: 1026a00d7;  */

/* WARNING: Possible PIC construction at 0x0001026a0018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a001c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269ff44(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb44c0);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = &UNK_110534ed8;
  func_0x000107c613fc(&UNK_110534ed8,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &UNK_110534f00;
  func_0x000107c613fc(&UNK_110534f00,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10daca570;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174();
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca578,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1026a00d8; end: 1026a015f;  */

void FUN_1026a00d8(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1026a0124;
  plVar2[5] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[6] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269fa44,lVar1,lVar3);
  return;
}



/* Entry: 1026a0160; end: 1026a01cf;  */

void FUN_1026a0160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026a01d0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026a01d0; end: 1026a01d3;  */

void FUN_1026a01d0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026a015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026a01d4; end: 1026a02fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a01d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4500);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eb4500))[1];
  func_0x000100343df4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x0001038bb3a4(puVar2,uVar4,uVar1);
  puStack_50 = puVar3;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar5 = _DAT_112eb4520;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4520);
  *(undefined **)(unaff_x20 + _DAT_112eb4520) = puStack_50;
  func_0x000107c615e8(uVar4);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    func_0x000107c615f0(lVar5);
    func_0x000107c3e85c();
    func_0x000107c615e8(lVar5);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1026a02fc; end: 1026a035b; -[_TtC23MapRouterImplementation29WidgetOnboardingModalWorkflow init] */

void FUN_1026a02fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.WidgetOnboardingModalWorkflow",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a0328);
  (*pcVar1)();
}



/* Entry: 1026a035c; end: 1026a03db; -[_TtC23MapRouterImplementation29WidgetOnboardingModalWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a035c(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb44f8),
                      ((undefined8 *)(param_1 + _DAT_112eb44f8))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb4500 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4508));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4510));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4518));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4520));
  return;
}



/* Entry: 1026a03dc; end: 1026a03fb;  */

void FUN_1026a03dc(void)

{
  func_0x000107c61168(&PTR_PTR_112858220);
  return;
}



/* Entry: 1026a03fc; end: 1026a03ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a03fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4500);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eb4500))[1];
  func_0x000100343df4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x0001038bb3a4(puVar2,uVar4,uVar1);
  puStack_50 = puVar3;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar5 = _DAT_112eb4520;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4520);
  *(undefined **)(unaff_x20 + _DAT_112eb4520) = puStack_50;
  func_0x000107c615e8(uVar4);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    func_0x000107c615f0(lVar5);
    func_0x000107c3e85c();
    func_0x000107c615e8(lVar5);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1026a0400; end: 1026a0457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a0400(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb44f8);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026a0458; end: 1026a04b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a0458(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb44f8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 1026a04b4; end: 1026a04f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a04b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb44f8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb44f8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a04f4;
  return auVar2;
}



/* Entry: 1026a04f4; end: 1026a04f7;  */

void FUN_1026a04f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a04f8; end: 1026a05a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a04f8(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112eb4510);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c55044();
      func_0x000107c615e8(lVar2);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb4520);
  *(undefined8 *)(unaff_x20 + _DAT_112eb4520) = 0;
  func_0x000107c615e8(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb44f8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar3);
  }
  return;
}



/* Entry: 1026a05a4; end: 1026a06b7; -[_TtC23MapRouterImplementation29WidgetOnboardingModalWorkflow mapWidgetOnboardingDidDismissWith:] */

void FUN_1026a05a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1026a04f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026a06b8; end: 1026a0723;  */

void FUN_1026a06b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a0724,uVar1,uVar2);
  return;
}



/* Entry: 1026a0724; end: 1026a090b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a0724(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x90,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xd0) = lVar4;
  if (lVar4 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  else {
    lVar2 = *(long *)(lVar4 + _DAT_112eb4558);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xd8) = lVar2;
    if (lVar2 != 0) {
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      lVar1 = _DAT_112eb4550;
      *(long *)(unaff_x22 + 0xe0) = _DAT_112eb4550;
      uVar5 = ((undefined8 *)(lVar4 + lVar1))[1];
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar4 + lVar1);
      *(undefined8 *)(lVar3 + 0x28) = uVar5;
      func_0x000107c61434();
      lVar4 = lVar3;
      func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
      *(long *)(unaff_x22 + 0xe8) = lVar4;
      func_0x000107c61574(lVar3);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1026a090c;
      lVar4 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar4,0);
      uVar5 = 0x112eb45a0;
      func_0x0001000285a8(0x112eb45a0,&UNK_10daca5e8);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_1026a0b54;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110534f78;
      *(long *)(unaff_x22 + 0x70) = lVar4;
      func_0x000107c5c070(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
    lVar4 = *(long *)(unaff_x22 + 0xd0);
    *(undefined8 *)(lVar4 + _DAT_112eb4568) = 3;
    lVar4 = lVar4 + _DAT_112eb4570;
    func_0x000107c61618();
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    if (lVar4 == 0) {
      func_0x000107c61170(uVar5);
    }
    else {
      func_0x000107c4b7dc();
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001026a0908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026a090c; end: 1026a0947;  */

void FUN_1026a090c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1026a0948,*(undefined8 *)(*unaff_x22 + 0xc0),*(undefined8 *)(*unaff_x22 + 200));
  return;
}



/* Entry: 1026a0948; end: 1026a0b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a0948(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  lVar6 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar5);
  if (lVar6 == 0) {
LAB_1026a0a18:
    lVar6 = *(long *)(unaff_x22 + 0xd0);
    *(undefined8 *)(lVar6 + _DAT_112eb4568) = 3;
    lVar6 = lVar6 + _DAT_112eb4570;
    func_0x000107c61618();
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    if (lVar6 == 0) {
LAB_1026a0b30:
      func_0x000107c61170(uVar5);
      goto LAB_1026a0b38;
    }
    func_0x000107c4b7dc();
    func_0x000107c61170(uVar5);
  }
  else {
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_1026a0a10:
      func_0x000107c6142c(lVar6);
      goto LAB_1026a0a18;
    }
    plVar1 = (long *)(*(long *)(unaff_x22 + 0xd0) + *(long *)(unaff_x22 + 0xe0));
    lVar2 = *plVar1;
    uVar4 = plVar1[1];
    func_0x000107c61434(lVar6);
    func_0x000100029284();
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar6);
      goto LAB_1026a0a10;
    }
    lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
    func_0x000107c61174();
    uVar5 = 2;
    func_0x000107c61430(lVar6,2);
    lVar6 = lVar2;
    func_0x000107c5bfec();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar7 = 0;
      uVar5 = 0;
    }
    else {
      lVar7 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    lVar6 = lVar2;
    func_0x000107c5d0f0();
    if (lVar6 - 1U < 6) {
      uVar8 = *(undefined8 *)(&UNK_10daca5f0 + (lVar6 - 1U) * 8);
    }
    else {
      uVar8 = 0;
    }
    lVar6 = *(long *)(unaff_x22 + 0xd0);
    uVar3 = 0;
    func_0x0001044aafa0(0);
    func_0x000107c610f8();
    func_0x0001044aaa78(lVar7,uVar5,uVar8,0,1,uVar3);
    uVar5 = *(undefined8 *)(lVar6 + _DAT_112eb4560);
    *(long *)(lVar6 + _DAT_112eb4560) = lVar7;
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar6 + _DAT_112eb4568) = 2;
    lVar6 = lVar6 + _DAT_112eb4570;
    func_0x000107c61618();
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    if (lVar6 == 0) {
      func_0x000107c61170(lVar2);
      goto LAB_1026a0b30;
    }
    func_0x000107c4b7dc();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c615e8(lVar6);
LAB_1026a0b38:
                    /* WARNING: Could not recover jumptable at 0x0001026a0b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026a0b54; end: 1026a0bb7;  */

void FUN_1026a0b54(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  lVar2 = 0;
  if (param_2 != 0) {
    FUN_1026a0f30();
    func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,lVar2,PTR___sSSSHsWP_11034da90);
    lVar2 = param_2;
  }
  **(long **)(*(long *)(lVar3 + 0x40) + 0x28) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1026a0bb8; end: 1026a0bdf; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher fetchPlaylist] */

void FUN_1026a0bb8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001026a05d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026a0be0; end: 1026a0bef; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher loadingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026a0be0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eb4568);
}



/* Entry: 1026a0bf0; end: 1026a0c83; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher resolvedDataModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a0bf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112eb4560);
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar1 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar2 = 0;
    func_0x0001044aafa0();
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    *(long *)(lVar1 + 0x20) = lVar4;
    func_0x000107c61174(lVar4);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1026a0c84; end: 1026a0c93; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher firstDisplayGroupDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a0c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb4560));
  return;
}



/* Entry: 1026a0c94; end: 1026a0c9b; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher currentLoadingProperties] */

void FUN_1026a0c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1026a0c9c; end: 1026a0caf; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a0c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112eb4570,param_3);
  return;
}



/* Entry: 1026a0cb0; end: 1026a0ccf; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a0cb0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112eb4570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026a0cd0; end: 1026a0d2f; -[_TtC23MapRouterImplementation26FriendStoryPlaylistFetcher init] */

void FUN_1026a0cd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.FriendStoryPlaylistFetcher",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a0cfc);
  (*pcVar1)();
}


