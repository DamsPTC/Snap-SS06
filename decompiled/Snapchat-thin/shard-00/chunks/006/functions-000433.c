/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008f1bc4; end: 1008f1bdb;  */

void FUN_1008f1bc4(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001008f1c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008f1bdc; end: 1008f1c2f;  */

void FUN_1008f1bdc(code *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001008f1c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1008f1c30; end: 1008f1c53;  */

undefined ** FUN_1008f1c30(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f1c54; end: 1008f1cd3;  */

void FUN_1008f1c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e3fd0;
  func_0x000107c613fc(&UNK_1104e3fd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f1cd4,puVar1);
  return;
}



/* Entry: 1008f1cd4; end: 1008f1cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f1cd4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&lStack_48,lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  func_0x0001008f205c();
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = lStack_48;
  *(undefined8 *)(lVar2 + 0x18) = uStack_50;
  lVar1 = _DAT_112e64b40;
  func_0x000107c61428(lStack_48 + _DAT_112e64b40,auStack_68,1,0);
  func_0x000107c61604(lStack_48 + lVar1,uStack_50);
  *param_1 = lVar2;
  param_1[1] = (long)&PTR_DAT_1104e3ff8;
  return;
}



/* Entry: 1008f1cdc; end: 1008f1d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f1cdc(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  FUN_100083b20(&uStack_50);
  func_0x0001008f205c();
  func_0x000107c613fc();
  *(long *)(param_2 + 0x10) = lStack_48;
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  lVar1 = _DAT_112e64b40;
  func_0x000107c61428(lStack_48 + _DAT_112e64b40,auStack_68,1,0);
  func_0x000107c61604(lStack_48 + lVar1,uStack_50);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1104e3ff8;
  return;
}



/* Entry: 1008f1d84; end: 1008f1db3;  */

void FUN_1008f1d84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100327010();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1008f1db4; end: 1008f1e07; -[_TtC26PageLauncherImplementation17PageLauncherProxy init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f1db4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e64b40,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008f1e08; end: 1008f1e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f1e08(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lStack_48;
  
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = lStack_48;
  uVar3 = 0x112e64d48;
  FUN_1000285a8(0x112e64d48,&UNK_10da6f930);
  func_0x000107c610f8();
  FUN_10025a71c(lVar1,uVar3);
  puVar2 = PTR_PTR_1126a7288;
  func_0x000107c610f8(PTR_PTR_1126a7288);
  func_0x000107c4907c();
  func_0x000107c61174();
  FUN_100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_113083868);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_48);
  puVar4 = PTR_PTR_1126aa250;
  func_0x000107c610f8();
  func_0x000107c47f78();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1008f1e10; end: 1008f1f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f1e10(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  lVar1 = lStack_48;
  uVar3 = 0x112e64d48;
  FUN_1000285a8(0x112e64d48,&UNK_10da6f930);
  func_0x000107c610f8();
  FUN_10025a71c(lVar1,uVar3);
  puVar2 = PTR_PTR_1126a7288;
  func_0x000107c610f8(PTR_PTR_1126a7288);
  func_0x000107c4907c();
  func_0x000107c61174();
  FUN_100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_113083868);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_48);
  puVar4 = PTR_PTR_1126aa250;
  func_0x000107c610f8();
  func_0x000107c47f78();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1008f1f10; end: 1008f1f17;  */

void FUN_1008f1f10(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1008f1f18; end: 1008f202f; -[SCPageLauncherImpl initWithPlugInScopeExposer:userTrackedLogger:] */

undefined1 *
FUN_1008f1f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ecac8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x40),param_4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008f2030; end: 1008f20a7;  */

void FUN_1008f2030(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f20a8; end: 1008f20cb;  */

undefined ** FUN_1008f20a8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f20cc; end: 1008f214b;  */

void FUN_1008f20cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e3f28;
  func_0x000107c613fc(&UNK_1104e3f28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f214c,puVar1);
  return;
}



/* Entry: 1008f214c; end: 1008f2153;  */

void FUN_1008f214c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  func_0x0001008f2964();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c57544();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_40);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1104e3f50;
  return;
}



/* Entry: 1008f2154; end: 1008f21eb;  */

void FUN_1008f2154(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  func_0x0001008f2964();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c57544();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_40);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1104e3f50;
  return;
}



/* Entry: 1008f21ec; end: 1008f21f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f21ec(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10038e8d4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feea00) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1008f21f4; end: 1008f225f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f21f4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10038e8d4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112feea00) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1008f2260; end: 1008f25f7;  */

