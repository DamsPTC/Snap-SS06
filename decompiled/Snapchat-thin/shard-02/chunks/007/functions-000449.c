/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10200cfcc; end: 10200d02b; -[_TtC31DeleteStorySnapScopeGraphBridge46DeleteStorySnapScopeGraphBridgeSaberEntryPoint init] */

void FUN_10200cfcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeleteStorySnapScopeGraphBridge.DeleteStorySnapScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200cff8);
  (*pcVar1)();
}



/* Entry: 10200d02c; end: 10200d063; -[_TtC31DeleteStorySnapScopeGraphBridge46DeleteStorySnapScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010200d048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200d04c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fa40));
  return;
}



/* Entry: 10200d064; end: 10200d08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d064(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4fa48),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4fa40));
  return;
}



/* Entry: 10200d08c; end: 10200d0ab;  */

void FUN_10200d08c(void)

{
  func_0x000107c61168(&PTR_PTR_112816810);
  return;
}



/* Entry: 10200d0ac; end: 10200d133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10200d0ac(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4fa78) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4fa80);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10200d134);
  (*pcVar2)();
}



/* Entry: 10200d134; end: 10200d21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10200d134(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4fa78);
  *(undefined **)(unaff_x20 + _DAT_112e4fa78) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4fa80);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4fa80))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bbce8;
  func_0x000107c613fc(&UNK_1104bbce8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10200d220,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10200d21c; end: 10200d227;  */

void FUN_10200d21c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10200d228; end: 10200d287; -[_TtC31DeleteStorySnapScopeGraphBridge46SCDeleteStorySnapScopedServicesSaberEntryPoint init] */

void FUN_10200d228(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeleteStorySnapScopeGraphBridge.SCDeleteStorySnapScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200d254);
  (*pcVar1)();
}



/* Entry: 10200d288; end: 10200d2bf; -[_TtC31DeleteStorySnapScopeGraphBridge46SCDeleteStorySnapScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d288(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4fa80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fa78));
  return;
}



/* Entry: 10200d2c0; end: 10200d2c3;  */

void FUN_10200d2c0(void)

{
  return;
}



/* Entry: 10200d2c4; end: 10200d2e3;  */

void FUN_10200d2c4(void)

{
  FUN_10200d134();
  return;
}



/* Entry: 10200d2e4; end: 10200d303;  */

void FUN_10200d2e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128168d8);
  return;
}



/* Entry: 10200d304; end: 10200d3d3;  */

undefined8 FUN_10200d304(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e4fab0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10200d3d4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10200d3d4; end: 10200d3f3;  */

void FUN_10200d3d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128169a0);
  return;
}



/* Entry: 10200d3f4; end: 10200d40f;  */

void FUN_10200d3f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4fab8,&UNK_10da4cf48);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10200d47c,param_1);
  return;
}



/* Entry: 10200d410; end: 10200d47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d410(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10200d3d4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e4fac0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10200d47c; end: 10200d483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d47c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10200d3d4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e4fac0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10200d484; end: 10200d4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d484(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4fac0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10200d4d0; end: 10200d52f; -[_TtC31DeleteStorySnapScopeGraphBridge39DeleteStorySnapScopeGraphBridgeServices init] */

void FUN_10200d4d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeleteStorySnapScopeGraphBridge.DeleteStorySnapScopeGraphBridgeServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200d4fc);
  (*pcVar1)();
}



/* Entry: 10200d530; end: 10200d53f; -[_TtC31DeleteStorySnapScopeGraphBridge39DeleteStorySnapScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4fac0));
  return;
}



/* Entry: 10200d540; end: 10200d5cb;  */

void FUN_10200d540(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10200d580,0);
  return;
}



/* Entry: 10200d5cc; end: 10200d5e7;  */

void FUN_10200d5cc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10200d638,param_1);
  return;
}



/* Entry: 10200d5e8; end: 10200d637;  */

void FUN_10200d5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10200d638; end: 10200d66b;  */

void FUN_10200d638(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10200d66c; end: 10200d673;  */

undefined8 FUN_10200d66c(void)

{
  return 0x1b;
}



/* Entry: 10200d674; end: 10200d7eb;  */

void FUN_10200d674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bbd30;
  func_0x000107c613fc(&UNK_1104bbd30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10200d7ec,puVar1);
  return;
}



