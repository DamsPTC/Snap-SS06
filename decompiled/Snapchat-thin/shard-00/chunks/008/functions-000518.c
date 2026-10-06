/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a02cb4; end: 100a02d37;  */

void FUN_100a02cb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014b49b0,param_2,FUN_100a02d38,param_2,&UNK_1014b49b4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a02d38; end: 100a02d5f;  */

void FUN_100a02d38(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a02d60; end: 100a02d6b;  */

void FUN_100a02d60(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000982bc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000100a02e1c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a02d6c; end: 100a02fc3;  */

void FUN_100a02d6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1000982bc();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000100a02e1c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a02fc4; end: 100a03093; -[SCGrapheneNetworkEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a02fc4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e9818;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_begin_1125a3840);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_1127272a4;
    func_0x000107c61148(lVar3);
  }
  lVar1 = lVar3;
  func_0x000107c444a4(lVar3);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar3);
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_1127272a8;
    func_0x000107c61148(lVar3);
  }
  func_0x000107c56a70(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100a03094; end: 100a0315b; -[SCGrapheneManager setNetworkServices:] */

/* WARNING: Possible PIC construction at 0x000100a03120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a03130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a03124) */
/* WARNING: Removing unreachable block (ram,0x000100a03134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a03094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e60c(*(undefined8 *)(param_1 + _DAT_1127272dc),param_2,
                      &PTR____CFConstantStringClassReference_110df3ff8,3,0,0x2c);
  func_0x000107c61180();
  func_0x000107c611ec(param_1 + _DAT_1127272d0);
  puVar1 = PTR_PTR_1126bc888;
  func_0x000107c610f4();
  func_0x000107c47a84();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127272f4);
  *(undefined **)(param_1 + _DAT_1127272f4) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100a0315c; end: 100a031ff; -[SCGrapheneUploader initWithNetworkServices:performer:] */

undefined1 *
FUN_100a0315c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9840;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a03200; end: 100a03233;  */

void FUN_100a03200(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a03234; end: 100a0325b;  */

undefined ** FUN_100a03234(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0325c; end: 100a0329b;  */

void FUN_100a0325c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a03240();
  FUN_100082720("SCGraphenePerformanceLoggerEntryPointWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a0329c; end: 100a032a3;  */

void FUN_100a0329c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b4ae8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a032a4; end: 100a03327;  */

void FUN_100a032a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b4ae8,param_2,&UNK_1014b4aec,param_2,&UNK_1014b4b14,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a03328; end: 100a03333;  */

undefined ** FUN_100a03328(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a03334; end: 100a033bf;  */

void FUN_100a03334(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a033c0,param_1);
  return;
}



/* Entry: 100a033c0; end: 100a033c7;  */

void FUN_100a033c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ba9ec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a033c8; end: 100a0344b;  */

void FUN_100a033c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ba9ec,param_2,FUN_100a0344c,param_2,&UNK_1014ba9f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0344c; end: 100a03473;  */

void FUN_100a0344c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a03474; end: 100a03487;  */

void FUN_100a03474(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10009ed6c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  puVar2 = PTR_PTR_1126a73b0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c615f0(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_a0);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c615f0(uStack_80);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef85de0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c615f0(uStack_a0);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef85e00);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uStack_a0);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uStack_a0);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a03488; end: 100a03943;  */

void FUN_100a03488(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10009ed6c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126a73b0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c615f0(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_a0);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c615f0(uStack_80);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef85de0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c615f0(uStack_a0);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef85e00);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(uStack_a0);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uStack_a0);
  *param_1 = param_2;
  return;
}



/* Entry: 100a03944; end: 100a03963;  */

void FUN_100a03944(void)

{
  func_0x000107c61168(&PTR_PTR_1129bb7c8);
  return;
}



/* Entry: 100a03964; end: 100a0398f;  */

void FUN_100a03964(undefined8 *param_1,undefined8 param_2)

