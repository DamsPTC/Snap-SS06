/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10244f354; end: 10244f3ef;  */

void FUN_10244f354(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11050a798;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11050a798;
  return;
}



/* Entry: 10244f3f0; end: 10244f427;  */

void FUN_10244f3f0(long *param_1)

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



/* Entry: 10244f428; end: 10244f42f;  */

undefined8 FUN_10244f428(void)

{
  return 0x1b;
}



/* Entry: 10244f430; end: 10244f563;  */

void FUN_10244f430(undefined8 *param_1)

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
  puVar1 = &UNK_11050a8b0;
  func_0x000107c613fc(&UNK_11050a8b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10244f604;
  func_0x00010058fa64(FUN_10244f604,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10244f564; end: 10244f593;  */

undefined ** FUN_10244f564(void)

{
  return &PTR_DAT_112e9b608;
}



/* Entry: 10244f594; end: 10244f5b3;  */

void FUN_10244f594(void)

{
  func_0x000107c61168(&PTR_PTR_1128413d8);
  return;
}



/* Entry: 10244f5b4; end: 10244f603;  */

undefined1  [16] FUN_10244f5b4(void)

{
  return ZEXT816(0x11050a7e8);
}



/* Entry: 10244f604; end: 10244f62b;  */

void FUN_10244f604(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10244f62c; end: 10244f62f;  */

void FUN_10244f62c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10244f630; end: 10244f767;  */

/* WARNING: Possible PIC construction at 0x00010244f700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244f710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244f720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244f730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010244f740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010244f734) */
/* WARNING: Removing unreachable block (ram,0x00010244f724) */
/* WARNING: Removing unreachable block (ram,0x00010244f714) */
/* WARNING: Removing unreachable block (ram,0x00010244f704) */
/* WARNING: Removing unreachable block (ram,0x00010244f744) */

void FUN_10244f630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11050a938;
  func_0x000107c613fc(&UNK_11050a938,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  uVar2 = 0x112e9af28;
  func_0x0001000285a8(0x112e9af28,&UNK_10daa8778);
  func_0x000107c613fc();
  uVar3 = 0x10244fc1c;
  func_0x0001000841fc(0x10244fc1c,puVar1,uVar2);
  func_0x000100084214(&UNK_10daa8740,0x34,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10244f768; end: 10244f79b;  */

void FUN_10244f768(void)

{
  long unaff_x20;
  
  FUN_10244f630(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10244f79c; end: 10244f7ab;  */

undefined1  [16] FUN_10244f79c(void)

{
  return ZEXT816(0x11050a918);
}



/* Entry: 10244f7ac; end: 10244fbaf;  */

void FUN_10244f7ac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e9af30,&UNK_10daa8780);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024516f4();
  func_0x000100082720("AdAttachmentHandlerScopeExposerSubjectServiceProvider",0x35,2);
  puVar3 = puVar2;
  FUN_102451780();
  func_0x000100082720("AdAttachmentHandlerScopeExposerObservableServiceProvider",0x38,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10244f3f0;
  func_0x0001000823a8(FUN_10244f3f0,0);
  func_0x000100082720("AdPromotedTileAttachmentScopedServicesCleanupRelayServiceProvider",0x41,2);
  puVar5 = puVar2;
  FUN_1024515a8();
  func_0x000100082720("AdPromotedTileAttachmentScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9af38,&UNK_10daa8790);
  puVar6 = &UNK_11050a960;
  func_0x000107c613fc(&UNK_11050a960,0x70,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 *)(puVar6 + 0x60) = param_12;
  *(undefined8 **)(puVar6 + 0x68) = puVar3;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10244fc58;
  func_0x0001000823a8(0x10244fc58,puVar6);
  func_0x000100082720("SCAdsPromotedTileAttachmentImplEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9af40,&UNK_10daa8798);
  puVar6 = &UNK_11050a988;
  func_0x000107c613fc(&UNK_11050a988,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  pcVar7 = FUN_10244fc94;
  func_0x0001000823a8(FUN_10244fc94,puVar6);
  func_0x000100082720("AdPromotedTileAttachmentScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112e9aec0,&UNK_10daa84d0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10244fca0;
  func_0x0001000823a8(0x10244fca0,pcVar7);
  func_0x000100082720("AdPromotedTileAttachmentScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e9aeb0,&UNK_10daa84c0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10244fca8;
  func_0x0001000823a8(0x10244fca8,uVar8);
  func_0x000100082720("AdPromotedTileAttachmentScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11050a9b0;
  func_0x000107c613fc(&UNK_11050a9b0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10244fcb0;
  func_0x0001000823a8(0x10244fcb0,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("AdPromotedTileAttachmentScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10244fbb0; end: 10244fc93;  */

void FUN_10244fbb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10244fc94; end: 10244fcb7;  */

void FUN_10244fc94(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102450d10(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("AdPromotedTileAttachmentScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10244fcb8; end: 102450abf;  */

void FUN_10244fcb8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  FUN_102450c60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar13 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  puVar11 = PTR_PTR_1126aa858;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f09e390);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f09e3b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f007190);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar13 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f052240);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar13 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f05c3f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar13);
  uVar14 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f05c6b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(uStack_c8);
  *param_1 = param_2;
  return;
}



/* Entry: 102450ac0; end: 102450b53;  */

void FUN_102450ac0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102450b54; end: 102450b5b;  */

undefined8 FUN_102450b54(void)

{
  return 0x1b;
}



/* Entry: 102450b5c; end: 102450bdf;  */

void FUN_102450b5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102450ca0,param_2,FUN_102450ca4,param_2,FUN_102450ccc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102450be0; end: 102450c2f;  */

undefined8 FUN_102450be0(void)

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



/* Entry: 102450c30; end: 102450c5f;  */

void FUN_102450c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11050a9c8;
  return;
}



/* Entry: 102450c60; end: 102450c7f;  */

void FUN_102450c60(void)

{
  func_0x000107c61168(&PTR_PTR_112e9afb0);
  return;
}



/* Entry: 102450c80; end: 102450ca3;  */

undefined1  [16] FUN_102450c80(void)

{
  return ZEXT816(0x11050aa08);
}



/* Entry: 102450ca4; end: 102450ccb;  */

void FUN_102450ca4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102450ccc; end: 102450cd3;  */

undefined8 FUN_102450ccc(void)

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



/* Entry: 102450cd4; end: 102450d0f;  */

void FUN_102450cd4(undefined8 *param_1,undefined8 param_2)

{
  FUN_102450d10();
  func_0x0001000a7f38("AdPromotedTileAttachmentScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102450d10; end: 102450efb;  */

void FUN_102450d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11050b250;
  ppuVar4 = &PTR_DAT_112e9b608;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11050aa58;
  func_0x000107c613fc(&UNK_11050aa58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e9b068;
  func_0x0001000285a8(0x112e9b068,&UNK_10daa8958);
  func_0x0001000a6ee8(&UNK_11050ac78,
                      "AdPromotedTileAttachmentScopeGraphBridgeScopeInitializationPluginKey",0x44,2,
                      FUN_102450efc,puVar2,uVar3,&UNK_11050ac78,&PTR_DAT_112e9b100);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11050aa80;
  func_0x000107c613fc(&UNK_11050aa80,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11050a828,
                      "AdPromotedTileAttachmentScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_102450fe4,puVar2,uVar3,&UNK_11050a828,&PTR_DAT_112e9aec8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11050aa08,
                      "SCAdsPromotedTileAttachmentImplEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4c,2,FUN_102451060,param_4,uVar3,&UNK_11050aa08,&PTR_DAT_112e9af48);
  func_0x000107c61574(param_4);
  uVar3 = 0x112e9b070;
  func_0x0001000285a8(0x112e9b070,&UNK_10daa8960);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102450efc; end: 102450f3b;  */

void FUN_102450efc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102451828(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("AdPromotedTileAttachmentScopeGraphBridgeScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102450f3c; end: 102450fe3;  */

void FUN_102450f3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050aaa8;
  func_0x000107c613fc(&UNK_11050aaa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10245109c;
  func_0x0001000823a8(FUN_10245109c,puVar1);
  func_0x000100082720("AdPromotedTileAttachmentScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102450fe4; end: 102450feb;  */

void FUN_102450fe4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11050aaa8;
  func_0x000107c613fc(&UNK_11050aaa8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10245109c;
  func_0x0001000823a8(FUN_10245109c,puVar3);
  func_0x000100082720("AdPromotedTileAttachmentScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102450fec; end: 10245105f;  */

void FUN_102450fec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102451068;
  func_0x0001000823a8(0x102451068,param_3);
  func_0x000100082720("SCAdsPromotedTileAttachmentImplEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x51,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102451060; end: 10245106f;  */

void FUN_102451060(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102451068;
  func_0x0001000823a8();
  func_0x000100082720("SCAdsPromotedTileAttachmentImplEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x51,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102451070; end: 10245109b;  */

void FUN_102451070(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10245109c; end: 1024510a3;  */

void FUN_10245109c(undefined8 *param_1)

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
  puVar1 = &UNK_11050a8b0;
  func_0x000107c613fc(&UNK_11050a8b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10244f604;
  func_0x00010058fa64(FUN_10244f604,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024510a4; end: 10245117f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024510a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1024514b8();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e9b078) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9b080) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102451180);
  (*pcVar1)();
}



/* Entry: 102451180; end: 1024511df; -[_TtC40AdPromotedTileAttachmentScopeGraphBridge55AdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint init] */

void FUN_102451180(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPromotedTileAttachmentScopeGraphBridge.AdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024511ac);
  (*pcVar1)();
}



/* Entry: 1024511e0; end: 102451217; -[_TtC40AdPromotedTileAttachmentScopeGraphBridge55AdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024511fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102451200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024511e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b078));
  return;
}



/* Entry: 102451218; end: 10245123f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451218(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9b080),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9b078));
  return;
}



/* Entry: 102451240; end: 10245125f;  */

void FUN_102451240(void)

{
  func_0x000107c61168(&PTR_PTR_112841498);
  return;
}



/* Entry: 102451260; end: 1024512e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102451260(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9b0b0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9b0b8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024512e8);
  (*pcVar2)();
}



/* Entry: 1024512e8; end: 1024513cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024512e8(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9b0b0);
  *(undefined **)(unaff_x20 + _DAT_112e9b0b0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9b0b8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9b0b8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11050ab98;
  func_0x000107c613fc(&UNK_11050ab98,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1024513d4,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1024513d0; end: 1024513db;  */

void FUN_1024513d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1024513dc; end: 10245143b; -[_TtC40AdPromotedTileAttachmentScopeGraphBridge53AdPromotedTileAttachmentScopedServicesSaberEntryPoint init] */

void FUN_1024513dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPromotedTileAttachmentScopeGraphBridge.AdPromotedTileAttachmentScopedServicesSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102451408);
  (*pcVar1)();
}



/* Entry: 10245143c; end: 102451473; -[_TtC40AdPromotedTileAttachmentScopeGraphBridge53AdPromotedTileAttachmentScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245143c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9b0b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b0b0));
  return;
}



/* Entry: 102451474; end: 102451477;  */

void FUN_102451474(void)

{
  return;
}



/* Entry: 102451478; end: 102451497;  */

void FUN_102451478(void)

{
  FUN_1024512e8();
  return;
}



/* Entry: 102451498; end: 1024514b7;  */

void FUN_102451498(void)

{
  func_0x000107c61168(&PTR_PTR_112841560);
  return;
}



/* Entry: 1024514b8; end: 102451587;  */

undefined8 FUN_1024514b8(void)

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
  
  func_0x000107c61428(0x112e9b0e8,&uStack_40,0x20,0);
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
    FUN_102451588();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102451588; end: 1024515a7;  */

void FUN_102451588(void)

{
  func_0x000107c61168(&PTR_PTR_112841628);
  return;
}



/* Entry: 1024515a8; end: 1024515c3;  */

void FUN_1024515a8(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9b0f0,&UNK_10daa8a38);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102451630,param_1);
  return;
}



/* Entry: 1024515c4; end: 10245162f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024515c4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102451588();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e9b0f8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102451630; end: 102451637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451630(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102451588();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e9b0f8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102451638; end: 102451683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451638(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9b0f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102451684; end: 1024516e3; -[_TtC40AdPromotedTileAttachmentScopeGraphBridge48AdPromotedTileAttachmentScopeGraphBridgeServices init] */

void FUN_102451684(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPromotedTileAttachmentScopeGraphBridge.AdPromotedTileAttachmentScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024516b0);
  (*pcVar1)();
}



/* Entry: 1024516e4; end: 1024516f3; -[_TtC40AdPromotedTileAttachmentScopeGraphBridge48AdPromotedTileAttachmentScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024516e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9b0f8));
  return;
}



/* Entry: 1024516f4; end: 10245177f;  */

void FUN_1024516f4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102451734,0);
  return;
}



/* Entry: 102451780; end: 10245179b;  */

void FUN_102451780(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1024517ec,param_1);
  return;
}



/* Entry: 10245179c; end: 1024517eb;  */

void FUN_10245179c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1024517ec; end: 10245181f;  */

void FUN_1024517ec(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102451820; end: 102451827;  */

undefined8 FUN_102451820(void)

{
  return 0x1b;
}



/* Entry: 102451828; end: 10245199f;  */

void FUN_102451828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050abe0;
  func_0x000107c613fc(&UNK_11050abe0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024519a0,puVar1);
  return;
}



/* Entry: 1024519a0; end: 1024519a7;  */

void FUN_1024519a0(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9b0e8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9b0e8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11050acb8;
  func_0x000107c613fc(&UNK_11050acb8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102451a74;
  func_0x00010058fa64(0x102451a74,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024519a8; end: 102451a03;  */

void FUN_1024519a8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9b0e8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9b0e8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102451a04; end: 102451a7b;  */

undefined ** FUN_102451a04(void)

{
  return &PTR_DAT_112e9b608;
}



/* Entry: 102451a7c; end: 102451ac3; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451a7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9b150;
  func_0x000107c61428(param_1 + _DAT_112e9b150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102451ac4; end: 102451b1b; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9b150;
  func_0x000107c61428(param_1 + _DAT_112e9b150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102451b1c; end: 102451b63; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint adAttachmentHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451b1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9b158;
  func_0x000107c61428(param_1 + _DAT_112e9b158,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102451b64; end: 102451b6f; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint setAdAttachmentHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9b158;
  func_0x000107c61428(param_1 + _DAT_112e9b158,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102451b70; end: 102451bb7; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint adPromotedTileAttachmentScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451b70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9b160;
  func_0x000107c61428(param_1 + _DAT_112e9b160,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102451bb8; end: 102451bc3; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint setAdPromotedTileAttachmentScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9b160;
  func_0x000107c61428(param_1 + _DAT_112e9b160,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102451bc4; end: 102451c23;  */

void FUN_102451bc4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102451c24; end: 102451ddf;  */

/* WARNING: Possible PIC construction at 0x000102451d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102451d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102451d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102451db4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102451d74) */
/* WARNING: Removing unreachable block (ram,0x000102451d64) */
/* WARNING: Removing unreachable block (ram,0x000102451d40) */
/* WARNING: Removing unreachable block (ram,0x000102451db8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102451c24(void)

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
  func_0x000107c3d228();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3d3ec();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102451240();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1024514b8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102451de0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e9b078) = lVar5;
      *(long *)(lVar3 + _DAT_112e9b080) = unaff_x20;
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



/* Entry: 102451de0; end: 102451e07; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102451de0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102451c24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102451e08; end: 102451e4b; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint end] */

void FUN_102451e08(undefined8 param_1)

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



/* Entry: 102451e4c; end: 10245204f;  */

void FUN_102451e4c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0fa3950)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010f05c6b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000037;
        if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef0f61910)) &&
           (func_0x000107c605b8(0xd000000000000037,0x800000010f09e6f0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AdPromotedTileAttachmentScopeGraphBridge/SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x68,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102452050);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c52390();
        goto LAB_102451ed8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52264();
  }
LAB_102451ed8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102452050; end: 1024520fb; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102452050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102451e4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1024520fc; end: 102452173; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024520fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9b150,0);
  *(undefined8 *)(param_1 + _DAT_112e9b158) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9b160) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9b168) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102452174; end: 1024521a7;  */

void FUN_102452174(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024521a8; end: 1024521ff; -[SCAdPromotedTileAttachmentScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024521d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024521d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024521a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9b150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b158));
  return;
}



/* Entry: 102452200; end: 10245221f;  */

void FUN_102452200(void)

{
  func_0x000107c61168(&PTR_PTR_1128416e8);
  return;
}



/* Entry: 102452220; end: 102452267; -[SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102452220(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9b198;
  func_0x000107c61428(param_1 + _DAT_112e9b198,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102452268; end: 1024522bf; -[SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102452268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9b198;
  func_0x000107c61428(param_1 + _DAT_112e9b198,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024522c0; end: 102452397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024522c0(undefined8 param_1,long param_2)

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
    FUN_102451498();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9b0b0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102452398);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9b0b8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9b1a0);
    *(long **)(unaff_x20 + _DAT_112e9b1a0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102452398; end: 1024523bf; -[SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint begin] */

void FUN_102452398(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024522c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024523c0; end: 102452537;  */

/* WARNING: Possible PIC construction at 0x000102452428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024524c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010245242c) */
/* WARNING: Removing unreachable block (ram,0x0001024524c4) */
/* WARNING: Removing unreachable block (ram,0x0001024524dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024523c0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9b1a0);
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



/* Entry: 102452538; end: 10245253f;  */

void FUN_102452538(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102452540; end: 102452573; -[SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint end] */

void FUN_102452540(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024523c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102452574; end: 102452693;  */

void FUN_102452574(long param_1,long param_2,long param_3)

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
                        "AdPromotedTileAttachmentScopeGraphBridge/SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint.swift"
                        ,0x66,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102452694);
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



/* Entry: 102452694; end: 10245273f; -[SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102452694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102452574(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102452740; end: 10245279f; -[SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102452740(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9b198,0);
  *(undefined8 *)(param_1 + _DAT_112e9b1a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024527a0; end: 1024527d3;  */

void FUN_1024527a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024527d4; end: 10245280b; -[SCAdPromotedTileAttachmentScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024527d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9b198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9b1a0));
  return;
}



/* Entry: 10245280c; end: 10245282b;  */

void FUN_10245280c(void)

{
  func_0x000107c61168(&PTR_PTR_1128417b8);
  return;
}



/* Entry: 10245282c; end: 10245283b; -[_TtC36SCAdsPromotedTileAttachmentImplSwift42AdsPromotedTileAppInstallAttachmentHandler attachmentDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245282c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e9b1d0));
  return;
}



/* Entry: 10245283c; end: 10245285b; -[_TtC36SCAdsPromotedTileAttachmentImplSwift42AdsPromotedTileAppInstallAttachmentHandler delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245283c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112e9b1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10245285c; end: 10245286f; -[_TtC36SCAdsPromotedTileAttachmentImplSwift42AdsPromotedTileAppInstallAttachmentHandler setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245285c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e9b1d8,param_3);
  return;
}



/* Entry: 102452870; end: 1024528e7;  */

undefined8 FUN_102452870(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = uVar3;
    func_0x000107c6157c(uVar3);
    (*pcVar1)();
    FUN_102453c3c(pcVar1,uVar3);
  }
  return uVar2;
}



/* Entry: 1024528e8; end: 10245294b;  */

long FUN_1024528e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10245294c();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 10245294c; end: 102453647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245294c(void)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  int iVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long alStack_1c0 [7];
  long *plStack_188;
  long alStack_180 [3];
  code *pcStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [112];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar9 = 0;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar20 = (long)alStack_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  func_0x000100b91b84();
  alStack_180[2] = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar16 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112e9b260;
  pcStack_168 = (code *)lVar16;
  func_0x0001000285a8(0x112e9b260,&UNK_10daa8cf0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_180[1] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lVar11 = 0;
  lStack_160 = lVar16;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  plVar21 = (long *)(lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0x112dd42a0;
  puVar13 = &UNK_10dcdf270;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)plVar21 - extraout_x8_03;
  lVar10 = *(long *)(unaff_x20 + _DAT_112e9b1e8);
  if (lVar10 == 0) {
LAB_102452b40:
    puVar23 = *(undefined **)(unaff_x20 + _DAT_112e9b1e0);
    func_0x0001084c1998();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5c988();
    func_0x000107c61180();
    if (lVar10 == 0) goto LAB_102452b40;
    puVar23 = (undefined *)((undefined8 *)(lVar10 + _DAT_113091130))[1];
    if (puVar23 == (undefined *)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined8 *)(lVar10 + _DAT_113091130);
      func_0x000107c61434(puVar23);
      puVar13 = puVar23;
      func_0x000107c5fadc(uVar22);
      func_0x000107c6142c(puVar23);
      func_0x000107c49820(uVar22);
    }
    puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar22);
  }
  if (puVar23 == (undefined *)0x0) {
    return;
  }
  func_0x000107c61174();
  puVar12 = puVar23;
  func_0x000107c49820();
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar23);
    return;
  }
  puStack_158 = puVar23;
  func_0x000107c5c1d4();
  func_0x000107c61180();
  puVar12 = puVar23;
  func_0x000107c5faec();
  func_0x000107c61170(puVar23);
  plVar1 = (long *)(unaff_x20 + _DAT_112e9b230);
  lVar10 = plVar1[1];
  *plVar1 = (long)puVar12;
  plVar1[1] = (long)puVar13;
  func_0x000107c6142c(lVar10);
  lVar10 = *(long *)(unaff_x20 + _DAT_112e9b1e0);
  alStack_1c0[5] = lVar9;
  if (lVar10 == 0) {
LAB_102452c48:
    lVar9 = 0;
    func_0x000100b918b4();
    uVar22 = 1;
  }
  else {
    lVar9 = lVar10;
    func_0x000107c3d378();
    func_0x000107c61180();
    if (lVar9 == 0) goto LAB_102452c48;
    func_0x0001041cacf8(lVar16);
    lVar9 = 0;
    func_0x000100b918b4();
    uVar22 = 0;
  }
  puVar13 = puStack_158;
  alStack_1c0[6] = lVar20;
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar16,uVar22,1);
  func_0x000107c49820();
  plStack_188 = (long *)puVar13;
  alStack_180[0] = lVar16;
  FUN_102453ae4(lVar16,(long)plVar21 + (long)*(int *)(lVar11 + 0x18),0x112dd42a0,&UNK_10dcdf270);
  puVar13 = &UNK_11050adc0;
  puVar23 = puVar13;
  func_0x000107c613fc(&UNK_11050adc0,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  puVar12 = puVar13;
  func_0x000107c613fc(&UNK_11050adc0,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  func_0x000107c613fc(&UNK_11050adc0,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  uVar22 = 0;
  func_0x00010418f308(0);
  func_0x000107c610f8();
  pcVar7 = FUN_102453acc;
  func_0x00010418f2a8(FUN_102453acc,puVar23,0x102453ad4,puVar12,0x102453adc,puVar13,uVar22);
  if (lVar10 == 0) {
    lVar16 = 0;
    lVar9 = 0;
    lVar25 = 0;
    lVar24 = 0;
    lVar20 = 0;
    lVar15 = 0;
    lVar27 = 0;
    lVar28 = 0;
  }
  else {
    plVar1 = (long *)(lVar10 + _DAT_11308f138);
    plVar2 = (long *)(lVar10 + _DAT_11308f140);
    alStack_1c0[3] = plVar1[1];
    alStack_1c0[2] = *plVar1;
    alStack_1c0[1] = plVar2[1];
    alStack_1c0[0] = *plVar2;
    lVar20 = plVar2[1];
    lVar25 = *(long *)(lVar10 + _DAT_11308f128);
    lVar9 = *(long *)(lVar10 + _DAT_11308f130);
    lVar16 = ((long *)(lVar10 + _DAT_11308f130))[1];
    lVar24 = *(long *)(lVar10 + _DAT_113815300);
    func_0x000107c61434(plVar1[1]);
    func_0x000107c61434(lVar20);
    func_0x000107c61434(lVar16);
    lVar20 = alStack_1c0[2];
    lVar15 = alStack_1c0[3];
    lVar27 = alStack_1c0[0];
    lVar28 = alStack_1c0[1];
  }
  plVar1 = (long *)((long)plVar21 + (long)*(int *)(lVar11 + 0x24));
  plVar1[1] = lVar15;
  *plVar1 = lVar20;
  plVar1[3] = lVar28;
  plVar1[2] = lVar27;
  plVar1[4] = lVar9;
  plVar1[5] = lVar16;
  plVar1[6] = 1;
  plVar1[7] = lVar25;
  plVar1[8] = -0x2ffffffffffffff0;
  plVar1[9] = -0x7ffffffef0f617f0;
  plVar1[10] = 0;
  plVar1[0xb] = 0;
  *(undefined1 *)(plVar1 + 0xc) = 1;
  plVar1[0xd] = lVar24;
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)plStack_188;
  *(code **)((long)plVar21 + (long)*(int *)(lVar11 + 0x1c)) = pcVar7;
  *(undefined8 *)((long)plVar21 + (long)*(int *)(lVar11 + 0x20)) = 4;
  plStack_188 = plVar21;
  *(undefined8 *)((long)plVar21 + (long)*(int *)(lVar11 + 0x28)) = 0;
  lVar9 = alStack_180[0];
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    uVar19 = *(ulong *)(lVar10 + _DAT_113815208);
    if (uVar19 != 0) {
      uVar18 = uVar19 & 0xffffffffffffff8;
      if (uVar19 >> 0x3e == 0) {
        uVar14 = *(ulong *)(uVar18 + 0x10);
      }
      else {
        uVar14 = uVar19;
        if (-1 < (long)uVar19) {
          uVar14 = uVar18;
        }
        func_0x000107c60480();
      }
      if (uVar14 != 0) {
        if ((uVar19 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar18 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102453648);
            (*pcVar7)();
          }
          lVar10 = *(long *)(uVar19 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x000107c61434(uVar19);
          lVar10 = 0;
          func_0x000100e471e4(0,uVar19);
          func_0x000107c6142c(uVar19);
        }
        goto LAB_102452f00;
      }
    }
    lVar10 = 0;
  }
LAB_102452f00:
  lVar11 = lVar10;
  func_0x000107c3dde0();
  func_0x000107c61180();
  if (lVar11 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(lVar11 + _DAT_11308faf8);
    if (lVar16 != 0) {
      alStack_1c0[2] = lVar10;
      if ((*(byte *)(lVar16 + _DAT_113815348) & 1) != 0) {
        iVar17 = *(int *)(unaff_x20 + _DAT_112e9b210);
        bVar8 = iVar17 == 1;
        bVar6 = *(byte *)(lVar16 + _DAT_113815340);
        func_0x000107c61174(lVar16);
        if ((bVar6 & 1) == 0) {
          lVar10 = alStack_1c0[2];
          if (iVar17 != 1) goto LAB_1024531f0;
        }
        else {
LAB_102452fc4:
          if ((!bVar8) && (lVar10 = alStack_1c0[2], iVar17 != 0)) goto LAB_1024531f0;
        }
        pcVar7 = pcStack_168;
        lVar9 = 0;
        func_0x000100b91cc8();
        lVar10 = lStack_160;
        pcStack_168 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
        alStack_1c0[0] = lVar9;
        (*pcStack_168)(lStack_160,1,1);
        lVar9 = *(long *)(unaff_x20 + _DAT_112e9b200);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar9 != 0) {
          uVar22 = 0xd000000000000027;
          func_0x000107c5fadc(0xd000000000000027,0x800000010f09e830);
          lVar20 = lVar9;
          func_0x000107c3ebdc();
          func_0x000107c615e8(lVar9);
          func_0x000107c61170(uVar22);
          if ((int)lVar20 != 0) {
            lVar9 = *(long *)(unaff_x20 + _DAT_112e9b208);
            if (lVar9 == 0) {
LAB_1024532bc:
              func_0x000102453bac(lVar10,0x112e9b260,&UNK_10daa8cf0);
              uVar22 = 1;
              lVar20 = alStack_1c0[0];
              lVar15 = alStack_180[1];
            }
            else {
              uVar22 = 0x612f6e;
              func_0x000107c5fadc(0x612f6e,0xe300000000000000);
              func_0x000107c3ecf0();
              func_0x000107c61180();
              func_0x000107c61170(uVar22);
              if (lVar9 == 0) goto LAB_1024532bc;
              uVar22 = *(undefined8 *)(lVar9 + _DAT_113068838);
              func_0x000107c61174();
              func_0x000107c61174(uVar22);
              lVar15 = alStack_180[1];
              func_0x0001047b6fb0(alStack_180[1]);
              lVar20 = alStack_1c0[0];
              *(undefined8 *)(lVar15 + *(int *)(alStack_1c0[0] + 0x14)) =
                   *(undefined8 *)(lVar9 + _DAT_113068840);
              *(undefined8 *)(lVar15 + *(int *)(alStack_1c0[0] + 0x18)) =
                   *(undefined8 *)(lVar9 + _DAT_113068848);
              uVar22 = *(undefined8 *)(lVar9 + _DAT_113068850);
              iVar17 = *(int *)(alStack_1c0[0] + 0x1c);
              func_0x000107c61434();
              func_0x000107c61174(uVar22);
              func_0x0001041ed0c4(lVar15 + iVar17);
              func_0x000107c61170(lVar9);
              func_0x000102453bac(lStack_160,0x112e9b260,&UNK_10daa8cf0);
              *(undefined8 *)(lVar15 + *(int *)(lVar20 + 0x20)) =
                   *(undefined8 *)(lVar9 + _DAT_113068858);
              uVar26 = *(undefined8 *)(lVar9 + _DAT_113068860);
              uVar4 = ((undefined8 *)(lVar9 + _DAT_113068860))[1];
              func_0x000107c61434(uVar4);
              func_0x000107c61170(lVar9);
              uVar22 = 0;
              puVar3 = (undefined8 *)(lVar15 + *(int *)(lVar20 + 0x24));
              *puVar3 = uVar26;
              puVar3[1] = uVar4;
              lVar10 = lStack_160;
            }
            (*pcStack_168)(lVar15,uVar22,1,lVar20);
            func_0x000102453bec(lVar15,lVar10);
          }
        }
        if ((alStack_1c0[2] == 0) ||
           (lVar10 = *(long *)(alStack_1c0[2] + _DAT_11308f208), lVar10 == 0)) {
          lVar10 = 0;
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(lVar10 + _DAT_113091068);
          lVar10 = *(long *)(lVar10 + _DAT_113091070);
          func_0x000107c61174(lVar10);
          func_0x000107c61174(lVar9);
        }
        func_0x000103bfb8b0(0);
        lVar20 = lVar9;
        lVar15 = lVar10;
        func_0x000103bfab18();
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar9);
        lVar10 = 0;
        if (lVar15 != 0) {
          lVar10 = lVar20;
        }
        lVar9 = -0x2000000000000000;
        if (lVar15 != 0) {
          lVar9 = lVar15;
        }
        lVar20 = lVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar9);
        lVar9 = lVar10;
        func_0x000107c4b854();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        lVar10 = lVar9;
        func_0x000107c5faec();
        alStack_180[1] = lVar20;
        pcStack_168 = (code *)lVar10;
        func_0x000107c61170(lVar9);
        lVar10 = _DAT_113815330;
        lVar9 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))(pcVar7,lVar16 + lVar10,lVar9);
        if (*(long *)(lVar11 + _DAT_11308fab8) == 0) {
          uVar22 = 0;
          uVar26 = 0;
        }
        else {
          puVar3 = (undefined8 *)(*(long *)(lVar11 + _DAT_11308fab8) + _DAT_113090408);
          uVar22 = *puVar3;
          uVar26 = puVar3[1];
          func_0x000107c61434(uVar26);
        }
        lVar10 = alStack_180[2];
        plVar2 = plStack_188;
        uVar4 = *(undefined8 *)(lVar11 + _DAT_11308fab0);
        uVar5 = ((undefined8 *)(lVar11 + _DAT_11308fab0))[1];
        lStack_98 = plVar1[9];
        lStack_a0 = plVar1[8];
        lStack_88 = plVar1[0xb];
        lStack_90 = plVar1[10];
        lStack_78 = plVar1[0xd];
        lStack_80 = plVar1[0xc];
        lStack_b8 = plVar1[5];
        lStack_c0 = plVar1[4];
        lStack_a8 = plVar1[7];
        lStack_b0 = plVar1[6];
        lStack_d8 = plVar1[1];
        lStack_e0 = *plVar1;
        lStack_c8 = plVar1[3];
        lStack_d0 = plVar1[2];
        func_0x000102453b2c(plStack_188,(long)pcVar7 + (long)*(int *)(alStack_180[2] + 0x24),
                            &SUB_100b91790);
        lVar9 = lStack_160;
        FUN_102453ae4(lStack_160,(long)pcVar7 + (long)*(int *)(lVar10 + 0x28),0x112e9b260,
                      &UNK_10daa8cf0);
        plVar21 = (long *)((long)pcVar7 + (long)*(int *)(lVar10 + 0x14));
        *plVar21 = (long)pcStack_168;
        plVar21[1] = alStack_180[1];
        puVar3 = (undefined8 *)((long)pcVar7 + (long)*(int *)(lVar10 + 0x18));
        *puVar3 = uVar22;
        puVar3[1] = uVar26;
        puVar3 = (undefined8 *)((long)pcVar7 + (long)*(int *)(lVar10 + 0x1c));
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        plVar21 = (long *)((long)pcVar7 + (long)*(int *)(lVar10 + 0x20));
        plVar21[9] = lStack_98;
        plVar21[8] = lStack_a0;
        plVar21[0xb] = lStack_88;
        plVar21[10] = lStack_90;
        plVar21[0xd] = lStack_78;
        plVar21[0xc] = lStack_80;
        plVar21[1] = lStack_d8;
        *plVar21 = lStack_e0;
        plVar21[3] = lStack_c8;
        plVar21[2] = lStack_d0;
        plVar21[5] = lStack_b8;
        plVar21[4] = lStack_c0;
        plVar21[7] = lStack_a8;
        plVar21[6] = lStack_b0;
        func_0x0001041bb118(0);
        lVar10 = alStack_1c0[6];
        func_0x000102453b2c(pcVar7,alStack_1c0[6],&SUB_100b91b84);
        func_0x000107c6159c(lVar10,alStack_1c0[5],8);
        func_0x000107c61434(uVar5);
        func_0x000100e3eca0(&lStack_e0,auStack_150);
        func_0x0001041b84d4(lVar10);
        func_0x000107c61170(alStack_1c0[2]);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar16);
        puVar13 = puStack_158;
        func_0x000107c61170(puStack_158);
        func_0x000107c61170(puVar13);
        func_0x000102453b70(pcVar7,&SUB_100b91b84);
        func_0x000102453bac(lVar9,0x112e9b260,&UNK_10daa8cf0);
        func_0x000102453b70(plVar2,&SUB_100b91790);
        lVar9 = alStack_180[0];
        goto LAB_102453294;
      }
      if (*(char *)(lVar16 + _DAT_113815340) == '\x01') {
        iVar17 = *(int *)(unaff_x20 + _DAT_112e9b210);
        func_0x000107c61174(lVar16);
        bVar8 = false;
        goto LAB_102452fc4;
      }
      func_0x000107c61174(lVar16);
    }
  }
LAB_1024531f0:
  func_0x0001041bb118(0);
  plVar21 = plStack_188;
  lVar20 = alStack_1c0[6];
  func_0x000102453b2c(plStack_188,alStack_1c0[6],&SUB_100b91790);
  func_0x000107c6159c(lVar20,alStack_1c0[5],1);
  func_0x0001041b84d4(lVar20);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar11);
  puVar13 = puStack_158;
  func_0x000107c61170(puStack_158);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar16);
  func_0x000102453b70(plVar21,&SUB_100b91790);
LAB_102453294:
  func_0x000102453bac(lVar9,0x112dd42a0,&UNK_10dcdf270);
  return;
}



/* Entry: 102453648; end: 10245364b; -[_TtC36SCAdsPromotedTileAttachmentImplSwift42AdsPromotedTileAppInstallAttachmentHandler willPresentTileAttachment] */

void FUN_102453648(void)

{
  return;
}


