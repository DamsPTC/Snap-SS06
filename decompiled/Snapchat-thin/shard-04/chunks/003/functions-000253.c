/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033dde70; end: 1033ddea7; -[_TtC25PlayGamesScopeGraphBridge38PlayGamesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dde70(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f63548));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f63540));
  return;
}



/* Entry: 1033ddea8; end: 1033ddeab;  */

void FUN_1033ddea8(void)

{
  return;
}



/* Entry: 1033ddeac; end: 1033ddecb;  */

void FUN_1033ddeac(void)

{
  FUN_1033ddd1c();
  return;
}



/* Entry: 1033ddecc; end: 1033ddeeb;  */

void FUN_1033ddecc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d78c8);
  return;
}



/* Entry: 1033ddeec; end: 1033ddfbb;  */

undefined8 FUN_1033ddeec(void)

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
  
  func_0x000107c61428(0x112f63578,&uStack_40,0x20,0);
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
    FUN_1033ddfbc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1033ddfbc; end: 1033ddfdb;  */

void FUN_1033ddfbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7990);
  return;
}



/* Entry: 1033ddfdc; end: 1033de173;  */

void FUN_1033ddfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f63580,&UNK_10dbbf678);
  puVar1 = &UNK_11064e128;
  func_0x000107c613fc(&UNK_11064e128,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1033de174,puVar1);
  return;
}



/* Entry: 1033de174; end: 1033de183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de174(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1033ddfbc();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112f63588) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112f63590) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f63598) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f635a0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f635a8) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1033de184; end: 1033de21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f63588) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f63590) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f63598) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f635a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f635a8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033de220; end: 1033de27f; -[_TtC25PlayGamesScopeGraphBridge33PlayGamesScopeGraphBridgeServices init] */

void FUN_1033de220(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesScopeGraphBridge.PlayGamesScopeGraphBridgeServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033de24c);
  (*pcVar1)();
}



/* Entry: 1033de280; end: 1033de327; -[_TtC25PlayGamesScopeGraphBridge33PlayGamesScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033de29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033de2bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033de2a0) */
/* WARNING: Removing unreachable block (ram,0x0001033de2c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f63588));
  return;
}



/* Entry: 1033de328; end: 1033de333;  */

void FUN_1033de328(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1033de740,param_1);
  return;
}



/* Entry: 1033de334; end: 1033de373;  */

void FUN_1033de334(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1033de74c,0);
  return;
}



/* Entry: 1033de374; end: 1033de37f;  */

void FUN_1033de374(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1033de744,param_1);
  return;
}



/* Entry: 1033de380; end: 1033de40b;  */

void FUN_1033de380(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1033de750,0);
  return;
}



/* Entry: 1033de40c; end: 1033de417;  */

void FUN_1033de40c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033de470,param_1);
  return;
}



/* Entry: 1033de418; end: 1033de46f;  */

