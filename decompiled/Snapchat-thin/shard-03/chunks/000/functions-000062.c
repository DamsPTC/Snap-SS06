/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102449518; end: 10244968f;  */

long FUN_102449518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112e9a918,&UNK_10dabac60);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_10244c2d4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010244b4a8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  FUN_10244b5d0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 102449690; end: 1024496d3;  */

void FUN_102449690(void)

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



/* Entry: 1024496d4; end: 1024496db;  */

undefined8 FUN_1024496d4(void)

{
  return 0x1b;
}



/* Entry: 1024496dc; end: 10244975f;  */

void FUN_1024496dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024497d0,param_2,FUN_1024497d4,param_2,0x1024497fc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102449760; end: 10244978f;  */

undefined ** FUN_102449760(void)

{
  return &PTR_DAT_112ec2778;
}



/* Entry: 102449790; end: 1024497af;  */

void FUN_102449790(void)

{
  func_0x000107c61168(&PTR_PTR_112e9a988);
  return;
}



/* Entry: 1024497b0; end: 1024497d3;  */

undefined1  [16] FUN_1024497b0(void)

{
  return ZEXT816(0x110509cb0);
}



/* Entry: 1024497d4; end: 102449827;  */

void FUN_1024497d4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102449828; end: 102449863;  */

void FUN_102449828(undefined8 *param_1,undefined8 param_2)

