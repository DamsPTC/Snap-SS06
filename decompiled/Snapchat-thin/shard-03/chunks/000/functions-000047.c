/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024079b4; end: 1024079c3; -[_TtC21SCComposerSendToScope21SCComposerSendToScope presentAsTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1024079b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e97710);
}



/* Entry: 1024079c4; end: 1024079d3; -[_TtC21SCComposerSendToScope21SCComposerSendToScope sendTriggeredObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024079c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e97718));
  return;
}



/* Entry: 1024079d4; end: 102407be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024079d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e97708;
  func_0x000107c61614(unaff_x20 + _DAT_112e97708,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e976c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e976d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e976d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e976e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e976e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e976f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e976f8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e97700) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e97718) = param_9;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_10);
  *(undefined1 *)(unaff_x20 + _DAT_112e97710) = param_11;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  return puVar3;
}



/* Entry: 102407be4; end: 102407d4f; -[_TtC21SCComposerSendToScope21SCComposerSendToScope initWithUiContainer:preSelectedItems:previewConfiguration:contentConfiguration:recipientConfiguration:storyConfiguration:shareSheetConfiguration:attribution:sendTriggeredObservable:delegate:presentAsTray:] */

undefined8
FUN_102407be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = 0;
  func_0x0001012db084(0);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c615f0(param_3);
  uVar1 = param_5;
  func_0x000107c61174();
  uVar2 = param_6;
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  uVar3 = param_8;
  func_0x000107c61174();
  uVar4 = param_9;
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  uVar5 = param_11;
  func_0x000107c61174();
  func_0x000107c615f0(param_12);
  uVar6 = param_3;
  FUN_102407e94(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(param_12);
  return uVar6;
}



/* Entry: 102407d50; end: 102407da7; -[_TtC21SCComposerSendToScope21SCComposerSendToScope initWithSendToScope:delegate:] */

undefined8
FUN_102407d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  uVar1 = param_3;
  func_0x000102408028(param_3,param_4);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102407da8; end: 102407ddb;  */

void FUN_102407da8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102407ddc; end: 102407e93; -[_TtC21SCComposerSendToScope21SCComposerSendToScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102407e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102407e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102407e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102407e3c) */
/* WARNING: Removing unreachable block (ram,0x000102407e1c) */
/* WARNING: Removing unreachable block (ram,0x000102407e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102407ddc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e976c8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e976d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e976d8));
  return;
}



/* Entry: 102407e94; end: 102408233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102407e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112e97708;
  func_0x000107c61614(unaff_x20 + _DAT_112e97708,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e976c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e976d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e976d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e976e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e976e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e976f0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e976f8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e97700) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e97718) = param_9;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_10);
  *(undefined1 *)(unaff_x20 + _DAT_112e97710) = param_11;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 102408234; end: 102408253;  */

void FUN_102408234(void)

{
  func_0x000107c61168(&PTR_PTR_11283c710);
  return;
}



/* Entry: 102408254; end: 102408277;  */

undefined8 FUN_102408254(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102408278; end: 10240898f;  */

long * FUN_102408278(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    lVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar5;
    bVar3 = (int)plVar4 != 1;
    if (bVar3) {
      lVar6 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar6;
      func_0x000107c61434();
      func_0x000107c61434(lVar5);
      func_0x000107c61434(lVar6);
      lVar5 = 0x112e97748;
      func_0x0001000285a8(0x112e97748,&UNK_10daa2b30);
      iVar2 = *(int *)(lVar5 + 0x50);
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x60));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x70)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x70));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x80)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x80));
    }
    else {
      func_0x000107c61434();
      func_0x000107c61434(lVar5);
    }
    func_0x000107c6159c(param_1,param_3,!bVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102408990; end: 1024089af; -[_TtC18SCMemberRolesScope18SCMemberRolesScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102408990(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e977f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024089b0; end: 1024089f7; -[_TtC18SCMemberRolesScope18SCMemberRolesScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024089b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e97800;
  func_0x000107c61428(param_1 + _DAT_112e97800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024089f8; end: 102408a4f; -[_TtC18SCMemberRolesScope18SCMemberRolesScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024089f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e97800;
  func_0x000107c61428(param_1 + _DAT_112e97800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102408a50; end: 102408a5f; -[_TtC18SCMemberRolesScope18SCMemberRolesScope useSelector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102408a50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e97808);
}



/* Entry: 102408a60; end: 102408abb; -[_TtC18SCMemberRolesScope18SCMemberRolesScope selectedBusinessId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102408a60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112e97810))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e97810);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102408abc; end: 102408b1b; -[_TtC18SCMemberRolesScope18SCMemberRolesScope init] */

void FUN_102408abc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemberRolesScope.SCMemberRolesScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102408ae8);
  (*pcVar1)();
}



/* Entry: 102408b1c; end: 102408b8b; -[_TtC18SCMemberRolesScope18SCMemberRolesScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102408b1c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e977f8));
  func_0x000102408b68(param_1 + _DAT_112e97800);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e97810 + 8))
  ;
  return;
}



/* Entry: 102408b8c; end: 102408bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102408b8c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100341878();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e97848) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102408bf8; end: 102408bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102408bf8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100341878();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e97848) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102408c00; end: 102408c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102408c00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e97848) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102408c4c; end: 102408d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102408c4c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x000100335d78();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112e97800;
  func_0x000107c61614(lVar5 + _DAT_112e97800,0);
  *(undefined8 *)(lVar5 + _DAT_112e977f8) = param_1;
  *(undefined1 *)(lVar5 + _DAT_112e97808) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e97810);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61428(lVar5 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_5);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_4);
  plVar6 = &lStack_88;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 102408d88; end: 102408e3f; -[_TtC18SCMemberRolesScope26SCMemberRolesScopeServices buildWithUIContainer:useSelector:selectedBusinessId:delegate:] */

void FUN_102408d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102408c4c(param_3,param_4,param_5,param_2,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102408e40; end: 102408e9f; -[_TtC18SCMemberRolesScope26SCMemberRolesScopeServices init] */

void FUN_102408e40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemberRolesScope.SCMemberRolesScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102408e6c);
  (*pcVar1)();
}



/* Entry: 102408ea0; end: 102408ecf; -[_TtC18SCMemberRolesScope26SCMemberRolesScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102408ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e97848));
  return;
}



/* Entry: 102408ed0; end: 102408f7b;  */

void FUN_102408ed0(void)

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



/* Entry: 102408f7c; end: 102408fbb;  */

void FUN_102408f7c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102408fbc; end: 102409033; -[SCMemberRolesSelectedViewModel description] */

void FUN_102408fbc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000102408690();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  FUN_102409034(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000102408654(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102409034; end: 102409467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102409034(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte abStack_d0 [8];
  long lStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  long lStack_b8;
  code *pcStack_b0;
  long alStack_a8 [4];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar12 = abStack_d0 + -extraout_x8;
  lVar5 = 0x112e978e0;
  func_0x0001000285a8(0x112e978e0,&UNK_10daa2ca0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = (long)pbVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (undefined8 *)(lVar14 - extraout_x12);
  lVar5 = 0;
  func_0x000102408690();
  lVar15 = *(long *)(lVar5 + -8);
  pcVar7 = *(code **)(lVar15 + 0x38);
  (*pcVar7)(puVar10,1,1,lVar5);
  uStack_68 = param_1;
  if (*(char *)(param_2 + _DAT_112e97890) == '\x01') {
    lVar11 = ((undefined8 *)(param_2 + _DAT_112e978d0))[1];
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102409448);
      (*pcVar7)();
    }
    lVar13 = ((undefined8 *)(param_2 + _DAT_112e978d8))[1];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102409450);
      (*pcVar7)();
    }
    uVar8 = *(undefined8 *)(param_2 + _DAT_112e978d0);
    uVar9 = *(undefined8 *)(param_2 + _DAT_112e978d8);
    FUN_10240988c(puVar10,0x112e978e0,&UNK_10daa2ca0);
    *puVar10 = uVar8;
    puVar10[1] = lVar11;
    puVar10[2] = uVar9;
    puVar10[3] = lVar13;
    func_0x000107c6159c(puVar10,lVar5,1);
    (*pcVar7)(puVar10,0,1,lVar5);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar13);
  }
  else {
    lVar11 = ((undefined8 *)(param_2 + _DAT_112e97898))[1];
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10240944c);
      (*pcVar7)();
    }
    lVar13 = ((undefined8 *)(param_2 + _DAT_112e978a0))[1];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102409454);
      (*pcVar7)();
    }
    lVar16 = ((undefined8 *)(param_2 + _DAT_112e978a8))[1];
    lStack_70 = lVar15;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102409458);
      (*pcVar7)();
    }
    alStack_a8[2] = *(undefined8 *)(param_2 + _DAT_112e97898);
    alStack_a8[3] = *(undefined8 *)(param_2 + _DAT_112e978a0);
    uStack_88 = *(undefined8 *)(param_2 + _DAT_112e978a8);
    lStack_78 = lVar14;
    func_0x0001024098cc(param_2 + _DAT_112e978b0,pbVar12,0x112d36580,&UNK_10d9016d0);
    lVar14 = 0;
    func_0x000107c5ede0();
    lStack_80 = *(long *)(lVar14 + -8);
    pbVar6 = pbVar12;
    (**(code **)(lStack_80 + 0x30))(pbVar12,1,lVar14);
    if ((int)pbVar6 == 1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10240945c);
      (*pcVar7)();
    }
    uStack_bc = (uint)*(byte *)(param_2 + _DAT_112e978b8);
    alStack_a8[0] = lVar5;
    alStack_a8[1] = lVar16;
    if (uStack_bc == 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102409460);
      (*pcVar7)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_112e978c0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102409464);
      (*pcVar7)();
    }
    uStack_c0 = (uint)*(byte *)(param_2 + _DAT_112e978c8);
    lStack_b8 = param_2;
    pcStack_b0 = pcVar7;
    if (uStack_c0 == 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102409468);
      (*pcVar7)();
    }
    lStack_c8 = *(undefined8 *)(param_2 + _DAT_112e978c0);
    FUN_10240988c(puVar10,0x112e978e0,&UNK_10daa2ca0);
    lVar5 = 0x112e97748;
    func_0x0001000285a8(0x112e97748,&UNK_10daa2b30);
    lVar15 = alStack_a8[3];
    iVar1 = *(int *)(lVar5 + 0x50);
    iVar2 = *(int *)(lVar5 + 0x60);
    iVar3 = *(int *)(lVar5 + 0x70);
    iVar4 = *(int *)(lVar5 + 0x80);
    *puVar10 = alStack_a8[2];
    puVar10[1] = lVar11;
    puVar10[2] = lVar15;
    puVar10[3] = lVar13;
    lVar16 = lStack_80;
    lVar15 = alStack_a8[1];
    puVar10[4] = uStack_88;
    puVar10[5] = lVar15;
    (**(code **)(lVar16 + 0x10))((long)puVar10 + (long)iVar1,pbVar12,lVar14);
    *(byte *)((long)puVar10 + (long)iVar2) = (byte)uStack_bc & 1;
    *(long *)((long)puVar10 + (long)iVar3) = lStack_c8;
    *(byte *)((long)puVar10 + (long)iVar4) = (byte)uStack_c0 & 1;
    lVar5 = alStack_a8[0];
    func_0x000107c6159c(puVar10,alStack_a8[0],0);
    (*pcStack_b0)(puVar10,0,1,lVar5);
    pcVar7 = *(code **)(lVar16 + 8);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar13);
    func_0x000107c61434(lVar15);
    (*pcVar7)(pbVar12,lVar14);
    param_2 = lStack_b8;
    lVar14 = lStack_78;
    lVar15 = lStack_70;
  }
  uVar8 = uStack_68;
  func_0x0001024098cc(puVar10,lVar14,0x112e978e0,&UNK_10daa2ca0);
  lVar11 = lVar14;
  (**(code **)(lVar15 + 0x30))(lVar14,1,lVar5);
  if ((int)lVar11 != 1) {
    func_0x000107c61170(param_2);
    func_0x000102409914(lVar14,uVar8);
    FUN_10240988c(puVar10,0x112e978e0,&UNK_10daa2ca0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x102409444);
  (*pcVar7)();
}



