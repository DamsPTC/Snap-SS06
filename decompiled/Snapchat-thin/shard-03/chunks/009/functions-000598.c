/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e841a8; end: 102e841ab;  */

/* WARNING: Possible PIC construction at 0x000102e8417c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e84180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e841a8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  lVar3 = _DAT_113080768;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000102e84a78();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uVar6;
  FUN_102e849d4(unaff_x20 + 0x28,lVar5 + 0x28);
  FUN_102e849d4(lVar7 + lVar3,lVar5 + 0x50);
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_1105e05a0;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102e841ac; end: 102e84257;  */

/* WARNING: Possible PIC construction at 0x000102e84218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8422c) */
/* WARNING: Removing unreachable block (ram,0x000102e8421c) */
/* WARNING: Removing unreachable block (ram,0x000102e8423c) */

void FUN_102e841ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000102e78e80();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105dec80;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102e84258; end: 102e8425b;  */

/* WARNING: Possible PIC construction at 0x000102e84218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8422c) */
/* WARNING: Removing unreachable block (ram,0x000102e8421c) */
/* WARNING: Removing unreachable block (ram,0x000102e8423c) */

void FUN_102e84258(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  func_0x000102e78e80();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_1105dec80;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102e8425c; end: 102e842cb;  */

/* WARNING: Possible PIC construction at 0x000102e842b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e842b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8425c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fd9e80);
  lVar1 = 0;
  func_0x000102e7fc04();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105dfb60;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
  return;
}



/* Entry: 102e842cc; end: 102e842d3;  */

/* WARNING: Possible PIC construction at 0x000102e842b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e842b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e842cc(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fd9e80);
  lVar2 = 0;
  func_0x000102e7fc04();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105dfb60;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
  return;
}



/* Entry: 102e842d4; end: 102e84363;  */

/* WARNING: Possible PIC construction at 0x000102e84340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e84344) */

void FUN_102e842d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x000102e7c660();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a95b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105df588;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102e84364; end: 102e8436f;  */

/* WARNING: Possible PIC construction at 0x000102e84340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e84344) */

void FUN_102e84364(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x000102e7c660();
  lVar4 = lVar3;
  func_0x000107c613fc();
  puVar5 = PTR_PTR_1126a95b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  *(undefined **)(lVar4 + 0x28) = puVar5;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1105df588;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102e84370; end: 102e84403;  */

/* WARNING: Possible PIC construction at 0x000102e843d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e843e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e843dc) */
/* WARNING: Removing unreachable block (ram,0x000102e843ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e84370(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_5 + _DAT_11303ea08);
  lVar1 = 0;
  func_0x000102e8242c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105e0240;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
  return;
}



/* Entry: 102e84404; end: 102e8440f;  */

/* WARNING: Possible PIC construction at 0x000102e843d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e843e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e843dc) */
/* WARNING: Removing unreachable block (ram,0x000102e843ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e84404(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11303ea08);
  lVar4 = 0;
  func_0x000102e8242c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_1105e0240;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar6);
  return;
}



/* Entry: 102e84410; end: 102e84567;  */

void FUN_102e84410(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x000102e7d75c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + 0x90) = uVar3;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  *(undefined8 *)(lVar2 + 0x40) = param_8;
  *(undefined8 *)(lVar2 + 0x48) = param_9;
  *(undefined8 *)(lVar2 + 0x50) = param_10;
  *(undefined8 *)(lVar2 + 0x58) = param_11;
  FUN_102e849d4(param_12,lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x88) = param_13;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  FUN_102e7d564();
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105df5a8;
  *param_1 = lVar2;
  return;
}



/* Entry: 102e84568; end: 102e8456b;  */

void FUN_102e84568(void)

{
  long unaff_x20;
  
  FUN_102e84410(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),unaff_x20 + 0x60
                ,*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 102e8456c; end: 102e8462f;  */

/* WARNING: Possible PIC construction at 0x000102e845e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e845f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e845f8) */
/* WARNING: Removing unreachable block (ram,0x000102e845e8) */
/* WARNING: Removing unreachable block (ram,0x000102e84608) */

void FUN_102e8456c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000102e81274();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  *(undefined8 *)(lVar2 + 0x40) = param_8;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105dffa8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102e84630; end: 102e84633;  */

/* WARNING: Possible PIC construction at 0x000102e845e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e845f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e845f8) */
/* WARNING: Removing unreachable block (ram,0x000102e845e8) */
/* WARNING: Removing unreachable block (ram,0x000102e84608) */

void FUN_102e84630(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar7 = 0;
  func_0x000102e81274();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  *(undefined8 *)(lVar8 + 0x40) = uVar9;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_1105dffa8;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102e84634; end: 102e84677;  */

void FUN_102e84634(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e84678; end: 102e8468b;  */

/* WARNING: Possible PIC construction at 0x000102e8417c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e84180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e84678(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  lVar3 = _DAT_113080768;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000102e84a78();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uVar6;
  FUN_102e849d4(unaff_x20 + 0x28,lVar5 + 0x28);
  FUN_102e849d4(lVar7 + lVar3,lVar5 + 0x50);
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_1105e05a0;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102e8468c; end: 102e846d7;  */

void FUN_102e8468c(void)

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



/* Entry: 102e846d8; end: 102e846e7;  */

/* WARNING: Possible PIC construction at 0x000102e84218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e8422c) */
/* WARNING: Removing unreachable block (ram,0x000102e8421c) */
/* WARNING: Removing unreachable block (ram,0x000102e8423c) */

void FUN_102e846d8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  func_0x000102e78e80();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_1105dec80;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102e846e8; end: 102e84893;  */

void FUN_102e846e8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e84894; end: 102e848a7;  */

/* WARNING: Possible PIC construction at 0x000102e845e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e845f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e84604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e845f8) */
/* WARNING: Removing unreachable block (ram,0x000102e845e8) */
/* WARNING: Removing unreachable block (ram,0x000102e84608) */

void FUN_102e84894(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar7 = 0;
  func_0x000102e81274();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  *(undefined8 *)(lVar8 + 0x40) = uVar9;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_1105dffa8;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102e848a8; end: 102e848df;  */

void FUN_102e848a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003269f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x0001037410f8();
  return;
}



/* Entry: 102e848e0; end: 102e848e7;  */

void FUN_102e848e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e848e8; end: 102e84987;  */

void FUN_102e848e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e84988; end: 102e849d3;  */

void FUN_102e84988(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001003269f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x0001037410f8();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e849d4; end: 102e84a17;  */

long FUN_102e849d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102e84a18; end: 102e84a33;  */

/* WARNING: Possible PIC construction at 0x000102e843d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e843e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e843dc) */
/* WARNING: Removing unreachable block (ram,0x000102e843ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e84a18(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11303ea08);
  lVar4 = 0;
  func_0x000102e8242c();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_1105e0240;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar6);
  return;
}



/* Entry: 102e84a34; end: 102e84a97;  */

void FUN_102e84a34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x0001000834e4(unaff_x20 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e84a98; end: 102e84c7f;  */

undefined8 FUN_102e84a98(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  pcVar2 = FUN_102e84e98;
  (**(code **)(lStack_38 + 0x28))(FUN_102e84e98,0,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  func_0x0001000d224c(&uStack_48);
  FUN_102e84f68(unaff_x20 + 0x28,auStack_70);
  puVar3 = &UNK_1105e05e8;
  func_0x000107c613fc(&UNK_1105e05e8,0x38,7);
  func_0x000100d298d8(auStack_70,puVar3 + 0x10);
  uVar1 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_102e84fac,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  return uVar1;
}



/* Entry: 102e84c80; end: 102e84cbb;  */

void FUN_102e84c80(void)

{
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 102e84cbc; end: 102e84d6f;  */

undefined8 FUN_102e84cbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x0001000d224c(&uStack_48);
  FUN_102e84a98();
  uVar2 = uVar1;
  func_0x000102e84b8c();
  uVar3 = uStack_48;
  func_0x000104889a8c(uStack_48,1,uVar1,uVar2,FUN_102e84c80,0);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  return uVar3;
}



/* Entry: 102e84d70; end: 102e84db3;  */

uint FUN_102e84d70(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x80))();
  return param_1 & 1;
}



/* Entry: 102e84db4; end: 102e84e3f;  */

void FUN_102e84db4(char *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (*param_1 == '\x01') {
    puVar2 = *(undefined1 **)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,puVar2);
    (**(code **)(lVar1 + 0x10))(puVar2,lVar1);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000102e84e58();
      func_0x000107c613f8(&UNK_1105e0688,puVar2,0,0);
      *puVar2 = 1;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 102e84e40; end: 102e84e97;  */

void FUN_102e84e40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e84db4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 102e84e98; end: 102e84edb;  */

uint FUN_102e84e98(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x18) + 0x50))();
  return param_1 & 1;
}



/* Entry: 102e84edc; end: 102e84f67;  */

void FUN_102e84edc(byte *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  if ((*param_1 & 1) == 0) {
    puVar2 = *(undefined1 **)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,puVar2);
    (**(code **)(lVar1 + 8))(puVar2,lVar1);
    if (((uint)puVar2 & 0xff) != 1) {
      func_0x000102e84e58();
      func_0x000107c613f8(&UNK_1105e0688,puVar2,0,0);
      *puVar2 = 0;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 102e84f68; end: 102e84fab;  */

long FUN_102e84f68(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102e84fac; end: 102e84fc3;  */

void FUN_102e84fac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e84edc(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 102e84fc4; end: 102e84fd7;  */

bool FUN_102e84fc4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e84fd8; end: 102e85083;  */

void FUN_102e84fd8(void)

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



/* Entry: 102e85084; end: 102e85087;  */

void FUN_102e85084(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f242a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5eeb0;
  func_0x000107c61520(&UNK_10db5eeb0,&UNK_1105e0688);
  puRam0000000112f242a8 = puVar1;
  return;
}



/* Entry: 102e85088; end: 102e850c7;  */

void FUN_102e85088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f242a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5eeb0;
  func_0x000107c61520(&UNK_10db5eeb0,&UNK_1105e0688);
  puRam0000000112f242a8 = puVar1;
  return;
}



/* Entry: 102e850c8; end: 102e8523b;  */

void FUN_102e850c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e8523c; end: 102e855cb;  */

bool FUN_102e8523c(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if (7 < (param_2 >> 0x30 & 0xff)) {
LAB_102e85288:
        lVar4 = 0x112d48d68;
        func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
        func_0x000107c61538();
        lVar5 = 4;
        func_0x000107c5ee18(4,8,param_1,param_2);
        func_0x0001018e4e30();
        lVar10 = *(long *)(lVar5 + 0x10);
        if (lVar10 == *(long *)(lVar4 + 0x10)) {
          if ((lVar10 == 0) || (lVar5 == lVar4)) {
            bVar3 = true;
          }
          else {
            pcVar8 = (char *)(lVar5 + 0x20);
            pcVar9 = (char *)(lVar4 + 0x20);
            do {
              lVar10 = lVar10 + -1;
              bVar3 = *pcVar8 == *pcVar9;
              if (!bVar3) break;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            } while (lVar10 != 0);
          }
        }
        else {
          bVar3 = false;
        }
        func_0x000107c6142c();
        return bVar3;
      }
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e8536c);
        (*pcVar2)();
      }
      if (7 < iVar7 - (int)param_1) goto LAB_102e85288;
    }
  }
  else if (uVar6 == 2) {
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e85368);
      (*pcVar2)();
    }
    if (7 < *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) goto LAB_102e85288;
  }
  return false;
}



