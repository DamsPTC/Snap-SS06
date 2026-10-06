/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007746f0; end: 100774783;  */

void FUN_1007746f0(undefined8 param_1)

{
  if (lRam0000000112f85318 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e772ae8);
  return;
}



/* Entry: 100774784; end: 1007747b3;  */

void FUN_100774784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_13;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  return;
}



/* Entry: 1007747b4; end: 100774adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1007747b4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_11305e778);
  func_0x000107c6157c(uVar9);
  FUN_1000d224c(auStack_88);
  func_0x000107c61574(uVar9);
  puVar2 = auStack_88;
  FUN_1000a8868(puVar2,uStack_70);
  uVar3 = 2;
  func_0x000100774b74(2,0x2d,0,uStack_70,uStack_68,puVar2);
  func_0x0001000834e4(auStack_88);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11067b580;
  func_0x000107c613fc(&UNK_11067b580,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x18) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  FUN_1000285a8(0x112f852d8,&UNK_10dbf92d0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  puVar5 = &UNK_10369966c;
  FUN_1000bdd8c(&UNK_10369966c,puVar4);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar4 = &UNK_11067b5a8;
  func_0x000107c613fc(&UNK_11067b5a8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x18) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar13;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  FUN_1000285a8(0x112f852e0,&UNK_10dbf9810);
  func_0x000107c613fc();
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar1);
  puVar6 = &UNK_103699844;
  FUN_1000bdd8c(&UNK_103699844,puVar4);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &UNK_11067b5d0;
  func_0x000107c613fc(&UNK_11067b5d0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  FUN_1000285a8(0x112ee4808,&UNK_10dbf92e0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar11);
  puVar7 = &UNK_10369995c;
  FUN_1000bdd8c(&UNK_10369995c,puVar4);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar4 = &UNK_11067b5f8;
  func_0x000107c613fc(&UNK_11067b5f8,0x58,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined **)(puVar4 + 0x20) = puVar7;
  *(undefined8 *)(puVar4 + 0x28) = uVar12;
  *(undefined **)(puVar4 + 0x30) = puVar5;
  *(undefined **)(puVar4 + 0x38) = puVar6;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x48) = uVar9;
  *(undefined8 *)(puVar4 + 0x50) = uVar10;
  FUN_1000285a8(0x112f852e8,&UNK_10dbf92e8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  puVar8 = &UNK_103699bbc;
  FUN_1000bdd8c(&UNK_103699bbc,puVar4);
  func_0x0001005c7180(0);
  func_0x000107c610f8();
  FUN_100774d20(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  return puVar8;
}



/* Entry: 100774ae0; end: 100774ae3;  */

void FUN_100774ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100774ae4; end: 100774b6b;  */

void FUN_100774ae4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100774b6c; end: 100774b9b;  */

void FUN_100774b6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100774b9c; end: 100774cab;  */

long FUN_100774b9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_48;
  
  FUN_1000d224c(&lStack_48);
  if (lStack_48 == 0) {
    func_0x000107c5fadc(param_4,param_5);
    if ((param_1 < 2) && (param_1 == 0)) {
      func_0x000107c612ac();
    }
    lVar1 = param_4;
    FUN_1001139cc();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
  }
  else {
    lVar1 = lStack_48;
    func_0x000107c4f800(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
  }
  return lVar1;
}



/* Entry: 100774cac; end: 100774ccb;  */

void FUN_100774cac(void)

{
  FUN_100774b9c();
  return;
}



/* Entry: 100774ccc; end: 100774d1f; +[SCFideliusLocalKVStoreManager fideliusLocalKVStorePath] */

void FUN_100774ccc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e450();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100774d20; end: 100774da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100774d20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113070f60) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113070f68) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 100774da4; end: 100774e27;  */

void FUN_100774da4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100774e28; end: 100774e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100774e28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130363b8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100774e74; end: 100774e7f;  */