{
  FUN_100a03944();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 100a03990; end: 100a03a0b; -[_TtC30AppStartupStateServiceProvider46ProtectedDataAvailabilityServiceImplementation init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a03990(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_11307cda8) = 0;
  lVar1 = _DAT_11307cda0;
  uVar3 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a03a0c; end: 100a03a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a03a0c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112762020);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a03a30; end: 100a03b0f; -[SCHandleProtectedDataLaunchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a03a30(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_100a03a0c();
  func_0x000107c61180();
  func_0x000107c540c8();
  func_0x000107c61170(lVar1);
  func_0x000107c61144(auStack_28,param_1);
  param_1 = param_1 + _DAT_112762004;
  func_0x000107c61148(param_1);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4fbb0(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100a03b10; end: 100a03b7b; -[_TtC30AppStartupStateServiceProvider46ProtectedDataAvailabilityServiceImplementation setDidLaunchWhenProtectedDataUnavailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a03b10(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174();
  FUN_100087bd4(FUN_100a03b94,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100a03b7c; end: 100a03b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a03b7c(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307cda8) = *(undefined1 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 100a03b94; end: 100a03ba7;  */

void FUN_100a03b94(void)

{
  FUN_100a03b7c();
  return;
}



/* Entry: 100a03ba8; end: 100a03c47;  */

/* WARNING: Possible PIC construction at 0x000100a03c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a03c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a03c0c) */
/* WARNING: Removing unreachable block (ram,0x000100a03c18) */

void FUN_100a03ba8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae520;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4f51c();
    if (((ulong)puVar2 & 1) != 0) {
      puVar1 = PTR_PTR_1126ae520;
      func_0x000107c5a9bc(PTR_PTR_1126ae520);
      func_0x000107c61180();
      func_0x000107c44d90();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a03c48; end: 100a03cef; -[SCApplicationState protectedDataAvailable] */

undefined1 FUN_100a03c48(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_100a03cf0;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  func_0x000107c60bcc(&uStack_40,8);
  return uVar1;
}



/* Entry: 100a03cf0; end: 100a03d03;  */

void FUN_100a03cf0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30);
  return;
}



/* Entry: 100a03d04; end: 100a03d8f; -[SCHandleProtectedDataLaunchEntryPoint _initializeWithProtectedDataAvailable] */

/* WARNING: Possible PIC construction at 0x000100a03d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a03d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a03d3c) */
/* WARNING: Removing unreachable block (ram,0x000100a03d64) */

void FUN_100a03d04(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3ea0;
  func_0x000107c5aa04(PTR_PTR_1126d3ea0);
  func_0x000107c61180();
  func_0x000107c54514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a03d90; end: 100a03e17; +[AFNetworkActivityIndicatorManager sharedManager] */

void FUN_100a03d90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100a03e18;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f8ee0 != -1) {
    FUN_10002a2fc(0x1137f8ee0,&puStack_48);
  }
  uVar1 = uRam00000001137f8ed8;
  func_0x000107c61174(uRam00000001137f8ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a03e18; end: 100a03e3f;  */

void FUN_100a03e18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c610fc();
  uVar1 = uRam00000001137f8ed8;
  uRam00000001137f8ed8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a03e40; end: 100a03f73; -[AFNetworkActivityIndicatorManager init] */

undefined1 * FUN_100a03e40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a1c0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c53cb4(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    func_0x000107c521d4(0x3ff0000000000000,puVar1);
    func_0x000107c53634(0x3fc5c28f5c28f5c3,puVar1);
    func_0x000107c61174(puVar1);
  }
  func_0x000107c61170(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 100a03f74; end: 100a04057; -[AFNetworkActivityIndicatorManager setCurrentState:] */

void FUN_100a03f74(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  if (*(long *)(param_1 + 0x40) == param_3) goto LAB_100a0402c;
  func_0x000107c5e338(param_1,param_2,&PTR____CFConstantStringClassReference_110f769b8);
  *(long *)(param_1 + 0x40) = param_3;
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c3f47c(param_1);
      func_0x000107c3f490(param_1);
      uVar1 = 0;
LAB_100a04014:
      func_0x000107c56a3c(param_1,param_2,uVar1);
    }
    else if (param_3 == 1) {
      func_0x000107c5ba4c(param_1);
    }
  }
  else {
    if (param_3 == 2) {
      func_0x000107c3f490(param_1);
      uVar1 = 1;
      goto LAB_100a04014;
    }
    if (param_3 == 3) {
      func_0x000107c5baa8(param_1);
    }
  }
  func_0x000107c41a88(param_1,param_2,&PTR____CFConstantStringClassReference_110f769b8);
LAB_100a0402c:
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a04058; end: 100a0405f; -[AFNetworkActivityIndicatorManager setActivationDelay:] */

void FUN_100a04058(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 100a04060; end: 100a04067; -[AFNetworkActivityIndicatorManager setCompletionDelay:] */

void FUN_100a04060(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 100a04068; end: 100a0407b; -[AFNetworkActivityIndicatorManager setEnabled:] */

void FUN_100a04068(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 8) = param_3;
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c187b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentState__11263f8f0,0);
  return;
}



/* Entry: 100a0407c; end: 100a04083; -[SCAppSession setDidLaunchWithDidFinishLaunching:] */

void FUN_100a0407c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}



/* Entry: 100a04084; end: 100a04107; -[SCHandleProtectedDataLaunchEntryPoint _appWillEnterForeground] */

/* WARNING: Possible PIC construction at 0x000100a040d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a040d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a04084(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11276201c;
    func_0x000107c61148(param_1);
  }
  func_0x000107c5da70(param_1);
  func_0x000107c61180();
  func_0x000107c5da60();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a04108; end: 100a0414f; -[_TtC29UserSessionRepositoryServices29UserSessionRepositoryServices userSessionRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a04108(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  FUN_100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 100a04150; end: 100a041b7;  */

/* WARNING: Possible PIC construction at 0x000100a041a0: Changing call to branch */

void FUN_100a04150(undefined *param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  if ((param_1 != (undefined *)0x0) &&
     (puVar1 = param_1, func_0x000107c49f48(), ((ulong)puVar1 & 1) == 0)) {
    param_1 = PTR_PTR_1126cecc0;
    func_0x000107c5a9bc(PTR_PTR_1126cecc0);
    func_0x000107c61180();
    func_0x000107c4bed8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a041b8; end: 100a041f3; -[SCUserSession isInvalidated] */

undefined8 FUN_100a041b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3adfc();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c49920();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100a041f4; end: 100a04247; +[SCDiscoverFeedPerformanceLogger shared] */

void FUN_100a041f4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c9f38 != -1) {
    FUN_10002a2fc(0x1136c9f38,&PTR___NSConcreteGlobalBlock_1109878e8);
  }
  uVar1 = uRam00000001136c9f40;
  func_0x000107c61174(uRam00000001136c9f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a04248; end: 100a04277;  */

void FUN_100a04248(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126cecc0;
  func_0x000107c610f4();
  func_0x000107c45450();
  uVar1 = puRam00000001136c9f40;
  puRam00000001136c9f40 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a04278; end: 100a04403; -[SCDiscoverFeedPerformanceLogger initPrivate] */

undefined1 * FUN_100a04278(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8298;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100a04404; end: 100a0440f;  */

void FUN_100a04404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uStack_58;
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef22350);
  func_0x000107c4980c();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_58);
  puVar3 = PTR_PTR_1126a7910;
  func_0x000107c610f8();
  func_0x000107c46698();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uStack_58);
  *param_1 = puVar3;
  return;
}



/* Entry: 100a04410; end: 100a0451f;  */

void FUN_100a04410(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  uVar2 = uStack_58;
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef22350);
  func_0x000107c4980c();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_58);
  puVar3 = PTR_PTR_1126a7910;
  func_0x000107c610f8();
  func_0x000107c46698();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uStack_58);
  *param_1 = puVar3;
  return;
}



/* Entry: 100a04520; end: 100a04593; -[SCDiscoverFeedPerformanceLogger logStartGhostToDiscoverFeedWithSourceType:] */

void FUN_100a04520(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_2 + 0x40) = 0;
  func_0x000107c6071c();
  *(undefined8 *)(param_2 + 0x20) = param_4;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_100a04d64;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 8),param_3,&puStack_50);
  return;
}



/* Entry: 100a04594; end: 100a046e7; -[SCSnapchattersPinningMetadataDefaultRepository initWithDocObjectContext:performerProvider:appStartExperimentReader:impressionThreshold:] */

undefined1 *
FUN_100a04594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e8008;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    FUN_100a046e8();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    uVar2 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a046e8; end: 100a0476b;  */

long FUN_100a046e8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4980c(param_1,param_2,&PTR____CFConstantStringClassReference_110eeead8,0xffffffff,0)
  ;
  return (long)(int)param_1;
}



