/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10150a460; end: 10150a4ff;  */

void FUN_10150a460(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10150a500; end: 10150a51f;  */

void FUN_10150a500(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10150a520; end: 10150a5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10150a520(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dad8b8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dad8c0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10150a5a8);
  (*pcVar2)();
}



/* Entry: 10150a5a8; end: 10150a68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10150a5a8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dad8b8);
  *(undefined **)(unaff_x20 + _DAT_112dad8b8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dad8c0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dad8c0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103d50e0;
  func_0x000107c613fc(&UNK_1103d50e0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10150a694,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10150a690; end: 10150a69b;  */

void FUN_10150a690(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10150a69c; end: 10150a6fb; -[_TtC31UnauthenticatedScopeGraphBridge46SCUnauthenticatedScopedServicesSaberEntryPoint init] */

void FUN_10150a69c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.SCUnauthenticatedScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10150a6c8);
  (*pcVar1)();
}



/* Entry: 10150a6fc; end: 10150a733; -[_TtC31UnauthenticatedScopeGraphBridge46SCUnauthenticatedScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150a6fc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dad8c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dad8b8));
  return;
}



/* Entry: 10150a734; end: 10150a737;  */

void FUN_10150a734(void)

{
  return;
}



/* Entry: 10150a738; end: 10150a757;  */

void FUN_10150a738(void)

{
  FUN_10150a5a8();
  return;
}



/* Entry: 10150a758; end: 10150a777;  */

void FUN_10150a758(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd868);
  return;
}



/* Entry: 10150a778; end: 10150a847;  */

undefined8 FUN_10150a778(void)

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
  
  func_0x000107c61428(0x112dad8f0,&uStack_40,0x20,0);
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
    FUN_10150a848();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10150a848; end: 10150a867;  */

void FUN_10150a848(void)

{
  func_0x000107c61168(&PTR_PTR_1127dd930);
  return;
}



/* Entry: 10150a868; end: 10150acb3;  */

void FUN_10150a868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112dad8f8,&UNK_10d956338);
  puVar1 = &UNK_1103d5128;
  func_0x000107c613fc(&UNK_1103d5128,0xb0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x0001000823a8(FUN_10150acb4,puVar1);
  return;
}



/* Entry: 10150acb4; end: 10150acff;  */

void FUN_10150acb4(void)

{
  long unaff_x20;
  
  func_0x00010150aa2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 10150ad00; end: 10150aedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150ad00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dad900) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dad908) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dad910) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dad918) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dad920) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112dad928) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dad930) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112dad938) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112dad940) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112dad948) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dad950) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112dad958) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112dad960) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112dad968) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112dad970) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112dad978) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112dad980) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112dad988) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112dad990) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112dad998) = param_20;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10150aee0; end: 10150af3f; -[_TtC31UnauthenticatedScopeGraphBridge39UnauthenticatedScopeGraphBridgeServices init] */

void FUN_10150aee0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UnauthenticatedScopeGraphBridge.UnauthenticatedScopeGraphBridgeServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10150af0c);
  (*pcVar1)();
}



/* Entry: 10150af40; end: 10150b0d7; -[_TtC31UnauthenticatedScopeGraphBridge39UnauthenticatedScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010150af5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150af7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150af9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150afbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150afdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150affc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150b060) */
/* WARNING: Removing unreachable block (ram,0x00010150b040) */
/* WARNING: Removing unreachable block (ram,0x00010150b020) */
/* WARNING: Removing unreachable block (ram,0x00010150b000) */
/* WARNING: Removing unreachable block (ram,0x00010150afe0) */
/* WARNING: Removing unreachable block (ram,0x00010150afc0) */
/* WARNING: Removing unreachable block (ram,0x00010150afa0) */
/* WARNING: Removing unreachable block (ram,0x00010150af80) */
/* WARNING: Removing unreachable block (ram,0x00010150af60) */
/* WARNING: Removing unreachable block (ram,0x00010150b080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150af40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dad910));
  return;
}



/* Entry: 10150b0d8; end: 10150b0e3;  */

