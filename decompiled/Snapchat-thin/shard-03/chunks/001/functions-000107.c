/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10252eab0; end: 10252ec5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10252eab0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 in_x5;
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  plVar8 = &lStack_c0;
  uVar2 = in_x5;
  func_0x000107c614f0();
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar3 = *(undefined8 *)(lStack_70 + _DAT_112fcd3b0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar4 = uStack_80;
  func_0x000107c4f0f8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar5 = *(undefined8 *)(lStack_88 + _DAT_112fa96b0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  lVar6 = 0;
  FUN_10252b844();
  lVar7 = lVar6;
  func_0x000107c610f8();
  ppuStack_90 = &PTR_DAT_11051d740;
  *(undefined8 *)(lVar7 + _DAT_112ea3e90) = uStack_68;
  *(undefined8 *)(lVar7 + _DAT_112ea3e98) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112ea3ea0) = uStack_78;
  *(undefined8 *)(lVar7 + _DAT_112ea3ea8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112ea3eb0) = uVar5;
  auStack_b0[0] = in_x5;
  uStack_98 = uVar2;
  FUN_10252bc14(auStack_b0,lVar7 + _DAT_112ea3eb8);
  puVar1 = PTR_s_init_1125d9248;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  func_0x000107c61174(in_x5);
  func_0x000107c61154(&lStack_c0,puVar1);
  func_0x0001000834e4(auStack_b0);
  return (undefined1 *)plVar8;
}



/* Entry: 10252ec60; end: 10252ec6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10252ec60(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar9 = &lStack_c0;
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar4 = *(undefined8 *)(lStack_70 + _DAT_112fcd3b0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar5 = uStack_80;
  func_0x000107c4f0f8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar6 = *(undefined8 *)(lStack_88 + _DAT_112fa96b0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  lVar7 = 0;
  FUN_10252b844();
  lVar8 = lVar7;
  func_0x000107c610f8();
  ppuStack_90 = &PTR_DAT_11051d740;
  *(undefined8 *)(lVar8 + _DAT_112ea3e90) = uStack_68;
  *(undefined8 *)(lVar8 + _DAT_112ea3e98) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112ea3ea0) = uStack_78;
  *(undefined8 *)(lVar8 + _DAT_112ea3ea8) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112ea3eb0) = uVar6;
  auStack_b0[0] = uVar1;
  uStack_98 = uVar3;
  FUN_10252bc14(auStack_b0,lVar8 + _DAT_112ea3eb8);
  puVar2 = PTR_s_init_1125d9248;
  lStack_c0 = lVar8;
  lStack_b8 = lVar7;
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_c0,puVar2);
  func_0x0001000834e4(auStack_b0);
  return (undefined1 *)plVar9;
}



/* Entry: 10252ec70; end: 10252eca7;  */

void FUN_10252ec70(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10252eca8; end: 10252ecb7;  */

void FUN_10252eca8(long param_1,long param_2)

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



/* Entry: 10252ecb8; end: 10252ee73;  */

/* WARNING: Possible PIC construction at 0x00010252edc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252edd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252ede4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252edf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252ee04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252ee14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252ee24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252ee34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010252ee44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010252ee38) */
/* WARNING: Removing unreachable block (ram,0x00010252ee28) */
/* WARNING: Removing unreachable block (ram,0x00010252ee18) */
/* WARNING: Removing unreachable block (ram,0x00010252ee08) */
/* WARNING: Removing unreachable block (ram,0x00010252edf8) */
/* WARNING: Removing unreachable block (ram,0x00010252ede8) */
/* WARNING: Removing unreachable block (ram,0x00010252edd8) */
/* WARNING: Removing unreachable block (ram,0x00010252edc8) */
/* WARNING: Removing unreachable block (ram,0x00010252ee48) */

void FUN_10252ecb8(undefined8 *param_1)

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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  long unaff_x20;
  undefined8 uVar21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xa0);
  puVar18 = &UNK_11051d948;
  func_0x000107c613fc(&UNK_11051d948,0xa8,7);
  *(undefined8 *)(puVar18 + 0x10) = uVar1;
  *(undefined8 *)(puVar18 + 0x18) = uVar9;
  *(undefined8 *)(puVar18 + 0x20) = uVar19;
  *(undefined8 *)(puVar18 + 0x28) = uVar10;
  *(undefined8 *)(puVar18 + 0x30) = uVar2;
  *(undefined8 *)(puVar18 + 0x38) = uVar11;
  *(undefined8 *)(puVar18 + 0x40) = uVar3;
  *(undefined8 *)(puVar18 + 0x48) = uVar12;
  *(undefined8 *)(puVar18 + 0x50) = uVar4;
  *(undefined8 *)(puVar18 + 0x58) = uVar13;
  *(undefined8 *)(puVar18 + 0x60) = uVar5;
  *(undefined8 *)(puVar18 + 0x68) = uVar14;
  *(undefined8 *)(puVar18 + 0x70) = uVar6;
  *(undefined8 *)(puVar18 + 0x78) = uVar15;
  *(undefined8 *)(puVar18 + 0x80) = uVar7;
  *(undefined8 *)(puVar18 + 0x88) = uVar16;
  *(undefined8 *)(puVar18 + 0x90) = uVar8;
  *(undefined8 *)(puVar18 + 0x98) = uVar17;
  *(undefined8 *)(puVar18 + 0xa0) = uVar21;
  uVar19 = 0x112ea3f78;
  func_0x0001000285a8(0x112ea3f78,&UNK_10dab6e88);
  func_0x000107c613fc();
  pcVar20 = FUN_10252ef38;
  func_0x0001000841fc(FUN_10252ef38,puVar18,uVar19);
  func_0x000100084214(&UNK_10dab6e50,0x30,2);
  *param_1 = pcVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10252ee74; end: 10252ee83;  */

