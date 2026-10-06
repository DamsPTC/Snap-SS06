/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10095077c; end: 1009507ef; -[SCFriendingReliablePinningServices initWithFriendingReliablePinningNotificationProcessor:] */

undefined1 * FUN_10095077c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f7678;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009507f0; end: 10095086b;  */

void FUN_1009507f0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10095086c; end: 10095087f;  */

void FUN_10095086c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 100950880; end: 1009508ef;  */

/* WARNING: Possible PIC construction at 0x0001009508d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009508dc) */

void FUN_100950880(void)

{
  func_0x000107c6157c();
  func_0x0001001ca524(2,2,0x34,4,0,0,&UNK_10d9fa968);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 1009508f0; end: 100950933;  */

void FUN_1009508f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100950934; end: 100950957;  */

undefined ** FUN_100950934(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100950958; end: 1009509d7;  */

void FUN_100950958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106b9bd8;
  func_0x000107c613fc(&UNK_1106b9bd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009509d8,puVar1);
  return;
}



/* Entry: 1009509d8; end: 1009509df;  */

void FUN_1009509d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc6b60,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc6b60,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b9c70;
  func_0x000107c613fc(&UNK_1106b9c70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039d2510;
  FUN_10058fa64(&UNK_1039d2510,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009509e0; end: 100950ad7;  */

void FUN_1009509e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc6b60,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc6b60,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106b9c70;
  func_0x000107c613fc(&UNK_1106b9c70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039d2510;
  FUN_10058fa64(&UNK_1039d2510,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100950ad8; end: 100950afb;  */

void FUN_100950ad8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100950afc; end: 100950b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100950afc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar12 = &lStack_70;
  lVar10 = lVar1;
  FUN_1002ca6bc();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_112fc6b70) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_112fc6b78) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112fc6b80) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112fc6b88) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112fc6b90) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112fc6b98) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112fc6ba0) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112fc6ba8) = uVar8;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = lVar10;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_70,puVar9);
  *param_1 = plVar12;
  return;
}



/* Entry: 100950b10; end: 100950c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100950b10(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = param_2;
  FUN_1002ca6bc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fc6b70) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fc6b78) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fc6b80) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fc6b88) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fc6b90) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fc6b98) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fc6ba0) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fc6ba8) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 100950c3c; end: 100950cc3;  */

void FUN_100950c3c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100950cc4; end: 100950ceb;  */

undefined ** FUN_100950cc4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100950cec; end: 100950d2b;  */

