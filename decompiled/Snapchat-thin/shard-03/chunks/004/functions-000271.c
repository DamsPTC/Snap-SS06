/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102836eac; end: 10283706b;  */

void FUN_102836eac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x000107c406c0();
  func_0x000107c61180();
  puVar3 = &UNK_1105559f0;
  func_0x000107c613fc(&UNK_1105559f0,0x28,7);
  *(long *)(puVar3 + 0x10) = param_2 + 0x10;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  puVar4 = &UNK_110555a18;
  func_0x000107c613fc(&UNK_110555a18,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1028372e8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_50 = FUN_1028372f4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011b6bc0;
  puStack_58 = &UNK_110555a30;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6d0(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_1);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0xa4,0x4b,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102836ff8);
  (*pcVar2)();
}



/* Entry: 10283706c; end: 10283713b;  */

void FUN_10283706c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10283713c; end: 10283719b; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin init] */

void FUN_10283713c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPromptMessageAccessoryPlugin.LensPromptMessageAccessoryPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102837168);
  (*pcVar1)();
}



/* Entry: 10283719c; end: 102837217; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028371cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028371fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028371d0) */
/* WARNING: Removing unreachable block (ram,0x000102837200) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283719c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec3e68 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec3e70));
  return;
}



/* Entry: 102837218; end: 102837237;  */

void FUN_102837218(void)

{
  func_0x000107c61168(&PTR_PTR_1128655e8);
  return;
}



/* Entry: 102837238; end: 10283725b;  */

void FUN_102837238(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  pcVar3 = "createContextParams(message:)";
  func_0x0001000c10c0("createContextParams(message:)");
  func_0x000107c61180();
  puVar4 = &UNK_110555900;
  func_0x000107c613fc(&UNK_110555900,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  pcStack_50 = FUN_10283729c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110555918;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 10283725c; end: 10283729b;  */

void FUN_10283725c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10283729c; end: 1028372a7;  */

void FUN_10283729c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_102836424(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1028372a8; end: 1028372db;  */

void FUN_1028372a8(void)

{
  long unaff_x20;
  
  func_0x000102836bf0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1028372dc; end: 1028372f3;  */

void FUN_1028372dc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar7 = &puStack_70;
  func_0x000107c406c0();
  func_0x000107c61180();
  puVar5 = &UNK_1105559f0;
  func_0x000107c613fc(&UNK_1105559f0,0x28,7);
  *(long *)(puVar5 + 0x10) = lVar1 + 0x10;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  puVar6 = &UNK_110555a18;
  func_0x000107c613fc(&UNK_110555a18,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x1028372e8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_50 = FUN_1028372f4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1011b6bc0;
  puStack_58 = &UNK_110555a30;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c4c6d0(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(param_1);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x75,0xa4,0x4b,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102836ff8);
  (*pcVar4)();
}



/* Entry: 1028372f4; end: 102837313;  */

void FUN_1028372f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102837314; end: 10283732b;  */

void FUN_102837314(long param_1,long param_2)

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



/* Entry: 10283732c; end: 10283732f; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin didDismissRepostMention] */

/* WARNING: Possible PIC construction at 0x0001028370f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102837110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028370f8) */
/* WARNING: Removing unreachable block (ram,0x000102837114) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283732c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102837330; end: 102837333; -[_TtC32LensPromptMessageAccessoryPlugin32LensPromptMessageAccessoryPlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001028370f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102837110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028370f8) */
/* WARNING: Removing unreachable block (ram,0x000102837114) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102837330(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102837334; end: 1028373d7;  */

void FUN_102837334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_110555a68;
  func_0x000107c613fc(&UNK_110555a68,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1028375dc,puVar1);
  return;
}



/* Entry: 1028373d8; end: 1028375db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028373d8(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  uVar3 = 0x112ec0ed0;
  func_0x0001000285a8(0x112ec0ed0,&UNK_10dadeda0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar4);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar7 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_1130344b8);
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lStack_68);
  lVar8 = 0;
  FUN_102837218();
  lVar4 = lVar8;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112ec3e58,0);
  *(undefined8 *)(lVar4 + _DAT_112ec3e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ec3e80) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ec3e68);
  *puVar1 = uVar6;
  puVar1[1] = uVar3;
  *(undefined **)(lVar4 + _DAT_112ec3e70) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112ec3e78) = uStack_60;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar8;
  func_0x000107c61174(puVar5);
  uVar3 = uStack_60;
  func_0x000107c61174(uStack_60);
  plVar9 = &lStack_78;
  func_0x000107c61154(plVar9,puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 1028375dc; end: 1028375f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028375dc(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = lStack_58;
  uVar3 = 0x112ec0ed0;
  func_0x0001000285a8(0x112ec0ed0,&UNK_10dadeda0);
  func_0x000107c610f8();
  func_0x00010017da58(lVar4);
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar7 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_1130344b8);
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lStack_68);
  lVar8 = 0;
  FUN_102837218();
  lVar4 = lVar8;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112ec3e58,0);
  *(undefined8 *)(lVar4 + _DAT_112ec3e60) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ec3e80) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ec3e68);
  *puVar1 = uVar6;
  puVar1[1] = uVar3;
  *(undefined **)(lVar4 + _DAT_112ec3e70) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112ec3e78) = uStack_60;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar8;
  func_0x000107c61174(puVar5);
  uVar3 = uStack_60;
  func_0x000107c61174(uStack_60);
  plVar9 = &lStack_78;
  func_0x000107c61154(plVar9,puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 1028375f8; end: 1028376c3;  */

undefined1  [16] FUN_1028375f8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffda;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0c2aa0);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0c2ad0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028376c4);
  (*pcVar1)();
}



/* Entry: 1028376c4; end: 1028376e3; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028376c4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec3eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028376e4; end: 1028376f7; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028376e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec3eb0,param_3);
  return;
}



/* Entry: 1028376f8; end: 102837707; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028376f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3eb8));
  return;
}



/* Entry: 102837708; end: 10283773b; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102837708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3eb8);
  *(undefined8 *)(param_1 + _DAT_112ec3eb8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10283773c; end: 10283774b; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283773c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3ec0));
  return;
}



/* Entry: 10283774c; end: 10283777f; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283774c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3ec0);
  *(undefined8 *)(param_1 + _DAT_112ec3ec0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102837780; end: 1028378df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102837780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ec3ee0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar2 = param_2;
      func_0x000107c5fadc(param_2,param_3);
      uVar3 = param_4;
      func_0x000107c5fadc(param_4,param_5);
      uVar4 = param_6;
      func_0x000107c5fadc(param_6,param_7);
      func_0x000107c4bbf8(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
    }
    FUN_102837f28(param_4,param_5,param_8,param_9,param_2,param_3,param_10,param_11,param_6,param_7)
    ;
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028378e0; end: 102837953; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028378e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028385a0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102837954; end: 10283796b; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102837968) */

void FUN_102837954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10283796c; end: 102837973; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin pluginType] */

undefined8 FUN_10283796c(void)

{
  return 0;
}