void FUN_10150b0d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10150b0e4,param_1);
  return;
}



/* Entry: 10150b0e4; end: 10150b157;  */

void FUN_10150b0e4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10150b158; end: 10150b163;  */

void FUN_10150b158(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10150b4f0,param_1);
  return;
}



/* Entry: 10150b164; end: 10150b1ef;  */

void FUN_10150b164(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10150b500,0);
  return;
}



/* Entry: 10150b1f0; end: 10150b1fb;  */

void FUN_10150b1f0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10150b4f4,param_1);
  return;
}



/* Entry: 10150b1fc; end: 10150b253;  */

void FUN_10150b1fc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10150b254; end: 10150b25b;  */

undefined8 FUN_10150b254(void)

{
  return 0x1b;
}



/* Entry: 10150b25c; end: 10150b3d3;  */

void FUN_10150b25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103d5150;
  func_0x000107c613fc(&UNK_1103d5150,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10150b3d4,puVar1);
  return;
}



/* Entry: 10150b3d4; end: 10150b3db;  */

void FUN_10150b3d4(undefined8 *param_1)

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
  func_0x000107c61428(0x112dad8f0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dad8f0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103d52a8;
  func_0x000107c613fc(&UNK_1103d52a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10150b4e8;
  func_0x00010058fa64(0x10150b4e8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10150b3dc; end: 10150b437;  */

void FUN_10150b3dc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dad8f0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112dad8f0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10150b438; end: 10150b503;  */

undefined ** FUN_10150b438(void)

{
  return &PTR_DAT_113067048;
}



/* Entry: 10150b504; end: 10150b54b; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dad9f0;
  func_0x000107c61428(param_1 + _DAT_112dad9f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10150b54c; end: 10150b5a3; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dad9f0;
  func_0x000107c61428(param_1 + _DAT_112dad9f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150b5a4; end: 10150b5eb; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint sCPhoneCodeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b5a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dad9f8;
  func_0x000107c61428(param_1 + _DAT_112dad9f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10150b5ec; end: 10150b5f7; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint setSCPhoneCodeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dad9f8;
  func_0x000107c61428(param_1 + _DAT_112dad9f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10150b5f8; end: 10150b63f; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint sCRegistrationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b5f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada00;
  func_0x000107c61428(param_1 + _DAT_112dada00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10150b640; end: 10150b64b; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint setSCRegistrationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b640(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada00;
  func_0x000107c61428(param_1 + _DAT_112dada00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10150b64c; end: 10150b693; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint sCUserVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b64c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada08;
  func_0x000107c61428(param_1 + _DAT_112dada08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10150b694; end: 10150b69f; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint setSCUserVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b694(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada08;
  func_0x000107c61428(param_1 + _DAT_112dada08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10150b6a0; end: 10150b6e7; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint unauthenticatedScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b6a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada10;
  func_0x000107c61428(param_1 + _DAT_112dada10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10150b6e8; end: 10150b6f3; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint setUnauthenticatedScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada10;
  func_0x000107c61428(param_1 + _DAT_112dada10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10150b6f4; end: 10150b753;  */

void FUN_10150b6f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10150b754; end: 10150ba17;  */

/* WARNING: Possible PIC construction at 0x00010150b91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150b9cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150b9f0) */
/* WARNING: Removing unreachable block (ram,0x00010150b9e0) */
/* WARNING: Removing unreachable block (ram,0x00010150b974) */
/* WARNING: Removing unreachable block (ram,0x00010150b964) */
/* WARNING: Removing unreachable block (ram,0x00010150b954) */
/* WARNING: Removing unreachable block (ram,0x00010150b930) */
/* WARNING: Removing unreachable block (ram,0x00010150b920) */
/* WARNING: Removing unreachable block (ram,0x00010150b9d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150b754(void)

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
  func_0x000107c51164();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c51228();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c51564();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c5d1e4();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_101508dcc();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_10150a778();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10150ba18);
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
          *(long *)(lVar4 + _DAT_112dace40) = lVar5;
          *(long *)(lVar4 + _DAT_112dace48) = unaff_x20;
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



/* Entry: 10150ba18; end: 10150ba3f; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10150ba18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10150b754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10150ba40; end: 10150ba83; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint end] */

void FUN_10150ba40(undefined8 param_1)

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



/* Entry: 10150ba84; end: 10150bd5f;  */

void FUN_10150ba84(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef1074530)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef8bad0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef1074510)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef8baf0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c587d0();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10744f0)) ||
             (func_0x000107c605b8(0xd00000000000001e,0x800000010ef8bb10,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58b0c();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef10744d0)) &&
               (func_0x000107c605b8(0xd00000000000002e,0x800000010ef8bb30,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "UnauthenticatedScopeGraphBridge/SCUnauthenticatedScopeGraphBridgeSaberEntryPoint.swift"
                                  ,0x56,2,0x53,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10150bd60);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a158();
          }
        }
        goto LAB_10150bb10;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5870c();
  }