/* Entry: 10200d7ec; end: 10200d7f3;  */

void FUN_10200d7ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4fab0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4fab0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bbe08;
  func_0x000107c613fc(&UNK_1104bbe08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10200d8c0;
  func_0x00010058fa64(0x10200d8c0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10200d7f4; end: 10200d84f;  */

void FUN_10200d7f4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4fab0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4fab0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10200d850; end: 10200d8c7;  */

undefined ** FUN_10200d850(void)

{
  return &PTR_DAT_112ff1928;
}



/* Entry: 10200d8c8; end: 10200d90f; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d8c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fb18;
  func_0x000107c61428(param_1 + _DAT_112e4fb18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10200d910; end: 10200d967; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d910(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fb18;
  func_0x000107c61428(param_1 + _DAT_112e4fb18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10200d968; end: 10200d9af; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d968(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fb20;
  func_0x000107c61428(param_1 + _DAT_112e4fb20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10200d9b0; end: 10200d9bb; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fb20;
  func_0x000107c61428(param_1 + _DAT_112e4fb20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10200d9bc; end: 10200da03; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint deleteStorySnapScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200d9bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fb28;
  func_0x000107c61428(param_1 + _DAT_112e4fb28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10200da04; end: 10200da0f; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint setDeleteStorySnapScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200da04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fb28;
  func_0x000107c61428(param_1 + _DAT_112e4fb28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10200da10; end: 10200da6f;  */

void FUN_10200da10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10200da70; end: 10200dc2b;  */

/* WARNING: Possible PIC construction at 0x00010200db88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200dbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200dbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200dc00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200dbc0) */
/* WARNING: Removing unreachable block (ram,0x00010200dbb0) */
/* WARNING: Removing unreachable block (ram,0x00010200db8c) */
/* WARNING: Removing unreachable block (ram,0x00010200dc04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200da70(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c41748();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_10200d08c();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10200d304();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10200dc2c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e4fa40) = lVar5;
      *(long *)(lVar3 + _DAT_112e4fa48) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10200dc2c; end: 10200dc53; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10200dc2c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10200da70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10200dc54; end: 10200dc97; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint end] */

void FUN_10200dc54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10200dc98; end: 10200de9b;  */

void FUN_10200dc98(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0fa9740)) &&
           (func_0x000107c605b8(0xd00000000000002e,0x800000010f0568c0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DeleteStorySnapScopeGraphBridge/SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x56,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10200de9c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53fec();
        goto LAB_10200dd24;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
LAB_10200dd24:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10200de9c; end: 10200df47; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10200de9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10200dc98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10200df48; end: 10200dfbf; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200df48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4fb18,0);
  *(undefined8 *)(param_1 + _DAT_112e4fb20) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4fb28) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4fb30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10200dfc0; end: 10200dff3;  */

void FUN_10200dfc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10200dff4; end: 10200e04b; -[SCDeleteStorySnapScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010200e020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200e024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200dff4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4fb18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fb20));
  return;
}



/* Entry: 10200e04c; end: 10200e06b;  */

void FUN_10200e04c(void)

{
  func_0x000107c61168(&PTR_PTR_112816a60);
  return;
}



/* Entry: 10200e06c; end: 10200e0b3; -[SCSCDeleteStorySnapScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e06c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4fb60;
  func_0x000107c61428(param_1 + _DAT_112e4fb60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10200e0b4; end: 10200e10b; -[SCSCDeleteStorySnapScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4fb60;
  func_0x000107c61428(param_1 + _DAT_112e4fb60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10200e10c; end: 10200e1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e10c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_10200d2e4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4fa78) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10200e1e4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4fa80);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4fb68);
    *(long **)(unaff_x20 + _DAT_112e4fb68) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10200e1e4; end: 10200e20b; -[SCSCDeleteStorySnapScopedServicesSaberEntryPoint begin] */

void FUN_10200e1e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10200e10c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10200e20c; end: 10200e383;  */

/* WARNING: Possible PIC construction at 0x00010200e274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010200e30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200e278) */
/* WARNING: Removing unreachable block (ram,0x00010200e310) */
/* WARNING: Removing unreachable block (ram,0x00010200e328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e20c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4fb68);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10200e384; end: 10200e38b;  */

