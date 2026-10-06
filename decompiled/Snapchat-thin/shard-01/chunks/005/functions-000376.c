/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011d0884; end: 1011d08f3;  */

void FUN_1011d0884(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011d0b0c;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1011d08f4; end: 1011d0a07;  */

void FUN_1011d08f4(byte param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    puVar2 = &UNK_110390b08;
    func_0x000107c613fc(&UNK_110390b08,0x28,7);
    *(long *)(puVar2 + 0x10) = lVar5;
    puVar2[0x18] = param_1 & 1;
    puVar2[0x19] = uVar1;
    *(undefined8 *)(puVar2 + 0x20) = uVar4;
    puVar3 = &UNK_110390b30;
    func_0x000107c613fc(&UNK_110390b30,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10d92a6c0;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(lVar5);
    func_0x000107c61174(uVar4);
    func_0x0001001ca524(0xe,0,0x28,3,0,0,&UNK_10d92a6c8,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1011d0a08; end: 1011d0a73;  */

void FUN_1011d0a08(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x19);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011d0b10;
  *(undefined1 *)((long)plVar3 + 0x29) = uVar2;
  *(undefined1 *)(plVar3 + 5) = uVar1;
  plVar3[2] = lVar4;
  plVar3[3] = lVar5;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar5;
  func_0x000107c5fce8();
  plVar3[4] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar5,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011cfd4c,lVar5,lVar4);
  return;
}



/* Entry: 1011d0a74; end: 1011d0ae3;  */

void FUN_1011d0a74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1011d0b14;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1011d0ae4; end: 1011d0b17;  */

void FUN_1011d0ae4(long param_1,long param_2)

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



/* Entry: 1011d0b18; end: 1011d0cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011d0b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar2 = auStack_70;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d659c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d659c8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112d659d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d659d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d659e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d659e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d659f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d659f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d65a00) = param_4;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(auStack_70,puVar3);
  puVar3 = &UNK_110390bd8;
  func_0x000107c613fc(&UNK_110390bd8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar2);
  puVar4 = &UNK_110390c00;
  func_0x000107c613fc(&UNK_110390c00,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  func_0x0001000285a8(0x112d65a08,&UNK_10d92a6d0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_1);
  func_0x000107c61174();
  pcVar5 = FUN_1011d0d9c;
  func_0x0001000bdd8c(FUN_1011d0d9c,puVar4);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112d659e0);
  *(code **)(puVar2 + _DAT_112d659e0) = pcVar5;
  func_0x000107c61170(puVar2);
  func_0x000107c61574(uVar6);
  return puVar2;
}



/* Entry: 1011d0cf0; end: 1011d0d9b;  */

void FUN_1011d0cf0(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_3 != 0) {
      puVar1 = PTR_PTR_1126a6558;
      func_0x000107c610f8();
      func_0x000107c615f0(param_3);
      func_0x000107c45404();
      func_0x000107c615e8(param_3);
      func_0x000107c61170(param_2);
      goto LAB_1011d0d84;
    }
    func_0x000107c61170();
  }
  puVar1 = (undefined *)0x0;
LAB_1011d0d84:
  *param_1 = puVar1;
  return;
}



/* Entry: 1011d0d9c; end: 1011d0da3;  */

void FUN_1011d0d9c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126a6558;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar1);
      func_0x000107c45404();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      goto LAB_1011d0d84;
    }
    func_0x000107c61170();
  }
  puVar3 = (undefined *)0x0;
LAB_1011d0d84:
  *param_1 = puVar3;
  return;
}



/* Entry: 1011d0da4; end: 1011d0dcf;  */

void FUN_1011d0da4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011d0dd0; end: 1011d1053;  */

undefined *
FUN_1011d0dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000107c61168();
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5c514();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000104f62660();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000104f62648();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c59e44();
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c5c868(puVar1);
  func_0x000107c61180();
  func_0x000107c5670c(0x3ff0000000000000);
  func_0x000107c61170(puVar3);
  func_0x000107c5405c(puVar1);
  func_0x000107c61170(puVar4);
  puVar3 = puVar1;
  func_0x000107c41874();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5670c(0x3ff0000000000000,puVar3);
    func_0x000107c61170(puVar3);
  }
  puVar3 = &UNK_110390bd8;
  func_0x000107c613fc(&UNK_110390bd8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110390cc8;
  func_0x000107c613fc(&UNK_110390cc8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar1);
  puVar5 = &UNK_110390cf0;
  func_0x000107c613fc(&UNK_110390cf0,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = param_3;
  *(undefined8 *)(puVar5 + 0x28) = param_4;
  pcStack_60 = FUN_1011d2050;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101054b14;
  puStack_68 = &UNK_110390d08;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000100b64c10(param_3,param_4);
  func_0x000107c61574(puVar3);
  puVar3 = puVar1;
  func_0x000107c3eae8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(puVar3);
  func_0x000107c52520();
  func_0x000107c54514(puVar3);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c520f4(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 1011d1054; end: 1011d10e3;  */

void FUN_1011d1054(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c61434(uVar2);
      FUN_1011d10e4(uVar1,uVar2);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar2);
    }
  }
  return;
}



/* Entry: 1011d10e4; end: 1011d130f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d10e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar9 = &puStack_80;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d659c0);
  uVar4 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar4);
  func_0x000107c61434(param_2);
  func_0x0001000d224c(&puStack_80);
  puVar2 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c42fb0();
    puVar5 = puStack_80;
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011d1310);
      (*pcVar3)();
    }
    pcStack_60 = FUN_1011d1678;
    puStack_58 = (undefined *)0x0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1011d16c0;
    puStack_68 = &UNK_110390c68;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    puVar7 = puVar5;
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar5);
    puVar5 = puVar7;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    pcVar8 = "fetchConversationWithConversationId(conversationId:)";
    func_0x0001000c10c0("fetchConversationWithConversationId(conversationId:)");
    func_0x000107c61180();
    puVar7 = puVar5;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(pcVar8);
    puVar5 = &UNK_110390bd8;
    func_0x000107c613fc(&UNK_110390bd8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_60 = (code *)0x1011d2008;
    puStack_80 = puVar10;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)&UNK_1008561f0;
    puStack_68 = &UNK_110390c90;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    puVar10 = puVar7;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar7);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d659d0);
    *(undefined **)(unaff_x20 + _DAT_112d659d0) = puVar10;
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1011d1310; end: 1011d1367;  */

