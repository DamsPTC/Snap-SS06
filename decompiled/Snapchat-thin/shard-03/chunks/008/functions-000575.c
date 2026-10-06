/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102dfcea4; end: 102dfcf17;  */

void FUN_102dfcea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1bcd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db54734;
  func_0x000107c61520(&UNK_10db54734,&UNK_1105d5988);
  puRam0000000112f1bcd8 = puVar1;
  return;
}



/* Entry: 102dfcf18; end: 102dfd08b;  */

void FUN_102dfcf18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0,lVar4,*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  FUN_102dfc8dc(uVar1,uVar3,uVar2,param_1,lVar4);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102dfd08c; end: 102dfd19f;  */

long FUN_102dfd08c(byte param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_80 [80];
  
  puVar7 = auStack_80;
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined1 **)(lVar4 + 0x28) = puVar7;
  uVar5 = 0xd000000000000027;
  pcVar1 = "s already presenting";
  if (param_1 != 2) {
    uVar5 = 0xd000000000000024;
    pcVar1 = "Launch requested source=";
  }
  uVar2 = 0xd000000000000031;
  pcVar3 = "Games Explorer UI container is unavailable";
  if (param_1 != 0) {
    uVar2 = 0xd00000000000002a;
    pcVar3 = "Games Explorer presenter is unavailable";
  }
  if (param_1 < 2) {
    pcVar1 = pcVar3 + 0x10;
    uVar5 = uVar2;
  }
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  *(ulong *)(lVar4 + 0x38) = (ulong)pcVar1 | 0x8000000000000000;
  lVar6 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
  return lVar6;
}



/* Entry: 102dfd1a0; end: 102dfd1b3;  */

bool FUN_102dfd1a0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102dfd1b4; end: 102dfd28b;  */