undefined1  [16] FUN_10252ee74(void)

{
  return ZEXT816(0x11051d928);
}



/* Entry: 10252ee84; end: 10252ef37;  */

void FUN_10252ee84(void)

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



/* Entry: 10252ef38; end: 10252f077;  */

void FUN_10252ef38(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 auStack_70 [2];
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar17 = *param_2;
  func_0x0001000285a8(0x112ea3f80,&UNK_10dab6e90);
  puVar13 = auStack_70;
  auStack_70[0] = uVar17;
  func_0x0001000838ec();
  FUN_10252fcb4(uVar14,uVar7,uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar20,uVar21,uVar18,uVar19,uVar4,
                uVar11,puVar13,uVar5);
  func_0x000100082720("MapProfileLocationCardPresenterServiceProvider",0x2e,2);
  FUN_102533834(uVar15,uVar1,uVar6,uVar12,uVar16,uVar14,puVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(puVar13);
  func_0x000100082720("MapFriendProfileCardPresenterEntryPointProvider",0x2f,2);
  *param_1 = uVar15;
  return;
}



/* Entry: 10252f078; end: 10252f0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f078(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea3f88) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10252f0c4; end: 10252f10b; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler shareMyLocationWithSendLocationCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10252f83c(1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f10c; end: 10252f123; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler requestFriendLocation] */

/* WARNING: Possible PIC construction at 0x00010252f200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010252f204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f10c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_11051dab8;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea3f88);
  puVar1 = &UNK_11051d9f8;
  func_0x000107c613fc(&UNK_11051d9f8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  func_0x000107c613fc(&UNK_11051dab8,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = 0;
  func_0x000107c61174(param_1);
  func_0x0001001ca524(0x52,0,0x3c,4,0,0,&UNK_10dab6f90,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10252f124; end: 10252f13b; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler requestFriendLiveLocation] */

/* WARNING: Possible PIC construction at 0x00010252f200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010252f204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f124(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_11051da90;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea3f88);
  puVar1 = &UNK_11051d9f8;
  func_0x000107c613fc(&UNK_11051d9f8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  func_0x000107c613fc(&UNK_11051da90,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = 1;
  func_0x000107c61174(param_1);
  func_0x0001001ca524(0x52,0,0x3c,4,0,0,&UNK_10dab6f88,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10252f13c; end: 10252f21f;  */

/* WARNING: Possible PIC construction at 0x00010252f200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010252f204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f13c(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea3f88);
  puVar1 = &UNK_11051d9f8;
  func_0x000107c613fc(&UNK_11051d9f8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar2);
  func_0x000107c613fc(param_3,0x19,7);
  *(undefined **)(param_3 + 0x10) = puVar1;
  *(undefined1 *)(param_3 + 0x18) = param_4;
  func_0x000107c61174(param_1);
  func_0x0001001ca524(0x52,0,0x3c,4,0,0,param_5,param_3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 10252f220; end: 10252f2a3; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler setToPrimaryDevice] */

/* WARNING: Possible PIC construction at 0x00010252f280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010252f284) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f220(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + _DAT_112ea3f88) + _DAT_112ea40a8) + _DAT_112fcd710
                   );
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c50418();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f2a4; end: 10252f3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f2a4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar5 = &puStack_60;
  lVar6 = *(long *)(unaff_x20 + _DAT_112ea3f88);
  lVar3 = *(long *)(*(long *)(lVar6 + _DAT_112ea4080) + _DAT_112fcd348);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_112ea40b0) + _DAT_112fa9350);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar4,uVar2);
    func_0x000107c6142c(uVar2);
    pcStack_40 = FUN_1025304b0;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ff4e14;
    puStack_48 = &UNK_11051da10;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c4d2fc(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10252f3b4; end: 10252f3db; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler muteFriend] */

void FUN_10252f3b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10252f2a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f3dc; end: 10252f4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f3dc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar5 = &puStack_60;
  lVar6 = *(long *)(unaff_x20 + _DAT_112ea3f88);
  lVar3 = *(long *)(*(long *)(lVar6 + _DAT_112ea4080) + _DAT_112fcd348);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_112ea40b0) + _DAT_112fa9350);
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar4,uVar2);
    func_0x000107c6142c(uVar2);
    uStack_40 = 0x1025304b4;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100ff4e14;
    puStack_48 = &UNK_11051da38;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c5d31c(lVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 10252f4ec; end: 10252f513; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler unmuteFriend] */

void FUN_10252f4ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10252f3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f514; end: 10252f54f; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler stopSharingMyLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f514(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10252f83c(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f550; end: 10252f587; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler cancelLocationRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f550(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10252fa0c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f588; end: 10252f5bf; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler cancelLiveLocationRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f588(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10252fa0c(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f5c0; end: 10252f5f3; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler openLocationSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f5c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10252fb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10252f5f4; end: 10252f653; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler init] */

void FUN_10252f5f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendProfileCardImplementation.MapProfileLocationCardActionHandler",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10252f620);
  (*pcVar1)();
}



/* Entry: 10252f654; end: 10252f67f; -[_TtC34MapFriendProfileCardImplementation35MapProfileLocationCardActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea3f88));
  return;
}



/* Entry: 10252f680; end: 10252f69f;  */

void FUN_10252f680(void)

{
  func_0x000107c61168(&PTR_PTR_11284c5b8);
  return;
}



/* Entry: 10252f6a0; end: 10252f6b3;  */

void FUN_10252f6a0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11051da70;
  if (lRam0000000112ea3fc0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ea3fc0 = param_1;
  }
  return;
}



/* Entry: 10252f6b4; end: 10252f71b;  */

void FUN_10252f6b4(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10252f71c;
  *(undefined1 *)(plVar2 + 0x26) = uVar1;
  plVar2[0x1c] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x1d] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x1e] = lVar3;
  plVar2[0x1f] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102530528,lVar3,lVar4);
  return;
}