void FUN_1011d1310(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5fc54(param_2,PTR___sSSN_11034da80);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1011d1368; end: 1011d1677; -[_TtC39SnapPostOpenViewingActionImplementation39SnapPostOpenViewingActionImplementation getActionCellWithChatIdentifier:accessibilityId:onLogRetentionPolicyAction:] */

void FUN_1011d1368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_110390c28;
    func_0x000107c613fc(&UNK_110390c28,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_1011d1fd8;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011d1d78(param_3,param_4,param_2,pcVar3,puVar2);
  func_0x000107c61174();
  func_0x00010058d43c(pcVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011d1678; end: 1011d16bf;  */

void FUN_1011d1678(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c4065c();
  func_0x000107c61180();
  uVar1 = 0x112d65a38;
  func_0x0001000285a8(0x112d65a38,&UNK_10d92a710);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 1011d16c0; end: 1011d1743;  */

void FUN_1011d16c0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1011d1744; end: 1011d1957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d1744(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c615f0(param_1);
    puVar2 = PTR_PTR_1126da928;
    func_0x000107c61168(PTR_PTR_1126da928);
    lVar3 = param_1;
    func_0x000107c6148c(param_1,puVar2);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5b36c();
      lVar1 = _DAT_112d659c8;
      if (((*(byte *)(param_2 + _DAT_112d659c8) != 2) &&
          ((*(byte *)(param_2 + _DAT_112d659c8) & 1) == 0)) && (lVar4 == 1)) {
        func_0x0001011d181c();
      }
      *(bool *)(param_2 + lVar1) = lVar4 == 1;
      func_0x000107c4cdd8(lVar3);
      FUN_1011d1958();
    }
    func_0x000107c61170(param_2);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1011d1958; end: 1011d19a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d1958(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d659d8);
  if (param_1 == 0) {
    if (lVar1 != 0) {
      func_0x000107c54514(lVar1,param_2,0);
    }
    *(undefined1 *)(unaff_x20 + _DAT_112d659c8) = 0;
  }
  else if (lVar1 != 0) {
    func_0x000107c54514(lVar1,param_2,1);
  }
  if (*(byte *)(unaff_x20 + _DAT_112d659c8) != 2) {
    if (((*(byte *)(unaff_x20 + _DAT_112d659c8) & 1) == 0) &&
       (*(long *)(unaff_x20 + _DAT_112d659d8) != 0)) {
      func_0x000107c49cd8();
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c61174();
    puVar3 = puVar2;
    func_0x000104f62660();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      puVar6 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
    }
    lVar1 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    uVar4 = 0;
    FUN_1011d2010(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined8 *)(lVar1 + 0x40) = uVar4;
    *(undefined **)(lVar1 + 0x28) = puVar2;
    func_0x000107c61174(uVar7);
    lVar5 = lVar1;
    func_0x000100ecbca8(lVar1);
    func_0x000107c61588(lVar1);
    FUN_100ef0820((undefined8 *)(lVar1 + 0x20));
    if (param_2 == 0) {
      func_0x000107c6142c(lVar5);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x000107c5fadc(puVar6,param_2);
      func_0x000107c6142c(param_2);
      uVar7 = 0;
      FUN_100eca28c(0);
      uVar4 = 0x112d483a0;
      FUN_1011d205c(0x112d483a0,&UNK_10d90f180);
      lVar1 = lVar5;
      func_0x000107c5f9dc(lVar5,uVar7,PTR___sypN_11034f1a8 + 8,uVar4);
      func_0x000107c6142c(lVar5);
      func_0x000107c48af8(puVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar1);
      lVar1 = *(long *)(unaff_x20 + _DAT_112d659d8);
      if (lVar1 != 0) {
        func_0x000107c61174();
        func_0x000107c529c8();
        func_0x000107c61170(lVar1);
      }
      func_0x000107c61170(puVar3);
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112d659d8);
    if (lVar1 != 0) {
      func_0x000107c61174();
      func_0x000107c58dd8();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1011d19a8; end: 1011d1bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d19a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (*(byte *)(unaff_x20 + _DAT_112d659c8) != 2) {
    if (((*(byte *)(unaff_x20 + _DAT_112d659c8) & 1) == 0) &&
       (*(long *)(unaff_x20 + _DAT_112d659d8) != 0)) {
      func_0x000107c49cd8();
    }
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c61174();
    puVar2 = puVar1;
    func_0x000104f62660();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      puVar6 = puVar2;
      func_0x000107c5faec();
      func_0x000107c61170(puVar2);
    }
    lVar5 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    *(undefined8 *)(lVar5 + 0x20) = uVar7;
    uVar3 = 0;
    FUN_1011d2010(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
    *(undefined8 *)(lVar5 + 0x40) = uVar3;
    *(undefined **)(lVar5 + 0x28) = puVar1;
    func_0x000107c61174(uVar7);
    lVar4 = lVar5;
    func_0x000100ecbca8(lVar5);
    func_0x000107c61588(lVar5);
    FUN_100ef0820((undefined8 *)(lVar5 + 0x20));
    if (param_2 == 0) {
      func_0x000107c6142c(lVar4);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x000107c5fadc(puVar6,param_2);
      func_0x000107c6142c(param_2);
      uVar7 = 0;
      FUN_100eca28c(0);
      uVar3 = 0x112d483a0;
      FUN_1011d205c(0x112d483a0,&UNK_10d90f180);
      lVar5 = lVar4;
      func_0x000107c5f9dc(lVar4,uVar7,PTR___sypN_11034f1a8 + 8,uVar3);
      func_0x000107c6142c(lVar4);
      func_0x000107c48af8(puVar2);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar5);
      lVar5 = *(long *)(unaff_x20 + _DAT_112d659d8);
      if (lVar5 != 0) {
        func_0x000107c61174();
        func_0x000107c529c8();
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61170(puVar2);
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112d659d8);
    if (lVar5 != 0) {
      func_0x000107c61174();
      func_0x000107c58dd8();
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1011d1c00; end: 1011d1c5f; -[_TtC39SnapPostOpenViewingActionImplementation39SnapPostOpenViewingActionImplementation init] */

void FUN_1011d1c00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapPostOpenViewingActionImplementation.SnapPostOpenViewingActionImplementation"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d1c2c);
  (*pcVar1)();
}



/* Entry: 1011d1c60; end: 1011d1cfb; -[_TtC39SnapPostOpenViewingActionImplementation39SnapPostOpenViewingActionImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011d1c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d1cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011d1c90) */
/* WARNING: Removing unreachable block (ram,0x0001011d1cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d1c60(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d659e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d659f0));
  return;
}



/* Entry: 1011d1cfc; end: 1011d1d17; -[_TtC39SnapPostOpenViewingActionImplementation39SnapPostOpenViewingActionImplementation didStartChangePostOpenViewingPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d1cfc(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d659d8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d659d8),PTR_s_setEnabled__112642f38,0);
    return;
  }
  return;
}



/* Entry: 1011d1d18; end: 1011d1d1b; -[_TtC39SnapPostOpenViewingActionImplementation39SnapPostOpenViewingActionImplementation didChangePostOpenViewingPolicyWithSuccess:allowSnapPostOpenViewing:] */

void FUN_1011d1d18(void)

{
  return;
}



/* Entry: 1011d1d1c; end: 1011d1d77;  */

void FUN_1011d1d1c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000104522c9c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d65a40;
  plVar5 = (long *)&UNK_10d92b760;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1011d1d78; end: 1011d1fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1011d1d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1011d0dd0(param_2,param_3,param_4,param_5);
  lVar1 = _DAT_112d659d8;
  lVar8 = *(long *)(unaff_x20 + _DAT_112d659d8);
  *(undefined8 *)(unaff_x20 + _DAT_112d659d8) = param_2;
  func_0x000107c61170();
  FUN_1011d1d1c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = param_1;
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    func_0x000107c61574(lVar8);
  }
  else {
    uVar3 = 0;
    func_0x000104522c9c(0);
    lVar4 = lVar8;
    func_0x000107c5fc48(lVar8,uVar3);
    func_0x000107c61574(lVar8);
    FUN_1011d2010(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar10 + 0x68))
              (puVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar2);
    puVar5 = puVar9;
    func_0x000107c5fff0(puVar9);
    (**(code **)(lVar10 + 8))(puVar9,lVar2);
    puVar6 = &UNK_110390bd8;
    func_0x000107c613fc(&UNK_110390bd8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uStack_78 = 0x1011d1fe4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1011d1310;
    puStack_80 = &UNK_110390c40;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_70);
    func_0x000107c40698(lStack_68);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar5);
  }
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1011d1fb8; end: 1011d1fd7;  */

void FUN_1011d1fb8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7a00);
  return;
}



/* Entry: 1011d1fd8; end: 1011d200f;  */

void FUN_1011d1fd8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001011d1fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1011d2010; end: 1011d204f;  */

void FUN_1011d2010(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011d2050; end: 1011d205b;  */

void FUN_1011d2050(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_70,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar1;
      if (param_1 != 0) {
        func_0x000107c61174(param_1);
        func_0x0001011d1518();
        func_0x000107c61170(lVar1);
        lVar3 = lVar2;
        lVar2 = param_1;
      }
      lVar1 = lVar2;
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011d205c; end: 1011d209b;  */

void FUN_1011d205c(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100eca28c(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1011d209c; end: 1011d20b3;  */

void FUN_1011d209c(long param_1,long param_2)

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



/* Entry: 1011d20b4; end: 1011d20f7;  */

void FUN_1011d20b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1011d20f8; end: 1011d2407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d20f8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x10);
    func_0x000107c406a0();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2400);
      (*pcVar2)();
    }
    lVar4 = lVar3;
    func_0x000107c3cfbc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    lVar3 = *(long *)(param_2 + 0x10);
    func_0x000107c406f8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2404);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d65b38,&UNK_10d92a770);
    lVar5 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
    lVar3 = *(long *)(param_2 + 0x18);
    func_0x000107c40688();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2408);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
    lVar6 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
    func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c4d80c();
    func_0x000107c61180();
    uVar12 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    lVar8 = 0;
    FUN_1011d1fb8();
    lVar3 = lVar8;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d659c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar3 + _DAT_112d659c8) = 2;
    *(undefined8 *)(lVar3 + _DAT_112d659d0) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d659d8) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d659e0) = 0;
    *(long *)(lVar3 + _DAT_112d659e8) = lVar4;
    *(long *)(lVar3 + _DAT_112d659f0) = lVar5;
    *(long *)(lVar3 + _DAT_112d659f8) = lVar6;
    *(undefined8 *)(lVar3 + _DAT_112d65a00) = uVar12;
    puVar9 = PTR_s_init_1125d9248;
    lStack_88 = lVar3;
    lStack_80 = lVar8;
    func_0x000107c615f0(lVar4);
    func_0x000107c6157c(lVar5);
    func_0x000107c6157c(lVar6);
    func_0x000107c6157c(uVar12);
    plVar13 = &lStack_88;
    func_0x000107c61154(plVar13,puVar9);
    puVar9 = &UNK_110390d68;
    func_0x000107c613fc(&UNK_110390d68,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,plVar13);
    puVar10 = &UNK_110390d90;
    func_0x000107c613fc(&UNK_110390d90,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(long *)(puVar10 + 0x18) = lVar4;
    func_0x0001000285a8(0x112d65a08,&UNK_10d92a6d0);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar4);
    plVar11 = plVar13;
    func_0x000107c61174();
    pcVar2 = FUN_1011d25a8;
    func_0x0001000bdd8c(FUN_1011d25a8,puVar10);
    func_0x000107c615e8(lVar4);
    func_0x000107c61574(lVar5);
    func_0x000107c61574(lVar6);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(param_2);
    uVar12 = *(undefined8 *)((long)plVar11 + _DAT_112d659e0);
    *(code **)((long)plVar11 + _DAT_112d659e0) = pcVar2;
    func_0x000107c61170(plVar11);
    func_0x000107c61574(uVar12);
  }
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 1011d2408; end: 1011d240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d2408(long *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x10);
    func_0x000107c406a0();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2400);
      (*pcVar2)();
    }
    lVar5 = lVar4;
    func_0x000107c3cfbc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = *(long *)(lVar3 + 0x10);
    func_0x000107c406f8();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2404);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d65b38,&UNK_10d92a770);
    lVar6 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    lVar4 = *(long *)(lVar3 + 0x18);
    func_0x000107c40688();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2408);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
    lVar7 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
    uVar8 = *(undefined8 *)(lVar3 + 0x20);
    func_0x000107c4d80c();
    func_0x000107c61180();
    uVar13 = uVar8;
    func_0x0001000bda74();
    func_0x000107c61170(uVar8);
    lVar9 = 0;
    FUN_1011d1fb8();
    lVar4 = lVar9;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d659c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar4 + _DAT_112d659c8) = 2;
    *(undefined8 *)(lVar4 + _DAT_112d659d0) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d659d8) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d659e0) = 0;
    *(long *)(lVar4 + _DAT_112d659e8) = lVar5;
    *(long *)(lVar4 + _DAT_112d659f0) = lVar6;
    *(long *)(lVar4 + _DAT_112d659f8) = lVar7;
    *(undefined8 *)(lVar4 + _DAT_112d65a00) = uVar13;
    puVar10 = PTR_s_init_1125d9248;
    lStack_88 = lVar4;
    lStack_80 = lVar9;
    func_0x000107c615f0(lVar5);
    func_0x000107c6157c(lVar6);
    func_0x000107c6157c(lVar7);
    func_0x000107c6157c(uVar13);
    plVar14 = &lStack_88;
    func_0x000107c61154(plVar14,puVar10);
    puVar10 = &UNK_110390d68;
    func_0x000107c613fc(&UNK_110390d68,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,plVar14);
    puVar11 = &UNK_110390d90;
    func_0x000107c613fc(&UNK_110390d90,0x20,7);
    *(undefined **)(puVar11 + 0x10) = puVar10;
    *(long *)(puVar11 + 0x18) = lVar5;
    func_0x0001000285a8(0x112d65a08,&UNK_10d92a6d0);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar5);
    plVar12 = plVar14;
    func_0x000107c61174();
    pcVar2 = FUN_1011d25a8;
    func_0x0001000bdd8c(FUN_1011d25a8,puVar11);
    func_0x000107c615e8(lVar5);
    func_0x000107c61574(lVar6);
    func_0x000107c61574(lVar7);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar3);
    uVar13 = *(undefined8 *)((long)plVar12 + _DAT_112d659e0);
    *(code **)((long)plVar12 + _DAT_112d659e0) = pcVar2;
    func_0x000107c61170(plVar12);
    func_0x000107c61574(uVar13);
  }
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1011d2410; end: 1011d2433;  */

