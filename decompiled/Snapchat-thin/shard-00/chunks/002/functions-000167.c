/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003d9a84; end: 1003d9ab7; -[SCSubject dealloc] */

void FUN_1003d9a84(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e5c8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1003d9ab8; end: 1003d9af7; -[SCPublishSubject .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001003d9adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003d9ae0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d9ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796804,0);
  return;
}



/* Entry: 1003d9af8; end: 1003d9b03; -[SCAssertingObserver .cxx_destruct] */

void FUN_1003d9af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1003d9b04; end: 1003d9b2b; -[SCMulticastObserver .cxx_destruct] */

void FUN_1003d9b04(long param_1)

{
  FUN_10008a518(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1003d9b2c; end: 1003d9c27;  */

void FUN_1003d9b2c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d9c28; end: 1003d9c2f;  */

void FUN_1003d9c28(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adcf0;
  func_0x000107c610f8();
  func_0x000107c47b00();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d9c30; end: 1003d9c83;  */

void FUN_1003d9c30(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adcf0;
  func_0x000107c610f8();
  func_0x000107c47b00();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003d9c84; end: 1003d9cf7; -[SIGNotificationServices initWithNotificationPool:] */

undefined1 * FUN_1003d9c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270b318;
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



/* Entry: 1003d9cf8; end: 1003d9cff;  */

void FUN_1003d9cf8(undefined8 *param_1)

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



/* Entry: 1003d9d00; end: 1003d9d53;  */

void FUN_1003d9d00(undefined8 *param_1)

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



/* Entry: 1003d9d54; end: 1003d9d5f;  */

void FUN_1003d9d54(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10021b79c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1003d9ec8(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1003d9f48();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1003d9f84();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003d9d60; end: 1003d9ec7;  */

void FUN_1003d9d60(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10021b79c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1003d9ec8(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1003d9f48();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_1003d9f84();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1003d9ec8; end: 1003d9f47;  */

void FUN_1003d9ec8(undefined8 param_1)

{
  if (lRam0000000112dd7298 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65a9b0);
  return;
}



/* Entry: 1003d9f48; end: 1003d9f83;  */

void FUN_1003d9f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1003d9f84; end: 1003da03f;  */

void FUN_1003d9f84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = &UNK_110415958;
  func_0x000107c613fc(&UNK_110415958,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  FUN_1000285a8(0x112dd7268,&UNK_10d99a5a0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  puVar4 = &UNK_10193cb8c;
  FUN_1000bdd8c(&UNK_10193cb8c,puVar3);
  FUN_10021b848(0);
  func_0x000107c610f8();
  FUN_1003da044(puVar4);
  return;
}



/* Entry: 1003da040; end: 1003da043;  */

void FUN_1003da040(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003da044; end: 1003da08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003da044(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f884e0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003da090; end: 1003da16b;  */

void FUN_1003da090(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003da16c; end: 1003da197;  */

void FUN_1003da16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  return;
}



/* Entry: 1003da198; end: 1003da843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1003da198(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long unaff_x20;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  
  uVar24 = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + _DAT_113092298);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar22 = *(undefined8 *)(*(long *)(unaff_x20 + 0x60) + _DAT_1130344b8);
  puVar3 = &UNK_110682838;
  func_0x000107c613fc(&UNK_110682838,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar24;
  *(undefined8 *)(puVar3 + 0x28) = uVar22;
  FUN_1000285a8(0x112f87e80,&UNK_10dbfbca0);
  func_0x000107c613fc();
  func_0x000107c615f4(uVar24,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar15);
  pcVar2 = FUN_100773e60;
  FUN_1000bdd8c(FUN_100773e60,puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar25 = *(long *)(unaff_x20 + 0x40);
  uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + _DAT_113036518);
  puVar3 = &UNK_110682860;
  func_0x000107c613fc(&UNK_110682860,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(code **)(puVar3 + 0x18) = pcVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(long *)(puVar3 + 0x28) = lVar25;
  *(undefined8 *)(puVar3 + 0x30) = uVar23;
  FUN_1000285a8(0x112f87e88,&UNK_10dbfbca8);
  func_0x000107c613fc();
  func_0x000107c61580(uVar23,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(pcVar2);
  func_0x000107c61174();
  puVar6 = &UNK_1036de3fc;
  FUN_1000bdd8c(&UNK_1036de3fc,puVar3);
  uVar21 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_112f884e0);
  puVar3 = &UNK_110682888;
  func_0x000107c613fc(&UNK_110682888,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar21;
  *(undefined8 *)(puVar3 + 0x18) = uVar23;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  FUN_1000285a8(0x112f87e90,&UNK_10dbfbcb0);
  func_0x000107c613fc();
  func_0x000107c61580(uVar21,2);
  func_0x000107c61174();
  func_0x000107c6157c(uVar23);
  puVar7 = &UNK_1036de490;
  FUN_1000bdd8c(&UNK_1036de490,puVar3);
  puVar3 = &UNK_1106828b0;
  func_0x000107c613fc(&UNK_1106828b0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined **)(puVar3 + 0x18) = puVar6;
  *(undefined **)(puVar3 + 0x20) = puVar7;
  FUN_1000285a8(0x112f87e98,&UNK_10dbfbcb8);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  puVar8 = &UNK_1036de548;
  FUN_1000bdd8c(&UNK_1036de548,puVar3);
  uVar15 = 0x112f87ea0;
  FUN_1000285a8(0x112f87ea0,&UNK_10dbfbcc0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar8);
  puVar3 = &UNK_1036deb4c;
  FUN_1000bdd8c(&UNK_1036deb4c,puVar8);
  func_0x000107c613fc(uVar15,0x18,7);
  func_0x000107c6157c(puVar6);
  puVar9 = &UNK_1036de554;
  FUN_1000bdd8c(&UNK_1036de554,puVar6);
  FUN_1000285a8(0x112f87ea8,&UNK_10dbfbcc8);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar8);
  puVar10 = &UNK_1036de588;
  FUN_1000bdd8c(&UNK_1036de588,puVar8);
  puVar14 = &UNK_1106828d8;
  func_0x000107c613fc(&UNK_1106828d8,0x20,7);
  *(undefined **)(puVar14 + 0x10) = puVar3;
  *(undefined8 *)(puVar14 + 0x18) = uVar4;
  FUN_1000285a8(0x112f87eb0,&UNK_10dbfbcd0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(puVar3);
  puVar11 = &UNK_1036de628;
  FUN_1000bdd8c(&UNK_1036de628,puVar14);
  puVar14 = &UNK_110682900;
  func_0x000107c613fc(&UNK_110682900,0x38,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar5;
  *(undefined **)(puVar14 + 0x18) = puVar3;
  *(undefined8 *)(puVar14 + 0x20) = uVar1;
  *(code **)(puVar14 + 0x28) = pcVar2;
  *(undefined8 *)(puVar14 + 0x30) = uVar23;
  FUN_1000285a8(0x112f87eb8,&UNK_10dbfbcd8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar23);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(uVar1);
  puVar12 = &UNK_1036de75c;
  FUN_1000bdd8c(&UNK_1036de75c,puVar14);
  puVar14 = &UNK_110682928;
  func_0x000107c613fc(&UNK_110682928,0x18,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar4;
  FUN_1000285a8(0x112f87ec0,&UNK_10dbfbce0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  puVar13 = &UNK_1036de7e0;
  FUN_1000bdd8c(&UNK_1036de7e0,puVar14);
  FUN_1000285a8(0x112f87ec8,&UNK_10dbfbce8);
  func_0x000107c613fc();
  puVar14 = &UNK_1036de7e8;
  FUN_1000bdd8c(&UNK_1036de7e8,0);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar25 != 0) {
    uVar15 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x000107c4d80c(uVar15);
    func_0x000107c61180();
    lVar16 = lVar25;
    FUN_1003da9cc(lVar25,uVar15);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(uVar15);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar16;
    func_0x000107c6142c(uVar15);
    FUN_1000285a8(0x112f87ed0,&UNK_10dbfbcf0);
    func_0x000107c613fc();
    puVar17 = &UNK_1036de818;
    FUN_1000bdd8c(&UNK_1036de818,0);
    FUN_1000285a8(0x112f87ed8,&UNK_10dbfbcf8);
    func_0x000107c613fc();
    puVar18 = &UNK_1036de8a8;
    FUN_1000bdd8c(&UNK_1036de8a8,0);
    uVar15 = 0x112f87ee0;
    FUN_1000285a8(0x112f87ee0,&UNK_10dbfbd00);
    puVar19 = &UNK_1036de914;
    FUN_1000cb480(&UNK_1036de914,0,uVar15);
    uVar15 = 0x112f87ee8;
    FUN_1000285a8(0x112f87ee8,&UNK_10dbfbd08);
    puVar20 = &UNK_1036de928;
    FUN_1000cb480(&UNK_1036de928,0,uVar15);
    uVar15 = 0;
    FUN_100236564(0);
    func_0x000107c610f8();
    FUN_1003dc414(uVar15,puVar12,puVar3,puVar9,puVar11,pcVar2,puVar13,puVar10,puVar14,puVar17,
                  puVar19,puVar20);
    func_0x000107c615e8(uVar24);
    func_0x000107c61170(uVar22);
    func_0x000107c61574(uVar23);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar21);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar18);
    return puVar12;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003da844);
  (*pcVar2)();
}



/* Entry: 1003da844; end: 1003da9c3;  */

void FUN_1003da844(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003da9c4; end: 1003da9cb; -[SIGNotificationServices notificationPool] */

undefined8 FUN_1003da9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003da9cc; end: 1003dac67;  */

undefined * FUN_1003da9cc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puVar5 = &UNK_110682b88;
    func_0x000107c613fc(&UNK_110682b88,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar2;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    puStack_70 = &UNK_1036e188c;
    puStack_90 = puVar8;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000f6b44;
    puStack_78 = &UNK_110682ba0;
    puStack_68 = puVar5;
    func_0x000107c60bc4();
    puVar4 = (undefined1 *)ppuVar3;
    func_0x000107c60bc4();
    func_0x000107c61174(param_2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puStack_68);
    func_0x000107c60bc4(puVar4);
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar5 = puVar9;
      }
      func_0x000107c60480(puVar5);
    }
    puVar6 = (undefined *)0x0;
    func_0x0001003dc10c(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar10 + 0x10);
    puVar9 = puVar6;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
      func_0x0001003dc10c(puVar9,uVar1 + 1,1,puVar6);
      uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
    *(undefined1 **)(uVar10 + uVar1 * 8 + 0x20) = puVar4;
    func_0x000107c60bd0(puVar4);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar5 = &UNK_110682b38;
    func_0x000107c613fc(&UNK_110682b38,0x20,7);
    *(long *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    puStack_70 = &UNK_1036e187c;
    puStack_90 = puVar8;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000f6b44;
    puStack_78 = &UNK_110682b50;
    puStack_68 = puVar5;
    func_0x000107c60bc4();
    puVar4 = (undefined1 *)ppuVar7;
    func_0x000107c60bc4();
    func_0x000107c61174(param_2);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puStack_68);
    func_0x000107c60bc4(puVar4);
    puVar8 = puVar9;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
       (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar5 = puVar9;
        }
        func_0x000107c60480(puVar5);
      }
      puVar8 = (undefined *)0x0;
      func_0x0001003dc10c(0,puVar5 + 1,1,puVar9);
    }
    uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar10 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
      func_0x0001003dc10c(puVar9,uVar1 + 1,1,puVar8);
      uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
    *(undefined1 **)(uVar10 + uVar1 * 8 + 0x20) = puVar4;
    func_0x000107c60bd0(puVar4);
  }
  return puVar9;
}



/* Entry: 1003dac68; end: 1003dac93;  */

void FUN_1003dac68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003dac94; end: 1003daca3;  */

void FUN_1003dac94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003daca4; end: 1003daf9f;  */

void FUN_1003daca4(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  FUN_100083b20(&puStack_98);
  puVar13 = puStack_98;
  puVar3 = puStack_98;
  func_0x000107c42ea4();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  puVar4 = PTR_PTR_1126a7b50;
  func_0x000107c610f8();
  func_0x000107c46b6c();
  FUN_100083b20(&puStack_98);
  puVar13 = puStack_98;
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efbae10);
  iVar2 = 0x41;
  func_0x000107c5fadc(0xd000000000000041,0x800000010efbae40);
  puVar6 = puVar13;
  func_0x000107c4366c(puVar13);
  func_0x000107c61180();
  func_0x000107c615e8(puVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170();
  FUN_1003db16c();
  puVar13 = (undefined *)0x0;
  if (iVar2 != 0) {
    puVar13 = PTR_PTR_1126a7b68;
    func_0x000107c610f8(PTR_PTR_1126a7b68);
    func_0x000107c453e4();
  }
  puVar7 = PTR_PTR_1126a7b58;
  func_0x000107c610f8(PTR_PTR_1126a7b58);
  func_0x000107c453e4();
  FUN_100083b20(&puStack_98);
  puVar1 = puStack_98;
  puVar8 = PTR_PTR_1126a7b60;
  func_0x000107c610f8();
  func_0x000107c4880c();
  func_0x000107c615e8(puVar1);
  FUN_100083b20(&puStack_98);
  puVar1 = puStack_98;
  puStack_68 = PTR_DAT_11269f250;
  puVar9 = puStack_98;
  func_0x000107c61494(puStack_98,1,&puStack_68);
  if (puVar9 == (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puStack_98);
  }
  else {
    puVar10 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puVar11 = &UNK_110404a68;
    func_0x000107c613fc(&UNK_110404a68,0x18,7);
    *(undefined **)(puVar11 + 0x10) = puVar8;
    puStack_78 = &UNK_1017600d4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1017600fc;
    puStack_80 = &UNK_110404a80;
    ppuVar12 = &puStack_98;
    puStack_70 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_70;
    func_0x000107c61174(puVar8);
    func_0x000107c61574(puVar11);
    func_0x000107c3e4fc(puVar10);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c54918(puVar9);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 1003dafa0; end: 1003db0f7; -[SCGrapheneRegistry featureSettingsGraphene] */

void FUN_1003dafa0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1003db028;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb998 != -1) {
    FUN_10002a2fc(0x1136bb998,&puStack_48);
  }
  uVar1 = uRam00000001136bb990;
  func_0x000107c61174(uRam00000001136bb990);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003db0f8; end: 1003db16b; -[SCFeatureSettingsGrapheneMetricsReporter initWithGraphene:] */

undefined1 * FUN_1003db0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8198;
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



/* Entry: 1003db16c; end: 1003db173;  */

undefined8 FUN_1003db16c(void)

{
  return 0;
}



/* Entry: 1003db174; end: 1003db1db; -[SCFeatureSettingsItemCache init] */

undefined1 * FUN_1003db174(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8188;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003db1dc; end: 1003db1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003db1dc(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = uVar8;
  FUN_100083b20(&puStack_90,*(undefined8 *)(unaff_x20 + 0x10),uVar8,
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = *(long *)(puStack_90 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(puStack_90);
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar14 = uVar7;
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    uVar14 = uVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c5faec();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_70 = &UNK_10152d608;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10152d4c0;
  puStack_78 = &UNK_1103db0c8;
  ppuVar5 = &puStack_90;
  uStack_68 = uVar8;
  func_0x000107c60bc4(ppuVar5);
  uVar7 = uStack_68;
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(uVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar4;
  FUN_1003db5f0(puVar4,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  FUN_100083b20(&puStack_90);
  puVar12 = puStack_90;
  uVar7 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010efb06a0);
  uVar8 = 0xd00000000000003c;
  func_0x000107c5fadc(0xd00000000000003c,0x800000010efb06e0);
  puVar9 = puVar12;
  func_0x000107c4366c(puVar12);
  func_0x000107c61180();
  func_0x000107c615e8(puVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  FUN_100083b20(&puStack_90);
  puVar12 = puStack_90;
  FUN_100083b20(&lStack_98);
  lVar2 = lStack_98;
  puVar10 = PTR_PTR_1126a7760;
  func_0x000107c610f8(PTR_PTR_1126a7760);
  func_0x000107c45db4();
  func_0x000107c615e8(puVar12);
  func_0x000107c615e8(lVar2);
  func_0x0001000ad7c4();
  FUN_100083b20(&puStack_90);
  puVar12 = puStack_90;
  puVar11 = puStack_90;
  func_0x000107c5b6b8(puStack_90);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  FUN_100083b20(&lStack_98);
  uVar7 = *(undefined8 *)(lStack_98 + _DAT_11307e6a8);
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lStack_98);
  FUN_100083b20(&uStack_a0);
  uVar8 = uStack_a0;
  func_0x000107c5da34(uStack_a0);
  func_0x000107c61180();
  func_0x000107c61170(uStack_a0);
  puVar12 = PTR_PTR_1126c3870;
  func_0x000107c610f8(PTR_PTR_1126c3870);
  func_0x000107c46b7c();
  func_0x000107c61170(uVar8);
  puVar13 = PTR_PTR_1126a7768;
  func_0x000107c610f8();
  func_0x000107c61174(puVar6);
  func_0x000107c615f0(puVar9);
  func_0x000107c5fadc(lVar3,uVar14);
  func_0x000107c6142c(uVar14);
  func_0x000107c48344();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(puVar9);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar3);
  if (puVar13 != (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar10);
    func_0x000107c615e8(puVar9);
    func_0x000107c61170(puVar6);
    *param_1 = puVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003db5dc);
  (*pcVar1)();
}



/* Entry: 1003db1f0; end: 1003db5db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003db1f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar8 = param_3;
  FUN_100083b20(&puStack_90);
  lVar2 = *(long *)(puStack_90 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(puStack_90);
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar14 = uVar8;
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = 0;
    func_0x000107c5faec(0);
    uVar14 = uVar8;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c5faec();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_70 = &UNK_10152d608;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10152d4c0;
  puStack_78 = &UNK_1103db0c8;
  ppuVar5 = &puStack_90;
  uStack_68 = param_3;
  func_0x000107c60bc4(ppuVar5);
  uVar8 = uStack_68;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar4;
  FUN_1003db5f0(puVar4,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  FUN_100083b20(&puStack_90);
  puVar12 = puStack_90;
  uVar7 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010efb06a0);
  uVar8 = 0xd00000000000003c;
  func_0x000107c5fadc(0xd00000000000003c,0x800000010efb06e0);
  puVar9 = puVar12;
  func_0x000107c4366c(puVar12);
  func_0x000107c61180();
  func_0x000107c615e8(puVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  FUN_100083b20(&puStack_90);
  puVar12 = puStack_90;
  FUN_100083b20(&lStack_98);
  lVar2 = lStack_98;
  puVar10 = PTR_PTR_1126a7760;
  func_0x000107c610f8(PTR_PTR_1126a7760);
  func_0x000107c45db4();
  func_0x000107c615e8(puVar12);
  func_0x000107c615e8(lVar2);
  func_0x0001000ad7c4();
  FUN_100083b20(&puStack_90);
  puVar12 = puStack_90;
  puVar11 = puStack_90;
  func_0x000107c5b6b8(puStack_90);
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  FUN_100083b20(&lStack_98);
  uVar7 = *(undefined8 *)(lStack_98 + _DAT_11307e6a8);
  func_0x000107c61174(uVar7);
  func_0x000107c61170(lStack_98);
  FUN_100083b20(&uStack_a0);
  uVar8 = uStack_a0;
  func_0x000107c5da34(uStack_a0);
  func_0x000107c61180();
  func_0x000107c61170(uStack_a0);
  puVar12 = PTR_PTR_1126c3870;
  func_0x000107c610f8(PTR_PTR_1126c3870);
  func_0x000107c46b7c();
  func_0x000107c61170(uVar8);
  puVar13 = PTR_PTR_1126a7768;
  func_0x000107c610f8();
  func_0x000107c61174(puVar6);
  func_0x000107c615f0(puVar9);
  func_0x000107c5fadc(lVar3,uVar14);
  func_0x000107c6142c(uVar14);
  func_0x000107c48344();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(puVar9);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar3);
  if (puVar13 != (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar10);
    func_0x000107c615e8(puVar9);
    func_0x000107c61170(puVar6);
    *param_1 = puVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003db5dc);
  (*pcVar1)();
}



/* Entry: 1003db5dc; end: 1003db5ef;  */

void FUN_1003db5dc(long param_1,long param_2)

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



/* Entry: 1003db5f0; end: 1003db823;  */

void FUN_1003db5f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c470d0();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003db824; end: 1003db82b; -[SCNetworkManager _networkReachabilityStatusDidChangeWithNotification:] */

void FUN_1003db824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d7dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_networkReachabilityStatusDidChan_112613988);
  return;
}



/* Entry: 1003db82c; end: 1003db8d3; -[SCRequestScheduler networkReachabilityStatusDidChangeWithNotification:] */

void FUN_1003db82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c4f7e8(param_1);
  func_0x000107c61180();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1003db8dc;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1003db8d4; end: 1003db8db; -[SCRequestScheduler queuePerformer] */

undefined8 FUN_1003db8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1003db8dc; end: 1003db953;  */

void FUN_1003db8dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5d9a4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5d388();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c284c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28),
             PTR_s_updateCurrentReachability__11267ed30,uVar3);
  return;
}



/* Entry: 1003db954; end: 1003db9f7; -[SCUserPropertiesCofConfig initWithCircumstanceEngine:appStartExperimentReader:] */

undefined1 *
FUN_1003db954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eca68;
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



/* Entry: 1003db9f8; end: 1003db9ff; -[SCDeltaSyncServices spartaService] */

undefined8 FUN_1003db9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003dba00; end: 1003dbba7; -[SCGrapheneRegistry userPropertiesGraphene] */

void FUN_1003dba00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1003dba88;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c2218 != -1) {
    FUN_10002a2fc(0x1136c2218,&puStack_48);
  }
  uVar1 = uRam00000001136c2210;
  func_0x000107c61174(uRam00000001136c2210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003dbba8; end: 1003dbc4f; -[SCUserPropertiesGrapheneMetricsReporter initWithGraphene:config:] */

undefined1 * FUN_1003dbba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lVar4;
  
  puVar2 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eca70;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    func_0x000107c61170(uVar3);
    if (param_4 == 0) {
      uVar1 = 0;
    }
    else {
      lVar4 = param_4;
      func_0x000107c5c420();
      uVar1 = (undefined1)lVar4;
    }
    *(undefined1 *)((long)puVar2 + 0x10) = uVar1;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1003dbc50; end: 1003dbc87; -[SCUserPropertiesCofConfig supUsageMetricsEnabled] */

ulong FUN_1003dbc50(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e26138,bRam000000011381ab00,0);
    return uVar1;
  }
  return (ulong)bRam000000011381ab00;
}



/* Entry: 1003dbc88; end: 1003dbe37; -[SCUserPropertiesDefaultService initWithRepository:uploadService:syncService:jobScheduler:performer:metricsReporter:userId:] */

undefined1 *
FUN_1003dbc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1126eca78;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_6);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = &UNK_10f33a2ac;
    func_0x000107c60f50(&UNK_10f33a2ac,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003dbe38; end: 1003dbe67; -[SCUserPropertiesCofConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001003dbe50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003dbe54) */

void FUN_1003dbe38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1003dbe68; end: 1003dbec3;  */

void FUN_1003dbe68(void)

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



/* Entry: 1003dbec4; end: 1003dc033; -[SCFeatureSettingsUserPropertiesService initWithSnapchatUserPropertiesService:itemCache:itemIdMappingCache:performer:metricsReporter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1003dbec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126e81a0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112722cac;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112722cb0;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112722cb4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112722cb8;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112722cbc;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112722cc0);
    *(undefined **)((long)puVar1 + (long)_DAT_112722cc0) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112722cc4) = 0;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003dc034; end: 1003dc047;  */

void FUN_1003dc034(long param_1,long param_2)

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



/* Entry: 1003dc048; end: 1003dc08b; -[SCCircumstanceEngine setFeatureSettingsService:] */

void FUN_1003dc048(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + 0xb0,param_3);
  func_0x000107c54918(*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003dc08c; end: 1003dc093;  */

void FUN_1003dc08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1003dc094; end: 1003dc0f3;  */

void FUN_1003dc094(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003dc0f4; end: 1003dc11f;  */

void FUN_1003dc0f4(long param_1,long param_2)

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



/* Entry: 1003dc120; end: 1003dc257;  */

ulong FUN_1003dc120(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dc258);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dc254);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1003dc258; end: 1003dc2db;  */

undefined * FUN_1003dc258(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112f874b0;
    FUN_1000285a8(0x112f874b0,&UNK_10dbfb4d0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1003dc2dc; end: 1003dc3f3;  */

long FUN_1003dc2dc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003dc3f0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003dc3f4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f87708;
        FUN_1000285a8(0x112f87708,&UNK_10dbfb6a8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,PTR___syXlN_11034f1a0 + 8);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003dc3ec);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1003dc3f4; end: 1003dc413;  */

void FUN_1003dc3f4(void)

{
  func_0x000107c61168(&PTR_PTR_112f87030);
  return;
}



/* Entry: 1003dc414; end: 1003dc643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1003dc414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_1130364e0,0);
  func_0x000107c61644(unaff_x20 + _DAT_1130364e8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113036458) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036460) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036468) = param_2;
  uVar1 = param_2;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036470) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036478) = param_3;
  uVar1 = param_3;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036480) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036488) = param_4;
  uVar1 = param_4;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113036490) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113036498) = param_5;
  uVar1 = param_5;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_1130364a0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130364a8) = param_6;
  uVar1 = param_6;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_1130364b0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_1130364b8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130364c0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130364c8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130364d0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130364d8) = param_11;
  puVar2 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  return puVar2;
}



/* Entry: 1003dc644; end: 1003dc6b7;  */

void FUN_1003dc644(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003dc6b8; end: 1003dc6bf;  */

void FUN_1003dc6b8(undefined8 *param_1)

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



/* Entry: 1003dc6c0; end: 1003dc713;  */

void FUN_1003dc6c0(undefined8 *param_1)

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



/* Entry: 1003dc714; end: 1003dc723;  */

void FUN_1003dc714(long *param_1)

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
  undefined *puVar10;
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
  FUN_1002b34f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a99a8;
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
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01ac30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ac50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1003dc724; end: 1003dcae7;  */

void FUN_1003dc724(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
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
  FUN_1002b34f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a99a8;
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
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01ac30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ac50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1003dcae8; end: 1003dcaef;  */

void FUN_1003dcae8(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_100217bfc(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  pcVar1 = FUN_100670528;
  func_0x0001003dcb44();
  *param_1 = pcVar1;
  return;
}



/* Entry: 1003dcaf0; end: 1003dcb9f;  */

void FUN_1003dcaf0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  FUN_100217bfc(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_100670528;
  func_0x0001003dcb44(FUN_100670528,param_2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1003dcba0; end: 1003dcc83; -[SCStoriesExperimentServiceProvider provide] */

void FUN_1003dcba0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c1200;
  func_0x000107c610f4(PTR_PTR_1126c1200);
  func_0x000107c48a3c();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003dcc84; end: 1003dccdb; -[_TtC27SCStoriesExperimentServices27SCStoriesExperimentServices initWithStoriesCofExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003dcc84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302e640) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003dccdc; end: 1003dcd27;  */

void FUN_1003dccdc(void)

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



/* Entry: 1003dcd28; end: 1003dcd2f;  */

void FUN_1003dcd28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003dcd30; end: 1003dcd83;  */

void FUN_1003dcd30(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003dcd84; end: 1003ddbdf;  */

void FUN_1003dcd84(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
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
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uStack_118;
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
  FUN_100083b20(&uStack_118);
  FUN_1002407d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  *(undefined8 *)(param_2 + 200) = uStack_118;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c61174();
  uVar18 = uStack_f0;
  func_0x000107c61174();
  uVar19 = uStack_f8;
  func_0x000107c61174();
  uVar20 = uStack_100;
  func_0x000107c61174(uStack_100);
  uVar21 = uStack_108;
  func_0x000107c61174(uStack_108);
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7e58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar22 = auStack_70[0];
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar23 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc1590);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar23 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar23 = 0x7672655372657375;
  func_0x000107c5fadc(0x7672655372657375,0xec00000073656369);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar21);
  func_0x000107c61174();
  uVar23 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc15b0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar24);
  func_0x000107c61174(uVar26);
  uVar23 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc15d0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar23);
  lVar27 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar23 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc15f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(uVar23);
  lVar28 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar26);
  func_0x000107c61174();
  uVar23 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc1610);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(uVar23);
  func_0x000107c3e740(uVar26);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar27 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ddbdc);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xd0) = lVar27;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar28 != 0) {
    func_0x000107c61170(uVar22);
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
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    *(long *)(param_2 + 0xd8) = lVar28;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ddbe0);
  (*pcVar1)();
}



/* Entry: 1003ddbe0; end: 1003ddc2b;  */

void FUN_1003ddbe0(void)

{
  long unaff_x20;
  
  FUN_1003dcd84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 1003ddc2c; end: 1003ddc33;  */

void FUN_1003ddc2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ddc34; end: 1003ddc87;  */

void FUN_1003ddc34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003ddc88; end: 1003dec4b;  */

void FUN_1003ddc88(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar15;
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
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100232238();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  FUN_1000285a8(0x112ddfb68,&UNK_10d9a70e8);
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
  uVar16 = uStack_d0;
  func_0x000107c61174();
  uVar17 = uStack_d8;
  func_0x000107c61174();
  uVar18 = uStack_e0;
  func_0x000107c61174();
  uVar19 = uStack_e8;
  func_0x000107c61174();
  uVar20 = uStack_f0;
  func_0x000107c61174();
  uVar21 = uStack_f8;
  func_0x000107c61174();
  uVar22 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar14 = uStack_128;
  func_0x000107c6157c(uStack_128);
  FUN_10017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar15;
  puVar15 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar15;
  puVar15 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar15;
  puVar15 = PTR_PTR_1126a81b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar14 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc4730);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1c450);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar14 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc4660);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc4750);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar28);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc4770);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef22540);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efc46a0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar25);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc4790);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc47b0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  lVar30 = *(long *)(param_2 + 0x20);
  func_0x000107c61174(uVar28);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efc47d0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(uVar14);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  lVar29 = *(long *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efc47f0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar28);
  func_0x000107c61174(uVar14);
  uVar27 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efb1490);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar27);
  func_0x000107c3e740(uVar28);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar30 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dec48);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0xe0) = lVar30;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar29 != 0) {
    func_0x000107c61170(uVar13);
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
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61574(uStack_128);
    *(long *)(param_2 + 0xe8) = lVar29;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dec4c);
  (*pcVar1)();
}



