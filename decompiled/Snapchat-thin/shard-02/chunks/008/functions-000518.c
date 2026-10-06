/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10218a54c; end: 10218a567;  */

void FUN_10218a54c(long param_1,long param_2)

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



/* Entry: 10218a568; end: 10218a5ab;  */

void FUN_10218a568(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e5e398 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010058ec44(0xff);
  puVar2 = PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628;
  func_0x000107c61520(PTR___sSo13UIWindowLevela5UIKit01_C23NumericRawRepresentableACMc_110351628,
                      uVar1);
  puRam0000000112e5e398 = puVar2;
  return;
}



/* Entry: 10218a5ac; end: 10218a5eb;  */

void FUN_10218a5ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10218a5ec; end: 10218a5ff;  */

bool FUN_10218a5ec(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10218a600; end: 10218a6ab;  */

void FUN_10218a600(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10218a6ac; end: 10218a6d7;  */

void FUN_10218a6ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10218a6d8; end: 10218a96f;  */

void FUN_10218a6d8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  puVar1 = *(undefined1 **)(*(long *)(unaff_x22 + 0xe0) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xe8) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar2 = 0;
    uVar8 = uVar6;
    func_0x000107c5ee24(0,uVar6,uVar7);
    puVar3 = PTR_PTR_1126b08b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar2,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c4766c();
    *(undefined **)(unaff_x22 + 0xf0) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b1060;
    func_0x000107c610f8();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08();
    *(undefined **)(unaff_x22 + 0xf8) = puVar3;
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126b1378;
    func_0x000107c61168();
    func_0x000107c4ed5c();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x100) = puVar3;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10218a970;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,0);
    func_0x000107c5ee20(uVar6,uVar7);
    uVar7 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar8 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    puVar3 = &UNK_1104d7568;
    func_0x000107c613fc(&UNK_1104d7568,0x18,7);
    puVar9 = (undefined8 *)(unaff_x22 + 0x90);
    *puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar5;
    *(code **)(unaff_x22 + 0xb0) = FUN_10218ae04;
    *(undefined **)(unaff_x22 + 0xb8) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa0) = &UNK_100f17820;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1104d7580;
    func_0x000107c60bc4();
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c42258(puVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(puVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x00010218adc4();
  func_0x000107c613f8(&UNK_1104d7678,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010218a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218a970; end: 10218a9af;  */

void FUN_10218a970(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218a9b0,0,0);
  return;
}



/* Entry: 10218a9b0; end: 10218aaa3;  */

void FUN_10218a9b0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xc0;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_10218aaa4;
  lVar1 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar1,1);
  puVar2 = &UNK_1104d75b8;
  func_0x000107c613fc(&UNK_1104d75b8,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x10218ae28;
  *(undefined **)(unaff_x22 + 0xb8) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0x101699d18;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_1104d75d0;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c50778(uVar3);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 10218aaa4; end: 10218ab0f;  */

void FUN_10218aaa4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x108) = *(long *)(lVar2 + 0x70);
  if (*(long *)(lVar2 + 0x70) == 0) {
    *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar2 + 0xc0);
    pcVar1 = FUN_10218ab10;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_10218ac74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10218ab10; end: 10218ac73;  */

void FUN_10218ab10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x22;
  
  puVar9 = *(undefined1 **)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x00010006c00c(puVar9,uVar3);
  puVar8 = puVar9;
  func_0x000107c5ee20(puVar9,uVar3);
  func_0x000107c4635c();
  func_0x000107c61170(puVar8);
  func_0x00010006c090(puVar9,uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  if (puVar7 != (undefined *)0x0) {
    func_0x00010006c090(uVar3,uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010218abec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar7);
    return;
  }
  func_0x00010218adc4();
  func_0x000107c613f8(&UNK_1104d7678,puVar9,0,0);
  *puVar9 = 2;
  func_0x000107c61654();
  func_0x00010006c090(uVar3,uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010218ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218ac74; end: 10218accb;  */

void FUN_10218ac74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010218acc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218accc; end: 10218ad7f;  */

void FUN_10218accc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_4 & 1) != 0) {
    func_0x00010006c00c();
    puVar3 = *(undefined8 **)(*(long *)(param_5 + 0x40) + 0x28);
    *puVar3 = param_1;
    puVar3[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_5);
    return;
  }
  func_0x00010218adc4();
  puVar1 = &UNK_1104d7678;
  func_0x000107c613f8(&UNK_1104d7678,param_1,0,0);
  *param_1 = 1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_5,uVar2);
  return;
}



/* Entry: 10218ad80; end: 10218ae03;  */

void FUN_10218ad80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10218ae04; end: 10218af97;  */

void FUN_10218ae04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10218af98; end: 10218afd7;  */

void FUN_10218af98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5e488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6584c;
  func_0x000107c61520(&UNK_10da6584c,&UNK_1104d7678);
  puRam0000000112e5e488 = puVar1;
  return;
}



/* Entry: 10218afd8; end: 10218afdf;  */

void FUN_10218afd8(long param_1,long param_2)

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



/* Entry: 10218afe0; end: 10218b0c3;  */

void FUN_10218afe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e22e8;
  func_0x000107c610f8(PTR_PTR_1126e22e8);
  func_0x000107c453e4();
  func_0x000107c545fc();
  func_0x000107c59560(puVar1,param_2,0xf);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10218b0c4; end: 10218b1db;  */

/* WARNING: Possible PIC construction at 0x00010218b154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218b190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218b158) */
/* WARNING: Removing unreachable block (ram,0x00010218b194) */
/* WARNING: Removing unreachable block (ram,0x00010218b1b0) */
/* WARNING: Removing unreachable block (ram,0x00010218b1c4) */

