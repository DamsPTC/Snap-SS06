/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10269b38c; end: 10269b523;  */

void FUN_10269b38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x0001000295c4(0);
  (**(code **)(lVar6 + 0x68))
            (lVar5,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar2 = lVar5;
  func_0x000107c5fff0(lVar5);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  puVar3 = &UNK_110534af8;
  func_0x000107c613fc(&UNK_110534af8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_70 = FUN_10269b840;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10134a1dc;
  puStack_78 = &UNK_110534b10;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_68);
  func_0x000107c42ff4(param_2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10269b524; end: 10269b583; -[_TtC23MapRouterImplementation30FootstepsActivityModalWorkflow init] */

void FUN_10269b524(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.FootstepsActivityModalWorkflow",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269b550);
  (*pcVar1)();
}



/* Entry: 10269b584; end: 10269b653; -[_TtC23MapRouterImplementation30FootstepsActivityModalWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010269b5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269b608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269b628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269b60c) */
/* WARNING: Removing unreachable block (ram,0x00010269b5ec) */
/* WARNING: Removing unreachable block (ram,0x00010269b62c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269b584(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb3fd0),
                      ((undefined8 *)(param_1 + _DAT_112eb3fd0))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb3fd8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb3fe0 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb3fe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb3ff0));
  return;
}



/* Entry: 10269b654; end: 10269b673;  */

void FUN_10269b654(void)

{
  func_0x000107c61168(&PTR_PTR_1128578d0);
  return;
}



/* Entry: 10269b674; end: 10269b677;  */

/* WARNING: Possible PIC construction at 0x00010269a79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269a7a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269b674(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb4010);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = &UNK_1105349b8;
  func_0x000107c613fc(&UNK_1105349b8,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  func_0x000107c61174();
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca288,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10269b678; end: 10269b6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269b678(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb3fd0);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269b6d0; end: 10269b72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269b6d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb3fd0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269b72c; end: 10269b76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269b72c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb3fd0;
  func_0x000107c61428(unaff_x20 + _DAT_112eb3fd0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269b76c;
  return auVar2;
}



/* Entry: 10269b76c; end: 10269b76f;  */

void FUN_10269b76c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269b770; end: 10269b7c7;  */

void FUN_10269b770(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10269b7c8;
  plVar3[2] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[3] = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar1;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  plVar3[5] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_10269a81c;
  plVar2[0xb] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar2[0xc] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0xd] = lVar4;
  plVar2[0xe] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269aab8,lVar4,lVar1);
  return;
}



/* Entry: 10269b7c8; end: 10269b803;  */

void FUN_10269b7c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010269b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10269b804; end: 10269b83f;  */

void FUN_10269b804(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_attachUI__1125a0c08,param_1);
  return;
}



/* Entry: 10269b840; end: 10269b86f;  */

void FUN_10269b840(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10269b870; end: 10269b887;  */

void FUN_10269b870(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10269b888; end: 10269b99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269b888(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  func_0x0001038b6d8c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x0001038b6b00(puVar1,3,0x36,0x22,0x37,0,2);
  puStack_40 = puVar2;
  func_0x00010008a7c8(&uStack_38,&puStack_40);
  func_0x000100083b20(&puStack_40);
  func_0x000107c61574(uStack_38);
  lVar4 = _DAT_112eb4068;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb4068);
  *(undefined **)(unaff_x20 + _DAT_112eb4068) = puStack_40;
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



/* Entry: 10269b9a0; end: 10269b9ff; -[_TtC23MapRouterImplementation25HomeSettingsModalWorkflow init] */

void FUN_10269b9a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.HomeSettingsModalWorkflow",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269b9cc);
  (*pcVar1)();
}



/* Entry: 10269ba00; end: 10269ba5b; -[_TtC23MapRouterImplementation25HomeSettingsModalWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269ba00(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb4050),
                      ((undefined8 *)(param_1 + _DAT_112eb4050))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4058));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4060));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4068));
  return;
}



/* Entry: 10269ba5c; end: 10269ba7b;  */

void FUN_10269ba5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128579e0);
  return;
}