void FUN_100950cec(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100950cd0();
  FUN_100082720("GameActivityConsentServicesProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100950d2c; end: 100950d33;  */

void FUN_100950d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce45c4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100950d34; end: 100950db7;  */

void FUN_100950d34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce45c4,param_2,&UNK_101ce45c8,param_2,&UNK_101ce45f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100950db8; end: 100950ddf;  */

undefined ** FUN_100950db8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100950de0; end: 100950e1f;  */

void FUN_100950de0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100950dc4();
  FUN_100082720("GamesActivityDataServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100950e20; end: 100950e27;  */

void FUN_100950e20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce46ec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100950e28; end: 100950eab;  */

void FUN_100950e28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce46ec,param_2,&UNK_101ce46f0,param_2,&UNK_101ce4718,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100950eac; end: 100950ed3;  */

undefined ** FUN_100950eac(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100950ed4; end: 100950f13;  */

void FUN_100950ed4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100950eb8();
  FUN_100082720("GamesConsentObtainerServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100950f14; end: 100950f1b;  */

void FUN_100950f14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5378);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100950f1c; end: 100950f9f;  */

void FUN_100950f1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5378,param_2,&UNK_101ce537c,param_2,&UNK_101ce53a4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100950fa0; end: 100950fc7;  */

undefined ** FUN_100950fa0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100950fc8; end: 100951007;  */

void FUN_100950fc8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100950fac();
  FUN_100082720("GamesUIServiceProviderWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100951008; end: 10095100f;  */

void FUN_100951008(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4d54);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951010; end: 100951093;  */

void FUN_100951010(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4d54,param_2,&UNK_101ce4d58,param_2,&UNK_101ce4d80,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951094; end: 1009510bb;  */

undefined ** FUN_100951094(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009510bc; end: 1009510fb;  */

void FUN_1009510bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009510a0();
  FUN_100082720("GenAIAISnapsServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009510fc; end: 100951103;  */

void FUN_1009510fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9c880);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951104; end: 100951187;  */

void FUN_100951104(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9c880,param_2,&UNK_101c9c884,param_2,&UNK_101c9c8ac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951188; end: 1009511af;  */

undefined ** FUN_100951188(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009511b0; end: 1009511ef;  */

void FUN_1009511b0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100951194();
  FUN_100082720("GenAIAnalyticsServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009511f0; end: 1009511f7;  */

void FUN_1009511f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9ca04);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009511f8; end: 10095127b;  */

void FUN_1009511f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9ca04,param_2,&UNK_101c9ca08,param_2,&UNK_101c9ca30,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095127c; end: 1009512a3;  */

undefined ** FUN_10095127c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009512a4; end: 1009512e3;  */

void FUN_1009512a4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100951288();
  FUN_100082720("GenAIDreamsSessionServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009512e4; end: 1009512eb;  */

void FUN_1009512e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9cb88);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009512ec; end: 10095136f;  */

void FUN_1009512ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c9cb88,param_2,&UNK_101c9cb8c,param_2,&UNK_101c9cbb4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951370; end: 10095137b;  */

undefined ** FUN_100951370(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095137c; end: 1009513ff;  */

void FUN_10095137c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(param_4,param_3);
  FUN_100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 100951400; end: 10095142b;  */

void FUN_100951400(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 10095142c; end: 100951433;  */

void FUN_10095142c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab36e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951434; end: 1009514b7;  */

void FUN_100951434(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab36e0,param_2,&UNK_101ab36e4,param_2,&UNK_101ab370c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009514b8; end: 1009514df;  */

undefined ** FUN_1009514b8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009514e0; end: 10095151f;  */

void FUN_1009514e0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009514c4();
  FUN_100082720("IntentDonatingServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100951520; end: 100951527;  */

void FUN_100951520(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101eb1b88);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951528; end: 1009515ab;  */

void FUN_100951528(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101eb1b88,param_2,&UNK_101eb1b8c,param_2,&UNK_101eb1bb4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009515ac; end: 1009515cf;  */

undefined ** FUN_1009515ac(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009515d0; end: 10095164f;  */

void FUN_1009515d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106ba008;
  func_0x000107c613fc(&UNK_1106ba008,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100951650,puVar1);
  return;
}



/* Entry: 100951650; end: 100951657;  */

void FUN_100951650(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc7e48,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc7e48,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ba0a0;
  func_0x000107c613fc(&UNK_1106ba0a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039d7658;
  FUN_10058fa64(&UNK_1039d7658,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100951658; end: 10095174f;  */

void FUN_100951658(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112fc7e48,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112fc7e48,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106ba0a0;
  func_0x000107c613fc(&UNK_1106ba0a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1039d7658;
  FUN_10058fa64(&UNK_1039d7658,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100951750; end: 100951773;  */

void FUN_100951750(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100951774; end: 100951967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100951774(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_1002d938c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fc7e58) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fc7e60) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fc7e68) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112fc7e70) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112fc7e78) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112fc7e80) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112fc7e88) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112fc7e90) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112fc7e98) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112fc7ea0) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112fc7ea8) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112fc7eb0) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112fc7eb8) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112fc7ec0) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112fc7ec8) = param_16;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
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
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 100951968; end: 100951a6b;  */

void FUN_100951968(void)

{
  long unaff_x20;
  
  FUN_100951774(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 100951a6c; end: 100951a93;  */

undefined ** FUN_100951a6c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100951a94; end: 100951ad3;  */

void FUN_100951a94(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100951a78();
  FUN_100082720("LensCollectionsServicesEntryPointWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100951ad4; end: 100951adb;  */

void FUN_100951ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4f20);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951adc; end: 100951b5f;  */

void FUN_100951adc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4f20,param_2,&UNK_101ce4f24,param_2,&UNK_101ce4f4c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951b60; end: 100951b87;  */

undefined ** FUN_100951b60(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100951b88; end: 100951bc7;  */

void FUN_100951b88(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100951b6c();
  FUN_100082720("LensConfigurationServiceProviderWrapperScopeInitializationPluginProvider",0x48,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100951bc8; end: 100951bcf;  */

void FUN_100951bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5048);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951bd0; end: 100951c53;  */

void FUN_100951bd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5048,param_2,&UNK_101ce504c,param_2,&UNK_101ce5074,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951c54; end: 100951c7b;  */

undefined ** FUN_100951c54(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100951c7c; end: 100951cbb;  */

void FUN_100951c7c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100951c60();
  FUN_100082720("LensExplorerDeeplinkPresentationServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x57,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100951cbc; end: 100951cc3;  */

void FUN_100951cbc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4918);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951cc4; end: 100951d47;  */

void FUN_100951cc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4918,param_2,&UNK_101ce491c,param_2,&UNK_101ce4944,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951d48; end: 100951d6f;  */

undefined ** FUN_100951d48(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100951d70; end: 100951daf;  */

void FUN_100951d70(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100951d54();
  FUN_100082720("LensFullScreenUXServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100951db0; end: 100951db7;  */

void FUN_100951db0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5248);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951db8; end: 100951e3b;  */

void FUN_100951db8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce5248,param_2,&UNK_101ce524c,param_2,&UNK_101ce5274,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951e3c; end: 100951e47;  */

undefined ** FUN_100951e3c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100951e48; end: 100951e73;  */

void FUN_100951e48(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 100951e74; end: 100951e7b;  */

void FUN_100951e74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab38fc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951e7c; end: 100951eff;  */

void FUN_100951e7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab38fc,param_2,&UNK_101ab3900,param_2,&UNK_101ab3928,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951f00; end: 100951f27;  */

undefined ** FUN_100951f00(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100951f28; end: 100951f67;  */

void FUN_100951f28(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100951f0c();
  FUN_100082720("LensLeaderboardServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100951f68; end: 100951f6f;  */

void FUN_100951f68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4bd0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951f70; end: 100951ff3;  */

void FUN_100951f70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce4bd0,param_2,&UNK_101ce4bd4,param_2,&UNK_101ce4bfc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100951ff4; end: 10095201b;  */

undefined ** FUN_100951ff4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10095201c; end: 10095205b;  */

void FUN_10095201c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100952000();
  FUN_100082720("LensMediaShufflerLoggingImplServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10095205c; end: 100952063;  */

void FUN_10095205c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce55a4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100952064; end: 1009520e7;  */

void FUN_100952064(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ce55a4,param_2,&UNK_101ce55a8,param_2,&UNK_101ce55d0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009520e8; end: 1009520f3;  */

undefined ** FUN_1009520e8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009520f4; end: 10095211f;  */

void FUN_1009520f4(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 100952120; end: 100952127;  */

void FUN_100952120(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab3bb8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100952128; end: 1009521ab;  */

void FUN_100952128(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab3bb8,param_2,&UNK_101ab3bbc,param_2,&UNK_101ab3be4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009521ac; end: 1009521b7;  */

undefined ** FUN_1009521ac(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 1009521b8; end: 100952243;  */

void FUN_1009521b8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100952244,param_1);
  return;
}



/* Entry: 100952244; end: 10095224b;  */

void FUN_100952244(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ce57fc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10095224c; end: 1009522cf;  */

void FUN_10095224c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ce57fc,param_2,FUN_1009522d0,param_2,&UNK_101ce5800,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009522d0; end: 1009522f7;  */

void FUN_1009522d0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009522f8; end: 100952307;  */

void FUN_1009522f8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002ae5a4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_1009524a8(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1009524c8();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  func_0x000107c6157c();
  FUN_100952514();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 100952308; end: 1009524a7;  */

void FUN_100952308(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002ae5a4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_1009524a8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1009524c8();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  func_0x000107c6157c();
  FUN_100952514();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 1009524a8; end: 1009524c7;  */

void FUN_1009524a8(void)

{
  func_0x000107c61168(&PTR_PTR_112f85ae0);
  return;
}



/* Entry: 1009524c8; end: 100952513;  */

void FUN_1009524c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 100952514; end: 100952807;  */

/* WARNING: Possible PIC construction at 0x00010095255c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100952584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100952644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009526b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100952724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100952784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009527d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009526bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009527d4) */
/* WARNING: Removing unreachable block (ram,0x000100952788) */
/* WARNING: Removing unreachable block (ram,0x000100952728) */
/* WARNING: Removing unreachable block (ram,0x0001009526b4) */
/* WARNING: Removing unreachable block (ram,0x000100952648) */
/* WARNING: Removing unreachable block (ram,0x0001009526c4) */
/* WARNING: Removing unreachable block (ram,0x0001009526e4) */
/* WARNING: Removing unreachable block (ram,0x000100952660) */
/* WARNING: Removing unreachable block (ram,0x000100952804) */
/* WARNING: Removing unreachable block (ram,0x000100952678) */
/* WARNING: Removing unreachable block (ram,0x000100952588) */
/* WARNING: Removing unreachable block (ram,0x0001009525ac) */
/* WARNING: Removing unreachable block (ram,0x0001009526b8) */
/* WARNING: Removing unreachable block (ram,0x00010095260c) */
/* WARNING: Removing unreachable block (ram,0x00010095258c) */
/* WARNING: Removing unreachable block (ram,0x000100952560) */
/* WARNING: Removing unreachable block (ram,0x000100952564) */
/* WARNING: Removing unreachable block (ram,0x0001009526c0) */
/* WARNING: Removing unreachable block (ram,0x0001009527e8) */

void FUN_100952514(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5c360(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100952808; end: 10095288f;  */

void FUN_100952808(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