/* Entry: 102837974; end: 1028379bb; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin dismissPresentedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102837974(long param_1)

{
  param_1 = param_1 + _DAT_112ec3eb0;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1028379bc; end: 102837a7b; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin shouldDisplayContextualHeaderForMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1028379bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112ec3ee8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c4ce08(lVar3,param_2,param_3);
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  if (lVar2 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c404a8(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    bVar1 = (int)lVar3 == 0x12;
  }
  return bVar1;
}



/* Entry: 102837a7c; end: 102837eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102837a7c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  
  uVar1 = param_2;
  func_0x000107c51f08();
  func_0x000107c61180();
  uVar8 = param_1;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar11 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112ec3ed8);
  uVar3 = ((ulong *)(unaff_x20 + _DAT_112ec3ed8))[1];
  if (uVar11 == uVar8 && uVar1 == uVar3) {
    uVar11 = 1;
  }
  else {
    func_0x000107c605b8(uVar11,uVar1,uVar8,uVar3,0);
  }
  func_0x000107c6142c(uVar1);
  uVar1 = uVar8;
  func_0x000107c5fadc(uVar8,uVar3);
  uVar2 = param_2;
  uVar9 = uVar1;
  func_0x0001070b1d3c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c5db08();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar3 = uVar1;
      func_0x000107c5faec();
      uVar10 = uVar9;
      func_0x000107c61170(uVar1);
      uVar8 = uVar2;
      func_0x000107c42120();
      func_0x000107c61180();
      uVar1 = uVar10;
      if (uVar8 != 0) {
        uVar3 = uVar8;
        func_0x000107c5faec();
        uVar1 = uVar10;
        func_0x000107c6142c(uVar9);
        func_0x000107c61170(uVar8);
        uVar9 = uVar10;
      }
      if ((uVar11 & 1) == 0) {
        func_0x000102839130();
      }
      else {
        FUN_102839060();
      }
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
      lVar5 = lVar4;
      func_0x00010075bbf0();
      *(long *)(lVar4 + 0x40) = lVar5;
      *(ulong *)(lVar4 + 0x20) = uVar3;
      *(ulong *)(lVar4 + 0x28) = uVar9;
      func_0x000107c61434(uVar9);
      uVar3 = uVar1;
      func_0x000107c5fb00(uVar8,uVar1,lVar4);
      func_0x000107c6142c(uVar1);
      puVar6 = PTR_PTR_1126c68c8;
      func_0x000107c61168(PTR_PTR_1126c68c8);
      func_0x000107c501a8();
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126c68c0;
      func_0x000107c610f8(PTR_PTR_1126c68c0);
      func_0x000107c5fadc(uVar8,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c48c9c(puVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar9);
      func_0x000107c61170(puVar6);
      goto LAB_102837e8c;
    }
    func_0x000107c61170(uVar2);
  }
  func_0x000107c5fadc(uVar8,uVar3);
  uVar3 = uVar8;
  func_0x0001070b1fb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (param_2 != 0) {
    uVar8 = param_2;
    func_0x000107c5db08();
    func_0x000107c61180();
    if (uVar8 != 0) {
      uVar11 = uVar8;
      func_0x000107c5faec();
      uVar1 = uVar3;
      func_0x000107c61170(uVar8);
      uVar8 = param_2;
      func_0x000107c42120();
      func_0x000107c61180();
      uVar2 = uVar1;
      if (uVar8 != 0) {
        uVar11 = uVar8;
        func_0x000107c5faec();
        uVar2 = uVar1;
        func_0x000107c6142c(uVar3);
        func_0x000107c61170(uVar8);
        uVar3 = uVar1;
      }
      FUN_102839060();
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
      lVar5 = lVar4;
      func_0x00010075bbf0();
      *(long *)(lVar4 + 0x40) = lVar5;
      *(ulong *)(lVar4 + 0x20) = uVar11;
      *(ulong *)(lVar4 + 0x28) = uVar3;
      func_0x000107c61434(uVar3);
      uVar11 = uVar2;
      func_0x000107c5fb00(uVar8,uVar2,lVar4);
      func_0x000107c6142c(uVar2);
      puVar6 = PTR_PTR_1126c68c8;
      func_0x000107c61168(PTR_PTR_1126c68c8);
      func_0x000107c501a8();
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126c68c0;
      func_0x000107c610f8(PTR_PTR_1126c68c0);
      func_0x000107c5fadc(uVar8,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c48c9c(puVar7);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(puVar6);
      goto LAB_102837e8c;
    }
    func_0x000107c61170(param_2);
  }
  puVar7 = PTR_PTR_1126c68c0;
  func_0x000107c610f8(PTR_PTR_1126c68c0);
  uVar8 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c48c9c(puVar7);
LAB_102837e8c:
  func_0x000107c61170(uVar8);
  return puVar7;
}



/* Entry: 102837eb0; end: 102837f27; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_102837eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102837a7c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102837f28; end: 1028383e7;  */

/* WARNING: Possible PIC construction at 0x000102838068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283815c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102838398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028383a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028383b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028383ac) */
/* WARNING: Removing unreachable block (ram,0x00010283839c) */
/* WARNING: Removing unreachable block (ram,0x00010283836c) */
/* WARNING: Removing unreachable block (ram,0x00010283834c) */
/* WARNING: Removing unreachable block (ram,0x00010283833c) */
/* WARNING: Removing unreachable block (ram,0x00010283832c) */
/* WARNING: Removing unreachable block (ram,0x00010283831c) */
/* WARNING: Removing unreachable block (ram,0x000102838208) */
/* WARNING: Removing unreachable block (ram,0x000102838238) */
/* WARNING: Removing unreachable block (ram,0x00010283824c) */
/* WARNING: Removing unreachable block (ram,0x00010283838c) */
/* WARNING: Removing unreachable block (ram,0x000102838268) */
/* WARNING: Removing unreachable block (ram,0x000102838160) */
/* WARNING: Removing unreachable block (ram,0x000102838144) */
/* WARNING: Removing unreachable block (ram,0x000102838124) */
/* WARNING: Removing unreachable block (ram,0x00010283808c) */
/* WARNING: Removing unreachable block (ram,0x00010283807c) */
/* WARNING: Removing unreachable block (ram,0x00010283806c) */
/* WARNING: Removing unreachable block (ram,0x0001028383bc) */

void FUN_102837f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  func_0x000107c610f8();
  func_0x000107c486a0();
  puVar1 = PTR_PTR_1126b5ca0;
  func_0x000107c610f8(PTR_PTR_1126b5ca0);
  func_0x000107c5fadc(param_9,param_10);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c5ee20(param_7,param_8);
  func_0x000107c47310(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 1028383e8; end: 102838463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028383e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112ec3eb0;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      func_0x000107c41864(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102838464; end: 1028384bf; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin init] */

void FUN_102838464(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPromptLensResponseMessagePlugin.PromptLensResponseMessagePlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102838490);
  (*pcVar1)();
}



/* Entry: 1028384c0; end: 10283855b; -[_TtC33SCPromptLensResponseMessagePlugin31PromptLensResponseMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028384c0(long param_1)

{
  func_0x000100e3b598(param_1 + _DAT_112ec3eb0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3eb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3ec0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3ec8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3ed0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec3ed8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3ee0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec3ee8));
  return;
}



/* Entry: 10283855c; end: 10283857b;  */

void FUN_10283855c(void)

{
  func_0x000107c61168(&PTR_PTR_1128656d0);
  return;
}



