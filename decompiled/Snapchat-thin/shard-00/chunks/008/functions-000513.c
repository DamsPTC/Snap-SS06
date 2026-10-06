/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009d46ac; end: 1009d46d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d46ac(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309ae20) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_11309ae28) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009d46d8; end: 1009d4757;  */

void FUN_1009d46d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073ebe0;
  func_0x000107c613fc(&UNK_11073ebe0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d4758,puVar1);
  return;
}



/* Entry: 1009d4758; end: 1009d475f;  */

void FUN_1009d4758(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113057bf8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113057bf8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073ec78;
  func_0x000107c613fc(&UNK_11073ec78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104086af8;
  FUN_10058fa64(&UNK_104086af8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d4760; end: 1009d4857;  */

void FUN_1009d4760(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113057bf8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113057bf8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073ec78;
  func_0x000107c613fc(&UNK_11073ec78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104086af8;
  FUN_10058fa64(&UNK_104086af8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d4858; end: 1009d487b;  */

void FUN_1009d4858(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d487c; end: 1009d4883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d487c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100097824();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_113057c08) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009d4884; end: 1009d48ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d4884(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100097824();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113057c08) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d48f0; end: 1009d491b;  */

void FUN_1009d48f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d491c; end: 1009d493f;  */

undefined ** FUN_1009d491c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d4940; end: 1009d49bf;  */

void FUN_1009d4940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073ee50;
  func_0x000107c613fc(&UNK_11073ee50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d49c0,puVar1);
  return;
}



/* Entry: 1009d49c0; end: 1009d49c7;  */

void FUN_1009d49c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113058250,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113058250,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073eee8;
  func_0x000107c613fc(&UNK_11073eee8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104088108;
  FUN_10058fa64(&UNK_104088108,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d49c8; end: 1009d4abf;  */

void FUN_1009d49c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113058250,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113058250,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073eee8;
  func_0x000107c613fc(&UNK_11073eee8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104088108;
  FUN_10058fa64(&UNK_104088108,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d4ac0; end: 1009d4ae3;  */

void FUN_1009d4ac0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d4ae4; end: 1009d4af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d4ae4(undefined8 *param_1)

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
  FUN_10009cf04();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_113058260) = lVar1;
  *(undefined8 *)(lVar11 + _DAT_113058268) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_113058270) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_113058278) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_113058280) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_113058288) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_113058290) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_113058298) = uVar8;
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



/* Entry: 1009d4af8; end: 1009d4c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d4af8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10009cf04();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113058260) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113058268) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113058270) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113058278) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113058280) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113058288) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113058290) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113058298) = param_9;
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



/* Entry: 1009d4c24; end: 1009d4cab;  */

void FUN_1009d4c24(void)

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



/* Entry: 1009d4cac; end: 1009d4cb7;  */

undefined ** FUN_1009d4cac(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d4cb8; end: 1009d4d43;  */

void FUN_1009d4cb8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d4d44,param_1);
  return;
}



/* Entry: 1009d4d44; end: 1009d4d4b;  */

void FUN_1009d4d44(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_1009d4d4c();
  func_0x000107c613fc();
  FUN_100083b20(&uStack_38);
  func_0x000107c61170(uStack_38);
  *param_1 = unaff_x20;
  param_1[1] = &PTR_DAT_1103b8330;
  return;
}



/* Entry: 1009d4d4c; end: 1009d4d6b;  */

void FUN_1009d4d4c(void)

{
  func_0x000107c61168(&PTR_PTR_112d9d7f0);
  return;
}



/* Entry: 1009d4d6c; end: 1009d4dcb;  */

void FUN_1009d4d6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_1009d4d4c();
  func_0x000107c613fc();
  FUN_100083b20(&uStack_38);
  func_0x000107c61170(uStack_38);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1103b8330;
  return;
}