/* Entry: 10252f71c; end: 10252f757;  */

void FUN_10252f71c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010252f754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10252f758; end: 10252f7bf;  */

void FUN_10252f758(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10252f838;
  *(undefined1 *)(plVar2 + 0x26) = uVar1;
  plVar2[0x1c] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x1d] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x1e] = lVar3;
  plVar2[0x1f] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102530528,lVar3,lVar4);
  return;
}



/* Entry: 10252f7c0; end: 10252f7d3;  */

void FUN_10252f7c0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11051dae0;
  if (lRam0000000112ea3fc8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ea3fc8 = param_1;
  }
  return;
}



/* Entry: 10252f7d4; end: 10252f817;  */

void FUN_10252f7d4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10252f818; end: 10252f83b;  */

void FUN_10252f818(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10252f83c; end: 10252fa0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252f83c(byte param_1,byte param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = _DAT_112ea3fe8;
  lVar2 = _DAT_112ea3fd8;
  if (*(long *)(unaff_x20 + _DAT_112ea3fe8) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112ea3fd8,auStack_78,0,0);
    lVar2 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      lVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea40b0) + _DAT_112fa9350);
      uVar6 = puVar1[1];
      *(undefined8 *)(lVar4 + 0x20) = *puVar1;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      func_0x00010034a38c(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar6);
      lVar4 = unaff_x20;
      func_0x000107c61174();
      func_0x000107c61174();
      puVar5 = puVar3;
      func_0x000103a28f00();
      *(byte *)(lVar4 + _DAT_112ea4038) = param_1 & param_2 & 1;
      puStack_88 = puVar5;
      func_0x00010008a7c8(&uStack_80,&puStack_88);
      func_0x000100083b20(&puStack_88);
      func_0x000107c61574(uStack_80);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
      *(undefined **)(unaff_x20 + lVar7) = puStack_88;
      func_0x000107c615e8(uVar6);
      lVar7 = *(long *)(unaff_x20 + lVar7);
      if (lVar7 != 0) {
        func_0x000107c615f0(lVar7);
        func_0x000107c4ee7c();
        func_0x000107c615e8(lVar7);
      }
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10252fa0c; end: 10252fb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252fa0c(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  uVar8 = 3;
  if ((param_1 & 1) != 0) {
    uVar8 = 4;
  }
  FUN_102531348(uVar8);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea4098);
  func_0x000107c5dc04();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea40b0) + _DAT_112fa9350);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c6142c(uVar2);
    puVar6 = &UNK_11051db58;
    func_0x000107c613fc(&UNK_11051db58,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uStack_50 = 0x102533120;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_11051dc30;
    puStack_48 = puVar6;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c3f4b4(lVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10252fb64; end: 10252fcb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252fb64(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112ea3fd8;
  func_0x000107c61428(unaff_x20 + _DAT_112ea3fd8,auStack_68,0,0);
  lVar5 = unaff_x20 + lVar5;
  func_0x000107c61618();
  lVar1 = _DAT_112ea3fe0;
  if (lVar5 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112ea3fe0) == 0) {
      puVar2 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      func_0x00010038318c(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      lVar5 = unaff_x20;
      func_0x000107c61174();
      puVar3 = puVar2;
      func_0x0001038b4d54(puVar2,lVar5,4);
      puStack_78 = puVar3;
      func_0x00010008a7c8(&uStack_70,&puStack_78);
      func_0x000100083b20(&puStack_78);
      func_0x000107c61574(uStack_70);
      uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = puStack_78;
      func_0x000107c615e8(uVar4);
      lVar5 = *(long *)(unaff_x20 + lVar1);
      if (lVar5 != 0) {
        func_0x000107c615f0(lVar5);
        func_0x000107c4ab7c();
        func_0x000107c615e8(lVar5);
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10252fcb4; end: 1025301d7;  */

void FUN_10252fcb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea3fd0,&UNK_10dab7060);
  puVar1 = &UNK_11051db30;
  func_0x000107c613fc(&UNK_11051db30,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  func_0x000107c6157c();
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
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x0001000823a8(FUN_1025301d8,puVar1);
  return;
}



/* Entry: 1025301d8; end: 10253021b;  */

void FUN_1025301d8(void)

{
  long unaff_x20;
  
  func_0x00010252fe28(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10253021c; end: 1025304af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253021c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined *apuStack_70 [2];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ea3fd8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ea3fe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3fe8) = 0;
  lVar3 = _DAT_112ea3ff0;
  puVar4 = PTR_PTR_1126aaa28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  apuStack_70[0] = puVar4;
  func_0x0001000285a8(0x112ea3f90,&UNK_10dab6ea0);
  func_0x000107c613fc();
  ppuVar5 = apuStack_70;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar3) = ppuVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3ff8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4008) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea4010) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea4018) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea4020) = 0;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112ea4028);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4030) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea4038) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4040) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4048) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4050) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4058) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4060) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4068) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4070) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4078) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4080) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4088) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4090) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4098) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ea40a0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ea40a8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ea40b0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ea40b8) = param_16;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025304b0; end: 1025304b7;  */

void FUN_1025304b0(void)

{
  return;
}



/* Entry: 1025304b8; end: 102530527;  */

void FUN_1025304b8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102530528,uVar1,uVar2);
  return;
}



/* Entry: 102530528; end: 10253060f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102530528(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xe0);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0xb0,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x100) = lVar4;
  if (lVar4 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  }
  else {
    lVar1 = *(long *)(lVar4 + _DAT_112ea4078);
    func_0x000107c4c3ec();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x108) = lVar2;
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      plVar3 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x110) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102530610;
      plVar3[3] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10253097c,0,0);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x000107c61170(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010253060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102530610; end: 102530663;  */