{
  FUN_102449864();
  func_0x0001000a7f38("SponsoredSnapPlaybackScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 102449864; end: 102449a4f;  */

void FUN_102449864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110550e08;
  ppuVar4 = &PTR_DAT_112ec2778;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e9aa08;
  func_0x0001000285a8(0x112e9aa08,&UNK_10daa7a88);
  func_0x0001000a6ee8(&UNK_110509cb0,
                      "SponsoredSnapPlaybackEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_102449ac4,param_1,uVar2,&UNK_110509cb0,&PTR_DAT_112e9a920);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110509d00;
  func_0x000107c613fc(&UNK_110509d00,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110509f20,
                      "SponsoredSnapPlaybackScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_102449acc,puVar3,uVar2,&UNK_110509f20,&PTR_DAT_112e9aaa0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110509d28;
  func_0x000107c613fc(&UNK_110509d28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110509ad0,
                      "SponsoredSnapPlaybackScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_102449bb4,puVar3,uVar2,&UNK_110509ad0,&PTR_DAT_112e9a898);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e9aa10;
  func_0x0001000285a8(0x112e9aa10,&UNK_10daa7a90);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102449a50; end: 102449ac3;  */

void FUN_102449a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102449bf0;
  func_0x0001000823a8(0x102449bf0,param_3);
  func_0x000100082720("SponsoredSnapPlaybackEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102449ac4; end: 102449acb;  */

void FUN_102449ac4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102449bf0;
  func_0x0001000823a8();
  func_0x000100082720("SponsoredSnapPlaybackEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102449acc; end: 102449b0b;  */

void FUN_102449acc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10244a37c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SponsoredSnapPlaybackScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102449b0c; end: 102449bb3;  */

void FUN_102449b0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110509d50;
  func_0x000107c613fc(&UNK_110509d50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102449be8;
  func_0x0001000823a8(FUN_102449be8,puVar1);
  func_0x000100082720("SponsoredSnapPlaybackScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 102449bb4; end: 102449bbb;  */

void FUN_102449bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110509d50;
  func_0x000107c613fc(&UNK_110509d50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102449be8;
  func_0x0001000823a8(FUN_102449be8,puVar3);
  func_0x000100082720("SponsoredSnapPlaybackScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 102449bbc; end: 102449be7;  */

void FUN_102449bbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102449be8; end: 102449bf7;  */

void FUN_102449be8(undefined8 *param_1)

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
  puVar1 = &UNK_110509b58;
  func_0x000107c613fc(&UNK_110509b58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102448e40;
  func_0x00010058fa64(FUN_102448e40,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102449bf8; end: 102449cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102449bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10244a00c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e9aa18) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9aa20) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102449cd4);
  (*pcVar1)();
}



/* Entry: 102449cd4; end: 102449d33; -[_TtC37SponsoredSnapPlaybackScopeGraphBridge52SponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_102449cd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapPlaybackScopeGraphBridge.SponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102449d00);
  (*pcVar1)();
}



/* Entry: 102449d34; end: 102449d6b; -[_TtC37SponsoredSnapPlaybackScopeGraphBridge52SponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102449d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102449d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102449d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9aa18));
  return;
}



/* Entry: 102449d6c; end: 102449d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102449d6c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9aa20),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9aa18));
  return;
}



/* Entry: 102449d94; end: 102449db3;  */

void FUN_102449d94(void)

{
  func_0x000107c61168(&PTR_PTR_112840a78);
  return;
}



/* Entry: 102449db4; end: 102449e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102449db4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9aa50) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9aa58);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102449e3c);
  (*pcVar2)();
}



/* Entry: 102449e3c; end: 102449f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102449e3c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9aa50);
  *(undefined **)(unaff_x20 + _DAT_112e9aa50) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9aa58);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9aa58))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110509e40;
  func_0x000107c613fc(&UNK_110509e40,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102449f28,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102449f24; end: 102449f2f;  */

void FUN_102449f24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102449f30; end: 102449f8f; -[_TtC37SponsoredSnapPlaybackScopeGraphBridge50SponsoredSnapPlaybackScopedServicesSaberEntryPoint init] */

void FUN_102449f30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapPlaybackScopeGraphBridge.SponsoredSnapPlaybackScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102449f5c);
  (*pcVar1)();
}



/* Entry: 102449f90; end: 102449fc7; -[_TtC37SponsoredSnapPlaybackScopeGraphBridge50SponsoredSnapPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102449f90(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9aa58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9aa50));
  return;
}



/* Entry: 102449fc8; end: 102449fcb;  */

void FUN_102449fc8(void)

{
  return;
}



/* Entry: 102449fcc; end: 102449feb;  */

void FUN_102449fcc(void)

{
  FUN_102449e3c();
  return;
}



/* Entry: 102449fec; end: 10244a00b;  */

void FUN_102449fec(void)

{
  func_0x000107c61168(&PTR_PTR_112840b40);
  return;
}



/* Entry: 10244a00c; end: 10244a0db;  */

undefined8 FUN_10244a00c(void)

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
  
  func_0x000107c61428(0x112e9aa88,&uStack_40,0x20,0);
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
    FUN_10244a0dc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10244a0dc; end: 10244a0fb;  */

void FUN_10244a0dc(void)

{
  func_0x000107c61168(&PTR_PTR_112840c08);
  return;
}



/* Entry: 10244a0fc; end: 10244a117;  */

void FUN_10244a0fc(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9aa90,&UNK_10daa7b68);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10244a184,param_1);
  return;
}



/* Entry: 10244a118; end: 10244a183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a118(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10244a0dc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e9aa98) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10244a184; end: 10244a18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a184(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10244a0dc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e9aa98) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10244a18c; end: 10244a1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a18c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9aa98) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244a1d8; end: 10244a237; -[_TtC37SponsoredSnapPlaybackScopeGraphBridge45SponsoredSnapPlaybackScopeGraphBridgeServices init] */

void FUN_10244a1d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapPlaybackScopeGraphBridge.SponsoredSnapPlaybackScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10244a204);
  (*pcVar1)();
}



/* Entry: 10244a238; end: 10244a247; -[_TtC37SponsoredSnapPlaybackScopeGraphBridge45SponsoredSnapPlaybackScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9aa98));
  return;
}



/* Entry: 10244a248; end: 10244a2d3;  */

void FUN_10244a248(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10244a288,0);
  return;
}



/* Entry: 10244a2d4; end: 10244a2ef;  */

void FUN_10244a2d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10244a340,param_1);
  return;
}



/* Entry: 10244a2f0; end: 10244a33f;  */

void FUN_10244a2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10244a340; end: 10244a373;  */

void FUN_10244a340(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10244a374; end: 10244a37b;  */

undefined8 FUN_10244a374(void)

{
  return 0x1b;
}



/* Entry: 10244a37c; end: 10244a4f3;  */

void FUN_10244a37c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110509e88;
  func_0x000107c613fc(&UNK_110509e88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10244a4f4,puVar1);
  return;
}



/* Entry: 10244a4f4; end: 10244a4fb;  */