/* Entry: 102e855cc; end: 102e85627;  */

bool FUN_102e855cc(long param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    pcVar2 = (char *)(param_1 + 0x20);
    pcVar3 = (char *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *pcVar2 == *pcVar3;
      if (*pcVar2 != *pcVar3) {
        return bVar1;
      }
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Entry: 102e85628; end: 102e85727;  */

uint FUN_102e85628(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long unaff_x20;
  uint uVar6;
  
  func_0x000107c5edfc();
  uVar6 = (uint)(param_2 >> 0x20);
  uVar4 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if (7 < (param_2 >> 0x30 & 0xff)) {
LAB_102e8567c:
        func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
        func_0x000107c61538();
        uVar2 = 4;
        func_0x000107c5ee18(4,8,unaff_x20,param_2);
        func_0x0001018e4e30();
        uVar3 = uVar2;
        FUN_102e855cc();
        uVar6 = (uint)uVar3;
        func_0x000107c6142c(uVar2);
        goto LAB_102e85708;
      }
    }
    else {
      iVar5 = (int)((ulong)unaff_x20 >> 0x20);
      if (SBORROW4(iVar5,(int)unaff_x20)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e85728);
        (*pcVar1)();
      }
      if (7 < iVar5 - (int)unaff_x20) goto LAB_102e8567c;
    }
  }
  else if (uVar4 == 2) {
    if (SBORROW8(*(long *)(unaff_x20 + 0x18),*(long *)(unaff_x20 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e85724);
      (*pcVar1)();
    }
    if (7 < *(long *)(unaff_x20 + 0x18) - *(long *)(unaff_x20 + 0x10)) goto LAB_102e8567c;
  }
  uVar6 = 0;
LAB_102e85708:
  func_0x00010006c090();
  return uVar6 & 1;
}