LAB_10150bb10:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10150bd60; end: 10150be0b; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10150bd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10150ba84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10150be0c; end: 10150be9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150be0c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112dad9f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112dad9f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dada00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dada08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dada10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dada18) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10150be9c; end: 10150bebb; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint init] */

void FUN_10150be9c(void)

{
  FUN_10150be0c();
  return;
}



/* Entry: 10150bebc; end: 10150beef;  */

void FUN_10150bebc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10150bef0; end: 10150bf67; -[SCUnauthenticatedScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010150bf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150bf3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150bf20) */
/* WARNING: Removing unreachable block (ram,0x00010150bf40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150bef0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dad9f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dad9f8));
  return;
}



/* Entry: 10150bf68; end: 10150bf87;  */

void FUN_10150bf68(void)

{
  func_0x000107c61168(&PTR_PTR_1127dda88);
  return;
}



/* Entry: 10150bf88; end: 10150bf93; -[SCSCAppAttestServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150bf88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada48;
  func_0x000107c61428(param_1 + _DAT_112dada48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10150bf94; end: 10150bf9f; -[SCSCAppAttestServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150bf94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada48;
  func_0x000107c61428(param_1 + _DAT_112dada48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150bfa0; end: 10150bfab; -[SCSCAppAttestServicesSaberEntryPoint unauthenticatedScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150bfa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada50;
  func_0x000107c61428(param_1 + _DAT_112dada50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10150bfac; end: 10150bfef;  */