void FUN_10244a4f4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9aa88,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9aa88,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110509f60;
  func_0x000107c613fc(&UNK_110509f60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10244a5c8;
  func_0x00010058fa64(0x10244a5c8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10244a4fc; end: 10244a557;  */

void FUN_10244a4fc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9aa88,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9aa88,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10244a558; end: 10244a5cf;  */

undefined ** FUN_10244a558(void)

{
  return &PTR_DAT_112ec2778;
}



/* Entry: 10244a5d0; end: 10244a617; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a5d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9aaf0;
  func_0x000107c61428(param_1 + _DAT_112e9aaf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10244a618; end: 10244a66f; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a618(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9aaf0;
  func_0x000107c61428(param_1 + _DAT_112e9aaf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10244a670; end: 10244a6b7; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint sCAdOperaSessionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a670(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9aaf8;
  func_0x000107c61428(param_1 + _DAT_112e9aaf8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10244a6b8; end: 10244a6c3; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint setSCAdOperaSessionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9aaf8;
  func_0x000107c61428(param_1 + _DAT_112e9aaf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10244a6c4; end: 10244a70b; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint sponsoredSnapPlaybackScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a6c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9ab00;
  func_0x000107c61428(param_1 + _DAT_112e9ab00,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10244a70c; end: 10244a717; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint setSponsoredSnapPlaybackScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9ab00;
  func_0x000107c61428(param_1 + _DAT_112e9ab00,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10244a718; end: 10244a777;  */

void FUN_10244a718(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10244a778; end: 10244a933;  */

/* WARNING: Possible PIC construction at 0x00010244a890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244a8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244a8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244a908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244a8c8) */
/* WARNING: Removing unreachable block (ram,0x00010244a8b8) */
/* WARNING: Removing unreachable block (ram,0x00010244a894) */
/* WARNING: Removing unreachable block (ram,0x00010244a90c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244a778(void)

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
  func_0x000107c509ec();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b864();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102449d94();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10244a00c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10244a934);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e9aa18) = lVar5;
      *(long *)(lVar3 + _DAT_112e9aa20) = unaff_x20;
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



/* Entry: 10244a934; end: 10244a95b; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10244a934(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10244a778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244a95c; end: 10244a99f; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint end] */

void FUN_10244a95c(undefined8 param_1)

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



/* Entry: 10244a9a0; end: 10244aba3;  */

void FUN_10244a9a0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f8a380)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f075c80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f625e0)) &&
           (func_0x000107c605b8(0xd000000000000034,0x800000010f09da20,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SponsoredSnapPlaybackScopeGraphBridge/SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x62,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10244aba4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c596a0();
        goto LAB_10244aa2c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57f94();
  }
LAB_10244aa2c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10244aba4; end: 10244ac4f; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10244aba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10244a9a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10244ac50; end: 10244acc7; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ac50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9aaf0,0);
  *(undefined8 *)(param_1 + _DAT_112e9aaf8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9ab00) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9ab08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244acc8; end: 10244acfb;  */

void FUN_10244acc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10244acfc; end: 10244ad53; -[SCSponsoredSnapPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010244ad28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244ad2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244acfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9aaf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9aaf8));
  return;
}



/* Entry: 10244ad54; end: 10244ad73;  */

void FUN_10244ad54(void)

{
  func_0x000107c61168(&PTR_PTR_112840cc8);
  return;
}



/* Entry: 10244ad74; end: 10244adbb; -[SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ad74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9ab38;
  func_0x000107c61428(param_1 + _DAT_112e9ab38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10244adbc; end: 10244ae13; -[SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244adbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9ab38;
  func_0x000107c61428(param_1 + _DAT_112e9ab38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10244ae14; end: 10244aeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244ae14(undefined8 param_1,long param_2)

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
    FUN_102449fec();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9aa50) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10244aeec);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9aa58);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9ab40);
    *(long **)(unaff_x20 + _DAT_112e9ab40) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10244aeec; end: 10244af13; -[SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint begin] */

void FUN_10244aeec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10244ae14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244af14; end: 10244b08b;  */

/* WARNING: Possible PIC construction at 0x00010244af7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244b014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244af80) */
/* WARNING: Removing unreachable block (ram,0x00010244b018) */
/* WARNING: Removing unreachable block (ram,0x00010244b030) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244af14(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9ab40);
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



/* Entry: 10244b08c; end: 10244b093;  */

void FUN_10244b08c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10244b094; end: 10244b0c7; -[SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint end] */

void FUN_10244b094(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10244af14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10244b0c8; end: 10244b1e7;  */

void FUN_10244b0c8(long param_1,long param_2,long param_3)

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
                        "SponsoredSnapPlaybackScopeGraphBridge/SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10244b1e8);
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



/* Entry: 10244b1e8; end: 10244b293; -[SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10244b1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10244b0c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10244b294; end: 10244b2f3; -[SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244b294(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9ab38,0);
  *(undefined8 *)(param_1 + _DAT_112e9ab40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244b2f4; end: 10244b327;  */

void FUN_10244b2f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10244b328; end: 10244b35f; -[SCSponsoredSnapPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244b328(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9ab38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ab40));
  return;
}