/* WARNING: Possible PIC construction at 0x0001011d241c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011d2420) */

void FUN_1011d2410(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1011d2434; end: 1011d2487;  */

void FUN_1011d2434(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011d2488; end: 1011d2507;  */

void FUN_1011d2488(undefined8 param_1)

{
  if (lRam0000000112d65a78 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6275ec);
  return;
}



/* Entry: 1011d2508; end: 1011d25a7;  */

void FUN_1011d2508(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110390d40;
  func_0x000107c613fc(&UNK_110390d40,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112d65a48,&UNK_10d92a720);
  func_0x000107c613fc();
  uVar2 = 0x1011d25b0;
  func_0x0001000bdd8c(0x1011d25b0,puVar1);
  uVar3 = 0;
  FUN_1011d2e7c(0);
  func_0x000107c610f8();
  func_0x0001011d2d9c(uVar2,uVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 1011d25a8; end: 1011d25b3;  */

void FUN_1011d25a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126a6558;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar1);
      func_0x000107c45404();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      goto LAB_1011d0d84;
    }
    func_0x000107c61170();
  }
  puVar3 = (undefined *)0x0;
LAB_1011d0d84:
  *param_1 = puVar3;
  return;
}



/* Entry: 1011d25b4; end: 1011d25bf; -[SCSnapPostOpenViewingActionServiceProvider conversationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d25b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65b48;
  func_0x000107c61428(param_1 + _DAT_112d65b48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011d25c0; end: 1011d25cb; -[SCSnapPostOpenViewingActionServiceProvider setConversationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d25c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65b48;
  func_0x000107c61428(param_1 + _DAT_112d65b48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011d25cc; end: 1011d25d7; -[SCSnapPostOpenViewingActionServiceProvider conversationIdServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d25cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65b50;
  func_0x000107c61428(param_1 + _DAT_112d65b50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011d25d8; end: 1011d25e3; -[SCSnapPostOpenViewingActionServiceProvider setConversationIdServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d25d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65b50;
  func_0x000107c61428(param_1 + _DAT_112d65b50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011d25e4; end: 1011d25ef; -[SCSnapPostOpenViewingActionServiceProvider notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d25e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65b58;
  func_0x000107c61428(param_1 + _DAT_112d65b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011d25f0; end: 1011d2633;  */