/* Entry: 102409468; end: 1024094af; -[SCMemberRolesSelectedViewModel init] */

void FUN_102409468(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemberRolesScope/SCMemberRolesSelectedViewModelWrapper.swift",0x3e,2,0x52,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024094b0);
  (*pcVar1)();
}



/* Entry: 1024094b0; end: 1024094b3; -[SCMemberRolesSelectedViewModel copyWithZone:] */

void FUN_1024094b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1024094b4; end: 1024095f3; +[SCMemberRolesSelectedViewModel memberRoleWithFullname:username:businessId:avatarURL:canSaveHighlight:officialBadgeType:canPostToSpotlight:] */

void FUN_1024094b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  byte param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  uStack_74 = (uint)param_9;
  lVar2 = 0;
  uStack_70 = param_8;
  uStack_64 = param_7;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + lVar1;
  func_0x000107c5faec(param_3);
  uVar3 = param_2;
  func_0x000107c5faec(param_4);
  uVar4 = uVar3;
  func_0x000107c5faec(param_5);
  func_0x000107c5edb4(puVar6,param_6);
  auStack_88[lVar1] = (char)uStack_74;
  *(undefined8 *)((long)&uStack_90 + lVar1) = uStack_70;
  FUN_102409bb0(param_3,param_2,param_4,uVar3,param_5,uVar4,puVar6,uStack_64);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  (**(code **)(lVar5 + 8))(puVar6,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1024095f4; end: 10240965f; +[SCMemberRolesSelectedViewModel currentUserWithFullname:username:] */

void FUN_1024095f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000102409db0(param_3,param_2,param_4,uVar1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102409660; end: 10240988b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102409660(code *param_1,undefined8 param_2,code *param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_80;
  byte abStack_78 [8];
  undefined8 uStack_70;
  code *pcStack_68;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  lVar7 = (long)&uStack_70 + lVar5;
  if (*(char *)(unaff_x20 + _DAT_112e97890) == '\x01') {
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112e978d0))[1];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10240986c);
      (*pcVar2)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_112e978d8))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102409874);
      (*pcVar2)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_112e978d0),lVar5,
               *(undefined8 *)(unaff_x20 + _DAT_112e978d8));
  }
  else {
    lVar9 = ((undefined8 *)(unaff_x20 + _DAT_112e97898))[1];
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102409870);
      (*pcVar2)();
    }
    lVar10 = ((undefined8 *)(unaff_x20 + _DAT_112e978a0))[1];
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102409878);
      (*pcVar2)();
    }
    lVar11 = ((undefined8 *)(unaff_x20 + _DAT_112e978a8))[1];
    uStack_70 = param_2;
    pcStack_68 = param_1;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10240987c);
      (*pcVar2)();
    }
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e97898);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e978a0);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e978a8);
    func_0x0001024098cc(unaff_x20 + _DAT_112e978b0,lVar7,0x112d36580,&UNK_10d9016d0);
    lVar3 = 0;
    func_0x000107c5ede0();
    lVar8 = *(long *)(lVar3 + -8);
    lVar4 = lVar7;
    (**(code **)(lVar8 + 0x30))(lVar7,1,lVar3);
    if ((int)lVar4 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102409880);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(unaff_x20 + _DAT_112e978b8);
    if (bVar1 == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102409884);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112e978c0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102409888);
      (*pcVar2)();
    }
    if (*(byte *)(unaff_x20 + _DAT_112e978c8) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10240988c);
      (*pcVar2)();
    }
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e978c0);
    abStack_78[lVar5] = *(byte *)(unaff_x20 + _DAT_112e978c8) & 1;
    *(undefined8 *)((long)&uStack_80 + lVar5) = uVar6;
    (*pcStack_68)(uVar14,lVar9,uVar13,lVar10,uVar12,lVar11,lVar7,bVar1 & 1);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
  }
  return;
}



/* Entry: 10240988c; end: 102409957;  */

undefined8 FUN_10240988c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102409958; end: 1024099ab; -[SCMemberRolesSelectedViewModel matchMemberRole:currentUser:] */

void FUN_102409958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_102409660(0x10240a1ec,auStack_40,FUN_10240a220,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1024099ac; end: 102409a7b;  */

/* WARNING: Possible PIC construction at 0x000102409a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102409a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102409a4c) */
/* WARNING: Removing unreachable block (ram,0x000102409a5c) */

void FUN_1024099ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                  undefined8 param_9,byte param_10,undefined4 param_11,long param_12)