/* Entry: 10244b360; end: 10244b37f;  */

void FUN_10244b360(void)

{
  func_0x000107c61168(&PTR_PTR_112840d98);
  return;
}



/* Entry: 10244b380; end: 10244b5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10244b380(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  
  puVar1 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9ab70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ab78) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ab80) = param_2;
  uVar2 = *(undefined8 *)(param_3 + _DAT_113010968);
  *(undefined8 *)(unaff_x20 + _DAT_112e9ab88) = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(uVar2);
  uVar2 = param_4;
  func_0x000107c498a0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e9ab90) = uVar2;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 10244b5d0; end: 10244b8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244b5d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long alStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e9ab70);
  lVar1 = *(long *)(lVar5 + _DAT_112ec2728);
  func_0x000107c5b810();
  func_0x000107c61180();
  lVar4 = _DAT_112ec2748;
  lVar2 = _DAT_112ec2730;
  if (lVar1 == 0) {
    func_0x000107c61428(lVar5 + _DAT_112ec2748,auStack_78,0,0);
    lVar5 = lVar5 + lVar4;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c5b85c();
      func_0x000107c615e8(lVar5);
    }
  }
  else {
    func_0x000107c61428(lVar5 + _DAT_112ec2730,auStack_78,0,0);
    lVar2 = lVar5 + lVar2;
    func_0x000107c61618();
    lVar4 = _DAT_112ec2748;
    if (lVar2 == 0) {
      func_0x000107c61428(lVar5 + _DAT_112ec2748,alStack_90,0,0);
      lVar5 = lVar5 + lVar4;
      func_0x000107c61618();
      if (lVar5 != 0) {
        func_0x000107c5b85c();
        func_0x000107c615e8(lVar5);
      }
    }
    else {
      func_0x000107c61174(lVar1);
      func_0x0001000d224c(alStack_90);
      lVar3 = alStack_90[0];
      func_0x000107c4e370();
      func_0x000107c61180();
      func_0x000107c615e8(alStack_90[0]);
      lVar4 = _DAT_112ec2738;
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar4 = _DAT_112ec2748;
        func_0x000107c61428(lVar5 + _DAT_112ec2748,alStack_90,0,0);
        lVar5 = lVar5 + lVar4;
        func_0x000107c61618();
        if (lVar5 != 0) {
          func_0x000107c5b85c();
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar7 = *(long *)(unaff_x20 + _DAT_112e9ab80);
        func_0x000107c61428(lVar5 + _DAT_112ec2738,alStack_90,0,0);
        lVar4 = lVar5 + lVar4;
        func_0x000107c61618(lVar4);
        lVar8 = ((undefined8 *)(lVar5 + _DAT_112ec2760))[1];
        if (lVar8 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar5 + _DAT_112ec2760);
          func_0x000107c61434(lVar8);
          func_0x000107c5fadc(uVar6,lVar8);
          func_0x000107c6142c(lVar8);
        }
        func_0x000107c3ed1c(lVar7);
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar6);
        func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112e9ab78));
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        lVar1 = lVar7;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10244b8bc; end: 10244b8ef;  */

void FUN_10244b8bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10244b8f0; end: 10244b977; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244b8f0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9ab70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9ab78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9ab80));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e9ab88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e9ab90));
  return;
}



/* Entry: 10244b978; end: 10244b97f;  */

undefined8 FUN_10244b978(void)

{
  return 0;
}



