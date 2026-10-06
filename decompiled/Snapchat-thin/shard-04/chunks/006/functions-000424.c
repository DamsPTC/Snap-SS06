/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103714910; end: 10371499f; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logLinkfireOpenInBrowserWithTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c4bcdc(lStack_38,param_2,2,0,param_3,0x7c);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1037149a0; end: 103714a37; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logTrackPlaybackWithTrackId:offsetSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037149a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_48;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c4bcec(param_1,lStack_48,param_3,param_4,0x7c);
    func_0x000107c615e8(lStack_48);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103714a38; end: 103714a6b;  */

void FUN_103714a38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103714a6c; end: 103714be7; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103714ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103714ac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714a6c(long param_1)

{
  func_0x000103714bac(param_1 + _DAT_11355bbc0,&SUB_1043a86b0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11355bbc8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_11355bbd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11355bbd8 + 8))
  ;
  return;
}



/* Entry: 103714be8; end: 103714bef;  */

void FUN_103714be8(void)

{
  if (lRam000000011355bbe0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e77741c);
  return;
}



/* Entry: 103714bf0; end: 103714c27;  */

void FUN_103714bf0(undefined8 param_1)

{
  if (lRam000000011355bbe0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77741c);
  return;
}



/* Entry: 103714c28; end: 103714d9b;  */