void FUN_1033de418(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1033de470; end: 1033de4a3;  */

void FUN_1033de470(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1033de4a4; end: 1033de4ab;  */

undefined8 FUN_1033de4a4(void)

{
  return 0x1b;
}



/* Entry: 1033de4ac; end: 1033de623;  */

void FUN_1033de4ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11064e150;
  func_0x000107c613fc(&UNK_11064e150,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1033de624,puVar1);
  return;
}



/* Entry: 1033de624; end: 1033de62b;  */

void FUN_1033de624(undefined8 *param_1)

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
  func_0x000107c61428(0x112f63578,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f63578,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11064e2a8;
  func_0x000107c613fc(&UNK_11064e2a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1033de738;
  func_0x00010058fa64(0x1033de738,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033de62c; end: 1033de687;  */

void FUN_1033de62c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f63578,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f63578,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1033de688; end: 1033de753;  */

undefined ** FUN_1033de688(void)

{
  return &PTR_DAT_113066718;
}



/* Entry: 1033de754; end: 1033de79b; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de754(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63600;
  func_0x000107c61428(param_1 + _DAT_112f63600,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033de79c; end: 1033de7f3; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63600;
  func_0x000107c61428(param_1 + _DAT_112f63600,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033de7f4; end: 1033de83b; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint sCLensCreatorProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de7f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63608;
  func_0x000107c61428(param_1 + _DAT_112f63608,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033de83c; end: 1033de847; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint setSCLensCreatorProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de83c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63608;
  func_0x000107c61428(param_1 + _DAT_112f63608,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033de848; end: 1033de88f; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint sCLensInfoCardsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63610;
  func_0x000107c61428(param_1 + _DAT_112f63610,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033de890; end: 1033de89b; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint setSCLensInfoCardsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63610;
  func_0x000107c61428(param_1 + _DAT_112f63610,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033de89c; end: 1033de8e3; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint sCViewfinderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de89c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63618;
  func_0x000107c61428(param_1 + _DAT_112f63618,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033de8e4; end: 1033de8ef; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint setSCViewfinderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63618;
  func_0x000107c61428(param_1 + _DAT_112f63618,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033de8f0; end: 1033de937; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint playGamesScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de8f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63620;
  func_0x000107c61428(param_1 + _DAT_112f63620,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1033de938; end: 1033de943; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint setPlayGamesScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de938(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63620;
  func_0x000107c61428(param_1 + _DAT_112f63620,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033de944; end: 1033de9a3;  */

void FUN_1033de944(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1033de9a4; end: 1033dec67;  */

/* WARNING: Possible PIC construction at 0x0001033deb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033deb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033deba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033debb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033debc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dec3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033dec1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033dec40) */
/* WARNING: Removing unreachable block (ram,0x0001033dec30) */
/* WARNING: Removing unreachable block (ram,0x0001033debc4) */
/* WARNING: Removing unreachable block (ram,0x0001033debb4) */
/* WARNING: Removing unreachable block (ram,0x0001033deba4) */
/* WARNING: Removing unreachable block (ram,0x0001033deb80) */
/* WARNING: Removing unreachable block (ram,0x0001033deb70) */
/* WARNING: Removing unreachable block (ram,0x0001033dec20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de9a4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50ea8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50ee8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c5157c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c4e898();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_1033dda1c();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_1033ddeec();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1033dec68);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112f63368) = lVar5;
          *(long *)(lVar4 + _DAT_112f63370) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1033dec68; end: 1033dec8f; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1033dec68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033de9a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033dec90; end: 1033decd3; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint end] */

void FUN_1033dec90(undefined8 param_1)

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



/* Entry: 1033decd4; end: 1033defaf;  */

void FUN_1033decd4(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0fdaae0)) ||
       (func_0x000107c605b8(0xd000000000000020,0x800000010f025520,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58450();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0f89710)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010f0768f0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58490();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef104a5f0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000018,0x800000010efb5a10,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0eb6d30)) &&
               (func_0x000107c605b8(0xd000000000000028,0x800000010f1492d0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "PlayGamesScopeGraphBridge/SCPlayGamesScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x4a,2,0x3f,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1033defb0);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57488();
            goto LAB_1033ded60;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58b24();
      }
    }
  }
LAB_1033ded60:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033defb0; end: 1033df05b; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1033defb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033decd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033df05c; end: 1033df0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df05c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f63600,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f63608) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63610) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63618) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63620) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63628) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033df0ec; end: 1033df10b; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint init] */

void FUN_1033df0ec(void)

{
  FUN_1033df05c();
  return;
}



/* Entry: 1033df10c; end: 1033df13f;  */

void FUN_1033df10c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033df140; end: 1033df1b7; -[SCPlayGamesScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033df16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033df18c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033df170) */
/* WARNING: Removing unreachable block (ram,0x0001033df190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df140(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f63600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f63608));
  return;
}



/* Entry: 1033df1b8; end: 1033df1d7;  */

void FUN_1033df1b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7a70);
  return;
}



/* Entry: 1033df1d8; end: 1033df1e3; -[SCPlayGamesLensScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df1d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63658;
  func_0x000107c61428(param_1 + _DAT_112f63658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033df1e4; end: 1033df1ef; -[SCPlayGamesLensScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63658;
  func_0x000107c61428(param_1 + _DAT_112f63658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033df1f0; end: 1033df1fb; -[SCPlayGamesLensScopeServicesSaberServiceProvider playGamesScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df1f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63660;
  func_0x000107c61428(param_1 + _DAT_112f63660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033df1fc; end: 1033df23f;  */

void FUN_1033df1fc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033df240; end: 1033df24b; -[SCPlayGamesLensScopeServicesSaberServiceProvider setPlayGamesScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df240(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63660;
  func_0x000107c61428(param_1 + _DAT_112f63660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033df24c; end: 1033df29f;  */

void FUN_1033df24c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033df2a0; end: 1033df4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033df2a0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4e894();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001033ddacc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f63588);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f63668);
      *(long *)(unaff_x20 + _DAT_112f63668) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PlayGamesScopeGraphBridge/SCPlayGamesLensScopeServicesSaberServiceProvider.swift"
                      ,0x50,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033df3cc);
  (*pcVar1)();
}