/* Entry: 102e85728; end: 102e8575b;  */

uint FUN_102e85728(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e85628();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102e8575c; end: 102e8585b;  */

uint FUN_102e8575c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long unaff_x20;
  uint uVar6;
  
  func_0x000107c5edfc();
  uVar6 = (uint)(param_2 >> 0x20);
  uVar4 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if (2 < (param_2 >> 0x30 & 0xff)) {
LAB_102e857b0:
        func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
        func_0x000107c61538();
        uVar2 = 0;
        func_0x000107c5ee18(0,3,unaff_x20,param_2);
        func_0x0001018e4e30();
        uVar3 = uVar2;
        FUN_102e855cc();
        uVar6 = (uint)uVar3;
        func_0x000107c6142c(uVar2);
        goto LAB_102e8583c;
      }
    }
    else {
      iVar5 = (int)((ulong)unaff_x20 >> 0x20);
      if (SBORROW4(iVar5,(int)unaff_x20)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8585c);
        (*pcVar1)();
      }
      if (2 < iVar5 - (int)unaff_x20) goto LAB_102e857b0;
    }
  }
  else if (uVar4 == 2) {
    if (SBORROW8(*(long *)(unaff_x20 + 0x18),*(long *)(unaff_x20 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e85858);
      (*pcVar1)();
    }
    if (2 < *(long *)(unaff_x20 + 0x18) - *(long *)(unaff_x20 + 0x10)) goto LAB_102e857b0;
  }
  uVar6 = 0;
LAB_102e8583c:
  func_0x00010006c090();
  return uVar6 & 1;
}



/* Entry: 102e8585c; end: 102e8588f;  */

uint FUN_102e8585c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e8575c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102e85890; end: 102e8598f;  */

uint FUN_102e85890(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long unaff_x20;
  uint uVar6;
  
  func_0x000107c5edfc();
  uVar6 = (uint)(param_2 >> 0x20);
  uVar4 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if (10 < (param_2 >> 0x30 & 0xff)) {
LAB_102e858e4:
        func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
        func_0x000107c61538();
        uVar2 = 8;
        func_0x000107c5ee18(8,0xb,unaff_x20,param_2);
        func_0x0001018e4e30();
        uVar3 = uVar2;
        FUN_102e855cc();
        uVar6 = (uint)uVar3;
        func_0x000107c6142c(uVar2);
        goto LAB_102e85970;
      }
    }
    else {
      iVar5 = (int)((ulong)unaff_x20 >> 0x20);
      if (SBORROW4(iVar5,(int)unaff_x20)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e85990);
        (*pcVar1)();
      }
      if (10 < iVar5 - (int)unaff_x20) goto LAB_102e858e4;
    }
  }
  else if (uVar4 == 2) {
    if (SBORROW8(*(long *)(unaff_x20 + 0x18),*(long *)(unaff_x20 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e8598c);
      (*pcVar1)();
    }
    if (10 < *(long *)(unaff_x20 + 0x18) - *(long *)(unaff_x20 + 0x10)) goto LAB_102e858e4;
  }
  uVar6 = 0;
LAB_102e85970:
  func_0x00010006c090();
  return uVar6 & 1;
}



/* Entry: 102e85990; end: 102e859c3;  */

uint FUN_102e85990(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e85890();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102e859c4; end: 102e859d3; -[SCStoryScrubEndedMetrics targetSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e859c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f24310);
}



/* Entry: 102e859d4; end: 102e859e3; -[SCStoryScrubEndedMetrics scrubStartIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e859d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f24318);
}



/* Entry: 102e859e4; end: 102e859f3; -[SCStoryScrubEndedMetrics scrubSnapDelta] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e859e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f24320);
}



/* Entry: 102e859f4; end: 102e85a03; -[SCStoryScrubEndedMetrics scrubDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e859f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f24328);
}



/* Entry: 102e85a04; end: 102e85a13; -[SCStoryScrubEndedMetrics scrubSegmentCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e85a04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f24330);
}



/* Entry: 102e85a14; end: 102e85a23; -[SCStoryScrubEndedMetrics isVideoChapter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e85a14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f24338);
}



/* Entry: 102e85a24; end: 102e85ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e85a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f24310) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f24318) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f24320) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f24328) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f24330) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112f24338) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e85ad8; end: 102e85b8b; -[SCStoryScrubEndedMetrics initWithTargetSnapIndex:scrubStartIndex:scrubSnapDelta:scrubDurationMs:scrubSegmentCount:isVideoChapter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e85ad8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112f24310) = param_4;
  *(undefined8 *)(param_2 + _DAT_112f24318) = param_5;
  *(undefined8 *)(param_2 + _DAT_112f24320) = param_6;
  *(undefined8 *)(param_2 + _DAT_112f24328) = param_1;
  *(undefined8 *)(param_2 + _DAT_112f24330) = param_7;
  *(undefined1 *)(param_2 + _DAT_112f24338) = param_8;
  lStack_60 = param_2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e85b8c; end: 102e85beb; -[SCStoryScrubEndedMetrics init] */

void FUN_102e85b8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoryScrubController.StoryScrubEndedMetrics",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e85bb8);
  (*pcVar1)();
}



/* Entry: 102e85bec; end: 102e85c07; -[SCStoryScrubController thumbnailFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e85bec(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_1138050c8);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_102e85c08;
    puStack_60 = &UNK_1105e0a30;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102e85c08; end: 102e85cf7;  */

/* WARNING: Possible PIC construction at 0x000102e85cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e85cc0) */