void FUN_100774e74(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100774e80; end: 100774ec7;  */

void FUN_100774e80(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100774ec8; end: 10077520f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100774ec8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  lVar10 = lStack_68;
  uVar11 = *(undefined8 *)(lStack_68 + _DAT_1130813f0);
  func_0x000107c6157c(uVar11);
  func_0x000107c61170(lVar10);
  FUN_100083b20(&lStack_68);
  lVar10 = lStack_68;
  uVar12 = *(undefined8 *)(lStack_68 + _DAT_113070f60);
  func_0x000107c6157c(uVar12);
  func_0x000107c61170(lVar10);
  FUN_100083b20(&lStack_68);
  lVar10 = lStack_68;
  uVar13 = *(undefined8 *)(lStack_68 + _DAT_113036458);
  uVar14 = *(undefined8 *)(lStack_68 + _DAT_113036488);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar14);
  FUN_100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar1 = lStack_68;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  FUN_100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c5d198();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  FUN_100083b20(&lStack_68);
  FUN_1000285a8(0x112ee3e90,&UNK_10db0ef60);
  lVar3 = lStack_68;
  func_0x000107c4aeb4(lStack_68);
  func_0x000107c61180();
  lVar4 = lVar3;
  FUN_100759c94();
  func_0x000107c61170(lVar3);
  uVar5 = 0x112de6120;
  FUN_1000285a8(0x112de6120,&UNK_10d9b0cc0);
  uVar6 = 0;
  func_0x000100759f5c(0,1,FUN_100b61490,0,uVar5);
  func_0x000107c61574(lVar4);
  uVar5 = 0x112ee3e98;
  FUN_1000285a8(0x112ee3e98,&UNK_10db20590);
  uVar7 = 0;
  FUN_100775264(0,1,FUN_100b614ec,0,uVar5);
  func_0x000107c61574(uVar6);
  FUN_1000285a8(0x112ee3e30,&UNK_10db0f1a0);
  uVar6 = uVar7;
  FUN_100775284(uVar7,0,1);
  uVar5 = 0x112d38358;
  FUN_1000285a8(0x112d38358,&UNK_10d902090);
  puVar8 = &UNK_102a3ec9c;
  FUN_100775358(&UNK_102a3ec9c,0,uVar5);
  func_0x000107c61574(uVar6);
  uVar5 = 0x112d5d480;
  FUN_1000285a8(0x112d5d480,&UNK_10d923b90);
  puVar9 = &UNK_102a3ed94;
  FUN_1000bfde0(&UNK_102a3ed94,0,uVar5);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(lStack_68);
  puVar8 = &UNK_11058b4c8;
  func_0x000107c613fc(&UNK_11058b4c8,0x48,7);
  *(long *)(puVar8 + 0x10) = lVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar12;
  *(long *)(puVar8 + 0x20) = lVar2;
  *(undefined8 *)(puVar8 + 0x28) = uVar13;
  *(undefined8 *)(puVar8 + 0x30) = uVar11;
  *(undefined8 *)(puVar8 + 0x38) = uVar14;
  *(undefined **)(puVar8 + 0x40) = puVar9;
  FUN_1000285a8(0x112ee40a8,&UNK_10db0fc50);
  func_0x000107c613fc();
  puVar9 = &UNK_102a3ee7c;
  FUN_1000bdd8c(&UNK_102a3ee7c,puVar8);
  func_0x000107c61170(lVar10);
  lVar10 = 0;
  FUN_1005c7268();
  func_0x000107c613fc();
  *(undefined **)(lVar10 + 0x10) = puVar9;
  *param_1 = lVar10;
  return;
}



/* Entry: 100775210; end: 100775263;  */

void FUN_100775210(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100775264; end: 100775283;  */

undefined8
FUN_100775264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  puVar2 = &UNK_1107abe20;
  lVar4 = *unaff_x20;
  FUN_100759d7c(0,param_5);
  lVar1 = 0;
  FUN_100759dd0();
  func_0x000107c613fc(&UNK_1107abe20,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(long *)(puVar2 + 0x28) = lVar1;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(lVar1);
  func_0x00010075a04c(param_1,param_2,FUN_100b614bc,puVar2);
  func_0x000107c61574(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 100775284; end: 1007752ef;  */

long FUN_100775284(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000100775278(0,*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined1 *)(lVar1 + 0x20) = param_3;
  FUN_100087bcc();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_1);
  return lVar1;
}



/* Entry: 1007752f0; end: 1007752f3;  */

void FUN_1007752f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1007752f4; end: 10077534b;  */

void FUN_1007752f4(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = &UNK_10dd3c668;
  puStack_18 = &UNK_10dd3c680;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x90);
  return;
}



/* Entry: 10077534c; end: 100775357;  */

void FUN_10077534c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820ab0);
  return;
}



/* Entry: 100775358; end: 1007753cb;  */

long * FUN_100775358(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10077534c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_1000c0ea8(lVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  return unaff_x20;
}



/* Entry: 1007753cc; end: 1007753cf;  */

void FUN_1007753cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1007753d0; end: 10077545f;  */

void FUN_1007753d0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 100775460; end: 100775573;  */

undefined8 * FUN_100775460(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  uVar1 = param_2[4];
  uVar8 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar8;
  uVar2 = param_2[6];
  uVar9 = param_2[7];
  param_1[6] = uVar2;
  param_1[7] = uVar9;
  uVar3 = param_2[8];
  uVar10 = param_2[9];
  param_1[8] = uVar3;
  param_1[9] = uVar10;
  uVar13 = param_2[10];
  param_1[10] = uVar13;
  uVar14 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar14;
  uVar4 = param_2[0xd];
  uVar11 = param_2[0xe];
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar11;
  uVar5 = param_2[0xf];
  uVar12 = param_2[0x10];
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar12;
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar13);
  func_0x000107c615f0(uVar14);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar12);
  return param_1;
}



/* Entry: 100775574; end: 1007755af;  */

undefined8 FUN_100775574(undefined8 param_1,undefined8 param_2)

{
  FUN_100775460(param_2,param_1);
  return param_2;
}



/* Entry: 1007755b0; end: 10077563f;  */

/* WARNING: Possible PIC construction at 0x00010077562c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100775630) */

void FUN_1007755b0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x38));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x40));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x58));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x68));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Entry: 100775640; end: 100775673;  */

undefined8 FUN_100775640(undefined8 param_1)

{
  FUN_1007755b0();
  return param_1;
}



/* Entry: 100775674; end: 100775717;  */

void FUN_100775674(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100775718; end: 100775743; -[SCLensPlusGameLensUpsellServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100775718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130363b8));
  return;
}



/* Entry: 100775744; end: 100775777;  */