/* Entry: 1033df4b4; end: 1033df4e7; -[SCPlayGamesLensScopeServicesSaberServiceProvider provide] */

void FUN_1033df4b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033df2a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033df4e8; end: 1033df51b; -[SCPlayGamesLensScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1033df4e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001033df3cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033df51c; end: 1033df55f; -[SCPlayGamesLensScopeServicesSaberServiceProvider end] */

void FUN_1033df51c(undefined8 param_1)

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



/* Entry: 1033df560; end: 1033df6f7;  */

void FUN_1033df560(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0eb6c50)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f1493b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlayGamesScopeGraphBridge/SCPlayGamesLensScopeServicesSaberServiceProvider.swift"
                            ,0x50,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033df6f8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57484();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033df6f8; end: 1033df7a3; -[SCPlayGamesLensScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1033df6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033df560(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033df7a4; end: 1033df817; -[SCPlayGamesLensScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df7a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f63658,0);
  func_0x000107c61614(param_1 + _DAT_112f63660,0);
  *(undefined8 *)(param_1 + _DAT_112f63668) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033df818; end: 1033df84b;  */

void FUN_1033df818(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033df84c; end: 1033df893; -[SCPlayGamesLensScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df84c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f63658);
  func_0x000107c61610(param_1 + _DAT_112f63660);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f63668));
  return;
}



/* Entry: 1033df894; end: 1033df8b3;  */

void FUN_1033df894(void)

{
  func_0x000107c61168(&PTR_PTR_112f636b0);
  return;
}



/* Entry: 1033df8b4; end: 1033df8bf; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df8b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63718;
  func_0x000107c61428(param_1 + _DAT_112f63718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033df8c0; end: 1033df8cb; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63718;
  func_0x000107c61428(param_1 + _DAT_112f63718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033df8cc; end: 1033df8d7; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider playGamesScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df8cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f63720;
  func_0x000107c61428(param_1 + _DAT_112f63720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033df8d8; end: 1033df91b;  */

void FUN_1033df8d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033df91c; end: 1033df927; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider setPlayGamesScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f63720;
  func_0x000107c61428(param_1 + _DAT_112f63720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033df928; end: 1033df97b;  */

void FUN_1033df928(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033df97c; end: 1033dfb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033df97c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4e894();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001033ddbf8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f63590);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f63728);
      *(long *)(unaff_x20 + _DAT_112f63728) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PlayGamesScopeGraphBridge/SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider.swift"
                      ,0x61,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033dfaa8);
  (*pcVar1)();
}



/* Entry: 1033dfb90; end: 1033dfbc3; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider provide] */

void FUN_1033dfb90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033df97c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033dfbc4; end: 1033dfbf7; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider __safeProvide] */

void FUN_1033dfbc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001033dfaa8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033dfbf8; end: 1033dfc3b; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider end] */

void FUN_1033dfbf8(undefined8 param_1)

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



/* Entry: 1033dfc3c; end: 1033dfdd3;  */

void FUN_1033dfc3c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0eb6c50)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f1493b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlayGamesScopeGraphBridge/SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider.swift"
                            ,0x61,2,0x39,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033dfdd4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57484();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033dfdd4; end: 1033dfe7f; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider setValue:forIvarName:] */

void FUN_1033dfdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033dfc3c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033dfe80; end: 1033dfef3; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dfe80(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f63718,0);
  func_0x000107c61614(param_1 + _DAT_112f63720,0);
  *(undefined8 *)(param_1 + _DAT_112f63728) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033dfef4; end: 1033dff27;  */

void FUN_1033dfef4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033dff28; end: 1033dff6f; -[SCPlayGamesScopedLensPromptDependencyProviderSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dff28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f63718);
  func_0x000107c61610(param_1 + _DAT_112f63720);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f63728));
  return;
}



/* Entry: 1033dff70; end: 1033dff8f;  */

void FUN_1033dff70(void)

{
  func_0x000107c61168(&PTR_PTR_112f63770);
  return;
}



/* Entry: 1033dff90; end: 1033dffd7; -[SCPlayGamesScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dff90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f637d8;
  func_0x000107c61428(param_1 + _DAT_112f637d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033dffd8; end: 1033e002f; -[SCPlayGamesScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dffd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f637d8;
  func_0x000107c61428(param_1 + _DAT_112f637d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033e0030; end: 1033e0107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e0030(undefined8 param_1,long param_2)

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
    FUN_1033ddecc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f63540) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033e0108);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f63548);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f637e0);
    *(long **)(unaff_x20 + _DAT_112f637e0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1033e0108; end: 1033e012f; -[SCPlayGamesScopedServicesSaberEntryPoint begin] */