void FUN_102e85c08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_4;
  func_0x000107c5faec(param_6);
  func_0x000107c60bc4();
  puVar3 = &UNK_1105e0a68;
  func_0x000107c613fc(&UNK_1105e0a68,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  (*pcVar1)(param_1,param_2,param_4,param_5,param_6,uVar4,0x102e8c004,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102e85cf8; end: 102e85db3; -[SCStoryScrubController setThumbnailFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e85cf8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105e09f0;
    func_0x000107c613fc(&UNK_1105e09f0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102e8bffc;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_1138050c8);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d29904(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e85db4; end: 102e85e9f;  */

void FUN_102e85db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar1 = &puStack_90;
  func_0x000107c5fadc(param_5,param_6);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1013c3000;
  puStack_78 = &UNK_1105e0a08;
  uStack_70 = param_7;
  uStack_68 = param_8;
  func_0x000107c60bc4(&puStack_90);
  pcVar2 = *(code **)(param_9 + 0x10);
  func_0x000107c6157c(param_8);
  (*pcVar2)(param_1,param_2,param_9,param_3,param_4,param_5,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uStack_68);
  return;
}



/* Entry: 102e85ea0; end: 102e85ee3; -[SCStoryScrubController pausesPlaybackOnScrub] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e85ea0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138050d0;
  func_0x000107c61428(param_1 + _DAT_1138050d0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102e85ee4; end: 102e85f33; -[SCStoryScrubController setPausesPlaybackOnScrub:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e85ee4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138050d0;
  func_0x000107c61428(param_1 + _DAT_1138050d0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e85f34; end: 102e85f77; -[SCStoryScrubController showsOnboardingHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e85f34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138050d8;
  func_0x000107c61428(param_1 + _DAT_1138050d8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102e85f78; end: 102e85fc7; -[SCStoryScrubController setShowsOnboardingHint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e85f78(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138050d8;
  func_0x000107c61428(param_1 + _DAT_1138050d8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e85fc8; end: 102e8600f; -[SCStoryScrubController preferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e85fc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138050e0;
  func_0x000107c61428(param_1 + _DAT_1138050e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102e86010; end: 102e86073; -[SCStoryScrubController setPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138050e0;
  func_0x000107c61428(param_1 + _DAT_1138050e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102e86074; end: 102e860b7; -[SCStoryScrubController scrubsFromBottom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e86074(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138050e8;
  func_0x000107c61428(param_1 + _DAT_1138050e8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102e860b8; end: 102e86107; -[SCStoryScrubController setScrubsFromBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e860b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138050e8;
  func_0x000107c61428(param_1 + _DAT_1138050e8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e86108; end: 102e8614b; -[SCStoryScrubController thumbnailScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e86108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138050f0;
  func_0x000107c61428(param_1 + _DAT_1138050f0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102e8614c; end: 102e8619b; -[SCStoryScrubController setThumbnailScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8614c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138050f0;
  func_0x000107c61428(param_2 + _DAT_1138050f0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 102e8619c; end: 102e861e3; -[SCStoryScrubController bottomAnchorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8619c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138050f8;
  func_0x000107c61428(param_1 + _DAT_1138050f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e861e4; end: 102e8623b; -[SCStoryScrubController setBottomAnchorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e861e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138050f8;
  func_0x000107c61428(param_1 + _DAT_1138050f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e8623c; end: 102e86257; -[SCStoryScrubController onScrubBegan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8623c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_113805100);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_102e86258;
    puStack_60 = &UNK_1105e09b8;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102e86258; end: 102e86293;  */

void FUN_102e86258(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102e86294; end: 102e8634f; -[SCStoryScrubController setOnScrubBegan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86294(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105e09a0;
    func_0x000107c613fc(&UNK_1105e09a0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102e8c1fc;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113805100);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d29904(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e86350; end: 102e8636b; -[SCStoryScrubController onScrubEnded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86350(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_113805108);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x102e86410;
    puStack_60 = &UNK_1105e0968;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102e8636c; end: 102e8645b;  */

void FUN_102e8636c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    ppuVar3 = &puStack_78;
    uStack_68 = param_4;
    uStack_60 = param_5;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102e8645c; end: 102e86517; -[SCStoryScrubController setOnScrubEnded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8645c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105e0950;
    func_0x000107c613fc(&UNK_1105e0950,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102e8bfec;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113805108);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100d29904(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e86518; end: 102e8655b; -[SCStoryScrubController isScrubbing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e86518(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113805110;
  func_0x000107c61428(param_1 + _DAT_113805110,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102e8655c; end: 102e8679b; -[SCStoryScrubController setIsScrubbing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8655c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113805110;
  func_0x000107c61428(param_1 + _DAT_113805110,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102e8679c; end: 102e867ff; -[SCStoryScrubController init] */

void FUN_102e8679c(void)

{
  func_0x000102e865ac();
  return;
}



/* Entry: 102e86800; end: 102e8698f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86800(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = _DAT_113805110;
  func_0x000107c61428(unaff_x20 + _DAT_113805110,auStack_58,0,0);
  if (*(char *)(unaff_x20 + lVar4) == '\x01') {
    *(undefined8 *)(unaff_x20 + _DAT_112f24368) = *(undefined8 *)(unaff_x20 + _DAT_112f24360);
    FUN_102e86de4();
  }
  lVar4 = _DAT_112f24358;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f24358);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4ff3c();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = 0;
    func_0x000107c61170(uVar3);
  }
  lVar4 = _DAT_112f243b0;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f243b0) != 0) {
    func_0x000107c4ff34();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar3);
  lVar4 = _DAT_112f243c0;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f243c0) != 0) {
    func_0x000107c4ff34();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar3);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,lVar4);
  lVar4 = _DAT_112f243c8;
  func_0x000107c61428(unaff_x20 + _DAT_112f243c8,auStack_70,0x21,0);
  func_0x000100ed9cbc(auStack_70 + -extraout_x8,unaff_x20 + lVar4);
  func_0x000107c614a8(auStack_70);
  return;
}



/* Entry: 102e86990; end: 102e869e7; -[SCStoryScrubController dealloc] */

void FUN_102e86990(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_102e86800();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e869e8; end: 102e86b0b; -[SCStoryScrubController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e86ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e86aec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e86abc) */
/* WARNING: Removing unreachable block (ram,0x000102e86af0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e869e8(long param_1)

{
  func_0x000100d29914(param_1 + _DAT_112f24340);
  func_0x000100d29914(param_1 + _DAT_112f24348);
  func_0x000100d29914(param_1 + _DAT_112f24350);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f24358));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f24370));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f24380));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f243b0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f243b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f243c0));
  func_0x000102e8c090(param_1 + _DAT_112f243c8,0x112d373d8,&UNK_10d9014c0);
  if (*(long *)(param_1 + _DAT_1138050c8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_1138050c8))[1]);
    return;
  }
  return;
}



/* Entry: 102e86b0c; end: 102e86b1f; -[SCStoryScrubController setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f24340,param_3);
  return;
}



/* Entry: 102e86b20; end: 102e86c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86b20(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61604(param_1 + _DAT_112f24348);
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c42a9c(param_2);
    func_0x000107c61180();
  }
  func_0x000107c61604(param_1 + _DAT_112f24350,lVar3);
  func_0x000107c615e8(lVar3);
  *(undefined1 *)(param_1 + _DAT_112f24390) = 1;
  lVar3 = _DAT_112f243b8;
  func_0x000107c61428(param_1 + _DAT_112f243b8,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar1);
  lVar3 = param_2;
  if (param_2 != 0) {
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_2;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(param_2);
    }
  }
  lVar2 = lVar3;
  func_0x000107c5de64(lVar3);
  func_0x000107c61180();
  FUN_102e86c40();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102e86c40; end: 102e86d37;  */

/* WARNING: Possible PIC construction at 0x000102e86c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e86ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e86d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e86c90) */
/* WARNING: Removing unreachable block (ram,0x000102e86d08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86c40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f24358);
  if (lVar1 == 0) {
    if (param_1 == 0) {
      return;
    }
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x000107c61174(param_1);
    func_0x000107c48c2c(puVar2);
    func_0x000107c53fcc();
    func_0x000107c56398(puVar2,param_2,1);
    func_0x000107c3d6fc(param_1,param_2,puVar2);
  }
  else {
    func_0x000107c61174();
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4ff3c();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e86d38; end: 102e86de3; -[SCStoryScrubController setOperaControlling:] */

void FUN_102e86d38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  puStack_60 = param_1;
  uStack_58 = param_3;
  func_0x000107c61174(uVar2);
  func_0x0001000b0da8(0xd00000000000002a,0x800000010f1126a0,0x102e8c204,auStack_70);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e86de4; end: 102e872db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e86de4(double param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  code *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [344];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar2 = _DAT_113805110;
  func_0x000107c61428(unaff_x20 + _DAT_113805110,auStack_90,1,0);
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  lVar2 = _DAT_1138050d0;
  func_0x000107c61428(unaff_x20 + _DAT_1138050d0,auStack_a8,0,0);
  if (*(char *)(unaff_x20 + lVar2) == '\x01') {
    lVar2 = unaff_x20 + _DAT_112f24348;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5df08();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar3 != 0) {
        func_0x000107c50714(lVar3);
        func_0x000107c615e8(lVar3);
      }
    }
  }
  func_0x000107c6071c();
  lVar3 = _DAT_112f24398;
  lVar2 = _DAT_112f24368;
  if (*(long *)(unaff_x20 + _DAT_112f24368) < 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x102e872cc);
    (*pcVar13)();
  }
  if (*(long *)(unaff_x20 + _DAT_112f24398) < 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x102e872d0);
    (*pcVar13)();
  }
  dVar17 = (param_1 - *(double *)(unaff_x20 + _DAT_112f243a0)) * 1000.0;
  lVar16 = *(long *)(unaff_x20 + _DAT_112f24368) - *(long *)(unaff_x20 + _DAT_112f24398);
  lVar4 = unaff_x20 + _DAT_112f24350;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar5 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f1127c0);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f24370);
    lVar6 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar6 + 0x18) = 0xc;
    *(undefined8 *)(lVar6 + 0x10) = 6;
    *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000011;
    *(undefined8 *)(lVar6 + 0x28) = 0x800000010f1126f0;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61174(uVar14);
    func_0x000107c490d4();
    uVar8 = 0;
    FUN_102e8c050(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined **)(lVar6 + 0x30) = puVar7;
    *(undefined8 *)(lVar6 + 0x48) = uVar8;
    *(undefined8 *)(lVar6 + 0x50) = 0xd000000000000011;
    *(undefined8 *)(lVar6 + 0x58) = 0x800000010f1127e0;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    *(undefined **)(lVar6 + 0x60) = puVar7;
    *(undefined8 *)(lVar6 + 0x78) = uVar8;
    *(undefined8 *)(lVar6 + 0x80) = 0xd000000000000010;
    *(undefined8 *)(lVar6 + 0x88) = 0x800000010f112800;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined **)(lVar6 + 0x90) = puVar7;
    *(undefined8 *)(lVar6 + 0xa8) = uVar8;
    *(undefined8 *)(lVar6 + 0xb0) = 0xd000000000000011;
    *(undefined8 *)(lVar6 + 0xb8) = 0x800000010f112820;
    if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x102e872d4);
      (*pcVar13)();
    }
    if (dVar17 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x102e872d8);
      (*pcVar13)();
    }
    if (1.8446744073709552e+19 <= dVar17) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x102e872dc);
      (*pcVar13)();
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    *(undefined **)(lVar6 + 0xc0) = puVar7;
    *(undefined8 *)(lVar6 + 0xd8) = uVar8;
    *(undefined8 *)(lVar6 + 0xe0) = 0xd000000000000013;
    *(undefined8 *)(lVar6 + 0xe8) = 0x800000010f112840;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    *(undefined **)(lVar6 + 0xf0) = puVar7;
    *(undefined8 *)(lVar6 + 0x108) = uVar8;
    *(undefined8 *)(lVar6 + 0x110) = 0xd000000000000016;
    *(undefined8 *)(lVar6 + 0x118) = 0x800000010f112860;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    *(undefined8 *)(lVar6 + 0x138) = uVar8;
    *(undefined **)(lVar6 + 0x120) = puVar7;
    lVar9 = lVar6;
    func_0x000100214a84(lVar6);
    func_0x000107c61588(lVar6);
    uVar8 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar6 + 0x20),6,uVar8);
    lVar6 = lVar9;
    func_0x000107c5f9dc(lVar9,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                       );
    func_0x000107c6142c(lVar9);
    func_0x000107c4df80(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(lVar6);
  }
  puVar11 = (undefined8 *)(unaff_x20 + _DAT_113805108);
  puVar10 = puVar11;
  func_0x000107c61428(puVar11,auStack_200,0,0);
  pcVar13 = (code *)*puVar11;
  if (pcVar13 != (code *)0x0) {
    uVar5 = puVar11[1];
    uVar14 = *(undefined8 *)(unaff_x20 + lVar2);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    lVar2 = -lVar16;
    if (-1 < lVar16) {
      lVar2 = lVar16;
    }
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f24388);
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f24378);
    FUN_102e8be64();
    puVar11 = puVar10;
    func_0x000107c610f8();
    *(undefined8 *)((long)puVar11 + _DAT_112f24310) = uVar14;
    *(undefined8 *)((long)puVar11 + _DAT_112f24318) = uVar8;
    *(long *)((long)puVar11 + _DAT_112f24320) = lVar2;
    *(double *)((long)puVar11 + _DAT_112f24328) = dVar17;
    *(undefined8 *)((long)puVar11 + _DAT_112f24330) = uVar15;
    *(undefined1 *)((long)puVar11 + _DAT_112f24338) = uVar1;
    puVar7 = PTR_s_init_1125d9248;
    puStack_210 = puVar11;
    puStack_208 = puVar10;
    func_0x000107c6157c(uVar5);
    ppuVar12 = &puStack_210;
    func_0x000107c61154(ppuVar12,puVar7);
    (*pcVar13)();
    func_0x000107c61170(ppuVar12);
    func_0x000100d29904(pcVar13,uVar5);
  }
  return;
}