/* Entry: 10283857c; end: 10283859f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283857c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ec3eb0;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41864(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1028385a0; end: 102838b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028385a0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long unaff_x20;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ec3ee8);
  func_0x000107c4ce08(puVar2,param_2,param_1);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c40258();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5faec();
  uVar16 = param_2;
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c40674();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c5faec();
  uVar17 = uVar16;
  func_0x000107c6142c(param_2);
  func_0x000107c61170(puVar3);
  uVar18 = (ulong)puVar4 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar18 = param_2 >> 0x38 & 0xf;
  }
  func_0x000107c6142c(uVar16);
  if (uVar18 != 0) {
    uVar18 = (ulong)puVar5 & 0xffffffffffff;
    if ((uVar16 & 0x2000000000000000) != 0) {
      uVar18 = uVar16 >> 0x38 & 0xf;
    }
    if (uVar18 != 0) {
      puVar3 = puVar2;
      func_0x000107c4051c();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x000107c4f4ac();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        if (puVar4 != (undefined *)0x0) {
          puVar3 = puVar4;
          func_0x000107c44a60();
          if ((((ulong)puVar3 & 1) != 0) &&
             (puVar3 = puVar4, func_0x000107c44aa0(), (int)puVar3 != 0)) {
            puVar3 = puVar4;
            func_0x000107c4f490();
            func_0x000107c61180();
            if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102838b24);
              (*pcVar1)();
            }
            puVar5 = puVar3;
            func_0x000107c5cb4c();
            func_0x000107c61180();
            func_0x000107c61170(puVar3);
            if (puVar5 != (undefined *)0x0) {
              puVar3 = puVar5;
              func_0x000107c5faec();
              uVar18 = uVar17;
              func_0x000107c61170(puVar5);
              puVar5 = puVar4;
              func_0x000107c4f48c();
              func_0x000107c61180();
              if (puVar5 != (undefined *)0x0) {
                puVar6 = puVar5;
                func_0x000107c5ee30();
                uVar16 = uVar18;
                func_0x000107c61170(puVar5);
                puVar5 = puVar4;
                func_0x000107c5065c();
                func_0x000107c61180();
                if (puVar5 == (undefined *)0x0) {
                  func_0x000107c6142c(uVar17);
                  func_0x000107c615e8(puVar2);
                }
                else {
                  puVar7 = puVar5;
                  func_0x000107c5ee30();
                  uVar19 = uVar16;
                  func_0x000107c61170(puVar5);
                  puVar5 = puVar4;
                  func_0x000107c50660();
                  func_0x000107c61180();
                  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102838b28);
                    (*pcVar1)();
                  }
                  puVar8 = puVar5;
                  func_0x000107c5cb4c();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar5);
                  if (puVar8 == (undefined *)0x0) {
                    func_0x000107c6142c(uVar17);
                    func_0x000107c615e8(puVar2);
                  }
                  else {
                    puVar5 = puVar8;
                    func_0x000107c5faec();
                    func_0x000107c61170(puVar8);
                    puVar8 = puVar4;
                    func_0x000107c4b1dc();
                    if (puVar8 != (undefined *)0x0) {
                      puVar9 = PTR_PTR_1126ab250;
                      func_0x000107c610f8();
                      func_0x000107c453e4();
                      puVar8 = puVar4;
                      func_0x000107c4b1dc();
                      puVar10 = PTR___ss5Int64VN_11034ee50;
                      puVar20 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
                      puStack_90 = puVar8;
                      func_0x000107c6057c();
                      puVar8 = &UNK_110555b58;
                      func_0x000107c613fc(&UNK_110555b58,0x18,7);
                      func_0x000107c61614(puVar8 + 0x10);
                      puVar11 = &UNK_110555ba8;
                      func_0x000107c613fc(&UNK_110555ba8,0x68,7);
                      *(undefined **)(puVar11 + 0x10) = puVar8;
                      *(undefined **)(puVar11 + 0x18) = puVar5;
                      *(ulong *)(puVar11 + 0x20) = uVar19;
                      *(undefined **)(puVar11 + 0x28) = puVar3;
                      *(ulong *)(puVar11 + 0x30) = uVar17;
                      *(undefined **)(puVar11 + 0x38) = puVar10;
                      *(undefined **)(puVar11 + 0x40) = puVar20;
                      *(undefined **)(puVar11 + 0x48) = puVar6;
                      *(ulong *)(puVar11 + 0x50) = uVar18;
                      *(undefined **)(puVar11 + 0x58) = puVar7;
                      *(ulong *)(puVar11 + 0x60) = uVar16;
                      puVar3 = PTR_PTR_1126ae820;
                      func_0x000107c610f8(PTR_PTR_1126ae820);
                      func_0x00010006c00c(puVar6,uVar18);
                      func_0x00010006c00c(puVar7,uVar16);
                      func_0x000107c453e4(puVar3);
                      func_0x000107c6157c(puVar11);
                      puVar5 = puVar3;
                      func_0x000107c5cb24(puVar3);
                      func_0x000107c61180();
                      puVar8 = PTR_PTR_1126ab258;
                      func_0x000107c610f8();
                      pcStack_70 = FUN_102838b28;
                      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_88 = 0x42000000;
                      puStack_80 = &UNK_1000f6b44;
                      puStack_78 = &UNK_110555bc0;
                      ppuVar12 = &puStack_90;
                      puStack_68 = puVar11;
                      func_0x000107c60bc4(ppuVar12);
                      func_0x000107c47bf0();
                      func_0x000107c60bd0(ppuVar12);
                      func_0x000107c61170(puVar5);
                      func_0x000107c61574(puStack_68);
                      puVar5 = PTR_PTR_1126ab260;
                      func_0x000107c610f8(PTR_PTR_1126ab260);
                      func_0x000107c453e4();
                      func_0x000107c4d664(puVar3);
                      func_0x000107c61170(puVar5);
                      uVar21 = 0x112ec3f18;
                      uVar13 = 0;
                      FUN_102838b64(0,0x112ec3f18,&PTR_PTR_1126ab268);
                      func_0x000107c614e8();
                      func_0x000107c3ff48();
                      func_0x000107c61180();
                      uVar14 = uVar13;
                      func_0x000107c5faec();
                      func_0x000107c61170(uVar13);
                      uVar13 = 0;
                      FUN_102838b64(0,0x112ec3f20,&PTR_PTR_1126ab250);
                      uVar15 = 0;
                      puStack_90 = puVar9;
                      puStack_78 = (undefined *)uVar13;
                      FUN_102838b64(0,0x112ec3f28,&PTR_PTR_1126ab258);
                      apuStack_b0[0] = puVar8;
                      uStack_98 = uVar15;
                      func_0x000107c610f8(PTR_PTR_1126c67d8);
                      func_0x000107c61174(puVar9);
                      func_0x000107c61174(puVar8);
                      FUN_1027efbc4(uVar14,uVar21,&puStack_90,apuStack_b0);
                      func_0x000107c61170(puVar4);
                      func_0x00010006c090(puVar6,uVar18);
                      func_0x00010006c090(puVar7,uVar16);
                      func_0x000107c615e8(puVar2);
                      func_0x000107c61170(puVar3);
                      func_0x000107c61170(puVar8);
                      func_0x000107c61170(puVar9);
                      func_0x000107c61574(puVar11);
                      return uVar14;
                    }
                    func_0x000107c6142c(uVar17);
                    func_0x000107c6142c(uVar19);
                    func_0x000107c615e8(puVar2);
                  }
                  func_0x00010006c090(puVar7,uVar16);
                }
                func_0x00010006c090(puVar6,uVar18);
                func_0x000107c61170(puVar4);
                return 0;
              }
              func_0x000107c61170(puVar4);
              func_0x000107c6142c(uVar17);
              goto LAB_102838a78;
            }
          }
          func_0x000107c61170(puVar4);
        }
      }
    }
  }
LAB_102838a78:
  func_0x000107c615e8(puVar2);
  return 0;
}



/* Entry: 102838b28; end: 102838b63;  */

void FUN_102838b28(void)