{
  undefined8 uVar1;
  
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  uVar1 = param_5;
  func_0x000107c5ed90();
  (**(code **)(param_12 + 0x10))
            (param_12,param_1,param_3,param_5,uVar1,param_8 & 1,param_9,param_10 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102409a7c; end: 102409adf;  */

/* WARNING: Possible PIC construction at 0x000102409ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102409acc) */

void FUN_102409a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102409ae0; end: 102409b13;  */

void FUN_102409ae0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102409b14; end: 102409baf; -[SCMemberRolesSelectedViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102409b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102409b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102409b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102409b60) */
/* WARNING: Removing unreachable block (ram,0x000102409b38) */
/* WARNING: Removing unreachable block (ram,0x000102409b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102409b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e97898 + 8))
  ;
  return;
}



/* Entry: 102409bb0; end: 102409f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102409bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                    undefined8 param_9,byte param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  long lStack_68;
  
  uStack_78 = (uint)param_10;
  uStack_80 = param_9;
  lVar3 = 0x112d36580;
  uStack_74 = param_8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_80 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  (**(code **)(lVar6 + 0x10))(lVar5,param_7,lVar3);
  (**(code **)(lVar6 + 0x38))(lVar5,0,1,lVar3);
  lVar6 = 0;
  FUN_102409f70();
  lVar3 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112e97890) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e97898);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e978a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e978a8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x0001024098cc(lVar5,lVar3 + _DAT_112e978b0,0x112d36580,&UNK_10d9016d0);
  *(char *)(lVar3 + _DAT_112e978b8) = (char)uStack_74;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e978c0);
  *puVar1 = uStack_80;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(char *)(lVar3 + _DAT_112e978c8) = (char)uStack_78;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e978d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112e978d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar6;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar2);
  func_0x00010240988c(lVar5,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 102409f68; end: 102409f6f;  */

void FUN_102409f68(void)

{
  if (lRam0000000112e97910 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6d6020);
  return;
}



/* Entry: 102409f70; end: 102409fa7;  */

void FUN_102409f70(undefined8 param_1)

{
  if (lRam0000000112e97910 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d6020);
  return;
}



/* Entry: 102409fa8; end: 10240a043;  */

void FUN_102409fa8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10daa2cd8;
  puStack_68 = &UNK_10daa2cf0;
  puStack_60 = &UNK_10daa2cf0;
  puStack_58 = &UNK_10daa2cf0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10daa2d08;
    puStack_40 = &UNK_10daa2d20;
    puStack_38 = &UNK_10daa2d08;
    puStack_30 = &UNK_10daa2cf0;
    puStack_28 = &UNK_10daa2cf0;
    func_0x000107c61630(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 10240a044; end: 10240a1ab;  */

int FUN_10240a044(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10240a0c0;
        goto LAB_10240a0a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10240a0a4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10240a0c0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10240a1ac; end: 10240a21f;  */

void FUN_10240a1ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e97920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa2d64;
  func_0x000107c61520(&UNK_10daa2d64,&UNK_1105029c8);
  puRam0000000112e97920 = puVar1;
  return;
}



/* Entry: 10240a220; end: 10240a23b;  */

/* WARNING: Possible PIC construction at 0x000102409ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102409acc) */

void FUN_10240a220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10240a23c; end: 10240a2e7;  */

void FUN_10240a23c(void)

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



/* Entry: 10240a2e8; end: 10240a32f; -[SCFanPassSelectionInterceptor uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240a2e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e97928;
  func_0x000107c61428(param_1 + _DAT_112e97928,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10240a330; end: 10240a3db; -[SCFanPassSelectionInterceptor setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240a330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e97928;
  func_0x000107c61428(param_1 + _DAT_112e97928,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10240a3dc; end: 10240a59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10240a3dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  uVar6 = param_2;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112e97930) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e97938) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e97940) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97948);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10240baf4();
  *puVar1 = puVar2;
  puVar1[1] = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112e97928) = 0;
  lVar5 = _DAT_112e97950;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e97958);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  if (param_3 != 0) {
    puVar2 = &UNK_110502ae8;
    func_0x000107c613fc(&UNK_110502ae8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,puVar3);
    pcStack_70 = FUN_10240bfa0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1012df3b8;
    puStack_78 = &UNK_110502b00;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar2);
    lVar5 = param_3;
    func_0x000107c5c320(param_3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_3);
    uVar6 = *(undefined8 *)(puVar3 + _DAT_112e97950);
    func_0x000107c61174(uVar6);
    func_0x000107c3e924(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(param_3);
  }
  return puVar3;
}



/* Entry: 10240a5a0; end: 10240a627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240a5a0(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c61170(param_1);
    }
    *(bool *)(param_2 + _DAT_112e97940) = param_1 != 0;
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10240a628; end: 10240a677; -[SCFanPassSelectionInterceptor initWithSubscriptionDisplayName:musicSelectionObservable:] */

void FUN_10240a628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  FUN_10240a3dc(param_3,param_2,param_4);
  return;
}



/* Entry: 10240a678; end: 10240ac77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10240a678(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar13 = _DAT_112e97930;
  ppuVar5 = &puStack_c0;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(char *)(unaff_x20 + _DAT_112e97930) == '\x01') {
    uVar3 = 0;
    FUN_10240ac78();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar3 & 1) == 0) {
      puVar12 = (undefined *)0x0;
      FUN_10240cfc0(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar3 = *(ulong *)(puVar12 + 0x10);
      puVar8 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_10240cfc0(puVar8,uVar3 + 1,1,puVar12);
      }
      *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
      puVar8[uVar3 + 0x20] = 2;
    }
  }
  lVar2 = _DAT_112e97938;
  if (*(char *)(unaff_x20 + _DAT_112e97938) == '\x01') {
    uVar3 = 0;
    FUN_10240ac78();
    if ((uVar3 & 1) == 0) {
      puVar12 = puVar8;
      func_0x000107c61558();
      puVar9 = puVar8;
      if (((ulong)puVar12 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_10240cfc0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar3 = *(ulong *)(puVar9 + 0x10);
      puVar8 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_10240cfc0(puVar8,uVar3 + 1,1,puVar9);
      }
      *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
      puVar8[uVar3 + 0x20] = 3;
    }
  }
  lVar1 = unaff_x20 + _DAT_112e97948;
  puVar10 = auStack_78;
  uVar11 = 0;
  puVar12 = (undefined *)0x0;
  func_0x000107c61428(lVar1);
  if ((*(long *)(*(long *)(lVar1 + 8) + 0x10) != 0) && ((*(byte *)(unaff_x20 + lVar13) & 1) == 0)) {
    uVar3 = 0;
    FUN_10240ac78();
    if ((uVar3 & 1) != 0) {
      puVar9 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined1 *)(*(long *)(puVar8 + 0x10) + 1);
        puVar7 = (undefined *)0x0;
        uVar11 = 1;
        FUN_10240cfc0();
        puVar12 = puVar8;
      }
      uVar3 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        uVar11 = 1;
        puVar10 = (undefined1 *)(uVar3 + 1);
        FUN_10240cfc0();
        puVar12 = puVar7;
      }
      *(undefined1 **)(puVar8 + 0x10) = (undefined1 *)(uVar3 + 1);
      puVar8[uVar3 + 0x20] = 0;
    }
  }
  if ((*(long *)(*(long *)(lVar1 + 8) + 0x10) != 0) && ((*(byte *)(unaff_x20 + lVar2) & 1) == 0)) {
    uVar3 = 0;
    FUN_10240ac78();
    if ((uVar3 & 1) != 0) {
      puVar9 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined1 *)(*(long *)(puVar8 + 0x10) + 1);
        puVar7 = (undefined *)0x0;
        uVar11 = 1;
        FUN_10240cfc0();
        puVar12 = puVar8;
      }
      uVar3 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        uVar11 = 1;
        puVar10 = (undefined1 *)(uVar3 + 1);
        FUN_10240cfc0();
        puVar12 = puVar7;
      }
      *(undefined1 **)(puVar8 + 0x10) = (undefined1 *)(uVar3 + 1);
      puVar8[uVar3 + 0x20] = 1;
    }
  }
  if (((*(char *)(unaff_x20 + _DAT_112e97940) == '\x01') && ((param_2 & 1) != 0)) &&
     ((param_3 & 1) == 0)) {
    uVar3 = 0;
    FUN_10240ac78();
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      FUN_10240ac78();
      if ((uVar3 & 1) == 0) goto LAB_10240a898;
    }
    puVar9 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar9 & 1) == 0) {
      puVar10 = (undefined1 *)(*(long *)(puVar8 + 0x10) + 1);
      puVar7 = (undefined *)0x0;
      uVar11 = 1;
      FUN_10240cfc0();
      puVar12 = puVar8;
    }
    uVar3 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      uVar11 = 1;
      puVar10 = (undefined1 *)(uVar3 + 1);
      FUN_10240cfc0();
      puVar12 = puVar7;
    }
    *(undefined1 **)(puVar8 + 0x10) = (undefined1 *)(uVar3 + 1);
    puVar8[uVar3 + 0x20] = 4;
  }
LAB_10240a898:
  lVar14 = *(long *)(puVar8 + 0x10);
  if (lVar14 == 0) {
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) != 0) {
        uVar3 = 0;
        FUN_10240ac78();
        if ((uVar3 & 1) == 0) {
          uVar3 = 0;
          FUN_10240ac78();
          if ((uVar3 & 1) != 0) {
            *(undefined1 *)(unaff_x20 + lVar2) = 0;
          }
        }
        else {
          *(undefined1 *)(unaff_x20 + lVar13) = 0;
        }
        func_0x000107c4fa44(param_1);
        func_0x000107c61180();
        uVar11 = param_1;
        func_0x000107c44fdc();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c61428(lVar1,&puStack_c0,0x21,0);
        uVar6 = uVar11;
        FUN_10240b62c(uVar11);
        func_0x000107c614a8(&puStack_c0);
        func_0x000107c6142c(puVar8);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar6);
        goto LAB_10240aa30;
      }
    }
    else if ((param_3 & 1) == 0) {
      uVar3 = 0;
      FUN_10240ac78();
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        FUN_10240ac78();
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)(unaff_x20 + lVar2) = 1;
        }
      }
      else {
        *(undefined1 *)(unaff_x20 + lVar13) = 1;
      }
      func_0x000107c4fa44(param_1);
      func_0x000107c61180();
      uVar11 = param_1;
      func_0x000107c44fdc();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61428(lVar1,&puStack_c0,0x21,0);
      FUN_10240c3dc(uVar11);
      func_0x000107c614a8(&puStack_c0);
      func_0x000107c6142c(puVar8);
      func_0x000107c61170(uVar11);
      goto LAB_10240aa30;
    }
  }
  else {
    puVar9 = puVar8;
    FUN_10240ad70();
    lVar13 = _DAT_112e97928;
    func_0x000107c61428(unaff_x20 + _DAT_112e97928,auStack_90,0,0);
    lVar13 = *(long *)(unaff_x20 + lVar13);
    if (lVar13 != 0) {
      func_0x000107c615f0(lVar13);
      pcVar4 = "presentAlert(title:message:)";
      func_0x0001000c10c0("presentAlert(title:message:)");
      func_0x000107c61180();
      puVar7 = &UNK_110502b38;
      func_0x000107c613fc(&UNK_110502b38,0x38,7);
      *(undefined **)(puVar7 + 0x10) = puVar9;
      *(undefined1 **)(puVar7 + 0x18) = puVar10;
      *(undefined8 *)(puVar7 + 0x20) = uVar11;
      *(undefined **)(puVar7 + 0x28) = puVar12;
      *(long *)(puVar7 + 0x30) = lVar13;
      uStack_a0 = 0x10240bfc4;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_110502b50;
      puStack_98 = puVar7;
      func_0x000107c60bc4(&puStack_c0);
      puVar9 = puStack_98;
      func_0x000107c615f0(lVar13);
      func_0x000107c61434(puVar10);
      func_0x000107c61434(puVar12);
      func_0x000107c61574(puVar9);
      func_0x000107c4e524(pcVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar12);
      func_0x000107c615e8(lVar13);
      func_0x000107c615e8(pcVar4);
      goto LAB_10240aa30;
    }
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(puVar10);
    puVar8 = puVar12;
  }
  func_0x000107c6142c(puVar8);
LAB_10240aa30:
  return lVar14 != 0;
}



/* Entry: 10240ac78; end: 10240ad6f;  */

uint FUN_10240ac78(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  long lVar6;
  
  func_0x000107c4fa44();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  lVar6 = lVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar6;
  func_0x000107c5faec();
  lVar4 = param_2;
  func_0x000107c61170(lVar6);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar3 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    if ((lVar2 == lVar3) && (param_2 == lVar4)) {
      uVar5 = 1;
    }
    else {
      func_0x000107c605b8(lVar2,param_2,lVar3,lVar4,0);
      uVar5 = (uint)lVar2;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar4);
    return uVar5 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10240ad70);
  (*pcVar1)();
}



/* Entry: 10240ad70; end: 10240b62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10240ad70(long param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar11 = *(long *)(param_1 + 0x10);
  pbVar10 = (byte *)(param_1 + 0x20);
  lVar12 = 0;
  do {
    lVar4 = lVar12;
    if (lVar11 == lVar4) break;
    lVar12 = lVar4 + 1;
  } while (pbVar10[lVar4] == 4);
  lVar12 = 0;
  do {
    if (lVar11 == lVar12) {
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b614);
        (*pcVar3)();
      }
      bVar2 = *pbVar10;
      lStack_88 = param_2;
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          func_0x00010240e04c();
          lVar11 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          lVar12 = lVar11;
          func_0x000107c613fc();
          *(undefined8 *)(lVar12 + 0x18) = 2;
          *(undefined8 *)(lVar12 + 0x10) = 1;
          uVar8 = 0x70;
          lVar4 = lVar11;
          func_0x000107c613fc(lVar11,0x70,7);
          *(undefined8 *)(lVar4 + 0x18) = 4;
          *(undefined8 *)(lVar4 + 0x10) = 2;
          lVar5 = lVar4;
          func_0x000108f57dfc();
          func_0x000107c61180();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b61c);
            (*pcVar3)();
          }
          uVar13 = 0x402520b7c2204025;
          lVar6 = lVar5;
          func_0x000107c5faec();
          func_0x000107c61170();
          puVar14 = PTR___sSSN_11034da80;
          *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
          func_0x00010075bbf0();
          *(long *)(lVar4 + 0x20) = lVar6;
          *(undefined8 *)(lVar4 + 0x28) = uVar8;
          uStack_78 = *(undefined8 *)(unaff_x20 + _DAT_112e97958);
          uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112e97958))[1];
          *(undefined **)(lVar4 + 0x60) = puVar14;
          *(long *)(lVar4 + 0x68) = lVar5;
          *(long *)(lVar4 + 0x40) = lVar5;
          *(undefined8 *)(lVar4 + 0x48) = uStack_78;
          *(undefined8 *)(lVar4 + 0x50) = uVar8;
          func_0x000107c61434(uVar8);
          uVar9 = 0xa800000000000000;
          func_0x000107c5fb00(0x402520b7c2204025,0xa800000000000000,lVar4);
          *(undefined **)(lVar12 + 0x38) = puVar14;
          *(long *)(lVar12 + 0x40) = lVar5;
          *(undefined8 *)(lVar12 + 0x20) = uVar13;
          *(undefined8 *)(lVar12 + 0x28) = uVar9;
          lStack_80 = param_2;
          func_0x000107c5fb00(param_1,param_2,lVar12);
          func_0x000107c6142c();
          func_0x00010240e39c();
          lVar12 = lVar11;
          func_0x000107c613fc(lVar11,0x70,7);
          *(undefined8 *)(lVar12 + 0x18) = 4;
          *(undefined8 *)(lVar12 + 0x10) = 2;
          uVar13 = 0x70;
          lVar4 = lVar11;
          func_0x000107c613fc(lVar11,0x70,7);
          *(undefined8 *)(lVar4 + 0x18) = 4;
          *(undefined8 *)(lVar4 + 0x10) = 2;
          lVar6 = lVar4;
          func_0x000108f57dfc();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b624);
            (*pcVar3)();
          }
          lVar7 = lVar6;
          func_0x000107c5faec();
          func_0x000107c61170(lVar6);
          puVar14 = PTR___sSSN_11034da80;
          *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
          *(long *)(lVar4 + 0x40) = lVar5;
          *(long *)(lVar4 + 0x20) = lVar7;
          *(undefined8 *)(lVar4 + 0x28) = uVar13;
          *(undefined **)(lVar4 + 0x60) = puVar14;
          *(long *)(lVar4 + 0x68) = lVar5;
          *(undefined8 *)(lVar4 + 0x48) = uStack_78;
          *(undefined8 *)(lVar4 + 0x50) = uVar8;
          func_0x000107c61434(uVar8);
          uVar13 = 0x402520b7c2204025;
          uVar9 = 0xa800000000000000;
          func_0x000107c5fb00(0x402520b7c2204025,0xa800000000000000,lVar4);
          *(undefined **)(lVar12 + 0x38) = puVar14;
          *(long *)(lVar12 + 0x40) = lVar5;
          *(undefined8 *)(lVar12 + 0x20) = uVar13;
          *(undefined8 *)(lVar12 + 0x28) = uVar9;
          uVar13 = 0x70;
          func_0x000107c613fc(lVar11,0x70,7);
          *(undefined8 *)(lVar11 + 0x18) = 4;
          *(undefined8 *)(lVar11 + 0x10) = 2;
          lVar4 = lVar11;
          func_0x000108f57dfc();
          func_0x000107c61180();
          lStack_88 = param_2;
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b628);
            (*pcVar3)();
          }
          goto LAB_10240b458;
        }
        func_0x00010240e04c();
        lVar12 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        lVar11 = lVar12;
        func_0x000107c613fc();
        *(undefined8 *)(lVar11 + 0x18) = 2;
        *(undefined8 *)(lVar11 + 0x10) = 1;
        puVar14 = PTR___sSSN_11034da80;
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e97958);
        uVar13 = ((undefined8 *)(unaff_x20 + _DAT_112e97958))[1];
        *(undefined **)(lVar11 + 0x38) = PTR___sSSN_11034da80;
        lVar4 = lVar11;
        func_0x00010075bbf0();
        *(long *)(lVar11 + 0x40) = lVar4;
        *(undefined8 *)(lVar11 + 0x20) = uVar8;
        *(undefined8 *)(lVar11 + 0x28) = uVar13;
        func_0x000107c61438(uVar13,3);
        lStack_80 = lStack_88;
        func_0x000107c5fb00(param_1,lStack_88,lVar11);
        func_0x000107c6142c(lStack_88);
        func_0x00010240e39c();
LAB_10240b224:
        func_0x000107c613fc(lVar12,0x70,7);
        *(undefined8 *)(lVar12 + 0x18) = 4;
        *(undefined8 *)(lVar12 + 0x10) = 2;
        *(undefined **)(lVar12 + 0x38) = puVar14;
        *(long *)(lVar12 + 0x40) = lVar4;
        *(undefined8 *)(lVar12 + 0x20) = uVar8;
        *(undefined8 *)(lVar12 + 0x28) = uVar13;
        *(undefined **)(lVar12 + 0x60) = puVar14;
        *(long *)(lVar12 + 0x68) = lVar4;
        *(undefined8 *)(lVar12 + 0x48) = uVar8;
        *(undefined8 *)(lVar12 + 0x50) = uVar13;
      }
      else {
        if (bVar2 == 2) {
          func_0x00010240e04c();
          lVar12 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          lVar11 = lVar12;
          func_0x000107c613fc();
          *(undefined8 *)(lVar11 + 0x18) = 2;
          *(undefined8 *)(lVar11 + 0x10) = 1;
          puVar14 = PTR___sSSN_11034da80;
          uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e97958);
          uVar13 = ((undefined8 *)(unaff_x20 + _DAT_112e97958))[1];
          *(undefined **)(lVar11 + 0x38) = PTR___sSSN_11034da80;
          lVar4 = lVar11;
          func_0x00010075bbf0();
          *(long *)(lVar11 + 0x40) = lVar4;
          *(undefined8 *)(lVar11 + 0x20) = uVar8;
          *(undefined8 *)(lVar11 + 0x28) = uVar13;
          func_0x000107c61438(uVar13,3);
          lStack_80 = lStack_88;
          func_0x000107c5fb00(param_1,lStack_88,lVar11);
          func_0x000107c6142c(lStack_88);
          func_0x00010240e2d0();
          goto LAB_10240b224;
        }
        if (bVar2 != 3) goto LAB_10240b0c8;
        func_0x00010240e04c();
        lVar11 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        lVar12 = lVar11;
        func_0x000107c613fc();
        *(undefined8 *)(lVar12 + 0x18) = 2;
        *(undefined8 *)(lVar12 + 0x10) = 1;
        uVar8 = 0x70;
        lVar4 = lVar11;
        func_0x000107c613fc(lVar11,0x70,7);
        *(undefined8 *)(lVar4 + 0x18) = 4;
        *(undefined8 *)(lVar4 + 0x10) = 2;
        lVar5 = lVar4;
        func_0x000108f57dfc();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b618);
          (*pcVar3)();
        }
        uVar13 = 0x402520b7c2204025;
        lVar6 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170();
        puVar14 = PTR___sSSN_11034da80;
        *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
        func_0x00010075bbf0();
        *(long *)(lVar4 + 0x20) = lVar6;
        *(undefined8 *)(lVar4 + 0x28) = uVar8;
        uStack_78 = *(undefined8 *)(unaff_x20 + _DAT_112e97958);
        uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112e97958))[1];
        *(undefined **)(lVar4 + 0x60) = puVar14;
        *(long *)(lVar4 + 0x68) = lVar5;
        *(long *)(lVar4 + 0x40) = lVar5;
        *(undefined8 *)(lVar4 + 0x48) = uStack_78;
        *(undefined8 *)(lVar4 + 0x50) = uVar8;
        func_0x000107c61434(uVar8);
        uVar9 = 0xa800000000000000;
        func_0x000107c5fb00(0x402520b7c2204025,0xa800000000000000,lVar4);
        *(undefined **)(lVar12 + 0x38) = puVar14;
        *(long *)(lVar12 + 0x40) = lVar5;
        *(undefined8 *)(lVar12 + 0x20) = uVar13;
        *(undefined8 *)(lVar12 + 0x28) = uVar9;
        lStack_80 = param_2;
        func_0x000107c5fb00(param_1,param_2,lVar12);
        func_0x000107c6142c();
        func_0x00010240e2d0();
        lVar12 = lVar11;
        func_0x000107c613fc(lVar11,0x70,7);
        *(undefined8 *)(lVar12 + 0x18) = 4;
        *(undefined8 *)(lVar12 + 0x10) = 2;
        uVar13 = 0x70;
        lVar4 = lVar11;
        func_0x000107c613fc(lVar11,0x70,7);
        *(undefined8 *)(lVar4 + 0x18) = 4;
        *(undefined8 *)(lVar4 + 0x10) = 2;
        lVar6 = lVar4;
        func_0x000108f57dfc();
        func_0x000107c61180();
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b620);
          (*pcVar3)();
        }
        lVar7 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
        puVar14 = PTR___sSSN_11034da80;
        *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
        *(long *)(lVar4 + 0x40) = lVar5;
        *(long *)(lVar4 + 0x20) = lVar7;
        *(undefined8 *)(lVar4 + 0x28) = uVar13;
        *(undefined **)(lVar4 + 0x60) = puVar14;
        *(long *)(lVar4 + 0x68) = lVar5;
        *(undefined8 *)(lVar4 + 0x48) = uStack_78;
        *(undefined8 *)(lVar4 + 0x50) = uVar8;
        func_0x000107c61434(uVar8);
        uVar13 = 0x402520b7c2204025;
        uVar9 = 0xa800000000000000;
        func_0x000107c5fb00(0x402520b7c2204025,0xa800000000000000,lVar4);
        *(undefined **)(lVar12 + 0x38) = puVar14;
        *(long *)(lVar12 + 0x40) = lVar5;
        *(undefined8 *)(lVar12 + 0x20) = uVar13;
        *(undefined8 *)(lVar12 + 0x28) = uVar9;
        uVar13 = 0x70;
        func_0x000107c613fc(lVar11,0x70,7);
        *(undefined8 *)(lVar11 + 0x18) = 4;
        *(undefined8 *)(lVar11 + 0x10) = 2;
        lVar4 = lVar11;
        func_0x000108f57dfc();
        func_0x000107c61180();
        lStack_88 = param_2;
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b0c8);
          (*pcVar3)();
        }
LAB_10240b458:
        lVar6 = lVar4;
        func_0x000107c5faec();
        func_0x000107c61170(lVar4);
        puVar14 = PTR___sSSN_11034da80;
        *(undefined **)(lVar11 + 0x38) = PTR___sSSN_11034da80;
        *(long *)(lVar11 + 0x40) = lVar5;
        *(long *)(lVar11 + 0x20) = lVar6;
        *(undefined8 *)(lVar11 + 0x28) = uVar13;
        *(undefined **)(lVar11 + 0x60) = puVar14;
        *(long *)(lVar11 + 0x68) = lVar5;
        *(undefined8 *)(lVar11 + 0x48) = uStack_78;
        *(undefined8 *)(lVar11 + 0x50) = uVar8;
        func_0x000107c61434(uVar8);
        uVar8 = 0x402520b7c2204025;
        uVar13 = 0xa800000000000000;
        func_0x000107c5fb00(0x402520b7c2204025,0xa800000000000000,lVar11);
        *(undefined **)(lVar12 + 0x60) = puVar14;
        *(long *)(lVar12 + 0x68) = lVar5;
        *(undefined8 *)(lVar12 + 0x48) = uVar8;
        *(undefined8 *)(lVar12 + 0x50) = uVar13;
      }
      func_0x000107c5fb00(lStack_88,lStack_80,lVar12);
      goto LAB_10240b5dc;
    }
    pbVar1 = pbVar10 + lVar12;
    lVar12 = lVar12 + 1;
  } while (*pbVar1 != 4);
  if (lVar11 == lVar4) {
LAB_10240b0c8:
    func_0x00010240e13c();
    func_0x00010240e204();
    return param_1;
  }
  do {
    if (lVar11 == 0) goto LAB_10240b4e0;
    bVar2 = *pbVar10;
    lVar11 = lVar11 + -1;
    pbVar10 = pbVar10 + 1;
  } while (bVar2 == 4);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
LAB_10240adfc:
      lVar12 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      uVar8 = 0x70;
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x18) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 2;
      lVar11 = lVar12;
      func_0x000108f57dfc();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240b62c);
        (*pcVar3)();
      }
      lVar4 = lVar11;
      func_0x000107c5faec();
      func_0x000107c61170();
      puVar14 = PTR___sSSN_11034da80;
      *(undefined **)(lVar12 + 0x38) = PTR___sSSN_11034da80;
      func_0x00010075bbf0();
      *(long *)(lVar12 + 0x20) = lVar4;
      *(undefined8 *)(lVar12 + 0x28) = uVar8;
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e97958);
      uVar13 = ((undefined8 *)(unaff_x20 + _DAT_112e97958))[1];
      *(undefined **)(lVar12 + 0x60) = puVar14;
      *(long *)(lVar12 + 0x68) = lVar11;
      *(long *)(lVar12 + 0x40) = lVar11;
      *(undefined8 *)(lVar12 + 0x48) = uVar8;
      *(undefined8 *)(lVar12 + 0x50) = uVar13;
      func_0x000107c61434(uVar13);
      param_1 = 0x402520b7c2204025;
      param_2 = -0x5800000000000000;
      func_0x000107c5fb00(0x402520b7c2204025,0xa800000000000000,lVar12);
      lVar12 = param_1;
      lVar11 = param_2;
      goto LAB_10240b4f8;
    }
  }
  else if (bVar2 != 2) goto LAB_10240adfc;
LAB_10240b4e0:
  lVar12 = *(long *)(unaff_x20 + _DAT_112e97958);
  lVar11 = ((long *)(unaff_x20 + _DAT_112e97958))[1];
  param_1 = lVar11;
  func_0x000107c61434(lVar11);
LAB_10240b4f8:
  func_0x00010240e04c();
  lVar4 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  puVar14 = PTR___sSSN_11034da80;
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  lVar6 = lVar5;
  func_0x00010075bbf0();
  *(long *)(lVar5 + 0x40) = lVar6;
  *(long *)(lVar5 + 0x20) = lVar12;
  *(long *)(lVar5 + 0x28) = lVar11;
  func_0x000107c61434(lVar11);
  lStack_80 = param_2;
  func_0x000107c5fb00(param_1,param_2,lVar5);
  func_0x000107c6142c(param_2);
  FUN_10240e070();
  func_0x000107c613fc(lVar4,0x70,7);
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  *(undefined **)(lVar4 + 0x38) = puVar14;
  *(long *)(lVar4 + 0x40) = lVar6;
  *(long *)(lVar4 + 0x20) = lVar12;
  *(long *)(lVar4 + 0x28) = lVar11;
  *(undefined **)(lVar4 + 0x60) = puVar14;
  *(long *)(lVar4 + 0x68) = lVar6;
  *(long *)(lVar4 + 0x48) = lVar12;
  *(long *)(lVar4 + 0x50) = lVar11;
  func_0x000107c61434(lVar11);
  func_0x000107c5fb00(param_2,lStack_80,lVar4);
LAB_10240b5dc:
  func_0x000107c6142c(lStack_80);
  return param_1;
}



/* Entry: 10240b62c; end: 10240b723;  */

void FUN_10240b62c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar1 = *unaff_x20;
  lVar4 = unaff_x20[1] + 0x20;
  lVar5 = *(long *)(unaff_x20[1] + 0x10);
  if (lVar1 == 0) {
    if (lVar5 != 0) {
      FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
      param_1 = 0;
      do {
        uVar2 = *(ulong *)(lVar4 + param_1 * 8);
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c60118();
        func_0x000107c61170(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar5 = 0;
          goto LAB_10240b700;
        }
        param_1 = param_1 + 1;
      } while (lVar5 != param_1);
    }
  }
  else {
    func_0x000107c6157c(lVar1);
    FUN_10240cab4(param_1,lVar4,lVar5,lVar1 + 0x10,lVar1 + 0x20);
    func_0x000107c61574(lVar1);
    if (((uint)lVar4 & 0xff) != 1) {
LAB_10240b700:
      func_0x00010240d1e8(param_1,lVar5);
    }
  }
  return;
}