/* Entry: 102e872dc; end: 102e872e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e872dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61604(lVar3 + _DAT_112f24348);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c42a9c(lVar2);
    func_0x000107c61180();
  }
  func_0x000107c61604(lVar3 + _DAT_112f24350,lVar4);
  func_0x000107c615e8(lVar4);
  *(undefined1 *)(lVar3 + _DAT_112f24390) = 1;
  lVar4 = _DAT_112f243b8;
  func_0x000107c61428(lVar3 + _DAT_112f243b8,auStack_48,1,0);
  uVar1 = *(undefined8 *)(lVar3 + lVar4);
  *(undefined **)(lVar3 + lVar4) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar1);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
    }
  }
  lVar2 = lVar3;
  func_0x000107c5de64(lVar3);
  func_0x000107c61180();
  FUN_102e86c40();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102e872e4; end: 102e8730b; -[SCStoryScrubController teardown] */

void FUN_102e872e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e86800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e8730c; end: 102e87383; -[SCStoryScrubController registeredEventsForOperaSession] */

void FUN_102e8730c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb9c00();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102e87384; end: 102e8743b; -[SCStoryScrubController operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102e87420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e87424) */

void FUN_102e87384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102e8ba74(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102e8743c; end: 102e87d83;  */

/* WARNING: Possible PIC construction at 0x000102e87c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e87cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e875d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e87cf0) */
/* WARNING: Removing unreachable block (ram,0x000102e87ce0) */
/* WARNING: Removing unreachable block (ram,0x000102e87d24) */
/* WARNING: Removing unreachable block (ram,0x000102e87d2c) */
/* WARNING: Removing unreachable block (ram,0x000102e87bb8) */
/* WARNING: Removing unreachable block (ram,0x000102e87bbc) */
/* WARNING: Removing unreachable block (ram,0x000102e87b98) */
/* WARNING: Removing unreachable block (ram,0x000102e87b9c) */
/* WARNING: Removing unreachable block (ram,0x000102e87b34) */
/* WARNING: Removing unreachable block (ram,0x000102e87b14) */
/* WARNING: Removing unreachable block (ram,0x000102e87b18) */
/* WARNING: Removing unreachable block (ram,0x000102e87cac) */
/* WARNING: Removing unreachable block (ram,0x000102e87d34) */
/* WARNING: Removing unreachable block (ram,0x000102e87c9c) */
/* WARNING: Removing unreachable block (ram,0x000102e875d8) */
/* WARNING: Removing unreachable block (ram,0x000102e87bc8) */
/* WARNING: Removing unreachable block (ram,0x000102e87bf0) */
/* WARNING: Removing unreachable block (ram,0x000102e87c1c) */
/* WARNING: Removing unreachable block (ram,0x000102e87c24) */
/* WARNING: Removing unreachable block (ram,0x000102e87c40) */
/* WARNING: Removing unreachable block (ram,0x000102e87c50) */
/* WARNING: Removing unreachable block (ram,0x000102e87c54) */
/* WARNING: Removing unreachable block (ram,0x000102e87cb0) */
/* WARNING: Removing unreachable block (ram,0x000102e87cb8) */
/* WARNING: Removing unreachable block (ram,0x000102e87cfc) */
/* WARNING: Removing unreachable block (ram,0x000102e87cc4) */
/* WARNING: Removing unreachable block (ram,0x000102e87c58) */
/* WARNING: Removing unreachable block (ram,0x000102e87cd4) */
/* WARNING: Removing unreachable block (ram,0x000102e87d0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e8743c(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_78;
  
  func_0x000107c614f0();
  uVar2 = unaff_x20 + _DAT_112f24340;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  lVar3 = param_1;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  uVar11 = param_2;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    uVar11 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar4 = uVar2;
  func_0x000107c4e9d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (uVar4 == 0) goto code_r0x000107c615e8;
  uVar5 = uVar4;
  func_0x000107c444d0();
  func_0x000107c61180();
  if (uVar5 == 0) goto code_r0x000107c615e8;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f24370);
  *(long *)(unaff_x20 + _DAT_112f24370) = param_1;
  func_0x000107c61170(uVar6);
  puVar17 = *(undefined8 **)(param_1 + _DAT_11307abc8);
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0c498;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c498);
  if (puVar17[2] == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    func_0x000107c61174(param_1);
LAB_102e87624:
    func_0x000107c6142c(uVar11);
LAB_102e8762c:
    puVar14 = (undefined8 *)0x112d387f8;
    func_0x000102e8c090(&uStack_a0,0x112d387f8,&UNK_10d902650);
LAB_102e87644:
    uStack_78 = 0;
LAB_102e87648:
    ppuVar7 = &PTR____CFConstantStringClassReference_110f0e718;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e718);
    if (puVar17[2] == 0) {
LAB_102e876a8:
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c61434(puVar17);
      puVar15 = puVar14;
      func_0x000100029284(ppuVar7);
      if (((ulong)puVar15 & 1) == 0) {
        func_0x000107c6142c(puVar17);
        goto LAB_102e876a8;
      }
      func_0x0001000bb420(puVar17[7] + (long)ppuVar7 * 0x20,&uStack_a0);
      func_0x000107c6142c(puVar14);
      puVar14 = puVar17;
    }
    func_0x000107c6142c(puVar14);
    if (lStack_88 == 0) {
      func_0x000102e8c090(&uStack_a0,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar6 = 0;
      func_0x00010444693c(0);
      plVar9 = alStack_b8;
      func_0x000107c6147c(plVar9,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if (((ulong)plVar9 & 1) != 0) {
        puVar18 = *(undefined **)(alStack_b8[0] + _DAT_113079da0);
        if (puVar18 != (undefined *)0x0) {
          if ((ulong)puVar18 >> 0x3e == 0) {
            puVar20 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
            puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar20 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
            if (((ulong)puVar18 & 0x8000000000000000) != 0) {
              puVar20 = puVar18;
            }
            func_0x000107c60480();
            puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if ((long)puVar20 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102e87908);
              (*pcVar1)();
            }
          }
          PTR___swiftEmptyArrayStorage_11034f1c8 = puVar21;
          if ((puVar20 != (undefined *)0x0) && ((undefined *)0xb < puVar20)) {
            func_0x000107c61434(puVar18);
            if ((ulong)puVar21 >> 0x3e == 0) {
              puVar10 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar10 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar21) {
                puVar10 = puVar21;
              }
              func_0x000107c60480();
            }
            if ((long)puVar10 <= (long)puVar20) {
              puVar10 = puVar20;
            }
            uVar11 = 0;
            func_0x000101d1802c(0,puVar10,0,PTR___swiftEmptyArrayStorage_11034f1c8);
            if ((ulong)puVar18 >> 0x3e == 0) {
              puVar20 = *(undefined **)((undefined *)((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar20 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
              if (((ulong)puVar18 & 0x8000000000000000) != 0) {
                puVar20 = puVar18;
              }
              func_0x000107c60480();
            }
            if (puVar20 == (undefined *)0x0) {
              func_0x000107c61170(alStack_b8[0]);
              func_0x000107c6142c(puVar18);
            }
            else {
              if ((long)puVar20 < 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102e87920);
                (*pcVar1)();
              }
              puVar21 = (undefined *)0x0;
              do {
                if (((ulong)puVar18 & 0xc000000000000001) == 0) {
                  puVar10 = *(undefined **)(puVar18 + (long)puVar21 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  puVar10 = puVar21;
                  func_0x000102e8f964(puVar21,puVar18);
                }
                puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x000107c610f8();
                func_0x000107c466c0();
                uVar19 = uVar11;
                if (uVar11 >> 0x3e != 0) {
                  uVar13 = uVar11 & 0xffffffffffffff8;
                  if (0x7fffffffffffffff < uVar11) {
                    uVar13 = uVar11;
                  }
                  func_0x000107c60480(uVar13);
                  uVar19 = 0;
                  func_0x000101d1802c(0,uVar13 + 1,1,uVar11);
                }
                uVar16 = uVar19 & 0xffffffffffffff8;
                uVar13 = *(ulong *)(uVar16 + 0x10);
                uVar11 = uVar19;
                if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar13) {
                  uVar11 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
                  func_0x000101d1802c(uVar11,uVar13 + 1,1,uVar19);
                  uVar16 = uVar11 & 0xffffffffffffff8;
                }
                puVar21 = puVar21 + 1;
                *(ulong *)(uVar16 + 0x10) = uVar13 + 1;
                *(undefined **)(uVar16 + uVar13 * 8 + 0x20) = puVar12;
                func_0x000107c61170(puVar10);
              } while (puVar20 != puVar21);
              func_0x000107c61170(alStack_b8[0]);
              func_0x000107c6142c(puVar18);
            }
            uVar19 = uStack_78;
            uStack_78 = uVar11;
            func_0x000107c6142c(uVar19);
            goto LAB_102e87938;
          }
        }
        func_0x000107c61170();
      }
    }
LAB_102e87938:
    if (uStack_78 != 0) goto LAB_102e87940;
LAB_102e879c8:
    *(undefined1 *)(unaff_x20 + _DAT_112f24378) = 0;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f24380);
    *(undefined8 *)(unaff_x20 + _DAT_112f24380) = 0;
    func_0x000107c6142c(uVar6);
    uVar11 = uVar5;
    func_0x000107c4a7d4();
    func_0x000107c61180();
    uVar6 = 0x112f0a728;
    func_0x0001000285a8(0x112f0a728,&UNK_10db3d710);
    uVar19 = uVar11;
    func_0x000107c5fc54(uVar11,uVar6);
    func_0x000107c61170(uVar11);
    if (uVar19 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
      func_0x000107c6142c(uVar19);
    }
    else {
      uVar11 = uVar19 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar19) {
        uVar11 = uVar19;
      }
      func_0x000107c60480();
      func_0x000107c6142c(uVar19);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e87d84);
        (*pcVar1)();
      }
    }
    *(ulong *)(unaff_x20 + _DAT_112f24388) = uVar11;
    func_0x000107c4533c();
    plVar9 = (long *)&DAT_112f24360;
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c61434(puVar17);
    uVar19 = uVar11;
    func_0x000100029284(ppuVar7);
    if ((uVar19 & 1) == 0) {
      func_0x000107c6142c(puVar17);
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      goto LAB_102e87624;
    }
    func_0x0001000bb420(puVar17[7] + (long)ppuVar7 * 0x20,&uStack_a0);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(puVar17);
    if (lStack_88 == 0) goto LAB_102e8762c;
    uVar6 = 0x112da1fa0;
    func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
    puVar8 = &uStack_78;
    puVar14 = &uStack_a0;
    func_0x000107c6147c(puVar8,puVar14,PTR___sypN_11034f1a8 + 8,uVar6,6);
    if (((ulong)puVar8 & 1) == 0) goto LAB_102e87644;
    if (uStack_78 == 0) goto LAB_102e87648;
LAB_102e87940:
    uVar11 = uStack_78;
    if (uStack_78 >> 0x3e == 0) {
      uVar19 = *(ulong *)((uStack_78 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar19 = uStack_78;
      if (-1 < (long)uStack_78) {
        uVar19 = uStack_78 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
      if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e879b8);
        (*pcVar1)();
      }
    }
    if (uVar19 < 0xc) goto LAB_102e879c8;
    *(undefined1 *)(unaff_x20 + _DAT_112f24378) = 1;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f24380);
    *(ulong *)(unaff_x20 + _DAT_112f24380) = uVar11;
    func_0x000107c61434();
    func_0x000107c6142c(uVar6);
    *(undefined8 *)(unaff_x20 + _DAT_112f24360) = 0;
    plVar9 = (long *)&DAT_112f24388;
    uVar5 = uVar19;
  }
  *(ulong *)(unaff_x20 + *plVar9) = uVar5;
  lVar3 = _DAT_112f24348;
  if (*(ulong *)(unaff_x20 + _DAT_112f24388) < 0xc) {
    if (*(long *)(unaff_x20 + _DAT_112f243c0) != 0) {
      FUN_102e87d84();
    }
    lVar3 = _DAT_113805110;
    func_0x000107c61428(unaff_x20 + _DAT_113805110,&uStack_a0,0,0);
    if (*(char *)(unaff_x20 + lVar3) == '\x01') {
      *(undefined8 *)(unaff_x20 + _DAT_112f24368) = *(undefined8 *)(unaff_x20 + _DAT_112f24398);
      FUN_102e87f10();
      FUN_102e86de4();
      uVar2 = uVar4;
    }
    else {
      uVar2 = uVar4;
      if (*(long *)(unaff_x20 + _DAT_112f243b0) != 0) {
        FUN_102e87f10();
      }
    }
  }
  else {
    uVar11 = unaff_x20 + _DAT_112f24348;
    func_0x000107c61618();
    if (uVar11 == 0) {
      func_0x000107c4abfc(0);
      FUN_102e87f9c(1);
      uVar11 = unaff_x20 + lVar3;
      func_0x000107c61618();
      if (uVar11 == 0) {
        func_0x000107c615e8(uVar2);
        uVar2 = uVar4;
      }
      else {
        func_0x000107c5d1b8();
        func_0x000107c61180();
        uVar2 = uVar11;
      }
    }
    else {
      func_0x000107c5d1b8();
      func_0x000107c61180();
      uVar2 = uVar11;
    }
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 102e87d84; end: 102e87f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e87d84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  lVar7 = *(long *)(unaff_x20 + _DAT_112f243c0);
  if (lVar7 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1105e0838;
    func_0x000107c613fc(&UNK_1105e0838,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar7;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x102e8bfd0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105e0850;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1105e0888;
    func_0x000107c613fc(&UNK_1105e0888,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar5 = &UNK_1105e08b0;
    func_0x000107c613fc(&UNK_1105e08b0,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar7;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    uStack_60 = 0x102e8bfdc;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100288f10;
    puStack_68 = &UNK_1105e08c8;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(lVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar2);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 102e87f10; end: 102e87f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e87f10(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f243b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f243b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar2);
  lVar1 = _DAT_112f243b0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f243b0);
  uVar2 = 0;
  if (lVar3 != 0) {
    func_0x000107c61174();
    FUN_102e8d140();
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102e87f9c; end: 102e882f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e87f9c(double param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar6 = _DAT_112f24348;
  lVar4 = unaff_x20 + _DAT_112f24348;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  lVar1 = lVar4;
  func_0x000107c5d1b8();
  func_0x000107c61180();
  func_0x000107c615e8(lVar4);
  if (lVar1 == 0) {
    return;
  }
  lVar4 = lVar1;
  func_0x000107c5d1b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  lVar1 = lVar4;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar1 == 0) {
    return;
  }
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  if (lVar6 == 0) {
LAB_102e88088:
    lVar6 = 0;
  }
  else {
    lVar4 = lVar6;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    if (lVar4 == 0) goto LAB_102e88088;
    lVar6 = lVar4;
    func_0x000107c5d1b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
  }
  lVar5 = _DAT_1138050e8;
  func_0x000107c61428(unaff_x20 + _DAT_1138050e8,auStack_78,0,0);
  lVar4 = _DAT_1138050f8;
  if (*(char *)(unaff_x20 + lVar5) == '\x01') {
    func_0x000107c61428(unaff_x20 + _DAT_1138050f8,auStack_d8,0,0);
    lVar4 = unaff_x20 + lVar4;
    func_0x000107c61618();
    if ((lVar4 == 0) || (lVar4 == lVar1)) {
LAB_102e88144:
      lVar2 = lVar6;
      FUN_102e8b4b8();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar4;
        goto LAB_102e882ac;
      }
      func_0x000107c61170();
      func_0x000107c515a0(lVar1);
    }
    else {
      lVar2 = lVar4;
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      if (lVar3 == 0) {
LAB_102e88138:
        func_0x000107c61170(lVar2);
        goto LAB_102e88144;
      }
      func_0x000107c61170();
      func_0x000107c3ec60(lVar2);
      func_0x000107c609b0();
      if (param_1 <= 0.0) goto LAB_102e88138;
      func_0x000107c3ec60(lVar2);
      func_0x000107c4073c(lVar2);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar4);
  }
  lVar4 = _DAT_1138050d8;
  if (((((param_2 & 1) == 0) || (*(char *)(unaff_x20 + _DAT_112f24390) != '\x01')) ||
      (func_0x000107c61428(unaff_x20 + _DAT_1138050d8,auStack_c0,0,0),
      *(char *)(unaff_x20 + lVar4) != '\x01')) ||
     ((*(ulong *)(unaff_x20 + _DAT_112f24388) < 0xc || (*(long *)(unaff_x20 + _DAT_112f243c0) != 0))
     )) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f243c0);
    if ((lVar4 != 0) && (*(char *)(unaff_x20 + lVar5) == '\x01')) {
      func_0x000107c61174();
      func_0x000107c3ec60(lVar1);
      func_0x000107c609b0();
      func_0x000107c61428(unaff_x20 + _DAT_1138050f0,auStack_90,0,0);
      lVar5 = _DAT_1138050f8;
      func_0x000107c61428(unaff_x20 + _DAT_1138050f8,auStack_a8,0,0);
      lVar5 = unaff_x20 + lVar5;
      func_0x000107c61618(lVar5);
      FUN_102e89500(lVar1,lVar5,lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c3f74c(lVar4);
      func_0x000107c532b4(lVar4);
      func_0x000107c61170(lVar4);
    }
  }
  else {
    FUN_102e8892c(lVar1);
  }
LAB_102e882ac:
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 102e882f4; end: 102e8844b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e882f4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&puStack_60 - extraout_x8;
  func_0x000107c5ee80(lVar4,0x3ff8000000000000);
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar4,0,1,lVar1);
  lVar1 = _DAT_112f243c8;
  func_0x000107c61428(unaff_x20 + _DAT_112f243c8,&puStack_60,0x21,0);
  func_0x000100ed9cbc(lVar4,unaff_x20 + lVar1);
  func_0x000107c614a8(&puStack_60);
  puVar2 = &UNK_1105e0888;
  func_0x000107c613fc(&UNK_1105e0888,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x102e8c208;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105e0a80;
  ppuVar3 = &puStack_60;
  puStack_38 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_38);
  func_0x000100c749e0(0x3dcccccd,&UNK_10db5ef90,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}