void FUN_100775744(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100775778; end: 10077578b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100775778(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10));
  puVar9 = &UNK_110659808;
  func_0x000107c613fc(&UNK_110659808,0x48,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar4;
  *(undefined8 *)(puVar9 + 0x18) = uVar1;
  *(undefined8 *)(puVar9 + 0x20) = uVar5;
  *(undefined8 *)(puVar9 + 0x28) = uVar2;
  *(undefined8 *)(puVar9 + 0x30) = uVar6;
  *(undefined8 *)(puVar9 + 0x38) = uVar3;
  *(undefined8 *)(puVar9 + 0x40) = uVar7;
  lVar10 = 0;
  FUN_1005c7b90();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar8 = _DAT_112f6ed20;
  func_0x000107c61614(lVar11 + _DAT_112f6ed20,0);
  func_0x000107c61604(lVar11 + lVar8,uStack_68);
  FUN_1000285a8(0x112f6ee38,&UNK_10dbcbee0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(puVar9);
  puVar12 = &UNK_10346d18c;
  FUN_1000bdd8c(&UNK_10346d18c,puVar9);
  *(undefined **)(lVar11 + _DAT_112f6ed10) = puVar12;
  plVar13 = &lStack_78;
  lStack_78 = lVar11;
  lStack_70 = lVar10;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(puVar9);
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 10077578c; end: 10077590b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077578c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  puVar2 = &UNK_110659808;
  func_0x000107c613fc(&UNK_110659808,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  lVar3 = 0;
  FUN_1005c7b90();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f6ed20;
  func_0x000107c61614(lVar4 + _DAT_112f6ed20,0);
  func_0x000107c61604(lVar4 + lVar1,uStack_68);
  FUN_1000285a8(0x112f6ee38,&UNK_10dbcbee0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(puVar2);
  puVar5 = &UNK_10346d18c;
  FUN_1000bdd8c(&UNK_10346d18c,puVar2);
  *(undefined **)(lVar4 + _DAT_112f6ed10) = puVar5;
  plVar6 = &lStack_78;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(puVar2);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 10077590c; end: 1007759bb;  */

void FUN_10077590c(void)

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



/* Entry: 1007759bc; end: 100775eb7;  */

void FUN_1007759bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee27c0,&UNK_10db0d490);
  puVar1 = &UNK_110588a08;
  func_0x000107c613fc(&UNK_110588a08,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  FUN_1000823a8(0x100775b14,puVar1);
  return;
}



/* Entry: 100775eb8; end: 100775ebf; -[SCCameraConfigurationImpl batchCapture] */

undefined8 FUN_100775eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100775ec0; end: 100775eef;  */

void FUN_100775ec0(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9b58);
  func_0x000107c45db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100775ef0; end: 100775f63; -[SCCameraBatchCaptureConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_100775ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e88a0;
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



/* Entry: 100775f64; end: 100775f6b; -[SCCameraBatchCaptureConfigurationImpl enabled] */

undefined8 FUN_100775f64(void)

{
  return 1;
}



/* Entry: 100775f6c; end: 100775ff7;  */

void FUN_100775f6c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100775ff8; end: 1007768bf;  */

void FUN_100775ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ee27c0,&UNK_10db0d490);
  puVar1 = &UNK_110588b28;
  func_0x000107c613fc(&UNK_110588b28,0xd0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_3;
  *(undefined8 *)(puVar1 + 0x68) = param_23;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_13;
  *(undefined8 *)(puVar1 + 0x80) = param_24;
  *(undefined8 *)(puVar1 + 0x88) = param_14;
  *(undefined8 *)(puVar1 + 0x90) = param_15;
  *(undefined8 *)(puVar1 + 0x98) = param_16;
  *(undefined8 *)(puVar1 + 0xa0) = param_17;
  *(undefined8 *)(puVar1 + 0xa8) = param_18;
  *(undefined8 *)(puVar1 + 0xb0) = param_19;
  *(undefined8 *)(puVar1 + 0xb8) = param_20;
  *(undefined8 *)(puVar1 + 0xc0) = param_21;
  *(undefined8 *)(puVar1 + 200) = param_22;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  FUN_1000823a8(0x1007761fc,puVar1);
  return;
}



/* Entry: 1007768c0; end: 1007769c7;  */

void FUN_1007768c0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007769c8; end: 100776f8b;  */

void FUN_1007769c8(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000248;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  
  bVar1 = *param_2;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_100777240(param_3,param_4,param_5,param_6);
      pcVar2 = "ARBarMiniCameraFeaturesPluginProvider";
      uVar3 = 0x25;
      in_stack_00000330 = param_3;
    }
    else if (bVar1 == 1) {
      FUN_100777fac(param_7,param_8,param_9,param_10,param_11,param_12,param_3,param_13,param_14,
                    param_15,param_16,param_17,param_18,param_19,param_20,param_21,param_22,param_23
                    ,param_24,param_25,param_26,param_27,param_28,param_29,param_30,param_31,
                    param_32,param_33,param_34,param_35,param_36,param_37,param_4,param_38,param_39,
                    param_40,param_41,param_42,param_43,param_44,param_45,param_46,param_47,param_48
                    ,param_49,param_50,param_51,param_52,param_53,param_54,param_55,param_56,
                    param_57,param_58,param_59,param_60,param_61,param_62,param_63,param_64,param_65
                    ,param_66,param_67,param_68,param_69,param_70,param_71);
      pcVar2 = "CameraMainFeatureProviderPluginProvider";
      uVar3 = 0x27;
      in_stack_00000330 = param_7;
    }
    else {
      FUN_1007af500(param_7,param_11,param_3,param_12,param_25,param_20,param_27,in_stack_00000210);
      pcVar2 = "CameraMainLensFeatureProviderPluginProvider";
      uVar3 = 0x2b;
      in_stack_00000330 = param_7;
    }
  }
  else if (bVar1 == 3) {
    FUN_1007b8b24(param_25,param_7,param_13,in_stack_00000248,in_stack_000002d8,in_stack_000002e0,
                  in_stack_000002e8,in_stack_000002f0);
    pcVar2 = "MainCameraScanFeatureProviderPluginProvider";
    uVar3 = 0x2b;
    in_stack_00000330 = param_25;
  }
  else if (bVar1 == 4) {
    FUN_1007ba598(param_7,param_3,param_12,in_stack_00000200,param_30,param_26,in_stack_00000328,
                  param_66);
    pcVar2 = "MainCameraPresentationFeaturePluginProvider";
    uVar3 = 0x2b;
    in_stack_00000330 = param_7;
  }
  else {
    FUN_1007babe8();
    pcVar2 = "GamesExplorerCameraButtonFeatureProviderPluginProvider";
    uVar3 = 0x36;
  }
  FUN_100082720(pcVar2,uVar3,2);
  *param_1 = in_stack_00000330;
  return;
}



/* Entry: 100776f8c; end: 10077723f;  */

void FUN_100776f8c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007769c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 100777240; end: 1007772e3;  */

void FUN_100777240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eef830,&UNK_10db202b0);
  puVar1 = &UNK_11069a118;
  func_0x000107c613fc(&UNK_11069a118,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1007772e4,puVar1);
  return;
}