void FUN_102dfd1b4(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690((ulong)bVar1 + 1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102dfd28c; end: 102dfd34f;  */

void FUN_102dfd28c(long *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20 + 1;
  return;
}



/* Entry: 102dfd350; end: 102dfd38f;  */

void FUN_102dfd350(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1bce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5470c;
  func_0x000107c61520(&UNK_10db5470c,&UNK_1105d5988);
  puRam0000000112f1bce0 = puVar1;
  return;
}



/* Entry: 102dfd390; end: 102dfd3b7;  */

void FUN_102dfd390(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102dfd408();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 102dfd3b8; end: 102dfd3ff;  */

void FUN_102dfd3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  FUN_102dfd408();
  uVar2 = uVar1;
  func_0x000102dfd448();
  uVar3 = uVar2;
  func_0x000100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 102dfd400; end: 102dfd407;  */

void FUN_102dfd400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 102dfd408; end: 102dfd487;  */

void FUN_102dfd408(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1bce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db54654;
  func_0x000107c61520(&UNK_10db54654,&UNK_1105d5988);
  puRam0000000112f1bce8 = puVar1;
  return;
}



/* Entry: 102dfd488; end: 102dfd4bb;  */

undefined4 FUN_102dfd488(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x302010004 >> ((param_1 & 7) << 3));
  if (4 < param_1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 102dfd4bc; end: 102dfd6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102dfd4bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  uVar1 = *(undefined8 *)(param_3 + _DAT_112fa6548);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 102dfd6ac; end: 102dfd6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfd6ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = 0;
  FUN_102dfce2c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f1bca0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f1bca8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102dfd6b4; end: 102dfd6cf;  */

void FUN_102dfd6b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102dfd6d0; end: 102dfd71b;  */

void FUN_102dfd6d0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dfd71c; end: 102dfd7a3;  */

void FUN_102dfd71c(undefined8 param_1)

{
  if (lRam0000000112f1bd20 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e732674);
  return;
}



/* Entry: 102dfd7a4; end: 102dfd85b;  */

void FUN_102dfd7a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_1105d5ab0;
  func_0x000107c613fc(&UNK_1105d5ab0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x0001000285a8(0x112ef0708,&UNK_10db54780);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar1);
  pcVar3 = FUN_102dfd888;
  func_0x0001000bdd8c(FUN_102dfd888,puVar2);
  uVar4 = 0;
  func_0x00010037cbac(0);
  func_0x000107c610f8();
  func_0x0001038a7810(pcVar3,uVar4);
  *param_1 = pcVar3;
  return;
}



/* Entry: 102dfd85c; end: 102dfd887;  */

void FUN_102dfd85c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dfd888; end: 102dfd88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dfd888(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = 0;
  FUN_102dfce2c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f1bca0) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f1bca8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102dfd88c; end: 102dfd8bb;  */

/* WARNING: Possible PIC construction at 0x000102dfd8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dfd8ac) */

void FUN_102dfd88c(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 102dfd8bc; end: 102dfd97b;  */

undefined8 * FUN_102dfd8bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c615f0();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 102dfd97c; end: 102dfd9c7;  */

undefined8 * FUN_102dfd97c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 102dfd9c8; end: 102dfda5f;  */

int FUN_102dfd9c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102dfda60; end: 102dfdad7;  */

undefined1  [16] FUN_102dfda60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  undefined8 uStack_38;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x0001000d224c(&uStack_38);
  func_0x000102e00944(uStack_38);
  func_0x0001033bc5a8(uVar1,uVar2,0xb,(uint)uStack_38 & 0x101,param_2);
  func_0x000107c6142c(param_2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102dfdad8; end: 102dfdadf;  */

undefined8 * FUN_102dfdad8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c615f0();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 102dfdae0; end: 102dfdb7b;  */

void FUN_102dfdae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 102dfdb7c; end: 102dfddab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102dfdb7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c41284();
  func_0x000107c61180();
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4d80c();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_1130344b8);
  func_0x000107c61174();
  uVar4 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  puStack_60 = &UNK_1105d5bf0;
  ppuStack_58 = &PTR_DAT_1105d5c10;
  uStack_78 = uVar1;
  uStack_70 = uVar3;
  uStack_68 = uVar4;
  func_0x000102dfeba8(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar3);
  uVar5 = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x000102dfebc8();
  uVar6 = 0;
  func_0x0001033c2760(0);
  func_0x000107c613fc();
  func_0x0001033c1f18();
  ppuVar10 = &PTR_DAT_1105d5ca0;
  uVar7 = uVar5;
  func_0x0001033bf350(uVar5,&PTR_DAT_1105d5ca0,uVar6,&PTR_DAT_11064d080);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  lVar8 = 0;
  func_0x000102dfdfa0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar2;
  func_0x00010034b934(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  puVar9 = &uStack_78;
  func_0x00010076df78(puVar9,uVar7,ppuVar10,lVar8,&PTR_DAT_1105d5c60);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uVar1);
  return puVar9;
}



/* Entry: 102dfddac; end: 102dfddd7;  */

/* WARNING: Possible PIC construction at 0x000102dfddb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dfddc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dfddbc) */
/* WARNING: Removing unreachable block (ram,0x000102dfddcc) */

void FUN_102dfddac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102dfddd8; end: 102dfde57;  */

void FUN_102dfddd8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dfde58; end: 102dfded7;  */

void FUN_102dfde58(undefined8 param_1)

{
  if (lRam0000000112f1bdf8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e732700);
  return;
}



/* Entry: 102dfded8; end: 102dfdf7b;  */

void FUN_102dfded8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    puVar1 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c409d8(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c5c2e0(lStack_38);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102dfdf7c; end: 102dfdfbf;  */

void FUN_102dfdf7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dfdfc0; end: 102dfdfe3;  */

void FUN_102dfdfc0(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102dfdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102dfdfe4; end: 102dfe03b;  */

void FUN_102dfdfe4(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == '\x01' && param_1 != (undefined8 *)0x0) {
    func_0x0001033b98e0();
  }
  else {
    func_0x0001033b9820();
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61434(uVar2);
  FUN_102dfded8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102dfe03c; end: 102dfe3f3;  */

void FUN_102dfe03c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  if (unaff_x20[4] == 0) {
    uVar1 = param_1;
    FUN_102dfee1c();
    uVar10 = unaff_x20[4];
    unaff_x20[4] = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar10);
    unaff_x20[0xc] = param_4;
    func_0x000107c61604(unaff_x20 + 0xb,param_3);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(param_1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 9;
    *(undefined8 *)(puVar3 + 0x10) = 4;
    uVar10 = uVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c3f75c(param_1);
    func_0x000107c61180();
    uVar5 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    uVar10 = uVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c515ac(param_1);
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar5 = uVar10;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    uVar10 = uVar1;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar4 = uVar10;
    func_0x000107c402a0(0x4064e00000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    *(undefined8 *)(puVar3 + 0x30) = uVar4;
    uVar10 = uVar1;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar4 = uVar10;
    func_0x000107c40290(0x404a000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    uVar10 = 0;
    func_0x000100847984(0);
    puVar6 = puVar3;
    func_0x000107c5fc48(puVar3,uVar10);
    func_0x000107c61574(puVar3);
    func_0x000107c3d048(puVar2);
    func_0x000107c61170(puVar6);
    plVar11 = (long *)unaff_x20[7];
    plVar7 = plVar11;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar11);
    puVar2 = &UNK_1105d5ce8;
    puVar3 = puVar2;
    func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar8 = FUN_102dfefb4;
    puVar6 = puVar3;
    (**(code **)(*plVar7 + 0x60))();
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar3);
    uVar10 = unaff_x20[5];
    unaff_x20[5] = pcVar8;
    unaff_x20[6] = puVar6;
    func_0x000107c615e8(uVar10);
    func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    uStack_70 = 0x102dfefbc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105d5d00;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56ea0(uVar1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x0001007d6c6c(3,0xd00000000000002b,0x800000010f10ea60,*unaff_x20,&PTR_DAT_1105d5c80);
  }
  return;
}



/* Entry: 102dfe3f4; end: 102dfe467;  */

void FUN_102dfe3f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined8 *)(param_2 + 0x48) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102dfe468; end: 102dfe4bb;  */

void FUN_102dfe468(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102dfe4bc();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102dfe4bc; end: 102dfe5e3;  */

void FUN_102dfe4bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  if (*(long *)(unaff_x20 + 0x50) == 0) {
    uVar1 = 0;
    FUN_102dfedfc();
    func_0x000107c613fc();
    *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if (lVar5 == 0) {
      func_0x000107c6157c(uVar1);
    }
    else {
      func_0x000107c6157c(uVar1);
      func_0x000107c54514(lVar5);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    puVar2 = &UNK_1105d5ce8;
    func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_1105d5d38;
    func_0x000107c613fc(&UNK_1105d5d38,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    uStack_40 = 0x102dfefe0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105d5d50;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar2 = puStack_38;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102dfe5e4; end: 102dfe69b;  */

void FUN_102dfe5e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x30);
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar1,lVar4);
    func_0x000107c615e8(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  *(long *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c615e8(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61574(uVar2);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61604(unaff_x20 + 0x58,0);
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c4ff34();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102dfe69c; end: 102dfe813;  */

void FUN_102dfe69c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x50) != 0 && param_2 == *(long *)(param_1 + 0x50)) {
      lVar5 = *(long *)(param_1 + 0x48);
      if (lVar5 == 0) {
        FUN_102dfe814(1,param_2);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        lVar1 = param_1 + 0x58;
        func_0x000107c61618();
        if (lVar1 == 0) {
          FUN_102dfe814(3,param_2);
        }
        else {
          lVar7 = *(long *)(param_1 + 0x60);
          lVar2 = lVar1;
          func_0x000107c614f0();
          puVar3 = &UNK_1105d5ce8;
          func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
          func_0x000107c61644(puVar3 + 0x10,param_1);
          puVar4 = &UNK_1105d5d88;
          func_0x000107c613fc(&UNK_1105d5d88,0x20,7);
          *(undefined **)(puVar4 + 0x10) = puVar3;
          *(long *)(puVar4 + 0x18) = param_2;
          pcVar8 = *(code **)(lVar7 + 8);
          func_0x000107c61434(lVar5);
          func_0x000107c6157c(puVar3);
          func_0x000107c6157c(param_2);
          (*pcVar8)(uVar6,lVar5,FUN_102dff014,puVar4,lVar2,lVar7);
          func_0x000107c61574(param_1);
          func_0x000107c615e8(lVar1);
          func_0x000107c61574(puVar3);
          func_0x000107c6142c(lVar5);
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102dfe814; end: 102dfe98b;  */

void FUN_102dfe814(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (unaff_x20[10] != 0 && param_2 == unaff_x20[10]) {
    uVar4 = *unaff_x20;
    unaff_x20[10] = 0;
    func_0x000107c61574();
    if (unaff_x20[4] != 0) {
      func_0x000107c54514();
    }
    if ((1 < param_1) && (param_1 != 3)) {
      if (param_1 == 2) {
        uStack_48 = 0;
        uStack_40 = 0xe000000000000000;
        func_0x000107c602fc(0x2e);
        func_0x000107c5fb78(0xd00000000000002c,0x800000010f10ea90);
        uStack_50 = 2;
        func_0x000107c603d0(&uStack_50,&uStack_48,&UNK_1106a2978,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        uVar1 = uStack_40;
        func_0x0001007d6c6c(3,uStack_48,uStack_40,uVar4,&PTR_DAT_1105d5c80);
        func_0x000107c6142c(uVar1);
        func_0x000107c61428(unaff_x20 + 2,&uStack_48,0,0);
        puVar3 = unaff_x20 + 2;
        func_0x000107c61618();
      }
      else {
        func_0x000107c61428(unaff_x20 + 2,&uStack_48,0,0);
        puVar3 = unaff_x20 + 2;
        func_0x000107c61618();
      }
      if (puVar3 != (undefined8 *)0x0) {
        lVar5 = unaff_x20[3];
        puVar2 = puVar3;
        func_0x000107c614f0();
        (**(code **)(lVar5 + 8))(1,1,puVar2,lVar5);
        func_0x000107c615e8(puVar3);
      }
    }
  }
  return;
}



/* Entry: 102dfe98c; end: 102dfeadb;  */

void FUN_102dfe98c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_a0;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(lVar1);
    puVar2 = &UNK_1105d5ce8;
    func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648(param_2);
    func_0x000107c61644(puVar2 + 0x10,param_2);
    func_0x000107c61574(param_2);
    puVar3 = &UNK_1105d5db0;
    func_0x000107c613fc(&UNK_1105d5db0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    uStack_80 = 0x102dff01c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105d5dc8;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102dfeadc; end: 102dfeb4b;  */

void FUN_102dfeadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102dfe814(param_2,param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102dfeb4c; end: 102dfeb53;  */

void FUN_102dfeb4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTypeStyle__112664568,5);
  return;
}



/* Entry: 102dfeb54; end: 102dfec57;  */

void FUN_102dfeb54(void)

{
  long unaff_x20;
  
  func_0x000100d27928(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100d27928(unaff_x20 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dfec58; end: 102dfeda3;  */

void FUN_102dfec58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61604(unaff_x20 + 0x10,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102dfeda4; end: 102dfedfb;  */

void FUN_102dfeda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  if (unaff_x20[4] == 0) {
    uVar1 = param_1;
    FUN_102dfee1c();
    uVar10 = unaff_x20[4];
    unaff_x20[4] = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar10);
    unaff_x20[0xc] = param_4;
    func_0x000107c61604(unaff_x20 + 0xb,param_3);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(param_1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar3 = puVar2;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar3 + 0x18) = 9;
    *(undefined8 *)(puVar3 + 0x10) = 4;
    uVar10 = uVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c3f75c(param_1);
    func_0x000107c61180();
    uVar5 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    uVar10 = uVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c515ac(param_1);
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar5 = uVar10;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    uVar10 = uVar1;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar4 = uVar10;
    func_0x000107c402a0(0x4064e00000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    *(undefined8 *)(puVar3 + 0x30) = uVar4;
    uVar10 = uVar1;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar4 = uVar10;
    func_0x000107c40290(0x404a000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    uVar10 = 0;
    func_0x000100847984(0);
    puVar6 = puVar3;
    func_0x000107c5fc48(puVar3,uVar10);
    func_0x000107c61574(puVar3);
    func_0x000107c3d048(puVar2);
    func_0x000107c61170(puVar6);
    plVar11 = (long *)unaff_x20[7];
    plVar7 = plVar11;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar11);
    puVar2 = &UNK_1105d5ce8;
    puVar3 = puVar2;
    func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar8 = FUN_102dfefb4;
    puVar6 = puVar3;
    (**(code **)(*plVar7 + 0x60))();
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar3);
    uVar10 = unaff_x20[5];
    unaff_x20[5] = pcVar8;
    unaff_x20[6] = puVar6;
    func_0x000107c615e8(uVar10);
    func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    uStack_70 = 0x102dfefbc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105d5d00;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56ea0(uVar1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x0001007d6c6c(3,0xd00000000000002b,0x800000010f10ea60,*unaff_x20,&PTR_DAT_1105d5c80);
  }
  return;
}



/* Entry: 102dfedfc; end: 102dfee1b;  */

void FUN_102dfedfc(void)

{
  func_0x000107c61168(&PTR_PTR_112f1c068);
  return;
}



/* Entry: 102dfee1c; end: 102dfefb3;  */

undefined8 * FUN_102dfee1c(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  pcStack_40 = FUN_102dfeb4c;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f9954c;
  puStack_48 = &UNK_1105d5df0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(uStack_38);
  puVar3 = (undefined8 *)PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar4 = puVar3;
  func_0x000107c59a2c();
  func_0x0001033b9880();
  uVar5 = *puVar4;
  uVar1 = puVar4[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c59e1c(puVar3);
  func_0x000107c61170(uVar5);
  uVar5 = *puVar4;
  uVar1 = puVar4[1];
  func_0x000107c61174(puVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c520fc(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af98();
  func_0x000107c61180();
  func_0x000107c55260(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c552c8(puVar3);
  func_0x000107c5a050(puVar3);
  return puVar3;
}



/* Entry: 102dfefb4; end: 102dfefe7;  */

void FUN_102dfefb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar3 + 0x40) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(lVar3);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 102dfefe8; end: 102dff013;  */

void FUN_102dfefe8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dff014; end: 102dff03f;  */

void FUN_102dff014(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_a0;
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar2 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    func_0x000107c615f0(uVar7);
    func_0x000107c61574(lVar2);
    puVar3 = &UNK_1105d5ce8;
    func_0x000107c613fc(&UNK_1105d5ce8,0x18,7);
    func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61648(lVar4);
    func_0x000107c61644(puVar3 + 0x10,lVar4);
    func_0x000107c61574(lVar4);
    puVar5 = &UNK_1105d5db0;
    func_0x000107c613fc(&UNK_1105d5db0,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    uStack_80 = 0x102dff01c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105d5dc8;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 102dff040; end: 102dff09f;  */

byte FUN_102dff040(void)

{
  byte bVar1;
  undefined8 *unaff_x20;
  
  bVar1 = *(byte *)((long)unaff_x20 + 0x29);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)((long)unaff_x20 + 0x29) = 1;
  }
  else {
    func_0x0001007d6c6c(2,0xd000000000000025,0x800000010f10eb60,*unaff_x20,&PTR_DAT_1105d5e38);
  }
  return bVar1 ^ 1;
}



/* Entry: 102dff0a0; end: 102dff203;  */

void FUN_102dff0a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar4 = *unaff_x20;
  uVar3 = unaff_x20[2];
  puVar1 = &UNK_1105d5f50;
  func_0x000107c613fc(&UNK_1105d5f50,0x28,7);
  *(undefined8 **)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  uStack_40 = 0x102dffed4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d5f68;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c();
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102dff204; end: 102dff22f;  */

void FUN_102dff204(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100d279bc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dff230; end: 102dff2a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dff230(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f1c0e0);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_102dff0a0(3);
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102dff2a4; end: 102dff327; -[_TtC37GamesExplorerPresentationServicesImpl36GamesExplorerFABSelectionCoordinator dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dff2a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112f1c0e0);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar2);
    FUN_102dff0a0(3);
    func_0x000107c61574(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102dff328; end: 102dff393; -[_TtC37GamesExplorerPresentationServicesImpl36GamesExplorerFABSelectionCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102dff378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dff37c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dff328(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f1c0c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1c0d0));
  func_0x000100d279bc(*(undefined8 *)(param_1 + _DAT_112f1c0d8),
                      ((undefined8 *)(param_1 + _DAT_112f1c0d8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1c0e0));
  return;
}



/* Entry: 102dff394; end: 102dff4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dff394(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1c0d0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1c0d0) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c0d8);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100d279bc(uVar3,uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1c0e8);
  *(undefined8 *)(unaff_x20 + _DAT_112f1c0e8) = 0;
  func_0x000107c61574(uVar3);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f1c0e0);
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1c0c0);
    puVar4 = &UNK_1105d5e88;
    func_0x000107c613fc(&UNK_1105d5e88,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1105d5fa0;
    func_0x000107c613fc(&UNK_1105d5fa0,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar7;
    *(undefined8 *)(puVar5 + 0x20) = 3;
    uStack_40 = 0x102dfff58;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105d5fb8;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar4 = puStack_38;
    func_0x000107c61580(lVar7,2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e590(uVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(lVar7);
  }
  return;
}



/* Entry: 102dff4d4; end: 102dff773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dff4d4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar5 = *param_3;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar4 = param_3[2];
    puVar2 = &UNK_1105d5ff0;
    func_0x000107c613fc(&UNK_1105d5ff0,0x28,7);
    *(undefined8 **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = uVar5;
    uStack_68 = 0x102dfff5c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105d6008;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + _DAT_112f1c0c0);
    puVar2 = &UNK_1105d5e88;
    func_0x000107c613fc(&UNK_1105d5e88,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    puVar1 = &UNK_1105d6040;
    func_0x000107c613fc(&UNK_1105d6040,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined8 **)(puVar1 + 0x18) = param_3;
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    uStack_68 = 0x102dfff60;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105d6058;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e590(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102dff774; end: 102dffa3f;  */

/* WARNING: Possible PIC construction at 0x000102dff808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dff824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dff900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dff91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dffa04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dffa20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dff920) */
/* WARNING: Removing unreachable block (ram,0x000102dff904) */
/* WARNING: Removing unreachable block (ram,0x000102dff828) */
/* WARNING: Removing unreachable block (ram,0x000102dff82c) */
/* WARNING: Removing unreachable block (ram,0x000102dff860) */
/* WARNING: Removing unreachable block (ram,0x000102dff834) */
/* WARNING: Removing unreachable block (ram,0x000100d279bc) */
/* WARNING: Removing unreachable block (ram,0x000100d279c8) */
/* WARNING: Removing unreachable block (ram,0x000100d279c0) */
/* WARNING: Removing unreachable block (ram,0x000102dff80c) */
/* WARNING: Removing unreachable block (ram,0x000102dffa08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dff774(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000102dff68c(param_3,param_4);
  if (param_3 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1c0d8);
    if (lVar3 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000002e,0x800000010f10eac0,lVar2,&PTR_DAT_1105d5e58);
      puVar4 = &UNK_1105d5e88;
      func_0x000107c613fc(&UNK_1105d5e88,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar1 = &UNK_1105d5eb0;
      func_0x000107c613fc(&UNK_1105d5eb0,0x28,7);
      *(undefined **)(puVar1 + 0x10) = puVar4;
      *(long *)(puVar1 + 0x18) = param_3;
      *(undefined8 *)(puVar1 + 0x20) = 1;
      uStack_60 = 0x102dffe9c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105d5ec8;
      puStack_58 = puVar1;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c6157c(param_3);
    }
    else {
      lVar2 = ((long *)(unaff_x20 + _DAT_112f1c0d8))[1];
      puVar4 = *(undefined **)(unaff_x20 + _DAT_112f1c0e8);
      *(long *)(unaff_x20 + _DAT_112f1c0e8) = param_3;
      func_0x000102dffec4(lVar3,lVar2);
      func_0x000107c6157c(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar4);
    return;
  }
  return;
}



/* Entry: 102dffa40; end: 102dffadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dffa40(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112f1c0e0);
    if (lVar1 != 0 && param_2 == lVar1) {
      *(undefined8 *)(param_1 + _DAT_112f1c0e0) = 0;
      func_0x000107c61574(lVar1);
      FUN_102dff0a0(param_3);
      func_0x000107c61170(param_1);
      return;
    }
    func_0x000107c61170();
  }
  FUN_102dff0a0(param_3);
  return;
}



/* Entry: 102dffadc; end: 102dffb83; -[_TtC37GamesExplorerPresentationServicesImpl36GamesExplorerFABSelectionCoordinator init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dffadc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f1c0c0;
  puVar4 = &UNK_10db54980;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar2) = puVar4;
  *(undefined1 *)(param_1 + _DAT_112f1c0c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f1c0d0) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f1c0d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112f1c0e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f1c0e8) = 0;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102dffb84; end: 102dffbc3;  */

void FUN_102dffb84(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7218);
  return;
}



/* Entry: 102dffbc4; end: 102dffc5b;  */

/* WARNING: Possible PIC construction at 0x000102dff808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dff824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dff900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dff91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dffa04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dffa20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dff920) */
/* WARNING: Removing unreachable block (ram,0x000102dff904) */
/* WARNING: Removing unreachable block (ram,0x000102dff828) */
/* WARNING: Removing unreachable block (ram,0x000102dff82c) */
/* WARNING: Removing unreachable block (ram,0x000102dff860) */
/* WARNING: Removing unreachable block (ram,0x000102dff834) */
/* WARNING: Removing unreachable block (ram,0x000100d279bc) */
/* WARNING: Removing unreachable block (ram,0x000100d279c8) */
/* WARNING: Removing unreachable block (ram,0x000100d279c0) */
/* WARNING: Removing unreachable block (ram,0x000102dff80c) */
/* WARNING: Removing unreachable block (ram,0x000102dffa08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dffbc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if (*(char *)(unaff_x20 + _DAT_112f1c0c8) == '\x01') {
    lVar2 = unaff_x20;
    func_0x000107c614f0(unaff_x20);
    func_0x000102dff68c(param_3,param_4);
    if (param_3 == 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1c0d8);
    if (lVar3 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000002e,0x800000010f10eac0,lVar2,&PTR_DAT_1105d5e58);
      puVar1 = &UNK_1105d5e88;
      func_0x000107c613fc(&UNK_1105d5e88,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,unaff_x20);
      puVar4 = &UNK_1105d5eb0;
      func_0x000107c613fc(&UNK_1105d5eb0,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar1;
      *(long *)(puVar4 + 0x18) = param_3;
      *(undefined8 *)(puVar4 + 0x20) = 1;
      uStack_60 = 0x102dffe9c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105d5ec8;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c6157c(param_3);
    }
    else {
      lVar2 = ((long *)(unaff_x20 + _DAT_112f1c0d8))[1];
      puVar4 = *(undefined **)(unaff_x20 + _DAT_112f1c0e8);
      *(long *)(unaff_x20 + _DAT_112f1c0e8) = param_3;
      func_0x000102dffec4(lVar3,lVar2);
      func_0x000107c6157c(param_3);
    }
  }
  else {
    puVar4 = (undefined *)0x0;
    func_0x000102dffba4();
    func_0x000107c613fc();
    func_0x000107c6157c(param_4);
    puVar1 = &UNK_10db549d0;
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(undefined2 *)(puVar4 + 0x28) = 0;
    *(undefined **)(puVar4 + 0x10) = puVar1;
    *(long *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    FUN_102dff0a0(3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 102dffc5c; end: 102dffd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dffc5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar4 = _DAT_112f1c0d0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f1c0d0);
  if (lVar5 != 0 && param_3 != lVar5) {
    lVar6 = unaff_x20;
    func_0x000107c614f0();
    func_0x000107c61174(lVar5);
    func_0x0001007d6c6c(2,0xd00000000000004a,0x800000010f10ebd0,lVar6,&PTR_DAT_1105d5e58);
    func_0x000107c61170(lVar5);
    lVar5 = *(long *)(unaff_x20 + lVar4);
  }
  *(long *)(unaff_x20 + lVar4) = param_3;
  func_0x000107c61170(lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c0d8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61174(param_3);
  func_0x000100d279bc(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102dffd48; end: 102dffdd7; -[_TtC37GamesExplorerPresentationServicesImpl36GamesExplorerFABSelectionCoordinator installRenderedLensSelectionHandler:installation:] */

void FUN_102dffd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105d6090;
  func_0x000107c613fc(&UNK_1105d6090,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102dffc5c(FUN_102dfff0c,puVar1,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102dffdd8; end: 102dffe4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dffdd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*(long *)(unaff_x20 + _DAT_112f1c0d0) == 0 || param_1 != *(long *)(unaff_x20 + _DAT_112f1c0d0)
     ) {
    func_0x000107c614f0();
    func_0x0001007d6c6c(1,0xd00000000000003b,0x800000010f10eb90,unaff_x20,&PTR_DAT_1105d5e58);
    return;
  }
  ppuVar6 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1c0d0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1c0d0) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c0d8);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100d279bc(uVar3,uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1c0e8);
  *(undefined8 *)(unaff_x20 + _DAT_112f1c0e8) = 0;
  func_0x000107c61574(uVar3);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f1c0e0);
  if (lVar7 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1c0c0);
    puVar4 = &UNK_1105d5e88;
    func_0x000107c613fc(&UNK_1105d5e88,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,unaff_x20);
    puVar5 = &UNK_1105d5fa0;
    func_0x000107c613fc(&UNK_1105d5fa0,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar7;
    *(undefined8 *)(puVar5 + 0x20) = 3;
    uStack_40 = 0x102dfff58;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105d5fb8;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    puVar4 = puStack_38;
    func_0x000107c61580(lVar7,2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e590(uVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(lVar7);
  }
  return;
}



/* Entry: 102dffe4c; end: 102dffe9b; -[_TtC37GamesExplorerPresentationServicesImpl36GamesExplorerFABSelectionCoordinator removeRenderedLensSelectionHandler:] */

/* WARNING: Possible PIC construction at 0x000102dffe84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dffe88) */

void FUN_102dffe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102dffdd8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102dffe9c; end: 102dffedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dffe9c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + _DAT_112f1c0e0);
    if (lVar4 != 0 && lVar1 == lVar4) {
      *(undefined8 *)(lVar2 + _DAT_112f1c0e0) = 0;
      func_0x000107c61574(lVar4);
      FUN_102dff0a0(uVar3);
      func_0x000107c61170(lVar2);
      return;
    }
    func_0x000107c61170();
  }
  FUN_102dff0a0(uVar3);
  return;
}



/* Entry: 102dffee0; end: 102dfff0b;  */

void FUN_102dffee0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dfff0c; end: 102dfff63;  */

long FUN_102dfff0c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102dfff64; end: 102e00633;  */

void FUN_102dfff64(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar6 = 0;
  func_0x0001033bf3f0();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112f1c1d8,&UNK_10db93e40);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_102e00134:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar13 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar13) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
  if (uVar8 == 0) goto LAB_102e00090;
  do {
    uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar8 = uVar8 - 1 & uVar8;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar7 + 0x48) * uVar10;
      func_0x000102e00fa4(*(long *)(lVar13 + 0x38) + lVar12,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000102e00f1c(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_102e00090:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102e0015c);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_102e00134;
        }
        uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar8 == 0);
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar11;
    }
  } while( true );
}



/* Entry: 102e00634; end: 102e007cf;  */

ulong FUN_102e00634(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e00704);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e00708);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000100464414(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000100464414(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010f10ec20);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e007d0);
  (*pcVar2)();
}



/* Entry: 102e007d0; end: 102e00e83;  */

undefined * FUN_102e007d0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = 0x112f1c1e0;
  func_0x0001000285a8(0x112f1c1e0,&UNK_10db54a18);
  lVar11 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f1c1d8,&UNK_10db93e40);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar13 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000102e00fe8(param_1,puVar9);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102e00940);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar12 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      func_0x0001033bf3f0();
      func_0x000102e00f1c((long)puVar9 + (long)iVar4,
                          lVar12 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102e00944);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 102e00e84; end: 102e0107b;  */

undefined8 FUN_102e00e84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f1c1d0;
  func_0x0001000285a8(0x112f1c1d0,&UNK_10dbbee40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102e0107c; end: 102e0112b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0107c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  pcVar4 = *(code **)(unaff_x20 + _DAT_112f1c200);
  if (pcVar4 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f1c200))[1];
    FUN_102e0200c();
    puVar2 = &UNK_1105d6268;
    func_0x000107c613f8(&UNK_1105d6268,lVar1,0,0);
    func_0x000107c6157c(uVar3);
    (*pcVar4)(puVar2);
    func_0x000107c614ac(puVar2);
    func_0x000100d27a28(pcVar4,uVar3);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e0112c; end: 102e011ef; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0112c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  pcVar5 = *(code **)(param_1 + _DAT_112f1c200);
  if (pcVar5 == (code *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    uVar4 = ((undefined8 *)(param_1 + _DAT_112f1c200))[1];
    lVar2 = lVar1;
    FUN_102e0200c();
    puVar3 = &UNK_1105d6268;
    func_0x000107c613f8(&UNK_1105d6268,lVar2,0,0);
    func_0x000107c61174(param_1);
    func_0x000100d27a38(pcVar5,uVar4);
    (*pcVar5)(puVar3);
    func_0x000107c614ac(puVar3);
    func_0x000100d27a28(pcVar5,uVar4);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e011f0; end: 102e0128b; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e01270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e01274) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e011f0(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f1c1e8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f1c1f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f1c1f8));
  func_0x000100d27a28(*(undefined8 *)(param_1 + _DAT_112f1c200),
                      ((undefined8 *)(param_1 + _DAT_112f1c200))[1]);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f1c208));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f1c210));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1c218));
  return;
}



