/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009a4234; end: 1009a4257;  */

undefined ** FUN_1009a4234(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a4258; end: 1009a42d7;  */

void FUN_1009a4258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110719348;
  func_0x000107c613fc(&UNK_110719348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a42d8,puVar1);
  return;
}



/* Entry: 1009a42d8; end: 1009a42df;  */

void FUN_1009a42d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130203f8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130203f8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107193e0;
  func_0x000107c613fc(&UNK_1107193e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e5f778;
  FUN_10058fa64(&UNK_103e5f778,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a42e0; end: 1009a43d7;  */

void FUN_1009a42e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130203f8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130203f8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107193e0;
  func_0x000107c613fc(&UNK_1107193e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e5f778;
  FUN_10058fa64(&UNK_103e5f778,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a43d8; end: 1009a43fb;  */

void FUN_1009a43d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a43fc; end: 1009a4747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a43fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_100237f48();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113020408) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113020410) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113020418) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113020420) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113020428) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113020430) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113020438) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113020440) = param_9;
  *(undefined8 *)(lVar3 + _DAT_113020448) = param_10;
  *(undefined8 *)(lVar3 + _DAT_113020450) = param_11;
  *(undefined8 *)(lVar3 + _DAT_113020458) = param_12;
  *(undefined8 *)(lVar3 + _DAT_113020460) = param_13;
  *(undefined8 *)(lVar3 + _DAT_113020468) = param_14;
  *(undefined8 *)(lVar3 + _DAT_113020470) = param_15;
  *(undefined8 *)(lVar3 + _DAT_113020478) = param_16;
  *(undefined8 *)(lVar3 + _DAT_113020480) = param_17;
  *(undefined8 *)(lVar3 + _DAT_113020488) = param_18;
  *(undefined8 *)(lVar3 + _DAT_113020490) = param_19;
  *(undefined8 *)(lVar3 + _DAT_113020498) = param_20;
  *(undefined8 *)(lVar3 + _DAT_1130204a0) = param_21;
  *(undefined8 *)(lVar3 + _DAT_1130204a8) = param_22;
  *(undefined8 *)(lVar3 + _DAT_1130204b0) = param_23;
  *(undefined8 *)(lVar3 + _DAT_1130204b8) = param_24;
  *(undefined8 *)(lVar3 + _DAT_1130204c0) = param_25;
  *(undefined8 *)(lVar3 + _DAT_1130204c8) = param_26;
  *(undefined8 *)(lVar3 + _DAT_1130204d0) = param_27;
  *(undefined8 *)(lVar3 + _DAT_1130204d8) = param_28;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
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
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009a4748; end: 1009a48c3;  */

void FUN_1009a4748(void)