void FUN_102530610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x90) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined8 *)(lVar1 + 0xa0) = param_2;
  *(undefined8 *)(lVar1 + 0xa8) = param_3;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102530664,*(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0xf8));
  return;
}



/* Entry: 102530664; end: 1025307a3;  */

void FUN_102530664(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x118);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    FUN_102532f6c();
    *(long *)(unaff_x22 + 0x120) = lVar2;
    func_0x000107c5fadc(uVar3,uVar1);
    *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
    func_0x000107c6142c(uVar1);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1025307a4;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar3 = 0x112ea3c70;
    func_0x0001000285a8(0x112ea3c70,&UNK_10dac9f00);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1025242b8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051dc58;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c51dfc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001025307a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025307a4; end: 1025307df;  */

void FUN_1025307a4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1025307e0,*(undefined8 *)(*unaff_x22 + 0xf0),*(undefined8 *)(*unaff_x22 + 0xf8));
  return;
}



/* Entry: 1025307e0; end: 102530963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025307e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  code *pcVar12;
  undefined4 uVar13;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  lVar9 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61170(uVar10);
  if (lVar9 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
    lVar9 = *(long *)(unaff_x22 + 0x100);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    cVar7 = *(char *)(unaff_x22 + 0x130);
    FUN_102530d60(cVar7);
    uVar11 = *(undefined8 *)(*(long *)(lVar9 + _DAT_112ea4060) + _DAT_112fa9390);
    func_0x000107c6157c(uVar11);
    func_0x0001000d224c(unaff_x22 + 200);
    func_0x000107c61574(uVar11);
    uVar11 = *(undefined8 *)(unaff_x22 + 200);
    lVar5 = *(long *)(unaff_x22 + 0xd0);
    uVar8 = uVar11;
    func_0x000107c614f0(uVar11);
    puVar1 = (undefined8 *)(*(long *)(lVar9 + _DAT_112ea40b0) + _DAT_112fa9350);
    uVar2 = *puVar1;
    uVar6 = puVar1[1];
    pcVar12 = *(code **)(lVar5 + 0x18);
    func_0x000107c61434(uVar6);
    (*pcVar12)(uVar2,uVar6,cVar7,2,uVar8,lVar5);
    func_0x000107c6142c(uVar6);
    func_0x000107c615e8(uVar11);
    uVar13 = 0;
    if (cVar7 == '\0') {
      uVar13 = 2;
    }
    FUN_102530ef4(uVar13,2,0);
    FUN_102531348(cVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar10);
    func_0x000107c615e8(uVar4);
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x118);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar10);
  }
  func_0x000107c61170(lVar9);
                    /* WARNING: Could not recover jumptable at 0x000102530960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102530964; end: 10253097b;  */

void FUN_102530964(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253097c,0,0);
  return;
}



/* Entry: 10253097c; end: 102530b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253097c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = _DAT_112ea4030;
  *(long *)(unaff_x22 + 0x20) = _DAT_112ea4030;
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x18) + lVar7);
  if ((lVar7 == 0) || (lVar6 = *(long *)(lVar7 + _DAT_11307fc78), *(long *)(lVar6 + 0x10) == 0)) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x18) + _DAT_112ea4058) + _DAT_11307fc48);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x28) = lVar7;
    if (lVar7 != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x18);
      uVar2 = 0;
      func_0x000104522c9c(0);
      puVar1 = (undefined8 *)(*(long *)(lVar6 + _DAT_112ea40b0) + _DAT_112fa9350);
      uVar3 = *puVar1;
      uVar8 = puVar1[1];
      func_0x000107c61434(uVar8);
      func_0x00010452281c(uVar3,uVar8);
      *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
      func_0x000107c6142c(uVar8);
      lVar6 = 0x112ea3c80;
      func_0x0001000285a8(0x112ea3c80,&UNK_10dab6860);
      func_0x0001011d1d1c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x18) = 3;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined8 *)(lVar6 + 0x20) = uVar3;
      func_0x000107c61174(uVar3);
      lVar4 = lVar6;
      func_0x000107c5fc48(lVar6,uVar2);
      func_0x000107c61574(lVar6);
      func_0x000107c5b59c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar6 = lVar7;
      func_0x000100759c94(lVar7,0);
      *(long *)(unaff_x22 + 0x38) = lVar6;
      func_0x000107c61170(lVar7);
      plVar5 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x40) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_102530b90;
                    /* WARNING: Could not recover jumptable at 0x000102530b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_102524b30();
      return;
    }
    lVar7 = 0;
    uVar8 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    uVar8 = *(undefined8 *)(lVar6 + 0x28);
    func_0x000107c61174(lVar7);
    func_0x000107c61434(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102530b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar7,uVar3,uVar8);
  return;
}



/* Entry: 102530b90; end: 102530be3;  */

void FUN_102530b90(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  *(undefined1 *)(lVar1 + 0x50) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102530be4,0,0);
  return;
}



