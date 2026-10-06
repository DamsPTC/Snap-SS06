/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006f5750; end: 1006f57b3;  */

void FUN_1006f5750(void)

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



/* Entry: 1006f57b4; end: 1006f57bb;  */

void FUN_1006f57b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006f57bc; end: 1006f580f;  */

void FUN_1006f57bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006f5810; end: 1006f5817;  */

void FUN_1006f5810(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10028bf7c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1006f58a0(0);
  func_0x000107c613fc();
  FUN_1006f591c(uStack_38,uVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
  FUN_1006f5b04();
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_38;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1006f5818; end: 1006f589f;  */

void FUN_1006f5818(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10028bf7c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1006f58a0(0);
  func_0x000107c613fc();
  FUN_1006f591c(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  FUN_1006f5b04();
  *(undefined8 *)(param_2 + 0x18) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 1006f58a0; end: 1006f591b;  */

void FUN_1006f58a0(undefined8 param_1)

{
  if (lRam0000000112e2c300 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e690580);
  return;
}



/* Entry: 1006f591c; end: 1006f5a3f;  */

void FUN_1006f591c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  FUN_1000285a8(0x112e2c2c0,&UNK_10da155c0);
  func_0x000107c613fc();
  puVar1 = &UNK_101db2cd8;
  FUN_1000bdd8c(&UNK_101db2cd8,0);
  FUN_1000285a8(0x112e2c2c8,&UNK_10da155c8);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar2 = &UNK_101db2dec;
  FUN_1000bdd8c(&UNK_101db2dec,puVar1);
  FUN_1000285a8(0x112e2c2d0,&UNK_10da155d0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar3 = &UNK_101db2de8;
  FUN_1000bdd8c(&UNK_101db2de8,puVar1);
  uVar4 = 0;
  FUN_10028bfb8(0);
  func_0x000107c610f8();
  FUN_1006f5a60(puVar2,puVar3,uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 1006f5a40; end: 1006f5a5f;  */

void FUN_1006f5a40(void)

{
  func_0x000107c61168(&PTR_PTR_112e2c3f0);
  return;
}



/* Entry: 1006f5a60; end: 1006f5b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006f5a60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11302c590) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302c598) = param_2;
  func_0x000107c6157c(param_1);
  uVar1 = param_2;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11302c5a0) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 1006f5b04; end: 1006f5b13;  */

void FUN_1006f5b04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1006f5b14; end: 1006f5b67;  */

void FUN_1006f5b14(undefined8 *param_1)

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



/* Entry: 1006f5b68; end: 1006f5b6f;  */

void FUN_1006f5b68(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_100219494();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1006f5c24(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1006f5ca0(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  FUN_1006f5e1c();
  *(undefined8 *)(lVar1 + 0x20) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006f5b70; end: 1006f5c23;  */

void FUN_1006f5b70(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100219494();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1006f5c24(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1006f5ca0(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  FUN_1006f5e1c();
  *(undefined8 *)(param_2 + 0x20) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1006f5c24; end: 1006f5c9f;  */

void FUN_1006f5c24(undefined8 param_1)

{
  if (lRam0000000112def120 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e669b10);
  return;
}



/* Entry: 1006f5ca0; end: 1006f5d6f;  */

void FUN_1006f5ca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_110430dd0;
  func_0x000107c613fc(&UNK_110430dd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_1000285a8(0x112def0f0,&UNK_10d9bc1e0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  puVar2 = &UNK_101a55680;
  FUN_1000bdd8c(&UNK_101a55680,puVar1);
  uVar3 = 0;
  FUN_100219520(0);
  func_0x000107c610f8();
  FUN_1006f5d98(puVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 1006f5d70; end: 1006f5d93;  */

void FUN_1006f5d70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f5d94; end: 1006f5d97;  */

void FUN_1006f5d94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f5d98; end: 1006f5e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006f5d98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11303e780) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11303e788) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1006f5e1c; end: 1006f5e23;  */

void FUN_1006f5e1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1006f5e24; end: 1006f5e4f;  */

void FUN_1006f5e24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f5e50; end: 1006f5e57;  */

void FUN_1006f5e50(undefined8 *param_1)

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



/* Entry: 1006f5e58; end: 1006f5eab;  */

void FUN_1006f5e58(undefined8 *param_1)

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



/* Entry: 1006f5eac; end: 1006f5eb3;  */

void FUN_1006f5eac(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_10028d4f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1006f5f68(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1006f5fe4(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  FUN_1006f61a8();
  *(undefined8 *)(lVar1 + 0x20) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006f5eb4; end: 1006f5f67;  */

void FUN_1006f5eb4(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_10028d4f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1006f5f68(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_1006f5fe4(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  FUN_1006f61a8();
  *(undefined8 *)(param_2 + 0x20) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1006f5f68; end: 1006f5fe3;  */

void FUN_1006f5f68(undefined8 param_1)

{
  if (lRam0000000112e2d2a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e690e3c);
  return;
}



/* Entry: 1006f5fe4; end: 1006f60fb;  */

void FUN_1006f5fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_1104856f0;
  func_0x000107c613fc(&UNK_1104856f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_1000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  puVar2 = &UNK_101dc7dc8;
  FUN_1000bdd8c(&UNK_101dc7dc8,puVar1);
  FUN_1000285a8(0x112e2d278,&UNK_10da16388);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  puVar1 = &UNK_101dc7dc4;
  FUN_1000bdd8c(&UNK_101dc7dc4,puVar2);
  uVar3 = 0;
  FUN_10028d584(0);
  func_0x000107c610f8();
  FUN_1006f6124(puVar1,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 1006f60fc; end: 1006f611f;  */

void FUN_1006f60fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f6120; end: 1006f6123;  */

void FUN_1006f6120(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f6124; end: 1006f61a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006f6124(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11303e830) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1000bf56c();
  *(undefined8 *)(unaff_x20 + _DAT_11303e838) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1006f61a8; end: 1006f61af;  */

void FUN_1006f61a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1006f61b0; end: 1006f61db;  */

void FUN_1006f61b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f61dc; end: 1006f6347; -[SCMemoriesLegacyContentManagingServiceProvider provide] */

void FUN_1006f61dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126dbd78;
  func_0x000107c610f4(PTR_PTR_1126dbd78);
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_108d4bd50;
  puStack_68 = &UNK_110ac3118;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c46780(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006f6348; end: 1006f63eb; -[SCMemoriesLegacyContentManagingServices initWithEncryptedContentManager:filePathManager:] */

undefined1 *
FUN_1006f6348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fe770;
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



/* Entry: 1006f63ec; end: 1006f645f;  */

void FUN_1006f63ec(void)

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



/* Entry: 1006f6460; end: 1006f6467;  */

void FUN_1006f6460(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006f6468; end: 1006f64bb;  */

void FUN_1006f6468(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006f64bc; end: 1006f64cf;  */

void FUN_1006f64bc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
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
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002aed6c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_1006f6650(0);
  func_0x000107c613fc();
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
  func_0x000107c61174(uStack_98);
  FUN_1006f66cc(uStack_68,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_98);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  FUN_1006f6948();
  *(undefined8 *)(lVar1 + 0x48) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006f64d0; end: 1006f664f;  */

void FUN_1006f64d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  FUN_1002aed6c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_1006f6650(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uStack_98);
  FUN_1006f66cc(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uStack_98);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  FUN_1006f6948();
  *(undefined8 *)(param_2 + 0x48) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1006f6650; end: 1006f66cb;  */

void FUN_1006f6650(undefined8 param_1)

{
  if (lRam000000011349d2f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e691328);
  return;
}



/* Entry: 1006f66cc; end: 1006f68a3;  */

void FUN_1006f66cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = param_2;
  func_0x000107c4d600();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c51600();
  func_0x000107c61180();
  puVar5 = &UNK_1104860f8;
  func_0x000107c613fc(&UNK_1104860f8,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 *)(puVar5 + 0x38) = param_7;
  FUN_1000285a8(0x112e2d9f8,&UNK_10da167a0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar6 = &UNK_101dcd8f4;
  FUN_1000bdd8c(&UNK_101dcd8f4,puVar5);
  uVar7 = 0;
  FUN_1002aedf8(0);
  func_0x000107c610f8();
  FUN_1006f68c4(puVar6,uVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return;
}



/* Entry: 1006f68a4; end: 1006f68ab;  */

void FUN_1006f68a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f68ac; end: 1006f68b3; -[SCMemoriesNetworkerServices networker] */

undefined8 FUN_1006f68ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006f68b4; end: 1006f68bb; -[SCMemoriesDataObjectStorageService memoriesDataObjectContext] */

undefined8 FUN_1006f68b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006f68bc; end: 1006f68c3; -[SCDeviceInfoServices samplingProvider] */

undefined8 FUN_1006f68bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006f68c4; end: 1006f6947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006f68c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5708) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5710) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1006f6948; end: 1006f694f;  */

void FUN_1006f6948(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1006f6950; end: 1006f69a3;  */

void FUN_1006f6950(void)

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



/* Entry: 1006f69a4; end: 1006f69ab;  */

void FUN_1006f69a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006f69ac; end: 1006f69ff;  */

void FUN_1006f69ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006f6a00; end: 1006f6a0f;  */

void FUN_1006f6a00(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_1002b6ca0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  FUN_1006f6b3c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  FUN_1006f6bb8(uStack_58,uVar2,uVar3,uVar4,uStack_78);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_1006f6ebc();
  *(undefined8 *)(lVar1 + 0x38) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006f6a10; end: 1006f6b3b;  */

void FUN_1006f6a10(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_1002b6ca0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_1006f6b3c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  FUN_1006f6bb8(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_1006f6ebc();
  *(undefined8 *)(param_2 + 0x38) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1006f6b3c; end: 1006f6bb7;  */

void FUN_1006f6b3c(undefined8 param_1)

{
  if (lRam0000000112e2c208 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e690510);
  return;
}



/* Entry: 1006f6bb8; end: 1006f6dc7;  */

void FUN_1006f6bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar1 = &UNK_110483e38;
  func_0x000107c613fc(&UNK_110483e38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_1000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  puVar2 = &UNK_101db2ba0;
  FUN_1000bdd8c(&UNK_101db2ba0,puVar1);
  puVar1 = &UNK_110483e60;
  func_0x000107c613fc(&UNK_110483e60,0x30,7);
  *(undefined **)(puVar1 + 0x10) = puVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  FUN_1000285a8(0x112e2c1d0,&UNK_10da15568);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  puVar3 = &UNK_101db2b98;
  FUN_1000bdd8c(&UNK_101db2b98,puVar1);
  puVar1 = &UNK_110483e88;
  func_0x000107c613fc(&UNK_110483e88,0x28,7);
  *(undefined **)(puVar1 + 0x10) = puVar2;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  FUN_1000285a8(0x112e2c1d8,&UNK_10da15570);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(puVar3);
  puVar4 = &UNK_101db2b9c;
  FUN_1000bdd8c(&UNK_101db2b9c,puVar1);
  uVar5 = 0;
  FUN_1002b6d2c(0);
  func_0x000107c610f8();
  FUN_1006f6df8(puVar3,puVar4,uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return;
}



/* Entry: 1006f6dc8; end: 1006f6deb;  */

void FUN_1006f6dc8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f6dec; end: 1006f6df7;  */

void FUN_1006f6dec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f6df8; end: 1006f6ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006f6df8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff56c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff56d0) = param_2;
  func_0x000107c6157c(param_1);
  uVar1 = param_2;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff56c8) = uVar1;
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff56d8) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 1006f6ebc; end: 1006f6ec3;  */

void FUN_1006f6ebc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1006f6ec4; end: 1006f6f07;  */

void FUN_1006f6ec4(void)

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



/* Entry: 1006f6f08; end: 1006f6f0f;  */

void FUN_1006f6f08(undefined8 *param_1)

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



/* Entry: 1006f6f10; end: 1006f6f63;  */

void FUN_1006f6f10(undefined8 *param_1)

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



/* Entry: 1006f6f64; end: 1006f6f6f;  */

void FUN_1006f6f64(long *param_1)

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
  FUN_1002174e0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1006f7078(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1006f70f4(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_1006f728c();
  *(undefined8 *)(lVar1 + 0x30) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006f6f70; end: 1006f7077;  */

void FUN_1006f6f70(long *param_1,long param_2)

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
  FUN_1002174e0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1006f7078(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1006f70f4(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_1006f728c();
  *(undefined8 *)(param_2 + 0x30) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1006f7078; end: 1006f70f3;  */

void FUN_1006f7078(undefined8 param_1)

{
  if (lRam0000000112df0438 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66a4bc);
  return;
}



/* Entry: 1006f70f4; end: 1006f71ff;  */

void FUN_1006f70f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_1104327d0;
  func_0x000107c613fc(&UNK_1104327d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  FUN_1000285a8(0x112df0408,&UNK_10d9bd1f0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  puVar2 = &UNK_101a69dc4;
  FUN_1000bdd8c(&UNK_101a69dc4,puVar1);
  uVar3 = 0;
  FUN_10021756c(0);
  func_0x000107c610f8();
  FUN_1006f7208(puVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 1006f7200; end: 1006f7207;  */

void FUN_1006f7200(void)

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



/* Entry: 1006f7208; end: 1006f728b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1006f7208(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5740) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5748) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1006f728c; end: 1006f7293;  */

void FUN_1006f728c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1006f7294; end: 1006f72cf;  */

void FUN_1006f7294(void)

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



/* Entry: 1006f72d0; end: 1006f73e7; -[SCMemoriesCloudFSServiceProvider provide] */

void FUN_1006f72d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d8de8;
  func_0x000107c610f4(PTR_PTR_1126d8de8);
  func_0x000107c3bc14(param_1);
  func_0x000107c61180();
  func_0x000107c476e4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006f73e8; end: 1006f743f; -[SCMemoriesCloudFSServiceProvider _lazyMemoriesSnapInfoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f73e8(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127734d8;
    func_0x000107c61148(param_1);
  }
  lVar1 = param_1;
  func_0x000107c5b300(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1006f7440; end: 1006f744f; -[_TtC32MemoriesSnapInfoFetchingServices32MemoriesSnapInfoFetchingServices snapInfoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f7440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5710));
  return;
}



/* Entry: 1006f7450; end: 1006f74f3; -[SCMemoriesCloudFSServices initWithMemoriesCloudFS:snapInfoFetcher:] */

undefined1 *
FUN_1006f7450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702290;
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



/* Entry: 1006f74f4; end: 1006f756f;  */

void FUN_1006f74f4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006f7570; end: 1006f771f; -[SCMemoriesMediaRetrievalServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f7570(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11272b6ec;
    func_0x000107c61148();
  }
  lVar1 = lVar7;
  func_0x000107c4cb54();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11272b6f0;
    func_0x000107c61148();
  }
  lVar2 = lVar7;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11272b6f4;
    func_0x000107c61148();
  }
  lVar3 = lVar7;
  func_0x000107c42798();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_11272b6f8;
    func_0x000107c61148();
  }
  lVar4 = lVar7;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1058a219c;
  puStack_68 = &UNK_1108bb258;
  puVar5 = PTR_PTR_1126ae720;
  lStack_60 = lVar1;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  lStack_48 = lVar4;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_80);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126bf990;
  func_0x000107c610f4(PTR_PTR_1126bf990);
  func_0x000107c483e0();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1006f7720; end: 1006f7727; -[SCMemoriesCloudFSServices memoriesCloudFS] */

undefined8 FUN_1006f7720(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006f7728; end: 1006f772f; -[SCMemoriesLegacyContentManagingServices encryptedContentManager] */

undefined8 FUN_1006f7728(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006f7730; end: 1006f77a3; -[SCMemoriesMediaRetrievalServices initWithRetriever:] */

undefined1 * FUN_1006f7730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112709e98;
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



/* Entry: 1006f77a4; end: 1006f77e7;  */

void FUN_1006f77a4(void)

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



/* Entry: 1006f77e8; end: 1006f77ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f77e8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1001c7de8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e31378) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1006f77f0; end: 1006f785b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f77f0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1001c7de8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e31378) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1006f785c; end: 1006f7bef; -[SCMusicServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f785c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_11272be18;
  func_0x000107c61148();
  lVar2 = param_1 + _DAT_11272be1c;
  func_0x000107c61148(lVar2);
  lVar3 = lVar1;
  FUN_1006f7bf0(lVar1,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar4 = PTR_PTR_1126bfd38;
  func_0x000107c610f4();
  lVar1 = param_1 + _DAT_11272be20;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c5cdcc();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c48e2c();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61144(auStack_80,param_1);
  puVar6 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1058e34c4;
  puStack_90 = &UNK_1108bdff0;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  puStack_d8 = puVar9;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_1058e355c;
  puStack_c0 = &UNK_1108be020;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c61174(puVar4);
  puStack_b8 = puVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  puStack_110 = puVar9;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_1058e3740;
  puStack_f8 = &UNK_1108be050;
  func_0x000107c6111c(auStack_e0,auStack_80);
  puStack_f0 = puVar7;
  lStack_e8 = lVar3;
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272be30;
    func_0x000107c61148(param_1);
  }
  lVar1 = param_1;
  func_0x000107c42eac(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_118,auStack_80);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126bfd60;
  func_0x000107c610f4(PTR_PTR_1126bfd60);
  func_0x000107c48598();
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_118);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1006f7bf0; end: 1006f7c0b;  */

void FUN_1006f7bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110e09c38);
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110e0af78);
  func_0x000107c3edf4(puVar1);
  func_0x000107c61180();
  func_0x000107c545b8();
  func_0x000107c611b0();
  func_0x000107c57df8(puVar1);
  func_0x000107c611b0();
  func_0x000107c57f3c(puVar1);
  func_0x000107c611b0();
  func_0x000107c59d5c(puVar1);
  func_0x000107c611b0();
  func_0x000107c5343c(puVar1);
  func_0x000107c611b0();
  uVar2 = param_1;
  func_0x000107c4e604(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = uVar2;
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110e09c38);
  uVar5 = uVar3;
  func_0x000107c4e60c(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = param_2;
  func_0x000107c44588(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar3 = uVar2;
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c4c1b4();
  func_0x000107c61180();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110e0af78);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1006f7c0c; end: 1006f7e03;  */

void FUN_1006f7c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c3edf4(puVar1);
  func_0x000107c61180();
  func_0x000107c545b8();
  func_0x000107c611b0();
  func_0x000107c57df8(puVar1);
  func_0x000107c611b0();
  func_0x000107c57f3c(puVar1);
  func_0x000107c611b0();
  func_0x000107c59d5c(puVar1);
  func_0x000107c611b0();
  func_0x000107c5343c(puVar1);
  func_0x000107c611b0();
  uVar2 = param_3;
  func_0x000107c4e604(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = uVar2;
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar5 = uVar3;
  func_0x000107c4e60c(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = param_4;
  func_0x000107c44588(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  uVar3 = uVar2;
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c4c1b4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1006f7e04; end: 1006f7e3b; -[SCNGrpcParamsBuilder setRequestPathPrefix:] */

long FUN_1006f7e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1006f7e3c; end: 1006f7e43; -[SCComposerNetworkingBridgeServices grpcServiceFactory] */

undefined8 FUN_1006f7e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006f7e44; end: 1006f7ec3;  */

void FUN_1006f7e44(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c44580(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar3 = PTR_PTR_1126a7830;
  func_0x000107c610f8();
  func_0x000107c46ab0();
  func_0x000107c61170(uVar2);
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f7ec4);
  (*pcVar1)();
}



/* Entry: 1006f7ec4; end: 1006f7f37; -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl initWithGRPCClientFactory:] */

undefined1 * FUN_1006f7ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7fa0;
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



/* Entry: 1006f7f38; end: 1006f809f; -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl makeComposerGRPCServiceWith:grpcParamsBuilder:queue:] */

void FUN_1006f7f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b38f8;
  func_0x000107c610f4(PTR_PTR_1126b38f8);
  func_0x000107c46c40();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006f80a0; end: 1006f8113; -[SCComposerNetworkingGrpcService initWithGrpcService:] */

undefined1 * FUN_1006f80a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fe650;
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



/* Entry: 1006f8114; end: 1006f815b; -[SCMusicServices trackLoaderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006f8114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303ff60;
  func_0x000107c61428(param_1 + _DAT_11303ff60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1006f815c; end: 1006f8163;  */

void FUN_1006f815c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1006f8164();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1006f8164; end: 1006f8183;  */

void FUN_1006f8164(void)

{
  func_0x000107c61168(&PTR_PTR_112dc3238);
  return;
}



/* Entry: 1006f8184; end: 1006f81bf;  */

void FUN_1006f8184(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1006f8164();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1006f81c0; end: 1006f8233; -[SCMusicSelectionRetryHelper initWithTrackLoader:] */

undefined1 * FUN_1006f81c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eacc8;
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



/* Entry: 1006f8234; end: 1006f8357; -[SCObjcMusicServices initWithSelectionLoader:mediaLoader:experiments:featureSettings:notificationPresenterFactory:] */

undefined1 *
FUN_1006f8234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112703748;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006f8358; end: 1006f83c3;  */

void FUN_1006f8358(void)

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



/* Entry: 1006f83c4; end: 1006f83cb;  */

void FUN_1006f83c4(undefined8 *param_1)

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



/* Entry: 1006f83cc; end: 1006f841f;  */

void FUN_1006f83cc(undefined8 *param_1)

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



/* Entry: 1006f8420; end: 1006f8427;  */

void FUN_1006f8420(long *param_1)

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
  FUN_1002aef50();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1006f850c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1006f8588();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  func_0x0001006f85b0();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006f8428; end: 1006f850b;  */

void FUN_1006f8428(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002aef50();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1006f850c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1006f8588();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x0001006f85b0();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}