/* Entry: 1007772e4; end: 1007772ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007772e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_70;
  FUN_1000285a8(0x112ee3e90,&UNK_10db0ef60,*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&lStack_58);
  lVar2 = lStack_58;
  lVar1 = lStack_58;
  func_0x000107c4ae78(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c4aeb4(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  FUN_100759c94(lVar2,0);
  func_0x000107c61170(lVar2);
  uVar3 = 0x112ee3e98;
  FUN_1000285a8(0x112ee3e98,&UNK_10db20590);
  uVar4 = 0;
  func_0x000100759f5c(0,1,FUN_100b6163c,0,uVar3);
  func_0x000107c61574(lVar1);
  FUN_100083b20(&lStack_58);
  uVar8 = *(undefined8 *)(lStack_58 + _DAT_1130355b8);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_58);
  FUN_1000285a8(0x112f9f1c8,&UNK_10dc14750);
  FUN_100083b20(&lStack_60);
  lVar2 = lStack_60;
  uVar5 = *(undefined8 *)(lStack_60 + _DAT_113071300);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  uVar3 = uVar5;
  FUN_1000bda74();
  func_0x000107c61170(uVar5);
  FUN_1000285a8(0x112f9f1d0,&UNK_10dc14758);
  FUN_100083b20(&lStack_60);
  lVar2 = lStack_60;
  func_0x000107c4b080();
  func_0x000107c61180();
  func_0x000107c61170(lStack_60);
  lVar1 = lVar2;
  FUN_1000bda74();
  func_0x000107c61170(lVar2);
  lVar6 = 0;
  FUN_100777f50();
  lVar2 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f9f948) = uVar8;
  *(undefined8 *)(lVar2 + _DAT_112f9f938) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_112f9f930) = uVar3;
  *(long *)(lVar2 + _DAT_112f9f940) = lVar1;
  lStack_70 = lVar2;
  lStack_68 = lVar6;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 1007772f0; end: 100777533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007772f0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_70;
  FUN_1000285a8(0x112ee3e90,&UNK_10db0ef60);
  FUN_100083b20(&lStack_58);
  lVar2 = lStack_58;
  lVar1 = lStack_58;
  func_0x000107c4ae78(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c4aeb4(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  FUN_100759c94(lVar2,0);
  func_0x000107c61170(lVar2);
  uVar3 = 0x112ee3e98;
  FUN_1000285a8(0x112ee3e98,&UNK_10db20590);
  uVar4 = 0;
  func_0x000100759f5c(0,1,FUN_100b6163c,0,uVar3);
  func_0x000107c61574(lVar1);
  FUN_100083b20(&lStack_58);
  uVar8 = *(undefined8 *)(lStack_58 + _DAT_1130355b8);
  func_0x000107c615f0(uVar8);
  func_0x000107c61170(lStack_58);
  FUN_1000285a8(0x112f9f1c8,&UNK_10dc14750);
  FUN_100083b20(&lStack_60);
  lVar2 = lStack_60;
  uVar5 = *(undefined8 *)(lStack_60 + _DAT_113071300);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  uVar3 = uVar5;
  FUN_1000bda74();
  func_0x000107c61170(uVar5);
  FUN_1000285a8(0x112f9f1d0,&UNK_10dc14758);
  FUN_100083b20(&lStack_60);
  lVar2 = lStack_60;
  func_0x000107c4b080();
  func_0x000107c61180();
  func_0x000107c61170(lStack_60);
  lVar1 = lVar2;
  FUN_1000bda74();
  func_0x000107c61170(lVar2);
  lVar6 = 0;
  FUN_100777f50();
  lVar2 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f9f948) = uVar8;
  *(undefined8 *)(lVar2 + _DAT_112f9f938) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_112f9f930) = uVar3;
  *(long *)(lVar2 + _DAT_112f9f940) = lVar1;
  lStack_70 = lVar2;
  lStack_68 = lVar6;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 100777534; end: 10077753b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100777534(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e90;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e90);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007775e0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007775e0:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e90;
    FUN_1000285a8(0x112ed6e90,&UNK_10db01578);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad168;
      func_0x000107c610f8();
      func_0x000107c471c8();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000045,0x800000010f1424b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007776a0);
  (*pcVar1)();
}



/* Entry: 10077753c; end: 10077769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077753c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar7 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddf4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar7);
  lVar7 = *(long *)(lVar2 + _DAT_1130826b0);
  func_0x000107c61434(lVar7);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = 0x112ed6e90;
    uVar6 = 0;
    FUN_1000285a8(0x112ed6e90);
    FUN_1000a7158();
    if ((uVar6 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_1007775e0;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_1007775e0:
  func_0x000107c6142c(lVar7);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar3 = 0x112ed6e90;
    FUN_1000285a8(0x112ed6e90,&UNK_10db01578);
    puVar4 = &uStack_58;
    func_0x000107c6147c(puVar4,alStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar7 = alStack_50[0];
      puVar5 = PTR_PTR_1126ad168;
      func_0x000107c610f8();
      func_0x000107c471c8();
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(lVar7);
      *param_1 = puVar5;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000045,0x800000010f1424b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007776a0);
  (*pcVar1)();
}



/* Entry: 1007776a0; end: 10077771b; -[_TtC39ConditionalCameraServicesImplementation39MainCameraCameraUIServiceImplementation opaqueLensCameraUIScopedServices] */