/* Entry: 10240b724; end: 10240b793; -[SCFanPassSelectionInterceptor interceptWithSelectionItem:isSelected:wasSelected:] */

uint FUN_10240b724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10240a678(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10240b794; end: 10240b9a7;  */

void FUN_10240b794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uVar5 = param_1;
  uVar7 = param_2;
  FUN_10240e468();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  pcStack_70 = FUN_10240b9a8;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de205c;
  puStack_78 = &UNK_110502b78;
  ppuVar1 = &puStack_90;
  func_0x000107c60bc4(ppuVar1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_68);
  lVar3 = 0x112d360a8;
  FUN_10240ba7c(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  puVar4 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
  uVar5 = 0;
  FUN_10240de54(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar6 = lVar3;
  func_0x000107c5fc48(lVar3,uVar5);
  func_0x000107c61574(lVar3);
  func_0x000107c48d50(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar6);
  func_0x000107c3e2c0(param_5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10240b9a8; end: 10240b9b3;  */

void FUN_10240b9a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10240b9b4; end: 10240ba13; -[SCFanPassSelectionInterceptor init] */

void FUN_10240b9b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSelectionInterceptor.FanPassSelectionInterceptor",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10240b9e0);
  (*pcVar1)();
}



/* Entry: 10240ba14; end: 10240ba7b; -[SCFanPassSelectionInterceptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240ba14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e97948);
  func_0x000107c61574(((undefined8 *)(param_1 + _DAT_112e97948))[1]);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e97928));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e97958 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e97950));
  return;
}



/* Entry: 10240ba7c; end: 10240baf3;  */

void FUN_10240ba7c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10240de54(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10240baf4; end: 10240bf9f;  */

undefined1  [16] FUN_10240baf4(undefined *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined *puStack_90;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  
  puVar11 = param_1;
  func_0x00010240bfd4();
  ppuVar4 = &puStack_78;
  uVar8 = 1;
  FUN_10240bfdc(ppuVar4,param_1,0,1,puVar11);
  uVar9 = (ulong)param_1 >> 0x3e;
  if (uVar9 == 0) {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    puVar12 = *(undefined **)(puVar10 + 0x10);
    if (puStack_78 == puVar12) goto LAB_10240beb4;
    if ((long)puStack_78 < 0) {
LAB_10240bf6c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bf70);
      (*pcVar3)();
    }
    puStack_90 = puStack_78;
    if ((long)puVar12 < (long)puStack_78) {
LAB_10240bf68:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bf6c);
      (*pcVar3)();
    }
LAB_10240bb6c:
    if ((((ulong)param_1 & 0xc000000000000001) == 0) || (puStack_90 == (undefined *)0x0)) {
      func_0x000107c61434(param_1);
      if (uVar9 != 0) goto LAB_10240bbe8;
LAB_10240bbc0:
      puVar11 = (undefined *)0x0;
      puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      uVar14 = (long)puStack_90 << 1;
LAB_10240bc30:
      uVar5 = 0;
      func_0x000107c605fc(0);
      puVar10 = puVar13;
      func_0x000107c615f4(puVar13,2);
      func_0x000107c61480();
      if (puVar10 == (undefined *)0x0) {
        func_0x000107c615e8(puVar13);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar15 = *(long *)(puVar10 + 0x10);
      func_0x000107c61574();
      if (SBORROW8(uVar14 >> 1,(long)puVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bf80);
        (*pcVar3)();
      }
      if (lVar15 != (uVar14 >> 1) - (long)puVar11) {
        func_0x000107c615e8();
        uVar8 = uVar14;
        goto LAB_10240bc18;
      }
      puVar10 = puVar13;
      func_0x000107c61480(puVar13,uVar5);
      func_0x000107c615e8(puVar13);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar10 == (undefined *)0x0) goto LAB_10240bca8;
    }
    else {
      uVar5 = 0;
      FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
      func_0x000107c61434(param_1);
      puVar11 = (undefined *)0x0;
      do {
        puVar10 = puVar11 + 1;
        func_0x000107c60318(puVar11,param_1,uVar5);
        puVar11 = puVar10;
      } while (puStack_90 != puVar10);
      if (uVar9 == 0) goto LAB_10240bbc0;
LAB_10240bbe8:
      func_0x000107c6142c(param_1);
      puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar11 = param_1;
      }
      puVar13 = (undefined *)0x0;
      func_0x000107c60484();
      uVar14 = uVar8;
      if ((uVar8 & 1) != 0) goto LAB_10240bc30;
LAB_10240bc18:
      puVar11 = puVar13;
      FUN_10240dbe0();
LAB_10240bca8:
      func_0x000107c615e8(puVar13);
      puVar10 = puVar11;
    }
    ppuStack_70 = ppuVar4;
    puStack_68 = puVar10;
    if ((long)puVar12 < (long)puStack_90) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bf74);
      (*pcVar3)();
    }
    if (uVar9 == 0) {
      puVar11 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar11 = param_1;
      }
      func_0x000107c60480();
    }
    if ((long)puVar11 < (long)puVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bf78);
      (*pcVar3)();
    }
    ppuVar1 = ppuVar4;
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      func_0x000107c61434(param_1);
      func_0x000107c6157c(ppuVar4);
      if (uVar9 != 0) goto LAB_10240bd68;