/* Entry: 10269ba7c; end: 10269ba7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269ba7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  func_0x0001038b6d8c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x0001038b6b00(puVar1,3,0x36,0x22,0x37,0,2);
  puStack_40 = puVar2;
  func_0x00010008a7c8(&uStack_38,&puStack_40);
  func_0x000100083b20(&puStack_40);
  func_0x000107c61574(uStack_38);
  lVar4 = _DAT_112eb4068;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eb4068);
  *(undefined **)(unaff_x20 + _DAT_112eb4068) = puStack_40;
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



/* Entry: 10269ba80; end: 10269bad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269ba80(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4050);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269bad8; end: 10269bb33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269bad8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4050);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269bb34; end: 10269bb73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269bb34(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4050;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4050,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269bb74;
  return auVar2;
}



/* Entry: 10269bb74; end: 10269bb77;  */

void FUN_10269bb74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269bb78; end: 10269bcf3; -[_TtC23MapRouterImplementation25HomeSettingsModalWorkflow trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269bb78(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb4068);
  *(undefined8 *)(param_1 + _DAT_112eb4068) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb4050);
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



/* Entry: 10269bcf4; end: 10269bd47;  */

void FUN_10269bcf4(void)

{
  long unaff_x20;
  
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10269bd48; end: 10269bd4b;  */

void FUN_10269bd48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  FUN_1026e2bd8(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c();
  puVar3 = puVar2;
  func_0x0001026e2d30();
  puStack_40 = puVar3;
  func_0x00010008a7c8(&uStack_38,&puStack_40);
  func_0x000100083b20(&puStack_40);
  func_0x000107c61574(uStack_38);
  puVar1 = puStack_40;
  func_0x000107c3e2c0(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10269bd4c; end: 10269bd97;  */

undefined1  [16] FUN_10269bd4c(void)

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



/* Entry: 10269bd98; end: 10269bde7;  */

void FUN_10269bd98(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10269bde8; end: 10269be17;  */

undefined1  [16] FUN_10269bde8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_10269be18;
  return auVar1;
}



/* Entry: 10269be18; end: 10269be1b;  */

void FUN_10269be18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269be1c; end: 10269be73;  */

void FUN_10269be1c(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (pcVar1 != (code *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c6157c(uVar2);
    (*pcVar1)();
    func_0x00010058d43c(pcVar1,uVar2);
  }
  return;
}



/* Entry: 10269be74; end: 10269c1eb;  */

/* WARNING: Possible PIC construction at 0x00010269bf9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269bfa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269be74(byte param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) == 0) {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112eb4158);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f0b5820);
    func_0x000107c44898();
    func_0x000107c61170(uVar2);
    if ((uVar4 & 1) != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4148);
      func_0x000107c61428(puVar1,auStack_48,0,0);
      pcVar5 = (code *)*puVar1;
      if (pcVar5 != (code *)0x0) {
        uVar2 = puVar1[1];
        func_0x000107c6157c(uVar2);
        (*pcVar5)();
        func_0x00010058d43c(pcVar5,uVar2);
      }
      return;
    }
  }
  puVar3 = &UNK_110534bf0;
  func_0x000107c613fc(&UNK_110534bf0,0x19,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar3[0x18] = param_1 & 1;
  func_0x000107c61174();
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca378,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 10269c1ec; end: 10269c28b;  */

void FUN_10269c1ec(undefined8 param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x40) = param_3;
  *(long *)(unaff_x22 + 0x28) = param_2;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10269c23c;
  plVar1[0x10] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269c394,0,0);
  return;
}



/* Entry: 10269c28c; end: 10269c33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269c28c(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x41) & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eb4148);
    func_0x000107c61428(puVar1,unaff_x22 + 0x10,0,0);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar5 = puVar1[1];
      func_0x000107c6157c(uVar5);
      (*pcVar4)();
      func_0x00010058d43c(pcVar4,uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010269c300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10269c340;
  uVar2 = *(undefined1 *)(unaff_x22 + 0x40);
  plVar3[2] = *(long *)(unaff_x22 + 0x28);
  *(undefined1 *)(plVar3 + 5) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269c4e0,0,0);
  return;
}



/* Entry: 10269c340; end: 10269c37b;  */

void FUN_10269c340(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010269c378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10269c37c; end: 10269c393;  */

void FUN_10269c37c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269c394,0,0);
  return;
}



/* Entry: 10269c394; end: 10269c477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269c394(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x88;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10269c478;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112eb4158);
  puVar2 = &UNK_110534c68;
  func_0x000107c613fc(&UNK_110534c68,0x18,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x10269cf68;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1010ca3e8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110534c80;
  func_0x000107c60bc4(puVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c43188(uVar4);
  func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10269c478; end: 10269c4b7;  */

void FUN_10269c478(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269c4b8,0,0);
  return;
}