{
  long unaff_x20;
  
  FUN_102837780(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102838b64; end: 102838ba3;  */

void FUN_102838b64(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102838ba4; end: 102838bab;  */

void FUN_102838ba4(long param_1,long param_2)

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



/* Entry: 102838bac; end: 102838c73;  */

void FUN_102838bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110555bf8;
  func_0x000107c613fc(&UNK_110555bf8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102838fc0,puVar1);
  return;
}



/* Entry: 102838c74; end: 102838fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102838c74(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000100083b20(&puStack_90);
  uVar2 = 0x112ec3f30;
  func_0x0001000285a8(0x112ec3f30,&UNK_10db59500);
  func_0x000107c610f8();
  puVar3 = puStack_90;
  func_0x0001003b3b80(puStack_90,uVar2);
  puVar4 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_110555c40;
  uVar12 = 0x20;
  func_0x000107c613fc(&UNK_110555c40,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcStack_70 = FUN_10283903c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1024fdf20;
  puStack_78 = &UNK_110555c58;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_68;
  func_0x000107c61174(puVar4);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  puVar7 = puStack_90;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&lStack_98);
  uVar8 = *(undefined8 *)(lStack_98 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_98);
  uVar2 = uVar8;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar8 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_a0);
  uVar2 = uStack_a0;
  func_0x000107c4f4b8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_a0);
  func_0x000100083b20(&lStack_a8);
  uVar13 = *(undefined8 *)(lStack_a8 + _DAT_11301aef0);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(lStack_a8);
  lVar9 = 0;
  FUN_10283855c();
  lVar10 = lVar9;
  func_0x000107c610f8();
  func_0x000107c61614(lVar10 + _DAT_112ec3eb0,0);
  *(undefined8 *)(lVar10 + _DAT_112ec3eb8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112ec3ec0) = 0;
  *(undefined **)(lVar10 + _DAT_112ec3ec8) = puVar5;
  *(undefined **)(lVar10 + _DAT_112ec3ed0) = puVar7;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112ec3ed8);
  *puVar1 = uVar8;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar10 + _DAT_112ec3ee0) = uVar2;
  *(undefined8 *)(lVar10 + _DAT_112ec3ee8) = uVar13;
  puVar3 = PTR_s_init_1125d9248;
  lStack_b8 = lVar10;
  lStack_b0 = lVar9;
  func_0x000107c615f0(uVar13);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(uVar2);
  plVar11 = &lStack_b8;
  func_0x000107c61154(plVar11,puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(puVar4);
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 102838fc0; end: 102838fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102838fc0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&puStack_90,*(undefined8 *)(unaff_x20 + 0x10),uVar8,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  uVar2 = 0x112ec3f30;
  func_0x0001000285a8(0x112ec3f30,&UNK_10db59500);
  func_0x000107c610f8();
  puVar3 = puStack_90;
  func_0x0001003b3b80(puStack_90,uVar2);
  puVar4 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_110555c40;
  uVar12 = 0x20;
  func_0x000107c613fc(&UNK_110555c40,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  pcStack_70 = FUN_10283903c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1024fdf20;
  puStack_78 = &UNK_110555c58;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_68;
  func_0x000107c61174(puVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  puVar7 = puStack_90;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&lStack_98);
  uVar8 = *(undefined8 *)(lStack_98 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_98);
  uVar2 = uVar8;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar8 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000100083b20(&uStack_a0);
  uVar2 = uStack_a0;
  func_0x000107c4f4b8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_a0);
  func_0x000100083b20(&lStack_a8);
  uVar13 = *(undefined8 *)(lStack_a8 + _DAT_11301aef0);
  func_0x000107c615f0(uVar13);
  func_0x000107c61170(lStack_a8);
  lVar9 = 0;
  FUN_10283855c();
  lVar10 = lVar9;
  func_0x000107c610f8();
  func_0x000107c61614(lVar10 + _DAT_112ec3eb0,0);
  *(undefined8 *)(lVar10 + _DAT_112ec3eb8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112ec3ec0) = 0;
  *(undefined **)(lVar10 + _DAT_112ec3ec8) = puVar5;
  *(undefined **)(lVar10 + _DAT_112ec3ed0) = puVar7;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112ec3ed8);
  *puVar1 = uVar8;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar10 + _DAT_112ec3ee0) = uVar2;
  *(undefined8 *)(lVar10 + _DAT_112ec3ee8) = uVar13;
  puVar3 = PTR_s_init_1125d9248;
  lStack_b8 = lVar10;
  lStack_b0 = lVar9;
  func_0x000107c615f0(uVar13);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(uVar2);
  plVar11 = &lStack_b8;
  func_0x000107c61154(plVar11,puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(puVar4);
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 102838fe0; end: 10283903b;  */

undefined * FUN_102838fe0(void)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  puVar1 = PTR_PTR_1126b5f28;
  func_0x000107c610f8(PTR_PTR_1126b5f28);
  func_0x000107c47450();
  func_0x000107c61170(uStack_28);
  return puVar1;
}



/* Entry: 10283903c; end: 10283905f;  */

undefined * FUN_10283903c(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  puVar1 = PTR_PTR_1126b5f28;
  func_0x000107c610f8(PTR_PTR_1126b5f28);
  func_0x000107c47450();
  func_0x000107c61170(uStack_28);
  return puVar1;
}



/* Entry: 102839060; end: 1028391fb;  */

undefined1  [16] FUN_102839060(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x707365725f756f79;
  func_0x000107c5fadc(0x707365725f756f79,0xed00006465646e6f);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0c2b70);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102839130);
  (*pcVar1)();
}



/* Entry: 1028391fc; end: 1028392ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1028391fc(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112ec3f50;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112ec3f50);
  pcVar4 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    FUN_10283be30(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    pcVar3 = FUN_102839300;
    func_0x0001000d5158(FUN_102839300,0,pcVar2);
    uVar5 = 0x112d72d90;
    func_0x00010283be70(0x112d72d90,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x0001000c2068();
    func_0x000107c61574();
    func_0x0001004575f0();
    func_0x000107c61574(uVar5);
    pcVar4 = pcVar3;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(pcVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar4;
    func_0x000107c61174(pcVar4);
    func_0x000107c61170(uVar5);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c61174(pcVar2);
  return pcVar4;
}



/* Entry: 102839300; end: 102839337;  */

void FUN_102839300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
    func_0x000107c5fadc();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102839338; end: 10283934b; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102839338(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec3f80,param_3);
  return;
}