void FUN_10218b0c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_102186058();
  puVar1 = PTR_PTR_1126c4370;
  func_0x000107c610f8(PTR_PTR_1126c4370);
  func_0x000107c453e4();
  func_0x000107c59558();
  func_0x000107c59560(puVar1);
  func_0x000107c54e24(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0684c0);
  func_0x000107c56734(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10218b1dc; end: 10218b357;  */

/* WARNING: Possible PIC construction at 0x00010218b2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218b2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218b2bc) */
/* WARNING: Removing unreachable block (ram,0x00010218b2fc) */
/* WARNING: Removing unreachable block (ram,0x00010218b324) */
/* WARNING: Removing unreachable block (ram,0x00010218b338) */
/* WARNING: Removing unreachable block (ram,0x00010218b2d8) */

void FUN_10218b1dc(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    FUN_102186058();
  }
  puVar1 = PTR_PTR_1126c4370;
  func_0x000107c610f8(PTR_PTR_1126c4370);
  func_0x000107c453e4();
  func_0x000107c59558();
  func_0x000107c59560(puVar1);
  func_0x000107c54e24(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0684c0);
  func_0x000107c56734(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10218b358; end: 10218b4ab;  */

/* WARNING: Possible PIC construction at 0x00010218b41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218b45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218b420) */
/* WARNING: Removing unreachable block (ram,0x00010218b43c) */
/* WARNING: Removing unreachable block (ram,0x00010218b460) */
/* WARNING: Removing unreachable block (ram,0x00010218b468) */
/* WARNING: Removing unreachable block (ram,0x00010218b47c) */
/* WARNING: Removing unreachable block (ram,0x00010218b490) */

void FUN_10218b358(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    FUN_102186058();
  }
  puVar1 = PTR_PTR_1126c4370;
  func_0x000107c610f8(PTR_PTR_1126c4370);
  func_0x000107c453e4();
  func_0x000107c59558();
  func_0x000107c59560(puVar1);
  func_0x000107c54e24(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0684c0);
  func_0x000107c56734(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10218b4ac; end: 10218b57b;  */

/* WARNING: Possible PIC construction at 0x00010218b524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218b528) */
/* WARNING: Removing unreachable block (ram,0x00010218b554) */
/* WARNING: Removing unreachable block (ram,0x00010218b568) */

void FUN_10218b4ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4370;
  func_0x000107c610f8(PTR_PTR_1126c4370);
  func_0x000107c453e4();
  func_0x000107c59558();
  func_0x000107c59560(puVar1);
  func_0x000107c54e24(puVar1);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0684c0);
  func_0x000107c56734(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10218b57c; end: 10218b677;  */

/* WARNING: Possible PIC construction at 0x00010218b5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218b604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218b634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218b608) */
/* WARNING: Removing unreachable block (ram,0x00010218b5e4) */
/* WARNING: Removing unreachable block (ram,0x00010218b638) */
/* WARNING: Removing unreachable block (ram,0x00010218b64c) */
/* WARNING: Removing unreachable block (ram,0x00010218b660) */

void FUN_10218b57c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9b0;
  func_0x000107c610f8(PTR_PTR_1126bc9b0);
  func_0x000107c453e4();
  func_0x000107c57394();
  uVar2 = 0x504154;
  func_0x000107c5fadc(0x504154,0xe300000000000000);
  func_0x000107c58e30(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10218b678; end: 10218b6bb;  */

void FUN_10218b678(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10218b6bc; end: 10218b793;  */

void FUN_10218b6bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c4e454();
  }
  lVar1 = *(long *)(unaff_x20 + 0x50);
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61174();
    func_0x000107c4d2e4();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      func_0x000107c4fd6c(lVar2);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10218b794; end: 10218b7d3;  */

void FUN_10218b794(void)

{
  FUN_10218b6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10218b7d4; end: 10218b8c3;  */

void FUN_10218b7d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar5 = *unaff_x20;
  uVar4 = unaff_x20[7];
  puVar1 = &UNK_1104d77b0;
  func_0x000107c613fc(&UNK_1104d77b0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1104d77d8;
  func_0x000107c613fc(&UNK_1104d77d8,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  uStack_50 = 0x10218cf4c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104d77f0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10218b8c4; end: 10218bccb;  */

/* WARNING: Removing unreachable block (ram,0x00010218b9a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218b8c4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x12;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = auStack_c0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar10 - extraout_x12;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10218bccc();
    FUN_102194390();
    func_0x000107c613fc();
    func_0x00010006c00c(param_2,param_3);
    FUN_1021940a4(param_2,param_3);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = param_2;
    func_0x000107c61580();
    func_0x000107c61574(uVar8);
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    puVar2 = PTR_PTR_1126a9fe8;
    func_0x000107c610f8();
    func_0x000107c46f68(0x3ff0000000000000);
    puStack_b8 = puVar2;
    func_0x0001007d6d78(&puStack_b8);
    func_0x000107c61170(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c52030(uVar3);
    func_0x000107c61180();
    uVar8 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126c47f0;
    func_0x000107c610f8();
    uStack_98 = 0x10218cf58;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_101c4eb18;
    puStack_a0 = &UNK_1104d7818;
    ppuVar4 = &puStack_b8;
    lStack_90 = param_2;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c45848();
    func_0x000107c615e8(uVar8);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lStack_90);
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c61574(param_1);
      func_0x000107c61574(param_2);
    }
    else {
      func_0x000107c4edb8(puVar2);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar2;
      func_0x000107c61174();
      func_0x000107c61170(uVar8);
      FUN_10218bda0(puVar2);
      pcVar12 = *(code **)(lVar14 + 0x10);
      (*pcVar12)(lVar9,param_2 + _DAT_113804688,lVar1);
      puVar5 = &UNK_1104d77b0;
      func_0x000107c613fc(&UNK_1104d77b0,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,param_1);
      (*pcVar12)(puVar10,lVar9,lVar1);
      uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar13 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
      puVar6 = &UNK_1104d7850;
      func_0x000107c613fc(&UNK_1104d7850,uVar13 + lVar11,uVar7 | 7);
      *(undefined **)(puVar6 + 0x10) = puVar2;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      (**(code **)(lVar14 + 0x20))(puVar6 + uVar13,puVar10,lVar1);
      func_0x000107c61174(puVar2);
      *(undefined **)(lVar9 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar8 = 3;
      func_0x0001009548b0(3,0x100,0x60,3,0,0,&UNK_10da659d0,puVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(param_2);
      func_0x000107c61574(param_1);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar8);
      (**(code **)(lVar14 + 8))(lVar9,lVar1);
    }
  }
  return;
}



/* Entry: 10218bccc; end: 10218bd33;  */

/* WARNING: Possible PIC construction at 0x00010218bd14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218bd18) */

void FUN_10218bccc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000100c82230();
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c4e454();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  if (lVar2 == 0) {
    lVar2 = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    FUN_102193f90();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar2);
  return;
}



/* Entry: 10218bd34; end: 10218bd9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10218bd34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c48fd4(puVar1,param_2,puVar2,0);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 10218bda0; end: 10218bf47;  */

/* WARNING: Possible PIC construction at 0x00010218be7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218be80) */

void FUN_10218bda0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000107c4e98c();
  func_0x000107c61180();
  plVar1 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  puVar2 = &UNK_1104d77b0;
  func_0x000107c613fc(&UNK_1104d77b0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_10218d0a8;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_10218d0a8);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + 0x18),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 10218bf48; end: 10218c01f;  */

void FUN_10218bf48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      func_0x000107c61174();
      FUN_10218c020();
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        if (*(char *)(param_1 + 0x68) == '\x01') {
          *(undefined1 *)(param_1 + 0x68) = 0;
          *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
          func_0x000107c51bdc(lVar1);
        }
        func_0x000107c4e868(lVar1);
      }
      else {
        func_0x000107c4e454(lVar1);
      }
      func_0x000107c61574(param_1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10218c020; end: 10218c18f;  */

/* WARNING: Possible PIC construction at 0x00010218c0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218c150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218c0dc) */
/* WARNING: Removing unreachable block (ram,0x00010218c154) */

void FUN_10218c020(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  if (*(long *)(unaff_x20 + 0x50) == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    lVar1 = lVar3;
    func_0x000107c4d2e4();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c40114();
      func_0x000107c61180();
      lVar1 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        func_0x000107c40980(lVar1,param_2,7);
        func_0x000107c61180();
        lVar2 = lVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 10218c190; end: 10218c2df;  */

void FUN_10218c190(long param_1)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10218bccc();
    func_0x00010218c240();
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    puVar1 = PTR_PTR_1126a9fe8;
    func_0x000107c610f8();
    func_0x000107c46f68(0x3ff0000000000000);
    puStack_50 = puVar1;
    func_0x0001007d6d78(&puStack_50);
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10218c2e0; end: 10218c337;  */

void FUN_10218c2e0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10218bccc();
    func_0x00010218c240();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10218c338; end: 10218c47b;  */

void FUN_10218c338(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_90;
  uVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(lVar1);
    puVar2 = &UNK_1104d77b0;
    func_0x000107c613fc(&UNK_1104d77b0,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648(param_2);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    func_0x000107c61574(param_2);
    puVar3 = &UNK_1104d7918;
    func_0x000107c613fc(&UNK_1104d7918,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    uStack_70 = 0x10218d0c4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104d7930;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c61174(uVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10218c47c; end: 10218c4d7;  */

void FUN_10218c47c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10218c4d8(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10218c4d8; end: 10218c58f;  */

void FUN_10218c4d8(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  
  func_0x000107c49820();
  *(bool *)(unaff_x20 + 0x58) = param_1 == 0;
  if (param_1 == 0) {
    *(undefined1 *)(unaff_x20 + 0x68) = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar1 = PTR_PTR_1126a9fe8;
  func_0x000107c610f8();
  func_0x000107c46f68(uVar3);
  puStack_48 = puVar1;
  func_0x0001007d6d78(&puStack_48);
  func_0x000107c61170(puVar1);
  if ((param_1 == 0) && (pcVar2 = *(code **)(unaff_x20 + 0x20), pcVar2 != (code *)0x0)) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 10218c590; end: 10218c6f3;  */

void FUN_10218c590(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar4 = &puStack_b0;
  func_0x000107c3ab48(&puStack_b0,*param_1);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(lVar1);
    puVar2 = &UNK_1104d77b0;
    func_0x000107c613fc(&UNK_1104d77b0,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648(param_2);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    func_0x000107c61574(param_2);
    puVar3 = &UNK_1104d78c8;
    func_0x000107c613fc(&UNK_1104d78c8,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined **)(puVar3 + 0x18) = puStack_b0;
    *(undefined8 *)(puVar3 + 0x20) = uStack_a8;
    *(undefined **)(puVar3 + 0x28) = puStack_a0;
    uStack_90 = 0x10218d0b8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1104d78e0;
    puStack_88 = puVar3;
    func_0x000107c60bc4(&puStack_b0);
    func_0x000107c61574(puStack_88);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10218c6f4; end: 10218c76b;  */

void FUN_10218c6f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10218c76c(param_2,param_3,param_4);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10218c76c; end: 10218c83b;  */

void FUN_10218c76c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  puStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x000107c60a3c();
  func_0x000102192d98();
  if (((uVar1 & 1) != 0) && (*(long *)(unaff_x20 + 0x40) != 0)) {
    func_0x000107c4e454();
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      puStack_58 = *(undefined **)PTR__kCMTimeZero_110348670;
      uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_50 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      func_0x000107c51bdc();
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar2 = PTR_PTR_1126a9fe8;
  func_0x000107c610f8();
  func_0x000107c46f68(uVar3);
  puStack_58 = puVar2;
  func_0x0001007d6d78(&puStack_58);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10218c83c; end: 10218c8a3;  */

void FUN_10218c83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218c8a4,0,0);
  return;
}



/* Entry: 10218c8a4; end: 10218cacb;  */

void FUN_10218c8a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x22;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c42378(&uStack_78,*(undefined8 *)(unaff_x22 + 0x70));
  *(undefined8 *)(unaff_x22 + 0xa8) = uStack_78;
  *(ulong *)(unaff_x22 + 0xb0) = uStack_70;
  *(undefined8 *)(unaff_x22 + 0xb8) = uStack_68;
  uVar15 = uStack_70;
  func_0x000107c60a3c((undefined8 *)(unaff_x22 + 0xa8));
  if (-1 < (long)uVar15 && (uVar15 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff ||
      uVar15 - 1 < 0xfffffffffffff) {
    lVar12 = *(long *)(unaff_x22 + 0x78);
    func_0x000107c61428(lVar12 + 0x10,unaff_x22 + 0x40,0,0);
    lVar12 = lVar12 + 0x10;
    func_0x000107c61648();
    if (lVar12 != 0) {
      lVar9 = unaff_x22 + 0x10;
      lVar1 = *(long *)(unaff_x22 + 0x98);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar4 = *(long *)(unaff_x22 + 0x90);
      lVar7 = *(long *)(unaff_x22 + 0x78);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar10 = *(undefined8 *)(lVar12 + 0x38);
      func_0x000107c61174(uVar10);
      func_0x000107c61574(lVar12);
      puVar6 = &UNK_1104d77b0;
      func_0x000107c613fc(&UNK_1104d77b0,0x18,7);
      func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x58,0,0);
      lVar7 = lVar7 + 0x10;
      func_0x000107c61648(lVar7);
      func_0x000107c61644(puVar6 + 0x10,lVar7);
      func_0x000107c61574(lVar7);
      (**(code **)(lVar4 + 0x10))(uVar3,uVar5,uVar2);
      uVar11 = (ulong)*(byte *)(lVar4 + 0x50);
      uVar13 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
      uVar14 = lVar1 + uVar13 + 7 & 0xfffffffffffffff8;
      puVar8 = &UNK_1104d7878;
      func_0x000107c613fc(&UNK_1104d7878,uVar14 + 8,uVar11 | 7);
      *(undefined **)(puVar8 + 0x10) = puVar6;
      (**(code **)(lVar4 + 0x20))(puVar8 + uVar13,uVar3,uVar2);
      *(ulong *)(puVar8 + uVar14) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x30) = 0x10218d024;
      *(undefined **)(unaff_x22 + 0x38) = puVar8;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_1104d7890;
      func_0x000107c60bc4(lVar9);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000107c4e524(uVar10);
      func_0x000107c60bd0(lVar9);
      func_0x000107c61170(uVar10);
    }
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010218cac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218cacc; end: 10218ce7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218cacc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar6 - extraout_x8_00;
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  uVar8 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = uVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_00;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  puStack_98 = puVar6;
  uStack_90 = uVar8;
  if (*(long *)(param_2 + 0x48) == 0) {
    pcVar11 = *(code **)(lVar13 + 0x38);
    (*pcVar11)(lVar9,1,1,lVar1);
    pcVar7 = *(code **)(lVar13 + 0x10);
  }
  else {
    pcVar7 = *(code **)(lVar13 + 0x10);
    (*pcVar7)(lVar9,*(long *)(param_2 + 0x48) + _DAT_113804688,lVar1);
    pcVar11 = *(code **)(lVar13 + 0x38);
    (*pcVar11)(lVar9,0,1,lVar1);
  }
  (*pcVar7)(lVar10,param_3,lVar1);
  (*pcVar11)(lVar10,0,1,lVar1);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  func_0x000100029394(lVar9,lVar5);
  func_0x000100029394(lVar10,lVar5 + lVar12);
  pcVar7 = *(code **)(lVar13 + 0x30);
  lVar2 = lVar5;
  (*pcVar7)(lVar5,1,lVar1);
  uVar8 = uStack_90;
  if ((int)lVar2 == 1) {
    FUN_10218d068(lVar10,0x112d36580,&UNK_10d9016d0);
    FUN_10218d068(lVar9,0x112d36580,&UNK_10d9016d0);
    lVar12 = lVar5 + lVar12;
    (*pcVar7)(lVar12,1,lVar1);
    if ((int)lVar12 != 1) {
LAB_10218cda0:
      FUN_10218d068(lVar5,0x112d7e680,&UNK_10d95e350);
      goto LAB_10218ce54;
    }
    FUN_10218d068(lVar5,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar5,uStack_90);
    lVar2 = lVar5 + lVar12;
    (*pcVar7)(lVar2,1,lVar1);
    puVar6 = puStack_98;
    if ((int)lVar2 == 1) {
      FUN_10218d068(lVar10,0x112d36580,&UNK_10d9016d0);
      FUN_10218d068(lVar9,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar13 + 8))(uVar8,lVar1);
      goto LAB_10218cda0;
    }
    puVar3 = puStack_98;
    (**(code **)(lVar13 + 0x20))(puStack_98,lVar5 + lVar12,lVar1);
    func_0x000101553b98();
    uVar4 = uVar8;
    func_0x000107c5fab8(uVar8,puVar6,lVar1,puVar3);
    pcVar7 = *(code **)(lVar13 + 8);
    (*pcVar7)(puVar6,lVar1);
    FUN_10218d068(lVar10,0x112d36580,&UNK_10d9016d0);
    FUN_10218d068(lVar9,0x112d36580,&UNK_10d9016d0);
    (*pcVar7)(uVar8,lVar1);
    FUN_10218d068(lVar5,0x112d36580,&UNK_10d9016d0);
    if ((uVar4 & 1) == 0) goto LAB_10218ce54;
  }
  *(undefined8 *)(param_2 + 0x70) = param_1;
LAB_10218ce54:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 10218ce80; end: 10218cf2f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10218ce80(long param_1)

{
  undefined8 uVar1;
  long alStack_38 [3];
  
  if (param_1 != 0) {
    alStack_38[1] = 0;
    alStack_38[2] = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x26);
    func_0x000107c5fb78(0xd000000000000024,0x800000010f0684e0);
    uVar1 = 0x112d393f0;
    alStack_38[0] = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(alStack_38,alStack_38 + 1,uVar1,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(param_1);
    func_0x000107c6142c(alStack_38[2]);
  }
  return;
}



/* Entry: 10218cf30; end: 10218cf5f;  */

void FUN_10218cf30(long param_1,long param_2)

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



/* Entry: 10218cf60; end: 10218cfe7;  */

void FUN_10218cf60(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10218cfe8;
  plVar3[0xf] = lVar1;
  plVar3[0x10] = unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff));
  plVar3[0xe] = lVar2;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar3[0x11] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[0x12] = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  plVar3[0x13] = lVar2;
  uVar4 = lVar2 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x14] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218c8a4,0,0);
  return;
}



/* Entry: 10218cfe8; end: 10218d067;  */

void FUN_10218cfe8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010218d020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10218d068; end: 10218d0a7;  */

undefined8 FUN_10218d068(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10218d0a8; end: 10218d0cb;  */

void FUN_10218d0a8(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_90;
  uVar6 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(lVar1);
    puVar2 = &UNK_1104d77b0;
    func_0x000107c613fc(&UNK_1104d77b0,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648(lVar1);
    func_0x000107c61644(puVar2 + 0x10,lVar1);
    func_0x000107c61574(lVar1);
    puVar3 = &UNK_1104d7918;
    func_0x000107c613fc(&UNK_1104d7918,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    uStack_70 = 0x10218d0c4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104d7930;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c61174(uVar6);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10218d0cc; end: 10218d26f;  */

void FUN_10218d0cc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  uVar2 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  (**(code **)(lVar5 + 0x68))
            (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar2 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f068540);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar2);
  (**(code **)(lVar5 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0x3ff0000000000000;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar3 = PTR_PTR_1126a9fe8;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c46f68(0x3ff0000000000000);
  puStack_58 = puVar3;
  func_0x0001000285a8(0x112e5e618,&UNK_10da659e8);
  func_0x000107c613fc();
  ppuVar4 = &puStack_58;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + 0x30) = ppuVar4;
  return;
}



/* Entry: 10218d270; end: 10218d297;  */

void FUN_10218d270(long param_1,long param_2)

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



/* Entry: 10218d298; end: 10218d2f3; -[_TtC19GenAICreateSongFlow24CreateSongViewController didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218d298(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112e5e628;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_102190a70();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10218d2f4; end: 10218d353; -[_TtC19GenAICreateSongFlow24CreateSongViewController initWithValdiView:presentationType:] */

void FUN_10218d2f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAICreateSongFlow.CreateSongViewController",0x2c,
                      "init(valdiView:presentationType:)",0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10218d320);
  (*pcVar1)();
}



/* Entry: 10218d354; end: 10218d38b; -[_TtC19GenAICreateSongFlow24CreateSongViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10218d354(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e620));
  param_1 = param_1 + _DAT_112e5e628;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10218d38c; end: 10218d3ab;  */

void FUN_10218d38c(void)

{
  func_0x000107c61168(&PTR_PTR_112822ad0);
  return;
}



/* Entry: 10218d3ac; end: 10218d3cf;  */

undefined8 FUN_10218d3ac(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10218d3d0; end: 10218dad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218d3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long unaff_x20;
  int iVar20;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
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
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5e658);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      iVar20 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e5e6c8);
      uVar4 = 0xd00000000000001b;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010f0685d0);
      func_0x000107c4980c();
      func_0x000107c61170(uVar4);
      FUN_1021914f4(param_2,param_3,(long)iVar20);
      puVar5 = PTR_PTR_1126a9ff0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = PTR_PTR_1126a9ff8;
      func_0x000107c610f8(PTR_PTR_1126a9ff8);
      uVar4 = param_2;
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c48c98(puVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c53398(puVar5);
      func_0x000107c61170(puVar6);
      puVar7 = PTR_PTR_1126b33f0;
      func_0x000107c610f8();
      func_0x000107c4842c();
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5e708);
      *(undefined **)(unaff_x20 + _DAT_112e5e708) = puVar7;
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      puVar6 = PTR_PTR_113188488;
      puStack_a8 = PTR_PTR_113188488;
      func_0x0001000285a8(0x112e5e770,&UNK_10da65a70);
      func_0x000107c613fc();
      func_0x000107c61174(puVar6);
      ppuVar8 = &puStack_a8;
      func_0x00010042e6a0();
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5e6f8);
      *(undefined ***)(unaff_x20 + _DAT_112e5e6f8) = ppuVar8;
      func_0x000107c6157c();
      func_0x000107c61574(uVar4);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e700);
      uVar4 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000107c6142c(uVar4);
      uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112e5e6a0);
      func_0x00010218b7b4(0);
      func_0x000107c613fc();
      func_0x000107c61174();
      uVar4 = uVar19;
      FUN_10218d0cc();
      func_0x000107c61170(uVar19);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e728);
      uVar19 = *puVar1;
      *puVar1 = uVar4;
      puVar1[1] = &PTR_DAT_1104d7730;
      func_0x000107c6157c(uVar4);
      func_0x000107c615e8(uVar19);
      puVar6 = &UNK_1104d79c8;
      puVar9 = puVar6;
      func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar10 = &UNK_1104d79f0;
      func_0x000107c613fc(&UNK_1104d79f0,0x20,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(long *)(puVar10 + 0x18) = (long)iVar20;
      puVar11 = puVar6;
      func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      puVar12 = puVar6;
      func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
      func_0x000107c61614(puVar12 + 0x10);
      func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar13 = PTR_PTR_1126aa000;
      func_0x000107c610f8();
      puVar18 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_1021916a0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_102191164;
      puStack_90 = &UNK_1104d7a08;
      ppuVar14 = &puStack_a8;
      puStack_80 = puVar10;
      func_0x000107c60bc4(ppuVar14);
      uStack_b8 = 0x1021916a8;
      puStack_d8 = puVar18;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_1104d7a30;
      ppuVar15 = &puStack_d8;
      puStack_b0 = puVar11;
      func_0x000107c60bc4(ppuVar15);
      uStack_e8 = 0x1021916b0;
      puStack_108 = puVar18;
      uStack_100 = 0x42000000;
      pcStack_f8 = FUN_1021911d8;
      puStack_f0 = &UNK_1104d7a58;
      ppuVar16 = &puStack_108;
      puStack_e0 = puVar12;
      func_0x000107c60bc4(ppuVar16);
      uStack_118 = 0x1021916b8;
      puStack_138 = puVar18;
      uStack_130 = 0x42000000;
      puStack_128 = &UNK_1000f6b44;
      puStack_120 = &UNK_1104d7a80;
      ppuVar17 = &puStack_138;
      puStack_110 = puVar6;
      func_0x000107c60bc4();
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(puVar11);
      func_0x000107c6157c(puVar12);
      func_0x000107c6157c(puVar6);
      func_0x000107c48568();
      func_0x000107c60bd0(ppuVar17);
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c61574(puStack_110);
      func_0x000107c61574(puStack_e0);
      func_0x000107c61574(puStack_b0);
      puVar10 = puStack_80;
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar10);
      puVar9 = PTR_PTR_1126a6630;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c61174();
      puVar6 = puVar7;
      func_0x0001004575f0();
      puVar10 = puVar6;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x0001004575f0();
      puVar18 = puVar6;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126b34e8;
      func_0x000107c610f8();
      func_0x000107c486ec();
      puVar11 = PTR_PTR_1126aa008;
      func_0x000107c610f8();
      func_0x000107c47a18();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar6);
      puVar18 = PTR_PTR_1126aa010;
      func_0x000107c610f8();
      func_0x000107c49520();
      uVar19 = 0;
      FUN_10218d38c();
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      puVar10 = puVar18;
      FUN_102191318(puVar18,puVar7,unaff_x20,uVar19);
      puVar6 = puVar10;
      func_0x000106c733fc();
      func_0x000107c61180();
      func_0x000107c5a10c(puVar9);
      func_0x000107c615e8(puVar6);
      func_0x000107c61604(unaff_x20 + _DAT_112e5e720,puVar10);
      uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112e5e6f0);
      *(undefined8 *)(unaff_x20 + _DAT_112e5e6f0) = param_1;
      func_0x000107c615e8(uVar19);
      func_0x000107c615f0(param_1);
      func_0x000107c3e2c0();
      FUN_10218afe0();
      FUN_10218eb38();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61574(ppuVar8);
      func_0x000107c61574(uVar4);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar10);
    }
  }
  return;
}