/* Entry: 1003dec4c; end: 1003dec9f;  */

void FUN_1003dec4c(void)

{
  long unaff_x20;
  
  FUN_1003ddc88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 1003deca0; end: 1003deca7;  */

void FUN_1003deca0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003deca8; end: 1003decfb;  */

void FUN_1003deca8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003decfc; end: 1003df31f;  */

void FUN_1003decfc(long *param_1,long param_2)

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
  FUN_10020d688();
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
  puVar1 = PTR_PTR_1126a7be0;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef22f50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar1);
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  uVar12 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(param_2 + 0x60) = uVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 1003df320; end: 1003df353;  */

void FUN_1003df320(void)

{
  long unaff_x20;
  
  FUN_1003decfc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1003df354; end: 1003df3f3;  */

void FUN_1003df354(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a6ed0;
  func_0x000107c610f8();
  func_0x000107c470dc();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  FUN_100083b20(&uStack_48);
  func_0x000107c5d420(uStack_48);
  func_0x000107c615e8(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 1003df3f4; end: 1003df47b; -[SCLogInSessionServices initWithLastLoginInfoRepository:loginSessionService:] */

long FUN_1003df3f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1003df47c; end: 1003df51f;  */

void FUN_1003df47c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126a6eb8;
  func_0x000107c610f8(PTR_PTR_1126a6eb8);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_100083b20(&uStack_48);
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a6ec0;
  func_0x000107c610f8();
  func_0x000107c45748();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uStack_48);
  *param_1 = puVar3;
  return;
}



/* Entry: 1003df520; end: 1003df593; -[SCGrapheneLastLoginInfoMetric2 init] */

undefined1 * FUN_1003df520(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9da0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003df594; end: 1003df68f; -[SCDefaultLastLoginInfoRepository initWithApplicationPreferences:circumstanceEngine:graphene:] */

undefined1 *
FUN_1003df594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e9d90;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126af348;
    func_0x000107c610f4();
    func_0x000107c4917c();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003df690; end: 1003df713; -[SCPhoneNumberDefaultFormatter initWithUseBetterSourceToGetCountryCode:multiSourceCountryProvider:] */

undefined1 *
FUN_1003df690(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ff960;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1003df714; end: 1003df71b;  */

void FUN_1003df714(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003df71c; end: 1003df747;  */

void FUN_1003df71c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003df748; end: 1003df7b7; -[SCDefaultLastLoginInfoRepository updateCachedHasLoggedInBefore] */

void FUN_1003df748(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c611ec(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x000107c3b850(param_1);
  func_0x000107c4d94c(puVar2,param_2,lVar1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 1003df7b8; end: 1003df857; -[SCDefaultLastLoginInfoRepository _getHasLoggedInBeforeFromPreferences] */

undefined * FUN_1003df7b8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1 + 8;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c44958();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3ebcc();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((uVar3 & 1) == 0) {
    func_0x000107c3b860(param_1);
    func_0x000107c61180();
    func_0x000107c4a0fc(puVar4,param_2,param_1);
    func_0x000107c61170(param_1);
  }
  else {
    puVar4 = (undefined *)0x1;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return puVar4;
}



/* Entry: 1003df858; end: 1003df8bb; -[SCPreferences hasLoggedInBefore] */

void FUN_1003df858(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110df8f18);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003df8bc; end: 1003dfa77; -[SCUserStateInfoServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003df8bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1 + _DAT_112722d64;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112722d68;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c4aa14();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1053ec854;
  puStack_68 = &UNK_110884cd8;
  puVar4 = PTR_PTR_1126ae720;
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61144(auStack_88,param_1);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_90,auStack_88);
  func_0x000107c61174(puVar4);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b8798;
  func_0x000107c610f4(PTR_PTR_1126b8798);
  func_0x000107c46034();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1003dfa78; end: 1003dfa7f; -[SCLogInSessionServices lastLoginInfoRepository] */

undefined8 FUN_1003dfa78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003dfa80; end: 1003dfb23; -[SCContactPermissionInfoServices initWithContactPermissionInfoProvider:contactPermissionManager:] */

undefined1 *
FUN_1003dfa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fdde0;
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



/* Entry: 1003dfb24; end: 1003dfb8f;  */

void FUN_1003dfb24(void)

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



/* Entry: 1003dfb90; end: 1003dfbff;  */

void FUN_1003dfb90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a76a0;
  func_0x000107c610f8();
  func_0x000107c45fe0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  *param_1 = puVar2;
  return;
}



/* Entry: 1003dfc00; end: 1003dfca3; -[SCFriendingConfigsServices initWithConfigsProvider:configsMutator:] */

undefined1 *
FUN_1003dfc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fdd88;
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



/* Entry: 1003dfca4; end: 1003dfccf;  */

void FUN_1003dfca4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003dfcd0; end: 1003dfcd7;  */

void FUN_1003dfcd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003dfcd8; end: 1003dfd2b;  */

void FUN_1003dfcd8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003dfd2c; end: 1003dfd3f;  */

void FUN_1003dfd2c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002307bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a81a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc4660);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc4710);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(lVar2 + 0x50) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0224);
  (*pcVar1)();
}