void FUN_1007776a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x10);
  func_0x000107c6157c(param_1);
  (*pcVar3)(uVar2,lVar1);
  FUN_100083b20(&uStack_48);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_48);
  return;
}



/* Entry: 10077771c; end: 10077772b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077771c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112ed6b18));
  return;
}



/* Entry: 10077772c; end: 100777b83;  */

void FUN_10077772c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 *param_20)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_20;
  lVar1 = 0x112f5cad0;
  FUN_1000285a8(0x112f5cad0,&UNK_10dbb5f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 0x26;
  *(undefined8 *)(lVar1 + 0x10) = 0x13;
  uVar2 = 0x112f5cd20;
  FUN_1000285a8(0x112f5cd20,&UNK_10dbb7580);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  func_0x000107c6157c(param_2);
  pcVar3 = FUN_1007a7ed8;
  FUN_1000823a8(FUN_1007a7ed8,param_2);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(code **)(lVar1 + 0x28) = pcVar3;
  uVar2 = 0x112ed6d48;
  FUN_1000285a8(0x112ed6d48,&UNK_10db01430);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = param_3;
  uVar2 = 0x112ed6e90;
  FUN_1000285a8(0x112ed6e90,&UNK_10db01578);
  *(undefined8 *)(lVar1 + 0x90) = uVar2;
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  *(undefined8 *)(lVar1 + 0x78) = param_4;
  uVar2 = 0x112ed6e50;
  FUN_1000285a8(0x112ed6e50,&UNK_10db01538);
  *(undefined8 *)(lVar1 + 0xb8) = uVar2;
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  *(undefined8 *)(lVar1 + 0xa0) = param_5;
  uVar2 = 0x112f5cd18;
  FUN_1000285a8(0x112f5cd18,&UNK_10dbb7570);
  *(undefined8 *)(lVar1 + 0xe0) = uVar2;
  *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  *(undefined8 *)(lVar1 + 200) = param_6;
  uVar2 = 0x112f5cd10;
  FUN_1000285a8(0x112f5cd10,&UNK_10dbb75a0);
  *(undefined8 *)(lVar1 + 0x108) = uVar2;
  *(undefined8 *)(lVar1 + 0xe8) = uVar2;
  *(undefined8 *)(lVar1 + 0xf0) = param_7;
  uVar2 = 0x112ed6cb0;
  FUN_1000285a8(0x112ed6cb0,&UNK_10db013a0);
  *(undefined8 *)(lVar1 + 0x130) = uVar2;
  *(undefined8 *)(lVar1 + 0x110) = uVar2;
  *(undefined8 *)(lVar1 + 0x118) = param_8;
  uVar2 = 0x112ed6d80;
  FUN_1000285a8(0x112ed6d80,&UNK_10db06e30);
  *(undefined8 *)(lVar1 + 0x158) = uVar2;
  *(undefined8 *)(lVar1 + 0x138) = uVar2;
  *(undefined8 *)(lVar1 + 0x140) = param_9;
  uVar2 = 0x112ed6ed8;
  FUN_1000285a8(0x112ed6ed8,&UNK_10db015c0);
  *(undefined8 *)(lVar1 + 0x180) = uVar2;
  *(undefined8 *)(lVar1 + 0x160) = uVar2;
  *(undefined8 *)(lVar1 + 0x168) = param_10;
  uVar2 = 0x112ee4048;
  FUN_1000285a8(0x112ee4048,&UNK_10db0f0b0);
  *(undefined8 *)(lVar1 + 0x1a8) = uVar2;
  *(undefined8 *)(lVar1 + 0x188) = uVar2;
  *(undefined8 *)(lVar1 + 400) = param_11;
  uVar2 = 0x112ed6d40;
  FUN_1000285a8(0x112ed6d40,&UNK_10db01428);
  *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
  *(undefined8 *)(lVar1 + 0x1b0) = uVar2;
  *(undefined8 *)(lVar1 + 0x1b8) = param_12;
  uVar2 = 0x112ed6c58;
  FUN_1000285a8(0x112ed6c58,&UNK_10dbb7560);
  *(undefined8 *)(lVar1 + 0x1f8) = uVar2;
  *(undefined8 *)(lVar1 + 0x1d8) = uVar2;
  *(undefined8 *)(lVar1 + 0x1e0) = param_13;
  uVar2 = 0x112ed6dc0;
  FUN_1000285a8(0x112ed6dc0,&UNK_10db014a8);
  *(undefined8 *)(lVar1 + 0x200) = uVar2;
  *(undefined8 *)(lVar1 + 0x220) = uVar2;
  *(undefined8 *)(lVar1 + 0x208) = param_14;
  uVar2 = 0x112ed6ce8;
  FUN_1000285a8(0x112ed6ce8,&UNK_10dbb7550);
  *(undefined8 *)(lVar1 + 0x228) = uVar2;
  *(undefined8 *)(lVar1 + 0x248) = uVar2;
  *(undefined8 *)(lVar1 + 0x230) = param_15;
  uVar2 = 0x112ed6f88;
  FUN_1000285a8(0x112ed6f88,&UNK_10db01670);
  *(undefined8 *)(lVar1 + 0x250) = uVar2;
  *(undefined8 *)(lVar1 + 0x270) = uVar2;
  *(undefined8 *)(lVar1 + 600) = param_16;
  uVar2 = 0x112ed6be0;
  FUN_1000285a8(0x112ed6be0,&UNK_10db012d0);
  *(undefined8 *)(lVar1 + 0x278) = uVar2;
  *(undefined8 *)(lVar1 + 0x298) = uVar2;
  *(undefined8 *)(lVar1 + 0x280) = param_17;
  uVar2 = 0x112f5cd08;
  FUN_1000285a8(0x112f5cd08,&UNK_10dbf89f0);
  *(undefined8 *)(lVar1 + 0x2a0) = uVar2;
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
  puVar4 = &UNK_10336a2e0;
  FUN_1000823a8(&UNK_10336a2e0,param_18);
  *(undefined8 *)(lVar1 + 0x2c0) = uVar2;
  *(undefined **)(lVar1 + 0x2a8) = puVar4;
  uVar2 = 0x112ed6d58;
  FUN_1000285a8(0x112ed6d58,&UNK_10db01440);
  *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
  *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
  *(undefined8 *)(lVar1 + 0x2d0) = param_19;
  *(undefined8 *)(lVar1 + 0x2f0) = uVar6;
  *(undefined8 *)(lVar1 + 0x310) = uVar6;
  *(undefined8 **)(lVar1 + 0x2f8) = param_20;
  lVar5 = lVar1;
  FUN_1006c82b4();
  func_0x000107c61588(lVar1);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  uVar2 = 0x112f36640;
  FUN_1000285a8(0x112f36640,&UNK_10dbb6990);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),0x13,uVar2);
  FUN_1005c7a44(0);
  func_0x000107c610f8();
  FUN_100777c10();
  *param_1 = lVar5;
  return;
}