/* Entry: 10269c4b8; end: 10269c4df;  */

void FUN_10269c4b8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010269c4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 10269c4e0; end: 10269c5d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269c4e0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb4158);
  func_0x000107c3e488();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10269c540;
  plVar2[0x10] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269c5f0,0,0);
  return;
}



/* Entry: 10269c5d8; end: 10269c5ef;  */

void FUN_10269c5d8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269c5f0,0,0);
  return;
}



/* Entry: 10269c5f0; end: 10269c707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269c5f0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined **ppuVar5;
  undefined8 *puVar6;
  
  lVar3 = *(long *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x88;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10269c708;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112eb4158);
  ppuVar5 = &PTR____CFConstantStringClassReference_110f72698;
  puVar2 = &UNK_110534c18;
  func_0x000107c613fc(&UNK_110534c18,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(code **)(unaff_x22 + 0x70) = FUN_10269cf34;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1013b7310;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110534c30;
  func_0x000107c60bc4(puVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c5032c(uVar4);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10269c708; end: 10269c747;  */

void FUN_10269c708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10269d188,0,0);
  return;
}



/* Entry: 10269c748; end: 10269c86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269c748(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb4160);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c42ae4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10269c870);
      (*pcVar6)();
    }
    func_0x000107c5b104(lVar3);
    func_0x000107c615e8(lVar3);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eb4158);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0b5820);
  func_0x000107c54900(uVar5);
  func_0x000107c61170(uVar4);
  FUN_10269c870();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4148);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  pcVar6 = (code *)*puVar1;
  if (pcVar6 != (code *)0x0) {
    uVar4 = puVar1[1];
    func_0x000107c6157c(uVar4);
    (*pcVar6)();
    func_0x00010058d43c(pcVar6,uVar4);
  }
  return;
}



/* Entry: 10269c870; end: 10269c903;  */

/* WARNING: Possible PIC construction at 0x00010269c8d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269c8d8) */
/* WARNING: Removing unreachable block (ram,0x00010269c900) */
/* WARNING: Removing unreachable block (ram,0x00010269c8dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269c870(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112eb4168);
  uVar1 = uVar3;
  func_0x000107c4c390();
  if ((uVar1 & 1) == 0) {
    func_0x000107c5625c(uVar3,param_2,1);
    lVar2 = *(long *)(unaff_x20 + _DAT_112eb4160);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c42ae4();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 10269c904; end: 10269c9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269c904(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112eb4148);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 == (code *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar2 = puVar1[1];
      func_0x000100b64c10(pcVar3,uVar2);
      func_0x000107c61170(param_1);
      (*pcVar3)();
      func_0x00010058d43c(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 10269c9b0; end: 10269ca0f; -[_TtC23MapRouterImplementation27LocationAccessModalWorkflow init] */

void FUN_10269c9b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.LocationAccessModalWorkflow",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269c9dc);
  (*pcVar1)();
}