void FUN_10200e384(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10200e38c; end: 10200e3bf; -[SCSCDeleteStorySnapScopedServicesSaberEntryPoint end] */

void FUN_10200e38c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10200e20c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10200e3c0; end: 10200e4df;  */

void FUN_10200e3c0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "DeleteStorySnapScopeGraphBridge/SCSCDeleteStorySnapScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10200e4e0);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10200e4e0; end: 10200e58b; -[SCSCDeleteStorySnapScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10200e4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10200e3c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10200e58c; end: 10200e5eb; -[SCSCDeleteStorySnapScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e58c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4fb60,0);
  *(undefined8 *)(param_1 + _DAT_112e4fb68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10200e5ec; end: 10200e61f;  */

void FUN_10200e5ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10200e620; end: 10200e657; -[SCSCDeleteStorySnapScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e620(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4fb60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fb68));
  return;
}



/* Entry: 10200e658; end: 10200e677;  */

void FUN_10200e658(void)

{
  func_0x000107c61168(&PTR_PTR_112816b30);
  return;
}



/* Entry: 10200e678; end: 10200e6e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e678(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10200ea6c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4fba0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10200e6e4; end: 10200e74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e6e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4fba0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10200e750; end: 10200e7af; -[_TtC43MyStorySettingsScopedFactoryServiceProvider31SCMyStorySettingsScopedServices init] */

void FUN_10200e750(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStorySettingsScopedFactoryServiceProvider.SCMyStorySettingsScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200e77c);
  (*pcVar1)();
}



/* Entry: 10200e7b0; end: 10200e7bf; -[_TtC43MyStorySettingsScopedFactoryServiceProvider31SCMyStorySettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4fba0));
  return;
}



/* Entry: 10200e7c0; end: 10200e82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200e7c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bc020;
  func_0x000107c613fc(&UNK_1104bc020,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10200eb04,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10200e82c; end: 10200e8c7;  */

void FUN_10200e82c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bbf30;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bbf30;
  return;
}



/* Entry: 10200e8c8; end: 10200e8ff;  */

void FUN_10200e8c8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10200e900; end: 10200e907;  */

undefined8 FUN_10200e900(void)

{
  return 0x1b;
}



/* Entry: 10200e908; end: 10200ea3b;  */