/* Entry: 102e0128c; end: 102e0169f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0128c(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar5 = _DAT_112f1c220;
  if ((*(byte *)(unaff_x20 + _DAT_112f1c220) & 1) == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f1c200);
    if (*plVar1 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_102e016a0(1);
      lVar11 = *plVar1;
    }
    lVar13 = plVar1[1];
    *plVar1 = (long)param_4;
    plVar1[1] = param_5;
    func_0x000100d27a38(param_4,param_5);
    func_0x000100d27a28(lVar11,lVar13);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f1c228);
    *(undefined8 *)(unaff_x20 + _DAT_112f1c228) = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c61170(uVar12);
    func_0x0001000d224c(auStack_88);
    func_0x000102e00944(auStack_88[0]);
    lVar11 = unaff_x20 + _DAT_112f1c1e8;
    lVar6 = *(long *)(lVar11 + 0x20);
    func_0x0001000a8868(lVar11,*(undefined8 *)(lVar11 + 0x18));
    (**(code **)(lVar6 + 0x20))();
    func_0x000107c6142c(lVar13);
    if ((param_1 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      *(undefined1 *)(unaff_x20 + lVar5) = 1;
      lVar5 = *(long *)(lVar11 + 0x18);
      lVar6 = *(long *)(lVar11 + 0x20);
      func_0x0001000a8868(lVar11,lVar5);
      (**(code **)(lVar6 + 8))(lVar5,lVar6);
      if (lVar5 != 0) {
        uVar12 = *(undefined8 *)(lVar11 + 0x18);
        lVar6 = *(long *)(lVar11 + 0x20);
        func_0x0001000a8868(lVar11,uVar12);
        (**(code **)(lVar6 + 0x10))(auStack_b0,uVar12,lVar6);
        if (lStack_98 == 0) {
          func_0x000102e020e4(auStack_b0,0x112f1c258,&UNK_10dbbeb60);
          func_0x0001007d6c6c(3,0xd000000000000017,0x800000010f10ec60,lVar4,&PTR_DAT_1105d60b8);
          FUN_102e016a0(1);
          func_0x000107c61170(lVar5);
          return;
        }
        func_0x000102e01ff4(auStack_b0,auStack_88);
        lVar13 = *(long *)(unaff_x20 + _DAT_112f1c218);
        *(undefined1 *)(lVar13 + _DAT_112f1c0c8) = 1;
        uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f1c208);
        lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f1c208))[1];
        lVar6 = lVar5;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c614f0();
          uVar7 = uVar12;
          func_0x0001033c1404();
          lVar2 = lStack_68;
          uVar8 = uStack_70;
          func_0x0001000a8868(auStack_88,uStack_70);
          (**(code **)(lVar2 + 8))(uVar8,lVar2);
          func_0x0001000a8868(auStack_88,uStack_70);
          uVar9 = uStack_70;
          (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
          uVar10 = *(undefined8 *)(lVar11 + 0x18);
          lVar2 = *(long *)(lVar11 + 0x20);
          func_0x0001000a8868(lVar11,uVar10);
          (**(code **)(lVar2 + 0x18))(uVar10,lVar2);
          (**(code **)(lVar4 + 8))
                    (lVar6,uVar7,uVar8,uVar9,uVar10,lVar13,&PTR_DAT_1105d5e28,
                     *(undefined8 *)(unaff_x20 + _DAT_112f1c210),&PTR_DAT_1105d5c60,uVar12,lVar4);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(uVar7);
          func_0x000107c61574(uVar8);
          func_0x000107c61574(uVar9);
          func_0x000107c61170(lVar5);
          func_0x0001000834e4(auStack_88);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e016a0);
        (*pcVar3)();
      }
      func_0x0001007d6c6c(3,0xd00000000000001f,0x800000010f10ec40,lVar4,&PTR_DAT_1105d60b8);
      uVar12 = 1;
    }
    FUN_102e016a0(uVar12);
  }
  else {
    func_0x0001007d6c6c(1,0xd00000000000003a,0x800000010f10ec80,lVar4,&PTR_DAT_1105d60b8);
    if (param_4 != (code *)0x0) {
      (*param_4)(0);
    }
  }
  return;
}



/* Entry: 102e016a0; end: 102e017b7;  */

