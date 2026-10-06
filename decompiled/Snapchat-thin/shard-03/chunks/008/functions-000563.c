/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102dbd808; end: 102dbd96b;  */

undefined8 * FUN_102dbd808(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 102dbd96c; end: 102dbda97;  */

int FUN_102dbd96c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff8 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffff9;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (7 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -6;
  }
  return iVar1;
}



/* Entry: 102dbda98; end: 102dbda9b; -[_TtC29SCImpalaSnapDocPlaybackPlugin30SCImpalaSnapDocOperaDataSource operaMediaBundleProvider] */

void FUN_102dbda98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102dbda9c; end: 102dbdaa7; -[_TtC29SCImpalaSnapDocPlaybackPlugin27ImpalaSnapDocPlaybackPlugin extraPropertiesProvider] */

void FUN_102dbda9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102dbdaa8; end: 102dbdaeb;  */

void FUN_102dbdaa8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dbdaec; end: 102dbdd9b;  */

long FUN_102dbdaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  *(undefined8 *)(unaff_x20 + 0x80) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_14;
  *(undefined8 *)(unaff_x20 + 0x90) = param_15;
  *(undefined8 *)(unaff_x20 + 0x98) = param_16;
  func_0x0001000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_17);
  uVar1 = param_17;
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_18);
  uVar1 = param_18;
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001008f8ec8(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001008f8ee8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,puVar2,puVar3);
  func_0x000107c61574(param_17);
  func_0x000107c61574(param_18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102dbdd9c; end: 102dbde5f;  */

void FUN_102dbdd9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102dbde60; end: 102dbde93;  */

undefined1  [16] FUN_102dbde60(void)

{
  return ZEXT816(0x1105d1128);
}



/* Entry: 102dbde94; end: 102dbdebf;  */

undefined8 FUN_102dbde94(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102dbdec0; end: 102dbdfd7;  */

long FUN_102dbdec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  func_0x0001008f9a98(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x0001008f9ab8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102dbdfd8; end: 102dbe04b;  */

void FUN_102dbdfd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102dbe04c; end: 102dbe07f;  */

undefined1  [16] FUN_102dbe04c(void)

{
  return ZEXT816(0x1105d11d0);
}



/* Entry: 102dbe080; end: 102dbe0ab;  */

undefined8 FUN_102dbe080(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102dbe0ac; end: 102dbe62f;  */

void FUN_102dbe0ac(long *param_1,long param_2)

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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x00010032e08c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126ac500;
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
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar11 = uVar12;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(param_2 + 0x58) = uVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 102dbe630; end: 102dbe663;  */

void FUN_102dbe630(void)

{
  long unaff_x20;
  
  FUN_102dbe0ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102dbe664; end: 102dbeb43;  */

long FUN_102dbe664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  puVar1 = PTR_PTR_1126ac500;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  return unaff_x20;
}



/* Entry: 102dbeb44; end: 102dbebc7;  */

void FUN_102dbeb44(void)

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
  return;
}



/* Entry: 102dbebc8; end: 102dbec1b;  */

void FUN_102dbebc8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102dbec1c; end: 102dbec23;  */

void FUN_102dbec1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102dbec24; end: 102dbec73;  */

undefined8 FUN_102dbec24(void)

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



/* Entry: 102dbec74; end: 102dbecb7;  */

undefined1  [16] FUN_102dbec74(void)

{
  return ZEXT816(0x1105d1278);
}



/* Entry: 102dbecb8; end: 102dbecdf;  */

void FUN_102dbecb8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102dbece0; end: 102dbece7;  */

undefined8 FUN_102dbece0(void)

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



/* Entry: 102dbece8; end: 102dbef97;  */

void FUN_102dbece8(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010032e95c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126ac508;
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
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
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



/* Entry: 102dbef98; end: 102dbefa3;  */

void FUN_102dbef98(long *param_1)

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
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x00010032e95c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126ac508;
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
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
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



/* Entry: 102dbefa4; end: 102dbf007;  */

undefined8
FUN_102dbefa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102dbf008(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102dbf008; end: 102dbf267;  */

void FUN_102dbf008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ac508;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 102dbf268; end: 102dbf2ab;  */

void FUN_102dbf268(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dbf2ac; end: 102dbf2ff;  */

void FUN_102dbf2ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102dbf300; end: 102dbf307;  */

void FUN_102dbf300(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102dbf308; end: 102dbf357;  */

undefined8 FUN_102dbf308(void)

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



/* Entry: 102dbf358; end: 102dbf39b;  */

undefined1  [16] FUN_102dbf358(void)

{
  return ZEXT816(0x1105d1340);
}



/* Entry: 102dbf39c; end: 102dbf3c3;  */

void FUN_102dbf39c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102dbf3c4; end: 102dbf3cb;  */

undefined8 FUN_102dbf3c4(void)

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



/* Entry: 102dbf3cc; end: 102dbf43f;  */

long FUN_102dbf3cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100934b30();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000100934bd4(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102dbf440; end: 102dbf46b;  */

void FUN_102dbf440(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dbf46c; end: 102dbf4b3;  */

undefined8 FUN_102dbf46c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000102ddcaf4();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 102dbf4b4; end: 102dbf4ef;  */

undefined1  [16] FUN_102dbf4b4(void)

{
  return ZEXT816(0x1105d1408);
}



/* Entry: 102dbf4f0; end: 102dbf53f;  */

void FUN_102dbf4f0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f183d8 != 0) {
    return;
  }
  puVar1 = &UNK_1105d1500;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f183d8 = param_1;
  return;
}



/* Entry: 102dbf540; end: 102dbf56f;  */

bool FUN_102dbf540(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102dbf570; end: 102dbfbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102dbf570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uStack_e8 = param_18;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar2 = param_5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
  }
  else {
    uVar3 = param_3;
    func_0x000107c5b478();
    func_0x000107c61180();
    uVar4 = param_3;
    func_0x000107c5b4b4();
    func_0x000107c61180();
    uVar5 = param_3;
    func_0x000107c5b4bc();
    func_0x000107c61180();
    func_0x0001000285a8(0x112da1588,&UNK_10db4ed90);
    uVar6 = param_14;
    func_0x000107c4141c();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c41424();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    uVar6 = uVar7;
    func_0x0001000b637c();
    func_0x000107c61170(uVar7);
    puVar8 = &UNK_1105d1550;
    func_0x000107c613fc(&UNK_1105d1550,0x18,7);
    *(undefined8 *)(puVar8 + 0x10) = param_11;
    puVar9 = &UNK_1105d1578;
    func_0x000107c613fc(&UNK_1105d1578,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = param_11;
    puVar10 = PTR_PTR_1126aeaf8;
    func_0x000107c610f8();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_102dbfc64;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100e1779c;
    puStack_90 = &UNK_1105d1590;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar11);
    pcStack_b8 = FUN_102dbfd40;
    puStack_d8 = puVar1;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_100e17304;
    puStack_c0 = &UNK_1105d15b8;
    ppuVar12 = &puStack_d8;
    puStack_b0 = puVar9;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c47be0();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61574(puStack_b0);
    func_0x000107c61574(puStack_80);
    uVar15 = *(undefined8 *)(param_13 + _DAT_113083868);
    lVar13 = 0;
    func_0x0001008f95ac();
    func_0x000107c613fc();
    puVar8 = PTR_PTR_1126ac510;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c453e4();
    *(undefined **)(lVar13 + 0x10) = puVar8;
    *(undefined1 *)(lVar13 + 0x18) = 0;
    *(undefined8 *)(lVar13 + 0x20) = 0x72617473646c6f63;
    *(undefined8 *)(lVar13 + 0x28) = 0xe900000000000074;
    func_0x0001000285a8(0x112d39420,&UNK_10d979900);
    uVar7 = uVar15;
    func_0x0001000bda74();
    *(undefined8 *)(lVar13 + 0x30) = uVar7;
    func_0x0001008f9640(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar7 = uVar15;
    func_0x0001008f9660();
    uVar16 = *(undefined8 *)(param_8 + _DAT_113021f38);
    puVar8 = &UNK_1105d15f0;
    func_0x000107c613fc(&UNK_1105d15f0,0xb8,7);
    *(long *)(puVar8 + 0x10) = lVar2;
    *(long *)(puVar8 + 0x18) = unaff_x20;
    *(undefined8 *)(puVar8 + 0x20) = uVar3;
    *(undefined8 *)(puVar8 + 0x28) = uVar4;
    *(undefined8 *)(puVar8 + 0x30) = uVar5;
    *(undefined8 *)(puVar8 + 0x38) = param_4;
    *(undefined8 *)(puVar8 + 0x40) = param_6;
    *(undefined8 *)(puVar8 + 0x48) = param_7;
    *(undefined8 *)(puVar8 + 0x50) = uVar16;
    *(undefined8 *)(puVar8 + 0x58) = param_9;
    *(undefined8 *)(puVar8 + 0x60) = param_11;
    *(undefined8 *)(puVar8 + 0x68) = param_17;
    *(undefined8 *)(puVar8 + 0x70) = param_16;
    *(undefined8 *)(puVar8 + 0x78) = param_18;
    *(undefined **)(puVar8 + 0x80) = puVar10;
    *(undefined8 *)(puVar8 + 0x88) = param_12;
    *(undefined8 *)(puVar8 + 0x90) = uVar6;
    *(long *)(puVar8 + 0x98) = lVar13;
    *(undefined8 *)(puVar8 + 0xa0) = uVar7;
    *(undefined8 *)(puVar8 + 0xa8) = param_10;
    *(undefined8 *)(puVar8 + 0xb0) = param_15;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(lVar2);
    func_0x000107c6157c(unaff_x20);
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar5);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_17);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(lVar13);
    func_0x000107c61174(uVar7);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar14 = 8;
    func_0x0001001ca524(8,2,0x34,4,0,0,&UNK_10db4eda8,puVar8,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar15);
    func_0x000107c61574(lVar13);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar16);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(uVar14);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    uStack_e8 = param_18;
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(uStack_e8);
  return unaff_x20;
}



/* Entry: 102dbfbf0; end: 102dbfc63;  */

/* WARNING: Possible PIC construction at 0x000102dbfc24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dbfc28) */
/* WARNING: Removing unreachable block (ram,0x000102dbfc54) */
/* WARNING: Removing unreachable block (ram,0x000102dbfc2c) */

void FUN_102dbfbf0(undefined8 param_1)

{
  func_0x000104513428();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102dbfc64; end: 102dbfc6b;  */

/* WARNING: Possible PIC construction at 0x000102dbfc24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dbfc28) */
/* WARNING: Removing unreachable block (ram,0x000102dbfc54) */
/* WARNING: Removing unreachable block (ram,0x000102dbfc2c) */

void FUN_102dbfc64(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000104513428(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102dbfc6c; end: 102dbfd3f;  */

void FUN_102dbfc6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  lVar2 = param_1;
  func_0x000104513428();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    if (param_1 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1105d1710;
      lStack_40 = param_1;
      uStack_38 = param_2;
      func_0x000107c60bc4(&puStack_60);
      uVar1 = uStack_38;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c420a8(lVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102dbfd40; end: 102dbfd9b;  */

void FUN_102dbfd40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  lVar2 = param_1;
  func_0x000104513428(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    if (param_1 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1105d1710;
      lStack_40 = param_1;
      uStack_38 = param_2;
      func_0x000107c60bc4(&puStack_60);
      uVar1 = uStack_38;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c420a8(lVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102dbfd9c; end: 102dc01db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dbfd9c(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long *plVar30;
  long unaff_x22;
  undefined8 uVar31;
  
  iVar15 = (int)*(undefined8 *)(unaff_x22 + 0x20);
  func_0x000108c079e8();
  if (iVar15 != 0) {
    uVar29 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar22 = *(long *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar26 = *(long *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar7 = *(long *)(unaff_x22 + 0x28);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c4d80c();
    func_0x000107c61180();
    func_0x000107c51d00();
    func_0x000107c61180();
    func_0x000107c4fa2c();
    func_0x000107c61180();
    puVar19 = &UNK_1105d16f8;
    func_0x000107c613fc(&UNK_1105d16f8,0x18,7);
    *(undefined8 *)(puVar19 + 0x10) = uVar23;
    uVar31 = *(undefined8 *)(lVar26 + _DAT_113022080);
    func_0x000107c61174(uVar23);
    func_0x000107c4ec80();
    func_0x000107c61180();
    uVar28 = *(undefined8 *)(lVar22 + _DAT_112f29250);
    lVar21 = 0;
    FUN_102dc9874();
    lVar22 = lVar21;
    func_0x000107c610f8();
    lVar26 = _DAT_112f185a0;
    uVar23 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar22 + lVar26) = uVar23;
    *(undefined8 *)(lVar22 + _DAT_112f185a8) = 0;
    lVar26 = _DAT_112f185b0;
    lVar24 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar24 + -8) + 0x38))(lVar22 + lVar26,1,1,lVar24);
    puVar1 = (undefined4 *)(lVar22 + _DAT_112f185b8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(lVar22 + _DAT_112f185c0) = 0;
    puVar2 = (undefined8 *)(lVar22 + _DAT_112f185c8);
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined1 *)(lVar22 + _DAT_112f185d0) = 0;
    *(undefined1 *)(lVar22 + _DAT_112f185d8) = 0;
    *(undefined1 *)(lVar22 + _DAT_112f185e0) = 0;
    lVar26 = _DAT_112f185e8;
    puVar25 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar22 + lVar26) = puVar25;
    *(undefined1 *)(lVar22 + _DAT_112f185f0) = 0;
    *(undefined **)(lVar22 + _DAT_112f185f8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    *(undefined8 *)(lVar22 + _DAT_112f18600) = uVar14;
    *(undefined8 *)(lVar22 + _DAT_112f18608) = uVar6;
    *(undefined8 *)(lVar22 + _DAT_112f18610) = uVar13;
    *(undefined8 *)(lVar22 + _DAT_112f18618) = uVar16;
    *(undefined8 *)(lVar22 + _DAT_112f18620) = uVar17;
    *(undefined8 *)(lVar22 + _DAT_112f18628) = uVar18;
    puVar2 = (undefined8 *)(lVar22 + _DAT_112f18630);
    *puVar2 = FUN_102dc057c;
    puVar2[1] = puVar19;
    *(undefined8 *)(lVar22 + _DAT_112f18638) = uVar31;
    *(undefined8 *)(lVar22 + _DAT_112f18640) = uVar12;
    *(undefined8 *)(lVar22 + _DAT_112f18648) = uVar5;
    *(undefined8 *)(lVar22 + _DAT_112f18650) = uVar11;
    *(undefined8 *)(lVar22 + _DAT_112f18658) = uVar4;
    *(undefined8 *)(lVar22 + _DAT_112f18660) = uVar10;
    *(undefined8 *)(lVar22 + _DAT_112f18668) = uVar20;
    *(undefined8 *)(lVar22 + _DAT_112f18670) = uVar27;
    *(undefined8 *)(lVar22 + _DAT_112f18678) = uVar9;
    puVar2 = (undefined8 *)(lVar22 + _DAT_112f18680);
    *puVar2 = uVar3;
    puVar2[1] = &PTR_DAT_1105d1f78;
    *(undefined8 *)(lVar22 + _DAT_112f18688) = uVar8;
    *(undefined8 *)(lVar22 + _DAT_112f18690) = uVar29;
    *(undefined8 *)(lVar22 + _DAT_112f18698) = uVar28;
    plVar30 = (long *)(unaff_x22 + 0x10);
    *plVar30 = lVar22;
    *(long *)(unaff_x22 + 0x18) = lVar21;
    puVar19 = PTR_s_init_1125d9248;
    func_0x000107c61174(uVar31);
    func_0x000107c61174(uVar12);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar11);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar10);
    func_0x000107c615f0(uVar27);
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uVar3);
    func_0x000107c61174(uVar8);
    func_0x000107c61174(uVar29);
    func_0x000107c6157c(uVar28);
    func_0x000107c61174(uVar14);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar13);
    func_0x000107c61154(plVar30,puVar19);
    uVar29 = *(undefined8 *)(lVar7 + 0x10);
    *(long **)(lVar7 + 0x10) = plVar30;
    func_0x000107c61170(uVar29);
    lVar26 = *(long *)(lVar7 + 0x10);
    if (lVar26 != 0) {
      func_0x000107c61174();
      FUN_102dc3acc();
      func_0x000107c61170(lVar26);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102dc01d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102dc01dc; end: 102dc0247;  */

void FUN_102dc01dc(long param_1)

{
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000103e6e8ec();
    func_0x000107c610f8();
    func_0x000103e6e7ec(0,FUN_102dc0248,0);
  }
  else {
    func_0x000107c44240();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 102dc0248; end: 102dc024b;  */

void FUN_102dc0248(void)

{
  return;
}



/* Entry: 102dc024c; end: 102dc026f;  */

void FUN_102dc024c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dc0270; end: 102dc0283;  */

void FUN_102dc0270(void)

{
  return;
}



/* Entry: 102dc0284; end: 102dc037f;  */

void FUN_102dc0284(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar20 = *(long *)(unaff_x20 + 0x50);
  lVar17 = *(long *)(unaff_x20 + 0x48);
  lVar14 = *(long *)(unaff_x20 + 0x60);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  lVar21 = *(long *)(unaff_x20 + 0x70);
  lVar18 = *(long *)(unaff_x20 + 0x68);
  lVar15 = *(long *)(unaff_x20 + 0x80);
  lVar12 = *(long *)(unaff_x20 + 0x78);
  lVar22 = *(long *)(unaff_x20 + 0x90);
  lVar19 = *(long *)(unaff_x20 + 0x88);
  lVar16 = *(long *)(unaff_x20 + 0xa0);
  lVar13 = *(long *)(unaff_x20 + 0x98);
  lVar4 = *(long *)(unaff_x20 + 0xa8);
  lVar8 = *(long *)(unaff_x20 + 0xb0);
  plVar9 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x102dc05a0;
  plVar9[0x17] = lVar4;
  plVar9[0x18] = lVar8;
  plVar9[0x16] = lVar16;
  plVar9[0x15] = lVar13;
  plVar9[0x14] = lVar22;
  plVar9[0x13] = lVar19;
  plVar9[0x12] = lVar15;
  plVar9[0x11] = lVar12;
  plVar9[0x10] = lVar21;
  plVar9[0xf] = lVar18;
  plVar9[0xe] = lVar14;
  plVar9[0xd] = lVar11;
  plVar9[0xc] = lVar20;
  plVar9[0xb] = lVar17;
  plVar9[9] = lVar7;
  plVar9[10] = lVar10;
  plVar9[7] = lVar6;
  plVar9[8] = lVar3;
  plVar9[5] = lVar5;
  plVar9[6] = lVar2;
  plVar9[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dbfd9c,0,0);
  return;
}



/* Entry: 102dc0380; end: 102dc0443;  */

void FUN_102dc0380(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dc0444; end: 102dc053f;  */

void FUN_102dc0444(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar20 = *(long *)(unaff_x20 + 0x50);
  lVar17 = *(long *)(unaff_x20 + 0x48);
  lVar14 = *(long *)(unaff_x20 + 0x60);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  lVar21 = *(long *)(unaff_x20 + 0x70);
  lVar18 = *(long *)(unaff_x20 + 0x68);
  lVar15 = *(long *)(unaff_x20 + 0x80);
  lVar12 = *(long *)(unaff_x20 + 0x78);
  lVar22 = *(long *)(unaff_x20 + 0x90);
  lVar19 = *(long *)(unaff_x20 + 0x88);
  lVar16 = *(long *)(unaff_x20 + 0xa0);
  lVar13 = *(long *)(unaff_x20 + 0x98);
  lVar4 = *(long *)(unaff_x20 + 0xa8);
  lVar8 = *(long *)(unaff_x20 + 0xb0);
  plVar9 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102dc0540;
  plVar9[0x17] = lVar4;
  plVar9[0x18] = lVar8;
  plVar9[0x16] = lVar16;
  plVar9[0x15] = lVar13;
  plVar9[0x14] = lVar22;
  plVar9[0x13] = lVar19;
  plVar9[0x12] = lVar15;
  plVar9[0x11] = lVar12;
  plVar9[0x10] = lVar21;
  plVar9[0xf] = lVar18;
  plVar9[0xe] = lVar14;
  plVar9[0xd] = lVar11;
  plVar9[0xc] = lVar20;
  plVar9[0xb] = lVar17;
  plVar9[9] = lVar7;
  plVar9[10] = lVar10;
  plVar9[7] = lVar6;
  plVar9[8] = lVar3;
  plVar9[5] = lVar5;
  plVar9[6] = lVar2;
  plVar9[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dbfd9c,0,0);
  return;
}



/* Entry: 102dc0540; end: 102dc057b;  */

void FUN_102dc0540(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dc0578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dc057c; end: 102dc05a7;  */

void FUN_102dc057c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000103e6e8ec();
    func_0x000107c610f8();
    func_0x000103e6e7ec(0,FUN_102dc0248,0);
  }
  else {
    func_0x000107c44240();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102dc05a8; end: 102dc0817;  */

/* WARNING: Possible PIC construction at 0x000102dc070c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc076c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc07e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc0770) */
/* WARNING: Removing unreachable block (ram,0x000102dc0710) */
/* WARNING: Removing unreachable block (ram,0x000102dc07e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc05a8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f184a0);
  func_0x000107c5c42c();
  func_0x000107c61180();
  lVar5 = _DAT_112f18488;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f184a8);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)0x0;
      puVar7 = (undefined *)puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      puVar7 = (undefined *)puVar1[1];
      func_0x000107c6157c(puVar7);
      (*pcVar6)();
    }
    if (pcVar6 == (code *)0x0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f18488) != 0) {
      func_0x000107c498f8();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
    }
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    func_0x000107c61170(uVar3);
    lVar5 = unaff_x20 + _DAT_112f184b0;
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar5 + 8);
      lVar5 = lVar4;
      func_0x000107c614f0();
      (**(code **)(lVar8 + 0x20))(param_1,lVar5,lVar8);
      func_0x000107c615e8(lVar4);
    }
    if (*(long *)(unaff_x20 + _DAT_112f18490) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(unaff_x20 + _DAT_112f18498) != 0) {
      func_0x000107c521e8();
    }
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1105d1770;
    func_0x000107c613fc(&UNK_1105d1770,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar2;
    uStack_60 = 0x102dc1368;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105d1788;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c61174(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 102dc0818; end: 102dc090f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc0818(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f184a0);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c4ff34(uVar2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f18490);
    *(undefined8 *)(lVar1 + _DAT_112f18490) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f18498);
    *(undefined8 *)(param_2 + _DAT_112f18498) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102dc0910; end: 102dc0a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc0910(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  code *pcVar5;
  
  lVar1 = _DAT_112f18520;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f184a0);
  func_0x000107c5a378(*(undefined8 *)(lVar4 + _DAT_112f18520),param_2,0);
  lVar2 = _DAT_112f18518;
  func_0x000107c52124(*(undefined8 *)(lVar4 + lVar1));
  func_0x000107c5ba54(*(undefined8 *)(lVar4 + lVar2));
  lVar2 = unaff_x20 + _DAT_112f184b0;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    puVar3 = &UNK_1105d1810;
    func_0x000107c613fc(&UNK_1105d1810,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61174();
    (*pcVar5)(0x102dc12e0,puVar3,lVar2,lVar4);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  return;
}



/* Entry: 102dc0a04; end: 102dc0ad3;  */

void FUN_102dc0a04(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "didTapAddButton()";
  func_0x0001000c10c0("didTapAddButton()");
  func_0x000107c61180();
  puVar2 = &UNK_1105d17c0;
  func_0x000107c613fc(&UNK_1105d17c0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  uStack_40 = 0x102dc12e8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d1828;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102dc0ad4; end: 102dc0b2b;  */

void FUN_102dc0ad4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102dc05a8(2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102dc0b2c; end: 102dc0b3b; -[_TtC27FriendingInteractivePopover48FriendingInteractivePopoverNotificationPresenter containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc0b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f184a0));
  return;
}



/* Entry: 102dc0b3c; end: 102dc1077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc0b3c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long unaff_x20;
  double dVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar13 = *(long *)(unaff_x20 + _DAT_112f184a0);
  func_0x000107c3d89c(param_2,param_3,lVar13);
  lVar3 = lVar13;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c5cbe4(param_2);
  func_0x000107c61180();
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c517d4();
  lVar4 = lVar3;
  func_0x000107c40284(param_1 + 16.0);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar5);
  lVar3 = _DAT_112f18490;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f18490);
  *(long *)(unaff_x20 + _DAT_112f18490) = lVar4;
  func_0x000107c61170(uVar5);
  lVar4 = lVar13;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c5cbe4(param_2);
  func_0x000107c61180();
  lVar6 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f18498);
  *(long *)(unaff_x20 + _DAT_112f18498) = lVar6;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  if (lVar6 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar8 = puVar7;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar8 + 0x18) = 9;
    *(undefined8 *)(puVar8 + 0x10) = 4;
    lVar4 = lVar13;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar5 = param_2;
    func_0x000107c4acb0(param_2);
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    *(long *)(puVar8 + 0x20) = lVar9;
    lVar4 = lVar13;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    uVar5 = param_2;
    func_0x000107c5ce8c(param_2);
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    *(long *)(puVar8 + 0x28) = lVar9;
    lVar4 = lVar13;
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x000107c402a0(0);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    *(long *)(puVar8 + 0x30) = lVar9;
    *(long *)(puVar8 + 0x38) = lVar6;
    uVar5 = 0;
    func_0x000100847984(0);
    func_0x000107c61174(lVar6);
    puVar10 = puVar8;
    func_0x000107c5fc48(puVar8,uVar5);
    func_0x000107c61574(puVar8);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c4abfc(param_2);
    func_0x000107c521e8(lVar6);
    if (*(long *)(unaff_x20 + lVar3) != 0) {
      func_0x000107c521e8();
    }
    puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1105d1888;
    func_0x000107c613fc(&UNK_1105d1888,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = param_2;
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x102dc12fc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105d18a0;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_78;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar7);
    pcStack_80 = FUN_102dc1078;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar8;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100288f10;
    puStack_88 = &UNK_1105d18c8;
    ppuVar12 = &puStack_a0;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar10);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    dVar14 = *(double *)(unaff_x20 + _DAT_112f18480);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f184a8);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000100b64c10();
    func_0x00010058d43c(uVar5,uVar2);
    puVar10 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    puVar7 = &UNK_1105d1900;
    func_0x000107c613fc(&UNK_1105d1900,0x18,7);
    *(long *)(puVar7 + 0x10) = unaff_x20;
    pcStack_80 = FUN_102dc1304;
    puStack_a0 = puVar8;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100fef460;
    puStack_88 = &UNK_1105d1918;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    func_0x000107c51924(dVar14 + 0.3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f18488);
    *(undefined **)(unaff_x20 + _DAT_112f18488) = puVar10;
    func_0x000107c61170(uVar5);
    lVar13 = lVar13 + _DAT_112f18530;
    func_0x000107c61428(lVar13,&puStack_a0,1,0);
    *(undefined ***)(lVar13 + 8) = &PTR_DAT_1105d1740;
    func_0x000107c61604(lVar13,unaff_x20);
    lVar13 = unaff_x20 + _DAT_112f184b0;
    lVar3 = lVar13;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar13 = *(long *)(lVar13 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar13 + 0x18))();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102dc1078; end: 102dc107b;  */

void FUN_102dc1078(void)

{
  return;
}



/* Entry: 102dc107c; end: 102dc1127; -[_TtC27FriendingInteractivePopover48FriendingInteractivePopoverNotificationPresenter presentNotificationOverView:completion:] */

/* WARNING: Possible PIC construction at 0x000102dc110c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc1110) */

void FUN_102dc107c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105d1860;
    func_0x000107c613fc(&UNK_1105d1860,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x102dc12f0;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102dc0b3c(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102dc1128; end: 102dc1153; -[_TtC27FriendingInteractivePopover48FriendingInteractivePopoverNotificationPresenter debugInfo] */

void FUN_102dc1128(void)

{
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f10db40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102dc1154; end: 102dc11b3; -[_TtC27FriendingInteractivePopover48FriendingInteractivePopoverNotificationPresenter init] */

void FUN_102dc1154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInteractivePopover.FriendingInteractivePopoverNotificationPresenter"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102dc1180);
  (*pcVar1)();
}



/* Entry: 102dc11b4; end: 102dc122f; -[_TtC27FriendingInteractivePopover48FriendingInteractivePopoverNotificationPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102dc11b4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18488));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18490));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18498));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f184a0));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f184a8),
                      ((undefined8 *)(param_1 + _DAT_112f184a8))[1]);
  param_1 = param_1 + _DAT_112f184b0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102dc1230; end: 102dc124f;  */

void FUN_102dc1230(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6990);
  return;
}



/* Entry: 102dc1250; end: 102dc125b;  */

/* WARNING: Possible PIC construction at 0x000102dc070c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc076c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc07e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc0770) */
/* WARNING: Removing unreachable block (ram,0x000102dc0710) */
/* WARNING: Removing unreachable block (ram,0x000102dc07e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc1250(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f184a0);
  func_0x000107c5c42c();
  func_0x000107c61180();
  lVar5 = _DAT_112f18488;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f184a8);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)0x0;
      puVar7 = (undefined *)puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      puVar7 = (undefined *)puVar1[1];
      func_0x000107c6157c(puVar7);
      (*pcVar6)();
    }
    if (pcVar6 == (code *)0x0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f18488) != 0) {
      func_0x000107c498f8();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
    }
    *(undefined8 *)(unaff_x20 + lVar5) = 0;
    func_0x000107c61170(uVar3);
    lVar5 = unaff_x20 + _DAT_112f184b0;
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar5 + 8);
      lVar5 = lVar4;
      func_0x000107c614f0();
      (**(code **)(lVar8 + 0x20))(1,lVar5,lVar8);
      func_0x000107c615e8(lVar4);
    }
    if (*(long *)(unaff_x20 + _DAT_112f18490) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(unaff_x20 + _DAT_112f18498) != 0) {
      func_0x000107c521e8();
    }
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1105d1770;
    func_0x000107c613fc(&UNK_1105d1770,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar2;
    uStack_60 = 0x102dc1368;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105d1788;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c61174(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar7);
  return;
}



/* Entry: 102dc125c; end: 102dc12bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc125c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_102dc05a8(3);
  lVar2 = unaff_x20 + _DAT_112f184b0;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102dc12bc; end: 102dc1303;  */

void FUN_102dc12bc(long param_1,long param_2)

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



/* Entry: 102dc1304; end: 102dc134b;  */

void FUN_102dc1304(void)

{
  FUN_102dc05a8(0);
  return;
}



/* Entry: 102dc134c; end: 102dc1377;  */

void FUN_102dc134c(long param_1,long param_2)

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



/* Entry: 102dc1378; end: 102dc1a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102dc1378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f184e0;
  lVar11 = unaff_x20;
  FUN_102dc1a18();
  *(long *)(unaff_x20 + lVar1) = lVar11;
  lVar1 = _DAT_112f184e8;
  func_0x000102dc1abc();
  *(long *)(unaff_x20 + lVar1) = lVar11;
  lVar1 = _DAT_112f184f0;
  func_0x000102dc1abc();
  *(long *)(unaff_x20 + lVar1) = lVar11;
  lVar1 = _DAT_112f184f8;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112f18500;
  func_0x000102dc1b60();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _DAT_112f18508;
  func_0x000102dc1c10();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _DAT_112f18510;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar5 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar8 = puVar5;
  func_0x000107c45098(0x4032000000000000,0x4034000000000000,puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c55258(puVar4);
  func_0x000107c61170(puVar8);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112f18518;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112f18520;
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112f18528;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c450a4(0x4030000000000000,0x4030000000000000,puVar5);
  func_0x000107c61180();
  func_0x000107c55258(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5a378(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  unaff_x20 = unaff_x20 + _DAT_112f18530;
  *(undefined8 *)(unaff_x20 + 8) = 0;
  func_0x000107c61614(unaff_x20,0);
  puVar9 = auStack_70;
  func_0x000107c61154(0,0,0,0,puVar9,PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112f184e0;
  uVar12 = *(undefined8 *)(puVar9 + _DAT_112f184e0);
  puVar10 = puVar9;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_1);
  lVar11 = _DAT_112f184e8;
  uVar12 = *(undefined8 *)(puVar10 + _DAT_112f184e8);
  func_0x000107c61174(uVar12);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
  func_0x000107c59c6c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_3);
  lVar2 = _DAT_112f184f0;
  uVar12 = *(undefined8 *)(puVar10 + _DAT_112f184f0);
  func_0x000107c61174(uVar12);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c6142c(param_6);
  func_0x000107c59c6c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_5);
  func_0x000107c55258(*(undefined8 *)(puVar10 + _DAT_112f184f8));
  lVar3 = _DAT_112f18520;
  uVar12 = *(undefined8 *)(puVar10 + _DAT_112f18520);
  func_0x000107c61174(uVar12);
  func_0x000107c5fadc(in_stack_00000008,in_stack_00000010);
  func_0x000107c6142c(in_stack_00000010);
  func_0x000107c59e1c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(in_stack_00000008);
  func_0x000107c52124(*(undefined8 *)(puVar10 + lVar3));
  func_0x000107c5a378(puVar10);
  puVar5 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar10);
  uVar12 = *(undefined8 *)(puVar9 + lVar1);
  func_0x000107c61174(uVar12);
  puVar4 = puVar6;
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  func_0x000107c59c78(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar4);
  uVar12 = *(undefined8 *)(puVar10 + lVar11);
  func_0x000107c61174(uVar12);
  puVar4 = puVar6;
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  func_0x000107c59c78(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar4);
  uVar12 = *(undefined8 *)(puVar10 + lVar2);
  func_0x000107c61174(uVar12);
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  func_0x000107c59c78(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar6);
  lVar1 = _DAT_112f18500;
  lVar11 = *(long *)(puVar10 + _DAT_112f18500);
  uVar12 = *(undefined8 *)(lVar11 + _DAT_112f18538);
  *(undefined **)(lVar11 + _DAT_112f18538) = puVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar12);
  lVar11 = _DAT_112f18508;
  uVar12 = *(undefined8 *)(*(long *)(puVar10 + _DAT_112f18508) + _DAT_112f18540);
  *(undefined **)(*(long *)(puVar10 + _DAT_112f18508) + _DAT_112f18540) = puVar5;
  func_0x000107c61174(puVar5);
  func_0x000107c61170(uVar12);
  puVar9 = puVar10;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4032000000000000);
  func_0x000107c61170(puVar9);
  func_0x000107c3d8b8(*(undefined8 *)(puVar10 + lVar3));
  uVar12 = *(undefined8 *)(puVar10 + _DAT_112f18528);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c61174(uVar12);
  func_0x000107c48c2c(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c3d6fc(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(puVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c550d8(*(undefined8 *)(puVar10 + lVar11));
  func_0x000107c550d8(*(undefined8 *)(puVar10 + lVar1));
  FUN_102dc1e98();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(param_7);
  func_0x000107c61170(puVar5);
  return puVar10;
}



/* Entry: 102dc1a18; end: 102dc1d07;  */

undefined * FUN_102dc1a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar1,param_2,0x14);
  func_0x000107c5a050(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5381c(0x437a0000,puVar1,param_2,0);
  return puVar1;
}



/* Entry: 102dc1d08; end: 102dc1e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc1d08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112f18530;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102dc1e70; end: 102dc1e97; -[_TtC27FriendingInteractivePopover31FriendingInteractivePopoverView initWithCoder:] */

void FUN_102dc1e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102dc34ec();
  return;
}



/* Entry: 102dc1e98; end: 102dc1f67;  */

/* WARNING: Possible PIC construction at 0x000102dc2244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc22f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc23c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc24a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc24f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc258c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc25c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc26c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc27e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc288c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc28ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc29e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc2b08) */
/* WARNING: Removing unreachable block (ram,0x000102dc2ad4) */
/* WARNING: Removing unreachable block (ram,0x000102dc2a98) */
/* WARNING: Removing unreachable block (ram,0x000102dc2a44) */
/* WARNING: Removing unreachable block (ram,0x000102dc29ec) */
/* WARNING: Removing unreachable block (ram,0x000102dc2998) */
/* WARNING: Removing unreachable block (ram,0x000102dc2944) */
/* WARNING: Removing unreachable block (ram,0x000102dc28f0) */
/* WARNING: Removing unreachable block (ram,0x000102dc2890) */
/* WARNING: Removing unreachable block (ram,0x000102dc283c) */
/* WARNING: Removing unreachable block (ram,0x000102dc27e8) */
/* WARNING: Removing unreachable block (ram,0x000102dc2788) */
/* WARNING: Removing unreachable block (ram,0x000102dc2724) */
/* WARNING: Removing unreachable block (ram,0x000102dc26cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc266c) */
/* WARNING: Removing unreachable block (ram,0x000102dc2614) */
/* WARNING: Removing unreachable block (ram,0x000102dc25c4) */
/* WARNING: Removing unreachable block (ram,0x000102dc2590) */
/* WARNING: Removing unreachable block (ram,0x000102dc2548) */
/* WARNING: Removing unreachable block (ram,0x000102dc24f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc24a8) */
/* WARNING: Removing unreachable block (ram,0x000102dc2474) */
/* WARNING: Removing unreachable block (ram,0x000102dc2424) */
/* WARNING: Removing unreachable block (ram,0x000102dc23cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc2374) */
/* WARNING: Removing unreachable block (ram,0x000102dc2328) */
/* WARNING: Removing unreachable block (ram,0x000102dc22f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc2248) */
/* WARNING: Removing unreachable block (ram,0x000102dc2b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc1e98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f18528);
  func_0x000107c5ce8c(uVar1);
  func_0x000107c61180();
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c40284(0xc024000000000000,uVar1,param_2,unaff_x20);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102dc1f68; end: 102dc2003; -[_TtC27FriendingInteractivePopover31FriendingInteractivePopoverView didTapDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc1f68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + _DAT_112f18530;
  func_0x000107c61428(lVar2,auStack_58,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c61174(param_1);
    (*pcVar4)(lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102dc2004; end: 102dc209f; -[_TtC27FriendingInteractivePopover31FriendingInteractivePopoverView didTapAddButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc2004(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + _DAT_112f18530;
  func_0x000107c61428(lVar2,auStack_58,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 0x10);
    func_0x000107c61174(param_1);
    (*pcVar4)(lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102dc20a0; end: 102dc20ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc20a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f18520);
  func_0x000107c5a378(uVar1,param_2,0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f18518);
  func_0x000107c52124(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 102dc20f0; end: 102dc212b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc20f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c52124(*(undefined8 *)(unaff_x20 + _DAT_112f18520),param_2,
                      *(undefined8 *)(unaff_x20 + _DAT_112f18510),0);
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112f18518),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 102dc212c; end: 102dc21c7; -[_TtC27FriendingInteractivePopover31FriendingInteractivePopoverView didTapBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc212c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + _DAT_112f18530;
  func_0x000107c61428(lVar2,auStack_58,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 0x18);
    func_0x000107c61174(param_1);
    (*pcVar4)(lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102dc21c8; end: 102dc2b97;  */

/* WARNING: Possible PIC construction at 0x000102dc2244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc22f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc23c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc24a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc24f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc258c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc25c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc26c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc27e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc288c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc28ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc29e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc2b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc2b08) */
/* WARNING: Removing unreachable block (ram,0x000102dc2ad4) */
/* WARNING: Removing unreachable block (ram,0x000102dc2a98) */
/* WARNING: Removing unreachable block (ram,0x000102dc2a44) */
/* WARNING: Removing unreachable block (ram,0x000102dc29ec) */
/* WARNING: Removing unreachable block (ram,0x000102dc2998) */
/* WARNING: Removing unreachable block (ram,0x000102dc2944) */
/* WARNING: Removing unreachable block (ram,0x000102dc28f0) */
/* WARNING: Removing unreachable block (ram,0x000102dc2890) */
/* WARNING: Removing unreachable block (ram,0x000102dc283c) */
/* WARNING: Removing unreachable block (ram,0x000102dc27e8) */
/* WARNING: Removing unreachable block (ram,0x000102dc2788) */
/* WARNING: Removing unreachable block (ram,0x000102dc2724) */
/* WARNING: Removing unreachable block (ram,0x000102dc26cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc266c) */
/* WARNING: Removing unreachable block (ram,0x000102dc2614) */
/* WARNING: Removing unreachable block (ram,0x000102dc25c4) */
/* WARNING: Removing unreachable block (ram,0x000102dc2590) */
/* WARNING: Removing unreachable block (ram,0x000102dc2548) */
/* WARNING: Removing unreachable block (ram,0x000102dc24f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc24a8) */
/* WARNING: Removing unreachable block (ram,0x000102dc2474) */
/* WARNING: Removing unreachable block (ram,0x000102dc2424) */
/* WARNING: Removing unreachable block (ram,0x000102dc23cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc2374) */
/* WARNING: Removing unreachable block (ram,0x000102dc2328) */
/* WARNING: Removing unreachable block (ram,0x000102dc22f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc2248) */
/* WARNING: Removing unreachable block (ram,0x000102dc2b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc21c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f18528);
  func_0x000107c5ce8c(uVar1);
  func_0x000107c61180();
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c40284(0xc024000000000000,uVar1,param_2,unaff_x20);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102dc2b98; end: 102dc2bc3; -[_TtC27FriendingInteractivePopover31FriendingInteractivePopoverView initWithFrame:] */

void FUN_102dc2b98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInteractivePopover.FriendingInteractivePopoverView",0x3b,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102dc2bc4);
  (*pcVar1)();
}



/* Entry: 102dc2bc4; end: 102dc2bcf;  */

void FUN_102dc2bc4(void)

{
  (*(code *)0x102dc1f48)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102dc2bd0; end: 102dc2c97; -[_TtC27FriendingInteractivePopover31FriendingInteractivePopoverView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102dc2bd0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f184e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f184e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f184f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f184f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18500));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18508));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18510));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18518));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18520));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18528));
  param_1 = param_1 + _DAT_112f18530;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102dc2c98; end: 102dc2d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102dc2c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112f18540;
  puVar4 = &stack0xffffffffffffffa0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c444b4();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f18538;
  puVar3 = puVar2;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f18570) = 0x4024000000000000;
  FUN_102dc3290();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c3fa94(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  return puVar4;
}



/* Entry: 102dc2da0; end: 102dc2dbf; -[_TtC27FriendingInteractivePopoverP33_8FFC117495B26ACD4CA30A48C03FD2488RingView initWithFrame:] */

void FUN_102dc2da0(void)

{
  FUN_102dc2c98();
  return;
}



/* Entry: 102dc2dc0; end: 102dc2eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102dc2dc0(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112f18540;
  puVar4 = &stack0xffffffffffffffc0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c444b4();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f18538;
  puVar3 = puVar2;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f18570) = 0x4024000000000000;
  FUN_102dc3290();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c3fa94(puVar2);
    func_0x000107c61180();
    func_0x000107c52b50(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_1);
    param_1 = puVar2;
  }
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 102dc2eb4; end: 102dc2edb; -[_TtC27FriendingInteractivePopoverP33_8FFC117495B26ACD4CA30A48C03FD2488RingView initWithCoder:] */

void FUN_102dc2eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102dc2dc0();
  return;
}