/* Entry: 102530be4; end: 102530d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102530be4(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar8;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    if (iVar4 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar7);
    func_0x00010253310c(uVar9,1);
LAB_102530cec:
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c61170(uVar7);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    if (lVar8 == 0) goto LAB_102530cec;
    lVar10 = *(long *)(unaff_x22 + 0x48);
    lVar8 = *(long *)(lVar10 + _DAT_11307fc78);
    if (*(long *)(lVar8 + 0x10) != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar1 = *(long *)(unaff_x22 + 0x18);
      lVar2 = *(long *)(unaff_x22 + 0x20);
      uVar9 = *(undefined8 *)(lVar8 + 0x20);
      uVar6 = *(undefined8 *)(lVar8 + 0x28);
      func_0x000107c61434(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar7);
      uVar7 = *(undefined8 *)(lVar1 + lVar2);
      *(long *)(lVar1 + lVar2) = lVar10;
      func_0x000107c61174(lVar10);
      func_0x000107c61170(uVar7);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      goto LAB_102530d08;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x50);
    func_0x000107c61434(lVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar7);
    func_0x00010253310c(lVar10,uVar3);
    func_0x000107c6142c(lVar8);
  }
  uVar7 = 0;
  uVar9 = 0;
  uVar6 = 0;
LAB_102530d08:
                    /* WARNING: Could not recover jumptable at 0x000102530d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7,uVar9,uVar6);
  return;
}



/* Entry: 102530d60; end: 102530ef3;  */

/* WARNING: Possible PIC construction at 0x000102530e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102530ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102530e94) */
/* WARNING: Removing unreachable block (ram,0x000102530ea4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102530d60(uint param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea40a0);
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    return;
  }
  plVar1 = (long *)(*(long *)(unaff_x20 + _DAT_112ea40b0) + _DAT_112fa9350);
  lVar3 = *plVar1;
  lVar2 = plVar1[1];
  func_0x000107c61434(lVar2);
  FUN_102532590(lVar3,lVar2,param_1 & 1);
  func_0x000107c6142c(lVar2);
  if (lVar3 != 0) {
    puVar5 = &UNK_11051dc90;
    func_0x000107c613fc(&UNK_11051dc90,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    *(long *)(puVar5 + 0x18) = lVar3;
    puVar6 = &UNK_11051dcb8;
    func_0x000107c613fc(&UNK_11051dcb8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = &UNK_10dab7108;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    func_0x000107c615f0(lVar4);
    func_0x000107c61174(lVar3);
    func_0x0001001ca524(0x52,0,0x3c,4,0,0,&UNK_10dab7118,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 102530ef4; end: 102531347;  */

/* WARNING: Possible PIC construction at 0x000102531070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102531074) */
/* WARNING: Removing unreachable block (ram,0x00010253107c) */
/* WARNING: Removing unreachable block (ram,0x0001025310a4) */
/* WARNING: Removing unreachable block (ram,0x000102531108) */
/* WARNING: Removing unreachable block (ram,0x000102531110) */
/* WARNING: Removing unreachable block (ram,0x000102531128) */
/* WARNING: Removing unreachable block (ram,0x000102531140) */
/* WARNING: Removing unreachable block (ram,0x000102531158) */
/* WARNING: Removing unreachable block (ram,0x000102531160) */
/* WARNING: Removing unreachable block (ram,0x00010253116c) */
/* WARNING: Removing unreachable block (ram,0x000102531198) */
/* WARNING: Removing unreachable block (ram,0x0001025311e4) */
/* WARNING: Removing unreachable block (ram,0x000102531258) */
/* WARNING: Removing unreachable block (ram,0x0001025311fc) */
/* WARNING: Removing unreachable block (ram,0x00010253125c) */
/* WARNING: Removing unreachable block (ram,0x000102531278) */
/* WARNING: Removing unreachable block (ram,0x00010253128c) */
/* WARNING: Removing unreachable block (ram,0x000102531298) */
/* WARNING: Removing unreachable block (ram,0x0001025312a8) */
/* WARNING: Removing unreachable block (ram,0x0001025312e4) */
/* WARNING: Removing unreachable block (ram,0x0001025312ec) */
/* WARNING: Removing unreachable block (ram,0x000102531314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102530ef4(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112ea4018) == '\x01') {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ea4090);
    func_0x000107c4c3ac();
    func_0x000107c61180();
    lVar7 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar7 != 0) {
      lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea4088) + _DAT_112fcd5d8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112ea4068);
        func_0x000107c4ec94();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar7);
          lVar7 = lVar3;
        }
        else {
          if (((uint)((ulong)param_2 >> 0x20) & 0xff) != 1) {
            puVar1 = (undefined4 *)(unaff_x20 + _DAT_112ea4028);
            *puVar1 = (int)param_2;
            *(char *)(puVar1 + 1) = (char)((ulong)param_2 >> 0x20);
          }
          puVar6 = PTR_PTR_1126aaa28;
          func_0x000107c610f8(PTR_PTR_1126aaa28);
          func_0x000107c453e4();
          func_0x000107c557c0();
          func_0x000107c590c0(puVar6);
          func_0x000107c5574c(puVar6);
          lVar7 = *(long *)(unaff_x20 + _DAT_112ea4050);
          func_0x000107c3fa04();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102531348);
            (*pcVar2)();
          }
          func_0x000109022444();
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar7);
      return;
    }
  }
  return;
}



/* Entry: 102531348; end: 1025314db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102531348(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea4048) + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126d7700;
    func_0x000107c610f8(PTR_PTR_1126d7700);
    func_0x000107c453e4();
    func_0x000107c578b0();
    func_0x000107c57910(puVar4);
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea40b0) + _DAT_112fa9358);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c57904(puVar4);
    func_0x000107c61170(uVar5);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5217c(puVar4);
    func_0x000107c61170(uVar5);
    uVar5 = 0x6a;
    func_0x000107c3125c(0x6a);
    func_0x000107c61180();
    func_0x000107c59578(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c59a54(puVar4);
    func_0x000107c61174(puVar4);
    func_0x000107c4bfb0(lVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 1025314dc; end: 102531537;  */