/* Entry: 100777b84; end: 100777c0f;  */

void FUN_100777b84(void)

{
  long unaff_x20;
  
  FUN_10077772c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 100777c10; end: 100777c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100777c10(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130826b0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100777c5c; end: 100777d0f;  */

void FUN_100777c5c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100777d10; end: 100777d83; -[SCMainCameraScopedLensCarouselFeatureServices initWithLensCarouselFeatureServices:] */

undefined1 * FUN_100777d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a530;
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



/* Entry: 100777d84; end: 100777d93; -[SCMainCameraScopedLensCarouselFeatureServices lensCarouselFeatureServices] */

undefined8 FUN_100777d84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100777d94; end: 100777efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100777d94(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ef40b8;
    uVar5 = 0;
    FUN_1000285a8(0x112ef40b8);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_100777e38;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_100777e38:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ef40b8;
    FUN_1000285a8(0x112ef40b8,&UNK_10db22c58);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6ad8(0);
      func_0x000107c610f8();
      FUN_100777efc(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000050,0x800000010f142080);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100777efc);
  (*pcVar1)();
}



/* Entry: 100777efc; end: 100777f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100777efc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130355b8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100777f48; end: 100777f4f; -[SCLensContentServices lensDownloadStatusProvider] */

undefined8 FUN_100777f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100777f50; end: 100777fab;  */

void FUN_100777f50(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2670);
  return;
}



/* Entry: 100777fac; end: 1007796a3;  */

