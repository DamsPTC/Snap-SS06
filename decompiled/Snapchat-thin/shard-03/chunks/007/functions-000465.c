/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ba3be4; end: 102ba3bef;  */

void FUN_102ba3be4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c4348c(0,0,uVar7,uVar8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52610();
  lVar2 = 0x112ea49e8;
  func_0x0001000285a8(0x112ea49e8,&UNK_10db2c3c0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar8);
  func_0x000107c5c5fc(uVar7);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  *(undefined8 *)(lVar2 + 0x30) = uVar8;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar1);
  lVar4 = lVar2;
  func_0x00010254d530(lVar2);
  func_0x000107c61588(lVar2);
  uVar8 = 0x112ea49f0;
  func_0x0001000285a8(0x112ea49f0,&UNK_10dab7b80);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar8);
  func_0x000107c5fadc(uVar5,uVar6);
  lVar2 = lVar4;
  FUN_10254a080(lVar4);
  func_0x000107c6142c(lVar4);
  uVar6 = 0;
  func_0x000100eca28c(0);
  uVar8 = uVar6;
  func_0x000100ecbdec();
  lVar4 = lVar2;
  func_0x000107c5f9dc(lVar2,uVar6,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(lVar2);
  func_0x000107c422b8(0x4010000000000000,0x4010000000000000,uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102ba3bf0; end: 102ba3c0f;  */

void FUN_102ba3bf0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ba3c10; end: 102ba3c2b;  */

void FUN_102ba3c10(long param_1,long param_2)

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



/* Entry: 102ba3c2c; end: 102ba3c4b;  */

void FUN_102ba3c2c(void)

{
  func_0x000107c61168(&PTR_PTR_112892840);
  return;
}



/* Entry: 102ba3c4c; end: 102ba3ccb;  */

void FUN_102ba3c4c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long *plVar9;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102ba3ccc;
  plVar6[2] = lVar8;
  plVar6[3] = lVar7;
  lVar8 = lVar1;
  if (lVar3 == 0) {
    lVar3 = 0;
    plVar6[4] = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    plVar6[4] = lVar8;
    lVar2 = lVar8;
  }
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar6[5] = lVar8;
  plVar9 = (long *)0x140;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar6[6] = (long)plVar9;
  *plVar9 = (long)plVar6;
  plVar9[1] = (long)FUN_102ba32c8;
  plVar9[0x1e] = lVar8;
  plVar9[0x1f] = lVar7;
  plVar9[0x1c] = lVar1;
  plVar9[0x1d] = lVar5;
  plVar9[0x1a] = lVar3;
  plVar9[0x1b] = lVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar9[0x20] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar9[0x21] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x22] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ba2bb4,0,0);
  return;
}



/* Entry: 102ba3ccc; end: 102ba3d07;  */

void FUN_102ba3ccc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ba3d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ba3d08; end: 102ba3d7f;  */

void FUN_102ba3d08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ba3efc;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102ba3d80; end: 102ba3dab;  */

void FUN_102ba3d80(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ba3dac; end: 102ba3e2f;  */

void FUN_102ba3dac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102ba3f00;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102ba3e30; end: 102ba3e5f;  */

void FUN_102ba3e30(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102ba3e60; end: 102ba3e67;  */

void FUN_102ba3e60(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSiN_11034deb0);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,param_1);
    func_0x000107c615e8(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x000102ba3e68(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar3 = 0;
    func_0x000102ba3ea8(0,0x112ea4a00,&PTR_PTR_1126bea48);
    puVar2 = &uStack_78;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar2 & 1) != 0) goto LAB_102ba3604;
  }
  uStack_78 = 0;
LAB_102ba3604:
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = uStack_78;
  func_0x000107c6144c(lVar1);
  return;
}



/* Entry: 102ba3e68; end: 102ba3ee7;  */