/* Entry: 10269ca10; end: 10269caeb; -[_TtC23MapRouterImplementation27LocationAccessModalWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010269ca50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269ca54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269ca10(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb4148),
                      ((undefined8 *)(param_1 + _DAT_112eb4148))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4158));
  return;
}



/* Entry: 10269caec; end: 10269cb0b;  */

void FUN_10269caec(void)

{
  func_0x000107c61168(&PTR_PTR_112857ab8);
  return;
}



/* Entry: 10269cb0c; end: 10269cb3b;  */

/* WARNING: Possible PIC construction at 0x00010269c190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269bf9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269c07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269bfa0) */
/* WARNING: Removing unreachable block (ram,0x00010269c194) */
/* WARNING: Removing unreachable block (ram,0x00010269c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010269c1c8) */
/* WARNING: Removing unreachable block (ram,0x00010269c080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269cb0c(void)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  code *pcVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  bVar2 = *(byte *)(*(long *)(unaff_x20 + _DAT_112eb4150) + 0x10);
  if (bVar2 == 2) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112eb4170);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c443cc();
      func_0x000107c615e8(lVar4);
    }
    puVar5 = &UNK_110534cb8;
    func_0x000107c613fc(&UNK_110534cb8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puStack_40 = (undefined *)0x10269cf88;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110534cd0;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar5 = puStack_38;
  }
  else if (bVar2 == 3) {
    puVar5 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x0001002b9fb0(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000103a289a8(puVar5,unaff_x20);
    puStack_40 = puVar5;
    func_0x00010008a7c8(&puStack_38,&puStack_40);
    puVar5 = puStack_38;
    func_0x000100083b20(&puStack_40);
  }
  else {
    if ((bVar2 & 1) == 0) {
      uVar6 = *(ulong *)(unaff_x20 + _DAT_112eb4158);
      uVar3 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010f0b5820);
      func_0x000107c44898();
      func_0x000107c61170(uVar3);
      if ((uVar6 & 1) != 0) {
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4148);
        func_0x000107c61428(puVar1,&puStack_48,0,0);
        pcVar7 = (code *)*puVar1;
        if (pcVar7 != (code *)0x0) {
          uVar3 = puVar1[1];
          func_0x000107c6157c(uVar3);
          (*pcVar7)();
          func_0x00010058d43c(pcVar7,uVar3);
        }
        return;
      }
    }
    puVar5 = &UNK_110534bf0;
    func_0x000107c613fc(&UNK_110534bf0,0x19,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    puVar5[0x18] = bVar2 & 1;
    func_0x000107c61174();
    puStack_50 = PTR___sytN_11034f1b0 + 8;
    func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca378,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 10269cb3c; end: 10269cb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269cb3c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4148);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269cb94; end: 10269cbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269cb94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4148);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269cbf0; end: 10269cc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269cbf0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4148;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4148,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269cc30;
  return auVar2;
}



/* Entry: 10269cc30; end: 10269cc33;  */

void FUN_10269cc30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269cc34; end: 10269cc4b; -[_TtC23MapRouterImplementation27LocationAccessModalWorkflow permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269cc34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112eb4190),
             PTR_s_presentViewController_animated_c_112621588,param_3,1,0);
  return;
}



/* Entry: 10269cc4c; end: 10269cc87; -[_TtC23MapRouterImplementation27LocationAccessModalWorkflow permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269cc4c(void)

{
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10269cc88; end: 10269cd0b; -[_TtC23MapRouterImplementation27LocationAccessModalWorkflow webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010269ccc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010269cce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269ccc8) */
/* WARNING: Removing unreachable block (ram,0x00010269cce4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269cc88(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10269cd0c; end: 10269ce43; -[_TtC23MapRouterImplementation27LocationAccessModalWorkflow dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269cd0c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb4148);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar2,uVar3);
    (*pcVar2)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 10269ce44; end: 10269ce8f; -[_TtC23MapRouterImplementation27LocationAccessModalWorkflow mapsStateComplianceTakeoverDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010269ce78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269ce7c) */