/* Entry: 1009d4dcc; end: 1009d4dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d4dcc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_113083800);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_48);
  FUN_100083b20(&lStack_50);
  uVar5 = *(undefined8 *)(lStack_50 + _DAT_1130809c0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_50);
  FUN_100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_113080ad0);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_58);
  puVar4 = PTR_PTR_1126dffb0;
  func_0x000107c610f8();
  func_0x000107c48bac();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar3);
  if (puVar4 != (undefined *)0x0) {
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009d4ee8);
  (*pcVar1)();
}



/* Entry: 1009d4dd8; end: 1009d4ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d4dd8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_113083800);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_48);
  FUN_100083b20(&lStack_50);
  uVar5 = *(undefined8 *)(lStack_50 + _DAT_1130809c0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_50);
  FUN_100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_113080ad0);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_58);
  puVar4 = PTR_PTR_1126dffb0;
  func_0x000107c610f8();
  func_0x000107c48bac();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar3);
  if (puVar4 != (undefined *)0x0) {
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009d4ee8);
  (*pcVar1)();
}



/* Entry: 1009d4ee8; end: 1009d4fbb; -[SCGrpcEventLogger initWithSystemBlizzardLogger:batteryLogger:connectivityMonitor:] */

undefined1 *
FUN_1009d4ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706040;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c42624(puVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009d4fbc; end: 1009d4fcb; -[SCGrpcEventLogger enableNativeClientLogging] */

void FUN_1009d4fbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c197910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dffa0,PTR_s_setEventLoggerDelegate__112643860,param_1);
  return;
}



/* Entry: 1009d4fcc; end: 1009d507b; +[SCNGrpcGrpcManager setEventLoggerDelegate:] */

void FUN_1009d4fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c61174(param_3);
  FUN_1009d507c(auStack_40,param_3);
  FUN_1009d5258(auStack_40);
  FUN_1004bab20(auStack_40);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1009d507c; end: 1009d5127;  */

void FUN_1009d507c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110ccfff0;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1009d5128);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1009d5224(&uStack_50);
  }
  FUN_1009d5250();
  return;
}



/* Entry: 1009d5128; end: 1009d5223;  */

void FUN_1009d5128(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110cd0030;
  puVar4[3] = &PTR_DAT_110cd00d0;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110cd0080;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1009d5224(&uStack_50);
  return;
}



/* Entry: 1009d5224; end: 1009d524f;  */