LAB_10240bd40:
      puVar11 = puStack_90;
      ppuVar2 = ppuStack_70;
      puStack_80 = (undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x20;
      puStack_90 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      puVar13 = puVar12;
    }
    else {
      if (puVar12 <= puStack_90) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bf7c);
        (*pcVar3)();
      }
      uVar5 = 0;
      FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
      func_0x000107c61434(param_1);
      func_0x000107c6157c(ppuVar4);
      puVar11 = puStack_90;
      do {
        puVar13 = puVar11 + 1;
        func_0x000107c60318(puVar11,param_1,uVar5);
        puVar11 = puVar13;
      } while (puVar12 != puVar13);
      if (uVar9 == 0) goto LAB_10240bd40;
LAB_10240bd68:
      func_0x000107c6142c(param_1);
      puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar11 = param_1;
      }
      func_0x000107c60484();
      puVar13 = (undefined *)(uVar8 >> 1);
      ppuVar2 = ppuStack_70;
      puStack_80 = puVar12;
    }
    for (; ppuStack_70 = ppuVar2, puVar11 != puVar13; puVar11 = puVar11 + 1) {
      if ((long)puVar13 <= (long)puVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bee0);
        (*pcVar3)();
      }
      uVar5 = *(undefined8 *)(puStack_80 + (long)puVar11 * 8);
      puVar7 = (ulong *)(puStack_68 + 0x20);
      lVar15 = *(long *)(puStack_68 + 0x10);
      if (ppuVar2 == (undefined **)0x0) {
        func_0x000107c61174(uVar5);
        if (lVar15 != 0) {
          FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
          do {
            uVar9 = *puVar7;
            func_0x000107c61174();
            uVar8 = uVar9;
            func_0x000107c60118();
            func_0x000107c61170(uVar9);
            if ((uVar8 & 1) != 0) goto LAB_10240bdc0;
            lVar15 = lVar15 + -1;
            puVar7 = puVar7 + 1;
          } while (lVar15 != 0);
        }
        lVar15 = 0;
LAB_10240bdb0:
        func_0x00010240c4e8(uVar5,lVar15);
      }
      else {
        uVar6 = uVar5;
        func_0x000107c61174();
        func_0x000107c6157c(ppuVar2);
        FUN_10240cab4(uVar6,puVar7,lVar15,ppuVar2 + 2,ppuVar2 + 4);
        func_0x000107c61574(ppuVar2);
        if (((uint)puVar7 & 0xff) == 1) goto LAB_10240bdb0;
      }