void FUN_1025314dc(ulong param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_102531538(1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102531538; end: 102531983;  */

/* WARNING: Possible PIC construction at 0x00010253158c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025315c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025317ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102531808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025316b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253180c) */
/* WARNING: Removing unreachable block (ram,0x0001025317b0) */
/* WARNING: Removing unreachable block (ram,0x00010253195c) */
/* WARNING: Removing unreachable block (ram,0x00010253194c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010253193c) */
/* WARNING: Removing unreachable block (ram,0x000102531868) */
/* WARNING: Removing unreachable block (ram,0x00010253173c) */
/* WARNING: Removing unreachable block (ram,0x000102531838) */
/* WARNING: Removing unreachable block (ram,0x000102531744) */
/* WARNING: Removing unreachable block (ram,0x00010253162c) */
/* WARNING: Removing unreachable block (ram,0x000102531684) */
/* WARNING: Removing unreachable block (ram,0x000102531630) */
/* WARNING: Removing unreachable block (ram,0x000102531688) */
/* WARNING: Removing unreachable block (ram,0x0001025316b0) */
/* WARNING: Removing unreachable block (ram,0x00010253169c) */
/* WARNING: Removing unreachable block (ram,0x0001025316c4) */
/* WARNING: Removing unreachable block (ram,0x000102531770) */
/* WARNING: Removing unreachable block (ram,0x000102531780) */
/* WARNING: Removing unreachable block (ram,0x0001025317cc) */
/* WARNING: Removing unreachable block (ram,0x0001025317dc) */
/* WARNING: Removing unreachable block (ram,0x0001025317f0) */
/* WARNING: Removing unreachable block (ram,0x000102531794) */
/* WARNING: Removing unreachable block (ram,0x0001025316d4) */
/* WARNING: Removing unreachable block (ram,0x0001025316a8) */
/* WARNING: Removing unreachable block (ram,0x0001025316d8) */
/* WARNING: Removing unreachable block (ram,0x0001025316f0) */
/* WARNING: Removing unreachable block (ram,0x000102531704) */
/* WARNING: Removing unreachable block (ram,0x000102531750) */
/* WARNING: Removing unreachable block (ram,0x000102531764) */
/* WARNING: Removing unreachable block (ram,0x000102531754) */
/* WARNING: Removing unreachable block (ram,0x000102531848) */
/* WARNING: Removing unreachable block (ram,0x00010253184c) */
/* WARNING: Removing unreachable block (ram,0x000102531760) */
/* WARNING: Removing unreachable block (ram,0x00010253189c) */
/* WARNING: Removing unreachable block (ram,0x000102531708) */
/* WARNING: Removing unreachable block (ram,0x00010253182c) */
/* WARNING: Removing unreachable block (ram,0x000102531858) */
/* WARNING: Removing unreachable block (ram,0x00010253170c) */
/* WARNING: Removing unreachable block (ram,0x000102531980) */
/* WARNING: Removing unreachable block (ram,0x000102531728) */
/* WARNING: Removing unreachable block (ram,0x0001025315c8) */
/* WARNING: Removing unreachable block (ram,0x000102531660) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001025315cc) */
/* WARNING: Removing unreachable block (ram,0x000102531590) */
/* WARNING: Removing unreachable block (ram,0x000102531640) */
/* WARNING: Removing unreachable block (ram,0x000102531594) */
/* WARNING: Removing unreachable block (ram,0x0001025316b8) */
/* WARNING: Removing unreachable block (ram,0x000102531878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102531538(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea4090);
  func_0x000107c4c3ac(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102531984; end: 102531cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102531984(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea40a8) + _DAT_112fcd700);
  func_0x000107c6157c(uVar6);
  func_0x0001000d224c(auStack_68);
  func_0x000107c61574(uVar6);
  func_0x0001025330e8(auStack_68,plStack_50);
  plVar2 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar3 = &UNK_11051db58;
  func_0x000107c613fc(&UNK_11051db58,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uVar6 = 0x102532e94;
  puVar5 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  func_0x0001025330c8(auStack_68);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea3ff8);
  uVar4 = *puVar1;
  *puVar1 = uVar6;
  puVar1[1] = puVar5;
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 102531cdc; end: 102531cff;  */

void FUN_102531cdc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x7d) = param_5;
  *(undefined4 *)(unaff_x22 + 0x78) = param_4;
  *(undefined1 *)(unaff_x22 + 0x7c) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102531d00,0,0);
  return;
}



/* Entry: 102531d00; end: 102531e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102531d00(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x58) = lVar8;
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(*(long *)(lVar8 + _DAT_112ea4060) + _DAT_112fa9390);
    func_0x000107c6157c(uVar9);
    func_0x0001000d224c(unaff_x22 + 0x40);
    func_0x000107c61574(uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar4 = *(long *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
    func_0x000107c614f0(uVar9);
    puVar1 = (undefined8 *)(*(long *)(lVar8 + _DAT_112ea40b0) + _DAT_112fa9350);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
    piVar7 = *(int **)(lVar4 + 0x20);
    iVar2 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c61434(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102531e44;
                    /* WARNING: Could not recover jumptable at 0x000102531e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar7))
              (uVar3,uVar5,*(undefined1 *)(unaff_x22 + 0x7c),1,uVar9,lVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102531e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102531e44; end: 102531e9f;  */

void FUN_102531e44(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar2 + 0x38) = param_2;
  *(long **)(lVar2 + 0x28) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  *(undefined1 *)(lVar2 + 0x7e) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102531ea0,0,0);
  return;
}



/* Entry: 102531ea0; end: 102531f3b;  */

