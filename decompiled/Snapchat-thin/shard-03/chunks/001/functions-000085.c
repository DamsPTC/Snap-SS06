/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024c4fd4; end: 1024c53d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024c4fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1024c5cd4();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112e9fb10) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e9fb18) = param_15;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
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
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024c53d4);
  (*pcVar2)();
}



/* Entry: 1024c53d4; end: 1024c5433; -[_TtC25SpotlightScopeGraphBridge40SpotlightScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024c53d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightScopeGraphBridge.SpotlightScopeGraphBridgeSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c5400);
  (*pcVar1)();
}



/* Entry: 1024c5434; end: 1024c546b; -[_TtC25SpotlightScopeGraphBridge40SpotlightScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024c5450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024c5454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c5434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9fb10));
  return;
}



/* Entry: 1024c546c; end: 1024c5493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c546c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9fb18),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9fb10));
  return;
}



/* Entry: 1024c5494; end: 1024c54b3;  */

void FUN_1024c5494(void)

{
  func_0x000107c61168(&PTR_PTR_1128470a0);
  return;
}



/* Entry: 1024c54b4; end: 1024c554f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024c54b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e9fdf0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9fb48) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fb50) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1024c5550; end: 1024c55af; -[_TtC25SpotlightScopeGraphBridge40SCLegacySpotlightServicesSaberEntryPoint init] */

void FUN_1024c5550(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightScopeGraphBridge.SCLegacySpotlightServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c557c);
  (*pcVar1)();
}



/* Entry: 1024c55b0; end: 1024c5643; -[_TtC25SpotlightScopeGraphBridge40SCLegacySpotlightServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c55b0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9fb48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9fb50));
  return;
}



/* Entry: 1024c5644; end: 1024c564b;  */

undefined8 FUN_1024c5644(void)

{
  return 0;
}



/* Entry: 1024c564c; end: 1024c566b;  */

void FUN_1024c564c(void)

{
  func_0x000107c61168(&PTR_PTR_112847168);
  return;
}



/* Entry: 1024c566c; end: 1024c5707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024c566c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e9fe20);
  *(undefined8 *)(unaff_x20 + _DAT_112e9fb80) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fb88) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1024c5708; end: 1024c5767; -[_TtC25SpotlightScopeGraphBridge39SpotlightSubFeedServicesSaberEntryPoint init] */

void FUN_1024c5708(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightScopeGraphBridge.SpotlightSubFeedServicesSaberEntryPoint",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c5734);
  (*pcVar1)();
}



/* Entry: 1024c5768; end: 1024c57fb; -[_TtC25SpotlightScopeGraphBridge39SpotlightSubFeedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c5768(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9fb80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9fb88));
  return;
}



/* Entry: 1024c57fc; end: 1024c5803;  */

undefined8 FUN_1024c57fc(void)

{
  return 0;
}



/* Entry: 1024c5804; end: 1024c5823;  */

void FUN_1024c5804(void)

{
  func_0x000107c61168(&PTR_PTR_112847230);
  return;
}



/* Entry: 1024c5824; end: 1024c5887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024c5824(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e9fdc0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1024c5888; end: 1024c588f;  */

void FUN_1024c5888(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024c5890; end: 1024c592f;  */

void FUN_1024c5890(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024c5930; end: 1024c594f;  */

void FUN_1024c5930(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1024c5950; end: 1024c59b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1024c5950(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e9fde8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1024c59b4; end: 1024c59bb;  */

void FUN_1024c59b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1024c59bc; end: 1024c5a5b;  */

void FUN_1024c59bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024c5a5c; end: 1024c5a7b;  */

void FUN_1024c5a5c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1024c5a7c; end: 1024c5b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024c5a7c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9fd58) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9fd60);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024c5b04);
  (*pcVar2)();
}



/* Entry: 1024c5b04; end: 1024c5beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024c5b04(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9fd58);
  *(undefined **)(unaff_x20 + _DAT_112e9fd58) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9fd60);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9fd60))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105148d0;
  func_0x000107c613fc(&UNK_1105148d0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1024c5bf0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1024c5bec; end: 1024c5bf7;  */