LAB_10240bdc0:
      func_0x000107c61170(uVar5);
      ppuVar1 = ppuStack_70;
      puVar10 = puStack_68;
      ppuVar2 = ppuStack_70;
    }
    func_0x000107c615e8(puStack_90);
    func_0x000107c61574(ppuVar4);
    ppuVar4 = ppuVar1;
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    puVar12 = puVar11;
    func_0x000107c60480();
    if (puStack_78 != puVar12) {
      if ((long)puStack_78 < 0) goto LAB_10240bf6c;
      puVar10 = puVar11;
      func_0x000107c60480();
      if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bfa0);
        (*pcVar3)();
      }
      func_0x000107c60480();
      puStack_90 = puStack_78;
      if ((long)puVar11 < (long)puStack_78) goto LAB_10240bf68;
      goto LAB_10240bb6c;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 != (undefined *)0x0) {
      puVar10 = puVar11;
      FUN_10240ca14();
      FUN_10240dcec(puVar10 + 0x20,puVar11);
      func_0x000107c6142c();
      if (param_1 != puVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240bf44);
        (*pcVar3)();
      }
      goto LAB_10240beb4;
    }
  }
  func_0x000107c6142c(param_1);
LAB_10240beb4:
  auVar16._8_8_ = puVar10;
  auVar16._0_8_ = ppuVar4;
  return auVar16;
}



/* Entry: 10240bfa0; end: 10240bfdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240bfa0(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c61170(param_1);
    }
    *(bool *)(lVar1 + _DAT_112e97940) = param_1 != 0;
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10240bfdc; end: 10240c3db;  */

undefined *
FUN_10240bfdc(undefined8 *param_1,undefined *param_2,undefined *param_3,char param_4,
             undefined *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = (ulong)param_2 >> 0x3e;
  if (uVar10 == 0) {
    puVar2 = *(undefined **)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      puVar2 = param_2;
    }
    func_0x000107c60480();
  }
  puVar8 = (undefined *)0x0;
  if (param_4 != '\x01') {
    puVar8 = param_3;
  }
  func_0x00010416d84c();
  if ((long)puVar2 <= (long)puVar8) {
    puVar2 = puVar8;
  }
  puVar8 = param_5;
  if ((long)param_5 <= (long)puVar2) {
    puVar8 = puVar2;
  }
  if (4 < (long)puVar8) {
    func_0x00010417051c(puVar8,param_5);
    FUN_10240cc20(param_1,param_2,puVar8 + 0x10,puVar8 + 0x20);
    return puVar8;
  }
  if (uVar10 == 0) {
    puVar2 = *(undefined **)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    if (puVar2 < (undefined *)0x2) {
LAB_10240c0e4:
      *param_1 = puVar2;
      return (undefined *)0x0;
    }
  }
  else {
    puVar2 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      puVar2 = param_2;
    }
    puVar8 = puVar2;
    func_0x000107c60480();
    func_0x000107c60480();
    if ((long)puVar8 < 2) goto LAB_10240c0e4;
  }
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar8 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480();
  }
  if ((long)puVar8 <= (long)puVar2) {
    puVar8 = puVar2;
  }
  uVar3 = 0;
  FUN_10240ce98(0,puVar8,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  if (uVar10 == 0) {
    puVar2 = *(undefined **)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      puVar2 = param_2;
    }
    func_0x000107c60480();
    if ((long)puVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10240c2d4);
      (*pcVar1)();
    }
  }
  if (puVar2 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240c28c);
          (*pcVar1)();
        }
        puVar4 = *(undefined **)(param_2 + (long)puVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar8;
        FUN_10240da1c(puVar8,param_2);
      }
      puVar5 = puVar4;
      func_0x00010240c2d4();
      if (((ulong)puVar5 & 1) != 0) {
        func_0x000107c6142c(uVar3);
        func_0x000107c61170(puVar4);
        *param_1 = puVar8;
        return (undefined *)0x0;
      }
      func_0x000107c61174();
      uVar7 = uVar3;
      func_0x000107c61550();
      if ((((int)uVar7 == 0) || ((long)uVar3 < 0)) || (uVar7 = uVar3, (uVar3 >> 0x3e & 1) != 0)) {
        if (uVar3 >> 0x3e == 0) {
          uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar6 = uVar3 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar6 = uVar3;
          }
          func_0x000107c60480(uVar6);
        }
        uVar7 = 0;
        FUN_10240ce98(0,uVar6 + 1,1,uVar3);
      }
      uVar9 = uVar7 & 0xffffffffffffff8;
      uVar6 = *(ulong *)(uVar9 + 0x10);
      uVar3 = uVar7;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_10240ce98(uVar3,uVar6 + 1,1,uVar7);
        uVar9 = uVar3 & 0xffffffffffffff8;
      }
      puVar8 = puVar8 + 1;
      *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
      *(undefined **)(uVar9 + uVar6 * 8 + 0x20) = puVar4;
      func_0x000107c61170(puVar4);
    } while (puVar2 != puVar8);
  }
  if (uVar10 == 0) {
    puVar2 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      puVar2 = param_2;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar3);
  *param_1 = puVar2;
  return (undefined *)0x0;
}



/* Entry: 10240c3dc; end: 10240c67f;  */

