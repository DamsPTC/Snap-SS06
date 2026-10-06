/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c3f858; end: 102c3f85f;  */

undefined8 FUN_102c3f858(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102c889f8();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 102c3f860; end: 102c3fc93;  */

void FUN_102c3f860(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_102c3fdbc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  func_0x0001000285a8(0x112f02d28,&UNK_10db369c8);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x0001003b3b80();
  puVar7 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x18) = puVar7;
  func_0x000102c83d64(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar6;
  func_0x000102c833ac();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  func_0x000107c6157c();
  FUN_102c83c68();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 102c3fc94; end: 102c3fcff;  */

void FUN_102c3fc94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102c3fd00; end: 102c3fd07;  */

undefined8 FUN_102c3fd00(void)

{
  return 0x1b;
}



/* Entry: 102c3fd08; end: 102c3fd8b;  */

void FUN_102c3fd08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c3fdfc,param_2,FUN_102c3fe00,param_2,0x102c3fe28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c3fd8c; end: 102c3fdbb;  */

undefined ** FUN_102c3fd8c(void)

{
  return &PTR_DAT_113066760;
}



/* Entry: 102c3fdbc; end: 102c3fddb;  */

void FUN_102c3fdbc(void)

{
  func_0x000107c61168(&PTR_PTR_112f02d98);
  return;
}



/* Entry: 102c3fddc; end: 102c3fdff;  */

undefined1  [16] FUN_102c3fddc(void)

{
  return ZEXT816(0x1105b6ab8);
}



/* Entry: 102c3fe00; end: 102c3fe53;  */

void FUN_102c3fe00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c3fe54; end: 102c3ff03;  */

void FUN_102c3fe54(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_102c400cc();
  func_0x000107c613fc();
  func_0x000102c44914(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_102c447b0();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_102c447bc();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 102c3ff04; end: 102c3ff8f;  */

long FUN_102c3ff04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000102c44914(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c447b0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102c447bc();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return unaff_x20;
}



/* Entry: 102c3ff90; end: 102c3ffbb;  */

void FUN_102c3ff90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c3ffbc; end: 102c4000f;  */

void FUN_102c3ffbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c40010; end: 102c40017;  */

undefined8 FUN_102c40010(void)

{
  return 0x1b;
}



/* Entry: 102c40018; end: 102c4009b;  */

void FUN_102c40018(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x102c4011c,param_2,FUN_102c40120,param_2,0x102c40148,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c4009c; end: 102c400cb;  */

undefined ** FUN_102c4009c(void)

{
  return &PTR_DAT_113066760;
}



/* Entry: 102c400cc; end: 102c400eb;  */

void FUN_102c400cc(void)

{
  func_0x000107c61168(&PTR_PTR_112f02e90);
  return;
}



/* Entry: 102c400ec; end: 102c4011f;  */

undefined1  [16] FUN_102c400ec(void)

{
  return ZEXT816(0x1105b6b38);
}



/* Entry: 102c40120; end: 102c40173;  */

void FUN_102c40120(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c40174; end: 102c40297;  */

void FUN_102c40174(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_102c40468();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_102c80a24(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_102c8069c();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x000102c80940();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 102c40298; end: 102c40377;  */

long FUN_102c40298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_102c80a24(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c8069c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x000102c80940();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102c40378; end: 102c403ab;  */

void FUN_102c40378(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c403ac; end: 102c403b3;  */

undefined8 FUN_102c403ac(void)

{
  return 0x1b;
}



/* Entry: 102c403b4; end: 102c40437;  */

void FUN_102c403b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102c404a8,param_2,FUN_102c404ac,param_2,0x102c404d4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102c40438; end: 102c40467;  */

undefined ** FUN_102c40438(void)

{
  return &PTR_DAT_113066760;
}



/* Entry: 102c40468; end: 102c40487;  */

void FUN_102c40468(void)

{
  func_0x000107c61168(&PTR_PTR_112f02f60);
  return;
}



/* Entry: 102c40488; end: 102c404ab;  */

undefined1  [16] FUN_102c40488(void)

{
  return ZEXT816(0x1105b6bd8);
}



/* Entry: 102c404ac; end: 102c404ff;  */

void FUN_102c404ac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102c40500; end: 102c405ef;  */

/* WARNING: Possible PIC construction at 0x000102c405b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c405c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c405d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c405c4) */
/* WARNING: Removing unreachable block (ram,0x000102c405b4) */
/* WARNING: Removing unreachable block (ram,0x000102c405d4) */

void FUN_102c40500(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105b6c28;
  func_0x000107c613fc(&UNK_1105b6c28,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112f02fd0;
  func_0x0001000285a8(0x112f02fd0,&UNK_10db36df0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c40690;
  func_0x0001000841fc(FUN_102c40690,puVar1,uVar2);
  func_0x000100084214("AdPlaybackFeaturePluginRegistryServiceProvider",0x2e,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102c405f0; end: 102c4068f;  */

void FUN_102c405f0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\0') {
    FUN_102c41018();
    pcVar1 = "AdExitMultiSegmentPluginProvider";
    uVar2 = 0x20;
  }
  else if (*param_2 == '\x01') {
    FUN_102c410f0(param_4,param_5,param_6,param_7,param_8,param_3);
    pcVar1 = "AdPlaybackSwipeControlPluginProvider";
    uVar2 = 0x24;
    param_3 = param_4;
  }
  else {
    FUN_102c412ac(param_4,param_5);
    pcVar1 = "AdPlaybackTransitionPluginProvider";
    uVar2 = 0x22;
    param_3 = param_4;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 102c40690; end: 102c4069f;  */

void FUN_102c40690(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*param_2 == '\0') {
    FUN_102c41018();
    pcVar2 = "AdExitMultiSegmentPluginProvider";
    uVar4 = 0x20;
  }
  else if (*param_2 == '\x01') {
    FUN_102c410f0(uVar3,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                  *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),uVar1);
    pcVar2 = "AdPlaybackSwipeControlPluginProvider";
    uVar4 = 0x24;
    uVar1 = uVar3;
  }
  else {
    FUN_102c412ac(uVar3,*(undefined8 *)(unaff_x20 + 0x20));
    pcVar2 = "AdPlaybackTransitionPluginProvider";
    uVar4 = 0x22;
    uVar1 = uVar3;
  }
  func_0x000100082720(pcVar2,uVar4,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c406a0; end: 102c40c33;  */

void FUN_102c406a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cec0;
  ppuVar4 = &PTR_DAT_113066760;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f02fd8;
  func_0x0001000285a8(0x112f02fd8,&UNK_10db36df8);
  func_0x0001000a6ee8(&UNK_1105b6658,
                      "AdAttachmentInteractionEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_102c40c34,param_2,uVar2,&UNK_1105b6658,&PTR_DAT_112f025a8);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105b66d8,
                      "AdAutoAttachmentTriggerEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      0x102c40c60,param_3,uVar2,&UNK_1105b66d8,&PTR_DAT_112f026e0);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105b6778,
                      "AdChromePlaybackSessionServiceProviderWrapperScopeInitializationPluginKey",
                      0x49,2,0x102c40c8c,param_4,uVar2,&UNK_1105b6778,&PTR_DAT_112f02800);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1105b6818,"AdPageRegistryEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,0x102c40cb8,param_5,uVar2,&UNK_1105b6818,&PTR_DAT_112f028d8);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105b6898,
                      "AdPharmaDisclaimerInteractionEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,0x102c40ce4,param_6,uVar2,&UNK_1105b6898,&PTR_DAT_112f029b8);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_1105b6938,
                      "AdPlaybackEventServiceProviderWrapperScopeInitializationPluginKey",0x41,2,
                      0x102c40d10,param_7,uVar2,&UNK_1105b6938,&PTR_DAT_112f02a98);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1105b69b8,
                      "AdPlaybackFeatureEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      0x102c40d3c,param_8,uVar2,&UNK_1105b69b8,&PTR_DAT_112f02b78);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_1105b6a38,
                      "AdPlaybackOperaEventsEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      0x102c40d68,param_9,uVar2,&UNK_1105b6a38,&PTR_DAT_112f02c48);
  func_0x000107c61574(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_1105b6ab8,"AdPlaybackPageEntryPointWrapperScopeInitializationPluginKey",
                      0x3b,2,0x102c40d94,param_10,uVar2,&UNK_1105b6ab8,&PTR_DAT_112f02d30);
  func_0x000107c61574(param_10);
  puVar3 = &UNK_1105b6c50;
  func_0x000107c613fc(&UNK_1105b6c50,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_12;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_1105b7228,"AdPlaybackScopeGraphBridgeScopeInitializationPluginKey",0x36,2
                      ,FUN_102c40dc0,puVar3,uVar2,&UNK_1105b7228,&PTR_DAT_112f031a0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_13);
  func_0x0001000a6ee8(&UNK_1105b6b58,
                      "ArExperienceAdPlaybackServiceProviderWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_102c40e00,param_13,uVar2,&UNK_1105b6b58,&PTR_DAT_112f02e28);
  func_0x000107c61574(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000a6ee8(&UNK_1105b6bd8,
                      "DpaPlaybackEventHandlingEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_102c40eb0,param_14,uVar2,&UNK_1105b6bd8,&PTR_DAT_112f02ef8);
  func_0x000107c61574(param_14);
  puVar3 = &UNK_1105b6c78;
  func_0x000107c613fc(&UNK_1105b6c78,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_15;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_15);
  func_0x0001000a6ee8(&UNK_1105b62e8,"SCAdPlaybackScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_102c40f84,puVar3,uVar2,&UNK_1105b62e8,&PTR_DAT_112f024b0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f02fe0;
  func_0x0001000285a8(0x112f02fe0,&UNK_10db36e00);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCAdPlaybackScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102c40c34; end: 102c40dbf;  */

void FUN_102c40c34(void)

{
  FUN_102c40e2c();
  return;
}



/* Entry: 102c40dc0; end: 102c40dff;  */

void FUN_102c40dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102c42124(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdPlaybackScopeGraphBridgeScopeInitializationPluginProvider",0x3b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102c40e00; end: 102c40e2b;  */

void FUN_102c40e00(void)

{
  FUN_102c40e2c();
  return;
}



/* Entry: 102c40e2c; end: 102c40eaf;  */

void FUN_102c40e2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 102c40eb0; end: 102c40edb;  */

void FUN_102c40eb0(void)

{
  FUN_102c40e2c();
  return;
}



/* Entry: 102c40edc; end: 102c40f83;  */

void FUN_102c40edc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105b6ca0;
  func_0x000107c613fc(&UNK_1105b6ca0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102c40fb8;
  func_0x0001000823a8(FUN_102c40fb8,puVar1);
  func_0x000100082720("SCAdPlaybackScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102c40f84; end: 102c40f8b;  */

void FUN_102c40f84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105b6ca0;
  func_0x000107c613fc(&UNK_1105b6ca0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102c40fb8;
  func_0x0001000823a8(FUN_102c40fb8,puVar3);
  func_0x000100082720("SCAdPlaybackScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102c40f8c; end: 102c40fb7;  */

void FUN_102c40f8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c40fb8; end: 102c41017;  */

void FUN_102c40fb8(undefined8 *param_1)

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
  puVar1 = &UNK_1105b6370;
  func_0x000107c613fc(&UNK_1105b6370,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102c3b5b0;
  func_0x00010058fa64(FUN_102c3b5b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c41018; end: 102c41063;  */

void FUN_102c41018(undefined8 param_1)

{
  func_0x0001000285a8(0x112f02fe8,&UNK_10db36e10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c41064,param_1);
  return;
}



/* Entry: 102c41064; end: 102c410df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c41064(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112f0dfa8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(lStack_38);
  FUN_102c81344(0);
  func_0x000107c610f8();
  func_0x000102c80e48();
  FUN_102c80eec();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c410e0; end: 102c410ef;  */

undefined1  [16] FUN_102c410e0(void)

{
  return ZEXT816(0x1105b6d70);
}



/* Entry: 102c410f0; end: 102c411b7;  */

void FUN_102c410f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f02fe8,&UNK_10db36e10);
  puVar1 = &UNK_1105b6e38;
  func_0x000107c613fc(&UNK_1105b6e38,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102c411b8,puVar1);
  return;
}



/* Entry: 102c411b8; end: 102c4129b;  */

void FUN_102c411b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_102c92f34(0);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  uVar1 = uStack_68;
  FUN_102c91380(uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90);
  FUN_102c91aa8();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c4129c; end: 102c412ab;  */

undefined1  [16] FUN_102c4129c(void)

{
  return ZEXT816(0x1105b6e60);
}



/* Entry: 102c412ac; end: 102c413db;  */

void FUN_102c412ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f02fe8,&UNK_10db36e10);
  puVar1 = &UNK_1105b6f28;
  func_0x000107c613fc(&UNK_1105b6f28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102c4132c,puVar1);
  return;
}



/* Entry: 102c413dc; end: 102c413eb;  */

undefined1  [16] FUN_102c413dc(void)

{
  return ZEXT816(0x1105b6f50);
}



/* Entry: 102c413ec; end: 102c41547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c413ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102c41b64();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112f02ff0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f02ff8) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c41548);
  (*pcVar2)();
}



/* Entry: 102c41548; end: 102c415a7; -[_TtC26AdPlaybackScopeGraphBridge41AdPlaybackScopeGraphBridgeSaberEntryPoint init] */

void FUN_102c41548(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackScopeGraphBridge.AdPlaybackScopeGraphBridgeSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c41574);
  (*pcVar1)();
}



/* Entry: 102c415a8; end: 102c415df; -[_TtC26AdPlaybackScopeGraphBridge41AdPlaybackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c415c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c415c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c415a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f02ff0));
  return;
}



/* Entry: 102c415e0; end: 102c41607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c415e0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f02ff8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f02ff0));
  return;
}



/* Entry: 102c41608; end: 102c41627;  */

void FUN_102c41608(void)

{
  func_0x000107c61168(&PTR_PTR_112899278);
  return;
}



/* Entry: 102c41628; end: 102c416c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c41628(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f03180);
  *(undefined8 *)(unaff_x20 + _DAT_112f03028) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f03030) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102c416c4; end: 102c41723; -[_TtC26AdPlaybackScopeGraphBridge37AdPageRegistryServicesSaberEntryPoint init] */

void FUN_102c416c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackScopeGraphBridge.AdPageRegistryServicesSaberEntryPoint",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c416f0);
  (*pcVar1)();
}



/* Entry: 102c41724; end: 102c417b7; -[_TtC26AdPlaybackScopeGraphBridge37AdPageRegistryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c41724(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f03028));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f03030));
  return;
}



/* Entry: 102c417b8; end: 102c417bf;  */

undefined8 FUN_102c417b8(void)

{
  return 0;
}



/* Entry: 102c417c0; end: 102c417df;  */

void FUN_102c417c0(void)

{
  func_0x000107c61168(&PTR_PTR_112899340);
  return;
}



/* Entry: 102c417e0; end: 102c41843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c417e0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f03188);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c41844; end: 102c4184b;  */

void FUN_102c41844(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c4184c; end: 102c418eb;  */

void FUN_102c4184c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c418ec; end: 102c4190b;  */

void FUN_102c418ec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102c4190c; end: 102c41993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c4190c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f03130) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f03138);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c41994);
  (*pcVar2)();
}



/* Entry: 102c41994; end: 102c41a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c41994(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f03130);
  *(undefined **)(unaff_x20 + _DAT_112f03130) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f03138);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f03138))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105b70a0;
  func_0x000107c613fc(&UNK_1105b70a0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102c41a80,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102c41a7c; end: 102c41a87;  */

void FUN_102c41a7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c41a88; end: 102c41ae7; -[_TtC26AdPlaybackScopeGraphBridge41SCAdPlaybackScopedServicesSaberEntryPoint init] */

void FUN_102c41a88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackScopeGraphBridge.SCAdPlaybackScopedServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c41ab4);
  (*pcVar1)();
}



/* Entry: 102c41ae8; end: 102c41b1f; -[_TtC26AdPlaybackScopeGraphBridge41SCAdPlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c41ae8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f03138));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f03130));
  return;
}



/* Entry: 102c41b20; end: 102c41b23;  */

void FUN_102c41b20(void)

{
  return;
}



/* Entry: 102c41b24; end: 102c41b43;  */

void FUN_102c41b24(void)

{
  FUN_102c41994();
  return;
}



/* Entry: 102c41b44; end: 102c41b63;  */

void FUN_102c41b44(void)

{
  func_0x000107c61168(&PTR_PTR_112899408);
  return;
}



/* Entry: 102c41b64; end: 102c41c33;  */

undefined8 FUN_102c41b64(void)

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
  
  func_0x000107c61428(0x112f03168,&uStack_40,0x20,0);
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
    FUN_102c41c34();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102c41c34; end: 102c41c53;  */

void FUN_102c41c34(void)

{
  func_0x000107c61168(&PTR_PTR_1128994d0);
  return;
}



/* Entry: 102c41c54; end: 102c41deb;  */

void FUN_102c41c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f03170,&UNK_10db36fe8);
  puVar1 = &UNK_1105b70e8;
  func_0x000107c613fc(&UNK_1105b70e8,0x38,7);
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
  func_0x0001000823a8(FUN_102c41dec,puVar1);
  return;
}



/* Entry: 102c41dec; end: 102c41dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c41dec(undefined8 *param_1)

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
  FUN_102c41c34();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112f03178) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112f03180) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f03188) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f03190) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f03198) = uVar9;
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



/* Entry: 102c41dfc; end: 102c41e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c41dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f03178) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f03180) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f03188) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f03190) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f03198) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c41e98; end: 102c41ef7; -[_TtC26AdPlaybackScopeGraphBridge34AdPlaybackScopeGraphBridgeServices init] */

void FUN_102c41e98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackScopeGraphBridge.AdPlaybackScopeGraphBridgeServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c41ec4);
  (*pcVar1)();
}



/* Entry: 102c41ef8; end: 102c41f9f; -[_TtC26AdPlaybackScopeGraphBridge34AdPlaybackScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c41f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c41f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c41f18) */
/* WARNING: Removing unreachable block (ram,0x000102c41f38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c41ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f03180));
  return;
}



/* Entry: 102c41fa0; end: 102c41fab;  */

void FUN_102c41fa0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c423b8,param_1);
  return;
}



/* Entry: 102c41fac; end: 102c41feb;  */

void FUN_102c41fac(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102c423c4,0);
  return;
}



/* Entry: 102c41fec; end: 102c41ff7;  */

void FUN_102c41fec(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102c423bc,param_1);
  return;
}



/* Entry: 102c41ff8; end: 102c42083;  */

void FUN_102c41ff8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102c423c8,0);
  return;
}



/* Entry: 102c42084; end: 102c4208f;  */

void FUN_102c42084(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c420e8,param_1);
  return;
}



/* Entry: 102c42090; end: 102c420e7;  */

void FUN_102c42090(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 102c420e8; end: 102c4211b;  */

void FUN_102c420e8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102c4211c; end: 102c42123;  */

undefined8 FUN_102c4211c(void)

{
  return 0x1b;
}



/* Entry: 102c42124; end: 102c4229b;  */

void FUN_102c42124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105b7110;
  func_0x000107c613fc(&UNK_1105b7110,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102c4229c,puVar1);
  return;
}



/* Entry: 102c4229c; end: 102c422a3;  */

void FUN_102c4229c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f03168,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f03168,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105b7268;
  func_0x000107c613fc(&UNK_1105b7268,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102c423b0;
  func_0x00010058fa64(0x102c423b0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102c422a4; end: 102c422ff;  */

void FUN_102c422a4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f03168,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f03168,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102c42300; end: 102c423cb;  */

undefined ** FUN_102c42300(void)

{
  return &PTR_DAT_113066760;
}



/* Entry: 102c423cc; end: 102c42413; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c423cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f031f0;
  func_0x000107c61428(param_1 + _DAT_112f031f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c42414; end: 102c4246b; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f031f0;
  func_0x000107c61428(param_1 + _DAT_112f031f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c4246c; end: 102c424b3; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c4246c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f031f8;
  func_0x000107c61428(param_1 + _DAT_112f031f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c424b4; end: 102c424bf; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c424b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f031f8;
  func_0x000107c61428(param_1 + _DAT_112f031f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c424c0; end: 102c42507; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint sCAdPagePlaybackScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c424c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03200;
  func_0x000107c61428(param_1 + _DAT_112f03200,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c42508; end: 102c42513; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint setSCAdPagePlaybackScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03200;
  func_0x000107c61428(param_1 + _DAT_112f03200,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c42514; end: 102c4255b; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint sCCommerceProductCatalogScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42514(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03208;
  func_0x000107c61428(param_1 + _DAT_112f03208,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c4255c; end: 102c42567; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint setSCCommerceProductCatalogScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c4255c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03208;
  func_0x000107c61428(param_1 + _DAT_112f03208,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c42568; end: 102c425af; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint adPlaybackScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c42568(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f03210;
  func_0x000107c61428(param_1 + _DAT_112f03210,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102c425b0; end: 102c425bb; -[SCAdPlaybackScopeGraphBridgeSaberEntryPoint setAdPlaybackScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c425b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f03210;
  func_0x000107c61428(param_1 + _DAT_112f03210,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