void FUN_1024c5bec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024c5bf8; end: 1024c5c57; -[_TtC25SpotlightScopeGraphBridge40SCSpotlightScopedServicesSaberEntryPoint init] */

void FUN_1024c5bf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightScopeGraphBridge.SCSpotlightScopedServicesSaberEntryPoint",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c5c24);
  (*pcVar1)();
}



/* Entry: 1024c5c58; end: 1024c5c8f; -[_TtC25SpotlightScopeGraphBridge40SCSpotlightScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c5c58(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9fd60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9fd58));
  return;
}



/* Entry: 1024c5c90; end: 1024c5c93;  */

void FUN_1024c5c90(void)

{
  return;
}



/* Entry: 1024c5c94; end: 1024c5cb3;  */

void FUN_1024c5c94(void)

{
  FUN_1024c5b04();
  return;
}



/* Entry: 1024c5cb4; end: 1024c5cd3;  */

void FUN_1024c5cb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128472f8);
  return;
}



/* Entry: 1024c5cd4; end: 1024c5da3;  */

undefined8 FUN_1024c5cd4(void)

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
  
  func_0x000107c61428(0x112e9fd90,&uStack_40,0x20,0);
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
    FUN_1024c5da4();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1024c5da4; end: 1024c5dc3;  */

void FUN_1024c5da4(void)

{
  func_0x000107c61168(&PTR_PTR_1128473c0);
  return;
}



/* Entry: 1024c5dc4; end: 1024c6187;  */

void FUN_1024c5dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9fd98,&UNK_10dab10a8);
  puVar1 = &UNK_110514918;
  func_0x000107c613fc(&UNK_110514918,0x98,7);
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
  func_0x000107c6157c();
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
  func_0x0001000823a8(FUN_1024c6188,puVar1);
  return;
}



/* Entry: 1024c6188; end: 1024c61cb;  */

void FUN_1024c6188(void)

{
  long unaff_x20;
  
  func_0x0001024c5f50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1024c61cc; end: 1024c6367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c61cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9fda0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fda8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdb0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdb8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdc0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdc8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdd0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdd8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fde0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fde8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdf0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fdf8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fe00) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fe08) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fe10) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fe18) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112e9fe20) = param_17;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024c6368; end: 1024c63c7; -[_TtC25SpotlightScopeGraphBridge33SpotlightScopeGraphBridgeServices init] */

void FUN_1024c6368(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightScopeGraphBridge.SpotlightScopeGraphBridgeServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024c6394);
  (*pcVar1)();
}



/* Entry: 1024c63c8; end: 1024c652f; -[_TtC25SpotlightScopeGraphBridge33SpotlightScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024c63e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c6404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c6424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c6444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c6464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c6484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c64a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024c64c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024c64a8) */
/* WARNING: Removing unreachable block (ram,0x0001024c6488) */
/* WARNING: Removing unreachable block (ram,0x0001024c6468) */
/* WARNING: Removing unreachable block (ram,0x0001024c6448) */
/* WARNING: Removing unreachable block (ram,0x0001024c6428) */
/* WARNING: Removing unreachable block (ram,0x0001024c6408) */
/* WARNING: Removing unreachable block (ram,0x0001024c63e8) */
/* WARNING: Removing unreachable block (ram,0x0001024c64c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c63c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9fdf0));
  return;
}



/* Entry: 1024c6530; end: 1024c653b;  */

void FUN_1024c6530(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d80,param_1);
  return;
}



/* Entry: 1024c653c; end: 1024c657b;  */

void FUN_1024c653c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6db4,0);
  return;
}



/* Entry: 1024c657c; end: 1024c6587;  */

void FUN_1024c657c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d88,param_1);
  return;
}



/* Entry: 1024c6588; end: 1024c65c7;  */

void FUN_1024c6588(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6db8,0);
  return;
}



/* Entry: 1024c65c8; end: 1024c65d3;  */

void FUN_1024c65c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d84,param_1);
  return;
}



/* Entry: 1024c65d4; end: 1024c6613;  */

void FUN_1024c65d4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6dbc,0);
  return;
}



/* Entry: 1024c6614; end: 1024c661f;  */

void FUN_1024c6614(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024c6620,param_1);
  return;
}