/* WARNING: Possible PIC construction at 0x000102e0177c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e01780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e016a0(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1c200);
  pcVar3 = (code *)*puVar1;
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1c220) = 0;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f1c228);
  *(undefined8 *)(unaff_x20 + _DAT_112f1c228) = 0;
  func_0x000107c61170(uVar6);
  *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112f1c218) + _DAT_112f1c0c8) = 0;
  FUN_102dff394();
  if ((param_1 & 1) != 0) {
    lVar2 = unaff_x20 + _DAT_112f1c1e8;
    uVar6 = *(undefined8 *)(lVar2 + 0x18);
    lVar5 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar6);
    (**(code **)(lVar5 + 0x30))(uVar6,lVar5);
  }
  if (pcVar3 != (code *)0x0) {
    FUN_102e0200c();
    puVar7 = &UNK_1105d6268;
    func_0x000107c613f8(&UNK_1105d6268,uVar6,0,0);
    func_0x000107c6157c(uVar4);
    (*pcVar3)(puVar7);
    if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 102e017b8; end: 102e01803; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService init] */

void FUN_102e017b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesExplorerPresentationServicesImpl.GamesExplorerPresentationService",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e017e4);
  (*pcVar1)();
}



/* Entry: 102e01804; end: 102e01817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e01804(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_112f1c220);
}



/* Entry: 102e01818; end: 102e01863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e01818(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f1c1e8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x28))(uVar2,lVar3);
  return;
}



/* Entry: 102e01864; end: 102e01887;  */