void FUN_103714c28(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001043a86b0();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBoWV_11034d678 + 0x40;
    puStack_38 = &UNK_10dc003a8;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10dc003a8;
    puStack_40 = puStack_48;
    func_0x000107c61630(param_1,0x100,6,&lStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 103714d9c; end: 103714df3; -[_TtC18SoundReportManager22SoundReportManagerImpl initWithSoundReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f8b320) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103714df4; end: 103714ea3; -[_TtC18SoundReportManager22SoundReportManagerImpl reportSoundWithTrackId:source:presentingViewController:] */

/* WARNING: Possible PIC construction at 0x000103714e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103714e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103714e7c) */
/* WARNING: Removing unreachable block (ram,0x000103714e8c) */

void FUN_103714df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c4807c(puVar1);
  FUN_103714ffc(param_3,param_4,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103714ea4; end: 103714f33; -[_TtC18SoundReportManager22SoundReportManagerImpl reportSoundWithTrackId:source:uiContainer:] */

/* WARNING: Possible PIC construction at 0x000103714f10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103714f14) */

void FUN_103714ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c614f0(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x0001037150a8(param_3,param_4,param_5,param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103714f34; end: 103714f67;  */

void FUN_103714f34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103714f68; end: 103714f77; -[_TtC18SoundReportManager22SoundReportManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8b320));
  return;
}



/* Entry: 103714f78; end: 103714ffb; -[_TtC18SoundReportManager22SoundReportManagerImpl soundReportDidCompleteWithCancelled:] */

/* WARNING: Possible PIC construction at 0x000103714fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103714fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103714fb8) */
/* WARNING: Removing unreachable block (ram,0x000103714fd4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714f78(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103714ffc; end: 10371514f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + _DAT_112f8b320);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000103fccca8();
    func_0x000107c610f8();
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000103fcc9b8(param_3,param_1,param_2,param_4);
    func_0x000107c42c1c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103715150; end: 10371516f;  */

void FUN_103715150(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6820);
  return;
}



/* Entry: 103715170; end: 1037151db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103715170(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103715564();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f8b358) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1037151dc; end: 103715247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037151dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8b358) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103715248; end: 1037152a7; -[_TtC45UserEducationTrayScopedFactoryServiceProvider33SCUserEducationTrayScopedServices init] */

void FUN_103715248(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserEducationTrayScopedFactoryServiceProvider.SCUserEducationTrayScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103715274);
  (*pcVar1)();
}



/* Entry: 1037152a8; end: 1037152b7; -[_TtC45UserEducationTrayScopedFactoryServiceProvider33SCUserEducationTrayScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037152a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8b358));
  return;
}



/* Entry: 1037152b8; end: 103715323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037152b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106872c0;
  func_0x000107c613fc(&UNK_1106872c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1037155fc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103715324; end: 1037153bf;  */

void FUN_103715324(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106871d0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106871d0;
  return;
}



/* Entry: 1037153c0; end: 1037153f7;  */

void FUN_1037153c0(long *param_1)

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



/* Entry: 1037153f8; end: 1037153ff;  */

undefined8 FUN_1037153f8(void)

{
  return 0x1b;
}



/* Entry: 103715400; end: 103715533;  */

void FUN_103715400(undefined8 *param_1)

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
  puVar1 = &UNK_1106872e8;
  func_0x000107c613fc(&UNK_1106872e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1037155d4;
  func_0x00010058fa64(FUN_1037155d4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103715534; end: 103715563;  */

undefined ** FUN_103715534(void)

{
  return &PTR_DAT_113067090;
}



/* Entry: 103715564; end: 103715583;  */

void FUN_103715564(void)

{
  func_0x000107c61168(&PTR_PTR_1128e68e0);
  return;
}



/* Entry: 103715584; end: 1037155d3;  */

undefined1  [16] FUN_103715584(void)

{
  return ZEXT816(0x110687220);
}



/* Entry: 1037155d4; end: 1037155fb;  */

void FUN_1037155d4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1037155fc; end: 1037155ff;  */

void FUN_1037155fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103715600; end: 1037156a7;  */

/* WARNING: Possible PIC construction at 0x000103715690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103715694) */

void FUN_103715600(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110687370;
  func_0x000107c613fc(&UNK_110687370,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112f8b3c8;
  func_0x0001000285a8(0x112f8b3c8,&UNK_10dc00670);
  func_0x000107c613fc();
  pcVar3 = FUN_1037159cc;
  func_0x0001000841fc(FUN_1037159cc,puVar1,uVar2);
  func_0x000100084214(&UNK_10dc00640,0x2f,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1037156a8; end: 1037156bf;  */

/* WARNING: Possible PIC construction at 0x000103715690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103715694) */

void FUN_1037156a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_110687370;
  func_0x000107c613fc(&UNK_110687370,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112f8b3c8;
  func_0x0001000285a8(0x112f8b3c8,&UNK_10dc00670);
  func_0x000107c613fc();
  pcVar4 = FUN_1037159cc;
  func_0x0001000841fc(FUN_1037159cc,puVar2,uVar3);
  func_0x000100084214(&UNK_10dc00640,0x2f,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1037156c0; end: 1037159cb;  */

void FUN_1037156c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f8b3d0,&UNK_10dc00678);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f8b3d8,&UNK_10dc00680);
  puVar2 = &UNK_110687398;
  func_0x000107c613fc(&UNK_110687398,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x1037159d4;
  func_0x0001000823a8(0x1037159d4,puVar2);
  func_0x000100082720("SCUserEducationTrayEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_1037153c0;
  func_0x0001000823a8(FUN_1037153c0,0);
  pcVar4 = "SCUserEducationTrayScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCUserEducationTrayScopedServicesCleanupRelayServiceProvider",0x3c,2);
  FUN_103716734();
  func_0x000100082720("UserEducationTrayScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f8b3e0,&UNK_10dc00690);
  puVar2 = &UNK_1106873c0;
  func_0x000107c613fc(&UNK_1106873c0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar3;
  *(char **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1037159e0;
  func_0x0001000823a8(0x1037159e0,puVar2);
  func_0x000100082720("SCUserEducationTrayScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f8b360,&UNK_10dc00410);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1037159ec;
  func_0x0001000823a8(0x1037159ec,uVar5);
  func_0x000100082720("SCUserEducationTrayScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f8b350,&UNK_10dc00400);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1037159f4;
  func_0x0001000823a8(0x1037159f4,uVar6);
  func_0x000100082720("SCUserEducationTrayScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1106873e8;
  func_0x000107c613fc(&UNK_1106873e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  pcVar8 = FUN_103715a28;
  func_0x0001000823a8(FUN_103715a28,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCUserEducationTrayScopeEntryPointProvider",0x2a,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1037159cc; end: 1037159fb;  */

void FUN_1037159cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f8b3d0,&UNK_10dc00678);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f8b3d8,&UNK_10dc00680);
  puVar2 = &UNK_110687398;
  func_0x000107c613fc(&UNK_110687398,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  uVar3 = 0x1037159d4;
  func_0x0001000823a8(0x1037159d4,puVar2);
  func_0x000100082720("SCUserEducationTrayEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1037153c0;
  func_0x0001000823a8(FUN_1037153c0,0);
  pcVar5 = "SCUserEducationTrayScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCUserEducationTrayScopedServicesCleanupRelayServiceProvider",0x3c,2);
  FUN_103716734();
  func_0x000100082720("UserEducationTrayScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f8b3e0,&UNK_10dc00690);
  puVar2 = &UNK_1106873c0;
  func_0x000107c613fc(&UNK_1106873c0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(code **)(puVar2 + 0x20) = pcVar4;
  *(char **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1037159e0;
  func_0x0001000823a8(0x1037159e0,puVar2);
  func_0x000100082720("SCUserEducationTrayScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f8b360,&UNK_10dc00410);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x1037159ec;
  func_0x0001000823a8(0x1037159ec,uVar6);
  func_0x000100082720("SCUserEducationTrayScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f8b350,&UNK_10dc00400);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x1037159f4;
  func_0x0001000823a8(0x1037159f4,uVar9);
  func_0x000100082720("SCUserEducationTrayScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1106873e8;
  func_0x000107c613fc(&UNK_1106873e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_103715a28;
  func_0x0001000823a8(FUN_103715a28,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCUserEducationTrayScopeEntryPointProvider",0x2a,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1037159fc; end: 103715a27;  */

void FUN_1037159fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103715a28; end: 103715a2f;  */

void FUN_103715a28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106871d0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106871d0;
  return;
}



/* Entry: 103715a30; end: 103715adf;  */

void FUN_103715a30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_103715e40();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103715c74(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103715ae0; end: 103715b4f;  */

undefined8 FUN_103715ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103715c74(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103715b50; end: 103715b83;  */

void FUN_103715b50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103715b84; end: 103715b8b;  */

undefined8 FUN_103715b84(void)

{
  return 0x1b;
}



/* Entry: 103715b8c; end: 103715c0f;  */

void FUN_103715b8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103715e80,param_2,FUN_103715e84,param_2,FUN_103715eac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103715c10; end: 103715c5f;  */

undefined8 FUN_103715c10(void)

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



/* Entry: 103715c60; end: 103715c73;  */

void FUN_103715c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110687400;
  return;
}



/* Entry: 103715c74; end: 103715e23;  */

void FUN_103715c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126ad550;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f15e110);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103715e24; end: 103715e3f;  */

undefined ** FUN_103715e24(void)

{
  return &PTR_DAT_113067090;
}



/* Entry: 103715e40; end: 103715e5f;  */

void FUN_103715e40(void)

{
  func_0x000107c61168(&PTR_PTR_112f8b450);
  return;
}



/* Entry: 103715e60; end: 103715e83;  */

undefined1  [16] FUN_103715e60(void)

{
  return ZEXT816(0x110687440);
}



/* Entry: 103715e84; end: 103715eab;  */

void FUN_103715e84(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103715eac; end: 103715eb3;  */

undefined8 FUN_103715eac(void)

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



/* Entry: 103715eb4; end: 103715eef;  */

void FUN_103715eb4(undefined8 *param_1,undefined8 param_2)

{
  FUN_103715ef0();
  func_0x0001000a7f38("SCUserEducationTrayScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103715ef0; end: 1037160db;  */

void FUN_103715ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074de10;
  ppuVar4 = &PTR_DAT_113067090;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f8b4c0;
  func_0x0001000285a8(0x112f8b4c0,&UNK_10dc007d8);
  func_0x0001000a6ee8(&UNK_110687440,
                      "SCUserEducationTrayEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_103716150,param_1,uVar2,&UNK_110687440,&PTR_DAT_112f8b3e8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110687490;
  func_0x000107c613fc(&UNK_110687490,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110687260,"SCUserEducationTrayScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_103716200,puVar3,uVar2,&UNK_110687260,&PTR_DAT_112f8b368);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1106874b8;
  func_0x000107c613fc(&UNK_1106874b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106876a0,"UserEducationTrayScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_103716208,puVar3,uVar2,&UNK_1106876a0,&PTR_DAT_112f8b550);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f8b4c8;
  func_0x0001000285a8(0x112f8b4c8,&UNK_10dc007e0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1037160dc; end: 10371614f;  */

void FUN_1037160dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10371627c;
  func_0x0001000823a8(0x10371627c,param_3);
  func_0x000100082720("SCUserEducationTrayEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 103716150; end: 103716157;  */

void FUN_103716150(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10371627c;
  func_0x0001000823a8();
  func_0x000100082720("SCUserEducationTrayEntryPointWrapperScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 103716158; end: 1037161ff;  */

void FUN_103716158(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106874e0;
  func_0x000107c613fc(&UNK_1106874e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103716274;
  func_0x0001000823a8(FUN_103716274,puVar1);
  func_0x000100082720("SCUserEducationTrayScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103716200; end: 103716207;  */

void FUN_103716200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106874e0;
  func_0x000107c613fc(&UNK_1106874e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103716274;
  func_0x0001000823a8(FUN_103716274,puVar3);
  func_0x000100082720("SCUserEducationTrayScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103716208; end: 103716247;  */

void FUN_103716208(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103716818(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("UserEducationTrayScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103716248; end: 103716273;  */

void FUN_103716248(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103716274; end: 103716283;  */

void FUN_103716274(undefined8 *param_1)

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
  puVar1 = &UNK_1106872e8;
  func_0x000107c613fc(&UNK_1106872e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1037155d4;
  func_0x00010058fa64(FUN_1037155d4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103716284; end: 10371630b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103716284(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103716644();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f8b4d0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f8b4d8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10371630c);
  (*pcVar1)();
}



/* Entry: 10371630c; end: 10371636b; -[_TtC33UserEducationTrayScopeGraphBridge48UserEducationTrayScopeGraphBridgeSaberEntryPoint init] */

void FUN_10371630c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserEducationTrayScopeGraphBridge.UserEducationTrayScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103716338);
  (*pcVar1)();
}



/* Entry: 10371636c; end: 1037163a3; -[_TtC33UserEducationTrayScopeGraphBridge48UserEducationTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103716388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010371638c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10371636c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8b4d0));
  return;
}



/* Entry: 1037163a4; end: 1037163cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037163a4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f8b4d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f8b4d0));
  return;
}



/* Entry: 1037163cc; end: 1037163eb;  */

void FUN_1037163cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128e69a0);
  return;
}



/* Entry: 1037163ec; end: 103716473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037163ec(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8b508) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f8b510);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103716474);
  (*pcVar2)();
}



/* Entry: 103716474; end: 10371655b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103716474(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f8b508);
  *(undefined **)(unaff_x20 + _DAT_112f8b508) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f8b510);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f8b510))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110687600;
  func_0x000107c613fc(&UNK_110687600,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103716560,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10371655c; end: 103716567;  */

void FUN_10371655c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103716568; end: 1037165c7; -[_TtC33UserEducationTrayScopeGraphBridge48SCUserEducationTrayScopedServicesSaberEntryPoint init] */

void FUN_103716568(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserEducationTrayScopeGraphBridge.SCUserEducationTrayScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103716594);
  (*pcVar1)();
}



/* Entry: 1037165c8; end: 1037165ff; -[_TtC33UserEducationTrayScopeGraphBridge48SCUserEducationTrayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037165c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8b510));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8b508));
  return;
}



/* Entry: 103716600; end: 103716603;  */

void FUN_103716600(void)

{
  return;
}



/* Entry: 103716604; end: 103716623;  */

void FUN_103716604(void)

{
  FUN_103716474();
  return;
}



/* Entry: 103716624; end: 103716643;  */

void FUN_103716624(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6a68);
  return;
}



/* Entry: 103716644; end: 103716713;  */

undefined8 FUN_103716644(void)

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
  
  func_0x000107c61428(0x112f8b540,&uStack_40,0x20,0);
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
    FUN_103716714();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103716714; end: 103716733;  */

void FUN_103716714(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6b30);
  return;
}



/* Entry: 103716734; end: 10371679f;  */

void FUN_103716734(void)

{
  func_0x0001000285a8(0x112f8b548,&UNK_10dc008b8);
  func_0x0001000823a8(0x103716774,0);
  return;
}



/* Entry: 1037167a0; end: 1037167db; -[_TtC33UserEducationTrayScopeGraphBridge41UserEducationTrayScopeGraphBridgeServices init] */

void FUN_1037167a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037167dc; end: 10371680f;  */

void FUN_1037167dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103716810; end: 103716817;  */

undefined8 FUN_103716810(void)

{
  return 0x1b;
}



/* Entry: 103716818; end: 10371698f;  */

void FUN_103716818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110687648;
  func_0x000107c613fc(&UNK_110687648,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103716990,puVar1);
  return;
}



/* Entry: 103716990; end: 103716997;  */

void FUN_103716990(undefined8 *param_1)

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
  func_0x000107c61428(0x112f8b540,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f8b540,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1106876e0;
  func_0x000107c613fc(&UNK_1106876e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103716a44;
  func_0x00010058fa64(0x103716a44,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103716998; end: 1037169f3;  */

void FUN_103716998(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f8b540,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f8b540,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1037169f4; end: 103716a4b;  */

undefined ** FUN_1037169f4(void)

{
  return &PTR_DAT_113067090;
}



/* Entry: 103716a4c; end: 103716a93; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103716a4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8b5a0;
  func_0x000107c61428(param_1 + _DAT_112f8b5a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103716a94; end: 103716aeb; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103716a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8b5a0;
  func_0x000107c61428(param_1 + _DAT_112f8b5a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103716aec; end: 103716b33; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint userEducationTrayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103716aec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8b5a8;
  func_0x000107c61428(param_1 + _DAT_112f8b5a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103716b34; end: 103716b97; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint setUserEducationTrayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103716b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8b5a8;
  func_0x000107c61428(param_1 + _DAT_112f8b5a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103716b98; end: 103716ccb;  */

/* WARNING: Possible PIC construction at 0x000103716c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103716c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103716c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103716c54) */
/* WARNING: Removing unreachable block (ram,0x000103716c70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103716b98(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5d958();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1037163cc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_103716644();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103716ccc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f8b4d0) = lVar5;
    *(long *)(lVar4 + _DAT_112f8b4d8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103716ccc; end: 103716cf3; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103716ccc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103716b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103716cf4; end: 103716d37; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint end] */

void FUN_103716cf4(undefined8 param_1)

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



/* Entry: 103716d38; end: 103716ecf;  */

void FUN_103716d38(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0ea1c50)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f15e3b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "UserEducationTrayScopeGraphBridge/SCUserEducationTrayScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5a,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103716ed0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a324();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103716ed0; end: 103716f7b; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103716ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103716d38(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103716f7c; end: 103716fe7; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103716f7c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f8b5a0,0);
  *(undefined8 *)(param_1 + _DAT_112f8b5a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f8b5b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103716fe8; end: 10371701b;  */

void FUN_103716fe8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10371701c; end: 103717063; -[SCUserEducationTrayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103717048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010371704c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10371701c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f8b5a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8b5a8));
  return;
}



/* Entry: 103717064; end: 103717083;  */

void FUN_103717064(void)

{
  func_0x000107c61168(&PTR_PTR_1128e6be0);
  return;
}



/* Entry: 103717084; end: 1037170cb; -[SCSCUserEducationTrayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103717084(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8b5e0;
  func_0x000107c61428(param_1 + _DAT_112f8b5e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037170cc; end: 103717123; -[SCSCUserEducationTrayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037170cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8b5e0;
  func_0x000107c61428(param_1 + _DAT_112f8b5e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103717124; end: 1037171fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103717124(undefined8 param_1,long param_2)

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
    FUN_103716624();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f8b508) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037171fc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f8b510);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f8b5e8);
    *(long **)(unaff_x20 + _DAT_112f8b5e8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1037171fc; end: 103717223; -[SCSCUserEducationTrayScopedServicesSaberEntryPoint begin] */

void FUN_1037171fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103717124();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103717224; end: 10371739b;  */

/* WARNING: Possible PIC construction at 0x00010371728c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103717324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103717290) */
/* WARNING: Removing unreachable block (ram,0x000103717328) */
/* WARNING: Removing unreachable block (ram,0x000103717340) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103717224(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f8b5e8);
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



/* Entry: 10371739c; end: 1037173a3;  */

void FUN_10371739c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1037173a4; end: 1037173d7; -[SCSCUserEducationTrayScopedServicesSaberEntryPoint end] */

void FUN_1037173a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103717224();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