undefined1  [16] FUN_10240c3dc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *unaff_x20;
  lVar4 = unaff_x20[1] + 0x20;
  lVar6 = *(long *)(unaff_x20[1] + 0x10);
  if (lVar5 == 0) {
    if (lVar6 != 0) {
      FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
      lVar7 = 0;
      do {
        uVar2 = *(ulong *)(lVar4 + lVar7 * 8);
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c60118();
        func_0x000107c61170(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_10240c44c;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    lVar6 = 0;
  }
  else {
    func_0x000107c6157c(lVar5);
    lVar7 = param_1;
    FUN_10240cab4(param_1,lVar4,lVar6,lVar5 + 0x10,lVar5 + 0x20);
    func_0x000107c61574(lVar5);
    if (((uint)lVar4 & 0xff) != 1) {
LAB_10240c44c:
      uVar1 = 0;
      goto LAB_10240c4cc;
    }
  }
  func_0x00010240c4e8(param_1,lVar6);
  lVar7 = *(long *)(unaff_x20[1] + 0x10) + -1;
  uVar1 = 1;
LAB_10240c4cc:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar1;
  return auVar8;
}



/* Entry: 10240c680; end: 10240c7a7;  */

void FUN_10240c680(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
    uVar4 = *(ulong *)(lVar3 + 0x18) & 0x3f;
  }
  lVar5 = unaff_x20[1];
  uVar2 = *(ulong *)(lVar5 + 0x10);
  if ((uVar4 == 0) && (uVar2 < 0x10)) {
    lVar5 = 0;
  }
  else {
    func_0x00010416d84c();
    uVar1 = uVar4;
    if ((long)uVar4 <= (long)uVar2) {
      uVar1 = uVar2;
    }
    func_0x00010240c71c(lVar5,uVar1,0,uVar4);
  }
  func_0x000107c61574(lVar3);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 10240c7a8; end: 10240c8a3;  */

void FUN_10240c7a8(ulong *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + 0x20 + lVar4 * 8);
      uVar5 = *param_1;
      func_0x000107c61174(uVar2);
      func_0x000107c60114();
      lVar3 = 1L << (*param_1 & 0x3f);
      if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10240c8a4);
        (*pcVar1)();
      }
      uVar5 = lVar3 - 1U & uVar5;
      func_0x00010416d2e4();
      func_0x000107c61170(uVar2);
      while (uVar5 != 0) {
        func_0x00010416d53c();
      }
      lVar3 = lVar4 + 1;
      func_0x00010416d47c(lVar4,0);
      lVar4 = lVar3;
    } while (lVar3 != lVar6);
  }
  return;
}



/* Entry: 10240c8a4; end: 10240c8bf;  */

void FUN_10240c8a4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10240c8c0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10240c8c0; end: 10240ca13;  */

undefined * FUN_10240c8c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10240ca14);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e97990;
    FUN_10240ba7c(0x112e97990,&PTR_PTR_1126b3558,0x112e97998,&UNK_10daa2f60);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10240ca14; end: 10240cab3;  */

undefined * FUN_10240ca14(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e97990;
    FUN_10240ba7c(0x112e97990,&PTR_PTR_1126b3558,0x112e97998,&UNK_10daa2f60);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10240cab4; end: 10240cc1f;  */

ulong FUN_10240cab4(undefined8 param_1,long param_2,undefined8 param_3,ulong *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar2 = *param_4;
  func_0x000107c60114();
  lVar8 = 1L << (*param_4 & 0x3f);
  if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10240cc20);
    (*pcVar1)();
  }
  uVar2 = lVar8 - 1U & uVar2;
  func_0x00010416d2e4();
  uVar6 = (uint)param_4;
  func_0x00010416d438();
  if ((uVar6 & 0xff) != 1) {
    FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
    uVar3 = *(ulong *)(param_2 + uVar2 * 8);
    func_0x000107c61174();
    uVar4 = uVar3;
    uVar7 = param_1;
    func_0x000107c60118();
    func_0x000107c61170();
    while ((uVar4 & 1) == 0) {
      uVar6 = (uint)uVar7;
      func_0x00010416d53c();
      func_0x00010416d438();
      if ((uVar6 & 0xff) == 1) {
        return uVar3;
      }
      uVar5 = *(ulong *)(param_2 + uVar3 * 8);
      func_0x000107c61174();
      uVar4 = uVar5;
      uVar7 = param_1;
      func_0x000107c60118();
      func_0x000107c61170();
      uVar2 = uVar3;
      uVar3 = uVar5;
    }
  }
  return uVar2;
}



/* Entry: 10240cc20; end: 10240ce97;  */

undefined8 FUN_10240cc20(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar10 = param_2;
    }
    func_0x000107c60480();
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10240ce60);
      (*pcVar2)();
    }
  }
  if (uVar10 != 0) {
    lVar1 = param_2 + 0x20;
    uVar9 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10240ce64);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(lVar1 + uVar9 * 8);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar9;
        FUN_10240da1c(uVar9,param_2);
      }
      func_0x000107c60114();
      if (SBORROW8(1L << (*param_3 & 0x3f),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10240ce48);
        (*pcVar2)();
      }
      puVar6 = param_3;
      func_0x00010416d2e4();
      uVar5 = (uint)puVar6;
      func_0x000107c61170();
      func_0x00010416d438();
      while ((uVar5 & 0xff) != 1) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10240ce40);
            (*pcVar2)();
          }
          if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10240ce44);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(lVar1 + uVar3 * 8);
          uVar8 = *(ulong *)(lVar1 + uVar9 * 8);
          func_0x000107c61174();
          func_0x000107c61174();
        }
        else {
          FUN_10240da1c();
          uVar8 = uVar9;
          FUN_10240da1c(uVar9,param_2);
        }
        FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
        uVar4 = uVar3;
        uVar7 = uVar8;
        func_0x000107c60118();
        uVar5 = (uint)uVar7;
        func_0x000107c61170(uVar3);
        func_0x000107c61170();
        if ((uVar4 & 1) != 0) {
          *param_1 = uVar9;
          return 0;
        }
        func_0x00010416d53c();
        func_0x00010416d438();
        uVar3 = uVar8;
      }
      uVar3 = uVar9 + 1;
      func_0x00010416d47c(uVar9,0);
      uVar9 = uVar3;
    } while (uVar3 != uVar10);
  }
  *param_1 = uVar10;
  return 1;
}



/* Entry: 10240ce98; end: 10240cfbf;  */

ulong FUN_10240ce98(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10240cfc0);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10240ca14(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10240cfbc);
      (*pcVar1)();
    }
    FUN_10240d0d0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10240cfc0; end: 10240d0af;  */

undefined * FUN_10240cfc0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10240d0b0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e97988;
    func_0x0001000285a8(0x112e97988,&UNK_10daa2e30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10240d0b0; end: 10240d0cf;  */

void FUN_10240d0b0(void)

{
  func_0x000107c61168(&PTR_PTR_11283cac8);
  return;
}



/* Entry: 10240d0d0; end: 10240d383;  */

long FUN_10240d0d0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10240d1e4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10240d1e8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10240d1e0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10240d384; end: 10240d5bf;  */

void FUN_10240d384(ulong *param_1,undefined8 param_2,ulong *param_3,long param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  puVar3 = param_3;
  func_0x00010416d2e4();
  func_0x00010416d53c();
  if (puVar3 != (ulong *)0x0) {
    puVar4 = param_3;
    puVar7 = param_1;
    func_0x00010416e890(param_3,param_1,param_2);
    puVar5 = puVar4;
    do {
      func_0x00010416d438();
      if (((uint)puVar7 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10240d5c0);
        (*pcVar2)();
      }
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10240d5ac);
        (*pcVar2)();
      }
      if (*(ulong **)(*(long *)(param_4 + 8) + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10240d5b0);
        (*pcVar2)();
      }
      uVar10 = *param_1;
      puVar5 = *(ulong **)(*(long *)(param_4 + 8) + (long)puVar5 * 8 + 0x20);
      func_0x000107c61174();
      func_0x000107c60114();
      func_0x000107c61170();
      uVar6 = (uint)puVar7;
      lVar8 = 1L << (*param_1 & 0x3f);
      uVar1 = lVar8 - 1;
      if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10240d5b4);
        (*pcVar2)();
      }
      uVar10 = uVar1 & uVar10;
      if ((long)param_3 < (long)puVar4) {
        if ((long)puVar4 <= (long)uVar10 || (long)uVar10 <= (long)param_3) {
LAB_10240d4f4:
          func_0x00010416d438();
          if ((uVar6 & 0xff) == 1) {
            puVar5 = (ulong *)0x0;
          }
          else {
            lVar8 = (long)puVar5 - ((long)param_1[1] >> 6);
            puVar5 = (ulong *)((uVar1 & lVar8 >> 0x3f) + lVar8 ^ uVar1);
          }
          puVar7 = param_3;
          func_0x00010416e53c(puVar5,param_3,param_1,param_2);
        }
      }
      else if ((long)puVar4 <= (long)uVar10 && (long)uVar10 <= (long)param_3) goto LAB_10240d4f4;
      func_0x00010416d53c();
    } while (puVar3 != (ulong *)0x0);
  }
  func_0x00010416e53c(0,param_3,param_1,param_2);
  if (SCARRY8(param_5,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10240d5b8);
    (*pcVar2)();
  }
  if (param_5 <= param_5 + 1) {
    uVar9 = *(undefined8 *)(param_4 + 8);
    func_0x000107c6157c(uVar9);
    FUN_10240d5c0(param_5,param_5 + 1,uVar9,param_1,param_2);
    func_0x000107c61574(uVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10240d5bc);
  (*pcVar2)();
}



/* Entry: 10240d5c0; end: 10240da07;  */

/* WARNING: Possible PIC construction at 0x00010240d724: Changing call to branch */