void FUN_102e01864(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000102e01874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102e01888; end: 102e0192b; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService installRenderedLensSelectionHandler:installation:] */

/* WARNING: Possible PIC construction at 0x000102e01908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0190c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e01888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105d61d0;
  func_0x000107c613fc(&UNK_1105d61d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102dffc5c(FUN_102e022cc,puVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e0192c; end: 102e01987; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService removeRenderedLensSelectionHandler:] */

/* WARNING: Possible PIC construction at 0x000102e01970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e01974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0192c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102dffdd8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e01988; end: 102e0198b; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService lensExplorerRouterDidPresentLensExplorer:] */

void FUN_102e01988(void)

{
  return;
}



/* Entry: 102e0198c; end: 102e019cb; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService lensExplorerRouterBeginDismissingLensExplorer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0198c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + _DAT_112f1c218) + _DAT_112f1c0c8) = 0;
  func_0x000107c61174();
  FUN_102dff394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e019cc; end: 102e01a0f; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService lensExplorerRouterDidDismissLensExplorer:] */

void FUN_102e019cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102e02200();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e01a10; end: 102e01a17; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService lensExplorerRouterReplyParameters:] */

void FUN_102e01a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102e01a18; end: 102e01e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e01a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [80];
  undefined8 *puStack_110;
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
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  func_0x000107c61428(param_5 + 0x10,auStack_178,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    lVar4 = *(long *)(param_5 + _DAT_112f1c218);
    uVar14 = *(ulong *)(lVar4 + _DAT_112f1c0e8);
    if (uVar14 == 0) {
      pcVar16 = (code *)0x0;
      puVar15 = (undefined *)0x0;
    }
    else {
      func_0x000107c61174();
      uVar5 = uVar14;
      func_0x000107c6157c();
      FUN_102dff040();
      if ((uVar5 & 1) == 0) {
        func_0x000107c61170(param_5);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(uVar14);
        return;
      }
      puVar13 = &UNK_1105d6180;
      func_0x000107c613fc(&UNK_1105d6180,0x18,7);
      func_0x000107c61614(puVar13 + 0x10,lVar4);
      func_0x000107c61170(lVar4);
      puVar15 = &UNK_1105d61a8;
      func_0x000107c613fc(&UNK_1105d61a8,0x20,7);
      *(undefined **)(puVar15 + 0x10) = puVar13;
      *(ulong *)(puVar15 + 0x18) = uVar14;
      pcVar16 = FUN_102e021f8;
    }
    lVar4 = param_5 + _DAT_112f1c1e8;
    lVar6 = *(long *)(lVar4 + 0x18);
    lVar11 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,lVar6);
    (**(code **)(lVar11 + 8))(lVar6,lVar11);
    if (lVar6 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000002b,0x800000010f10ecf0,param_6,&PTR_DAT_1105d60b8);
      if (uVar14 == 0) {
        func_0x000107c61170(param_5);
      }
      else {
        (*pcVar16)(3);
        func_0x000107c61170(param_5);
        func_0x000100d27a28(pcVar16,puVar15);
      }
    }
    else {
      func_0x0001000d224c(auStack_218);
      uVar10 = uStack_200;
      func_0x0001000a8868();
      uVar17 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar7 = uVar17;
      func_0x000107c5faec();
      func_0x000107c61170(uVar17);
      lVar4 = *(long *)(param_5 + _DAT_112f1c228);
      if (lVar4 == 0) {
        puStack_1f0 = (undefined8 *)0x1;
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        uStack_1b0 = 0;
        uStack_1b8 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        uStack_188 = 0;
        uStack_180 = 6;
      }
      else {
        lVar11 = ((undefined8 *)(lVar4 + _DAT_112fa6750))[1];
        if (lVar11 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(lVar4 + _DAT_112fa6750);
        }
        bVar3 = lVar11 != 0;
        uVar1 = *(undefined8 *)(lVar4 + _DAT_112fa6748);
        uVar2 = ((undefined8 *)(lVar4 + _DAT_112fa6748))[1];
        func_0x000107c61434(uVar2);
        uStack_98 = uVar1;
        uStack_90 = uVar2;
        uStack_88 = uVar17;
        lStack_80 = lVar11;
        uStack_78 = bVar3;
        func_0x000107c61434(lVar11);
        func_0x000107c61174(lVar4);
        puVar8 = &uStack_98;
        func_0x000104348394(puVar8,3,0);
        func_0x000107c61170(lVar4);
        func_0x000102e021b8(uVar1,uVar2,uVar17,lVar11,bVar3);
        uStack_180 = 0;
        puStack_1f0 = puVar8;
      }
      uStack_1e8 = 0;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      uStack_c0 = uStack_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_a0 = uStack_180;
      uStack_108 = 0;
      puStack_110 = puStack_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = uStack_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      uStack_e0 = uStack_1c0;
      func_0x000107c61434(param_3);
      func_0x000107c61174(param_1);
      func_0x00010433a648(auStack_160);
      if (uVar14 == 0) {
        puVar13 = (undefined *)0x0;
        uVar17 = 0;
      }
      else {
        puVar9 = &UNK_1105d6130;
        func_0x000107c613fc(&UNK_1105d6130,0x20,7);
        *(code **)(puVar9 + 0x10) = pcVar16;
        *(undefined **)(puVar9 + 0x18) = puVar15;
        puVar13 = &UNK_1105d6158;
        func_0x000107c613fc(&UNK_1105d6158,0x20,7);
        *(undefined8 *)(puVar13 + 0x10) = 0x102e02158;
        *(undefined **)(puVar13 + 0x18) = puVar9;
        uVar17 = 0x102e0217c;
      }
      pcVar12 = *(code **)(lStack_1f8 + 8);
      func_0x000100d27a38(pcVar16,puVar15);
      (*pcVar12)(lVar6,uVar7,uVar10,&puStack_110,auStack_160,uVar17,puVar13,uStack_200,lStack_1f8);
      func_0x000107c61170(param_5);
      func_0x000107c61170(lVar6);
      func_0x000100d27a28(uVar17,puVar13);
      func_0x000102e020e4(auStack_160,0x112e55fd0,&UNK_10da58ae0);
      func_0x000102e02124(&puStack_1f0);
      func_0x000107c6142c(uVar10);
      func_0x000100d27a28(pcVar16,puVar15);
      func_0x0001000834e4(auStack_218);
    }
  }
  return;
}