void FUN_102531ea0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0x7e);
  func_0x0001000285a8(0x112d5e960,&UNK_10d9258e0);
  if (cVar3 == '\x01') {
    uVar4 = 0x100000000;
  }
  else {
    if (3 < *(ulong *)(unaff_x22 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss27_diagnoseUnexpectedEnumCase4types5NeverOxm_tlF_11034ec80)();
      return;
    }
    uVar4 = *(undefined8 *)(&UNK_10dab7150 + *(ulong *)(unaff_x22 + 0x30) * 8);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_102530ef4(*(undefined4 *)(unaff_x22 + 0x78),uVar4,*(undefined1 *)(unaff_x22 + 0x7d));
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102531f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102531f3c; end: 102532067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102531f3c(char *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\0') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + _DAT_112ea4018) = 1;
      func_0x000107c61170();
    }
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) goto LAB_102532024;
    *(undefined1 *)(lVar1 + _DAT_112ea4010) = 1;
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + _DAT_112ea4018) = 1;
      func_0x000107c61170();
    }
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) goto LAB_102532024;
    *(undefined1 *)(lVar1 + _DAT_112ea4010) = 0;
  }
  func_0x000107c61170();
LAB_102532024:
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102531538(0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102532068; end: 1025321af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532068(undefined1 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    lVar3 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + _DAT_112ea40b0) + _DAT_112fa9350);
      uVar6 = *puVar1;
      uVar5 = puVar1[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61170(lVar3);
    }
    uVar4 = 0x112d35ff8;
    uStack_88 = uVar6;
    uStack_80 = uVar5;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c60184();
    func_0x000107c6142c(uVar5);
    func_0x000107c40404();
    func_0x000107c615e8(uVar4);
    *(undefined1 *)(lVar2 + _DAT_112ea4020) = param_1;
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61428(param_2 + 0x10,&uStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102531538(0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1025321b0; end: 102532207;  */

void FUN_1025321b0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102531538(0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102532208; end: 102532273;  */

void FUN_102532208(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102532274,uVar1,uVar2);
  return;
}



/* Entry: 102532274; end: 10253235b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532274(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0xb0,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xf0) = lVar4;
  if (lVar4 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  }
  else {
    lVar1 = *(long *)(lVar4 + _DAT_112ea4078);
    func_0x000107c4c3ec();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xf8) = lVar2;
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      plVar3 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x100) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10253235c;
      plVar3[3] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10253097c,0,0);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c61170(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000102532358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10253235c; end: 1025323af;  */

void FUN_10253235c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x90) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined8 *)(lVar1 + 0xa0) = param_2;
  *(undefined8 *)(lVar1 + 0xa8) = param_3;
  *(undefined8 *)(lVar1 + 0x108) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1025323b0,*(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)(lVar1 + 0xe8));
  return;
}



/* Entry: 1025323b0; end: 1025324df;  */

void FUN_1025323b0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x108);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
    FUN_102532f6c();
    *(long *)(unaff_x22 + 0x110) = lVar2;
    func_0x000107c5fadc(uVar3,uVar1);
    *(undefined8 *)(unaff_x22 + 0x118) = uVar3;
    func_0x000107c6142c(uVar1);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 200;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1025324e0;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar3 = 0x112ea3c70;
    func_0x0001000285a8(0x112ea3c70,&UNK_10dac9f00);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1025242b8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051dc08;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c51dfc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001025324dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025324e0; end: 10253251b;  */

void FUN_1025324e0(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10253251c,*(undefined8 *)(*unaff_x22 + 0xe0),*(undefined8 *)(*unaff_x22 + 0xe8));
  return;
}



/* Entry: 10253251c; end: 10253258f;  */

void FUN_10253251c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010253258c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102532590; end: 1025326cf;  */

undefined * FUN_102532590(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  FUN_1025327b8();
  if (param_2 != 0) {
    lVar4 = param_1;
    lVar5 = param_2;
    if ((param_3 & 1) == 0) {
      func_0x0001068753ac();
      func_0x000107c61180();
    }
    else {
      func_0x0001068753c4();
      func_0x000107c61180();
    }
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
      lVar2 = lVar4;
      func_0x00010075bbf0();
      *(long *)(lVar4 + 0x40) = lVar2;
      *(long *)(lVar4 + 0x20) = param_1;
      *(long *)(lVar4 + 0x28) = param_2;
      lVar2 = lVar5;
      func_0x000107c5fb00(lVar1,lVar5,lVar4);
      func_0x000107c6142c(lVar5);
      puVar3 = PTR_PTR_1126afde0;
      func_0x000107c61168(PTR_PTR_1126afde0);
      func_0x000107c5fadc(lVar1,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c40930(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      return puVar3;
    }
    func_0x000107c6142c(param_2);
  }
  return (undefined *)0x0;
}



/* Entry: 1025326d0; end: 10253273b;  */

void FUN_1025326d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253273c,uVar1,uVar2);
  return;
}



/* Entry: 10253273c; end: 10253277b;  */

void FUN_10253273c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c2e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102532778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10253277c; end: 1025327b7;  */

void FUN_10253277c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001025327b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1025327b8; end: 10253292f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1025327b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea4088) + _DAT_112fcd5d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar2 = lVar1;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      uVar4 = ((ulong *)(lVar2 + _DAT_112fcd620))[1];
      if (uVar4 == 0) {
LAB_1025328d4:
        func_0x000107c615e8(lVar1);
LAB_1025328dc:
        uVar4 = *(ulong *)(lVar2 + _DAT_112fcd618);
        uVar6 = ((ulong *)(lVar2 + _DAT_112fcd618))[1];
        func_0x000107c61434(uVar6);
      }
      else {
        uVar5 = *(ulong *)(lVar2 + _DAT_112fcd620);
        func_0x000107c61434(uVar4);
        uVar6 = uVar4;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar4);
        uVar3 = uVar5;
        func_0x00010901e6c8();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar3 == 0) goto LAB_1025328d4;
        uVar4 = uVar3;
        func_0x000107c5faec();
        func_0x000107c61170(uVar3);
        func_0x000107c615e8(lVar1);
        uVar3 = uVar4 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar3 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
          func_0x000107c6142c(uVar6);
          goto LAB_1025328dc;
        }
      }
      func_0x000107c61170(lVar2);
      goto LAB_102532914;
    }
    func_0x000107c615e8(lVar1);
  }
  uVar4 = 0;
  uVar6 = 0;