/* Entry: 10218dad4; end: 10218dba7; -[_TtC19GenAICreateSongFlow23GenAICreateSongLauncher presentPreseededInUIContainer:conversationId:sourceText:isSourceFromMe:] */

/* WARNING: Possible PIC construction at 0x00010218db50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218db78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218db54) */
/* WARNING: Removing unreachable block (ram,0x00010218db7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218dad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  func_0x000107c5faec(param_5);
  puVar1 = (undefined8 *)(param_1 + _DAT_112e5e6e0);
  uVar2 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10218dba8; end: 10218dc3b;  */

/* WARNING: Possible PIC construction at 0x00010218dbe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218dbec) */
/* WARNING: Removing unreachable block (ram,0x00010218dc00) */
/* WARNING: Removing unreachable block (ram,0x00010218dc08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218dba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e6e0);
  uVar2 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10218dc3c; end: 10218dd73; -[_TtC19GenAICreateSongFlow23GenAICreateSongLauncher presentWithPromptInUIContainer:conversationId:initialPromptText:] */

/* WARNING: Possible PIC construction at 0x00010218dccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218dcd0) */

void FUN_10218dc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_5);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10218dba8(param_3,param_4,param_2,param_5,uVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10218dd74; end: 10218e2c7;  */

/* WARNING: Removing unreachable block (ram,0x00010218de10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218dd74(double param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  char param_6)

{
  long lVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong **ppuVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined1 auStack_1b8 [72];
  ulong *puStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = *(long *)(unaff_x20 + _DAT_112e5e6f8);
  if (lVar7 != 0) {
    func_0x000107c6157c(lVar7);
    func_0x000104886d18(&puStack_d0);
    func_0x000107c61574(lVar7);
    puVar3 = puStack_d0;
    puVar2 = PTR_PTR_113188488;
    func_0x000102191d30(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61174(puVar2);
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x000107c60118();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
      uStack_1d8 = *(undefined8 *)(unaff_x20 + _DAT_112e5e6a8);
      func_0x00010218b04c();
      func_0x000107c5eea0(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar9 + 8))(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
      if (param_6 == '\x01') {
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5e6c8);
        uVar5 = 0xd00000000000001b;
        func_0x000107c5fadc(0xd00000000000001b,0x800000010f0685d0);
        func_0x000107c4980c(uVar8);
        func_0x000107c61170(uVar5);
        param_5 = (long)(int)uVar8;
      }
      param_1 = param_1 * 1000.0;
      FUN_1021914f4(param_3,param_4,param_5);
      uVar5 = param_3;
      func_0x000107c5fb5c();
      uStack_140 = *(undefined1 *)(unaff_x20 + _DAT_112e5e6e8);
      uStack_168 = 0;
      uStack_160 = 1;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_e0 = 0;
      uStack_110 = CONCAT71(uStack_15f,1);
      uStack_118 = 0;
      uStack_f0 = CONCAT71(uStack_13f,uStack_140);
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      lVar9 = *(long *)(unaff_x20 + _DAT_112e5e688);
      puStack_170 = param_2;
      uStack_158 = uVar5;
      puStack_120 = param_2;
      uStack_108 = uVar5;
      func_0x000107c61174(param_2);
      lVar1 = lVar9;
      func_0x000107c42e5c();
      func_0x000107c61180();
      lVar7 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar7 != 0) {
        lVar1 = lVar7;
        func_0x000107c43d28();
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
        lVar7 = lVar1;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        lVar1 = lVar7;
        func_0x000107c5bcc0();
        func_0x000107c61170(lVar7);
        if (lVar1 == 1) {
          func_0x0001000d224c(&puStack_d0);
          puVar3 = puStack_d0;
          puVar4 = puStack_d0;
          func_0x000107c44184();
          func_0x000107c61180();
          func_0x000107c615e8();
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x70))();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x000107c6142c(param_4);
            func_0x000107c42e68();
            func_0x000107c61180();
            lVar1 = lVar9;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar9);
            if (lVar1 != 0) {
              func_0x000107c4bc38(lVar1);
              func_0x000107c615e8(lVar1);
            }
            uStack_a0 = CONCAT71(uStack_13f,uStack_140);
            uStack_a8 = uStack_148;
            uStack_b0 = uStack_150;
            uStack_98 = uStack_138;
            uStack_90 = uStack_130;
            uStack_c0 = CONCAT71(uStack_15f,uStack_160);
            uStack_c8 = uStack_168;
            puStack_d0 = puStack_170;
            uStack_b8 = uStack_158;
            ppuVar6 = &puStack_170;
            func_0x000102191834(ppuVar6,auStack_1b8);
            FUN_102191404(param_1);
            FUN_10218b358(&puStack_d0,ppuVar6);
            func_0x000102191870(&puStack_170);
            FUN_10218efd0();
            func_0x000102191870(&puStack_170);
          }
          else {
            func_0x000107c42e68();
            func_0x000107c61180();
            lVar1 = lVar9;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar9);
            if (lVar1 != 0) {
              func_0x000107c4bc38(lVar1);
              func_0x000107c615e8(lVar1);
            }
            FUN_10218ec40(param_1,param_2,param_3,param_4,&puStack_120);
            func_0x000102191870(&puStack_170);
            func_0x000107c6142c(param_4);
          }
          func_0x000107c61170(puVar4);
          return;
        }
        if (lVar1 == 3) {
          func_0x000107c42e68();
          func_0x000107c61180();
          lVar1 = lVar9;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar9);
          if (lVar1 != 0) {
            func_0x000107c4bc38(lVar1);
            func_0x000107c615e8(lVar1);
          }
          FUN_10218ec40(param_1,param_2,param_3,param_4,&puStack_120);
          func_0x000102191870(&puStack_170);
          func_0x000107c6142c(param_4);
          return;
        }
      }
      func_0x000107c6142c(param_4);
      uStack_a0 = CONCAT71(uStack_13f,uStack_140);
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_98 = uStack_138;
      uStack_90 = uStack_130;
      uStack_c0 = CONCAT71(uStack_15f,uStack_160);
      uStack_c8 = uStack_168;
      puStack_d0 = puStack_170;
      uStack_b8 = uStack_158;
      ppuVar6 = &puStack_170;
      func_0x000102191834(ppuVar6,auStack_1b8);
      FUN_102191404(param_1);
      FUN_10218b358(&puStack_d0,ppuVar6);
      func_0x000102191870(&puStack_170);
      FUN_10218efd0();
      func_0x000102191870(&puStack_170);
    }
  }
  return;
}



/* Entry: 10218e2c8; end: 10218e3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218e2c8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112e5e728);
    if (lVar3 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c615f0(lVar3);
      func_0x000107c61170(param_1);
      uVar4 = *(undefined8 *)(lVar3 + 0x38);
      puVar1 = &UNK_1104d7978;
      func_0x000107c613fc(&UNK_1104d7978,0x18,7);
      func_0x000107c61644(puVar1 + 0x10,lVar3);
      pcStack_58 = FUN_1021919dc;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1104d7bc0;
      ppuVar2 = &puStack_78;
      puStack_50 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(uVar4);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 10218e3d0; end: 10218e457;  */

void FUN_10218e3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_10218e458(param_1,param_2,param_3,param_4);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 10218e458; end: 10218e927;  */

/* WARNING: Possible PIC construction at 0x00010218e5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218e918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218e754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218e91c) */
/* WARNING: Removing unreachable block (ram,0x00010218e758) */
/* WARNING: Removing unreachable block (ram,0x00010218e4e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218e458(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lStack_160;
  undefined1 auStack_150 [72];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  lVar9 = *(long *)(unaff_x20 + _DAT_112e5e670);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar14 = *(long *)(unaff_x20 + _DAT_112e5e6f8);
    if (lVar14 != 0) {
      func_0x000107c6157c(lVar14);
      func_0x000104886d18(&puStack_c0);
      puVar17 = puStack_c0;
      puVar10 = PTR_PTR_113188498;
      func_0x000102191d30(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c61174();
      func_0x000107c61174();
      puVar11 = puVar17;
      func_0x000107c60118();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar17);
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000107c61574(lVar14);
      }
      else {
        puStack_c0 = PTR_PTR_1131884a0;
        puVar17 = PTR_PTR_1131884a0;
        func_0x000107c61174();
        func_0x0001007d6d78(&puStack_c0);
        func_0x000107c61170(puVar17);
        lVar15 = ((undefined8 *)(unaff_x20 + _DAT_112e5e700))[1];
        if (lVar15 == 0) {
          uVar13 = 0;
          lStack_160 = -0x2000000000000000;
        }
        else {
          uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e5e700);
          lStack_160 = lVar15;
        }
        uVar16 = ((undefined8 *)(unaff_x20 + _DAT_112e5e710))[1];
        if (uVar16 >> 0x3c < 0xf) {
          uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5e6e0);
          uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112e5e6e0))[1];
          uVar23 = ((undefined8 *)(unaff_x20 + _DAT_112e5e668))[1];
          uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112e5e668);
          uVar5 = *(undefined1 *)(unaff_x20 + _DAT_112e5e6e8);
          uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e5e710);
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e718);
          uVar19 = puVar1[1];
          puVar17 = (undefined *)*puVar1;
          uVar21 = puVar1[3];
          uStack_b0 = puVar1[2];
          uVar20 = puVar1[5];
          uVar18 = puVar1[4];
          uStack_88 = puVar1[7];
          uStack_90 = puVar1[6];
          uStack_80 = puVar1[8];
          puStack_c0 = puVar17;
          uStack_b8 = uVar19;
          uStack_a8 = uVar21;
          uStack_a0 = uVar18;
          uStack_98 = uVar20;
          if (puVar17 == (undefined *)0x0) {
            func_0x000100de78a0(uVar12,uVar16);
            func_0x000107c61434(lVar15);
            func_0x000107c6142c(lStack_160);
            puStack_108 = puVar10;
            func_0x000107c61174(puVar10);
            func_0x0001007d6d78(&puStack_108);
          }
          else {
            uVar6 = (undefined1)uStack_b0;
            uVar2 = param_3 & 0xffffffffffff;
            if ((param_4 & 0x2000000000000000) != 0) {
              uVar2 = param_4 >> 0x38 & 0xf;
            }
            bVar7 = (byte)uStack_90;
            if (uVar2 == 0) {
              param_3 = 0;
              param_4 = 0;
            }
            else {
              func_0x000107c61434(param_4);
            }
            uStack_f8 = uVar6;
            bStack_d8 = bVar7 & 1;
            puVar10 = &UNK_1104d79c8;
            puStack_108 = puVar17;
            uStack_100 = uVar19;
            uStack_f0 = uVar21;
            uStack_e8 = uVar18;
            uStack_e0 = uVar20;
            uStack_d0 = param_3;
            uStack_c8 = param_4;
            func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
            func_0x000107c61614(puVar10 + 0x10);
            puVar11 = &UNK_1104d7ae0;
            func_0x000107c613fc(&UNK_1104d7ae0,0xd0,7);
            *(undefined **)(puVar11 + 0x10) = puVar10;
            *(undefined8 *)(puVar11 + 0x18) = param_1;
            *(undefined8 *)(puVar11 + 0x20) = param_2;
            *(undefined8 *)(puVar11 + 0x30) = uVar23;
            *(undefined8 *)(puVar11 + 0x28) = uVar22;
            *(undefined8 *)(puVar11 + 0x38) = uVar12;
            *(ulong *)(puVar11 + 0x40) = uVar16;
            *(undefined8 *)(puVar11 + 0x48) = uVar13;
            *(long *)(puVar11 + 0x50) = lStack_160;
            puVar11[0x58] = uVar5;
            *(undefined8 *)(puVar11 + 0x88) = uStack_e0;
            *(undefined8 *)(puVar11 + 0x80) = uStack_e8;
            *(ulong *)(puVar11 + 0x98) = uStack_d0;
            *(ulong *)(puVar11 + 0x90) = CONCAT71(uStack_d7,bStack_d8);
            *(undefined8 *)(puVar11 + 0x68) = uStack_100;
            *(undefined **)(puVar11 + 0x60) = puStack_108;
            *(undefined8 *)(puVar11 + 0x78) = uStack_f0;
            *(ulong *)(puVar11 + 0x70) = CONCAT71(uStack_f7,uStack_f8);
            *(ulong *)(puVar11 + 0xa0) = uStack_c8;
            *(undefined8 *)(puVar11 + 0xa8) = uVar3;
            *(undefined8 *)(puVar11 + 0xb0) = uVar4;
            *(long *)(puVar11 + 0xb8) = lVar9;
            *(long *)(puVar11 + 0xc0) = lVar14;
            *(long *)(puVar11 + 200) = lVar8;
            func_0x000100de78a0(uVar12,uVar16);
            func_0x000107c6157c(lVar14);
            func_0x000100de78a0(uVar12,uVar16);
            func_0x000107c61434(lVar15);
            func_0x000107c61434(uVar4);
            FUN_1021917e4(&puStack_c0,auStack_150);
            func_0x000107c61434(uVar20);
            func_0x000107c61174(puVar17);
            func_0x00010006c00c(param_1,param_2);
            func_0x000107c615f0(uVar22);
            func_0x000102191834(&puStack_108,auStack_150);
            func_0x000107c615f0(lVar9);
            uVar13 = 3;
            func_0x0001001ca524(3,0x100,0x60,3,0,0,&UNK_10da65a80,puVar11);
            func_0x000107c61574(puVar11);
            func_0x000107c61574(uVar13);
            func_0x000102191870(&puStack_108);
            FUN_1021910f8(&puStack_c0);
            func_0x0001000b44c0(uVar12,uVar16);
          }
        }
        else {
          func_0x000107c61434(lVar15);
          func_0x000107c6142c(lStack_160);
          puStack_c0 = puVar10;
          func_0x000107c61174(puVar10);
          func_0x0001007d6d78(&puStack_c0);
          func_0x000107c61170(puVar10);
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 10218e928; end: 10218e97b;  */

void FUN_10218e928(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10218e97c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10218e97c; end: 10218eb37;  */

/* WARNING: Removing unreachable block (ram,0x00010218e9c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218e97c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e5e6f8);
  if (lVar5 != 0) {
    func_0x000107c6157c(lVar5);
    func_0x000104886d18(&puStack_78);
    puVar2 = puStack_78;
    puVar1 = PTR_PTR_113188498;
    func_0x000102191d30(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61174(puVar1);
    func_0x000107c61174();
    puVar3 = puVar2;
    func_0x000107c60118();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112e5e728);
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x38);
        puVar1 = &UNK_1104d7978;
        func_0x000107c613fc(&UNK_1104d7978,0x18,7);
        func_0x000107c61644(puVar1 + 0x10,lVar6);
        uStack_58 = 0x1021916c0;
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0x42000000;
        puStack_68 = &UNK_1000f6b44;
        puStack_60 = &UNK_1104d7aa8;
        ppuVar4 = &puStack_78;
        puStack_50 = puVar1;
        func_0x000107c60bc4(ppuVar4);
        puVar1 = puStack_50;
        func_0x000107c615f0(lVar6);
        func_0x000107c61574(puVar1);
        func_0x000107c4e524(uVar7);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(lVar6);
      }
      puStack_78 = PTR_PTR_113188488;
      puVar1 = PTR_PTR_113188488;
      func_0x000107c61174();
      func_0x0001007d6d78(&puStack_78);
      func_0x000107c61170(puVar1);
    }
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 10218eb38; end: 10218ec3f;  */

/* WARNING: Possible PIC construction at 0x00010218eb9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218eba0) */
/* WARNING: Removing unreachable block (ram,0x00010218ebd8) */
/* WARNING: Removing unreachable block (ram,0x00010218ec08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218eb38(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5e688);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c43d28(lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10218ec40; end: 10218efcf;  */

/* WARNING: Possible PIC construction at 0x00010218ee5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218ee6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218ef94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218efa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218ef98) */
/* WARNING: Removing unreachable block (ram,0x00010218ee70) */
/* WARNING: Removing unreachable block (ram,0x00010218ee60) */
/* WARNING: Removing unreachable block (ram,0x00010218efa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218ec40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  puVar10 = *(undefined **)(unaff_x20 + _DAT_112e5e6f8);
  if (puVar10 == (undefined *)0x0) {
    return;
  }
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112e5e6c0);
  func_0x000107c6157c(puVar10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar11 != 0) {
    uVar7 = uVar11;
    func_0x000107c49b8c();
    if ((uVar7 & 1) == 0) {
      uStack_98 = param_5[5];
      uStack_a0 = param_5[4];
      uStack_88 = param_5[7];
      uStack_90 = param_5[6];
      uStack_80 = param_5[8];
      uStack_b8 = param_5[1];
      puStack_c0 = (undefined *)*param_5;
      uStack_a8 = param_5[3];
      uStack_b0 = param_5[2];
      FUN_102191404(param_1);
      FUN_10218b1dc(&puStack_c0,uVar7,2);
      puVar8 = &UNK_1104d79c8;
      func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar9 = &UNK_1104d7c20;
      func_0x000107c613fc(&UNK_1104d7c20,0x28,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      puVar9[0x18] = 2;
      *(long *)(puVar9 + 0x20) = lVar6;
      puVar8 = &UNK_1104d7c48;
      func_0x000107c613fc(&UNK_1104d7c48,0x20,7);
      *(undefined **)(puVar8 + 0x10) = &UNK_10da65ae0;
      *(undefined **)(puVar8 + 0x18) = puVar9;
      func_0x0001001ca524(3,0x100,0x60,3,0,0,&UNK_10da65af0,puVar8,PTR___sytN_11034f1b0 + 8);
      goto code_r0x000107c61574;
    }
    func_0x000107c615e8(uVar11);
  }
  puVar8 = PTR_PTR_113188490;
  lVar5 = _DAT_112e5e6a8;
  lVar4 = _DAT_112e5e660;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e5e728);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112e5e728))[1];
  puStack_c0 = PTR_PTR_113188490;
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(puVar8);
  uVar13 = ((undefined8 *)(unaff_x20 + lVar4))[1];
  uVar16 = *(undefined8 *)(unaff_x20 + lVar4);
  uVar14 = ((undefined8 *)(unaff_x20 + lVar5))[1];
  uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x0001007d6d78(&puStack_c0);
  func_0x000107c61170(puVar8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e738);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar8 = &UNK_1104d79c8;
  func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = &UNK_1104d7bf8;
  func_0x000107c613fc(&UNK_1104d7bf8,0xc0,7);
  *(undefined8 *)(puVar9 + 0x18) = uVar13;
  *(undefined8 *)(puVar9 + 0x10) = uVar16;
  *(undefined8 *)(puVar9 + 0x20) = param_3;
  *(undefined8 *)(puVar9 + 0x28) = param_4;
  *(undefined8 *)(puVar9 + 0x30) = param_2;
  *(undefined **)(puVar9 + 0x38) = puVar8;
  uVar13 = param_5[4];
  uVar17 = param_5[7];
  uVar15 = param_5[6];
  *(undefined8 *)(puVar9 + 0x68) = param_5[5];
  *(undefined8 *)(puVar9 + 0x60) = uVar13;
  *(undefined8 *)(puVar9 + 0x78) = uVar17;
  *(undefined8 *)(puVar9 + 0x70) = uVar15;
  *(undefined8 *)(puVar9 + 0x80) = param_5[8];
  uVar17 = *param_5;
  uVar15 = param_5[3];
  uVar13 = param_5[2];
  *(undefined8 *)(puVar9 + 0x48) = param_5[1];
  *(undefined8 *)(puVar9 + 0x40) = uVar17;
  *(undefined8 *)(puVar9 + 0x58) = uVar15;
  *(undefined8 *)(puVar9 + 0x50) = uVar13;
  *(undefined8 *)(puVar9 + 0x90) = uVar14;
  *(undefined8 *)(puVar9 + 0x88) = uVar12;
  *(undefined8 *)(puVar9 + 0x98) = param_1;
  *(undefined8 *)(puVar9 + 0xa0) = uVar2;
  *(undefined8 *)(puVar9 + 0xa8) = uVar3;
  *(undefined **)(puVar9 + 0xb0) = puVar10;
  *(long *)(puVar9 + 0xb8) = lVar6;
  func_0x000107c6157c(puVar10);
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar16);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_2);
  func_0x000102191834(param_5,&puStack_c0);
  func_0x000107c615f0(uVar12);
  func_0x0001001ca524(3,0x100,0x60,3,0,0,&UNK_10da65ad0,puVar9,PTR___sytN_11034f1b0 + 8);
  puVar10 = puVar9;
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar10);
  return;
}



/* Entry: 10218efd0; end: 10218f13b;  */

/* WARNING: Possible PIC construction at 0x00010218f0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218f0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010218f104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218f0f8) */
/* WARNING: Removing unreachable block (ram,0x00010218f0dc) */
/* WARNING: Removing unreachable block (ram,0x00010218f108) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218efd0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e5e690);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = unaff_x20 + _DAT_112e5e720;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar2 = 0;
    func_0x00010439c014(0);
    func_0x000107c610f8();
    func_0x00010439b9d8(uVar2,0x17,0,0,0,0,0,0x42,0);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e5e698);
    func_0x00010439a550(0);
    func_0x000107c61174(puVar1);
    func_0x0001043998c4(0);
    func_0x000107c3eda8(uVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10218f13c; end: 10218f227;  */

/* WARNING: Possible PIC construction at 0x00010218f20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010218f210) */

void FUN_10218f13c(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = &UNK_1104d79c8;
  func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104d7c98;
  func_0x000107c613fc(&UNK_1104d7c98,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_1;
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  puVar1 = &UNK_1104d7cc0;
  func_0x000107c613fc(&UNK_1104d7cc0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10da65b00;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x0001001ca524(3,0x100,0x60,3,0,0,&UNK_10da65b08,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10218f228; end: 10218f317;  */

void FUN_10218f228(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x338) = param_15;
  *(undefined8 *)(unaff_x22 + 0x330) = param_12;
  *(undefined8 *)(unaff_x22 + 0x328) = param_1;
  *(undefined8 *)(unaff_x22 + 800) = param_11;
  *(undefined8 *)(unaff_x22 + 0x318) = param_10;
  *(undefined8 *)(unaff_x22 + 0x310) = param_9;
  *(undefined8 *)(unaff_x22 + 0x308) = param_8;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x340) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x348) = uVar2;
  func_0x000107c614f0(param_3);
  piVar4 = *(int **)(param_4 + 8);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x350) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10218f318;
                    /* WARNING: Could not recover jumptable at 0x00010218f314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar3,unaff_x22 + 0x1c0,param_5,param_6,param_7,unaff_x22 + 0x358,param_3,param_4);
  return;
}



/* Entry: 10218f318; end: 10218f3bf;  */

void FUN_10218f318(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x350);
  func_0x000107c615c0(uVar1);
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x340);
    func_0x000100eea164();
    func_0x000107c5fca8(uVar3,uVar1);
    pcVar2 = FUN_10218f64c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x340);
    *(undefined1 *)(lVar4 + 0x35a) = *(undefined1 *)(lVar4 + 0x358);
    func_0x000100eea164();
    func_0x000107c5fca8(uVar3,uVar1);
    pcVar2 = FUN_10218f3c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar3,uVar1);
  return;
}