/* Entry: 102e01e74; end: 102e01f37; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService lensExplorerRouter:didPickItem:selectionTrigger:] */

void FUN_102e01e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = &UNK_1105d6108;
  uStack_40 = uVar1;
  func_0x000107c613fc(&UNK_1105d6108,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  uStack_80 = uVar1;
  puStack_60 = puVar2;
  uStack_58 = uVar1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x00010436efc4(FUN_102e0204c,auStack_50,FUN_102e02094,auStack_70,FUN_102e0209c,auStack_90);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e01f38; end: 102e01f3b; -[_TtC37GamesExplorerPresentationServicesImpl32GamesExplorerPresentationService lensExplorerRouterDidToggleCamera:] */

void FUN_102e01f38(void)

{
  return;
}



/* Entry: 102e01f3c; end: 102e01fdb;  */

void FUN_102e01f3c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e01fdc; end: 102e0200b;  */

void FUN_102e01fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e0200c; end: 102e0204b;  */

void FUN_102e0200c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1c260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db54af8;
  func_0x000107c61520(&UNK_10db54af8,&UNK_1105d6268);
  puRam0000000112f1c260 = puVar1;
  return;
}



/* Entry: 102e0204c; end: 102e02093;  */

void FUN_102e0204c(void)

{
  long unaff_x20;
  
  func_0x0001007d6c6c(1,0xd00000000000001b,0x800000010f10ed20,*(undefined8 *)(unaff_x20 + 0x10),
                      &PTR_DAT_1105d60b8);
  return;
}