void FUN_1033e0108(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033e0030();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033e0130; end: 1033e02a7;  */

/* WARNING: Possible PIC construction at 0x0001033e0198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033e0230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033e019c) */
/* WARNING: Removing unreachable block (ram,0x0001033e0234) */
/* WARNING: Removing unreachable block (ram,0x0001033e024c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e0130(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f637e0);
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



/* Entry: 1033e02a8; end: 1033e02af;  */

void FUN_1033e02a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033e02b0; end: 1033e02e3; -[SCPlayGamesScopedServicesSaberEntryPoint end] */

void FUN_1033e02b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1033e0130();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1033e02e4; end: 1033e0403;  */

void FUN_1033e02e4(long param_1,long param_2,long param_3)

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
                        "PlayGamesScopeGraphBridge/SCPlayGamesScopedServicesSaberEntryPoint.swift",
                        0x48,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033e0404);
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



/* Entry: 1033e0404; end: 1033e04af; -[SCPlayGamesScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1033e0404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1033e02e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033e04b0; end: 1033e050f; -[SCPlayGamesScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e04b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f637d8,0);
  *(undefined8 *)(param_1 + _DAT_112f637e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033e0510; end: 1033e0543;  */

void FUN_1033e0510(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033e0544; end: 1033e057b; -[SCPlayGamesScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e0544(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f637d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f637e0));
  return;
}



/* Entry: 1033e057c; end: 1033e059b;  */

void FUN_1033e057c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7be0);
  return;
}



/* Entry: 1033e059c; end: 1033e0fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1033e059c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,long param_15,long param_16,undefined8 param_17
             )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar11 = 0x10;
  func_0x000107c613fc();
  if (*(int *)(param_3 + _DAT_113082420) != 0) {
    uVar5 = *(undefined8 *)(param_15 + _DAT_113083f78);
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(param_6 + _DAT_112fcab40);
    uVar15 = *(undefined8 *)(param_6 + _DAT_112fcab48);
    uVar14 = *(undefined8 *)(param_16 + _DAT_112fcaac0);
    puVar7 = &UNK_11064e3e0;
    func_0x000107c613fc(&UNK_11064e3e0,0x90,7);
    *(undefined8 *)(puVar7 + 0x10) = param_2;
    *(undefined8 *)(puVar7 + 0x18) = param_13;
    *(undefined8 *)(puVar7 + 0x20) = param_5;
    *(undefined8 *)(puVar7 + 0x28) = uVar5;
    *(undefined8 *)(puVar7 + 0x30) = uVar15;
    *(undefined8 *)(puVar7 + 0x38) = param_7;
    *(undefined8 *)(puVar7 + 0x40) = param_9;
    *(undefined8 *)(puVar7 + 0x48) = param_8;
    *(undefined8 *)(puVar7 + 0x50) = param_10;
    *(undefined8 *)(puVar7 + 0x58) = param_14;
    *(undefined8 *)(puVar7 + 0x60) = param_11;
    *(undefined8 *)(puVar7 + 0x68) = param_12;
    *(undefined8 *)(puVar7 + 0x70) = uVar14;
    *(undefined8 *)(puVar7 + 0x78) = param_17;
    *(undefined8 *)(puVar7 + 0x80) = uVar6;
    *(undefined8 *)(puVar7 + 0x88) = uVar11;
    func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
    func_0x000107c613fc();
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_13);
    func_0x000107c61174(param_5);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar15);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_14);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_12);
    func_0x000107c6157c(uVar14);
    func_0x000107c61174(param_17);
    func_0x000107c61434(uVar11);
    pcVar8 = FUN_1033e0fb4;
    func_0x0001000bdd8c(FUN_1033e0fb4,puVar7);
    uVar6 = 0x112d4adc0;
    func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
    uVar5 = 0x1033e0fb8;
    func_0x0001000cb480(0x1033e0fb8,0,uVar6);
    uVar6 = uVar5;
    func_0x0001003a5b88();
    func_0x000107c6142c(uVar11);
    func_0x000107c61574(pcVar8);
    func_0x000107c61574(uVar5);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,8,0);
    lVar13 = 0;
    do {
      bVar4 = *(byte *)(lVar13 + 0x112f63838);
      pcVar12 = "show_retry_disclaimer";
      uVar11 = 0xd000000000000010;
      if (bVar4 != 6) {
        pcVar12 = "cesSaberEntryPoint.swift";
        uVar11 = 0xd000000000000015;
      }
      uVar5 = 0x6d6f72705f746573;
      if (bVar4 != 4) {
        uVar5 = 0x6d6f72705f746567;
      }
      uVar2 = (ulong)pcVar12 | 0x8000000000000000;
      if (bVar4 < 6) {
        uVar2 = 0xef617461645f7470;
        uVar11 = uVar5;
      }
      uVar3 = 0xec00000065736e6f;
      uVar5 = 0x707365725f746567;
      if (bVar4 != 2) {
        uVar3 = 0xef65736e6f707365;
        uVar5 = 0x725f657461657263;
      }
      uVar1 = 0xea00000000007470;
      uVar14 = 0x6d6f72705f746567;
      if (bVar4 != 0) {
        uVar1 = 0xed000074706d6f72;
        uVar14 = 0x705f657461657263;
      }
      if (bVar4 < 2) {
        uVar3 = uVar1;
        uVar5 = uVar14;
      }
      if (bVar4 < 4) {
        uVar2 = uVar3;
        uVar11 = uVar5;
      }
      uVar3 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
      }
      lVar13 = lVar13 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar11;
      *(ulong *)(puVar7 + uVar3 * 0x10 + 0x28) = uVar2;
    } while (lVar13 != 8);
    puVar9 = puVar7;
    func_0x000100403a6c(puVar7);
    func_0x000107c61574(puVar7);
    lVar13 = lRam0000000112f64070;
    func_0x000107c61174(uVar6);
    if (lVar13 != -1) {
      func_0x000107c61568(0x112f64070,FUN_1033ebb04);
    }
    uVar11 = uRam0000000113807300;
    puVar7 = PTR_PTR_1126b0260;
    func_0x000107c610f8(PTR_PTR_1126b0260);
    uVar14 = 0;
    func_0x0001044e4d64(0);
    uVar5 = uVar14;
    func_0x000100f06a9c();
    func_0x000107c5fe08(uVar11,uVar14,uVar5);
    puVar10 = puVar9;
    func_0x000107c5fe08(puVar9,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar9);
    func_0x000107c48360(puVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar10);
    uVar11 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar11);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  return unaff_x20;
}



/* Entry: 1033e0fb4; end: 1033e0fef;  */

