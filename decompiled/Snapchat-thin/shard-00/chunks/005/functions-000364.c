/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100799bf0; end: 100799c1f;  */

undefined8 FUN_100799bf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100799b00();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 100799c20; end: 100799c3f;  */

void FUN_100799c20(long param_1,long param_2)

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



/* Entry: 100799c40; end: 100799c93;  */

void FUN_100799c40(undefined8 *param_1)

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



/* Entry: 100799c94; end: 100799c9f;  */

void FUN_100799c94(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  FUN_100235f50();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  func_0x00010079a0bc(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_10079a138(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_10079a314();
  *(undefined8 *)(lVar1 + 0x30) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 100799ca0; end: 100799da7;  */

void FUN_100799ca0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100235f50();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x00010079a0bc(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_10079a138(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_10079a314();
  *(undefined8 *)(param_2 + 0x30) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 100799da8; end: 100799daf;  */

void FUN_100799da8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100799db0; end: 100799e03;  */

void FUN_100799db0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100799e04; end: 100799e0b;  */

void FUN_100799e04(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001d4a68();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_100799ef0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_100799f6c();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_100799f94();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 100799e0c; end: 100799eef;  */

void FUN_100799e0c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001d4a68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_100799ef0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_100799f6c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_100799f94();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100799ef0; end: 100799f6b;  */

void FUN_100799ef0(undefined8 param_1)

{
  if (lRam0000000112df2750 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66bb30);
  return;
}



/* Entry: 100799f6c; end: 100799f93;  */

void FUN_100799f6c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 100799f94; end: 10079a02f;  */

void FUN_100799f94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110434b40;
  func_0x000107c613fc(&UNK_110434b40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  FUN_1000285a8(0x112df2720,&UNK_10d9c0780);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  puVar2 = &UNK_101a75afc;
  FUN_1000bdd8c(&UNK_101a75afc,puVar1);
  FUN_1001d4af4(0);
  func_0x000107c610f8();
  func_0x00010079a054(puVar2);
  return;
}



/* Entry: 10079a030; end: 10079a137;  */

void FUN_10079a030(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079a138; end: 10079a243;  */

void FUN_10079a138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_1104323d8;
  func_0x000107c613fc(&UNK_1104323d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  FUN_1000285a8(0x112deffc8,&UNK_10d9bcd80);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar2 = &UNK_101a649c4;
  FUN_1000bdd8c(&UNK_101a649c4,puVar1);
  uVar3 = 0;
  FUN_100235fdc(0);
  func_0x000107c610f8();
  FUN_10079a24c(puVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 10079a244; end: 10079a24b;  */

void FUN_10079a244(void)

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



/* Entry: 10079a24c; end: 10079a313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10079a24c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11303eaa0) = param_1;
  func_0x000107c6157c(param_1);
  uVar1 = 0x11303eab0;
  FUN_1000285a8(0x11303eab0,&UNK_10dcb7f80);
  puVar2 = &UNK_103fc1034;
  FUN_1000cb480(&UNK_103fc1034,0,uVar1);
  puVar3 = puVar2;
  FUN_1003a5b88();
  func_0x000107c61574(puVar2);
  *(undefined **)(unaff_x20 + _DAT_11303eaa8) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 10079a314; end: 10079a31b;  */

void FUN_10079a314(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10079a31c; end: 10079a357;  */

void FUN_10079a31c(void)

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



/* Entry: 10079a358; end: 10079a35f;  */

void FUN_10079a358(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10079a360; end: 10079a3b3;  */

void FUN_10079a360(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10079a3b4; end: 10079a3bb;  */

void FUN_10079a3b4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1002c7ae4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x00010079a7d4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_10079a850(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  FUN_10079aa10();
  *(undefined8 *)(lVar1 + 0x20) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 10079a3bc; end: 10079a46f;  */

void FUN_10079a3bc(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002c7ae4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x00010079a7d4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_10079a850(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  FUN_10079aa10();
  *(undefined8 *)(param_2 + 0x20) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10079a470; end: 10079a477;  */

void FUN_10079a470(undefined8 *param_1)

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



/* Entry: 10079a478; end: 10079a4cb;  */

void FUN_10079a478(undefined8 *param_1)

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



/* Entry: 10079a4cc; end: 10079a4d7;  */

void FUN_10079a4cc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002c79b8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  FUN_10079a5b0(0);
  func_0x000107c613fc();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_10079a62c(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  FUN_10079a798();
  *(undefined8 *)(lVar1 + 0x28) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 10079a4d8; end: 10079a5af;  */

void FUN_10079a4d8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002c79b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_10079a5b0(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_10079a62c(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  FUN_10079a798();
  *(undefined8 *)(param_2 + 0x28) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10079a5b0; end: 10079a62b;  */

void FUN_10079a5b0(undefined8 param_1)

{
  if (lRam000000011349d400 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e691464);
  return;
}



/* Entry: 10079a62c; end: 10079a71b;  */

void FUN_10079a62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_110486778;
  func_0x000107c613fc(&UNK_110486778,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  FUN_1000285a8(0x112e2dfb8,&UNK_10da16ca0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar2 = &UNK_101dd42d8;
  FUN_1000bdd8c(&UNK_101dd42d8,puVar1);
  uVar3 = 0;
  FUN_1002c7a44(0);
  func_0x000107c610f8();
  FUN_10079a74c(puVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 10079a71c; end: 10079a747;  */

void FUN_10079a71c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079a748; end: 10079a74b;  */

void FUN_10079a748(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079a74c; end: 10079a797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079a74c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e2e1c8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10079a798; end: 10079a79f;  */

void FUN_10079a798(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10079a7a0; end: 10079a84f;  */

void FUN_10079a7a0(void)

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



/* Entry: 10079a850; end: 10079a91f;  */

void FUN_10079a850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_1104869f8;
  func_0x000107c613fc(&UNK_1104869f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_1000285a8(0x112e2e0b0,&UNK_10da16e80);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  puVar2 = &UNK_101dd4480;
  FUN_1000bdd8c(&UNK_101dd4480,puVar1);
  uVar3 = 0;
  FUN_1002c7b70(0);
  func_0x000107c610f8();
  FUN_10079a948(puVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 10079a920; end: 10079a943;  */

void FUN_10079a920(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079a944; end: 10079a947;  */

void FUN_10079a944(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079a948; end: 10079aa0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10079a948(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e2fa48) = param_1;
  func_0x000107c6157c(param_1);
  uVar1 = 0x112e2fa58;
  FUN_1000285a8(0x112e2fa58,&UNK_10da18670);
  puVar2 = &UNK_101e0a020;
  FUN_1000cb480(&UNK_101e0a020,0,uVar1);
  puVar3 = puVar2;
  FUN_1003a5b88();
  func_0x000107c61574(puVar2);
  *(undefined **)(unaff_x20 + _DAT_112e2fa50) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 10079aa10; end: 10079aa17;  */

void FUN_10079aa10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10079aa18; end: 10079aa43;  */

void FUN_10079aa18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079aa44; end: 10079aa63;  */

void FUN_10079aa44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = 0;
  FUN_10079aa64(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar6 = &UNK_101bb8f74;
  FUN_10072927c(&UNK_101bb8f74,0,uVar5);
  puVar7 = puVar6;
  FUN_1000cad14();
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110451610;
  func_0x000107c613fc(&UNK_110451610,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar9;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = uVar4;
  *(undefined **)(puVar6 + 0x38) = puVar7;
  FUN_1000285a8(0x112e07250,&UNK_10d9db568);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar7);
  puVar8 = &UNK_101bb90c4;
  FUN_1000bdd8c(&UNK_101bb90c4,puVar6);
  uVar9 = 0;
  FUN_1002c7900(0);
  func_0x000107c610f8();
  FUN_10079abf8(puVar8,uVar9);
  func_0x000107c61574(puVar7);
  *param_1 = puVar8;
  return;
}



/* Entry: 10079aa64; end: 10079aaa3;  */

void FUN_10079aa64(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10079aaa4; end: 10079abf3;  */

void FUN_10079aaa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = 0;
  FUN_10079aa64(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = &UNK_101bb8f74;
  FUN_10072927c(&UNK_101bb8f74,0,uVar1);
  puVar3 = puVar2;
  FUN_1000cad14();
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110451610;
  func_0x000107c613fc(&UNK_110451610,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined **)(puVar2 + 0x38) = puVar3;
  FUN_1000285a8(0x112e07250,&UNK_10d9db568);
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(puVar3);
  puVar4 = &UNK_101bb90c4;
  FUN_1000bdd8c(&UNK_101bb90c4,puVar2);
  uVar1 = 0;
  FUN_1002c7900(0);
  func_0x000107c610f8();
  FUN_10079abf8(puVar4,uVar1);
  func_0x000107c61574(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10079abf4; end: 10079abf7;  */

void FUN_10079abf4(void)

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



/* Entry: 10079abf8; end: 10079ac43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079abf8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9ce8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10079ac44; end: 10079ac47;  */

void FUN_10079ac44(void)

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



/* Entry: 10079ac48; end: 10079ac93;  */

void FUN_10079ac48(void)

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



/* Entry: 10079ac94; end: 10079ac9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079ac94(undefined8 *param_1)

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
  FUN_1002c8f7c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ff4950) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ff4958) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ff4960) = uVar7;
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



/* Entry: 10079aca0; end: 10079ad43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079aca0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1002c8f7c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ff4950) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ff4958) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112ff4960) = param_4;
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



/* Entry: 10079ad44; end: 10079ae1b;  */

void FUN_10079ad44(void)

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



/* Entry: 10079ae1c; end: 10079b5eb;  */

void FUN_10079ae1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_18;
  *(undefined8 *)(unaff_x20 + 0x88) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_20;
  *(undefined8 *)(unaff_x20 + 0x98) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_22;
  return;
}



/* Entry: 10079b5ec; end: 10079b717;  */

void FUN_10079b5ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079b718; end: 10079b71f; -[SCCloudSyncServices cloudSync] */

undefined8 FUN_10079b718(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10079b720; end: 10079b727; -[SCMemoriesEncryptedDatabaseServices memoriesEncryptedDatabase] */

undefined8 FUN_10079b720(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10079b728; end: 10079b72f; -[SCMemoriesInternalSearchServices gallerySearchIndexer] */

undefined8 FUN_10079b728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10079b730; end: 10079b737; -[SCSnapDocEditorServices factory] */

undefined8 FUN_10079b730(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10079b738; end: 10079b75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079b738(void)

{
  FUN_100083b20();
  return;
}



/* Entry: 10079b760; end: 10079b777;  */

void FUN_10079b760(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_110452868;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110452818;
  return;
}



/* Entry: 10079b778; end: 10079b7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10079b778(void)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  return uStack_28;
}



/* Entry: 10079b7b0; end: 10079b7bb;  */

void FUN_10079b7b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&uStack_48,uVar2,uVar1,*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_10079b850();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  FUN_10079b870(uVar2,uVar1,uStack_48,uStack_50);
  *param_1 = uVar2;
  return;
}



/* Entry: 10079b7bc; end: 10079b84f;  */

void FUN_10079b7bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_10079b850();
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_10079b870(param_2,param_3,uStack_48,uStack_50);
  *param_1 = param_2;
  return;
}



/* Entry: 10079b850; end: 10079b86f;  */

void FUN_10079b850(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc400);
  return;
}



/* Entry: 10079b870; end: 10079bbe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10079b870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  byte bVar17;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  byte bStack_80;
  
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar2 = _DAT_112e07a40;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112e07a48;
  (**(code **)(lVar15 + 0x68))
            (auStack_b0 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f002500);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar15 + 8))(auStack_b0 + lVar1,lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112e07a50;
  auStack_90[0] = 0;
  FUN_1000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar6 = auStack_90;
  FUN_10006c248();
  *(undefined1 **)(unaff_x20 + lVar2) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112e07a58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e07a60) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  puVar7 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar7,puVar4);
  puVar6 = puVar7;
  FUN_10079bc40();
  puVar8 = puVar6;
  FUN_10079bd28();
  bVar17 = (byte)puVar8;
  uVar9 = 0;
  FUN_10079bf6c(0xd00000000000002a,0x800000010f002540,1);
  uVar10 = 0xd00000000000002b;
  FUN_10079bf6c(0xd00000000000002b,0x800000010f002570,0);
  uVar11 = uVar10;
  FUN_10079c068();
  uVar5 = uStack_a8;
  if (((ulong)puVar6 & 1) == 0) {
    if (((ulong)puVar8 & 1) == 0) {
      if ((uVar10 & 1) != 0) {
        bVar17 = 1;
        goto LAB_10079babc;
      }
    }
    else if ((uVar9 & 1) != 0) {
      bVar17 = 0;
      goto LAB_10079babc;
    }
    func_0x00010079c12c();
  }
  else {
    bVar17 = 0;
  }
LAB_10079babc:
  uVar16 = *(undefined8 *)(puVar7 + _DAT_112e07a50);
  bStack_80 = bVar17 & 1;
  func_0x000107c6157c(uVar16);
  puVar4 = PTR___sytN_11034f1b0 + 8;
  FUN_100075034(FUN_10079c314,auStack_90,puVar4);
  func_0x000107c61574(uVar16);
  uVar16 = uStack_a0;
  if ((uVar11 & 1) == 0) {
    puVar12 = &UNK_1104526a8;
    func_0x000107c613fc(&UNK_1104526a8,0x18,7);
    func_0x000107c61614(puVar12 + 0x10,puVar7);
    puVar13 = &UNK_1104526d0;
    func_0x000107c613fc(&UNK_1104526d0,0x28,7);
    *(undefined **)(puVar13 + 0x10) = puVar12;
    *(undefined8 *)(puVar13 + 0x18) = uVar5;
    *(undefined8 *)(puVar13 + 0x20) = uVar16;
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar16);
    *(undefined **)((long)alStack_c0 + lVar1) = puVar4;
    uVar14 = 0x60;
    func_0x0001009548b0(0x60,0,0x48,4,0,0,&UNK_10d9dc120,puVar13);
    func_0x000107c61574(puVar13);
    func_0x000107c61574(uVar14);
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  return puVar7;
}



/* Entry: 10079bbe8; end: 10079bc3f;  */

void FUN_10079bbe8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079bc40; end: 10079bd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10079bc40(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0027d0);
  lVar2 = lStack_38;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_38);
  func_0x000107c61170(uVar1);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5dc0c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
    func_0x000107c3ebcc(lVar3);
    func_0x000107c61170(lVar3);
  }
  return lVar2;
}



/* Entry: 10079bd04; end: 10079bd27;  */

void FUN_10079bd04(long param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000100655c3c();
  param_2 = param_2 & 0xffffffff;
  if (*(ulong *)(param_1 + 0x88) != param_2) {
    if (param_2 < *(ulong *)(param_1 + 0x88)) {
      uVar1 = *(ulong *)(param_1 + 200);
      if (param_2 <= *(ulong *)(param_1 + 200)) {
        uVar1 = param_2;
      }
      *(ulong *)(param_1 + 200) = uVar1;
    }
    func_0x000107c2fb50(param_1);
    *(undefined1 *)(param_1 + 0x111) = 1;
  }
  return;
}



/* Entry: 10079bd28; end: 10079bdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10079bd28(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f002770);
  lVar2 = lStack_38;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_38);
  func_0x000107c61170(uVar1);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5dc0c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
    func_0x000107c3ebcc(lVar3);
    func_0x000107c61170(lVar3);
  }
  return lVar2;
}



/* Entry: 10079bdec; end: 10079bf6b;  */

void FUN_10079bdec(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x88) != param_2) {
    if (param_2 < *(ulong *)(param_1 + 0x88)) {
      uVar1 = *(ulong *)(param_1 + 200);
      if (param_2 <= *(ulong *)(param_1 + 200)) {
        uVar1 = param_2;
      }
      *(ulong *)(param_1 + 200) = uVar1;
    }
    func_0x000107c2fb50(param_1);
    *(undefined1 *)(param_1 + 0x111) = 1;
  }
  return;
}



/* Entry: 10079bf6c; end: 10079c067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10079bf6c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  lVar1 = lStack_48;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar1 = lVar2;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar2 = lVar1;
      func_0x000107c6148c(lVar1,puVar3);
      if (lVar2 != 0) {
        func_0x000107c3ebcc();
        param_3 = (uint)lVar2;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return param_3 & 1;
}



/* Entry: 10079c068; end: 10079c1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10079c068(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f002790);
  lVar2 = lStack_38;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_38);
  func_0x000107c61170(uVar1);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5dc0c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
    func_0x000107c3ebcc(lVar3);
    func_0x000107c61170(lVar3);
  }
  return lVar2;
}



/* Entry: 10079c1cc; end: 10079c313; -[SCManualExposureValueImpl expose] */

/* WARNING: Possible PIC construction at 0x00010079c210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010079c294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010079c2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010079c298) */
/* WARNING: Removing unreachable block (ram,0x00010079c214) */
/* WARNING: Removing unreachable block (ram,0x00010079c300) */
/* WARNING: Removing unreachable block (ram,0x00010079c218) */
/* WARNING: Removing unreachable block (ram,0x00010079c2e0) */

void FUN_10079c1cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c5c218();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  if (lVar2 != 0) {
    func_0x000107c42bb4(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10079c314; end: 10079c31f;  */

void FUN_10079c314(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 10079c320; end: 10079c35b;  */

void FUN_10079c320(void)

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



/* Entry: 10079c35c; end: 10079c39f;  */

long FUN_10079c35c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10079c3a0; end: 10079c3b7;  */

undefined8 * FUN_10079c3a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10079c3b8; end: 10079c47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10079c3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5600) = param_1;
  func_0x000107c6157c(param_1);
  uVar1 = 0x112ff5610;
  FUN_1000285a8(0x112ff5610,&UNK_10dc62500);
  puVar2 = &UNK_103bd6bc8;
  FUN_1000cb480(&UNK_103bd6bc8,0,uVar1);
  puVar3 = puVar2;
  FUN_1003a5b88();
  func_0x000107c61574(puVar2);
  *(undefined **)(unaff_x20 + _DAT_112ff5608) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 10079c480; end: 10079c54b;  */

void FUN_10079c480(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079c54c; end: 10079c62f; -[SCMemoriesSoundSyncFeaturedStoryManagerServiceProvider provide] */

void FUN_10079c54c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bf978;
  func_0x000107c610f4(PTR_PTR_1126bf978);
  func_0x000107c47764();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10079c630; end: 10079c6a3; -[SCMemoriesSoundSyncFeaturedStoryManagerServices initWithMemoriesSoundSyncFeaturedStoryManager:] */

undefined1 * FUN_10079c630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f7760;
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



/* Entry: 10079c6a4; end: 10079c707;  */

void FUN_10079c6a4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079c708; end: 10079c70f;  */

void FUN_10079c708(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10079c710; end: 10079c763;  */

void FUN_10079c710(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10079c764; end: 10079ce0f;  */

void FUN_10079c764(long *param_1,long param_2)

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
  FUN_10023f740();
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
  puVar1 = PTR_PTR_1126a8548;
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
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34050);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010ef299d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc9bd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
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
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 10079ce10; end: 10079ce4b;  */

void FUN_10079ce10(void)

{
  long unaff_x20;
  
  FUN_10079c764(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10079ce4c; end: 10079ce53;  */

void FUN_10079ce4c(undefined8 *param_1)

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



/* Entry: 10079ce54; end: 10079cea7;  */

void FUN_10079ce54(undefined8 *param_1)

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



/* Entry: 10079cea8; end: 10079ceb3;  */

void FUN_10079cea8(undefined8 *param_1)

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
  FUN_1001dfde0();
  func_0x000107c613fc();
  FUN_10079cf80(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10079ceb4; end: 10079cf47;  */

void FUN_10079ceb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001dfde0();
  func_0x000107c613fc();
  FUN_10079cf80(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10079cf48; end: 10079cf7f;  */

void FUN_10079cf48(undefined8 param_1)

{
  if (lRam0000000112def1f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e669b80);
  return;
}



/* Entry: 10079cf80; end: 10079d05b;  */

void FUN_10079cf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10079cf48(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10079d0a0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010079d0d4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10079d05c; end: 10079d09f;  */

void FUN_10079d05c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 10079d0a0; end: 10079d19f;  */

void FUN_10079d0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10079d1a0; end: 10079d1cb;  */

void FUN_10079d1a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10079d1cc; end: 10079d237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079d1cc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  FUN_1003a5b88();
  *(long *)(unaff_x20 + _DAT_11303e7c0) = lVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11303e7b8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10079d238; end: 10079d26b;  */

void FUN_10079d238(void)

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



/* Entry: 10079d26c; end: 10079d55b; -[SCFriendshipFlashbacksServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079d26c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar1 = param_1 + _DAT_112727150;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_105655ee0;
  puStack_88 = &UNK_1108a47c0;
  puVar3 = PTR_PTR_1126ae720;
  lStack_80 = lVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar11 = (long)_DAT_112727154;
  lVar1 = param_1 + lVar11;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c44f4c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar11 = param_1 + lVar11;
  func_0x000107c61148();
  lVar5 = lVar11;
  func_0x000107c44f60();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  lVar1 = param_1 + _DAT_112727158;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar6 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c4cba0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11272715c;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112727160;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c44d64();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puStack_e8 = puVar9;
  uStack_e0 = 0xc2000000;
  puStack_d8 = &UNK_105655f3c;
  puStack_d0 = &UNK_1108a47f0;
  puVar8 = PTR_PTR_1126ae720;
  lStack_c8 = lVar4;
  lStack_c0 = lVar5;
  lStack_b8 = lVar7;
  lStack_b0 = lVar11;
  lStack_a8 = lVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61144(auStack_f0,param_1);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_f8,auStack_f0);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126bc730;
  func_0x000107c610f4(PTR_PTR_1126bc730);
  func_0x000107c46a9c();
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61120(auStack_f0);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10079d55c; end: 10079d5e3; -[SCGrapheneRegistry memoriesGraphene] */

void FUN_10079d55c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10079d5e4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f73e0 != -1) {
    FUN_10002a2fc(0x1137f73e0,&puStack_48);
  }
  uVar1 = uRam00000001137f73d8;
  func_0x000107c61174(uRam00000001137f73d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10079d5e4; end: 10079de2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079d5e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_5c8;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  undefined1 *puStack_5b0;
  code *pcStack_5a8;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_598 = &PTR____CFConstantStringClassReference_110f652b8;
  ppuStack_590 = &PTR____CFConstantStringClassReference_110f652d8;
  ppuStack_588 = &PTR____CFConstantStringClassReference_110f652f8;
  ppuStack_580 = &PTR____CFConstantStringClassReference_110f65318;
  ppuStack_578 = &PTR____CFConstantStringClassReference_110f65338;
  ppuStack_570 = &PTR____CFConstantStringClassReference_110f65358;
  ppuStack_568 = &PTR____CFConstantStringClassReference_110f65378;
  ppuStack_560 = &PTR____CFConstantStringClassReference_110f65398;
  ppuStack_558 = &PTR____CFConstantStringClassReference_110f653b8;
  ppuStack_550 = &PTR____CFConstantStringClassReference_110f653d8;
  ppuStack_548 = &PTR____CFConstantStringClassReference_110f653f8;
  ppuStack_540 = &PTR____CFConstantStringClassReference_110f65418;
  ppuStack_538 = &PTR____CFConstantStringClassReference_110f65438;
  ppuStack_530 = &PTR____CFConstantStringClassReference_110f65458;
  ppuStack_528 = &PTR____CFConstantStringClassReference_110f65478;
  ppuStack_520 = &PTR____CFConstantStringClassReference_110f65498;
  ppuStack_518 = &PTR____CFConstantStringClassReference_110f654b8;
  ppuStack_510 = &PTR____CFConstantStringClassReference_110edcc58;
  ppuStack_508 = &PTR____CFConstantStringClassReference_110f654d8;
  ppuStack_500 = &PTR____CFConstantStringClassReference_110f654f8;
  ppuStack_4f8 = &PTR____CFConstantStringClassReference_110f65518;
  ppuStack_4f0 = &PTR____CFConstantStringClassReference_110f65538;
  ppuStack_4e8 = &PTR____CFConstantStringClassReference_110f65558;
  ppuStack_4e0 = &PTR____CFConstantStringClassReference_110f65578;
  ppuStack_4d8 = &PTR____CFConstantStringClassReference_110f65598;
  ppuStack_4d0 = &PTR____CFConstantStringClassReference_110f655b8;
  ppuStack_4c8 = &PTR____CFConstantStringClassReference_110f655d8;
  ppuStack_4c0 = &PTR____CFConstantStringClassReference_110f655f8;
  ppuStack_4b8 = &PTR____CFConstantStringClassReference_110f65618;
  ppuStack_4b0 = &PTR____CFConstantStringClassReference_110f65638;
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110f65658;
  ppuStack_4a0 = &PTR____CFConstantStringClassReference_110f65678;
  ppuStack_498 = &PTR____CFConstantStringClassReference_110f65698;
  ppuStack_490 = &PTR____CFConstantStringClassReference_110f656b8;
  ppuStack_488 = &PTR____CFConstantStringClassReference_110f656d8;
  ppuStack_480 = &PTR____CFConstantStringClassReference_110f656f8;
  ppuStack_478 = &PTR____CFConstantStringClassReference_110f65718;
  ppuStack_470 = &PTR____CFConstantStringClassReference_110f65738;
  ppuStack_468 = &PTR____CFConstantStringClassReference_110f65758;
  ppuStack_460 = &PTR____CFConstantStringClassReference_110f65778;
  ppuStack_458 = &PTR____CFConstantStringClassReference_110f65798;
  ppuStack_450 = &PTR____CFConstantStringClassReference_110f657b8;
  ppuStack_448 = &PTR____CFConstantStringClassReference_110f657d8;
  ppuStack_440 = &PTR____CFConstantStringClassReference_110f657f8;
  ppuStack_438 = &PTR____CFConstantStringClassReference_110f65818;
  ppuStack_430 = &PTR____CFConstantStringClassReference_110f65838;
  ppuStack_428 = &PTR____CFConstantStringClassReference_110f65858;
  ppuStack_420 = &PTR____CFConstantStringClassReference_110f65878;
  ppuStack_418 = &PTR____CFConstantStringClassReference_110f65898;
  ppuStack_410 = &PTR____CFConstantStringClassReference_110f658b8;
  ppuStack_408 = &PTR____CFConstantStringClassReference_110f658d8;
  ppuStack_400 = &PTR____CFConstantStringClassReference_110f658f8;
  ppuStack_3f8 = &PTR____CFConstantStringClassReference_110f65918;
  ppuStack_3f0 = &PTR____CFConstantStringClassReference_110f65938;
  ppuStack_3e8 = &PTR____CFConstantStringClassReference_110f65958;
  ppuStack_3e0 = &PTR____CFConstantStringClassReference_110f65978;
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110f65998;
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110f659b8;
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110f659d8;
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110f659f8;
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110f65a18;
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110f65a38;
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110f65a58;
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110f65a78;
  ppuStack_398 = &PTR____CFConstantStringClassReference_110f65a98;
  ppuStack_390 = &PTR____CFConstantStringClassReference_110f65ab8;
  ppuStack_388 = &PTR____CFConstantStringClassReference_110f65ad8;
  ppuStack_380 = &PTR____CFConstantStringClassReference_110f65af8;
  ppuStack_378 = &PTR____CFConstantStringClassReference_110f65b18;
  ppuStack_370 = &PTR____CFConstantStringClassReference_110f65b38;
  ppuStack_368 = &PTR____CFConstantStringClassReference_110f65b58;
  ppuStack_360 = &PTR____CFConstantStringClassReference_110f65b78;
  ppuStack_358 = &PTR____CFConstantStringClassReference_110f65b98;
  ppuStack_350 = &PTR____CFConstantStringClassReference_110f65bb8;
  ppuStack_348 = &PTR____CFConstantStringClassReference_110f65bd8;
  ppuStack_340 = &PTR____CFConstantStringClassReference_110f65bf8;
  ppuStack_338 = &PTR____CFConstantStringClassReference_110f65c18;
  ppuStack_330 = &PTR____CFConstantStringClassReference_110f65c38;
  ppuStack_328 = &PTR____CFConstantStringClassReference_110f65c58;
  ppuStack_320 = &PTR____CFConstantStringClassReference_110f65c78;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110f65c98;
  ppuStack_310 = &PTR____CFConstantStringClassReference_110f65cb8;
  ppuStack_308 = &PTR____CFConstantStringClassReference_110f65cd8;
  ppuStack_300 = &PTR____CFConstantStringClassReference_110f65cf8;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110f65d18;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110f65d38;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110f65d58;
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110f65d78;
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110f65d98;
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110edbb78;
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110f65db8;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110f65dd8;
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110f65df8;
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110f65e18;
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110f65e38;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110f65e58;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110f65e78;
  ppuStack_290 = &PTR____CFConstantStringClassReference_110f65e98;
  ppuStack_288 = &PTR____CFConstantStringClassReference_110f65eb8;
  ppuStack_280 = &PTR____CFConstantStringClassReference_110f65ed8;
  ppuStack_278 = &PTR____CFConstantStringClassReference_110f65ef8;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110f65f18;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110f65f38;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110f65f58;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110f65f78;
  ppuStack_250 = &PTR____CFConstantStringClassReference_110f65f98;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110f65fb8;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110f65fd8;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110f65ff8;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110f66018;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110f66038;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110f66058;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110f66078;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110f66098;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110f660b8;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110f660d8;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110f660f8;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110f66118;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110f66138;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110f66158;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110f66178;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110f66198;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110f661b8;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f661d8;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f661f8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f66218;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f66238;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f66258;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110f66278;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110f66298;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110f662b8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110f662d8;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f662f8;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110f66318;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f66338;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110f66358;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f66378;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f66398;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f663b8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f663d8;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f663f8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f66418;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f66438;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f66458;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f66478;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f66498;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f664b8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f664d8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f664f8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f66518;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f66538;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f66558;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f66578;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f66598;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f665b8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f665d8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f665f8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f66618;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f66638;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f66658;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f66678;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f66698;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f666b8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f666d8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f666f8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f66718;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f66738;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f66758;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f66778;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f66798;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f667b8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f667d8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_598,0xac);
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c4fc78(uVar5,param_2,&PTR____CFConstantStringClassReference_110dbaad8,
                      &PTR____CFConstantStringClassReference_110daafd8,puVar2);
  func_0x000107c61180();
  uVar1 = uRam00000001137f73d8;
  uRam00000001137f73d8 = uVar3;
  func_0x000107c61170(uVar1);
  puVar4 = puVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  pcStack_5a8 = FUN_10079de2c;
  puStack_5c0 = puVar2;
  uStack_5b8 = uVar5;
  puStack_5b0 = &stack0xfffffffffffffff0;
  func_0x000107c61174();
  FUN_100083b20(&uStack_5c8);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_5c8);
  return;
}



/* Entry: 10079de2c; end: 10079de73; -[_TtC30MemoriesNetworkingUtilitiesAPI35MemoriesNetworkingUtilitiesServices headerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10079de2c(undefined8 param_1)

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



/* Entry: 10079de74; end: 10079de93;  */

void FUN_10079de74(void)

{
  func_0x000107c61168(&PTR_PTR_112dc22a8);
  return;
}



/* Entry: 10079de94; end: 10079decb;  */

void FUN_10079de94(long *param_1,long param_2)

{
  undefined8 unaff_x20;
  
  FUN_10079de74();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = unaff_x20;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}