/* Entry: 102e02094; end: 102e0209b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e02094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  code *pcVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [80];
  undefined8 *puStack_110;
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
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_178,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + _DAT_112f1c218);
    uVar15 = *(ulong *)(lVar5 + _DAT_112f1c0e8);
    if (uVar15 == 0) {
      pcVar17 = (code *)0x0;
      puVar16 = (undefined *)0x0;
    }
    else {
      func_0x000107c61174();
      uVar6 = uVar15;
      func_0x000107c6157c();
      FUN_102dff040();
      if ((uVar6 & 1) == 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c61574(uVar15);
        return;
      }
      puVar14 = &UNK_1105d6180;
      func_0x000107c613fc(&UNK_1105d6180,0x18,7);
      func_0x000107c61614(puVar14 + 0x10,lVar5);
      func_0x000107c61170(lVar5);
      puVar16 = &UNK_1105d61a8;
      func_0x000107c613fc(&UNK_1105d61a8,0x20,7);
      *(undefined **)(puVar16 + 0x10) = puVar14;
      *(ulong *)(puVar16 + 0x18) = uVar15;
      pcVar17 = FUN_102e021f8;
    }
    lVar5 = lVar4 + _DAT_112f1c1e8;
    lVar7 = *(long *)(lVar5 + 0x18);
    lVar12 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,lVar7);
    (**(code **)(lVar12 + 8))(lVar7,lVar12);
    if (lVar7 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000002b,0x800000010f10ecf0,uVar18,&PTR_DAT_1105d60b8);
      if (uVar15 == 0) {
        func_0x000107c61170(lVar4);
      }
      else {
        (*pcVar17)(3);
        func_0x000107c61170(lVar4);
        func_0x000100d27a28(pcVar17,puVar16);
      }
    }
    else {
      func_0x0001000d224c(auStack_218);
      uVar11 = uStack_200;
      func_0x0001000a8868();
      uVar18 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar8 = uVar18;
      func_0x000107c5faec();
      func_0x000107c61170(uVar18);
      lVar5 = *(long *)(lVar4 + _DAT_112f1c228);
      if (lVar5 == 0) {
        puStack_1f0 = (undefined8 *)0x1;
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        uStack_1c0 = 0;
        uStack_1c8 = 0;
        uStack_1b0 = 0;
        uStack_1b8 = 0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        uStack_190 = 0;
        uStack_198 = 0;
        uStack_188 = 0;
        uStack_180 = 6;
      }
      else {
        lVar12 = ((undefined8 *)(lVar5 + _DAT_112fa6750))[1];
        if (lVar12 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined8 *)(lVar5 + _DAT_112fa6750);
        }
        bVar3 = lVar12 != 0;
        uVar1 = *(undefined8 *)(lVar5 + _DAT_112fa6748);
        uVar2 = ((undefined8 *)(lVar5 + _DAT_112fa6748))[1];
        func_0x000107c61434(uVar2);
        uStack_98 = uVar1;
        uStack_90 = uVar2;
        uStack_88 = uVar18;
        lStack_80 = lVar12;
        uStack_78 = bVar3;
        func_0x000107c61434(lVar12);
        func_0x000107c61174(lVar5);
        puVar9 = &uStack_98;
        func_0x000104348394(puVar9,3,0);
        func_0x000107c61170(lVar5);
        func_0x000102e021b8(uVar1,uVar2,uVar18,lVar12,bVar3);
        uStack_180 = 0;
        puStack_1f0 = puVar9;
      }
      uStack_1e8 = 0;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      uStack_c0 = uStack_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_a0 = uStack_180;
      uStack_108 = 0;
      puStack_110 = puStack_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = uStack_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      uStack_e0 = uStack_1c0;
      func_0x000107c61434(param_3);
      func_0x000107c61174(param_1);
      func_0x00010433a648(auStack_160);
      if (uVar15 == 0) {
        puVar14 = (undefined *)0x0;
        uVar18 = 0;
      }
      else {
        puVar10 = &UNK_1105d6130;
        func_0x000107c613fc(&UNK_1105d6130,0x20,7);
        *(code **)(puVar10 + 0x10) = pcVar17;
        *(undefined **)(puVar10 + 0x18) = puVar16;
        puVar14 = &UNK_1105d6158;
        func_0x000107c613fc(&UNK_1105d6158,0x20,7);
        *(undefined8 *)(puVar14 + 0x10) = 0x102e02158;
        *(undefined **)(puVar14 + 0x18) = puVar10;
        uVar18 = 0x102e0217c;
      }
      pcVar13 = *(code **)(lStack_1f8 + 8);
      func_0x000100d27a38(pcVar17,puVar16);
      (*pcVar13)(lVar7,uVar8,uVar11,&puStack_110,auStack_160,uVar18,puVar14,uStack_200,lStack_1f8);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar7);
      func_0x000100d27a28(uVar18,puVar14);
      func_0x000102e020e4(auStack_160,0x112e55fd0,&UNK_10da58ae0);
      func_0x000102e02124(&puStack_1f0);
      func_0x000107c6142c(uVar11);
      func_0x000100d27a28(pcVar17,puVar16);
      func_0x0001000834e4(auStack_218);
    }
  }
  return;
}