void FUN_1011d25f0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011d2634; end: 1011d263f; -[SCSnapPostOpenViewingActionServiceProvider setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d2634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65b58;
  func_0x000107c61428(param_1 + _DAT_112d65b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011d2640; end: 1011d2693;  */

void FUN_1011d2640(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011d2694; end: 1011d282b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d2694(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = unaff_x20;
  func_0x000107c406cc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4068c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d840();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_1011d2488();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        *(long *)(lVar4 + 0x20) = lVar3;
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d65b60);
        *(long *)(unaff_x20 + _DAT_112d65b60) = lVar4;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar7);
        puVar5 = &UNK_110390dd0;
        func_0x000107c613fc(&UNK_110390dd0,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,lVar4);
        uVar7 = 0x112d65a48;
        func_0x0001000285a8(0x112d65a48,&UNK_10d92a720);
        func_0x000107c613fc();
        pcVar6 = FUN_1011d282c;
        func_0x0001000bdd8c(FUN_1011d282c,puVar5,uVar7);
        uVar7 = 0;
        FUN_1011d2e7c(0);
        func_0x000107c610f8();
        func_0x0001011d2d9c(pcVar6,uVar7);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011d282c; end: 1011d2833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d282c(long *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long unaff_x20;
  undefined8 uVar13;
  long *plVar14;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    plVar14 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x10);
    func_0x000107c406a0();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2400);
      (*pcVar2)();
    }
    lVar5 = lVar4;
    func_0x000107c3cfbc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = *(long *)(lVar3 + 0x10);
    func_0x000107c406f8();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2404);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d65b38,&UNK_10d92a770);
    lVar6 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    lVar4 = *(long *)(lVar3 + 0x18);
    func_0x000107c40688();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d2408);
      (*pcVar2)();
    }
    func_0x0001000285a8(0x112d65b40,&UNK_10d92ce30);
    lVar7 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
    uVar8 = *(undefined8 *)(lVar3 + 0x20);
    func_0x000107c4d80c();
    func_0x000107c61180();
    uVar13 = uVar8;
    func_0x0001000bda74();
    func_0x000107c61170(uVar8);
    lVar9 = 0;
    FUN_1011d1fb8();
    lVar4 = lVar9;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d659c0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar4 + _DAT_112d659c8) = 2;
    *(undefined8 *)(lVar4 + _DAT_112d659d0) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d659d8) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d659e0) = 0;
    *(long *)(lVar4 + _DAT_112d659e8) = lVar5;
    *(long *)(lVar4 + _DAT_112d659f0) = lVar6;
    *(long *)(lVar4 + _DAT_112d659f8) = lVar7;
    *(undefined8 *)(lVar4 + _DAT_112d65a00) = uVar13;
    puVar10 = PTR_s_init_1125d9248;
    lStack_88 = lVar4;
    lStack_80 = lVar9;
    func_0x000107c615f0(lVar5);
    func_0x000107c6157c(lVar6);
    func_0x000107c6157c(lVar7);
    func_0x000107c6157c(uVar13);
    plVar14 = &lStack_88;
    func_0x000107c61154(plVar14,puVar10);
    puVar10 = &UNK_110390d68;
    func_0x000107c613fc(&UNK_110390d68,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,plVar14);
    puVar11 = &UNK_110390d90;
    func_0x000107c613fc(&UNK_110390d90,0x20,7);
    *(undefined **)(puVar11 + 0x10) = puVar10;
    *(long *)(puVar11 + 0x18) = lVar5;
    func_0x0001000285a8(0x112d65a08,&UNK_10d92a6d0);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar5);
    plVar12 = plVar14;
    func_0x000107c61174();
    pcVar2 = FUN_1011d25a8;
    func_0x0001000bdd8c(FUN_1011d25a8,puVar11);
    func_0x000107c615e8(lVar5);
    func_0x000107c61574(lVar6);
    func_0x000107c61574(lVar7);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar3);
    uVar13 = *(undefined8 *)((long)plVar12 + _DAT_112d659e0);
    *(code **)((long)plVar12 + _DAT_112d659e0) = pcVar2;
    func_0x000107c61170(plVar12);
    func_0x000107c61574(uVar13);
  }
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1011d2834; end: 1011d28bf; -[SCSnapPostOpenViewingActionServiceProvider provide] */