/* Entry: 100a0476c; end: 100a04777;  */

undefined ** FUN_100a0476c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a04778; end: 100a04803;  */

void FUN_100a04778(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a04804,param_1);
  return;
}



/* Entry: 100a04804; end: 100a0480b;  */

void FUN_100a04804(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bae14);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0480c; end: 100a0488f;  */

void FUN_100a0480c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bae14,param_2,FUN_100a04890,param_2,&UNK_1014bae18,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a04890; end: 100a048b7;  */

void FUN_100a04890(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a048b8; end: 100a048c7;  */

void FUN_100a048b8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10009ee54();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a73b8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a048c8; end: 100a04c87;  */

void FUN_100a048c8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
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
  FUN_100083b20(&uStack_90);
  FUN_10009ee54();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a73b8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 100a04c88; end: 100a04d17; -[SCHeadlessLaunchCompletedEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100a04cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a04ccc) */
/* WARNING: Removing unreachable block (ram,0x000100a04ce8) */
/* WARNING: Removing unreachable block (ram,0x000100a04cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a04c88(long param_1)

{
  param_1 = param_1 + _DAT_112762024;
  func_0x000107c61148(param_1);
  func_0x000107c5bcac();
  func_0x000107c61180();
  func_0x000107c4f2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a04d18; end: 100a04d63;  */

void FUN_100a04d18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a04d64; end: 100a04dc3;  */

void FUN_100a04d64(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be522f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__logDebugWarningInfo__112572258,
               &PTR____CFConstantStringClassReference_110e963d8);
    return;
  }
  func_0x000107c3c344();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar1;
  return;
}