/* Entry: 1024c6620; end: 1024c6693;  */

void FUN_1024c6620(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1024c6694; end: 1024c669f;  */

void FUN_1024c6694(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d8c,param_1);
  return;
}



/* Entry: 1024c66a0; end: 1024c66df;  */

void FUN_1024c66a0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6dc4,0);
  return;
}



/* Entry: 1024c66e0; end: 1024c66eb;  */

void FUN_1024c66e0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d90,param_1);
  return;
}



/* Entry: 1024c66ec; end: 1024c672b;  */

void FUN_1024c66ec(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6dc8,0);
  return;
}



/* Entry: 1024c672c; end: 1024c6737;  */

void FUN_1024c672c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d94,param_1);
  return;
}



/* Entry: 1024c6738; end: 1024c6777;  */

void FUN_1024c6738(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6dcc,0);
  return;
}



/* Entry: 1024c6778; end: 1024c6783;  */

void FUN_1024c6778(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d98,param_1);
  return;
}



/* Entry: 1024c6784; end: 1024c67c3;  */

void FUN_1024c6784(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6dd0,0);
  return;
}



/* Entry: 1024c67c4; end: 1024c67cf;  */

void FUN_1024c67c4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6d9c,param_1);
  return;
}



/* Entry: 1024c67d0; end: 1024c680f;  */

void FUN_1024c67d0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6dd4,0);
  return;
}



/* Entry: 1024c6810; end: 1024c681b;  */

void FUN_1024c6810(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6da0,param_1);
  return;
}



/* Entry: 1024c681c; end: 1024c685b;  */

void FUN_1024c681c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6dd8,0);
  return;
}



/* Entry: 1024c685c; end: 1024c6867;  */

void FUN_1024c685c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6da4,param_1);
  return;
}



/* Entry: 1024c6868; end: 1024c68a7;  */

void FUN_1024c6868(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6ddc,0);
  return;
}



/* Entry: 1024c68a8; end: 1024c68b3;  */

void FUN_1024c68a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6da8,param_1);
  return;
}



/* Entry: 1024c68b4; end: 1024c693f;  */

void FUN_1024c68b4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1024c6de0,0);
  return;
}



/* Entry: 1024c6940; end: 1024c694b;  */

void FUN_1024c6940(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1024c6dac,param_1);
  return;
}



/* Entry: 1024c694c; end: 1024c69a3;  */

void FUN_1024c694c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1024c69a4; end: 1024c69ab;  */

undefined8 FUN_1024c69a4(void)

{
  return 0x1b;
}



/* Entry: 1024c69ac; end: 1024c6b23;  */

void FUN_1024c69ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110514940;
  func_0x000107c613fc(&UNK_110514940,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024c6b24,puVar1);
  return;
}



/* Entry: 1024c6b24; end: 1024c6b2b;  */