void FUN_100777fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 in_stack_000001f0;
  
  FUN_1000285a8(0x112eef830,&UNK_10db202b0);
  puVar1 = &UNK_11059b110;
  func_0x000107c613fc(&UNK_11059b110,0x240,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_58;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_15;
  *(undefined8 *)(puVar1 + 0x48) = param_20;
  *(undefined8 *)(puVar1 + 0x50) = param_25;
  *(undefined8 *)(puVar1 + 0x58) = param_24;
  *(undefined8 *)(puVar1 + 0x60) = param_26;
  *(undefined8 *)(puVar1 + 0x68) = param_28;
  *(undefined8 *)(puVar1 + 0x70) = param_30;
  *(undefined8 *)(puVar1 + 0x78) = param_31;
  *(undefined8 *)(puVar1 + 0x80) = param_46;
  *(undefined8 *)(puVar1 + 0x88) = param_29;
  *(undefined8 *)(puVar1 + 0x90) = param_9;
  *(undefined8 *)(puVar1 + 0x98) = param_11;
  *(undefined8 *)(puVar1 + 0xa0) = param_12;
  *(undefined8 *)(puVar1 + 0xa8) = param_13;
  *(undefined8 *)(puVar1 + 0xb0) = param_35;
  *(undefined8 *)(puVar1 + 0xb8) = param_32;
  *(undefined8 *)(puVar1 + 0xc0) = param_37;
  *(undefined8 *)(puVar1 + 200) = param_38;
  *(undefined8 *)(puVar1 + 0xd0) = param_67;
  *(undefined8 *)(puVar1 + 0xd8) = param_39;
  *(undefined8 *)(puVar1 + 0xe0) = param_40;
  *(undefined8 *)(puVar1 + 0xe8) = param_41;
  *(undefined8 *)(puVar1 + 0xf0) = param_42;
  *(undefined8 *)(puVar1 + 0xf8) = param_43;
  *(undefined8 *)(puVar1 + 0x100) = param_8;
  *(undefined8 *)(puVar1 + 0x108) = param_44;
  *(undefined8 *)(puVar1 + 0x110) = param_45;
  *(undefined8 *)(puVar1 + 0x118) = param_27;
  *(undefined8 *)(puVar1 + 0x120) = param_21;
  *(undefined8 *)(puVar1 + 0x128) = param_33;
  *(undefined8 *)(puVar1 + 0x130) = param_34;
  *(undefined8 *)(puVar1 + 0x138) = param_19;
  *(undefined8 *)(puVar1 + 0x140) = param_47;
  *(undefined8 *)(puVar1 + 0x148) = param_17;
  *(undefined8 *)(puVar1 + 0x150) = param_18;
  *(undefined8 *)(puVar1 + 0x158) = param_48;
  *(undefined8 *)(puVar1 + 0x160) = param_49;
  *(undefined8 *)(puVar1 + 0x168) = param_51;
  *(undefined8 *)(puVar1 + 0x170) = param_50;
  *(undefined8 *)(puVar1 + 0x178) = param_14;
  *(undefined8 *)(puVar1 + 0x180) = param_52;
  *(undefined8 *)(puVar1 + 0x188) = param_16;
  *(undefined8 *)(puVar1 + 400) = param_53;
  *(undefined8 *)(puVar1 + 0x198) = param_54;
  *(undefined8 *)(puVar1 + 0x1a0) = param_55;
  *(undefined8 *)(puVar1 + 0x1a8) = param_56;
  *(undefined8 *)(puVar1 + 0x1b0) = param_70;
  *(undefined8 *)(puVar1 + 0x1b8) = param_68;
  *(undefined8 *)(puVar1 + 0x1c0) = param_69;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_59;
  *(undefined8 *)(puVar1 + 0x1d8) = param_60;
  *(undefined8 *)(puVar1 + 0x1e0) = param_4;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_36;
  *(undefined8 *)(puVar1 + 0x200) = param_3;
  *(undefined8 *)(puVar1 + 0x208) = param_10;
  *(undefined8 *)(puVar1 + 0x210) = param_63;
  *(undefined8 *)(puVar1 + 0x218) = param_65;
  *(undefined8 *)(puVar1 + 0x220) = param_66;
  *(undefined8 *)(puVar1 + 0x228) = param_64;
  *(undefined8 *)(puVar1 + 0x230) = param_71;
  *(undefined8 *)(puVar1 + 0x238) = in_stack_000001f0;
  func_0x000107c6157c();
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_000001f0);
  FUN_1000823a8(0x100778554,puVar1);
  return;
}



/* Entry: 1007796a4; end: 1007796b3; -[_TtC39ConditionalCameraServicesImplementation39MainCameraCameraUIServiceImplementation cameraUIScope] */

void FUN_1007796a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1007796b4; end: 10077981b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007796b4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  FUN_100083b20(alStack_50);
  lVar6 = alStack_50[0];
  lVar2 = alStack_50[0];
  func_0x000107c4ddec();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  lVar6 = *(long *)(lVar2 + _DAT_113082650);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar2);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = 0x112ed6da0;
    uVar5 = 0;
    FUN_1000285a8(0x112ed6da0);
    FUN_1000a7158();
    if ((uVar5 & 1) != 0) {
      FUN_1000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,alStack_50);
      goto LAB_100779758;
    }
  }
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
LAB_100779758:
  func_0x000107c6142c(lVar6);
  if (alStack_50[3] == 0) {
    FUN_10006e7f4(alStack_50);
  }
  else {
    uVar4 = 0x112ed6da0;
    FUN_1000285a8(0x112ed6da0,&UNK_10db01488);
    puVar3 = &uStack_58;
    func_0x000107c6147c(puVar3,alStack_50,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_100083b20(alStack_50);
      lVar6 = alStack_50[0];
      uVar4 = 0;
      FUN_1005b6b30(0);
      func_0x000107c610f8();
      FUN_10077981c(lVar6,uVar4);
      func_0x000107c61574(uStack_58);
      *param_1 = lVar6;
      return;
    }
  }
  func_0x0001048d9980(0xd000000000000039,0x800000010f141e00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10077981c);
  (*pcVar1)();
}



/* Entry: 10077981c; end: 100779867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077981c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113038630) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100779868; end: 10077986f;  */