/* Entry: 100a04dc4; end: 100a04deb;  */

undefined ** FUN_100a04dc4(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a04dec; end: 100a04e2b;  */

void FUN_100a04dec(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a04dd0();
  FUN_100082720("SCIdentityLoggerServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a04e2c; end: 100a04e33;  */

void FUN_100a04e2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a64e4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a04e34; end: 100a04eb7;  */

void FUN_100a04e34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a64e4,param_2,&UNK_1014a64e8,param_2,&UNK_1014a6510,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a04eb8; end: 100a04ec3;  */

undefined ** FUN_100a04eb8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a04ec4; end: 100a04f4f;  */

void FUN_100a04ec4(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a04f50,param_1);
  return;
}



/* Entry: 100a04f50; end: 100a04f57;  */

void FUN_100a04f50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bb1ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a04f58; end: 100a04fdb;  */

void FUN_100a04f58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bb1ac,param_2,FUN_100a04fdc,param_2,&UNK_1014bb1b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a04fdc; end: 100a05003;  */

void FUN_100a04fdc(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a05004; end: 100a05013;  */

void FUN_100a05004(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
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
  FUN_10009ef30();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a73c0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a05014; end: 100a05337;  */

void FUN_100a05014(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10009ef30();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a73c0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 100a05338; end: 100a0539f; -[SCInitializeAppStateEntryPoint begin] */

void FUN_100a05338(void)

{
  func_0x000107c5a9bc(PTR_PTR_1126ae520);
  func_0x000107c611b0();
  return;
}



/* Entry: 100a053a0; end: 100a053ab;  */

undefined ** FUN_100a053a0(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a053ac; end: 100a05437;  */

void FUN_100a053ac(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a05438,param_1);
  return;
}



/* Entry: 100a05438; end: 100a0543f;  */

void FUN_100a05438(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bb544);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a05440; end: 100a054c3;  */

void FUN_100a05440(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bb544,param_2,FUN_100a054c4,param_2,&UNK_1014bb548,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a054c4; end: 100a054eb;  */

void FUN_100a054c4(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a054ec; end: 100a054fb;  */

void FUN_100a054ec(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
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
  FUN_10009f00c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a73c8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a054fc; end: 100a0581f;  */

void FUN_100a054fc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10009f00c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a73c8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 100a05820; end: 100a058c3; -[SCDiscoverFeedPerformanceLogger _reset] */

/* WARNING: Possible PIC construction at 0x000100a05850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a0586c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a05888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a058a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a0588c) */
/* WARNING: Removing unreachable block (ram,0x000100a05870) */
/* WARNING: Removing unreachable block (ram,0x000100a05854) */
/* WARNING: Removing unreachable block (ram,0x000100a058a4) */

void FUN_100a05820(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100a058c4; end: 100a0592b; -[SCInitializeAuthTokenManagerEntryPoint begin] */

void FUN_100a058c4(void)

{
  func_0x000107c5a9bc(PTR_PTR_1126c5598);
  func_0x000107c611b0();
  return;
}



/* Entry: 100a0592c; end: 100a05937;  */

undefined ** FUN_100a0592c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a05938; end: 100a059c3;  */

void FUN_100a05938(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a059c4,param_1);
  return;
}



/* Entry: 100a059c4; end: 100a059cb;  */

void FUN_100a059c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bb8dc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a059cc; end: 100a05a4f;  */

void FUN_100a059cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bb8dc,param_2,FUN_100a05a50,param_2,&UNK_1014bb8e0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a05a50; end: 100a05a77;  */

void FUN_100a05a50(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a05a78; end: 100a05a87;  */

void FUN_100a05a78(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
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
  FUN_10009f0e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a73d0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a05a88; end: 100a05dab;  */

void FUN_100a05a88(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10009f0e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a73d0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 100a05dac; end: 100a05e1b; -[SCInitializeNativeClientPlatformEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100a05e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a05e08) */

void FUN_100a05dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ba560;
  puVar2 = PTR_PTR_1126d3ea8;
  func_0x000107c610f4(PTR_PTR_1126d3ea8);
  func_0x000107c4579c();
  puVar3 = PTR_PTR_1126d3eb0;
  func_0x000107c610fc(PTR_PTR_1126d3eb0);
  func_0x000107c453ec(puVar1,param_2,puVar2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 100a05e1c; end: 100a05e67; -[SCNShimsPlatformParameters initWithAssertionMode:minLogLevel:] */

void FUN_100a05e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e6d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 100a05e68; end: 100a05f37; +[SCNShimsPlatform init:logger:] */

void FUN_100a05e68(void)

{
  undefined8 in_x3;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  
  FUN_100457ed0();
  func_0x000107c61174(in_x3);
  FUN_100a05f38();
  FUN_100a05fac(auStack_48,in_x3);
  FUN_100a0628c(auStack_38,auStack_48);
  FUN_100a06420(auStack_48);
  func_0x000107c61170(in_x3);
  func_0x000100458e04();
  return;
}



/* Entry: 100a05f38; end: 100a05f9b;  */

ulong FUN_100a05f38(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c3e210(param_1);
  uVar2 = param_1;
  func_0x000107c4cefc(param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 100a05f9c; end: 100a05fa3; -[SCNShimsPlatformParameters assertionMode] */

undefined8 FUN_100a05f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100a05fa4; end: 100a05fab; -[SCNShimsPlatformParameters minLogLevel] */

undefined8 FUN_100a05fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100a05fac; end: 100a0609b;  */

void FUN_100a05fac(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e3050;
    func_0x000107c61158(PTR_PTR_1126e3050);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110d993c0;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_100a0609c);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_100a061a0(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_100a06188();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000100a061d0();
  return;
}



/* Entry: 100a0609c; end: 100a06187;  */

void FUN_100a0609c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110d99400;
  puVar1[3] = &PTR_DAT_110d99480;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_100a06188();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000100a06198();
  puVar1[3] = &PTR_DAT_110d99450;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_100a061a0(&uStack_50);
  return;
}



/* Entry: 100a06188; end: 100a0619f;  */

void FUN_100a06188(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100a061a0; end: 100a061c7;  */

long FUN_100a061a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100a061c8; end: 100a061d7;  */

void FUN_100a061c8(void)

{
  return;
}