void FUN_1011d2834(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1011d2694();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SnapPostOpenViewingActionImplementation/SCSnapPostOpenViewingActionServiceProvider.swift"
                      ,0x58,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d28c0);
  (*pcVar1)();
}



/* Entry: 1011d28c0; end: 1011d28f3; -[SCSnapPostOpenViewingActionServiceProvider __safeProvide] */

void FUN_1011d28c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011d2694();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011d28f4; end: 1011d2937; -[SCSnapPostOpenViewingActionServiceProvider end] */

void FUN_1011d28f4(undefined8 param_1)

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



/* Entry: 1011d2938; end: 1011d2b3b;  */

void FUN_1011d2938(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10d4910)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000014,0x800000010ef2b6f0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d3990)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef2c670,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53968();
      }
      else {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10eec60)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SnapPostOpenViewingActionImplementation/SCSnapPostOpenViewingActionServiceProvider.swift"
                                ,0x58,2,0x35,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d2b3c);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56b34();
      }
      goto LAB_1011d29cc;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5397c();
LAB_1011d29cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011d2b3c; end: 1011d2be7; -[SCSnapPostOpenViewingActionServiceProvider setValue:forIvarName:] */

void FUN_1011d2b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011d2938(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011d2be8; end: 1011d2c6f; -[SCSnapPostOpenViewingActionServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d2be8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d65b48,0);
  func_0x000107c61614(param_1 + _DAT_112d65b50,0);
  func_0x000107c61614(param_1 + _DAT_112d65b58,0);
  *(undefined8 *)(param_1 + _DAT_112d65b60) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011d2c70; end: 1011d2ca3;  */

void FUN_1011d2c70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011d2ca4; end: 1011d2cfb; -[SCSnapPostOpenViewingActionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d2ca4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d65b48);
  func_0x000107c61610(param_1 + _DAT_112d65b50);
  func_0x000107c61610(param_1 + _DAT_112d65b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d65b60));
  return;
}



/* Entry: 1011d2cfc; end: 1011d2d1b;  */

void FUN_1011d2cfc(void)

{
  func_0x000107c61168(&PTR_PTR_112d65ba8);
  return;
}



/* Entry: 1011d2d1c; end: 1011d2d2b; -[SnapPostOpenViewingActionServices snapPostOpenActionCellProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d2d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d65c18));
  return;
}



/* Entry: 1011d2d2c; end: 1011d2e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1011d2d2c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000bf56c();
  *(long *)(unaff_x20 + _DAT_112d65c18) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1011d2e0c; end: 1011d2e6b; -[SnapPostOpenViewingActionServices init] */

void FUN_1011d2e0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapPostOpenViewingActionServices.SnapPostOpenViewingActionServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d2e38);
  (*pcVar1)();
}



/* Entry: 1011d2e6c; end: 1011d2e7b; -[SnapPostOpenViewingActionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d2e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65c18));
  return;
}



/* Entry: 1011d2e7c; end: 1011d2e9b;  */

void FUN_1011d2e7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7b48);
  return;
}