/* WARNING: Possible PIC construction at 0x0001008f2488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f24a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f24b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f24c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f24d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f24e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f24f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f2598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f25a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f25b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008f25c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008f25bc) */
/* WARNING: Removing unreachable block (ram,0x0001008f25ac) */
/* WARNING: Removing unreachable block (ram,0x0001008f259c) */
/* WARNING: Removing unreachable block (ram,0x0001008f258c) */
/* WARNING: Removing unreachable block (ram,0x0001008f257c) */
/* WARNING: Removing unreachable block (ram,0x0001008f256c) */
/* WARNING: Removing unreachable block (ram,0x0001008f255c) */
/* WARNING: Removing unreachable block (ram,0x0001008f254c) */
/* WARNING: Removing unreachable block (ram,0x0001008f253c) */
/* WARNING: Removing unreachable block (ram,0x0001008f252c) */
/* WARNING: Removing unreachable block (ram,0x0001008f251c) */
/* WARNING: Removing unreachable block (ram,0x0001008f250c) */
/* WARNING: Removing unreachable block (ram,0x0001008f24fc) */
/* WARNING: Removing unreachable block (ram,0x0001008f24ec) */
/* WARNING: Removing unreachable block (ram,0x0001008f24dc) */
/* WARNING: Removing unreachable block (ram,0x0001008f24cc) */
/* WARNING: Removing unreachable block (ram,0x0001008f24bc) */
/* WARNING: Removing unreachable block (ram,0x0001008f24ac) */
/* WARNING: Removing unreachable block (ram,0x0001008f249c) */
/* WARNING: Removing unreachable block (ram,0x0001008f248c) */
/* WARNING: Removing unreachable block (ram,0x0001008f25cc) */