undefined8 FUN_102ba3e68(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102ba3ee8; end: 102ba3f03;  */

void FUN_102ba3ee8(long param_1,long param_2)

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



/* Entry: 102ba3f04; end: 102ba400f;  */

long FUN_102ba3f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c3f8f8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = param_3;
  func_0x000107c45070();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 102ba4010; end: 102ba410f;  */

void FUN_102ba4010(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1105a8b90;
  func_0x000107c613fc(&UNK_1105a8b90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112efb9e8,&UNK_10db2c3d0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  pcVar4 = FUN_102ba4208;
  func_0x0001000bdd8c(FUN_102ba4208,puVar3);
  pcVar5 = pcVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar4);
  func_0x0001000285a8(0x112efb9f0,&UNK_10db2c3d8);
  func_0x000107c613fc();
  pcVar4 = FUN_102ba4210;
  func_0x0001000bdd8c(FUN_102ba4210,0);
  pcVar6 = pcVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar4);
  FUN_102ba45b8(0);
  func_0x000107c610f8();
  func_0x000102ba44bc(pcVar5,pcVar6);
  return;
}



/* Entry: 102ba4110; end: 102ba4207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4110(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_102ba3c2c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112efb9a8;
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486f8(0x404c000000000000,0x404c000000000000);
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112efb9b0);
  puVar1[1] = 0x4046000000000000;
  *puVar1 = 0x4046000000000000;
  lVar2 = _DAT_112efb9b8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112efb998) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112efb9a0) = param_3;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 102ba4208; end: 102ba420f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4208(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar8 = &lStack_50;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_102ba3c2c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112efb9a8;
  puVar7 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486f8(0x404c000000000000,0x404c000000000000);
  *(undefined **)(lVar6 + lVar2) = puVar7;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112efb9b0);
  puVar1[1] = 0x4046000000000000;
  *puVar1 = 0x4046000000000000;
  lVar2 = _DAT_112efb9b8;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar2) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112efb998) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112efb9a0) = uVar4;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar8;
  return;
}



/* Entry: 102ba4210; end: 102ba423f;  */

void FUN_102ba4210(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102ba25f8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba4240; end: 102ba425b;  */

/* WARNING: Possible PIC construction at 0x000102ba424c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba4250) */

void FUN_102ba4240(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ba425c; end: 102ba42a7;  */

void FUN_102ba425c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ba42a8; end: 102ba4323;  */

void FUN_102ba42a8(undefined8 param_1)

{
  if (lRam0000000112efba20 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e71d648);
  return;
}



/* Entry: 102ba4324; end: 102ba4433;  */

void FUN_102ba4324(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1105a8bb8;
  func_0x000107c613fc(&UNK_1105a8bb8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112efb9e8,&UNK_10db2c3d0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  pcVar4 = FUN_102ba4434;
  func_0x0001000bdd8c(FUN_102ba4434,puVar3);
  pcVar5 = pcVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar4);
  func_0x0001000285a8(0x112efb9f0,&UNK_10db2c3d8);
  func_0x000107c613fc();
  pcVar4 = FUN_102ba4210;
  func_0x0001000bdd8c(FUN_102ba4210,0);
  pcVar6 = pcVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar4);
  FUN_102ba45b8(0);
  func_0x000107c610f8();
  func_0x000102ba44bc(pcVar5,pcVar6);
  *param_1 = pcVar5;
  return;
}



/* Entry: 102ba4434; end: 102ba4437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4434(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar8 = &lStack_50;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_102ba3c2c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112efb9a8;
  puVar7 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486f8(0x404c000000000000,0x404c000000000000);
  *(undefined **)(lVar6 + lVar2) = puVar7;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112efb9b0);
  puVar1[1] = 0x4046000000000000;
  *puVar1 = 0x4046000000000000;
  lVar2 = _DAT_112efb9b8;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar2) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112efb998) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112efb9a0) = uVar4;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar8;
  return;
}



/* Entry: 102ba4438; end: 102ba4447; -[SCTopLevelReactionsServices imageRenderer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112efbad0));
  return;
}



/* Entry: 102ba4448; end: 102ba4457; -[SCTopLevelReactionsServices animationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112efbad8));
  return;
}



/* Entry: 102ba4458; end: 102ba451f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4458(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efbad0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112efbad8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ba4520; end: 102ba457f; -[SCTopLevelReactionsServices init] */

void FUN_102ba4520(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelReactionsServices.SCTopLevelReactionsServices",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba454c);
  (*pcVar1)();
}



/* Entry: 102ba4580; end: 102ba45b7; -[SCTopLevelReactionsServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ba459c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba45a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efbad0));
  return;
}



/* Entry: 102ba45b8; end: 102ba45d7;  */

void FUN_102ba45b8(void)

{
  func_0x000107c61168(&PTR_PTR_112892920);
  return;
}



/* Entry: 102ba45d8; end: 102ba4643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba45d8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102ba49cc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efbb10) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102ba4644; end: 102ba46af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4644(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efbb10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ba46b0; end: 102ba470f; -[_TtC46ContextPlanStickerScopedFactoryServiceProvider41SCContextPlanDynamicStickerScopedServices init] */

void FUN_102ba46b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPlanStickerScopedFactoryServiceProvider.SCContextPlanDynamicStickerScopedServices"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba46dc);
  (*pcVar1)();
}