void FUN_1024c6b24(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9fd90,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9fd90,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110514d18;
  func_0x000107c613fc(&UNK_110514d18,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1024c6d78;
  func_0x00010058fa64(0x1024c6d78,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024c6b2c; end: 1024c6b87;  */

void FUN_1024c6b2c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9fd90,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9fd90,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1024c6b88; end: 1024c6de3;  */

undefined ** FUN_1024c6b88(void)

{
  return &PTR_DAT_113067000;
}



/* Entry: 1024c6de4; end: 1024c6e2b; -[SCSpotlightScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6de4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fe78;
  func_0x000107c61428(param_1 + _DAT_112e9fe78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024c6e2c; end: 1024c6e83; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fe78;
  func_0x000107c61428(param_1 + _DAT_112e9fe78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024c6e84; end: 1024c6ecb; -[SCSpotlightScopeGraphBridgeSaberEntryPoint creatorsSpotlightSubmissionV2ScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6e84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fe80;
  func_0x000107c61428(param_1 + _DAT_112e9fe80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c6ecc; end: 1024c6ed7; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setCreatorsSpotlightSubmissionV2ScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fe80;
  func_0x000107c61428(param_1 + _DAT_112e9fe80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c6ed8; end: 1024c6f1f; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCBloopsReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6ed8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fe88;
  func_0x000107c61428(param_1 + _DAT_112e9fe88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c6f20; end: 1024c6f2b; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCBloopsReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fe88;
  func_0x000107c61428(param_1 + _DAT_112e9fe88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c6f2c; end: 1024c6f73; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCBusinessProfilesPresenterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6f2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fe90;
  func_0x000107c61428(param_1 + _DAT_112e9fe90,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c6f74; end: 1024c6f7f; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCBusinessProfilesPresenterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fe90;
  func_0x000107c61428(param_1 + _DAT_112e9fe90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c6f80; end: 1024c6fc7; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCCreatorsSpotlightSubmissionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6f80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fe98;
  func_0x000107c61428(param_1 + _DAT_112e9fe98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c6fc8; end: 1024c6fd3; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCCreatorsSpotlightSubmissionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fe98;
  func_0x000107c61428(param_1 + _DAT_112e9fe98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c6fd4; end: 1024c701b; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCDSAExplainerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c6fd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fea0;
  func_0x000107c61428(param_1 + _DAT_112e9fea0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c701c; end: 1024c7027; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCDSAExplainerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c701c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fea0;
  func_0x000107c61428(param_1 + _DAT_112e9fea0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c7028; end: 1024c706f; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCDeeplinkSendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7028(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fea8;
  func_0x000107c61428(param_1 + _DAT_112e9fea8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c7070; end: 1024c707b; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCDeeplinkSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fea8;
  func_0x000107c61428(param_1 + _DAT_112e9fea8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c707c; end: 1024c70c3; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCDiscoverFeedExpandedStoryFeedScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c707c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9feb0;
  func_0x000107c61428(param_1 + _DAT_112e9feb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c70c4; end: 1024c70cf; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCDiscoverFeedExpandedStoryFeedScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c70c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9feb0;
  func_0x000107c61428(param_1 + _DAT_112e9feb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c70d0; end: 1024c7117; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCDiscoverFeedManagementScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c70d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9feb8;
  func_0x000107c61428(param_1 + _DAT_112e9feb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c7118; end: 1024c7123; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCDiscoverFeedManagementScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7118(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9feb8;
  func_0x000107c61428(param_1 + _DAT_112e9feb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c7124; end: 1024c716b; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fec0;
  func_0x000107c61428(param_1 + _DAT_112e9fec0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c716c; end: 1024c7177; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c716c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fec0;
  func_0x000107c61428(param_1 + _DAT_112e9fec0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c7178; end: 1024c71bf; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCSafetyReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7178(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fec8;
  func_0x000107c61428(param_1 + _DAT_112e9fec8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c71c0; end: 1024c71cb; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCSafetyReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c71c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fec8;
  func_0x000107c61428(param_1 + _DAT_112e9fec8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c71cc; end: 1024c7213; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCSearchScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c71cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fed0;
  func_0x000107c61428(param_1 + _DAT_112e9fed0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c7214; end: 1024c721f; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCSearchScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7214(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fed0;
  func_0x000107c61428(param_1 + _DAT_112e9fed0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c7220; end: 1024c7267; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCSendToScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fed8;
  func_0x000107c61428(param_1 + _DAT_112e9fed8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c7268; end: 1024c7273; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCSendToScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fed8;
  func_0x000107c61428(param_1 + _DAT_112e9fed8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c7274; end: 1024c72bb; -[SCSpotlightScopeGraphBridgeSaberEntryPoint sCSpotlightRepliesScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7274(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fee0;
  func_0x000107c61428(param_1 + _DAT_112e9fee0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c72bc; end: 1024c72c7; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSCSpotlightRepliesScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c72bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fee0;
  func_0x000107c61428(param_1 + _DAT_112e9fee0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c72c8; end: 1024c730f; -[SCSpotlightScopeGraphBridgeSaberEntryPoint spotlightScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c72c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9fee8;
  func_0x000107c61428(param_1 + _DAT_112e9fee8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024c7310; end: 1024c731b; -[SCSpotlightScopeGraphBridgeSaberEntryPoint setSpotlightScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024c7310(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9fee8;
  func_0x000107c61428(param_1 + _DAT_112e9fee8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024c731c; end: 1024c737b;  */

void FUN_1024c731c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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