/* Entry: 1011d2e9c; end: 1011d3497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011d2e9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long alStack_120 [7];
  undefined1 auStack_e8 [8];
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 auStack_78 [3];
  
  lVar2 = 0x112d3ae80;
  uStack_c0 = param_2;
  uStack_a8 = param_7;
  uStack_90 = param_3;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&lStack_e0 - extraout_x8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar13 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  uVar11 = *(undefined8 *)(param_4 + _DAT_1130109a8);
  lStack_c8 = unaff_x20;
  lStack_b8 = param_4;
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x0001000d224c(auStack_78);
  func_0x000107c61574(uVar11);
  uStack_98 = auStack_78[0];
  func_0x0001000285a8(0x112d65c48,&UNK_10d92a7e0);
  uVar11 = param_5;
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar8 = uVar11;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(uVar11);
  uVar11 = uVar8;
  func_0x0001000bda74();
  uStack_a0 = uVar11;
  func_0x000107c61170(uVar8);
  func_0x000103bda44c(0);
  lVar2 = 0;
  func_0x000107c5ede0();
  pcVar14 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar14)(lVar15,1,1,lVar2);
  (*pcVar14)(lVar13,1,1,lVar2);
  lVar2 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar10,1,1,lVar2);
  func_0x000107c61174();
  *(undefined1 *)(lVar7 + -8) = 0;
  *(undefined8 *)(lVar7 + -0x10) = 0;
  *(undefined8 *)(lVar7 + -0x18) = 0;
  *(undefined8 *)(lVar7 + -0x20) = 0;
  *(undefined8 *)(lVar7 + -0x28) = 0;
  *(undefined8 *)(lVar7 + -0x30) = 0;
  *(undefined8 *)(lVar7 + -0x38) = 0;
  *(long *)(lVar7 + -0x40) = lVar10;
  func_0x000104638e24(lVar7,4,lVar15,0,lVar13,0,0,0,0);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90(lVar7);
  lVar10 = _DAT_112e55288;
  uVar8 = *(undefined8 *)(param_1 + _DAT_112e55288);
  func_0x000107c615f0(uVar8);
  uStack_b0 = param_5;
  func_0x000107c4141c(param_5);
  func_0x000107c61180();
  uVar11 = param_5;
  func_0x000107c3ff98();
  func_0x000107c61180();
  func_0x000107c615e8(param_5);
  uStack_d0 = param_6;
  func_0x000103bda4f0(param_6,lVar7,uVar8,uVar11);
  uVar3 = uStack_90;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = _DAT_112e55290;
  lStack_d8 = lVar10;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x000107c61428(param_1 + _DAT_112e55290,auStack_78,0,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61618();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112e55298);
  lVar13 = 0;
  FUN_1011d4e7c();
  lVar7 = lVar13;
  func_0x000107c610f8();
  lVar10 = _DAT_112d65d58;
  func_0x000107c61614(lVar7 + _DAT_112d65d58,0);
  uVar1 = uStack_98;
  *(undefined8 *)(lVar7 + _DAT_112d65d60) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d65d68) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d65d70) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d65d78) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112d65d80) = uStack_98;
  *(undefined8 *)(lVar7 + _DAT_112d65d88) = uVar9;
  lStack_e0 = lVar2;
  func_0x000107c61604(lVar7 + lVar10,lVar2);
  uVar8 = uStack_a0;
  uVar11 = uStack_a8;
  *(undefined8 *)(lVar7 + _DAT_112d65d90) = uVar12;
  *(undefined8 *)(lVar7 + _DAT_112d65d98) = param_6;
  *(undefined8 *)(lVar7 + _DAT_112d65da0) = uStack_a0;
  *(undefined8 *)(lVar7 + _DAT_112d65da8) = uStack_a8;
  puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_88 = lVar7;
  lStack_80 = lVar13;
  func_0x000107c615f4(uVar1,2);
  func_0x000107c615f4(uVar9,2);
  func_0x000107c61174(param_6);
  func_0x000107c61580(uVar8,2);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(param_6);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar3);
  plVar4 = &lStack_88;
  func_0x000107c61154(plVar4,puVar6,0,0);
  func_0x000107c61180();
  plVar5 = plVar4;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (plVar5 != (long *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(plVar5);
    func_0x000107c61170(plVar5);
    func_0x000107c61170(puVar6);
    FUN_1011d4774();
    func_0x000107c4ef1c();
    func_0x000107c61170(plVar4);
    func_0x000107c61170(uVar3);
    uVar1 = uStack_98;
    func_0x000107c615e8(uStack_98);
    func_0x000107c615e8(uVar9);
    func_0x000107c615e8(lStack_e0);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(param_6);
    uVar8 = uStack_a0;
    func_0x000107c61574(uStack_a0);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c3e2c0(*(undefined8 *)(param_1 + lStack_d8));
    func_0x000107c61170(param_1);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(lStack_b8);
    func_0x000107c61170(uStack_b0);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(uVar11);
    func_0x000107c615e8(uVar1);
    func_0x000107c61574(uVar8);
    func_0x000107c61170(param_6);
    func_0x000107c61170(plVar4);
    return lStack_c8;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1011d3498);
  (*pcVar14)();
}



/* Entry: 1011d3498; end: 1011d34bb;  */