/* Entry: 10218f3c0; end: 10218f64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218f3c0(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar4 = *(undefined1 *)(unaff_x22 + 0x35a);
  puVar1 = *(undefined1 **)(unaff_x22 + 0x348);
  func_0x000107c61574();
  FUN_101c56a48();
  puVar2 = &UNK_1106c7470;
  func_0x000107c613f8(&UNK_1106c7470,puVar1,0,0);
  *puVar1 = uVar4;
  puVar3 = puVar2;
  func_0x000107c614b0();
  func_0x000107c5fd5c();
  if (((ulong)puVar3 & 1) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x308);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x230,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar5 + _DAT_112e5e730);
      *(undefined8 *)(lVar5 + _DAT_112e5e730) = 0;
      func_0x000107c61170();
      func_0x000107c61574(uVar6);
    }
    lVar5 = *(long *)(unaff_x22 + 0x308);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x248,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      puVar8 = (undefined8 *)(lVar5 + _DAT_112e5e738);
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 1) = 1;
      func_0x000107c61170();
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x328);
    puVar8 = *(undefined8 **)(unaff_x22 + 0x310);
    lVar7 = *(long *)(unaff_x22 + 0x308);
    func_0x000107c602fc(0x15);
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000013,0x800000010f068640);
    *(undefined **)(unaff_x22 + 0x2e8) = puVar2;
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(unaff_x22 + 0x2e8,unaff_x22 + 0x2d8,uVar6,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2e0));
    *(undefined **)(unaff_x22 + 0x2f0) = puVar2;
    func_0x000107c614b0(puVar2);
    lVar5 = unaff_x22 + 0x359;
    func_0x000107c6147c(lVar5,unaff_x22 + 0x2f0,uVar6,&UNK_1106c7470,6);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x359);
    if ((int)lVar5 == 0) {
      uVar4 = 3;
    }
    uVar6 = *puVar8;
    *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
    *(undefined8 *)(unaff_x22 + 0x10) = uVar6;
    uVar11 = puVar8[5];
    uVar10 = puVar8[4];
    uVar9 = puVar8[7];
    uVar6 = puVar8[6];
    uVar13 = puVar8[3];
    uVar12 = puVar8[2];
    *(undefined8 *)(unaff_x22 + 0x50) = puVar8[8];
    *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar12;
    FUN_102191404(uVar14);
    FUN_10218b1dc(unaff_x22 + 0x10,lVar5,uVar4);
    puVar3 = PTR_PTR_113188488;
    *(undefined **)(unaff_x22 + 0x2f8) = PTR_PTR_113188488;
    func_0x000107c61174();
    func_0x0001007d6d78(unaff_x22 + 0x2f8);
    func_0x000107c61170(puVar3);
    func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x260,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61618();
    if (lVar7 != 0) {
      FUN_10218f13c(uVar4);
      func_0x000107c614ac(puVar2);
      func_0x000107c61170(lVar7);
      goto LAB_10218f620;
    }
  }
  func_0x000107c614ac(puVar2);
LAB_10218f620:
  func_0x000107c614ac(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010218f648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218f64c; end: 10218f973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218f64c(void)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x348);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(unaff_x22 + 0x308);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x278,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar6 + _DAT_112e5e730);
      *(undefined8 *)(lVar6 + _DAT_112e5e730) = 0;
      func_0x000107c61170();
      func_0x000107c61574(uVar7);
    }
    lVar6 = *(long *)(unaff_x22 + 0x308);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x290,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)(lVar6 + _DAT_112e5e738);
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 1;
      func_0x000107c61170();
    }
    lVar6 = *(long *)(unaff_x22 + 0x330);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x328);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x310);
    uVar5 = puVar4[3];
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar1 = *(undefined1 *)(puVar4 + 6);
    *(undefined8 *)(unaff_x22 + 0xa0) = *puVar4;
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x1e0);
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    *(undefined1 *)(unaff_x22 + 0xb0) = 0;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x1e8);
    *(undefined8 *)(unaff_x22 + 200) = uVar7;
    *(undefined1 *)(unaff_x22 + 0xd0) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xe0);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c61174();
    func_0x000107c61434(uVar7);
    FUN_102191404(uVar14);
    FUN_10218b0c4(unaff_x22 + 0x58,uVar7);
    if (lVar6 != 0) {
      lVar8 = *(long *)(unaff_x22 + 0x330);
      puVar3 = &UNK_1104d7ce8;
      func_0x000107c613fc(&UNK_1104d7ce8,0xa0,7);
      uVar7 = *(undefined8 *)(unaff_x22 + 800);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x318);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)(unaff_x22 + 0x70);
      *(undefined8 *)(puVar3 + 0x30) = uVar5;
      *(undefined8 *)(puVar3 + 0x48) = uVar10;
      *(undefined8 *)(puVar3 + 0x40) = uVar9;
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)(unaff_x22 + 0x90);
      *(undefined8 *)(puVar3 + 0x50) = uVar5;
      uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined8 *)(puVar3 + 0x18) = uVar7;
      *(undefined8 *)(puVar3 + 0x10) = uVar14;
      *(undefined8 *)(puVar3 + 0x28) = uVar9;
      *(undefined8 *)(puVar3 + 0x20) = uVar5;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
      *(undefined8 *)(puVar3 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1c8);
      *(undefined8 *)(puVar3 + 0x68) = uVar7;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1e0);
      *(undefined8 *)(puVar3 + 0x90) = *(undefined8 *)(unaff_x22 + 0x1e8);
      *(undefined8 *)(puVar3 + 0x88) = uVar7;
      *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(unaff_x22 + 0x98);
      *(undefined8 *)(puVar3 + 0x98) = *(undefined8 *)(unaff_x22 + 0x1f0);
      *(undefined8 *)(puVar3 + 0x80) = uVar9;
      *(undefined8 *)(puVar3 + 0x78) = uVar5;
      uVar7 = *(undefined8 *)(lVar8 + 0x20);
      uVar5 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x20) = 0x102191c90;
      *(undefined **)(lVar8 + 0x28) = puVar3;
      func_0x000107c615f0(uVar14);
      func_0x000102191834(unaff_x22 + 0xa0,unaff_x22 + 0x178);
      func_0x000102191cbc(unaff_x22 + 0x1c0,unaff_x22 + 0x1f8);
      func_0x00010058d43c(uVar7,uVar5);
    }
    lVar8 = *(long *)(unaff_x22 + 0x308);
    func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x2a8,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
      puVar4 = (undefined8 *)(lVar8 + _DAT_112e5e710);
      uVar5 = *puVar4;
      uVar9 = puVar4[1];
      *puVar4 = uVar7;
      puVar4[1] = uVar14;
      func_0x00010006c00c(uVar7);
      func_0x0001000b44c0(uVar5,uVar9);
      func_0x000107c61170(lVar8);
    }
    lVar8 = *(long *)(unaff_x22 + 0x308);
    func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x2c0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      puVar4 = (undefined8 *)(lVar8 + _DAT_112e5e718);
      uVar7 = *puVar4;
      *(undefined8 *)(unaff_x22 + 0xf0) = puVar4[1];
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
      uVar9 = puVar4[5];
      uVar14 = puVar4[4];
      uVar5 = puVar4[7];
      uVar7 = puVar4[6];
      uVar11 = puVar4[3];
      uVar10 = puVar4[2];
      *(undefined8 *)(unaff_x22 + 0x128) = puVar4[8];
      *(undefined8 *)(unaff_x22 + 0x110) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x108) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x120) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x118) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x100) = uVar11;
      *(undefined8 *)(unaff_x22 + 0xf8) = uVar10;
      uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar11 = *(undefined8 *)(unaff_x22 + 200);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar4[8] = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar4[5] = uVar11;
      puVar4[4] = uVar10;
      puVar4[7] = uVar13;
      puVar4[6] = uVar12;
      puVar4[1] = uVar5;
      *puVar4 = uVar7;
      puVar4[3] = uVar9;
      puVar4[2] = uVar14;
      func_0x000102191834(unaff_x22 + 0xa0,unaff_x22 + 0x130);
      FUN_1021910f8((undefined8 *)(unaff_x22 + 0xe8));
      func_0x000107c61170(lVar8);
    }
    if (lVar6 != 0) {
      FUN_10218b7d4(*(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8));
    }
    puVar3 = PTR_PTR_113188498;
    *(undefined **)(unaff_x22 + 0x300) = PTR_PTR_113188498;
    func_0x000107c61174();
    func_0x0001007d6d78(unaff_x22 + 0x300);
    FUN_102191c5c(unaff_x22 + 0x1c0);
    func_0x000102191870(unaff_x22 + 0xa0);
    func_0x000107c61170(puVar3);
  }
  else {
    FUN_102191c5c(unaff_x22 + 0x1c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010218f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218f974; end: 10218f9e3;  */