/* Entry: 102ba4710; end: 102ba471f; -[_TtC46ContextPlanStickerScopedFactoryServiceProvider41SCContextPlanDynamicStickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efbb10));
  return;
}



/* Entry: 102ba4720; end: 102ba478b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba4720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a8e30;
  func_0x000107c613fc(&UNK_1105a8e30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102ba4a64,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102ba478c; end: 102ba4827;  */

void FUN_102ba478c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a8d40;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a8d40;
  return;
}



/* Entry: 102ba4828; end: 102ba485f;  */

void FUN_102ba4828(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102ba4860; end: 102ba4867;  */

undefined8 FUN_102ba4860(void)

{
  return 0x1b;
}



/* Entry: 102ba4868; end: 102ba499b;  */

void FUN_102ba4868(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a8e58;
  func_0x000107c613fc(&UNK_1105a8e58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102ba4a3c;
  func_0x00010058fa64(FUN_102ba4a3c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ba499c; end: 102ba49cb;  */

undefined ** FUN_102ba499c(void)

{
  return &PTR_DAT_1130669b8;
}



/* Entry: 102ba49cc; end: 102ba49eb;  */

void FUN_102ba49cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128929e8);
  return;
}



/* Entry: 102ba49ec; end: 102ba4a3b;  */

undefined1  [16] FUN_102ba49ec(void)

{
  return ZEXT816(0x1105a8d90);
}



/* Entry: 102ba4a3c; end: 102ba4a63;  */

void FUN_102ba4a3c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102ba4a64; end: 102ba4a77;  */

void FUN_102ba4a64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ba4a78; end: 102ba4d8f;  */

void FUN_102ba4a78(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112efbb88,&UNK_10db2c730);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112efbb90,&UNK_10db2c740);
  puVar2 = &UNK_1105a8f08;
  func_0x000107c613fc(&UNK_1105a8f08,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar8 = 0x102ba4d9c;
  func_0x0001000823a8(0x102ba4d9c,puVar2);
  pcVar3 = "ContextPlanDynamicStickerEntryPointWrapperServiceProvider";
  func_0x000100082720("ContextPlanDynamicStickerEntryPointWrapperServiceProvider",0x39,2);
  FUN_102ba5a90();
  func_0x000100082720("ContextPlanStickerScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102ba4828;
  func_0x0001000823a8(FUN_102ba4828,0);
  func_0x000100082720("SCContextPlanDynamicStickerScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112efbb98,&UNK_10db2c738);
  puVar2 = &UNK_1105a8f30;
  func_0x000107c613fc(&UNK_1105a8f30,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_102ba4de4;
  func_0x0001000823a8(FUN_102ba4de4,puVar2);
  func_0x000100082720("SCContextPlanDynamicStickerScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112efbb18,&UNK_10db2c480);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x102ba4df0;
  func_0x0001000823a8(0x102ba4df0,pcVar5);
  func_0x000100082720("SCContextPlanDynamicStickerScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112efbb08,&UNK_10db2c470);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102ba4df8;
  func_0x0001000823a8(0x102ba4df8,uVar6);
  func_0x000100082720("SCContextPlanDynamicStickerScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105a8f58;
  func_0x000107c613fc(&UNK_1105a8f58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102ba4e00;
  func_0x0001000823a8(0x102ba4e00,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContextPlanDynamicStickerScopeEntryPointProvider",0x32,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102ba4d90; end: 102ba4da7;  */

void FUN_102ba4d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112efbb88,&UNK_10db2c730);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112efbb90,&UNK_10db2c740);
  puVar2 = &UNK_1105a8f08;
  func_0x000107c613fc(&UNK_1105a8f08,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  uVar3 = 0x102ba4d9c;
  func_0x0001000823a8(0x102ba4d9c,puVar2);
  pcVar4 = "ContextPlanDynamicStickerEntryPointWrapperServiceProvider";
  func_0x000100082720("ContextPlanDynamicStickerEntryPointWrapperServiceProvider",0x39,2);
  FUN_102ba5a90();
  func_0x000100082720("ContextPlanStickerScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_102ba4828;
  func_0x0001000823a8(FUN_102ba4828,0);
  func_0x000100082720("SCContextPlanDynamicStickerScopedServicesCleanupRelayServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112efbb98,&UNK_10db2c738);
  puVar2 = &UNK_1105a8f30;
  func_0x000107c613fc(&UNK_1105a8f30,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar4;
  *(code **)(puVar2 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  pcVar6 = FUN_102ba4de4;
  func_0x0001000823a8(FUN_102ba4de4,puVar2);
  func_0x000100082720("SCContextPlanDynamicStickerScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112efbb18,&UNK_10db2c480);
  func_0x000107c6157c(pcVar6);
  uVar7 = 0x102ba4df0;
  func_0x0001000823a8(0x102ba4df0,pcVar6);
  func_0x000100082720("SCContextPlanDynamicStickerScopeInitializationServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112efbb08,&UNK_10db2c470);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102ba4df8;
  func_0x0001000823a8(0x102ba4df8,uVar7);
  func_0x000100082720("SCContextPlanDynamicStickerScopedServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_1105a8f58;
  func_0x000107c613fc(&UNK_1105a8f58,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x102ba4e00;
  func_0x0001000823a8(0x102ba4e00,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCContextPlanDynamicStickerScopeEntryPointProvider",0x32,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 102ba4da8; end: 102ba4de3;  */

void FUN_102ba4da8(void)

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



/* Entry: 102ba4de4; end: 102ba4e07;  */

void FUN_102ba4de4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102ba524c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCContextPlanDynamicStickerScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba4e08; end: 102ba4f6b;  */

void FUN_102ba4e08(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_102ba5178();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_102ba6d40(0);
  func_0x000107c613fc();
  uVar1 = uStack_58;
  FUN_102ba6a3c(uStack_58,uStack_60,uStack_68,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
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
  func_0x000107c61174(uStack_58);
  func_0x000107c6157c(uVar1);
  FUN_102ba6a4c();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 102ba4f6c; end: 102ba507f;  */

long FUN_102ba4f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_102ba6d40(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102ba6a3c(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_102ba6a4c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102ba5080; end: 102ba50bb;  */

void FUN_102ba5080(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ba50bc; end: 102ba50c3;  */

undefined8 FUN_102ba50bc(void)

{
  return 0x1b;
}



/* Entry: 102ba50c4; end: 102ba5147;  */

void FUN_102ba50c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102ba51b8,param_2,FUN_102ba51bc,param_2,0x102ba51e4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102ba5148; end: 102ba5177;  */

undefined ** FUN_102ba5148(void)

{
  return &PTR_DAT_1130669b8;
}



/* Entry: 102ba5178; end: 102ba5197;  */

void FUN_102ba5178(void)

{
  func_0x000107c61168(&PTR_PTR_112efbc08);
  return;
}



/* Entry: 102ba5198; end: 102ba51bb;  */

undefined1  [16] FUN_102ba5198(void)

{
  return ZEXT816(0x1105a8fb0);
}



/* Entry: 102ba51bc; end: 102ba520f;  */

void FUN_102ba51bc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ba5210; end: 102ba524b;  */

void FUN_102ba5210(undefined8 *param_1,undefined8 param_2)

{
  FUN_102ba524c();
  func_0x0001000a7f38("SCContextPlanDynamicStickerScopeInitializationPluginRegistryServiceProvider",
                      0x4b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102ba524c; end: 102ba5437;  */

void FUN_102ba524c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d2a8;
  ppuVar4 = &PTR_DAT_1130669b8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112efbc80;
  func_0x0001000285a8(0x112efbc80,&UNK_10db2c8a0);
  func_0x0001000a6ee8(&UNK_1105a8fb0,
                      "ContextPlanDynamicStickerEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_102ba54ac,param_1,uVar2,&UNK_1105a8fb0,&PTR_DAT_112efbba0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1105a9000;
  func_0x000107c613fc(&UNK_1105a9000,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a9210,
                      "ContextPlanStickerScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_102ba54b4,puVar3,uVar2,&UNK_1105a9210,&PTR_DAT_112efbd10);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105a9028;
  func_0x000107c613fc(&UNK_1105a9028,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a8dd0,
                      "SCContextPlanDynamicStickerScopedServicesScopeInitializationPluginKey",0x45,2
                      ,FUN_102ba559c,puVar3,uVar2,&UNK_1105a8dd0,&PTR_DAT_112efbb20);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112efbc88;
  func_0x0001000285a8(0x112efbc88,&UNK_10db2c8a8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102ba5438; end: 102ba54ab;  */

void FUN_102ba5438(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102ba55d8;
  func_0x0001000823a8(0x102ba55d8,param_3);
  func_0x000100082720("ContextPlanDynamicStickerEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba54ac; end: 102ba54b3;  */

void FUN_102ba54ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102ba55d8;
  func_0x0001000823a8();
  func_0x000100082720("ContextPlanDynamicStickerEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba54b4; end: 102ba54f3;  */

void FUN_102ba54b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102ba5b74(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextPlanStickerScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ba54f4; end: 102ba559b;  */

void FUN_102ba54f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a9050;
  func_0x000107c613fc(&UNK_1105a9050,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102ba55d0;
  func_0x0001000823a8(FUN_102ba55d0,puVar1);
  func_0x000100082720("SCContextPlanDynamicStickerScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102ba559c; end: 102ba55a3;  */

void FUN_102ba559c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a9050;
  func_0x000107c613fc(&UNK_1105a9050,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102ba55d0;
  func_0x0001000823a8(FUN_102ba55d0,puVar3);
  func_0x000100082720("SCContextPlanDynamicStickerScopedServicesScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102ba55a4; end: 102ba55cf;  */

void FUN_102ba55a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ba55d0; end: 102ba55df;  */

void FUN_102ba55d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105a8e58;
  func_0x000107c613fc(&UNK_1105a8e58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102ba4a3c;
  func_0x00010058fa64(FUN_102ba4a3c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ba55e0; end: 102ba5667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ba55e0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102ba59a0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112efbc90) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efbc98) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba5668);
  (*pcVar1)();
}



/* Entry: 102ba5668; end: 102ba56c7; -[_TtC34ContextPlanStickerScopeGraphBridge49ContextPlanStickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_102ba5668(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPlanStickerScopeGraphBridge.ContextPlanStickerScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba5694);
  (*pcVar1)();
}



/* Entry: 102ba56c8; end: 102ba56ff; -[_TtC34ContextPlanStickerScopeGraphBridge49ContextPlanStickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ba56e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba56e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba56c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efbc90));
  return;
}



/* Entry: 102ba5700; end: 102ba5727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba5700(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efbc98),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efbc90));
  return;
}



/* Entry: 102ba5728; end: 102ba5747;  */

void FUN_102ba5728(void)

{
  func_0x000107c61168(&PTR_PTR_112892aa8);
  return;
}



/* Entry: 102ba5748; end: 102ba57cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ba5748(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efbcc8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efbcd0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ba57d0);
  (*pcVar2)();
}



/* Entry: 102ba57d0; end: 102ba58b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ba57d0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efbcc8);
  *(undefined **)(unaff_x20 + _DAT_112efbcc8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efbcd0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efbcd0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a9170;
  func_0x000107c613fc(&UNK_1105a9170,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102ba58bc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102ba58b8; end: 102ba58c3;  */

void FUN_102ba58b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102ba58c4; end: 102ba5923; -[_TtC34ContextPlanStickerScopeGraphBridge56SCContextPlanDynamicStickerScopedServicesSaberEntryPoint init] */

void FUN_102ba58c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPlanStickerScopeGraphBridge.SCContextPlanDynamicStickerScopedServicesSaberEntryPoint"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba58f0);
  (*pcVar1)();
}



/* Entry: 102ba5924; end: 102ba595b; -[_TtC34ContextPlanStickerScopeGraphBridge56SCContextPlanDynamicStickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba5924(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efbcd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efbcc8));
  return;
}



/* Entry: 102ba595c; end: 102ba595f;  */

void FUN_102ba595c(void)

{
  return;
}



/* Entry: 102ba5960; end: 102ba597f;  */

void FUN_102ba5960(void)

{
  FUN_102ba57d0();
  return;
}



/* Entry: 102ba5980; end: 102ba599f;  */

void FUN_102ba5980(void)

{
  func_0x000107c61168(&PTR_PTR_112892b70);
  return;
}



/* Entry: 102ba59a0; end: 102ba5a6f;  */

undefined8 FUN_102ba59a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112efbd00,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102ba5a70();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102ba5a70; end: 102ba5a8f;  */

void FUN_102ba5a70(void)

{
  func_0x000107c61168(&PTR_PTR_112892c38);
  return;
}



/* Entry: 102ba5a90; end: 102ba5afb;  */

void FUN_102ba5a90(void)

{
  func_0x0001000285a8(0x112efbd08,&UNK_10db2c988);
  func_0x0001000823a8(0x102ba5ad0,0);
  return;
}



/* Entry: 102ba5afc; end: 102ba5b37; -[_TtC34ContextPlanStickerScopeGraphBridge42ContextPlanStickerScopeGraphBridgeServices init] */

void FUN_102ba5afc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ba5b38; end: 102ba5b6b;  */

void FUN_102ba5b38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba5b6c; end: 102ba5b73;  */

undefined8 FUN_102ba5b6c(void)

{
  return 0x1b;
}



/* Entry: 102ba5b74; end: 102ba5ceb;  */

void FUN_102ba5b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a91b8;
  func_0x000107c613fc(&UNK_1105a91b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102ba5cec,puVar1);
  return;
}



/* Entry: 102ba5cec; end: 102ba5cf3;  */

void FUN_102ba5cec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112efbd00,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efbd00,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a9250;
  func_0x000107c613fc(&UNK_1105a9250,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102ba5da0;
  func_0x00010058fa64(0x102ba5da0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102ba5cf4; end: 102ba5d4f;  */

void FUN_102ba5cf4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efbd00,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efbd00,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102ba5d50; end: 102ba5da7;  */

undefined ** FUN_102ba5d50(void)

{
  return &PTR_DAT_1130669b8;
}



/* Entry: 102ba5da8; end: 102ba5def; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba5da8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efbd60;
  func_0x000107c61428(param_1 + _DAT_112efbd60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ba5df0; end: 102ba5e47; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba5df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efbd60;
  func_0x000107c61428(param_1 + _DAT_112efbd60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ba5e48; end: 102ba5e8f; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint contextPlanStickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba5e48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efbd68;
  func_0x000107c61428(param_1 + _DAT_112efbd68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ba5e90; end: 102ba5ef3; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint setContextPlanStickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba5e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efbd68;
  func_0x000107c61428(param_1 + _DAT_112efbd68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ba5ef4; end: 102ba6027;  */

/* WARNING: Possible PIC construction at 0x000102ba5fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba5fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ba5fe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba5fb0) */
/* WARNING: Removing unreachable block (ram,0x000102ba5fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba5ef4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c405b8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102ba5728();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102ba59a0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba6028);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112efbc90) = lVar5;
    *(long *)(lVar4 + _DAT_112efbc98) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102ba6028; end: 102ba604f; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102ba6028(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ba5ef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ba6050; end: 102ba6093; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_102ba6050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ba6094; end: 102ba622b;  */

void FUN_102ba6094(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0f05e40)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f0fa1c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextPlanStickerScopeGraphBridge/SCContextPlanStickerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ba622c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ba622c; end: 102ba62d7; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102ba622c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102ba6094(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ba62d8; end: 102ba6343; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba62d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efbd60,0);
  *(undefined8 *)(param_1 + _DAT_112efbd68) = 0;
  *(undefined8 *)(param_1 + _DAT_112efbd70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ba6344; end: 102ba6377;  */

void FUN_102ba6344(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ba6378; end: 102ba63bf; -[SCContextPlanStickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ba63a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ba63a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ba6378(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efbd60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efbd68));
  return;
}