void FUN_1011d3498(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011d34bc; end: 1011d34bf;  */

void FUN_1011d34bc(void)

{
  return;
}



/* Entry: 1011d34c0; end: 1011d3513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011d34c0(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112e55288),param_2,0);
  return 0;
}



/* Entry: 1011d3514; end: 1011d362b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1011d3514(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d65d00);
  dVar3 = 0.0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5dbc0();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c517d0();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(unaff_x20);
        dVar3 = param_1 + 430.0;
      }
      else {
        func_0x000107c5e07c();
        func_0x000107c3ec60(unaff_x20);
        func_0x000107c609cc();
        dVar3 = 1.79769313486232e+308;
        func_0x000107c5b098(lVar1);
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c517d0();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(unaff_x20);
        dVar3 = dVar3 + param_1;
      }
      dVar3 = dVar3 + 8.0;
    }
  }
  return dVar3;
}



/* Entry: 1011d362c; end: 1011d36ab; -[_TtC32SponsoredSnapModalImplementation36SponsoredSnapModalTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d362c(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112d65d20,0);
  *(undefined8 *)(param_1 + _DAT_112d65d00) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SponsoredSnapModalImplementation/SponsoredSnapModalTrayViewController.swift",
                      0x4b,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d36ac);
  (*pcVar1)();
}



/* Entry: 1011d36ac; end: 1011d3d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d36ac(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d65cf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar5 != 0) {
      puVar7 = &UNK_110390f18;
      puVar6 = puVar7;
      lStack_e8 = lVar14;
      func_0x000107c613fc(&UNK_110390f18,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      func_0x000107c613fc(&UNK_110390f18,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar8 = PTR_PTR_1126a6560;
      func_0x000107c610f8(PTR_PTR_1126a6560);
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_90 = FUN_1011d3e58;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000f6b44;
      puStack_98 = &UNK_110390f30;
      ppuVar9 = &puStack_b0;
      puStack_88 = puVar6;
      func_0x000107c60bc4(ppuVar9);
      pcStack_c0 = FUN_1011d4084;
      puStack_e0 = puVar11;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_100288f10;
      puStack_c8 = &UNK_110390f58;
      ppuVar10 = &puStack_e0;
      puStack_b8 = puVar7;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar7);
      func_0x000107c47c08(puVar8);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puStack_b8);
      puVar11 = puStack_88;
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar11);
      puVar7 = puVar8;
      func_0x000107c5a6a4(puVar8);
      FUN_1011d408c();
      func_0x000107c53e8c(puVar8);
      func_0x000107c615e8(puVar7);
      puVar7 = PTR_PTR_1126a6568;
      func_0x000107c610f8();
      func_0x000107c49520();
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d65d00);
      *(undefined **)(unaff_x20 + _DAT_112d65d00) = puVar7;
      func_0x000107c61174();
      func_0x000107c61170(uVar13);
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c61174();
        func_0x000107c5a050();
        lVar4 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d1c);
          (*pcVar1)();
        }
        puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c3fa94();
        func_0x000107c61180();
        func_0x000107c52b50(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar11);
        lVar4 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d20);
          (*pcVar1)();
        }
        lStack_f0 = lVar5;
        func_0x000107c3d89c();
        func_0x000107c61170();
        func_0x0001008478a8();
        func_0x000107c613fc();
        dVar16 = 1.97626258336499e-323;
        *(undefined8 *)(lVar4 + 0x18) = 9;
        *(undefined8 *)(lVar4 + 0x10) = 4;
        lVar14 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d24);
          (*pcVar1)();
        }
        lVar5 = lVar14;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar14);
        puVar11 = puVar7;
        func_0x000107c5cbe4(puVar7);
        func_0x000107c61180();
        lVar14 = lVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar11);
        *(long *)(lVar4 + 0x20) = lVar14;
        lVar14 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d28);
          (*pcVar1)();
        }
        lVar5 = lVar14;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(lVar14);
        puVar11 = puVar7;
        func_0x000107c4acb0(puVar7);
        func_0x000107c61180();
        lVar14 = lVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar11);
        *(long *)(lVar4 + 0x28) = lVar14;
        lVar14 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d2c);
          (*pcVar1)();
        }
        puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar5 = lVar14;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(lVar14);
        puVar6 = puVar7;
        func_0x000107c5ce8c(puVar7);
        func_0x000107c61180();
        lVar14 = lVar5;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar6);
        *(long *)(lVar4 + 0x30) = lVar14;
        puVar6 = puVar7;
        func_0x000107c44d9c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        FUN_1011d3514();
        puVar12 = puVar6;
        func_0x000107c40290();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        *(undefined **)(lVar4 + 0x38) = puVar12;
        uVar13 = 0;
        func_0x000100847984(0);
        lVar14 = lVar4;
        func_0x000107c5fc48(lVar4,uVar13);
        func_0x000107c61574(lVar4);
        func_0x000107c3d048(puVar11);
        func_0x000107c61170(lVar14);
        iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112d65d08);
        func_0x000107c4faa4();
        lVar5 = lStack_f0;
        if (iVar2 != 0) {
          func_0x0001064ea5b4(*(undefined8 *)(unaff_x20 + _DAT_112d65d10),1);
          puVar11 = PTR_PTR_1126a6570;
          func_0x000107c610f8(PTR_PTR_1126a6570);
          func_0x000107c453e4();
          func_0x000107c5eea0(lVar15);
          func_0x000107c5ee8c();
          (**(code **)(lStack_e8 + 8))(lVar15,lVar3);
          lVar5 = lStack_f0;
          dVar16 = dVar16 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d10);
            (*pcVar1)();
          }
          if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d14);
            (*pcVar1)();
          }
          if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d3d18);
            (*pcVar1)();
          }
          func_0x000107c56768(puVar11);
          lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112d65d18) + _DAT_113083868);
          func_0x000107c5c734();
          func_0x000107c61180();
          puVar6 = puVar7;
          if (lVar3 != 0) {
            puVar6 = puVar11;
            func_0x000107c61174(puVar11);
            func_0x000107c4bfb0(lVar3);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(puVar7);
          }
          func_0x000107c61170(puVar6);
          puVar7 = puVar11;
        }
        func_0x000107c61170(puVar7);
      }
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar8);
    }
  }
  return;
}



/* Entry: 1011d3d2c; end: 1011d3e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d3d2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d65d20;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41b2c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d65d08);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c57050(uVar3);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112d65d10);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_1);
    func_0x0001064ea818(uVar3,1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1011d3e58; end: 1011d3e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d3e58(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d65d20;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41b2c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d65d08);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c57050(uVar3);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d65d10);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar1);
    func_0x0001064ea818(uVar3,1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1011d3e60; end: 1011d4083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d3e60(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112d65d08);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c57050(uVar5);
    func_0x000107c615e8(uVar5);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d65d20;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41b2c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    puVar4 = *(undefined **)(param_2 + _DAT_112d65d10);
    func_0x000107c61174(puVar4);
    func_0x000107c61170(param_2);
    func_0x0001064ea7a0(puVar4,1);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112d65d08);
      func_0x000107c615f0(uVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c442cc();
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_a0,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar5 = *(undefined8 *)(param_2 + _DAT_112d65d10);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(param_2);
    puVar4 = PTR___sSiN_11034deb0;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
    func_0x0001064ea62c(uVar5,puVar4,1);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1011d4084; end: 1011d408b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d4084(ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112d65d08);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c57050(uVar5);
    func_0x000107c615e8(uVar5);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d65d20;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41b2c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    puVar4 = *(undefined **)(lVar1 + _DAT_112d65d10);
    func_0x000107c61174(puVar4);
    func_0x000107c61170(lVar1);
    func_0x0001064ea7a0(puVar4,1);
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112d65d08);
      func_0x000107c615f0(uVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c442cc();
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_a0,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112d65d10);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lVar1);
    puVar4 = PTR___sSiN_11034deb0;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
    func_0x0001064ea62c(uVar5,puVar4,1);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1011d408c; end: 1011d4163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011d408c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c409cc();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c508d0();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c40974();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar3;
      func_0x000107c41408(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lStack_38);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
      return lVar2;
    }
    func_0x000107c615e8(lStack_38);
  }
  return 0;
}



/* Entry: 1011d4164; end: 1011d418b; -[_TtC32SponsoredSnapModalImplementation36SponsoredSnapModalTrayViewController viewDidLoad] */

void FUN_1011d4164(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011d36ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011d418c; end: 1011d41eb; -[_TtC32SponsoredSnapModalImplementation36SponsoredSnapModalTrayViewController initWithNibName:bundle:] */

void FUN_1011d418c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapModalImplementation.SponsoredSnapModalTrayViewController",0x45,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d41b8);
  (*pcVar1)();
}



/* Entry: 1011d41ec; end: 1011d4283; -[_TtC32SponsoredSnapModalImplementation36SponsoredSnapModalTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011d4218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011d421c) */
/* WARNING: Removing unreachable block (ram,0x0001011d424c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d41ec(long param_1)

{
  FUN_1011d42c0(param_1 + _DAT_112d65d20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65d00));
  return;
}



/* Entry: 1011d4284; end: 1011d429f;  */

void FUN_1011d4284(long param_1,long param_2)

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



/* Entry: 1011d42a0; end: 1011d42bf;  */

void FUN_1011d42a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7c08);
  return;
}



/* Entry: 1011d42c0; end: 1011d42e3;  */

undefined8 FUN_1011d42c0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011d42e4; end: 1011d42eb;  */

void FUN_1011d42e4(long param_1,long param_2)

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