void FUN_1008f2260(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1104b0998;
  func_0x000107c613fc(&UNK_1104b0998,0x168,7);
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
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  uVar2 = 0x112e4a9d0;
  FUN_1000285a8(0x112e4a9d0,&UNK_10da42b58);
  func_0x000107c613fc();
  puVar3 = &UNK_101fac20c;
  FUN_1000841f8(&UNK_101fac20c,puVar1,uVar2);
  FUN_100084214("SCPageLauncherPluginRegistryServiceProvider",0x2b,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1008f25f8; end: 1008f276b;  */

void FUN_1008f25f8(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f276c; end: 1008f27ef;  */

void FUN_1008f276c(void)

{
  long unaff_x20;
  
  FUN_1008f2260(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160));
  return;
}



/* Entry: 1008f27f0; end: 1008f2983;  */

void FUN_1008f27f0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f2984; end: 1008f29db; -[SCPageLauncherImpl setPluginSaberService:] */

/* WARNING: Possible PIC construction at 0x0001008f29b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008f29bc) */

void FUN_1008f2984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008f29dc; end: 1008f2a07;  */

void FUN_1008f29dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f2a08; end: 1008f2a2f;  */

undefined ** FUN_1008f2a08(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f2a30; end: 1008f2a6f;  */

void FUN_1008f2a30(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f2a14();
  FUN_100082720("ARBarLEBrowserIntegrationServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f2a70; end: 1008f2a77;  */

void FUN_1008f2a70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df0de8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f2a78; end: 1008f2afb;  */

void FUN_1008f2a78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102df0de8,param_2,&UNK_102df0dec,param_2,&UNK_102df0e14,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f2afc; end: 1008f2b1f;  */

undefined ** FUN_1008f2afc(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f2b20; end: 1008f2b9f;  */

void FUN_1008f2b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110695588;
  func_0x000107c613fc(&UNK_110695588,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f2ba0,puVar1);
  return;
}



/* Entry: 1008f2ba0; end: 1008f2ba7;  */

void FUN_1008f2ba0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f940b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f940b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110695620;
  func_0x000107c613fc(&UNK_110695620,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037ba07c;
  FUN_10058fa64(&UNK_1037ba07c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f2ba8; end: 1008f2c9f;  */

void FUN_1008f2ba8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f940b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f940b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110695620;
  func_0x000107c613fc(&UNK_110695620,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037ba07c;
  FUN_10058fa64(&UNK_1037ba07c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f2ca0; end: 1008f2cc3;  */

void FUN_1008f2ca0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f2cc4; end: 1008f2ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f2cc4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10034ac48();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f940c8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1008f2ccc; end: 1008f2d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f2ccc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10034ac48();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f940c8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008f2d38; end: 1008f2d63;  */

void FUN_1008f2d38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f2d64; end: 1008f2d8b;  */

undefined ** FUN_1008f2d64(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f2d8c; end: 1008f2dcb;  */

void FUN_1008f2d8c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f2d70();
  FUN_100082720("AdOperaLayerServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f2dcc; end: 1008f2dd3;  */

void FUN_1008f2dcc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd79c0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f2dd4; end: 1008f2e57;  */

void FUN_1008f2dd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102cd79c0,param_2,&UNK_102cd79c4,param_2,&UNK_102cd79ec,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f2e58; end: 1008f2e7b;  */

undefined ** FUN_1008f2e58(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f2e7c; end: 1008f2efb;  */

void FUN_1008f2e7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106957f0;
  func_0x000107c613fc(&UNK_1106957f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f2efc,puVar1);
  return;
}



/* Entry: 1008f2efc; end: 1008f2f03;  */

void FUN_1008f2efc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f94808,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f94808,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110695888;
  func_0x000107c613fc(&UNK_110695888,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037bb3f4;
  FUN_10058fa64(&UNK_1037bb3f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f2f04; end: 1008f2ffb;  */

void FUN_1008f2f04(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f94808,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f94808,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110695888;
  func_0x000107c613fc(&UNK_110695888,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037bb3f4;
  FUN_10058fa64(&UNK_1037bb3f4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f2ffc; end: 1008f301f;  */

void FUN_1008f2ffc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f3020; end: 1008f3033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3020(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar10 = &lStack_70;
  lVar8 = lVar1;
  FUN_10036d5a8();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(long *)(lVar9 + _DAT_112f94818) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112f94820) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f94828) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112f94830) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f94838) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f94840) = uVar6;
  *(undefined8 *)(lVar9 + _DAT_112f94848) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar11);
  func_0x000107c61154(&lStack_70,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 1008f3034; end: 1008f3147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3034(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar2 = param_2;
  FUN_10036d5a8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f94818) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f94820) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f94828) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f94830) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f94838) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112f94840) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112f94848) = param_8;
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
  func_0x000107c61154(&lStack_70,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008f3148; end: 1008f31c7;  */

void FUN_1008f3148(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f31c8; end: 1008f31eb;  */

undefined ** FUN_1008f31c8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f31ec; end: 1008f326b;  */

void FUN_1008f31ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110695d00;
  func_0x000107c613fc(&UNK_110695d00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f326c,puVar1);
  return;
}



/* Entry: 1008f326c; end: 1008f3273;  */

void FUN_1008f326c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f952d0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f952d0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110695d98;
  func_0x000107c613fc(&UNK_110695d98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c0234;
  FUN_10058fa64(&UNK_1037c0234,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f3274; end: 1008f336b;  */

void FUN_1008f3274(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f952d0,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f952d0,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110695d98;
  func_0x000107c613fc(&UNK_110695d98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c0234;
  FUN_10058fa64(&UNK_1037c0234,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f336c; end: 1008f338f;  */

void FUN_1008f336c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f3390; end: 1008f339f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3390(undefined8 *param_1)

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
  FUN_10036ff6c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112f952e0) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112f952e8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f952f0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f952f8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f95300) = uVar9;
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



/* Entry: 1008f33a0; end: 1008f347b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f33a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10036ff6c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f952e0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f952e8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f952f0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f952f8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f95300) = param_6;
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



/* Entry: 1008f347c; end: 1008f34eb;  */

void FUN_1008f347c(void)

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



/* Entry: 1008f34ec; end: 1008f350f;  */

undefined ** FUN_1008f34ec(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f3510; end: 1008f358f;  */

void FUN_1008f3510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110696088;
  func_0x000107c613fc(&UNK_110696088,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f3590,puVar1);
  return;
}



/* Entry: 1008f3590; end: 1008f3597;  */

void FUN_1008f3590(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f95898,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f95898,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110696120;
  func_0x000107c613fc(&UNK_110696120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c3e0c;
  FUN_10058fa64(&UNK_1037c3e0c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f3598; end: 1008f368f;  */

void FUN_1008f3598(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f95898,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f95898,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110696120;
  func_0x000107c613fc(&UNK_110696120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c3e0c;
  FUN_10058fa64(&UNK_1037c3e0c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f3690; end: 1008f36b3;  */

void FUN_1008f3690(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f36b4; end: 1008f36bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f36b4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100360e18();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f958a8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1008f36bc; end: 1008f3727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f36bc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100360e18();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f958a8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008f3728; end: 1008f3753;  */

void FUN_1008f3728(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f3754; end: 1008f377b;  */

undefined ** FUN_1008f3754(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f377c; end: 1008f37bb;  */

void FUN_1008f377c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f3760();
  FUN_100082720("AnimatedStickerGenerationServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f37bc; end: 1008f37c3;  */

void FUN_1008f37bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102ea11bc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f37c4; end: 1008f3847;  */

void FUN_1008f37c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102ea11bc,param_2,&UNK_102ea11c0,param_2,&UNK_102ea11e8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f3848; end: 1008f386f;  */

undefined ** FUN_1008f3848(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f3870; end: 1008f38af;  */

void FUN_1008f3870(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f3854();
  FUN_100082720("AppStateMonitoringServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f38b0; end: 1008f38b7;  */

void FUN_1008f38b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e5539c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f38b8; end: 1008f393b;  */

void FUN_1008f38b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102e5539c,param_2,&UNK_102e553a0,param_2,&UNK_102e553c8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f393c; end: 1008f395f;  */

undefined ** FUN_1008f393c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f3960; end: 1008f39df;  */

void FUN_1008f3960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110696210;
  func_0x000107c613fc(&UNK_110696210,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f39e0,puVar1);
  return;
}



/* Entry: 1008f39e0; end: 1008f39e7;  */

void FUN_1008f39e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f95b08,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f95b08,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106962a8;
  func_0x000107c613fc(&UNK_1106962a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c498c;
  FUN_10058fa64(&UNK_1037c498c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f39e8; end: 1008f3adf;  */

void FUN_1008f39e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f95b08,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f95b08,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106962a8;
  func_0x000107c613fc(&UNK_1106962a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c498c;
  FUN_10058fa64(&UNK_1037c498c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f3ae0; end: 1008f3b03;  */

void FUN_1008f3ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f3b04; end: 1008f3b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3b04(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10034ae70();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f95b18) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1008f3b0c; end: 1008f3b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3b0c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10034ae70();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f95b18) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008f3b78; end: 1008f3ba3;  */

void FUN_1008f3b78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f3ba4; end: 1008f3bc7;  */

undefined ** FUN_1008f3ba4(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f3bc8; end: 1008f3c47;  */

void FUN_1008f3bc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106963c0;
  func_0x000107c613fc(&UNK_1106963c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f3c48,puVar1);
  return;
}



/* Entry: 1008f3c48; end: 1008f3c4f;  */

void FUN_1008f3c48(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f95d78,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f95d78,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110696458;
  func_0x000107c613fc(&UNK_110696458,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c550c;
  FUN_10058fa64(&UNK_1037c550c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f3c50; end: 1008f3d47;  */

void FUN_1008f3c50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f95d78,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f95d78,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110696458;
  func_0x000107c613fc(&UNK_110696458,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037c550c;
  FUN_10058fa64(&UNK_1037c550c,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f3d48; end: 1008f3d6b;  */

void FUN_1008f3d48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f3d6c; end: 1008f3d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3d6c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100374c30();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f95d88) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1008f3d74; end: 1008f3ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3d74(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100374c30();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f95d88) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1008f3de0; end: 1008f3e0b;  */

void FUN_1008f3de0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f3e0c; end: 1008f3e33;  */

undefined ** FUN_1008f3e0c(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f3e34; end: 1008f3e73;  */

void FUN_1008f3e34(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001008f3e18();
  FUN_100082720("BitmojiMessageSendingServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1008f3e74; end: 1008f3e7b;  */

void FUN_1008f3e74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d424b0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f3e7c; end: 1008f3eff;  */

void FUN_1008f3e7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102d424b0,param_2,&UNK_102d424b4,param_2,&UNK_102d424dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1008f3f00; end: 1008f3f23;  */

undefined ** FUN_1008f3f00(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1008f3f24; end: 1008f3fa3;  */

void FUN_1008f3f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110696948;
  func_0x000107c613fc(&UNK_110696948,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1008f3fa4,puVar1);
  return;
}



/* Entry: 1008f3fa4; end: 1008f3fab;  */

void FUN_1008f3fa4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f96598,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f96598,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106969e0;
  func_0x000107c613fc(&UNK_1106969e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037ddc44;
  FUN_10058fa64(&UNK_1037ddc44,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f3fac; end: 1008f40a3;  */

void FUN_1008f3fac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112f96598,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f96598,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1106969e0;
  func_0x000107c613fc(&UNK_1106969e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1037ddc44;
  FUN_10058fa64(&UNK_1037ddc44,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1008f40a4; end: 1008f40c7;  */

void FUN_1008f40a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008f40c8; end: 1008f40d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f40c8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_10037f658();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112f965a8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112f965b0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f965b8) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1008f40d4; end: 1008f4177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f40d4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_10037f658();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f965a8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f965b0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f965b8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}