void FUN_10269ce44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10269cf90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10269ce90; end: 10269cef7;  */

void FUN_10269ce90(void)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10269cef8;
  *(undefined1 *)(plVar3 + 8) = uVar1;
  plVar3[5] = lVar4;
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  plVar3[6] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = 0x10269c23c;
  plVar2[0x10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10269c394,0,0);
  return;
}



/* Entry: 10269cef8; end: 10269cf33;  */

void FUN_10269cef8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010269cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10269cf34; end: 10269cf8f;  */

void FUN_10269cf34(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10269cf90; end: 10269d143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269cf90(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  code *pcVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eb41a8);
  *(undefined8 *)(unaff_x20 + _DAT_112eb41a8) = 0;
  func_0x000107c615e8(uVar2);
  if (*(char *)(unaff_x20 + _DAT_112eb4198) == '\x01') {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb4188);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b0ea8;
      func_0x000107c610f8(PTR_PTR_1126b0ea8);
      func_0x000107c453e4();
      puVar5 = PTR_PTR_1126b63b8;
      func_0x000107c610f8(PTR_PTR_1126b63b8);
      func_0x000107c453e4();
      func_0x000107c52fa4(puVar4);
      func_0x000107c61170(puVar5);
      puVar5 = &UNK_110534cb8;
      func_0x000107c613fc(&UNK_110534cb8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_40 = FUN_10269d144;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_100ff4e10;
      puStack_48 = &UNK_110534cf8;
      puStack_38 = puVar5;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c4ab94(lVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar4);
      return;
    }
  }
  else {
    lVar3 = unaff_x20 + _DAT_112eb41a0;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c50358();
      func_0x000107c615e8(lVar3);
    }
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4148);
  func_0x000107c61428(puVar1,&puStack_60,0,0);
  pcVar7 = (code *)*puVar1;
  if (pcVar7 != (code *)0x0) {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar7)();
    func_0x00010058d43c(pcVar7,uVar2);
  }
  return;
}



/* Entry: 10269d144; end: 10269d14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d144(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4148);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 == (code *)0x0) {
      func_0x000107c61170(lVar2);
    }
    else {
      uVar3 = puVar1[1];
      func_0x000100b64c10(pcVar4,uVar3);
      func_0x000107c61170(lVar2);
      (*pcVar4)();
      func_0x00010058d43c(pcVar4,uVar3);
    }
  }
  return;
}



/* Entry: 10269d14c; end: 10269d16f;  */

undefined8 FUN_10269d14c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10269d170; end: 10269d18b;  */

void FUN_10269d170(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10269d18c; end: 10269d2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d18c(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar3);
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010038318c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x0001038b4d54(puVar3,unaff_x20,0);
    puStack_40 = puVar4;
    func_0x00010008a7c8(&uStack_38,&puStack_40);
    func_0x000100083b20(&puStack_40);
    func_0x000107c61574(uStack_38);
    lVar1 = _DAT_112eb41f8;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eb41f8);
    *(undefined **)(unaff_x20 + _DAT_112eb41f8) = puStack_40;
    func_0x000107c615e8(uVar5);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c4ab7c();
    }
    func_0x000107c56a0c(*(undefined8 *)(unaff_x20 + _DAT_112eb41f0));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10269d2c4);
  (*pcVar2)();
}



/* Entry: 10269d2c4; end: 10269d323; -[_TtC23MapRouterImplementation29LocationSettingsModalWorkflow init] */

void FUN_10269d2c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.LocationSettingsModalWorkflow",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269d2f0);
  (*pcVar1)();
}



/* Entry: 10269d324; end: 10269d38f; -[_TtC23MapRouterImplementation29LocationSettingsModalWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010269d374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269d378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d324(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb41d8),
                      ((undefined8 *)(param_1 + _DAT_112eb41d8))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb41e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb41e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb41f0));
  return;
}



/* Entry: 10269d390; end: 10269d3af;  */

void FUN_10269d390(void)

{
  func_0x000107c61168(&PTR_PTR_112857bd8);
  return;
}