/* Entry: 1011d42ec; end: 1011d4527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011d42ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d65d58;
  func_0x000107c61614(unaff_x20 + _DAT_112d65d58,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d65d60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d65d68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d65d70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d65d78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d65d80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d65d88) = param_3;
  func_0x000107c61604(unaff_x20 + lVar1,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112d65d90) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d65d98) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d65da0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d65da8) = param_8;
  puVar5 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,puVar5,0,0);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    FUN_1011d4774();
    func_0x000107c4ef1c();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_2);
    func_0x000107c615e8(param_3);
    func_0x000107c615e8(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c615e8(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(puVar5);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011d4528);
  (*pcVar2)();
}



/* Entry: 1011d4528; end: 1011d458b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011d4528(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d65d60;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d65d60);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1011d458c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1011d458c; end: 1011d4707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1011d458c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  lVar3 = param_1 + _DAT_112d65d58;
  func_0x000107c61618();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112d65d78);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112d65d80);
  lVar4 = lVar3;
  FUN_1011d4708();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112d65d98);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112d65da0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112d65da8);
  lVar5 = 0;
  FUN_1011d42a0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112d65d20;
  func_0x000107c61614(lVar6 + _DAT_112d65d20,0);
  *(undefined8 *)(lVar6 + _DAT_112d65d00) = 0;
  func_0x000107c61604(lVar6 + lVar2,lVar3);
  *(undefined8 *)(lVar6 + _DAT_112d65cf0) = uVar10;
  *(undefined8 *)(lVar6 + _DAT_112d65d08) = uVar9;
  *(long *)(lVar6 + _DAT_112d65d10) = lVar4;
  *(undefined8 *)(lVar6 + _DAT_112d65cf8) = uVar12;
  *(undefined8 *)(lVar6 + _DAT_112d65d28) = uVar11;
  *(undefined8 *)(lVar6 + _DAT_112d65d18) = uVar8;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c61174(uVar10);
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar12);
  func_0x000107c6157c(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61154(&lStack_70,puVar1,0,0);
  func_0x000107c615e8(lVar3);
  return (undefined1 *)plVar7;
}



/* Entry: 1011d4708; end: 1011d4773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011d4708(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d65d70;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d65d70);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ba0c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1011d4774; end: 1011d4873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011d4774(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d65d68;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d65d68);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_1011d4528();
    puVar3 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c61170(puVar2);
    func_0x000107c5a074(puVar3);
    func_0x000107c52684(puVar3,param_2,8);
    func_0x000107c5a070(puVar3,param_2,0);
    func_0x000107c5921c(puVar3,param_2,0);
    func_0x000107c539d4(0x4034000000000000,puVar3);
    func_0x000107c52e34(puVar3,param_2,1);
    func_0x000107c52aa4(puVar3,param_2,0);
    func_0x000107c57250(puVar3,param_2,1);
    func_0x000107c59300(puVar3,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1011d4874; end: 1011d490b; -[_TtC32SponsoredSnapModalImplementation32SponsoredSnapModalViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d4874(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112d65d58,0);
  *(undefined8 *)(param_1 + _DAT_112d65d60) = 0;
  *(undefined8 *)(param_1 + _DAT_112d65d68) = 0;
  *(undefined8 *)(param_1 + _DAT_112d65d70) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SponsoredSnapModalImplementation/SponsoredSnapModalViewController.swift",0x47
                      ,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d490c);
  (*pcVar1)();
}



/* Entry: 1011d490c; end: 1011d4c17;  */

/* WARNING: Possible PIC construction at 0x0001011d49b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011d4b94) */
/* WARNING: Removing unreachable block (ram,0x0001011d4b6c) */
/* WARNING: Removing unreachable block (ram,0x0001011d4b44) */
/* WARNING: Removing unreachable block (ram,0x0001011d4b24) */
/* WARNING: Removing unreachable block (ram,0x0001011d4ac0) */
/* WARNING: Removing unreachable block (ram,0x0001011d4c14) */
/* WARNING: Removing unreachable block (ram,0x0001011d4af4) */
/* WARNING: Removing unreachable block (ram,0x0001011d4aa0) */
/* WARNING: Removing unreachable block (ram,0x0001011d4a50) */
/* WARNING: Removing unreachable block (ram,0x0001011d4c10) */
/* WARNING: Removing unreachable block (ram,0x0001011d4a84) */
/* WARNING: Removing unreachable block (ram,0x0001011d4a30) */
/* WARNING: Removing unreachable block (ram,0x0001011d49bc) */
/* WARNING: Removing unreachable block (ram,0x0001011d4c0c) */
/* WARNING: Removing unreachable block (ram,0x0001011d4a14) */
/* WARNING: Removing unreachable block (ram,0x0001011d4bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d490c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d65d90);
  if (lVar3 == 0) {
    FUN_1011d4708();
    func_0x0001064ea890();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x000107c61174(lVar3);
    func_0x000107c453e4(puVar2);
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar2);
    func_0x000107c5a378(puVar2);
    func_0x000107c55258(puVar2);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d4c0c);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    param_1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011d4c18; end: 1011d4c73; -[_TtC32SponsoredSnapModalImplementation32SponsoredSnapModalViewController viewDidLoad] */

void FUN_1011d4c18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1011d490c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1011d4c74; end: 1011d4cef; -[_TtC32SponsoredSnapModalImplementation32SponsoredSnapModalViewController viewDidAppear:] */

void FUN_1011d4c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_1011d4774();
  func_0x000107c575ec();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1011d4cf0; end: 1011d4d4f; -[_TtC32SponsoredSnapModalImplementation32SponsoredSnapModalViewController initWithNibName:bundle:] */

void FUN_1011d4cf0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapModalImplementation.SponsoredSnapModalViewController",0x41,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011d4d1c);
  (*pcVar1)();
}



/* Entry: 1011d4d50; end: 1011d4e17; -[_TtC32SponsoredSnapModalImplementation32SponsoredSnapModalViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011d4d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011d4dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011d4de0) */
/* WARNING: Removing unreachable block (ram,0x0001011d4db0) */
/* WARNING: Removing unreachable block (ram,0x0001011d4d70) */
/* WARNING: Removing unreachable block (ram,0x0001011d4e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d4d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65d78));
  return;
}



/* Entry: 1011d4e18; end: 1011d4e1b; -[_TtC32SponsoredSnapModalImplementation32SponsoredSnapModalViewController tray:positionDidChange:] */

void FUN_1011d4e18(void)

{
  return;
}



/* Entry: 1011d4e1c; end: 1011d4e7b; -[_TtC32SponsoredSnapModalImplementation32SponsoredSnapModalViewController tray:heightForPosition:] */

undefined8
FUN_1011d4e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined8 uVar1;
  
  if ((param_5 & 0x1c) != 0) {
    func_0x000107c61174();
    uVar1 = param_2;
    FUN_1011d4528();
    FUN_1011d3514();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    return param_1;
  }
  return 0xbff0000000000000;
}



/* Entry: 1011d4e7c; end: 1011d4e9b;  */

void FUN_1011d4e7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b7d00);
  return;
}



/* Entry: 1011d4e9c; end: 1011d4ea7; -[SCSponsoredSnapModalEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d4e9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65dd8;
  func_0x000107c61428(param_1 + _DAT_112d65dd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011d4ea8; end: 1011d4eb3; -[SCSponsoredSnapModalEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d4ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65dd8;
  func_0x000107c61428(param_1 + _DAT_112d65dd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011d4eb4; end: 1011d4ebf; -[SCSponsoredSnapModalEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d4eb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65de0;
  func_0x000107c61428(param_1 + _DAT_112d65de0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011d4ec0; end: 1011d4ecb; -[SCSponsoredSnapModalEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011d4ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65de0;
  func_0x000107c61428(param_1 + _DAT_112d65de0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