void FUN_10240d5c0(ulong param_1,ulong param_2,long param_3,ulong *param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9ec);
    (*pcVar1)();
  }
  if (0 < lVar9) {
    uVar10 = *(ulong *)(param_3 + 0x10);
    if ((long)param_1 < (long)(uVar10 - lVar9) / 2) {
      uVar2 = *param_4 & 0x3f;
      func_0x00010416d7dc();
      lVar7 = SUB168(SEXT816((long)uVar2) * SEXT816(0x5555555555555556),8);
      if ((long)param_1 < lVar7 - (lVar7 >> 0x3f)) {
        if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9fc);
          (*pcVar1)();
        }
        if (uVar10 < param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240da00);
          (*pcVar1)();
        }
        func_0x000107c6157c(param_3);
        if (param_1 != 0) {
          uVar10 = 0;
          do {
            uVar3 = *(undefined8 *)(param_3 + 0x20 + uVar10 * 8);
            uVar2 = *param_4;
            func_0x000107c61174(uVar3);
            func_0x000107c60114();
            lVar7 = 1L << (*param_4 & 0x3f);
            if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9dc);
              (*pcVar1)();
            }
            uVar2 = lVar7 - 1U & uVar2;
            puVar6 = param_4;
            func_0x00010416d2e4();
            uVar4 = uVar2;
            while ((uVar2 != 0 &&
                   (func_0x00010416d438(), ((uint)puVar6 & 0xff) == 1 || uVar4 != uVar10))) {
              func_0x00010416d53c();
            }
            lVar7 = uVar10 + lVar9;
            if (SCARRY8(uVar10,lVar9)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9e0);
              (*pcVar1)();
            }
            uVar10 = uVar10 + 1;
            func_0x00010416d47c(lVar7,0);
            func_0x000107c61170(uVar3);
          } while (uVar10 != param_1);
        }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(param_3);
        return;
      }
      lVar7 = 0;
      puVar6 = param_4;
      func_0x00010416d2e4();
      uVar5 = (uint)puVar6;
      func_0x00010416d438();
      if ((uVar5 & 0xff) != 1 && lVar7 < (long)param_1) {
        if (SCARRY8(lVar7,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9e4);
          (*pcVar1)();
        }
        func_0x00010416d47c();
      }
      func_0x00010416d53c();
      lVar8 = (long)param_4[1] >> 6;
      lVar7 = lVar8 - lVar9;
      if (SBORROW8(lVar8,lVar9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9f4);
        (*pcVar1)();
      }
      lVar9 = 1L << (*param_4 & 0x3f);
      uVar10 = lVar9 - 1;
      if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9f8);
        (*pcVar1)();
      }
      lVar7 = (uVar10 & lVar7 >> 0x3f) + lVar7;
      uVar2 = 0;
      if ((long)uVar10 <= lVar7) {
        uVar2 = uVar10;
      }
      param_4[1] = param_4[1] & 0x3f | (lVar7 - uVar2) * 0x40;
    }
    else {
      if (SBORROW8(uVar10,param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9f0);
        (*pcVar1)();
      }
      uVar2 = *param_4 & 0x3f;
      func_0x00010416d7dc();
      lVar7 = SUB168(SEXT816((long)uVar2) * SEXT816(0x5555555555555556),8);
      if ((long)(uVar10 - param_2) < lVar7 - (lVar7 >> 0x3f)) {
        if ((long)uVar10 < (long)param_2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240da04);
          (*pcVar1)();
        }
        if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240da08);
          (*pcVar1)();
        }
        func_0x000107c6157c(param_3);
        if (param_2 != uVar10) {
          do {
            uVar3 = *(undefined8 *)(param_3 + 0x20 + param_2 * 8);
            uVar2 = *param_4;
            func_0x000107c61174(uVar3);
            func_0x000107c60114();
            lVar7 = 1L << (*param_4 & 0x3f);
            if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d9e8);
              (*pcVar1)();
            }
            uVar2 = lVar7 - 1U & uVar2;
            puVar6 = param_4;
            func_0x00010416d2e4();
            uVar4 = uVar2;
            while ((uVar2 != 0 &&
                   (func_0x00010416d438(), ((uint)puVar6 & 0xff) == 1 || uVar4 != param_2))) {
              func_0x00010416d53c();
            }
            uVar2 = param_2 + 1;
            func_0x00010416d47c(param_2 - lVar9,0);
            func_0x000107c61170(uVar3);
            param_2 = uVar2;
          } while (uVar2 != uVar10);
        }
        goto code_r0x000107c61574;
      }
      lVar7 = 0;
      func_0x00010416d2e4();
      uVar5 = (uint)param_4;
      func_0x00010416d438();
      if ((uVar5 & 0xff) != 1 && (long)param_2 <= lVar7) {
        if (SBORROW8(lVar7,lVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10240d904);
          (*pcVar1)();
        }
        func_0x00010416d47c();
      }
      func_0x00010416d53c();
    }
  }
  return;
}



/* Entry: 10240da08; end: 10240da1b;  */

/* WARNING: Removing unreachable block (ram,0x00010240c8e0) */
/* WARNING: Removing unreachable block (ram,0x00010240c8f0) */
/* WARNING: Removing unreachable block (ram,0x00010240ca10) */
/* WARNING: Removing unreachable block (ram,0x00010240c8fc) */
/* WARNING: Removing unreachable block (ram,0x00010240c904) */
/* WARNING: Removing unreachable block (ram,0x00010240c99c) */
/* WARNING: Removing unreachable block (ram,0x00010240c9a4) */
/* WARNING: Removing unreachable block (ram,0x00010240c9a8) */
/* WARNING: Removing unreachable block (ram,0x00010240c9ac) */
/* WARNING: Removing unreachable block (ram,0x00010240c9bc) */

undefined * FUN_10240da08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e97990;
    FUN_10240ba7c(0x112e97990,&PTR_PTR_1126b3558,0x112e97998,&UNK_10daa2f60);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
  }
  uVar5 = 0;
  FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 10240da1c; end: 10240dbdf;  */

ulong FUN_10240da1c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10240db00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10240db04);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b3558;
    func_0x000107c61168(PTR_PTR_1126b3558);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b3558;
    func_0x000107c61168(PTR_PTR_1126b3558);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10240dbe0);
  (*pcVar2)();
}



/* Entry: 10240dbe0; end: 10240dceb;  */

undefined * FUN_10240dbe0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10240dcec);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112e97990;
      FUN_10240ba7c(0x112e97990,&PTR_PTR_1126b3558,0x112e97998,&UNK_10daa2f60);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10240dce8);
      (*pcVar3)();
    }
    uVar6 = 0;
    FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 8,lVar2,uVar6);
  }
  return puVar4;
}



/* Entry: 10240dcec; end: 10240de53;  */

ulong FUN_10240dcec(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10240de54);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10240de48);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_10240de54(0,0x112e97990,&PTR_PTR_1126b3558);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10240de4c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10240de50);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_10240da1c(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10240de54; end: 10240de93;  */

void FUN_10240de54(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10240de94; end: 10240dffb;  */

int FUN_10240de94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10240df10;
        goto LAB_10240def4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10240def4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10240df10:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10240dffc; end: 10240e03b;  */

void FUN_10240dffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e979a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa2e88;
  func_0x000107c61520(&UNK_10daa2e88,&UNK_110502c20);
  puRam0000000112e979a0 = puVar1;
  return;
}



/* Entry: 10240e03c; end: 10240e06f;  */

void FUN_10240e03c(long param_1,long param_2)

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



/* Entry: 10240e070; end: 10240e467;  */

undefined1  [16] FUN_10240e070(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffcb;
  func_0x000107c5fadc(0xd000000000000035,0x800000010f099b00);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f099a90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10240e13c);
  (*pcVar1)();
}



/* Entry: 10240e468; end: 10240e473;  */

undefined1  [16] FUN_10240e468(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6b6f;
  func_0x000107c5fadc(0x6b6f,0xe200000000000000);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f099a90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10240e524);
  (*pcVar1)();
}



/* Entry: 10240e474; end: 10240e523;  */

undefined1  [16] FUN_10240e474(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f099a90);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10240e524);
  (*pcVar1)();
}



/* Entry: 10240e524; end: 10240e56b; -[SCPlanGroupSelectionInterceptor uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240e524(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e979a8;
  func_0x000107c61428(param_1 + _DAT_112e979a8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10240e56c; end: 10240e5cf; -[SCPlanGroupSelectionInterceptor setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240e56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e979a8;
  func_0x000107c61428(param_1 + _DAT_112e979a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10240e5d0; end: 10240e807;  */

/* WARNING: Removing unreachable block (ram,0x00010240e804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10240e5d0(undefined **param_1,ulong param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined **ppuVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar5 = param_2;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar1 = param_1;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  ppuVar9 = ppuVar1;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar1);
  ppuVar1 = ppuVar9;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c61170(ppuVar9);
  ppuVar9 = &PTR____CFConstantStringClassReference_110f52c98;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c98);
  if (ppuVar1 == ppuVar9 && uVar5 == uVar6) {
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar6);
    if ((param_2 & 1) == 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
  }
  else {
    uVar7 = uVar5;
    func_0x000107c605b8(ppuVar1,uVar5,ppuVar9,uVar6,0);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar6);
    if ((param_2 & 1) == 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if (((ulong)ppuVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = 0;
  FUN_10240eb2c();
  lVar8 = _DAT_112e979a8;
  func_0x000107c61428(unaff_x20 + _DAT_112e979a8,auStack_68,0,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (lVar8 == 0) {
    func_0x000107c6142c(uVar7);
  }
  else {
    func_0x000107c615f0(lVar8);
    pcVar3 = "presentAlert(message:)";
    func_0x0001000c10c0("presentAlert(message:)");
    func_0x000107c61180();
    puVar4 = &UNK_110502d20;
    func_0x000107c613fc(&UNK_110502d20,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar2;
    *(ulong *)(puVar4 + 0x18) = uVar7;
    *(long *)(puVar4 + 0x20) = lVar8;
    uStack_78 = 0x10240eadc;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_110502d38;
    ppuVar1 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar1);
    puVar4 = puStack_70;
    func_0x000107c615f0(lVar8);
    func_0x000107c61434(uVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c6142c(uVar7);
    func_0x000107c615e8(lVar8);
    func_0x000107c615e8(pcVar3);
  }
  return 1;
}



/* Entry: 10240e808; end: 10240e877; -[SCPlanGroupSelectionInterceptor interceptWithSelectionItem:isSelected:wasSelected:] */

uint FUN_10240e808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10240e5d0(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10240e878; end: 10240ea43;  */

void FUN_10240e878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  long lStack_58;
  
  ppuVar1 = &puStack_80;
  uVar6 = param_1;
  uVar8 = param_2;
  func_0x00010240ebfc();
  uVar9 = uVar8;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar8);
  pcStack_60 = FUN_10240ea44;
  lStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100de205c;
  puStack_68 = &UNK_110502d60;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(uVar6);
  lVar3 = lStack_58;
  func_0x000107c61574();
  func_0x00010240ecb4();
  lVar4 = lVar3;
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = puVar2;
  puVar5 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(lVar3,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fadc(param_1,param_2);
  uVar6 = 0;
  func_0x000100dfe1a0(0);
  lVar7 = lVar4;
  func_0x000107c5fc48(lVar4,uVar6);
  func_0x000107c61574(lVar4);
  func_0x000107c48d50(puVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar7);
  func_0x000107c3e2c0(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 10240ea44; end: 10240ea4f;  */

void FUN_10240ea44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10240ea50; end: 10240ea97; -[SCPlanGroupSelectionInterceptor init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240ea50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e979a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10240ea98; end: 10240eacb;  */

void FUN_10240ea98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10240eacc; end: 10240eb03; -[SCPlanGroupSelectionInterceptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10240eacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e979a8));
  return;
}