void FUN_10218f974(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218f9e4,uVar1,uVar2);
  return;
}



/* Entry: 10218f9e4; end: 10218fcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218f9e4(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  undefined *puStack_70;
  
  lVar11 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  lVar10 = unaff_x22 + 0x40;
  func_0x000107c61428(lVar11 + 0x10,lVar10,0,0);
  puVar2 = (undefined *)(lVar11 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) goto LAB_10218fca0;
  puVar3 = puVar2 + _DAT_112e5e720;
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    bVar1 = *(byte *)(unaff_x22 + 0x68);
    puVar4 = puVar3;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x000102194694();
        puStack_70 = puVar4;
        lVar11 = lVar10;
        func_0x000102194760();
      }
      else {
        func_0x0001021948f8();
        puStack_70 = puVar4;
        lVar11 = lVar10;
        func_0x0001021949c4();
      }
LAB_10218faa4:
      puVar5 = puStack_70;
      lVar12 = lVar11;
      func_0x00010219482c();
    }
    else {
      if (bVar1 == 2) {
        func_0x000102194a90();
        puStack_70 = puVar4;
        lVar11 = lVar10;
        func_0x000102194b5c();
        goto LAB_10218faa4;
      }
      func_0x000102194434();
      puStack_70 = puVar4;
      lVar11 = lVar10;
      func_0x000102194500();
      puVar5 = puStack_70;
      lVar12 = lVar11;
      func_0x0001021945c8();
    }
    func_0x000107c5fadc();
    *(code **)(unaff_x22 + 0x30) = FUN_10218fcc4;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_100de205c;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1104d7c60;
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar6);
    puVar7 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(lVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    lVar6 = 0x112d360a8;
    FUN_10219127c(0x112d360a8,&PTR_PTR_1126aed70,0x112d36e70,&UNK_10d901a80);
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 3;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined **)(lVar6 + 0x20) = puVar7;
    puVar5 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c61174(puVar7);
    func_0x000107c5fadc(puVar4,lVar10);
    func_0x000107c5fadc(puStack_70,lVar11);
    uVar8 = 0;
    func_0x000102191d30(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar9 = lVar6;
    func_0x000107c5fc48(lVar6,uVar8);
    func_0x000107c61574(lVar6);
    func_0x000107c48d50(puVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puStack_70);
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(lVar11);
    func_0x000107c6142c(lVar12);
    func_0x000107c4f018(puVar3);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    puVar2 = puVar5;
  }
  func_0x000107c61170(puVar2);
LAB_10218fca0:
                    /* WARNING: Could not recover jumptable at 0x00010218fcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218fcc4; end: 10218fccf;  */