{
  long unaff_x20;
  
  FUN_1009a43fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 1009a48c4; end: 1009a48eb;  */

undefined ** FUN_1009a48c4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a48ec; end: 1009a492b;  */

void FUN_1009a48ec(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a48d0();
  FUN_100082720("GenAICommonServiceProviderWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a492c; end: 1009a4933;  */

void FUN_1009a492c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101939250);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a4934; end: 1009a49b7;  */

void FUN_1009a4934(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101939250,param_2,&UNK_101939254,param_2,&UNK_10193927c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a49b8; end: 1009a49df;  */

undefined ** FUN_1009a49b8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a49e0; end: 1009a4a1f;  */

void FUN_1009a49e0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a49c4();
  FUN_100082720("GenAICreditsServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a4a20; end: 1009a4b5b; -[SCConfigManagerImpl _createSyncBlock:cofTriggerEventType:coldStart:] */

void FUN_1009a4a20(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c4bd98(*(undefined8 *)(param_1 + 0xe8));
  puVar1 = PTR_PTR_1126ae520;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  uStack_64 = 1;
  if (puVar2 == (undefined *)0x2) {
    uStack_64 = 2;
  }
  func_0x000107c61170(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61144(auStack_58,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1053306e4;
  puStack_90 = &UNK_11087b938;
  func_0x000107c6111c(auStack_78,auStack_58);
  lStack_88 = param_1;
  uStack_80 = param_3;
  uStack_70 = uVar5;
  uStack_68 = param_4;
  uStack_60 = param_5;
  func_0x000107c61174(param_3);
  ppuVar3 = &puStack_a8;
  func_0x000107c61184(ppuVar3);
  ppuVar4 = ppuVar3;
  func_0x000107c61184();
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1009a4b5c; end: 1009a4b63;  */

void FUN_1009a4b5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101939450);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a4b64; end: 1009a4be7;  */

void FUN_1009a4b64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101939450,param_2,&UNK_101939454,param_2,&UNK_10193947c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a4be8; end: 1009a4c63; -[SCCofSyncEventLoggerImpl logPreResponseSyncEventWithTriggerEventType:isColdStart:previousEtag:eventStatus:] */

void FUN_1009a4be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1009a4cb0(param_3,param_4,param_5,param_2,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1009a4c64; end: 1009a4c6f;  */

undefined ** FUN_1009a4c64(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a4c70; end: 1009a4caf;  */

void FUN_1009a4c70(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_1009a4f24();
  FUN_100082720("HomeScreenWidgetServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a4cb0; end: 1009a4e5f;  */

/* WARNING: Possible PIC construction at 0x0001009a4ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009a4e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009a4de0) */
/* WARNING: Removing unreachable block (ram,0x0001009a4e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a4cb0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  
  if (*(char *)(unaff_x20 + _DAT_112daa300) != '\x01') {
    return;
  }
  puVar2 = PTR_PTR_1126b86e0;
  func_0x000107c610f8(PTR_PTR_1126b86e0);
  func_0x000107c453e4();
  func_0x000107c546dc();
  func_0x000107c49a6c(*(undefined8 *)(unaff_x20 + _DAT_112daa2e8));
  func_0x000107c557b0(puVar2);
  func_0x000107c55658(puVar2);
  func_0x000107c555bc(puVar2);
  func_0x000107c6071c();
  dVar3 = (param_1 - *(double *)(unaff_x20 + _DAT_112daa2f0)) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a4e58);
    (*pcVar1)();
  }
  if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a4e5c);
    (*pcVar1)();
  }
  if (dVar3 < 9.223372036854776e+18) {
    func_0x000107c52798(puVar2);
    func_0x000107c61434(param_5);
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c6142c(param_5);
    func_0x000107c5781c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a4e60);
  (*pcVar1)();
}



/* Entry: 1009a4e60; end: 1009a4e67; +[SCAttributedCOFConfigManagerSubTask initOnResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a4e60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae30) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009a4e68; end: 1009a4eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a4e68(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309ae30) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009a4eb8; end: 1009a4f23; +[SCAttributedCOFTask configManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a4eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309ae20) = 2;
  *(undefined8 *)(lVar2 + _DAT_11309ae28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009a4f24; end: 1009a4f47;  */

void FUN_1009a4f24(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1009a4f40,param_1);
  return;
}



/* Entry: 1009a4f48; end: 1009a4fcb;  */

void FUN_1009a4f48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101965aa4,param_2,&UNK_101965aa8,param_2,&UNK_101965ad0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a4fcc; end: 1009a4ff3;  */

undefined ** FUN_1009a4fcc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a4ff4; end: 1009a5033;  */

void FUN_1009a4ff4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a4fd8();
  FUN_100082720("InLensCreationDataServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5034; end: 1009a503b;  */

void FUN_1009a5034(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b11c4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a503c; end: 1009a50bf;  */

void FUN_1009a503c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b11c4,param_2,&UNK_1019b11c8,param_2,&UNK_1019b11f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a50c0; end: 1009a50e7;  */

undefined ** FUN_1009a50c0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a50e8; end: 1009a5127;  */

void FUN_1009a50e8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a50cc();
  FUN_100082720("IncomingFriendsImpressionCountManagingImplServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x61,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5128; end: 1009a512f;  */

void FUN_1009a5128(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019821cc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5130; end: 1009a51b3;  */

void FUN_1009a5130(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019821cc,param_2,&UNK_1019821d0,param_2,&UNK_1019821f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a51b4; end: 1009a51db;  */

undefined ** FUN_1009a51b4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a51dc; end: 1009a521b;  */

void FUN_1009a51dc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a51c0();
  FUN_100082720("InviteContactSectionLoggerFeatureServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x58,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a521c; end: 1009a5223;  */

void FUN_1009a521c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9a5d8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5224; end: 1009a52a7;  */

void FUN_1009a5224(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101a9a5d8,param_2,&UNK_101a9a5dc,param_2,&UNK_101a9a604,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a52a8; end: 1009a52cf;  */

undefined ** FUN_1009a52a8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a52d0; end: 1009a530f;  */

void FUN_1009a52d0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a52b4();
  FUN_100082720("LensCarouselSessionControllerFactoryServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x5b,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5310; end: 1009a5317;  */

void FUN_1009a5310(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b12ec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5318; end: 1009a539b;  */

void FUN_1009a5318(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b12ec,param_2,&UNK_1019b12f0,param_2,&UNK_1019b1318,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a539c; end: 1009a53c3;  */

undefined ** FUN_1009a539c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a53c4; end: 1009a5403;  */

void FUN_1009a53c4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a53a8();
  FUN_100082720("LensConversationMetadataServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5404; end: 1009a540b;  */

void FUN_1009a5404(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1414);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a540c; end: 1009a548f;  */

void FUN_1009a540c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1414,param_2,&UNK_1019b1418,param_2,&UNK_1019b1440,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5490; end: 1009a54b7;  */

undefined ** FUN_1009a5490(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a54b8; end: 1009a54f7;  */

void FUN_1009a54b8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a549c();
  FUN_100082720("LensCrashFuseServiceProviderWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a54f8; end: 1009a54ff;  */

void FUN_1009a54f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1598);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5500; end: 1009a5583;  */

void FUN_1009a5500(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1598,param_2,&UNK_1019b159c,param_2,&UNK_1019b15c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5584; end: 1009a55a7;  */

undefined ** FUN_1009a5584(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a55a8; end: 1009a5627;  */

void FUN_1009a55a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f8720;
  func_0x000107c613fc(&UNK_1103f8720,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a5628,puVar1);
  return;
}



/* Entry: 1009a5628; end: 1009a562f;  */

void FUN_1009a5628(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1009a56ac();
  func_0x000107c613fc();
  FUN_1009a56cc(uStack_38,uStack_40);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103f8798;
  return;
}



/* Entry: 1009a5630; end: 1009a56ab;  */

void FUN_1009a5630(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1009a56ac();
  func_0x000107c613fc();
  FUN_1009a56cc(uStack_38,uStack_40);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1103f8798;
  return;
}



/* Entry: 1009a56ac; end: 1009a56cb;  */

void FUN_1009a56ac(void)

{
  func_0x000107c61168(&PTR_PTR_112dc0df0);
  return;
}



/* Entry: 1009a56cc; end: 1009a588b;  */

void FUN_1009a56cc(char *param_1,char *param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  pcVar2 = param_1;
  FUN_1000ad07c();
  if (*pcVar2 == '\x01') {
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puVar4 = &UNK_1103f8748;
    func_0x000107c613fc(&UNK_1103f8748,0x18,7);
    *(char **)(puVar4 + 0x10) = param_2;
    puStack_50 = &UNK_1016c0dcc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1016c0dd4;
    puStack_58 = &UNK_1103f8760;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar4);
    func_0x000107c3e4fc(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar4 = PTR_PTR_1126ddc88;
    func_0x000107c61168();
    puVar6 = puVar4;
    func_0x000107c5a9f0();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a5888);
      (*pcVar1)();
    }
    func_0x000107c61174(puVar3);
    func_0x000107c532dc(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c4b6d8();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009a588c);
      (*pcVar1)();
    }
    func_0x000107c532dc();
    func_0x000107c61170(puVar4);
    puVar4 = PTR_PTR_1126b84f0;
    func_0x000107c61168(PTR_PTR_1126b84f0);
    func_0x000107c5a9f0();
    func_0x000107c61180();
    func_0x000107c532dc();
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
    param_2 = param_1;
  }
  else {
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1009a588c; end: 1009a58db;  */

void FUN_1009a588c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009a58dc; end: 1009a5903;  */

undefined ** FUN_1009a58dc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a5904; end: 1009a5943;  */

void FUN_1009a5904(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a58e8();
  FUN_100082720("LensErrorHandlingServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5944; end: 1009a594b;  */

void FUN_1009a5944(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b16c8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a594c; end: 1009a59cf;  */

void FUN_1009a594c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b16c8,param_2,&UNK_1019b16cc,param_2,&UNK_1019b16f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a59d0; end: 1009a59f7;  */

undefined ** FUN_1009a59d0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a59f8; end: 1009a5a37;  */

void FUN_1009a59f8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a59dc();
  FUN_100082720("LensInteractionHistoryServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5a38; end: 1009a5a3f;  */

void FUN_1009a5a38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b194c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5a40; end: 1009a5ac3;  */

void FUN_1009a5a40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b194c,param_2,&UNK_1019b1950,param_2,&UNK_1019b1978,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5ac4; end: 1009a5aeb;  */

undefined ** FUN_1009a5ac4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a5aec; end: 1009a5b2b;  */

void FUN_1009a5aec(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a5ad0();
  FUN_100082720("LensPlusExclusiveLensesServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5b2c; end: 1009a5b33;  */

void FUN_1009a5b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1c98);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5b34; end: 1009a5bb7;  */

void FUN_1009a5b34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1c98,param_2,&UNK_1019b1c9c,param_2,&UNK_1019b1cc4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5bb8; end: 1009a5bdf;  */

undefined ** FUN_1009a5bb8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a5be0; end: 1009a5c1f;  */

void FUN_1009a5be0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a5bc4();
  FUN_100082720("LensPlusServicesServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5c20; end: 1009a5c27;  */

void FUN_1009a5c20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019397e4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5c28; end: 1009a5cab;  */

void FUN_1009a5c28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019397e4,param_2,&UNK_1019397e8,param_2,&UNK_101939810,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5cac; end: 1009a5cd3;  */

undefined ** FUN_1009a5cac(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a5cd4; end: 1009a5d13;  */

void FUN_1009a5cd4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a5cb8();
  FUN_100082720("LensPlusTierCheckServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5d14; end: 1009a5d1b;  */

void FUN_1009a5d14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101939a5c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5d1c; end: 1009a5d9f;  */

void FUN_1009a5d1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101939a5c,param_2,&UNK_101939a60,param_2,&UNK_101939a88,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5da0; end: 1009a5dc7;  */

undefined ** FUN_1009a5da0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a5dc8; end: 1009a5e07;  */

void FUN_1009a5dc8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a5dac();
  FUN_100082720("LensPreSendDataServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5e08; end: 1009a5e0f;  */

void FUN_1009a5e08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1dc8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5e10; end: 1009a5e93;  */

void FUN_1009a5e10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b1dc8,param_2,&UNK_1019b1dcc,param_2,&UNK_1019b1df4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5e94; end: 1009a5ebb;  */

undefined ** FUN_1009a5e94(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a5ebc; end: 1009a5efb;  */

void FUN_1009a5ebc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a5ea0();
  FUN_100082720("LensPrefetchingServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5efc; end: 1009a5f03;  */

void FUN_1009a5efc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b2198);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5f04; end: 1009a5f87;  */

void FUN_1009a5f04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b2198,param_2,&UNK_1019b219c,param_2,&UNK_1019b21c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5f88; end: 1009a5faf;  */

undefined ** FUN_1009a5f88(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a5fb0; end: 1009a5fef;  */

void FUN_1009a5fb0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a5f94();
  FUN_100082720("LensPromptLoggingServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a5ff0; end: 1009a5ff7;  */

void FUN_1009a5ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b231c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a5ff8; end: 1009a607b;  */

void FUN_1009a5ff8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b231c,param_2,&UNK_1019b2320,param_2,&UNK_1019b2348,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a607c; end: 1009a60a3;  */

undefined ** FUN_1009a607c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a60a4; end: 1009a60e3;  */

void FUN_1009a60a4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a6088();
  FUN_100082720("LensRemoteMediaServicesServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a60e4; end: 1009a60eb;  */

void FUN_1009a60e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b25e8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a60ec; end: 1009a616f;  */

void FUN_1009a60ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b25e8,param_2,&UNK_1019b25ec,param_2,&UNK_1019b2614,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a6170; end: 1009a6197;  */

undefined ** FUN_1009a6170(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a6198; end: 1009a61d7;  */

void FUN_1009a6198(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009a617c();
  FUN_100082720("LensRemovalServiceProviderWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009a61d8; end: 1009a61df;  */

void FUN_1009a61d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b2800);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a61e0; end: 1009a6263;  */

void FUN_1009a61e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019b2800,param_2,&UNK_1019b2804,param_2,&UNK_1019b282c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009a6264; end: 1009a6287;  */

undefined ** FUN_1009a6264(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009a6288; end: 1009a6307;  */

void FUN_1009a6288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11071af00;
  func_0x000107c613fc(&UNK_11071af00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a6308,puVar1);
  return;
}



/* Entry: 1009a6308; end: 1009a630f;  */

void FUN_1009a6308(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130265b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130265b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11071af98;
  func_0x000107c613fc(&UNK_11071af98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e78428;
  FUN_10058fa64(&UNK_103e78428,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009a6310; end: 1009a6407;  */

void FUN_1009a6310(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130265b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130265b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11071af98;
  func_0x000107c613fc(&UNK_11071af98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103e78428;
  FUN_10058fa64(&UNK_103e78428,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