/* Entry: 102dc2edc; end: 102dc31ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc2edc(double param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  
  FUN_102dc3290();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_layoutSubviews_112600e60);
  uVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  uVar9 = uVar2;
  func_0x000107c5c288();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar9 != 0) {
    uVar3 = 0;
    func_0x000102dc378c(0,0x112eefda8,&PTR__OBJC_CLASS___CALayer_1126b1750);
    uVar2 = uVar9;
    func_0x000107c5fc54(uVar9,uVar3);
    func_0x000107c61170(uVar9);
    if (uVar2 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar9 = uVar2;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar2 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102dc2ff8);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(uVar2 + uVar10 * 8 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = uVar10;
          func_0x000102dc3328(uVar10,uVar2);
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102dc2ff4);
          (*pcVar1)();
        }
        uVar11 = uVar10 + 1;
        func_0x000107c4ff30();
        func_0x000107c61170(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar11 != uVar9);
    }
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c3ec60();
  func_0x000107c609cc();
  dVar13 = param_1;
  func_0x000107c3ec60();
  func_0x000107c609b0();
  if (param_1 <= dVar13) {
    dVar13 = param_1;
  }
  puVar5 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x000107c453e4();
  puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  puVar7 = puVar6;
  func_0x000107c3e8a4(0,0,dVar13,dVar13);
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c3ab30();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c57274(puVar5);
  func_0x000107c61170(puVar8);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f18540);
  func_0x000107c3ab24(uVar3);
  func_0x000107c61180();
  func_0x000107c549b4(puVar5);
  func_0x000107c61170(uVar3);
  uVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c3d894();
  func_0x000107c61170(uVar2);
  puVar7 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x000107c453e4();
  dVar12 = *(double *)(unaff_x20 + _DAT_112f18570);
  dVar13 = dVar13 - (dVar12 + dVar12);
  func_0x000107c3e8a4(dVar12,dVar12,dVar13,dVar13,puVar6);
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c3ab30();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c57274(puVar7);
  func_0x000107c61170(puVar8);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f18538);
  func_0x000107c3ab24(uVar3);
  func_0x000107c61180();
  func_0x000107c549b4(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c3d894();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 102dc31f0; end: 102dc3217; -[_TtC27FriendingInteractivePopoverP33_8FFC117495B26ACD4CA30A48C03FD2488RingView layoutSubviews] */