/* Entry: 10283934c; end: 10283936b; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283934c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec3f88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10283936c; end: 10283937f; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283936c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec3f88,param_3);
  return;
}



/* Entry: 102839380; end: 10283938f; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102839380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3f90));
  return;
}



/* Entry: 102839390; end: 1028393c3; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102839390(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3f90);
  *(undefined8 *)(param_1 + _DAT_112ec3f90) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028393c4; end: 1028393d3; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028393c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3f98));
  return;
}



/* Entry: 1028393d4; end: 102839407; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028393d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3f98);
  *(undefined8 *)(param_1 + _DAT_112ec3f98) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102839408; end: 102839be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102839408(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  long unaff_x20;
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puStack_100;
  undefined *puStack_f0;
  undefined *apuStack_a8 [3];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_70;
  
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112ec3ff8);
  func_0x000107c4ce08(puVar5,param_2,param_1);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
LAB_1028394c0:
    func_0x000107c615e8(puVar5);
    return 0;
  }
  puVar7 = puVar6;
  func_0x000107c5bd28();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102839be8);
    (*pcVar4)();
  }
  puVar6 = puVar7;
  func_0x000107c439b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar6 == (undefined *)0x0) goto LAB_1028394c0;
  puVar7 = puVar6;
  func_0x000107c3daf4();
  if ((int)puVar7 == 1) {
    ppuVar20 = &PTR_PTR_1133bb488;
LAB_1028394d4:
    puVar8 = *ppuVar20;
    func_0x000107c61174();
    puVar7 = puVar6;
    FUN_10283bd70();
    if (((ulong)puVar7 & 0xff00000000) != 0x100000000) {
      puVar14 = *(undefined **)(unaff_x20 + _DAT_112ec3f38);
      puVar2 = (undefined *)((ulong *)(unaff_x20 + _DAT_112ec3f38))[1];
      puVar9 = puVar14;
      func_0x000107c5fadc(puVar14,puVar2);
      uVar10 = param_2;
      puVar18 = puVar9;
      func_0x0001070b1d3c();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (uVar10 != 0) {
        puVar9 = puVar5;
        func_0x000107c4cde0();
        func_0x000107c61180();
        puVar11 = puVar9;
        func_0x000107c5faec();
        puVar26 = puVar18;
        if (((puVar11 == puVar14) && (puVar18 == puVar2)) ||
           (func_0x000107c605b8(), ((ulong)puVar11 & 1) != 0)) {
          func_0x000107c61174(puVar9);
          bVar3 = true;
        }
        else {
          puVar11 = puVar9;
          func_0x000107c61174(puVar9);
          uVar12 = uVar10;
          func_0x000107c5db08();
          func_0x000107c61180();
          if (uVar12 == 0) {
            func_0x000107c615e8(puVar5);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(uVar10);
            func_0x000107c6142c(puVar18);
            func_0x000107c61170(puVar11);
            puVar6 = puVar11;
            goto LAB_102839654;
          }
          func_0x000107c61170();
          bVar3 = false;
        }
        uVar22 = uVar10;
        func_0x000107c42120();
        func_0x000107c61180();
        puVar11 = puVar26;
        uVar12 = uVar10;
        if (uVar22 == 0) {
LAB_10283967c:
          func_0x000107c5db08();
          func_0x000107c61180();
        }
        else {
          uVar24 = uVar22;
          func_0x000107c5faec();
          puVar11 = puVar26;
          func_0x000107c61170(uVar22);
          func_0x000107c6142c(puVar26);
          uVar22 = uVar24 & 0xffffffffffff;
          if (((ulong)puVar26 & 0x2000000000000000) != 0) {
            uVar22 = (ulong)puVar26 >> 0x38 & 0xf;
          }
          if (uVar22 == 0) goto LAB_10283967c;
          func_0x000107c42120();
          func_0x000107c61180();
        }
        if (uVar12 == 0) {
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar9);
          func_0x000107c615e8(puVar5);
          func_0x000107c61170(uVar10);
          func_0x000107c6142c(puVar18);
          return 0;
        }
        uVar22 = uVar12;
        func_0x000107c5faec();
        puVar26 = puVar11;
        func_0x000107c61170(uVar12);
        uVar12 = uVar10;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar12 == 0) {
          uVar24 = 0;
          puVar26 = (undefined *)0x0;
        }
        else {
          uVar24 = uVar12;
          func_0x000107c5faec();
          func_0x000107c61170(uVar12);
        }
        puVar1 = (ulong *)(unaff_x20 + _DAT_112ec3f40);
        uVar12 = puVar1[1];
        *puVar1 = uVar24;
        puVar1[1] = (ulong)puVar26;
        func_0x000107c6142c(uVar12);
        if (bVar3) {
          uVar12 = puVar1[1];
          if (uVar12 != 0) {
            uVar24 = *puVar1;
            func_0x000107c61434(uVar12);
            FUN_102839be8(puVar7,uVar24,uVar12);
            func_0x000107c6142c(uVar12);
            goto LAB_102839760;
          }
        }
        else {
LAB_102839760:
          puVar26 = (undefined *)puVar1[1];
          if (puVar26 != (undefined *)0x0) {
            puVar21 = (undefined *)*puVar1;
            func_0x000107c61434(puVar26);
            puVar25 = puVar9;
            func_0x0001070b1fb4();
            func_0x000107c61180();
            func_0x000107c61170(puVar9);
            if (param_2 == 0) {
              func_0x000107c6142c(puVar18);
              func_0x000107c6142c(puVar11);
              func_0x000107c6142c(puVar26);
              func_0x000107c615e8(puVar5);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(uVar10);
              func_0x000107c61170(puVar8);
              puVar6 = puVar9;
              goto LAB_102839654;
            }
            puVar23 = puVar6;
            func_0x000107c3dad8();
            func_0x000107c61180();
            puStack_f0 = puVar25;
            if (puVar23 == (undefined *)0x0) {
LAB_102839838:
              puVar23 = (undefined *)0x0;
              puVar25 = (undefined *)0x0;
            }
            else {
              puVar13 = puVar23;
              func_0x000107c5cb4c();
              func_0x000107c61180();
              func_0x000107c61170(puVar23);
              puStack_f0 = puVar25;
              if (puVar13 == (undefined *)0x0) goto LAB_102839838;
              puVar23 = puVar13;
              func_0x000107c5faec();
              puStack_f0 = puVar25;
              func_0x000107c61170(puVar13);
            }
            if ((int)puVar7 != 0) {
              puStack_88 = puVar23;
              puStack_80 = puVar25;
              func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + _DAT_112ec3f48),&puStack_88);
            }
            if (!bVar3) {
              func_0x000107c6142c(puVar26);
              func_0x000107c61434(puVar2);
              puVar26 = puVar2;
              puVar21 = puVar14;
            }
            puVar14 = puVar6;
            func_0x000107c3dadc();
            func_0x000107c61180();
            if (puVar14 == (undefined *)0x0) {
              puStack_100 = (undefined *)0x0;
              puStack_f0 = (undefined *)0x0;
            }
            else {
              puStack_100 = puVar14;
              func_0x000107c5faec();
              func_0x000107c61170(puVar14);
            }
            puVar14 = PTR_PTR_1126ab270;
            func_0x000107c610f8();
            func_0x000107c5fadc(puVar21,puVar26);
            func_0x000107c5fadc(uVar22,puVar11);
            func_0x000107c485bc();
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar21);
            func_0x000107c61170(uVar22);
            uVar12 = param_2;
            func_0x000107c3e9e8();
            func_0x000107c61180();
            if (uVar12 == 0) {
LAB_1028399e8:
              uVar22 = 0;
            }
            else {
              uVar22 = uVar12;
              func_0x000107c3e978();
              func_0x000107c61180();
              func_0x000107c61170(uVar12);
              if (uVar22 == 0) goto LAB_1028399e8;
            }
            func_0x000107c58f38(puVar14);
            func_0x000107c61170(uVar22);
            uVar12 = param_2;
            func_0x000107c3e9e8();
            func_0x000107c61180();
            if (uVar12 != 0) {
              uVar22 = uVar12;
              func_0x000107c3ea1c();
              func_0x000107c61180();
              func_0x000107c61170(uVar12);
              if (uVar22 != 0) goto LAB_102839a38;
            }
            uVar22 = 0;
LAB_102839a38:
            func_0x000107c58f40(puVar14);
            func_0x000107c61170(uVar22);
            if (puStack_f0 == (undefined *)0x0) {
              puStack_100 = (undefined *)0x0;
            }
            else {
              func_0x000107c5fadc(puStack_100);
            }
            func_0x000107c573dc(puVar14);
            func_0x000107c61170(puStack_100);
            if (puVar25 == (undefined *)0x0) {
              puVar23 = (undefined *)0x0;
            }
            else {
              func_0x000107c5fadc(puVar23,puVar25);
            }
            func_0x000107c525f8(puVar14);
            func_0x000107c61170(puVar23);
            FUN_102839f40();
            uVar19 = 0x112ec4038;
            uVar15 = 0;
            FUN_10283be30(0,0x112ec4038,&PTR_PTR_1126ab278);
            func_0x000107c614e8();
            func_0x000107c3ff48();
            func_0x000107c61180();
            uVar16 = uVar15;
            func_0x000107c5faec();
            func_0x000107c61170(uVar15);
            uVar15 = 0;
            FUN_10283be30(0,0x112ec4040,&PTR_PTR_1126ab270);
            uVar17 = 0;
            puStack_88 = puVar14;
            uStack_70 = uVar15;
            FUN_10283be30(0,0x112ec4048,&PTR_PTR_1126ab280);
            apuStack_a8[0] = puVar7;
            uStack_90 = uVar17;
            func_0x000107c610f8(PTR_PTR_1126c67d8);
            func_0x000107c61174(puVar14);
            func_0x000107c61174(puVar7);
            FUN_1027efbc4(uVar16,uVar19,&puStack_88,apuStack_a8);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar14);
            func_0x000107c615e8(puVar5);
            func_0x000107c6142c(puVar25);
            func_0x000107c61170(param_2);
            func_0x000107c6142c(puVar26);
            func_0x000107c6142c(puVar11);
            func_0x000107c61170(uVar10);
            func_0x000107c6142c(puVar18);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar6);
            func_0x000107c6142c(puStack_f0);
            return uVar16;
          }
        }
        func_0x000107c6142c(puVar18);
        func_0x000107c6142c(puVar11);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        puVar6 = puVar9;
        goto LAB_102839654;
      }
    }
    func_0x000107c61170(puVar8);
  }
  else if ((int)puVar7 == 2) {
    ppuVar20 = &PTR_PTR_1133bb490;
    goto LAB_1028394d4;
  }
  func_0x000107c615e8(puVar5);
LAB_102839654:
  func_0x000107c61170(puVar6);
  return 0;
}



/* Entry: 102839be8; end: 102839ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102839be8(int param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  long lVar5;
  long lVar6;
  byte abStack_52 [2];
  
  lVar5 = _DAT_112ec3f78;
  lVar6 = _DAT_112ec3f70;
  if (param_1 == 5) {
    if (*(long *)(unaff_x20 + _DAT_112ec3f70) == 0) {
      abStack_52[1] = 1;
      func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
      func_0x000107c613fc();
      pbVar1 = abStack_52 + 1;
      func_0x00010042e6a0();
      lVar5 = _DAT_112ec3f60;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec3f60);
      *(byte **)(unaff_x20 + _DAT_112ec3f60) = pbVar1;
      func_0x000107c61574(uVar3);
      lVar5 = *(long *)(unaff_x20 + lVar5);
      if (lVar5 == 0) {
        pcVar4 = (code *)0x0;
      }
      else {
        uVar3 = 0;
        FUN_10283be30(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c6157c(lVar5);
        pcVar2 = FUN_10283bcac;
        func_0x0001000bfde0(FUN_10283bcac,0,uVar3);
        uVar3 = 0x112d59880;
        func_0x00010283be70(0x112d59880,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x0001000c2068();
        func_0x000107c61574();
        func_0x0001004575f0();
        func_0x000107c61574(uVar3);
        pcVar4 = pcVar2;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61574(lVar5);
        func_0x000107c61170(pcVar2);
      }
      uVar3 = *(undefined8 *)(unaff_x20 + lVar6);
      *(code **)(unaff_x20 + lVar6) = pcVar4;
      func_0x000107c61170(uVar3);
      FUN_10283b628();
      FUN_10283b704();
    }
  }
  else if (param_1 == 4) {
    if (*(long *)(unaff_x20 + _DAT_112ec3f78) == 0) {
      uVar3 = param_2;
      FUN_10283b350(param_2,param_3);
      abStack_52[0] = ((byte)uVar3 ^ 0xff) & 1;
      func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
      func_0x000107c613fc();
      pbVar1 = abStack_52;
      func_0x00010042e6a0();
      lVar6 = _DAT_112ec3f68;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec3f68);
      *(byte **)(unaff_x20 + _DAT_112ec3f68) = pbVar1;
      func_0x000107c61574(uVar3);
      lVar6 = *(long *)(unaff_x20 + lVar6);
      if (lVar6 == 0) {
        pcVar4 = (code *)0x0;
      }
      else {
        uVar3 = 0;
        FUN_10283be30(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c6157c(lVar6);
        pcVar2 = FUN_10283bcac;
        func_0x0001000bfde0(FUN_10283bcac,0,uVar3);
        uVar3 = 0x112d59880;
        func_0x00010283be70(0x112d59880,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x0001000c2068();
        func_0x000107c61574();
        func_0x0001004575f0();
        func_0x000107c61574(uVar3);
        pcVar4 = pcVar2;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61574(lVar6);
        func_0x000107c61170(pcVar2);
      }
      uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
      *(code **)(unaff_x20 + lVar5) = pcVar4;
      func_0x000107c61170(uVar3);
      FUN_10283b4dc(param_2,param_3);
    }
  }
  return;
}



/* Entry: 102839ea8; end: 102839f1f; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102839ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102839408(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102839f20; end: 102839f37; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102839f34) */