void FUN_1033e0fb4(void)

{
  long unaff_x20;
  
  func_0x0001033e0c14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1033e0ff0; end: 1033e10e7;  */

void FUN_1033e0ff0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033e10e8; end: 1033e1103;  */

void FUN_1033e10e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1033e3bb0();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1033e1104; end: 1033e1147;  */

void FUN_1033e1104(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1033e1148; end: 1033e1183;  */

void FUN_1033e1148(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1033e1184; end: 1033e118f;  */

void FUN_1033e1184(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1033e1190; end: 1033e1357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e1190(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar7;
  func_0x000107c501d0(uVar7);
  func_0x000107c61180();
  puVar4 = &UNK_11064e4a0;
  func_0x000107c613fc(&UNK_11064e4a0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1033e13c4;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  pcStack_50 = FUN_1033e13cc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1019dec60;
  puStack_58 = &UNK_11064e4b8;
  ppuVar5 = &puStack_70;
  puStack_48 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c590(uVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3f61c(uVar7);
  func_0x000107c61180();
  lVar1 = _DAT_112f63db0;
  func_0x000107c61428(lVar8 + _DAT_112f63db0,&puStack_70,1,0);
  func_0x000107c61604(lVar8 + lVar1,uVar7);
  func_0x000107c615e8(uVar7);
  puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_78 = puVar6;
  func_0x000100b60084(&puStack_78);
  func_0x000107c61574();
  func_0x000107c61170(puVar6);
  puVar6 = puVar4;
  func_0x000107c61544(puVar4,"",0x81,0x17,0x25,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033e1358);
  (*pcVar2)();
}



/* Entry: 1033e1358; end: 1033e13c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e1358(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  long in_x7;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(in_x7 + 0x18);
  func_0x000107c4f4a8();
  func_0x000107c61180();
  lVar1 = _DAT_112f63da8;
  func_0x000107c61428(lVar3 + _DAT_112f63da8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined8 *)(lVar3 + lVar1) = in_x6;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033e13c4; end: 1033e13cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e13c4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4f4a8();
  func_0x000107c61180();
  lVar1 = _DAT_112f63da8;
  func_0x000107c61428(lVar3 + _DAT_112f63da8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined8 *)(lVar3 + lVar1) = in_x6;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1033e13cc; end: 1033e13eb;  */

void FUN_1033e13cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