void FUN_102dc31f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102dc2edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102dc3218; end: 102dc3227;  */

void FUN_102dc3218(void)

{
  FUN_102dc3290();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102dc3228; end: 102dc3257;  */

void FUN_102dc3228(undefined8 param_1,code *param_2)

{
  (*param_2)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102dc3258; end: 102dc328f; -[_TtC27FriendingInteractivePopoverP33_8FFC117495B26ACD4CA30A48C03FD2488RingView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102dc3274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc3278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc3258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f18540));
  return;
}



/* Entry: 102dc3290; end: 102dc32af;  */

void FUN_102dc3290(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6be0);
  return;
}



/* Entry: 102dc32b0; end: 102dc34eb;  */

void FUN_102dc32b0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102dc378c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102dc34ec; end: 102dc3767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc34ec(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112f184e0;
  FUN_102dc1a18();
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  lVar1 = _DAT_112f184e8;
  func_0x000102dc1abc();
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  lVar1 = _DAT_112f184f0;
  func_0x000102dc1abc();
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  lVar1 = _DAT_112f184f8;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar3);
  puVar4 = puVar3;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f18500;
  func_0x000102dc1b60();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112f18508;
  func_0x000102dc1c10();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112f18510;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c45098(0x4032000000000000,0x4034000000000000,puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c55258(puVar3);
  func_0x000107c61170(puVar6);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f18518;
  puVar3 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f18520;
  puVar3 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c59a2c();
  func_0x000107c5a050(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112f18528;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c450a4(0x4030000000000000,0x4030000000000000,puVar4);
  func_0x000107c61180();
  func_0x000107c55258(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c5a378(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = unaff_x20 + _DAT_112f18530;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FriendingInteractivePopover/FriendingInteractivePopoverView.swift",0x41,2,
                      0xa2,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc3768);
  (*pcVar2)();
}



/* Entry: 102dc3768; end: 102dc37cb;  */

undefined8 FUN_102dc3768(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}