void FUN_10150bfac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10150bff0; end: 10150bffb; -[SCSCAppAttestServicesSaberEntryPoint setUnauthenticatedScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150bff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada50;
  func_0x000107c61428(param_1 + _DAT_112dada50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150bffc; end: 10150c04f;  */

void FUN_10150bffc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150c050; end: 10150c097; -[SCSCAppAttestServicesSaberEntryPoint sCAppAttestServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c050(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada58;
  func_0x000107c61428(param_1 + _DAT_112dada58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10150c098; end: 10150c0fb; -[SCSCAppAttestServicesSaberEntryPoint setSCAppAttestServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c098(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada58;
  func_0x000107c61428(param_1 + _DAT_112dada58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10150c0fc; end: 10150c27f;  */

/* WARNING: Possible PIC construction at 0x00010150c1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150c20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150c228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150c200) */
/* WARNING: Removing unreachable block (ram,0x00010150c210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c0fc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d1e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50a30();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101508f84();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112dad910);
        *(undefined8 *)(lVar2 + _DAT_112dace78) = uVar6;
        *(long *)(lVar2 + _DAT_112dace80) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112dace80);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10150c280; end: 10150c2a7; -[SCSCAppAttestServicesSaberEntryPoint begin] */

void FUN_10150c280(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10150c0fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10150c2a8; end: 10150c2eb; -[SCSCAppAttestServicesSaberEntryPoint end] */

void FUN_10150c2a8(undefined8 param_1)

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



/* Entry: 10150c2ec; end: 10150c4ef;  */

void FUN_10150c2ec(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000027;
    if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef1074440)) ||
       (func_0x000107c605b8(0xd000000000000027,0x800000010ef8bbc0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a154();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef1074410)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001a,0x800000010ef8bbf0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "UnauthenticatedScopeGraphBridge/SCSCAppAttestServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x4b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10150c4f0);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57fd8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10150c4f0; end: 10150c59b; -[SCSCAppAttestServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10150c4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10150c2ec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10150c59c; end: 10150c61b; -[SCSCAppAttestServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c59c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dada48,0);
  func_0x000107c61614(param_1 + _DAT_112dada50,0);
  *(undefined8 *)(param_1 + _DAT_112dada58) = 0;
  *(undefined8 *)(param_1 + _DAT_112dada60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10150c61c; end: 10150c64f;  */

void FUN_10150c61c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10150c650; end: 10150c6a7; -[SCSCAppAttestServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010150c68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150c690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c650(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dada48);
  func_0x000107c61610(param_1 + _DAT_112dada50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dada58));
  return;
}



/* Entry: 10150c6a8; end: 10150c6c7;  */

void FUN_10150c6a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ddb68);
  return;
}



/* Entry: 10150c6c8; end: 10150c6d3; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c6c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada90;
  func_0x000107c61428(param_1 + _DAT_112dada90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10150c6d4; end: 10150c6df; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada90;
  func_0x000107c61428(param_1 + _DAT_112dada90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150c6e0; end: 10150c6eb; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint unauthenticatedScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c6e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dada98;
  func_0x000107c61428(param_1 + _DAT_112dada98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10150c6ec; end: 10150c72f;  */

void FUN_10150c6ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10150c730; end: 10150c73b; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint setUnauthenticatedScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dada98;
  func_0x000107c61428(param_1 + _DAT_112dada98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150c73c; end: 10150c78f;  */

void FUN_10150c73c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150c790; end: 10150c7d7; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint sCAuthenticationOrchestrationServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c790(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dadaa0;
  func_0x000107c61428(param_1 + _DAT_112dadaa0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10150c7d8; end: 10150c83b; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint setSCAuthenticationOrchestrationServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c7d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dadaa0;
  func_0x000107c61428(param_1 + _DAT_112dadaa0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10150c83c; end: 10150c9bf;  */

/* WARNING: Possible PIC construction at 0x00010150c93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150c94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150c968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150c940) */
/* WARNING: Removing unreachable block (ram,0x00010150c950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c83c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d1e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50a6c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_10150913c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112dad920);
        *(undefined8 *)(lVar2 + _DAT_112daceb0) = uVar6;
        *(long *)(lVar2 + _DAT_112daceb8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112daceb8);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10150c9c0; end: 10150c9e7; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint begin] */

void FUN_10150c9c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10150c83c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10150c9e8; end: 10150ca2b; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint end] */

void FUN_10150c9e8(undefined8 param_1)

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



/* Entry: 10150ca2c; end: 10150cc2f;  */

void FUN_10150ca2c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef1074440)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010ef8bbc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef10743a0)) &&
           (func_0x000107c605b8(0xd00000000000002c,0x800000010ef8bc60,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "UnauthenticatedScopeGraphBridge/SCSCAuthenticationOrchestrationServicesSaberEntryPoint.swift"
                              ,0x5c,2,0x4b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10150cc30);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58014();
        goto LAB_10150cab8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a154();
  }
LAB_10150cab8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10150cc30; end: 10150ccdb; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10150cc30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10150ca2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10150ccdc; end: 10150cd5b; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150ccdc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dada90,0);
  func_0x000107c61614(param_1 + _DAT_112dada98,0);
  *(undefined8 *)(param_1 + _DAT_112dadaa0) = 0;
  *(undefined8 *)(param_1 + _DAT_112dadaa8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10150cd5c; end: 10150cd8f;  */

void FUN_10150cd5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10150cd90; end: 10150cde7; -[SCSCAuthenticationOrchestrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010150cdcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150cdd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150cd90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dada90);
  func_0x000107c61610(param_1 + _DAT_112dada98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dadaa0));
  return;
}



/* Entry: 10150cde8; end: 10150ce07;  */

void FUN_10150cde8(void)

{
  func_0x000107c61168(&PTR_PTR_1127ddc38);
  return;
}



/* Entry: 10150ce08; end: 10150ce13; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150ce08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dadad8;
  func_0x000107c61428(param_1 + _DAT_112dadad8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10150ce14; end: 10150ce1f; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150ce14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dadad8;
  func_0x000107c61428(param_1 + _DAT_112dadad8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150ce20; end: 10150ce2b; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint unauthenticatedScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150ce20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dadae0;
  func_0x000107c61428(param_1 + _DAT_112dadae0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10150ce2c; end: 10150ce6f;  */

void FUN_10150ce2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10150ce70; end: 10150ce7b; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint setUnauthenticatedScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150ce70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dadae0;
  func_0x000107c61428(param_1 + _DAT_112dadae0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150ce7c; end: 10150cecf;  */

void FUN_10150ce7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10150ced0; end: 10150cf17; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint sCBitmojiUnauthenticatedFetchServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150ced0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dadae8;
  func_0x000107c61428(param_1 + _DAT_112dadae8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10150cf18; end: 10150cf7b; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint setSCBitmojiUnauthenticatedFetchServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150cf18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dadae8;
  func_0x000107c61428(param_1 + _DAT_112dadae8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10150cf7c; end: 10150d0ff;  */

/* WARNING: Possible PIC construction at 0x00010150d07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150d08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010150d0a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150d080) */
/* WARNING: Removing unreachable block (ram,0x00010150d090) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150cf7c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d1e0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50ae4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1015092f4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112dad928);
        *(undefined8 *)(lVar2 + _DAT_112dacee8) = uVar6;
        *(long *)(lVar2 + _DAT_112dacef0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112dacef0);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10150d100; end: 10150d127; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint begin] */

void FUN_10150d100(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10150cf7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10150d128; end: 10150d16b; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint end] */

void FUN_10150d128(undefined8 param_1)

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



/* Entry: 10150d16c; end: 10150d36f;  */

void FUN_10150d16c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef1074440)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010ef8bbc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef1074310)) &&
           (func_0x000107c605b8(0xd00000000000002c,0x800000010ef8bcf0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "UnauthenticatedScopeGraphBridge/SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint.swift"
                              ,0x5c,2,0x4b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10150d370);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5808c();
        goto LAB_10150d1f8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a154();
  }
LAB_10150d1f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10150d370; end: 10150d41b; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10150d370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10150d16c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10150d41c; end: 10150d49b; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150d41c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dadad8,0);
  func_0x000107c61614(param_1 + _DAT_112dadae0,0);
  *(undefined8 *)(param_1 + _DAT_112dadae8) = 0;
  *(undefined8 *)(param_1 + _DAT_112dadaf0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10150d49c; end: 10150d4cf;  */

void FUN_10150d49c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10150d4d0; end: 10150d527; -[SCSCBitmojiUnauthenticatedFetchServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010150d50c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010150d510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150d4d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dadad8);
  func_0x000107c61610(param_1 + _DAT_112dadae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dadae8));
  return;
}



/* Entry: 10150d528; end: 10150d547;  */

void FUN_10150d528(void)

{
  func_0x000107c61168(&PTR_PTR_1127ddd08);
  return;
}