void FUN_10200e908(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bc048;
  func_0x000107c613fc(&UNK_1104bc048,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10200eadc;
  func_0x00010058fa64(FUN_10200eadc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10200ea3c; end: 10200ea6b;  */

undefined ** FUN_10200ea3c(void)

{
  return &PTR_DAT_112ff1a58;
}



/* Entry: 10200ea6c; end: 10200ea8b;  */

void FUN_10200ea6c(void)

{
  func_0x000107c61168(&PTR_PTR_112816bf0);
  return;
}



/* Entry: 10200ea8c; end: 10200eadb;  */

undefined1  [16] FUN_10200ea8c(void)

{
  return ZEXT816(0x1104bbf80);
}



/* Entry: 10200eadc; end: 10200eb03;  */

void FUN_10200eadc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10200eb04; end: 10200eb07;  */

void FUN_10200eb04(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10200eb08; end: 10200ebc7;  */

/* WARNING: Possible PIC construction at 0x00010200eba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200eba8) */

void FUN_10200eb08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104bc0d0;
  func_0x000107c613fc(&UNK_1104bc0d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112e4fc10;
  func_0x0001000285a8(0x112e4fc10,&UNK_10da4d3c0);
  func_0x000107c613fc();
  pcVar3 = FUN_10200ef9c;
  func_0x0001000841fc(FUN_10200ef9c,puVar1,uVar2);
  func_0x000100084214(&UNK_10da4d390,0x2d,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10200ebc8; end: 10200ebe3;  */

/* WARNING: Possible PIC construction at 0x00010200eba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200eba8) */

void FUN_10200ebc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1104bc0d0;
  func_0x000107c613fc(&UNK_1104bc0d0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e4fc10;
  func_0x0001000285a8(0x112e4fc10,&UNK_10da4d3c0);
  func_0x000107c613fc();
  pcVar4 = FUN_10200ef9c;
  func_0x0001000841fc(FUN_10200ef9c,puVar2,uVar3);
  func_0x000100084214(&UNK_10da4d390,0x2d,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10200ebe4; end: 10200ef67;  */

void FUN_10200ebe4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e4fc18,&UNK_10da4d3c8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10201021c();
  func_0x000100082720("SCStoryPrivacySettingsScopeExposerSubjectServiceProvider",0x38,2);
  puVar3 = puVar2;
  FUN_1020102a8();
  func_0x000100082720("SCStoryPrivacySettingsScopeExposerObservableServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10200e8c8;
  func_0x0001000823a8(FUN_10200e8c8,0);
  func_0x000100082720("SCMyStorySettingsScopedServicesCleanupRelayServiceProvider",0x3a,2);
  puVar5 = puVar2;
  FUN_1020100d0();
  func_0x000100082720("MyStorySettingsScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4fc20,&UNK_10da4d3e0);
  puVar6 = &UNK_1104bc0f8;
  func_0x000107c613fc(&UNK_1104bc0f8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10200efa8;
  func_0x0001000823a8(0x10200efa8,puVar6);
  func_0x000100082720("SCMyStorySettingsEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e4fc28,&UNK_10da4d3d0);
  puVar6 = &UNK_1104bc120;
  func_0x000107c613fc(&UNK_1104bc120,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10200efb8;
  func_0x0001000823a8(0x10200efb8,puVar6);
  func_0x000100082720("SCMyStorySettingsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4fba8,&UNK_10da4d180);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10200efc4;
  func_0x0001000823a8(0x10200efc4,uVar7);
  func_0x000100082720("SCMyStorySettingsScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4fb98,&UNK_10da4d170);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10200efcc;
  func_0x0001000823a8(0x10200efcc,uVar8);
  func_0x000100082720("SCMyStorySettingsScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104bc148;
  func_0x000107c613fc(&UNK_1104bc148,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10200efd4;
  func_0x0001000823a8(0x10200efd4,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCMyStorySettingsScopeEntryPointProvider",0x28,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10200ef68; end: 10200ef9b;  */

void FUN_10200ef68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10200ef9c; end: 10200efdb;  */

void FUN_10200ef9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e4fc18,&UNK_10da4d3c8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10201021c();
  func_0x000100082720("SCStoryPrivacySettingsScopeExposerSubjectServiceProvider",0x38,2);
  puVar3 = puVar2;
  FUN_1020102a8();
  func_0x000100082720("SCStoryPrivacySettingsScopeExposerObservableServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10200e8c8;
  func_0x0001000823a8(FUN_10200e8c8,0);
  func_0x000100082720("SCMyStorySettingsScopedServicesCleanupRelayServiceProvider",0x3a,2);
  puVar5 = puVar2;
  FUN_1020100d0();
  func_0x000100082720("MyStorySettingsScopeGraphBridgeServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e4fc20,&UNK_10da4d3e0);
  puVar6 = &UNK_1104bc0f8;
  func_0x000107c613fc(&UNK_1104bc0f8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x10200efa8;
  func_0x0001000823a8(0x10200efa8,puVar6);
  func_0x000100082720("SCMyStorySettingsEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112e4fc28,&UNK_10da4d3d0);
  puVar6 = &UNK_1104bc120;
  func_0x000107c613fc(&UNK_1104bc120,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x10200efb8;
  func_0x0001000823a8(0x10200efb8,puVar6);
  func_0x000100082720("SCMyStorySettingsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e4fba8,&UNK_10da4d180);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10200efc4;
  func_0x0001000823a8(0x10200efc4,uVar8);
  func_0x000100082720("SCMyStorySettingsScopeInitializationServiceProvider",0x33,2);
  func_0x0001000285a8(0x112e4fb98,&UNK_10da4d170);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x10200efcc;
  func_0x0001000823a8(0x10200efcc,uVar9);
  func_0x000100082720("SCMyStorySettingsScopedServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104bc148;
  func_0x000107c613fc(&UNK_1104bc148,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x10200efd4;
  func_0x0001000823a8(0x10200efd4,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCMyStorySettingsScopeEntryPointProvider",0x28,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 10200efdc; end: 10200f637;  */

void FUN_10200efdc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_10200f788();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e4fc30,&UNK_10da4d3e8);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar6 = PTR_PTR_1126a9de0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar4 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f056bb0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f056bd0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar7 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f056c00);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f056c30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  return;
}



/* Entry: 10200f638; end: 10200f67b;  */

void FUN_10200f638(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10200f67c; end: 10200f683;  */

undefined8 FUN_10200f67c(void)

{
  return 0x1b;
}



/* Entry: 10200f684; end: 10200f707;  */

void FUN_10200f684(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10200f7c8,param_2,FUN_10200f7cc,param_2,FUN_10200f7f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10200f708; end: 10200f757;  */

undefined8 FUN_10200f708(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10200f758; end: 10200f787;  */

undefined ** FUN_10200f758(void)

{
  return &PTR_DAT_112ff1a58;
}



/* Entry: 10200f788; end: 10200f7a7;  */

void FUN_10200f788(void)

{
  func_0x000107c61168(&PTR_PTR_112e4fca0);
  return;
}



/* Entry: 10200f7a8; end: 10200f7cb;  */

undefined1  [16] FUN_10200f7a8(void)

{
  return ZEXT816(0x1104bc1a0);
}



/* Entry: 10200f7cc; end: 10200f7f3;  */

void FUN_10200f7cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10200f7f4; end: 10200f7fb;  */

undefined8 FUN_10200f7f4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10200f7fc; end: 10200f837;  */

void FUN_10200f7fc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10200f838();
  func_0x0001000a7f38("SCMyStorySettingsScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10200f838; end: 10200fa23;  */

void FUN_10200f838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1106dc6a0;
  ppuVar4 = &PTR_DAT_112ff1a58;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104bc1f0;
  func_0x000107c613fc(&UNK_1104bc1f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4fd20;
  func_0x0001000285a8(0x112e4fd20,&UNK_10da4d538);
  func_0x0001000a6ee8(&UNK_1104bc3f0,"MyStorySettingsScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_10200fa24,puVar2,uVar3,&UNK_1104bc3f0,&PTR_DAT_112e4fdb8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bc1a0,
                      "SCMyStorySettingsEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_10200fad8,param_3,uVar3,&UNK_1104bc1a0,&PTR_DAT_112e4fc38);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104bc218;
  func_0x000107c613fc(&UNK_1104bc218,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bbfc0,"SCMyStorySettingsScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_10200fb88,puVar2,uVar3,&UNK_1104bbfc0,&PTR_DAT_112e4fbb0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4fd28;
  func_0x0001000285a8(0x112e4fd28,&UNK_10da4d540);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10200fa24; end: 10200fa63;  */

void FUN_10200fa24(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102010350(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("MyStorySettingsScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10200fa64; end: 10200fad7;  */

void FUN_10200fa64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10200fbc4;
  func_0x0001000823a8(0x10200fbc4,param_3);
  func_0x000100082720("SCMyStorySettingsEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10200fad8; end: 10200fadf;  */

void FUN_10200fad8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10200fbc4;
  func_0x0001000823a8();
  func_0x000100082720("SCMyStorySettingsEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10200fae0; end: 10200fb87;  */

void FUN_10200fae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bc240;
  func_0x000107c613fc(&UNK_1104bc240,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10200fbbc;
  func_0x0001000823a8(FUN_10200fbbc,puVar1);
  func_0x000100082720("SCMyStorySettingsScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10200fb88; end: 10200fb8f;  */

void FUN_10200fb88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bc240;
  func_0x000107c613fc(&UNK_1104bc240,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10200fbbc;
  func_0x0001000823a8(FUN_10200fbbc,puVar3);
  func_0x000100082720("SCMyStorySettingsScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10200fb90; end: 10200fbbb;  */

void FUN_10200fb90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10200fbbc; end: 10200fbcb;  */

void FUN_10200fbbc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104bc048;
  func_0x000107c613fc(&UNK_1104bc048,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10200eadc;
  func_0x00010058fa64(FUN_10200eadc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10200fbcc; end: 10200fca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10200fbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10200ffe0();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e4fd30) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4fd38) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200fca8);
  (*pcVar1)();
}



/* Entry: 10200fca8; end: 10200fd07; -[_TtC31MyStorySettingsScopeGraphBridge46MyStorySettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_10200fca8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyStorySettingsScopeGraphBridge.MyStorySettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10200fcd4);
  (*pcVar1)();
}



/* Entry: 10200fd08; end: 10200fd3f; -[_TtC31MyStorySettingsScopeGraphBridge46MyStorySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010200fd24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010200fd28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200fd08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4fd30));
  return;
}



/* Entry: 10200fd40; end: 10200fd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10200fd40(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4fd38),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4fd30));
  return;
}