/* Entry: 10244b980; end: 10244bae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244b980(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ec2750;
  puVar3 = auStack_70;
  lVar5 = *(long *)(unaff_x20 + _DAT_112e9ab70);
  func_0x000107c61428(lVar5 + _DAT_112ec2750,auStack_58,0,0);
  lVar2 = lVar5 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4df30();
    func_0x000107c615e8(lVar2);
  }
  lVar2 = _DAT_112ec2748;
  func_0x000107c61428(lVar5 + _DAT_112ec2748,auStack_70,0,0);
  lVar2 = lVar5 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5b86c();
    func_0x000107c615e8(lVar2);
  }
  lVar2 = _DAT_112ec2728;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e9ab90);
  lVar1 = *(long *)(lVar5 + _DAT_112ec2728);
  func_0x000107c40674();
  func_0x000107c61180();
  puVar4 = puVar3;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    puVar4 = puVar3;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
  }
  lVar2 = *(long *)(lVar5 + lVar2);
  func_0x000107c40258();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
  }
  func_0x000107c4067c(uVar6);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10244bae4; end: 10244baef; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_10244bae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_10244b980(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244baf0; end: 10244bc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244baf0(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ec2750;
  lVar6 = *(long *)(unaff_x20 + _DAT_112e9ab70);
  puVar3 = auStack_58;
  func_0x000107c61428(lVar6 + _DAT_112ec2750,puVar3,0,0);
  lVar2 = lVar6 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4df20();
    func_0x000107c615e8(lVar2);
  }
  lVar2 = _DAT_112ec2728;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e9ab90);
  lVar1 = *(long *)(lVar6 + _DAT_112ec2728);
  func_0x000107c40674();
  func_0x000107c61180();
  puVar4 = puVar3;
  if (lVar1 == 0) {
    func_0x000107c5faec();
    puVar4 = puVar3;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
  }
  lVar2 = *(long *)(lVar6 + lVar2);
  func_0x000107c40258();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
  }
  func_0x000107c40678(uVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10244bc10; end: 10244bc1b; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_10244bc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_10244baf0(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244bc1c; end: 10244bcdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244bc1c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2750;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9ab70);
  func_0x000107c61428(lVar2 + _DAT_112ec2750,auStack_48,0,0);
  lVar1 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4df2c();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = _DAT_112ec2748;
  func_0x000107c61428(lVar2 + _DAT_112ec2748,auStack_60,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5b868();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10244bce0; end: 10244bceb; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_10244bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_10244bc1c(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244bcec; end: 10244bd57;  */

void FUN_10244bcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244bd58; end: 10244bdeb; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterDidCancelDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244bd58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2750;
  lVar2 = *(long *)(param_1 + _DAT_112e9ab70);
  func_0x000107c61428(lVar2 + _DAT_112ec2750,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c4df14(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10244bdec; end: 10244bf37; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterWillBeginAnimatingToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244bdec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2750;
  lVar2 = *(long *)(param_1 + _DAT_112e9ab70);
  func_0x000107c61428(lVar2 + _DAT_112ec2750,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c4df28(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10244bf38; end: 10244bf43; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterDidFailToPresent:] */

void FUN_10244bf38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x10244be80)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244bf44; end: 10244c08f; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244bf44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2750;
  lVar2 = *(long *)(param_1 + _DAT_112e9ab70);
  func_0x000107c61428(lVar2 + _DAT_112ec2750,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c4df1c(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10244c090; end: 10244c09b; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenterDidTearDown:] */

void FUN_10244c090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x10244bfd8)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244c09c; end: 10244c0ef;  */

void FUN_10244c09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10244c0f0; end: 10244c1f7; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244c0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  lVar1 = _DAT_112ec2750;
  lVar3 = *(long *)(param_1 + _DAT_112e9ab70);
  func_0x000107c61428(lVar3 + _DAT_112ec2750,auStack_68,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_1);
  }
  else {
    puVar2 = auStack_50;
    func_0x0001006732c8(puVar2,uStack_38);
    func_0x000107c605b0();
    func_0x000107c4df0c(lVar3);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar3);
    func_0x000107c615e8(puVar2);
  }
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10244c1f8; end: 10244c2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244c1f8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ec2750;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9ab70);
  func_0x000107c61428(lVar2 + _DAT_112ec2750,auStack_58,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x0001006732c8(param_2,*(undefined8 *)(param_2 + 0x18));
    func_0x000107c605b0();
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x000107c4df10(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(param_2);
    func_0x000107c615e8(param_3);
  }
  return;
}



/* Entry: 10244c2d4; end: 10244c2f3;  */

void FUN_10244c2d4(void)

{
  func_0x000107c61168(&PTR_PTR_112840e58);
  return;
}



/* Entry: 10244c2f4; end: 10244c417; -[_TtC35SponsoredSnapPlaybackImplementation31SponsoredSnapPlaybackEntryPoint operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_10244c2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  func_0x000107c60234(auStack_70,param_5);
  func_0x000107c615e8(param_5);
  FUN_10244c1f8(param_3,auStack_50,auStack_70);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_70);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10244c418; end: 10244c483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10244c418(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9abc8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10244c484; end: 10244c4e3; -[_TtC44SCAdOperaSessionScopedFactoryServiceProvider30SCAdOperaSessionScopedServices init] */

void FUN_10244c484(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaSessionScopedFactoryServiceProvider.SCAdOperaSessionScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10244c4b0);
  (*pcVar1)();
}