void FUN_10218fcc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10218fcd0; end: 10218fd0b;  */

void FUN_10218fcd0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010218fd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10218fd0c; end: 10218fd57;  */

void FUN_10218fd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_17;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_18;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_16;
  *(undefined8 *)(unaff_x22 + 200) = param_15;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_14;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_13;
  *(undefined1 *)(unaff_x22 + 0x130) = param_11;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218fd58,0,0);
  return;
}



/* Entry: 10218fd58; end: 10218fdf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218fd58(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x40,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + _DAT_112e5e680);
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar3 = *plVar1;
    plVar1 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10218fdf8;
    lVar2 = *(long *)(unaff_x22 + 0x80);
    plVar1[0x1b] = *(long *)(unaff_x22 + 0x88);
    plVar1[0x1c] = lVar3;
    plVar1[0x1a] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10218a6d8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010218fdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10218fdf8; end: 10218fe9b;  */

void FUN_10218fdf8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long *unaff_x22;
  long lVar9;
  
  lVar8 = *unaff_x22;
  lVar9 = *unaff_x22;
  *(long *)(lVar8 + 0xf8) = param_1;
  *(long *)(lVar8 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xf0));
  if (unaff_x20 == 0) {
    plVar6 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(lVar8 + 0x108) = plVar6;
    *plVar6 = lVar9;
    plVar6[1] = (long)FUN_10218fe9c;
    uVar5 = *(undefined1 *)(lVar8 + 0x130);
    lVar9 = *(long *)(lVar8 + 0xb0);
    lVar1 = *(long *)(lVar8 + 0xa0);
    lVar3 = *(long *)(lVar8 + 0xa8);
    lVar2 = *(long *)(lVar8 + 0x90);
    lVar4 = *(long *)(lVar8 + 0x98);
    plVar6[9] = *(long *)(lVar8 + 0xb8);
    plVar6[10] = lVar2;
    *(undefined1 *)(plVar6 + 0x1f) = uVar5;
    plVar6[7] = lVar3;
    plVar6[8] = lVar9;
    plVar6[5] = lVar4;
    plVar6[6] = lVar1;
    plVar6[4] = param_1;
    pcVar7 = FUN_102187bcc;
  }
  else {
    pcVar7 = FUN_10218ff2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar7,0,0);
  return;
}