LAB_102532914:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 102532930; end: 10253298f; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter init] */

void FUN_102532930(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendProfileCardImplementation.MapProfileLocationCardPresenter",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253295c);
  (*pcVar1)();
}



/* Entry: 102532990; end: 102532b27; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025329bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025329dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025329fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102532a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102532a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102532a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102532a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102532aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102532b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102532af0) */
/* WARNING: Removing unreachable block (ram,0x000102532a80) */
/* WARNING: Removing unreachable block (ram,0x000102532a60) */
/* WARNING: Removing unreachable block (ram,0x000102532a40) */
/* WARNING: Removing unreachable block (ram,0x000102532a20) */
/* WARNING: Removing unreachable block (ram,0x000102532a00) */
/* WARNING: Removing unreachable block (ram,0x0001025329e0) */
/* WARNING: Removing unreachable block (ram,0x0001025329c0) */
/* WARNING: Removing unreachable block (ram,0x000102532b10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532990(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ea3fd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea4040));
  return;
}



/* Entry: 102532b28; end: 102532be7; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea3fd8;
  func_0x000107c61428(param_1 + _DAT_112ea3fd8,auStack_48,0,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c4807c(puVar2);
    func_0x000107c3e2c0();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102532be8; end: 102532c67; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532be8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea3fd8;
  func_0x000107c61428(param_1 + _DAT_112ea3fd8,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102532c68; end: 102532c9b; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter permissionsPromptSource] */

void FUN_102532c68(void)

{
  func_0x000107c5fadc(0x505f444e45495246,0xee00454c49464f52);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102532c9c; end: 102532d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532c9c(int param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((param_2 & 1) != 0) && (param_1 == 0)) {
    FUN_102531348(2);
    if (*(char *)(unaff_x20 + _DAT_112ea4038) == '\x01') {
      puVar1 = &UNK_11051db58;
      func_0x000107c613fc(&UNK_11051db58,0x18,7);
      func_0x000107c61614(puVar1 + 0x10);
      uVar2 = 0x52;
      func_0x0001001ca524(0x52,0,0x3c,4,0,0,&UNK_10dab7078,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar2);
    }
  }
  *(undefined1 *)(unaff_x20 + _DAT_112ea4038) = 0;
  return;
}



/* Entry: 102532d64; end: 102532db7;  */

void FUN_102532d64(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10253323c;
  plVar3[0x1a] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x1b] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1c] = lVar1;
  plVar3[0x1d] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102532274,lVar1,lVar2);
  return;
}



/* Entry: 102532db8; end: 102532dfb; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter onShareLocationActionCompletedWith:success:] */

void FUN_102532db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_102532c9c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102532dfc; end: 102532e2f; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532dfc(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112ea4038) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea3fe8);
  *(undefined8 *)(param_1 + _DAT_112ea3fe8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102532e30; end: 102532e4f;  */

void FUN_102532e30(void)

{
  func_0x000107c61168(&PTR_PTR_11284c678);
  return;
}



/* Entry: 102532e50; end: 102532e9b; -[_TtC34MapFriendProfileCardImplementation31MapProfileLocationCardPresenter locationSharingSettingsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102532e50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea3fe0);
  *(undefined8 *)(param_1 + _DAT_112ea3fe0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102532e9c; end: 102532f1b;  */

void FUN_102532e9c(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x1c);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102533240;
  *(undefined1 *)((long)plVar4 + 0x7d) = uVar3;
  *(undefined4 *)(plVar4 + 0xf) = uVar1;
  *(undefined1 *)((long)plVar4 + 0x7c) = uVar2;
  plVar4[10] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102531d00,0,0);
  return;
}



/* Entry: 102532f1c; end: 102532f5b;  */

void FUN_102532f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102532f5c,0,0);
  return;
}



/* Entry: 102532f5c; end: 102532f6b;  */

void FUN_102532f5c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102532f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102532f6c; end: 10253309f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102532f6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar3 = puVar2;
  func_0x000107c5e870(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11307fc80);
  uVar4 = 0;
  func_0x0001044c309c(0);
  func_0x000107c5fc48(uVar5,uVar4);
  uVar4 = uVar5;
  func_0x0001086063d8();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  puVar1 = puVar3;
  func_0x000107c5e500(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  puVar2 = puVar1;
  func_0x000107c3ecc8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1025330a0; end: 1025330af;  */

long FUN_1025330a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1025330b0; end: 1025330c7;  */

void FUN_1025330b0(long param_1)

{
  FUN_1025330c8(param_1 + 0x20);
  return;
}



/* Entry: 1025330c8; end: 102533127;  */

void FUN_1025330c8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001025330dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102533128; end: 102533177;  */

void FUN_102533128(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102533178;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253273c,lVar1,lVar2);
  return;
}



/* Entry: 102533178; end: 1025331b3;  */

void FUN_102533178(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001025331b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1025331b4; end: 102533223;  */

void FUN_1025331b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102533244;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102533224; end: 102533247;  */

void FUN_102533224(long param_1)

{
  FUN_1025330c8(param_1 + 0x20);
  return;
}



/* Entry: 102533248; end: 1025332a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533248(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea40e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1025332a4; end: 10253330b; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler setSeenOnboardingDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025332a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x38);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10253330c; end: 10253337f; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler requestShareMyLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253330c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x58);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102533380; end: 1025333f3; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler requestAlwaysLocationPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102533380(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x60);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1025333f4; end: 102533467; -[_TtC34MapFriendProfileCardImplementation36MapArrivalNotificationsActionHandler checkHomeSetUpObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025333f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea40e8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ea40e8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x68);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