/* Entry: 10269d3b0; end: 10269d3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d3b0(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar3);
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x00010038318c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x0001038b4d54(puVar3,unaff_x20,0);
    puStack_40 = puVar4;
    func_0x00010008a7c8(&uStack_38,&puStack_40);
    func_0x000100083b20(&puStack_40);
    func_0x000107c61574(uStack_38);
    lVar1 = _DAT_112eb41f8;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eb41f8);
    *(undefined **)(unaff_x20 + _DAT_112eb41f8) = puStack_40;
    func_0x000107c615e8(uVar5);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c4ab7c();
    }
    func_0x000107c56a0c(*(undefined8 *)(unaff_x20 + _DAT_112eb41f0));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10269d2c4);
  (*pcVar2)();
}



/* Entry: 10269d3b4; end: 10269d40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269d3b4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb41d8);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269d40c; end: 10269d467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb41d8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269d468; end: 10269d4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269d468(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb41d8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb41d8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269d4a8;
  return auVar2;
}



/* Entry: 10269d4a8; end: 10269d4ab;  */

void FUN_10269d4a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269d4ac; end: 10269d53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d4ac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eb41f8);
  *(undefined8 *)(unaff_x20 + _DAT_112eb41f8) = 0;
  func_0x000107c615e8(uVar2);
  func_0x000107c56a0c(*(undefined8 *)(unaff_x20 + _DAT_112eb41f0));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb41d8);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x00010058d43c(pcVar3,uVar2);
  }
  return;
}



/* Entry: 10269d53c; end: 10269d563; -[_TtC23MapRouterImplementation29LocationSettingsModalWorkflow locationSharingSettingsScopeDidDismiss] */

void FUN_10269d53c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10269d4ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10269d564; end: 10269d6ab;  */

/* WARNING: Possible PIC construction at 0x00010269d66c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269d670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb4240);
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
  }
  else {
    puVar1 = PTR_PTR_1126aead0;
    func_0x000107c610f8(PTR_PTR_1126aead0);
    func_0x000107c47994();
    func_0x000107c61170(lVar4);
  }
  puVar2 = PTR_PTR_1126b3e80;
  func_0x000107c61168(PTR_PTR_1126b3e80);
  puVar3 = PTR_PTR_1126aeae0;
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c615f0(puVar1);
  func_0x000107c5e2b8(puVar3,param_2,3);
  func_0x000107c61180();
  func_0x000107c5d02c(puVar2,param_2,puVar3,1,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c3ed54(*(undefined8 *)(unaff_x20 + _DAT_112eb4238));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar1);
  return;
}



/* Entry: 10269d6ac; end: 10269d70b; -[_TtC23MapRouterImplementation26MusicSettingsModalWorkflow init] */

void FUN_10269d6ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.MusicSettingsModalWorkflow",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269d6d8);
  (*pcVar1)();
}



/* Entry: 10269d70c; end: 10269d767; -[_TtC23MapRouterImplementation26MusicSettingsModalWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010269d73c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269d740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d70c(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb4228),
                      ((undefined8 *)(param_1 + _DAT_112eb4228))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb4230));
  return;
}



/* Entry: 10269d768; end: 10269d787;  */

void FUN_10269d768(void)

{
  func_0x000107c61168(&PTR_PTR_112857cb8);
  return;
}



/* Entry: 10269d788; end: 10269d78b;  */

/* WARNING: Possible PIC construction at 0x00010269d66c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010269d670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb4240);
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
  }
  else {
    puVar1 = PTR_PTR_1126aead0;
    func_0x000107c610f8(PTR_PTR_1126aead0);
    func_0x000107c47994();
    func_0x000107c61170(lVar4);
  }
  puVar2 = PTR_PTR_1126b3e80;
  func_0x000107c61168(PTR_PTR_1126b3e80);
  puVar3 = PTR_PTR_1126aeae0;
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c615f0(puVar1);
  func_0x000107c5e2b8(puVar3,param_2,3);
  func_0x000107c61180();
  func_0x000107c5d02c(puVar2,param_2,puVar3,1,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c3ed54(*(undefined8 *)(unaff_x20 + _DAT_112eb4238));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar1);
  return;
}



/* Entry: 10269d78c; end: 10269d7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269d78c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4228);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269d7e4; end: 10269d83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d7e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4228);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269d840; end: 10269d87f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269d840(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4228;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4228,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269d880;
  return auVar2;
}



/* Entry: 10269d880; end: 10269d883;  */