/* Entry: 10218fe9c; end: 10218ff2b;  */

void FUN_10218fe9c(undefined8 param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0x110) = param_1;
  *(long *)(lVar3 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x108));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(lVar3 + 0x120) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)FUN_102190034;
    lVar4 = *(long *)(lVar3 + 0xe8);
    lVar5 = *(long *)(lVar3 + 0xc0);
    plVar1[0xc] = *(long *)(lVar3 + 200);
    plVar1[0xd] = lVar4;
    plVar1[0xb] = lVar5;
    pcVar2 = FUN_1021904c0;
  }
  else {
    pcVar2 = FUN_102190394;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10218ff2c; end: 102190033;  */

void FUN_10218ff2c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c602fc(0x13);
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000011,0x800000010f0685f0);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x68),(undefined8 *)(unaff_x22 + 0x58),uVar1,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
  puVar2 = PTR_PTR_113188498;
  *(undefined8 *)(unaff_x22 + 0x70) = PTR_PTR_113188498;
  func_0x000107c61174();
  func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c614ac(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000102190030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102190034; end: 102190083;  */

void FUN_102190034(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x128) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102190084,0,0);
  return;
}



/* Entry: 102190084; end: 102190393;  */

void FUN_102190084(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar6 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = puVar6;
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c5e870(puVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar7);
  func_0x000107c61174(uVar16);
  func_0x000107c5e500(puVar6);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar16);
  lVar8 = 0x112e5e778;
  FUN_10219127c(0x112e5e778,&PTR_PTR_1126cfb00,0x112e5e780,&UNK_10dae5280);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = uVar17;
  uVar9 = 0;
  func_0x000102191d30(0,0x112e5e778,&PTR_PTR_1126cfb00);
  func_0x000107c61174();
  lVar10 = lVar8;
  func_0x000107c5fc48(lVar8,uVar9);
  func_0x000107c61574(lVar8);
  lVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  func_0x000107c61434(uVar5);
  lVar11 = lVar8;
  func_0x000107c5fc48(lVar8,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar8);
  puVar12 = puVar6;
  func_0x000107c3ecc8(puVar6);
  func_0x000107c61180();
  puVar7 = &UNK_1104d79c8;
  func_0x000107c613fc(&UNK_1104d79c8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,uVar3);
  puVar13 = &UNK_1104d7b08;
  func_0x000107c613fc(&UNK_1104d7b08,0x28,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar4;
  *(undefined **)(puVar13 + 0x18) = puVar7;
  *(undefined8 *)(puVar13 + 0x20) = uVar18;
  *(code **)(unaff_x22 + 0x30) = FUN_1021918a4;
  *(undefined **)(unaff_x22 + 0x38) = puVar13;
  puVar14 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100f5c588;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1104d7b20;
  func_0x000107c60bc4();
  uVar18 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar18);
  func_0x000107c51dd8(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c60bd0(puVar14);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000102190390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102190394; end: 1021904a3;  */

void FUN_102190394(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf8));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c602fc(0x13);
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000011,0x800000010f0685f0);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x68),(undefined8 *)(unaff_x22 + 0x58),uVar1,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
  puVar2 = PTR_PTR_113188498;
  *(undefined8 *)(unaff_x22 + 0x70) = PTR_PTR_113188498;
  func_0x000107c61174();
  func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c614ac(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001021904a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021904a4; end: 1021904bf;  */

void FUN_1021904a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021904c0,0,0);
  return;
}