void FUN_102839f20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102839f38; end: 102839f3f; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin pluginType] */

undefined8 FUN_102839f38(void)

{
  return 1;
}



/* Entry: 102839f40; end: 10283a3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102839f40(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puVar4 = &UNK_110555d38;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_110555d38,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = puVar4;
  func_0x000107c613fc(&UNK_110555d38,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_110555d38,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  func_0x000107c613fc(&UNK_110555d38,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = PTR_PTR_1126ab280;
  func_0x000107c610f8(PTR_PTR_1126ab280);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x10283be08;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_10283bce4;
  puStack_90 = &UNK_110555eb8;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar1;
  func_0x000107c60bc4(ppuVar6);
  uStack_b8 = 0x10283be10;
  puStack_d8 = puVar10;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_100f70bd8;
  puStack_c0 = &UNK_110555ee0;
  ppuVar7 = &puStack_d8;
  puStack_b0 = puVar2;
  func_0x000107c60bc4(ppuVar7);
  uStack_e8 = 0x10283be18;
  puStack_108 = puVar10;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_1000f6b44;
  puStack_f0 = &UNK_110555f08;
  ppuVar8 = &puStack_108;
  puStack_e0 = puVar3;
  func_0x000107c60bc4(ppuVar8);
  uStack_118 = 0x10283be20;
  puStack_138 = puVar10;
  uStack_130 = 0x42000000;
  pcStack_128 = FUN_10283bd34;
  puStack_120 = &UNK_110555f30;
  ppuVar9 = &puStack_138;
  puStack_110 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c46244(puVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_110);
  func_0x000107c61574(puStack_e0);
  func_0x000107c61574(puStack_b0);
  puVar10 = puStack_80;
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar10);
  FUN_1028391fc();
  func_0x000107c525fc(puVar5);
  func_0x000107c61170(puVar10);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 == 4) {
    plVar12 = (long *)&DAT_112ec3f78;
  }
  else {
    if (param_1 != 5) {
      uVar11 = 0;
      goto LAB_10283a1ec;
    }
    plVar12 = (long *)&DAT_112ec3f70;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + *plVar12);
  func_0x000107c61174(uVar11);
LAB_10283a1ec:
  func_0x000107c59c00(puVar5);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(unaff_x20 + _DAT_112ec3fa8);
  lVar15 = lVar13;
  func_0x000107c3cfe0();
  func_0x000107c61180();
  lVar14 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  if (lVar14 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = lVar14;
    func_0x000107c4c1dc(lVar14);
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
  }
  func_0x000107c52188(puVar5);
  func_0x000107c615e8(lVar15);
  lVar15 = lVar13;
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar14 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  if (lVar14 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = lVar14;
    func_0x000107c4c1dc(lVar14);
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
  }
  func_0x000107c52604(puVar5);
  func_0x000107c615e8(lVar15);
  func_0x000107c4d814();
  func_0x000107c61180();
  lVar15 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  if (lVar15 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = lVar15;
    func_0x000107c4c1dc(lVar15);
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
  }
  func_0x000107c56b20(puVar5);
  func_0x000107c615e8(lVar14);
  func_0x00010283aab0();
  func_0x000107c53e94(puVar5);
  func_0x000107c615e8(lVar14);
  puVar10 = &UNK_110555d38;
  func_0x000107c613fc(&UNK_110555d38,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  uStack_88 = 0x10283be28;
  puStack_a8 = puVar4;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100ec2630;
  puStack_90 = &UNK_110555f58;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_80);
  func_0x000107c56c30(puVar5);
  func_0x000107c60bd0(ppuVar6);
  return puVar5;
}



/* Entry: 10283a3fc; end: 10283a477;  */