void FUN_100779868(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100779870; end: 1007798c3;  */

void FUN_100779870(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007798c4; end: 1007798cf;  */

void FUN_1007798c4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002c9d24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a93f8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007798d0; end: 100779b7f;  */

void FUN_1007798d0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002c9d24();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a93f8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1df80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100779b80; end: 100779b87;  */

void FUN_100779b80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100779b88; end: 100779bdb;  */

void FUN_100779b88(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100779bdc; end: 100779beb;  */

void FUN_100779bdc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
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
  FUN_1002c9bf4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  FUN_1000285a8(0x112e26508,&UNK_10da0da28);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar9 = uStack_90;
  func_0x000107c6157c(uStack_90);
  FUN_10025a71c();
  puVar6 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x18) = puVar6;
  puVar7 = PTR_PTR_1126a93c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar9 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f00d5e0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar9 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f00dc60);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar6 = puVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_90);
  *(undefined **)(lVar1 + 0x40) = puVar6;
  *param_1 = lVar1;
  return;
}



/* Entry: 100779bec; end: 100779fe7;  */

void FUN_100779bec(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_1002c9bf4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  FUN_1000285a8(0x112e26508,&UNK_10da0da28);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar8 = uStack_90;
  func_0x000107c6157c(uStack_90);
  FUN_10025a71c();
  puVar5 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar6 = PTR_PTR_1126a93c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  uVar8 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f00d5e0);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar8 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f00dc60);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar5 = puVar6;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  *(undefined **)(param_2 + 0x40) = puVar5;
  *param_1 = param_2;
  return;
}



/* Entry: 100779fe8; end: 100779fef;  */

void FUN_100779fe8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100779ff0; end: 10077a043;  */

void FUN_100779ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077a044; end: 10077acbf;  */

void FUN_10077a044(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_1002c939c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  puVar1 = PTR_PTR_1126a92e0;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar18 = uStack_f8;
  func_0x000107c61174(uStack_f8);
  uVar19 = uStack_100;
  func_0x000107c61174();
  uVar20 = uStack_108;
  func_0x000107c61174();
  uVar21 = uStack_110;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar22 = auStack_70[0];
  func_0x000107c61174();
  uVar25 = 0xd000000000000016;
  uVar23 = uVar25;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar23 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar23);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f00d330);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d070);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d4a0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar25);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef28e70);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f00d2b0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f00d4c0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d4f0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar18);
  func_0x000107c61174();
  uVar23 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef28f00);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar19);
  func_0x000107c61174();
  uVar23 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f00d400);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d510);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d530);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  uVar23 = uVar24;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  *(undefined8 *)(param_2 + 0xb8) = uVar23;
  *param_1 = param_2;
  return;
}



/* Entry: 10077acc0; end: 10077ad0b;  */

void FUN_10077acc0(void)

{
  long unaff_x20;
  
  FUN_10077a044(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 10077ad0c; end: 10077ad13;  */

void FUN_10077ad0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077ad14; end: 10077ad67;  */

void FUN_10077ad14(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077ad68; end: 10077b2cf;  */

void FUN_10077ad68(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uStack_a8;
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
  FUN_100083b20(&uStack_a8);
  FUN_1002c663c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126a9448;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d840);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00d820);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f00d870);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00d7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f00dd30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f00dd60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x58) = puVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 10077b2d0; end: 10077b303;  */

void FUN_10077b2d0(void)

{
  long unaff_x20;
  
  FUN_10077ad68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10077b304; end: 10077b30b;  */

void FUN_10077b304(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077b30c; end: 10077b35f;  */

void FUN_10077b30c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077b360; end: 10077b36b;  */

void FUN_10077b360(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b6f08();
  func_0x000107c613fc();
  FUN_10077b4ac(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10077b36c; end: 10077b3ff;  */

void FUN_10077b36c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b6f08();
  func_0x000107c613fc();
  FUN_10077b4ac(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10077b400; end: 10077b407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077b400(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1002b6de4();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_11302c628) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10077b408; end: 10077b473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077b408(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002b6de4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11302c628) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10077b474; end: 10077b4ab;  */

void FUN_10077b474(undefined8 param_1)

{
  if (lRam0000000112e2fe30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e692420);
  return;
}



/* Entry: 10077b4ac; end: 10077b587;  */

void FUN_10077b4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10077b474(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10077b5cc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010077b600();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10077b588; end: 10077b5cb;  */

void FUN_10077b588(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 10077b5cc; end: 10077b71f;  */

void FUN_10077b5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10077b720; end: 10077b74b;  */

void FUN_10077b720(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10077b74c; end: 10077b753; -[SCMemoriesPrivateKeyServices keyService] */

undefined8 FUN_10077b74c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10077b754; end: 10077b77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10077b754(void)

{
  FUN_100083b20();
  return;
}



/* Entry: 10077b77c; end: 10077b79b;  */

void FUN_10077b77c(void)

{
  func_0x000107c61168(&PTR_PTR_112e2ff30);
  return;
}



/* Entry: 10077b79c; end: 10077b7eb;  */

void FUN_10077b79c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  FUN_10077b77c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11048a138;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10077b7ec; end: 10077b82f;  */

long FUN_10077b7ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10077b830; end: 10077b847;  */

undefined8 * FUN_10077b830(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10077b848; end: 10077b8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10077b848(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4be0) = param_1;
  func_0x000107c6157c();
  uVar1 = 0x112ff4bf0;
  FUN_1000285a8(0x112ff4bf0,&UNK_10dc619c0);
  puVar2 = &UNK_103bcbddc;
  FUN_1000cb480(&UNK_103bcbddc,0,uVar1);
  FUN_1003a5b88();
  func_0x000107c61574();
  *(undefined **)(unaff_x20 + _DAT_112ff4be8) = puVar2;
  FUN_1002b6f94();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 10077b8fc; end: 10077b92f;  */

void FUN_10077b8fc(void)

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