/* Entry: 1021904c0; end: 102190543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021904c0(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_112e5e6d8);
  *(undefined8 *)(unaff_x22 + 0x70) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x78) = puVar1[1];
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102190544;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_10219095c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102190544; end: 102190583;  */

void FUN_102190544(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102190584,0,0);
  return;
}



/* Entry: 102190584; end: 1021906a3;  */

void FUN_102190584(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x22;
  
  puVar7 = *(undefined **)(unaff_x22 + 0x50);
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar7;
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x0001029c626c();
    func_0x000107c61170(puVar3);
    if (puVar4 != (undefined *)0x0) goto LAB_102190680;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  puVar4 = PTR_PTR_1126b5be8;
  func_0x000107c610f8(PTR_PTR_1126b5be8);
  func_0x000107c61434(uVar2);
  lVar6 = lVar5;
  func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar5);
  func_0x000107c45794(puVar4);
  func_0x000107c61170(lVar6);
  puVar3 = puVar7;
LAB_102190680:
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0001021906a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}



/* Entry: 1021906a4; end: 102190807;  */

/* WARNING: Possible PIC construction at 0x0001021907ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021907f0) */

void FUN_1021906a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    puStack_40 = (undefined *)0x0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x27);
    func_0x000107c6142c(uStack_38);
    puStack_40 = (undefined *)0xd000000000000025;
    uStack_38 = 0x800000010f068610;
    puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(uStack_38);
    puStack_40 = PTR_PTR_113188498;
    puVar1 = PTR_PTR_113188498;
    func_0x000107c61174();
    func_0x0001007d6d78(&puStack_40);
    func_0x000107c61170(puVar1);
    return;
  }
  puVar1 = &UNK_1104d7b58;
  func_0x000107c613fc(&UNK_1104d7b58,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10da65aa8;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(3,0x100,0x60,3,0,0,&UNK_10da65ab8,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102190808; end: 102190873;  */

void FUN_102190808(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102190874,uVar1,uVar2);
  return;
}



/* Entry: 102190874; end: 102190917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102190874(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    lVar2 = *(long *)(lVar1 + _DAT_112e5e708);
    bVar3 = lVar2 == 0;
    if (!bVar3) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c420bc(lVar2);
    }
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x000102190914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar3);
  return;
}



/* Entry: 102190918; end: 10219095b;  */

void FUN_102190918(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000102190958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10219095c; end: 102190a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10219095c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(param_2 + _DAT_112e5e678);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    puVar2 = &UNK_1104d7b80;
    func_0x000107c613fc(&UNK_1104d7b80,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    pcStack_40 = FUN_1021919ac;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100e46b24;
    puStack_48 = &UNK_1104d7b98;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c43050(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_3);
    return;
  }
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_1);
  return;
}



/* Entry: 102190a70; end: 102190dd3;  */

/* WARNING: Removing unreachable block (ram,0x000102190adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102190a70(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e738);
  if ((*(char *)(puVar1 + 1) != '\x01') &&
     (lVar9 = *(long *)(unaff_x20 + _DAT_112e5e6f8), lVar9 != 0)) {
    uVar11 = *puVar1;
    func_0x000107c6157c(lVar9);
    func_0x000104886d18(&uStack_b0);
    func_0x000107c61574(lVar9);
    puVar5 = PTR_PTR_113188490;
    func_0x000102191d30(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61174(puVar5);
    uVar6 = uStack_b0;
    func_0x000107c61174();
    uVar7 = uVar6;
    func_0x000107c60118();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar6);
    if ((uVar7 & 1) != 0) {
      FUN_102191404(uVar11);
      FUN_10218b4ac();
    }
  }
  lVar9 = _DAT_112e5e730;
  lVar10 = *(long *)(unaff_x20 + _DAT_112e5e730);
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x000107c6157c(lVar10);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar10);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar9);
  }
  *(undefined8 *)(unaff_x20 + lVar9) = 0;
  func_0x000107c61574(uVar11);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar10 = *(long *)(unaff_x20 + _DAT_112e5e690);
  lVar9 = lVar10;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar10);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar9 = _DAT_112e5e6f0;
  uVar11 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e5e6f0) != 0) {
    func_0x000107c41864();
    uVar11 = *(undefined8 *)(unaff_x20 + lVar9);
  }
  *(undefined8 *)(unaff_x20 + lVar9) = 0;
  func_0x000107c615e8(uVar11);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e5e6f8);
  *(undefined8 *)(unaff_x20 + _DAT_112e5e6f8) = 0;
  func_0x000107c61574(uVar11);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e700);
  uVar11 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar11);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e5e708);
  *(undefined8 *)(unaff_x20 + _DAT_112e5e708) = 0;
  func_0x000107c61170(uVar11);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5e710);
  uVar11 = *puVar1;
  uVar4 = puVar1[1];
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  func_0x0001000b44c0(uVar11,uVar4);
  puVar2 = (ulong *)(unaff_x20 + _DAT_112e5e718);
  uStack_88 = puVar2[5];
  uStack_90 = puVar2[4];
  uStack_78 = puVar2[7];
  uStack_80 = puVar2[6];
  uStack_70 = puVar2[8];
  uStack_a8 = puVar2[1];
  uStack_b0 = *puVar2;
  uStack_98 = puVar2[3];
  uStack_a0 = puVar2[2];
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[8] = 0;
  FUN_1021910f8(&uStack_b0);
  func_0x000107c61604(unaff_x20 + _DAT_112e5e720,0);
  plVar3 = (long *)(unaff_x20 + _DAT_112e5e728);
  lVar9 = *plVar3;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar9 + 0x38);
    puVar5 = &UNK_1104d7978;
    func_0x000107c613fc(&UNK_1104d7978,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar9);
    pcStack_c0 = FUN_102191140;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_1000f6b44;
    puStack_c8 = &UNK_1104d7990;
    ppuVar8 = &puStack_e0;
    puStack_b8 = puVar5;
    func_0x000107c60bc4(ppuVar8);
    puVar5 = puStack_b8;
    func_0x000107c615f0(lVar9);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar11);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(lVar9);
    lVar9 = *plVar3;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  func_0x000107c615e8(lVar9);
  return;
}



/* Entry: 102190dd4; end: 102190dfb; -[_TtC19GenAICreateSongFlow23GenAICreateSongLauncher dismiss] */

void FUN_102190dd4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102190a70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102190dfc; end: 102190e5b; -[_TtC19GenAICreateSongFlow23GenAICreateSongLauncher init] */

void FUN_102190dfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAICreateSongFlow.GenAICreateSongLauncher",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102190e28);
  (*pcVar1)();
}



/* Entry: 102190e5c; end: 102191053; -[_TtC19GenAICreateSongFlow23GenAICreateSongLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102190f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102190fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102190f70) */
/* WARNING: Removing unreachable block (ram,0x000102190fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102190e5c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e658));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5e660));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5e668));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e670));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e678));
  func_0x0001000834e4(param_1 + _DAT_112e5e680);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e688));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e690));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e698));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e6a0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5e6a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e6b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e6b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5e6c0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5e6c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5e6d0));
  return;
}