long FUN_10283a3fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    FUN_10283a478(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return lVar1;
}



/* Entry: 10283a478; end: 10283a61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10283a478(undefined *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112ea31b8,&UNK_10dab5680);
  uStack_b0 = 0;
  uStack_b8 = 0x4028000000000000;
  uStack_a0 = 0x4049000000000000;
  ppuStack_a8 = (undefined **)0x4051800000000000;
  uStack_90 = 0x4049000000000000;
  uStack_98 = 0x4034000000000000;
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  ppuVar1 = &puStack_c8;
  puStack_c8 = param_1;
  uStack_c0 = param_2;
  func_0x000100854cb0();
  func_0x0001000285a8(0x112ea3738,&UNK_10dab5ea0);
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar2 = &puStack_c8;
  func_0x000100854cb0();
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_c8 = (undefined *)0x0;
  uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
  uStack_98 = 0x4049000000000000;
  uStack_a0 = 0x4051800000000000;
  uStack_88 = 0x4049000000000000;
  uStack_90 = 0x4034000000000000;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ec3fb8) + _DAT_112ed0cb8);
  uStack_128 = 0x4051800000000000;
  uStack_118 = 0x4034000000000000;
  uStack_120 = 0x4049000000000000;
  uStack_110 = 0x4049000000000000;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = uStack_b0;
  uStack_140 = 0;
  ppuStack_130 = ppuVar1;
  ppuStack_108 = ppuVar2;
  ppuStack_a8 = ppuVar1;
  ppuStack_80 = ppuVar2;
  func_0x000107c6157c(uVar3);
  func_0x00010008a7c8(&uStack_d0,&uStack_150);
  func_0x000107c61574(uVar3);
  func_0x000100083b20(&uStack_150);
  func_0x000107c61574(uStack_d0);
  ppuVar1 = ppuStack_130;
  uVar3 = uStack_138;
  func_0x00010283bf74(&uStack_150,uStack_138);
  (*(code *)ppuVar1[2])(uVar3,ppuVar1);
  FUN_102514a34(&puStack_c8);
  func_0x00010283bf98(&uStack_150);
  return uVar3;
}



/* Entry: 10283a620; end: 10283a68b;  */

void FUN_10283a620(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_10283a68c(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10283a68c; end: 10283a7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283a68c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar7 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  puVar4 = PTR_PTR_1126b1c10;
  func_0x000107c610f8(PTR_PTR_1126b1c10);
  func_0x000107c495dc(uVar7);
  lVar6 = *(long *)(unaff_x20 + _DAT_112ec3fc8);
  lVar5 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c5fddc(param_1,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c5fddc(param_2,&uStack_80,puVar1,puVar2);
  uVar3 = uStack_78;
  uVar7 = uStack_80;
  func_0x000107c61174(puVar4);
  func_0x00010438ae00(param_1,param_2,uVar7,uVar3,1,puVar4);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c42c1c(lVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 10283a7fc; end: 10283a84f;  */

void FUN_10283a7fc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10283a850();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10283a850; end: 10283a9db;  */

/* WARNING: Possible PIC construction at 0x00010283a990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283a9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283a9bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283a994) */
/* WARNING: Removing unreachable block (ram,0x00010283a9b0) */
/* WARNING: Removing unreachable block (ram,0x00010283a99c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283a850(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112ec3f40))[1];
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec3f40);
    lVar2 = unaff_x20 + _DAT_112ec3f80;
    func_0x000107c61618();
    lVar1 = _DAT_112ec4008;
    if (lVar2 != 0) {
      if (*(long *)(unaff_x20 + _DAT_112ec4008) == 0) {
        lVar3 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined8 *)(lVar3 + 0x20) = uVar6;
        *(long *)(lVar3 + 0x28) = lVar5;
        func_0x00010034a38c(0);
        func_0x000107c610f8();
        lVar4 = unaff_x20;
        func_0x000107c61174();
        func_0x000107c615f0(lVar2);
        func_0x000107c61434(lVar5);
        func_0x000103a28f00(lVar2,lVar4,1,lVar3,0);
        lStack_60 = lVar2;
        func_0x00010008a7c8(&uStack_58,&lStack_60);
        func_0x000100083b20(&lStack_60);
        func_0x000107c61574(uStack_58);
        *(long *)(unaff_x20 + lVar1) = lStack_60;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 10283a9dc; end: 10283ab97;  */

void FUN_10283a9dc(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_110555f90;
    func_0x000107c613fc(&UNK_110555f90,0x1c,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined4 *)(puVar1 + 0x18) = param_1;
    func_0x000107c61174(param_2);
    uVar2 = 0x50;
    func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dae4230,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10283ab98; end: 10283aceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283ab98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  lVar2 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ec3f40);
    lVar1 = ((undefined8 *)(lVar2 + _DAT_112ec3f40))[1];
    func_0x000107c61434(lVar1);
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61618();
      if (param_4 != 0) {
        lVar4 = *(long *)(param_4 + _DAT_112ec4000);
        func_0x000107c61174();
        func_0x000107c61170(param_4);
        lVar2 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar2 != 0) {
          func_0x000107c5fadc(param_1,param_2);
          func_0x000107c5fadc(uVar3,lVar1);
          func_0x000107c6142c(lVar1);
          func_0x000107c4f650(lVar2);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(param_1);
          func_0x000107c61170(uVar3);
          return;
        }
      }
      func_0x000107c6142c(lVar1);
    }
  }
  return;
}



/* Entry: 10283acec; end: 10283ad4b; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin init] */

void FUN_10283acec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendPlaceAlertMessagePlugin.FriendPlaceAlertMessagePlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10283ad18);
  (*pcVar1)();
}



/* Entry: 10283ad4c; end: 10283af1b; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010283ae60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283aef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283ae64) */
/* WARNING: Removing unreachable block (ram,0x00010283aef4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283ad4c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec3f38 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec3f40 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3f48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3f50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3f58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3f60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3f68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3f70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3f78));
  func_0x000100d09cb0(param_1 + _DAT_112ec3f80);
  func_0x000100d09cb0(param_1 + _DAT_112ec3f88);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3f90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3f98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3fa0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3fa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec3fb0));
  return;
}



/* Entry: 10283af1c; end: 10283b027;  */