void FUN_10269d880(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269d884; end: 10269d967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d884(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb4230);
  lVar3 = lVar4;
  func_0x000107c49f74();
  if ((int)lVar3 != 0) {
    lVar3 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + _DAT_113073ea0);
      func_0x000107c615f0(uVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c41864(uVar5);
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c4283c(lVar4);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4228);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  pcVar2 = (code *)*puVar1;
  uVar5 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(uVar5);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar5);
    func_0x00010058d43c(pcVar2,uVar5);
  }
  return;
}



/* Entry: 10269d968; end: 10269d98f; -[_TtC23MapRouterImplementation26MusicSettingsModalWorkflow settingsScopeWantsDismiss] */

void FUN_10269d968(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10269d884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10269d990; end: 10269da27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269d990(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4230);
  uVar3 = uVar4;
  func_0x000107c49f74();
  if ((int)uVar3 != 0) {
    func_0x000107c4283c(uVar4);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4228);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  pcVar2 = (code *)*puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  if (pcVar2 != (code *)0x0) {
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar3);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 10269da28; end: 10269da4f; -[_TtC23MapRouterImplementation26MusicSettingsModalWorkflow settingsScopeDidDismiss] */

void FUN_10269da28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10269d990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10269da50; end: 10269db7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269da50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4280);
  func_0x0001038b6d8c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x0001038b6b00(puVar1,0,0x36,0x22,0xf,uVar4,5);
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar3 = _DAT_112eb4290;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4290);
  *(undefined **)(unaff_x20 + _DAT_112eb4290) = puStack_50;
  func_0x000107c615e8(uVar4);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 != 0) {
    func_0x000107c615f0(lVar3);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10269db7c; end: 10269dbdb; -[_TtC23MapRouterImplementation17PetsModalWorkflow init] */

void FUN_10269db7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.PetsModalWorkflow",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10269dba8);
  (*pcVar1)();
}



/* Entry: 10269dbdc; end: 10269dc37; -[_TtC23MapRouterImplementation17PetsModalWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269dbdc(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112eb4270),
                      ((undefined8 *)(param_1 + _DAT_112eb4270))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4278));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4288));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4290));
  return;
}



/* Entry: 10269dc38; end: 10269dc57;  */

void FUN_10269dc38(void)

{
  func_0x000107c61168(&PTR_PTR_112857d90);
  return;
}



/* Entry: 10269dc58; end: 10269dc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269dc58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4280);
  func_0x0001038b6d8c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x0001038b6b00(puVar1,0,0x36,0x22,0xf,uVar4,5);
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  lVar3 = _DAT_112eb4290;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb4290);
  *(undefined **)(unaff_x20 + _DAT_112eb4290) = puStack_50;
  func_0x000107c615e8(uVar4);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 != 0) {
    func_0x000107c615f0(lVar3);
    func_0x000107c4ee7c();
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10269dc5c; end: 10269dcb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269dc5c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112eb4270);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10269dcb4; end: 10269dd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269dcb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4270);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 10269dd10; end: 10269dd4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10269dd10(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4270;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4270,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10269dd50;
  return auVar2;
}



/* Entry: 10269dd50; end: 10269dd53;  */

void FUN_10269dd50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10269dd54; end: 10269ddf3; -[_TtC23MapRouterImplementation17PetsModalWorkflow trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10269dd54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb4290);
  *(undefined8 *)(param_1 + _DAT_112eb4290) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb4270);
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