long FUN_1009d5224(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1009d5250; end: 1009d5257;  */

void FUN_1009d5250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1009d5258; end: 1009d528f;  */

void FUN_1009d5258(undefined8 param_1)

{
  FUN_10048b0dc();
                    /* WARNING: Could not recover jumptable at 0x0001009d528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam000000011383a240 + 8))(plRam000000011383a240,param_1);
  return;
}



/* Entry: 1009d5290; end: 1009d530f;  */

void FUN_1009d5290(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  FUN_1004bab20(&uStack_20);
  return;
}



/* Entry: 1009d5310; end: 1009d5337;  */

undefined ** FUN_1009d5310(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d5338; end: 1009d5377;  */

void FUN_1009d5338(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d531c();
  FUN_100082720("GoogleContactBookStoreImplServiceProviderWrapperScopeInitializationPluginProvider",
                0x51,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d5378; end: 1009d537f;  */

void FUN_1009d5378(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b14c8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d5380; end: 1009d5403;  */

void FUN_1009d5380(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b14c8,param_2,&UNK_1014b14cc,param_2,&UNK_1014b14f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d5404; end: 1009d542b;  */

undefined ** FUN_1009d5404(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d542c; end: 1009d546b;  */

void FUN_1009d542c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d5410();
  FUN_100082720("GoogleContactPermissionInfoServicesProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d546c; end: 1009d5473;  */

void FUN_1009d546c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4d2c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d5474; end: 1009d54f7;  */

void FUN_1009d5474(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4d2c,param_2,&UNK_1014a4d30,param_2,&UNK_1014a4d58,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d54f8; end: 1009d551f;  */

undefined ** FUN_1009d54f8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d5520; end: 1009d555f;  */

void FUN_1009d5520(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d5504();
  FUN_100082720("GoogleSignInServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d5560; end: 1009d5567;  */

void FUN_1009d5560(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4e5c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d5568; end: 1009d55eb;  */

void FUN_1009d5568(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a4e5c,param_2,&UNK_1014a4e60,param_2,&UNK_1014a4e88,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d55ec; end: 1009d55f7;  */

undefined ** FUN_1009d55ec(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d55f8; end: 1009d5683;  */

void FUN_1009d55f8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d5684,param_1);
  return;
}



/* Entry: 1009d5684; end: 1009d5707;  */

void FUN_1009d5684(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b9db0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d5708; end: 1009d572f;  */

void FUN_1009d5708(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009d5730; end: 1009d580b;  */

void FUN_1009d5730(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_10009a838();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1009d580c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1009d582c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  func_0x000107c6157c();
  func_0x0001009d5854();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = param_2;
  return;
}



/* Entry: 1009d580c; end: 1009d582b;  */

void FUN_1009d580c(void)

{
  func_0x000107c61168(&PTR_PTR_112da76d0);
  return;
}



/* Entry: 1009d582c; end: 1009d589f;  */

void FUN_1009d582c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1009d58a0; end: 1009d58bf;  */

void FUN_1009d58a0(void)

{
  func_0x000107c61168(&PTR_PTR_1129cd6e0);
  return;
}



/* Entry: 1009d58c0; end: 1009d5a13;  */

void FUN_1009d58c0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (lRam000000011365f930 != -1) {
    func_0x000107c61568(0x11365f930,FUN_1009d5a14);
  }
  uVar1 = uRam000000011365f938;
  puVar3 = &UNK_110790e08;
  func_0x000107c613fc(&UNK_110790e08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = &UNK_110790e30;
  func_0x000107c613fc(&UNK_110790e30,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1009d5c24;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_1009d5c2c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10006eb60;
  puStack_58 = &UNK_110790e48;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = puStack_48;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  FUN_10006eaa4(uVar1,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar4;
  func_0x000107c61544(puVar4,"",0x3e,0x33,0x23,1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009d5a14);
  (*pcVar2)();
}



/* Entry: 1009d5a14; end: 1009d5bcb;  */

void FUN_1009d5a14(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar8 = *(long *)(lVar1 + -8);
  lStack_70 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_1000295c4();
  uStack_78 = uVar3;
  func_0x000107c5f808(lVar2);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar5 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar4 = 0x112d4ac78;
  FUN_1009d5bcc(0x112d4ac78,0x112d4ac70,&UNK_10d911480,PTR___sSayxGSTsMc_11034dd08);
  func_0x000107c60264(lVar7,&puStack_68,uVar5,uVar4,lVar1,uVar3);
  (**(code **)(lVar8 + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar5 = 0xd000000000000028;
  func_0x000107c5ffec(0xd000000000000028,0x800000010f2088d0,lVar2,lVar7,puVar6,0);
  uRam000000011365f938 = uVar5;
  return;
}



/* Entry: 1009d5bcc; end: 1009d5c0f;  */

void FUN_1009d5bcc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_10002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1009d5c10; end: 1009d5c2b;  */

void FUN_1009d5c10(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1009d5c2c; end: 1009d5cbb;  */

void FUN_1009d5c2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1009d5cbc; end: 1009d5cc3;  */

void FUN_1009d5cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1009d5cc4; end: 1009d5ce7;  */

void FUN_1009d5cc4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d5ce8; end: 1009d5cfb;  */

void FUN_1009d5ce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d5cfc; end: 1009d5d27;  */

void FUN_1009d5cfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d5d28; end: 1009d5d4b;  */

undefined ** FUN_1009d5d28(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d5d4c; end: 1009d5dcb;  */

void FUN_1009d5d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073f088;
  func_0x000107c613fc(&UNK_11073f088,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d5dcc,puVar1);
  return;
}



/* Entry: 1009d5dcc; end: 1009d5dd3;  */

void FUN_1009d5dcc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113058c10,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113058c10,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073f120;
  func_0x000107c613fc(&UNK_11073f120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10408b020;
  FUN_10058fa64(&UNK_10408b020,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d5dd4; end: 1009d5ecb;  */

void FUN_1009d5dd4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113058c10,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113058c10,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073f120;
  func_0x000107c613fc(&UNK_11073f120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10408b020;
  FUN_10058fa64(&UNK_10408b020,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d5ecc; end: 1009d5eef;  */

void FUN_1009d5ecc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d5ef0; end: 1009d5eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d5ef0(undefined8 *param_1)

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
  FUN_10009a914();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_113058c20) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_113058c28) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_113058c30) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_113058c38) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_113058c40) = uVar9;
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



/* Entry: 1009d5f00; end: 1009d5fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d5f00(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_2;
  FUN_10009a914();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113058c20) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113058c28) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113058c30) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113058c38) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113058c40) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d5fdc; end: 1009d604b;  */

void FUN_1009d5fdc(void)

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



/* Entry: 1009d604c; end: 1009d6073;  */

undefined ** FUN_1009d604c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d6074; end: 1009d60b3;  */

void FUN_1009d6074(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009d6058();
  FUN_100082720("LocalNotificationSchedulingServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x52,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009d60b4; end: 1009d60bb;  */

void FUN_1009d60b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b4e40);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d60bc; end: 1009d613f;  */

void FUN_1009d60bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b4e40,param_2,&UNK_1014b4e44,param_2,&UNK_1014b4e6c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009d6140; end: 1009d618f;  */

undefined ** FUN_1009d6140(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d6190; end: 1009d6287;  */

void FUN_1009d6190(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113059388,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113059388,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073f5f8;
  func_0x000107c613fc(&UNK_11073f5f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_10408f99c;
  FUN_10058fa64(&UNK_10408f99c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d6288; end: 1009d62ab;  */

void FUN_1009d6288(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d62ac; end: 1009d62b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d62ac(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_10009fa34();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113059398) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_1130593a0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009d62b4; end: 1009d6337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d62b4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10009fa34();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113059398) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130593a0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d6338; end: 1009d633b;  */

void FUN_1009d6338(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d633c; end: 1009d6367;  */

void FUN_1009d633c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d6368; end: 1009d638f;  */

void FUN_1009d6368(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d6390; end: 1009d640f;  */

void FUN_1009d6390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073f770;
  func_0x000107c613fc(&UNK_11073f770,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d6410,puVar1);
  return;
}



/* Entry: 1009d6410; end: 1009d6417;  */

void FUN_1009d6410(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130596f8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130596f8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073f808;
  func_0x000107c613fc(&UNK_11073f808,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104090cd8;
  FUN_10058fa64(&UNK_104090cd8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d6418; end: 1009d650f;  */

void FUN_1009d6418(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130596f8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130596f8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073f808;
  func_0x000107c613fc(&UNK_11073f808,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104090cd8;
  FUN_10058fa64(&UNK_104090cd8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d6510; end: 1009d6533;  */

void FUN_1009d6510(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d6534; end: 1009d653b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d6534(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10009a980();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_113059708) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009d653c; end: 1009d65a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d653c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10009a980();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113059708) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d65a8; end: 1009d65d3;  */

void FUN_1009d65a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d65d4; end: 1009d6623;  */

undefined ** FUN_1009d65d4(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1009d6624; end: 1009d671b;  */

void FUN_1009d6624(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113059a98,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113059a98,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073fad8;
  func_0x000107c613fc(&UNK_11073fad8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104091c64;
  FUN_10058fa64(&UNK_104091c64,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d671c; end: 1009d673f;  */

void FUN_1009d671c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d6740; end: 1009d6747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d6740(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_100097a08();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113059aa8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113059ab0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009d6748; end: 1009d67cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009d6748(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100097a08();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113059aa8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113059ab0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009d67cc; end: 1009d67cf;  */

void FUN_1009d67cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d67d0; end: 1009d67fb;  */

void FUN_1009d67d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d67fc; end: 1009d6823;  */

void FUN_1009d67fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009d6824; end: 1009d68a3;  */

void FUN_1009d6824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11073fd10;
  func_0x000107c613fc(&UNK_11073fd10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d68a4,puVar1);
  return;
}



/* Entry: 1009d68a4; end: 1009d68ab;  */

void FUN_1009d68a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113059f48,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113059f48,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073fda8;
  func_0x000107c613fc(&UNK_11073fda8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104093454;
  FUN_10058fa64(&UNK_104093454,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d68ac; end: 1009d69a3;  */

void FUN_1009d68ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113059f48,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113059f48,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11073fda8;
  func_0x000107c613fc(&UNK_11073fda8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_104093454;
  FUN_10058fa64(&UNK_104093454,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009d69a4; end: 1009d69c7;  */

void FUN_1009d69a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