void FUN_10283af1c(void)

{
  func_0x000107c61168(&PTR_PTR_112865850);
  return;
}



/* Entry: 10283b028; end: 10283b03f;  */

void FUN_10283b028(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283b040,0,0);
  return;
}



/* Entry: 10283b040; end: 10283b15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283b040(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x88) + _DAT_112ec3fd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10283b15c;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    puVar3 = &UNK_110555fe0;
    func_0x000107c613fc(&UNK_110555fe0,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x10283bf5c;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1010ca3e8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110555ff8;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4318c(lVar1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010283b158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10283b15c; end: 10283b1d3;  */

void FUN_10283b15c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10283b19c,0,0);
  return;
}



/* Entry: 10283b1d4; end: 10283b34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283b1d4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec3fd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_110555d38;
    func_0x000107c613fc(&UNK_110555d38,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_10283bf54;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100288f10;
    puStack_48 = &UNK_110555fa8;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c503ac(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10283b350; end: 10283b4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10283b350(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec3fe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec3ff0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar3 = *(long *)(unaff_x20 + _DAT_112ec3fe8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar4 = *(long *)(unaff_x20 + _DAT_112ec3fd8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 == 0) {
          puVar7 = (undefined *)0x0;
          lVar6 = lVar1;
          lVar1 = lVar2;
          lVar2 = lVar3;
        }
        else {
          puVar7 = PTR_PTR_1126c7238;
          func_0x000107c61168(PTR_PTR_1126c7238);
          func_0x000107c5fadc(param_1,param_2);
          uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec3f38);
          func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_112ec3f38))[1]);
          func_0x000107c4b920(puVar7);
          func_0x000107c61170(param_1);
          func_0x000107c61170(uVar5);
          func_0x00010601db50(puVar7);
          func_0x000107c615e8(lVar1);
          lVar6 = lVar2;
          lVar1 = lVar3;
          lVar2 = lVar4;
        }
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c615e8(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c615e8(lVar1);
  }
  return puVar7;
}



/* Entry: 10283b4dc; end: 10283b627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283b4dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec3fe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ec88();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    puVar3 = &UNK_110555d38;
    func_0x000107c613fc(&UNK_110555d38,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110555d60;
    func_0x000107c613fc(&UNK_110555d60,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    pcStack_50 = FUN_10283bda8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101114e90;
    puStack_58 = &UNK_110555d78;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar3);
    lVar1 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10283b628; end: 10283b703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283b628(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec3fd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_110555d38;
    func_0x000107c613fc(&UNK_110555d38,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_10283be00;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1010ca3e8;
    puStack_48 = &UNK_110555e90;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4318c(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10283b704; end: 10283b843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283b704(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec3fd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e640();
    func_0x000107c61180();
    puVar3 = &UNK_110555d38;
    func_0x000107c613fc(&UNK_110555d38,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110555db0;
    func_0x000107c613fc(&UNK_110555db0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar1;
    uStack_50 = 0x10283bdd0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10103b94c;
    puStack_58 = &UNK_110555dc8;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(puVar3);
    lVar6 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10283b844; end: 10283b8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283b844(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + _DAT_112ec3f60);
    if (lVar1 != 0) {
      uStack_39 = param_1 != 1;
      func_0x000107c6157c(lVar1);
      func_0x0001007d6d78(&uStack_39);
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10283b8cc; end: 10283b96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283b8cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10283b350(param_3,param_4);
    lVar1 = *(long *)(param_2 + _DAT_112ec3f68);
    if (lVar1 != 0) {
      bStack_49 = ((byte)param_3 ^ 0xff) & 1;
      func_0x000107c6157c(lVar1);
      func_0x0001007d6d78(&bStack_49);
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10283b970; end: 10283baef;  */

void FUN_10283b970(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_110555e00;
    func_0x000107c613fc(&UNK_110555e00,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(long *)(puVar2 + 0x18) = param_2;
    puVar3 = &UNK_110555e28;
    func_0x000107c613fc(&UNK_110555e28,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10283bdd8;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_10283bde0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_10103b938;
    puStack_90 = &UNK_110555e40;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar3);
    pcStack_88 = FUN_10283bb58;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_10103b93c;
    puStack_90 = &UNK_110555e68;
    ppuVar5 = &puStack_a8;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c600(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10283baf0; end: 10283bb57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283baf0(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined1 uStack_21;
  
  func_0x000107c407bc();
  lVar1 = *(long *)(param_3 + _DAT_112ec3f60);
  if (lVar1 != 0) {
    uStack_21 = param_1 != 1 || param_2 != 3;
    func_0x000107c6157c(lVar1);
    func_0x0001007d6d78(&uStack_21);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10283bb58; end: 10283bb5b;  */

void FUN_10283bb58(void)

{
  return;
}



/* Entry: 10283bb5c; end: 10283bbbb; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin onShareLocationActionCompletedWith:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283bb5c(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  byte bStack_21;
  
  lVar1 = *(long *)(param_1 + _DAT_112ec3f68);
  if (lVar1 != 0) {
    bStack_21 = param_4 ^ 1;
    func_0x000107c61174();
    func_0x000107c6157c(lVar1);
    func_0x0001007d6d78(&bStack_21);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10283bbbc; end: 10283bc07; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283bbbc(long param_1)

{
  param_1 = param_1 + _DAT_112ec3f80;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10283bc08; end: 10283bc27; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin permissionsPromptSource] */

void FUN_10283bc08(void)

{
  func_0x000107c5fadc(0x54414843,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10283bc28; end: 10283bcab; -[_TtC29FriendPlaceAlertMessagePlugin29FriendPlaceAlertMessagePlugin didCloseDirectionsSheetWithAction:] */

/* WARNING: Possible PIC construction at 0x00010283bc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010283bc80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010283bc68) */
/* WARNING: Removing unreachable block (ram,0x00010283bc84) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283bc28(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10283bcac; end: 10283bce3;  */

void FUN_10283bcac(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 10283bce4; end: 10283bd33;  */

void FUN_10283bce4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10283bd34; end: 10283bd6f;  */

void FUN_10283bd34(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10283bd70; end: 10283bda7;  */

undefined8 FUN_10283bd70(int param_1)

{
  func_0x000107c3daec();
  if (param_1 - 1U < 6) {
    return *(undefined8 *)(&UNK_10dae4240 + (ulong)(param_1 - 1U) * 8);
  }
  return 0x100000000;
}



/* Entry: 10283bda8; end: 10283bddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283bda8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10283b350(uVar2,uVar3);
    lVar4 = *(long *)(lVar1 + _DAT_112ec3f68);
    if (lVar4 != 0) {
      bStack_49 = ((byte)uVar2 ^ 0xff) & 1;
      func_0x000107c6157c(lVar4);
      func_0x0001007d6d78(&bStack_49);
      func_0x000107c61574(lVar4);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10283bde0; end: 10283bdff;  */

void FUN_10283bde0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10283be00; end: 10283be2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10283be00(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + _DAT_112ec3f60);
    if (lVar1 != 0) {
      uStack_39 = param_1 != 1;
      func_0x000107c6157c(lVar1);
      func_0x0001007d6d78(&uStack_39);
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10283be30; end: 10283beaf;  */

void FUN_10283be30(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10283beb0; end: 10283bf17;  */

void FUN_10283beb0(void)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10283bf18;
  *(undefined4 *)(plVar3 + 7) = uVar1;
  plVar3[5] = lVar4;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  plVar3[6] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = 0x10283af8c;
  plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10283b040,0,0);
  return;
}


