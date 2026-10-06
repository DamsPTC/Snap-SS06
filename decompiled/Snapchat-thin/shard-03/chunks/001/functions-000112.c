/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10254b7b4; end: 10254b8ab;  */

void FUN_10254b7b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar5;
  puVar1 = &UNK_11051ed88;
  func_0x000107c613fc(&UNK_11051ed88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  puVar2 = &UNK_11051edb0;
  func_0x000107c613fc(&UNK_11051edb0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab7bf0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0;
  func_0x000100de1f70();
  func_0x000107c61174(uVar5);
  uVar5 = 0x23;
  func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dab7c00,puVar2,uVar3);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar5;
  func_0x000107c61574(puVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10254b8ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar4,unaff_x22 + 0x88,uVar5,uVar3);
  return;
}



/* Entry: 10254b8ac; end: 10254b8fb;  */

void FUN_10254b8ac(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xe8);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254b8fc,0,0);
  return;
}



/* Entry: 10254b8fc; end: 10254b95b;  */

void FUN_10254b8fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  **(undefined8 **)(unaff_x22 + 0x98) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010254b958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10254b95c; end: 10254b9c7;  */

void FUN_10254b95c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254b9c8,uVar1,uVar2);
  return;
}



/* Entry: 10254b9c8; end: 10254bb5f;  */

void FUN_10254b9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c3ec60(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c45a5c(param_1,param_2,param_3,param_4);
  puVar4 = &UNK_11051edd8;
  func_0x000107c613fc(&UNK_11051edd8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  puVar5 = &UNK_11051ee00;
  func_0x000107c613fc(&UNK_11051ee00,0x20,7);
  puVar7 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(code **)(puVar5 + 0x10) = FUN_10254bdd8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x10254be04;
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100f9148c;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_11051ee18;
  func_0x000107c60bc4(puVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(uVar8);
  puVar6 = puVar3;
  func_0x000107c45138(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(puVar7);
  func_0x000107c61170(puVar3);
  puVar3 = puVar5;
  func_0x000107c61544(puVar5,"",0x6a,0x4f,0x40,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010254bb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10254bb60);
  (*pcVar2)();
}



/* Entry: 10254bb60; end: 10254bbb7;  */

void FUN_10254bb60(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10254bbb8;
                    /* WARNING: Could not recover jumptable at 0x00010254bbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 10254bbb8; end: 10254bbfb;  */

void FUN_10254bbb8(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010254bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10254bbfc; end: 10254bc4f;  */

void FUN_10254bbfc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10254bc50; end: 10254bc7f;  */

void FUN_10254bc50(undefined8 param_1)

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



/* Entry: 10254bc80; end: 10254bc9b;  */

void FUN_10254bc80(long param_1,long param_2)

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



/* Entry: 10254bc9c; end: 10254bd2b;  */

void FUN_10254bc9c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10254bce8;
  plVar2[8] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[9] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254b9c8,lVar1,lVar3);
  return;
}



/* Entry: 10254bd2c; end: 10254bd9b;  */

void FUN_10254bd2c(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10254bd9c;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10254bbb8;
                    /* WARNING: Could not recover jumptable at 0x00010254bbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 10254bd9c; end: 10254bdd7;  */

void FUN_10254bd9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010254bdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10254bdd8; end: 10254be23;  */

void FUN_10254bdd8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ec60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1);
  return;
}



/* Entry: 10254be24; end: 10254be2b;  */

void FUN_10254be24(long param_1,long param_2)

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



/* Entry: 10254be2c; end: 10254bf03;  */

undefined8 FUN_10254be2c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar3 = param_2;
      func_0x000107c61434(param_2);
      FUN_102542610();
      if ((uVar3 & 1) != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        func_0x000107c61174(uVar2);
        func_0x000107c6142c(param_2);
        return uVar2;
      }
      func_0x000107c6142c(param_2);
    }
  }
  else {
    lVar1 = param_1;
    func_0x000107c6157c();
    func_0x000107c6043c();
    func_0x000107c61574(param_1);
    if (lVar1 != 0) {
      uVar2 = 0;
      lStack_30 = lVar1;
      FUN_10254eb80(0);
      func_0x000107c6147c(&uStack_28,&lStack_30,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_28;
    }
  }
  return 0;
}



/* Entry: 10254bf04; end: 10254bf27;  */

void FUN_10254bf04(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10254bf28; end: 10254c04f;  */

void FUN_10254bf28(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c60690(*(undefined1 *)(lVar1 + 0x20));
  func_0x000107c606a8();
  return;
}



/* Entry: 10254c050; end: 10254c15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254c050(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar4 = &lStack_a0;
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(auStack_90);
  FUN_10254d79c();
  lVar2 = param_2;
  func_0x000107c610f8();
  lVar1 = _DAT_112ea4ad0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010254d628();
  *(undefined **)(lVar2 + lVar1) = puVar3;
  *(undefined8 *)(lVar2 + _DAT_112ea4ad8) = uStack_58;
  *(undefined8 *)(lVar2 + _DAT_112ea4ae0) = uStack_60;
  *(undefined8 *)(lVar2 + _DAT_112ea4ae8) = uStack_68;
  FUN_10254d720(auStack_90,lVar2 + _DAT_112ea4af0);
  lStack_a0 = lVar2;
  lStack_98 = param_2;
  func_0x000107c61154(&lStack_a0,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_90);
  *param_1 = plVar4;
  param_1[1] = &PTR_DAT_11051ee70;
  return;
}



/* Entry: 10254c160; end: 10254c16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254c160(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar5 = &lStack_a0;
  func_0x000100083b20(&uStack_58,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(auStack_90);
  FUN_10254d79c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112ea4ad0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010254d628();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112ea4ad8) = uStack_58;
  *(undefined8 *)(lVar3 + _DAT_112ea4ae0) = uStack_60;
  *(undefined8 *)(lVar3 + _DAT_112ea4ae8) = uStack_68;
  FUN_10254d720(auStack_90,lVar3 + _DAT_112ea4af0);
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  func_0x000107c61154(&lStack_a0,PTR_s_init_1125d9248);
  func_0x0001000834e4(auStack_90);
  *param_1 = plVar5;
  param_1[1] = &PTR_DAT_11051ee70;
  return;
}



/* Entry: 10254c16c; end: 10254c233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10254c16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar1 = _DAT_112ea4ad0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010254d628();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4ad8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4ae0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4ae8) = param_3;
  FUN_10254d720(param_4,unaff_x20 + _DAT_112ea4af0);
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_4);
  return puVar3;
}



/* Entry: 10254c234; end: 10254c83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254c234(long param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long unaff_x20;
  undefined8 uVar24;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  plVar3 = (long *)0x0;
  FUN_10254d76c();
  func_0x000107c613fc();
  *(undefined2 *)((long)plVar3 + 0x21) = 0;
  plVar3[2] = param_1;
  plVar3[3] = param_2;
  *(undefined1 *)(plVar3 + 4) = param_3;
  lVar21 = _DAT_112ea4ad0;
  func_0x000107c61428(unaff_x20 + _DAT_112ea4ad0,&puStack_a8,0x20,0);
  uVar24 = *(undefined8 *)(unaff_x20 + lVar21);
  func_0x000107c61434(param_2);
  plVar4 = plVar3;
  FUN_10254be2c();
  if (plVar4 == (long *)0x0) {
    ppuVar5 = &puStack_a8;
    func_0x000107c614a8();
    FUN_10254ed20();
    ppuVar6 = ppuVar5;
    uVar22 = uVar24;
    func_0x00010254edec();
    puVar11 = &UNK_11051eed0;
    puVar7 = puVar11;
    func_0x000107c613fc(&UNK_11051eed0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_11051eef8;
    func_0x000107c613fc(&UNK_11051eef8,0x38,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long **)(puVar8 + 0x18) = plVar3;
    *(undefined8 *)(puVar8 + 0x20) = param_4;
    *(undefined8 *)(puVar8 + 0x28) = param_5;
    *(undefined8 *)(puVar8 + 0x30) = param_6;
    puVar9 = puVar11;
    func_0x000107c613fc(&UNK_11051eed0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    puVar10 = &UNK_11051ef20;
    func_0x000107c613fc(&UNK_11051ef20,0x30,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(long **)(puVar10 + 0x18) = plVar3;
    *(undefined8 *)(puVar10 + 0x20) = param_5;
    *(undefined8 *)(puVar10 + 0x28) = param_6;
    func_0x000107c613fc(&UNK_11051eed0,0x18,7);
    func_0x000107c61614(puVar11 + 0x10);
    puVar12 = &UNK_11051ef48;
    func_0x000107c613fc(&UNK_11051ef48,0x30,7);
    *(undefined **)(puVar12 + 0x10) = puVar11;
    *(long **)(puVar12 + 0x18) = plVar3;
    *(undefined8 *)(puVar12 + 0x20) = param_5;
    *(undefined8 *)(puVar12 + 0x28) = param_6;
    lVar13 = 0;
    FUN_10254eb80();
    lVar20 = lVar13;
    func_0x000107c610f8();
    *(undefined8 *)(lVar20 + _DAT_112ea4cf8) = 0x4014000000000000;
    *(undefined8 *)(lVar20 + _DAT_112ea4d00) = 0;
    *(undefined8 *)(lVar20 + _DAT_112ea4d08) = 0;
    *(undefined8 *)(lVar20 + _DAT_112ea4d10) = 0;
    puVar1 = (undefined8 *)(lVar20 + _DAT_112ea4d20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar20 + _DAT_112ea4d38) = 0;
    plVar4 = (long *)(lVar20 + _DAT_112ea4d28);
    *plVar4 = param_1;
    plVar4[1] = param_2;
    *(undefined1 *)(lVar20 + _DAT_112ea4d30) = param_3;
    puVar1 = (undefined8 *)(lVar20 + _DAT_112ea4cf0);
    *puVar1 = 0x10254d86c;
    puVar1[1] = puVar12;
    func_0x000107c6157c(plVar3);
    func_0x00010254d878(param_5,param_6);
    func_0x000107c6157c(plVar3);
    func_0x00010254d878(param_5,param_6);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(plVar3);
    func_0x00010254d878(param_5,param_6);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(param_4);
    func_0x000107c6157c(puVar9);
    func_0x000107c6157c(puVar11);
    func_0x000107c6157c(puVar12);
    puVar14 = puVar8;
    func_0x000107c6157c(puVar8);
    func_0x00010254eeb8();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_6);
    puVar15 = PTR_PTR_1126b15a0;
    func_0x000107c61168();
    func_0x000107c3ee8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    puVar16 = PTR_PTR_1126e15c8;
    func_0x000107c610f8();
    func_0x000107c6157c(puVar10);
    func_0x000107c5fadc(ppuVar5,uVar24);
    func_0x000107c6142c(uVar24);
    func_0x000107c5fadc(ppuVar6,uVar22);
    func_0x000107c6142c(uVar22);
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_10254d814;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11051ef60;
    ppuVar17 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4();
    uStack_b8 = 0x10254d824;
    puStack_d8 = puVar14;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_1000f6b44;
    puStack_c0 = &UNK_11051ef88;
    ppuVar18 = &puStack_d8;
    puStack_b0 = puVar10;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    func_0x000107c46dcc();
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61574(puStack_80);
    *(undefined **)(lVar20 + _DAT_112ea4d18) = puVar16;
    func_0x000107c5a050(puVar16);
    plVar4 = &lStack_e8;
    lStack_e8 = lVar20;
    lStack_e0 = lVar13;
    func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar11);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar12);
    func_0x000107c61428(unaff_x20 + lVar21,&puStack_a8,0x21,0);
    uVar23 = *(ulong *)(unaff_x20 + lVar21);
    if ((uVar23 & 0xc000000000000001) == 0) {
      func_0x000107c6157c(plVar3);
      func_0x000107c61174(plVar4);
    }
    else {
      uVar19 = uVar23 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar23) {
        uVar19 = uVar23;
      }
      func_0x000107c6157c(plVar3);
      func_0x000107c61174(plVar4);
      uVar23 = uVar19;
      func_0x000107c6042c();
      if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10254c83c);
        (*pcVar2)();
      }
      FUN_10254d0c8(uVar19,uVar23 + 1);
      *(ulong *)(unaff_x20 + lVar21) = uVar19;
      uVar23 = uVar19;
    }
    func_0x000107c61558();
    puStack_d8 = *(undefined **)(unaff_x20 + lVar21);
    FUN_102542f14(plVar4,plVar3,uVar23);
    *(undefined **)(unaff_x20 + lVar21) = puStack_d8;
    func_0x000107c61574(plVar3);
    func_0x000107c614a8(&puStack_a8);
    lVar20 = *(long *)(unaff_x20 + _DAT_112ea4ae8);
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar21 = lVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    if (lVar21 != 0) {
      func_0x000107c61174(plVar4);
      func_0x000107c5c2e0(lVar21);
      func_0x000107c615e8(lVar21);
      func_0x000107c61170(plVar4);
    }
  }
  else {
    func_0x000107c614a8(&puStack_a8);
    if (*(char *)((long)plVar4 + _DAT_112ea4d38) == '\x01') {
      FUN_10254df10();
    }
  }
  func_0x000107c61170(plVar4);
  func_0x000107c61574(plVar3);
  return;
}



/* Entry: 10254c83c; end: 10254c8c3;  */

void FUN_10254c83c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10254c8c4(param_2,param_3,param_4,param_5);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10254c8c4; end: 10254c9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254c8c4(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_112ea4ad0;
  if (((*(byte *)(param_1 + 0x22) & 1) == 0) && ((*(byte *)(param_1 + 0x21) & 1) == 0)) {
    func_0x000107c61428(unaff_x20 + _DAT_112ea4ad0,auStack_68,0x20,0);
    lVar2 = param_1;
    FUN_10254be2c(param_1,*(undefined8 *)(unaff_x20 + lVar3));
    if (lVar2 == 0) {
      func_0x000107c614a8(auStack_68);
    }
    else {
      func_0x000107c614a8(auStack_68);
      func_0x00010254e000();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61428(unaff_x20 + lVar3,auStack_68,0x21,0);
    lVar3 = param_1;
    FUN_102542c0c(param_1);
    func_0x000107c614a8(auStack_68);
    func_0x000107c61170(lVar3);
    *(undefined1 *)(param_1 + 0x22) = 1;
    if (param_3 != (code *)0x0) {
      (*param_3)(0);
    }
    lVar3 = unaff_x20 + _DAT_112ea4af0;
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    lVar2 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar1);
    (**(code **)(lVar2 + 0x10))
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),uVar1,lVar2);
    FUN_10254cc80(param_1,param_2);
  }
  return;
}



/* Entry: 10254c9fc; end: 10254ca73;  */

void FUN_10254c9fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10254ca74(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10254ca74; end: 10254cc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254ca74(long param_1,code *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  *(undefined1 *)(param_1 + 0x21) = 1;
  if (param_2 != (code *)0x0) {
    (*param_2)(1);
  }
  lVar1 = unaff_x20 + _DAT_112ea4af0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x18))
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),uVar2,lVar3);
  lVar1 = _DAT_112ea4ad0;
  func_0x000107c61428(unaff_x20 + _DAT_112ea4ad0,auStack_58,0x20,0);
  lVar3 = param_1;
  FUN_10254be2c(param_1,*(undefined8 *)(unaff_x20 + lVar1));
  if (lVar3 == 0) {
    func_0x000107c614a8(auStack_58);
  }
  else {
    func_0x000107c614a8(auStack_58);
    func_0x00010254e000();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,0x21,0);
  FUN_102542c0c(param_1);
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10254cc80; end: 10254ce23;  */

/* WARNING: Possible PIC construction at 0x00010254ccc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010254cde8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010254cdf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010254cdec) */
/* WARNING: Removing unreachable block (ram,0x00010254cccc) */
/* WARNING: Removing unreachable block (ram,0x00010254cdfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254cc80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112ea4ad8);
  lVar1 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar3 = 0x1d;
    if (*(char *)(param_1 + 0x20) != '\x01') {
      uVar3 = 8;
    }
    uVar2 = 0;
    func_0x000104523254(0);
    func_0x000107c610f8();
    func_0x000104522fdc(uVar3,0,1,uVar2);
    func_0x0001045222f8(0);
    func_0x000107c610f8();
    uVar4 = 1;
    func_0x0001045220b8(1,0);
    func_0x000104522c9c(0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar4);
    func_0x00010452281c(uVar2,uVar5);
    uVar5 = 0;
    func_0x000104521ef8(0);
    func_0x000107c610f8();
    func_0x0001045216bc(uVar3,uVar4,uVar2,uVar5);
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4a8a4();
    func_0x000107c61180();
    func_0x000104520d30();
    func_0x000107c42c1c(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10254ce24; end: 10254ce83; -[_TtC33MapReactionServicesImplementation17MapReactionSender init] */

void FUN_10254ce24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapReactionServicesImplementation.MapReactionSender",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10254ce50);
  (*pcVar1)();
}



/* Entry: 10254ce84; end: 10254ceeb; -[_TtC33MapReactionServicesImplementation17MapReactionSender .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254ce84(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112ea4af0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4ae8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4ad8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4ae0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea4ad0));
  return;
}



/* Entry: 10254ceec; end: 10254cfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254ceec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long unaff_x20;
  undefined8 uVar25;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = param_9;
  lVar21 = unaff_x20 + _DAT_112ea4af0;
  uVar23 = *(undefined8 *)(lVar21 + 0x18);
  puVar11 = *(undefined **)(lVar21 + 0x20);
  func_0x0001000a8868(lVar21,uVar23);
  puStack_80 = puVar11;
  (**(code **)(puVar11 + 8))(param_1,param_2,param_3,param_4,param_5,param_6,param_10,uVar23);
  uVar23 = uStack_78;
  plVar3 = (long *)0x0;
  FUN_10254d76c();
  func_0x000107c613fc();
  *(undefined2 *)((long)plVar3 + 0x21) = 0;
  plVar3[2] = param_4;
  plVar3[3] = param_5;
  *(char *)(plVar3 + 4) = (char)param_6;
  lVar21 = _DAT_112ea4ad0;
  func_0x000107c61428(unaff_x20 + _DAT_112ea4ad0,&puStack_a8,0x20,0);
  uVar25 = *(undefined8 *)(unaff_x20 + lVar21);
  func_0x000107c61434(param_5);
  plVar4 = plVar3;
  FUN_10254be2c();
  if (plVar4 == (long *)0x0) {
    ppuVar5 = &puStack_a8;
    func_0x000107c614a8();
    FUN_10254ed20();
    ppuVar6 = ppuVar5;
    uVar22 = uVar25;
    func_0x00010254edec();
    puVar11 = &UNK_11051eed0;
    puVar7 = puVar11;
    func_0x000107c613fc(&UNK_11051eed0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,unaff_x20);
    puVar8 = &UNK_11051eef8;
    func_0x000107c613fc(&UNK_11051eef8,0x38,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long **)(puVar8 + 0x18) = plVar3;
    *(undefined8 *)(puVar8 + 0x20) = param_7;
    *(undefined8 *)(puVar8 + 0x28) = param_8;
    *(undefined8 *)(puVar8 + 0x30) = uVar23;
    puVar9 = puVar11;
    func_0x000107c613fc(&UNK_11051eed0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,unaff_x20);
    puVar10 = &UNK_11051ef20;
    func_0x000107c613fc(&UNK_11051ef20,0x30,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(long **)(puVar10 + 0x18) = plVar3;
    *(undefined8 *)(puVar10 + 0x20) = param_8;
    *(undefined8 *)(puVar10 + 0x28) = uVar23;
    func_0x000107c613fc(&UNK_11051eed0,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,unaff_x20);
    puVar12 = &UNK_11051ef48;
    func_0x000107c613fc(&UNK_11051ef48,0x30,7);
    *(undefined **)(puVar12 + 0x10) = puVar11;
    *(long **)(puVar12 + 0x18) = plVar3;
    *(undefined8 *)(puVar12 + 0x20) = param_8;
    *(undefined8 *)(puVar12 + 0x28) = uVar23;
    lVar13 = 0;
    FUN_10254eb80();
    lVar20 = lVar13;
    func_0x000107c610f8();
    *(undefined8 *)(lVar20 + _DAT_112ea4cf8) = 0x4014000000000000;
    *(undefined8 *)(lVar20 + _DAT_112ea4d00) = 0;
    *(undefined8 *)(lVar20 + _DAT_112ea4d08) = 0;
    *(undefined8 *)(lVar20 + _DAT_112ea4d10) = 0;
    puVar1 = (undefined8 *)(lVar20 + _DAT_112ea4d20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(lVar20 + _DAT_112ea4d38) = 0;
    plVar4 = (long *)(lVar20 + _DAT_112ea4d28);
    *plVar4 = param_4;
    plVar4[1] = param_5;
    *(char *)(lVar20 + _DAT_112ea4d30) = (char)param_6;
    puVar1 = (undefined8 *)(lVar20 + _DAT_112ea4cf0);
    *puVar1 = 0x10254d86c;
    puVar1[1] = puVar12;
    func_0x000107c6157c(plVar3);
    func_0x00010254d878(param_8,uVar23);
    func_0x000107c6157c(plVar3);
    func_0x00010254d878(param_8,uVar23);
    func_0x000107c61434(param_5);
    func_0x000107c6157c(plVar3);
    func_0x00010254d878(param_8,uVar23);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(param_7);
    func_0x000107c6157c(puVar9);
    func_0x000107c6157c(puVar11);
    func_0x000107c6157c(puVar12);
    puVar14 = puVar8;
    func_0x000107c6157c(puVar8);
    func_0x00010254eeb8();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar23);
    puVar15 = PTR_PTR_1126b15a0;
    func_0x000107c61168();
    func_0x000107c3ee8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    puVar16 = PTR_PTR_1126e15c8;
    func_0x000107c610f8();
    func_0x000107c6157c(puVar10);
    func_0x000107c5fadc(ppuVar5,uVar25);
    func_0x000107c6142c(uVar25);
    func_0x000107c5fadc(ppuVar6,uVar22);
    func_0x000107c6142c(uVar22);
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_10254d814;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11051ef60;
    ppuVar17 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4();
    uStack_b8 = 0x10254d824;
    puStack_d8 = puVar14;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_1000f6b44;
    puStack_c0 = &UNK_11051ef88;
    ppuVar18 = &puStack_d8;
    puStack_b0 = puVar10;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_b0);
    func_0x000107c46dcc();
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61574(puStack_80);
    *(undefined **)(lVar20 + _DAT_112ea4d18) = puVar16;
    func_0x000107c5a050(puVar16);
    plVar4 = &lStack_e8;
    lStack_e8 = lVar20;
    lStack_e0 = lVar13;
    func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar11);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar12);
    func_0x000107c61428(unaff_x20 + lVar21,&puStack_a8,0x21,0);
    uVar24 = *(ulong *)(unaff_x20 + lVar21);
    if ((uVar24 & 0xc000000000000001) == 0) {
      func_0x000107c6157c(plVar3);
      func_0x000107c61174(plVar4);
    }
    else {
      uVar19 = uVar24 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar24) {
        uVar19 = uVar24;
      }
      func_0x000107c6157c(plVar3);
      func_0x000107c61174(plVar4);
      uVar24 = uVar19;
      func_0x000107c6042c();
      if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10254c83c);
        (*pcVar2)();
      }
      FUN_10254d0c8(uVar19,uVar24 + 1);
      *(ulong *)(unaff_x20 + lVar21) = uVar19;
      uVar24 = uVar19;
    }
    func_0x000107c61558();
    puStack_d8 = *(undefined **)(unaff_x20 + lVar21);
    FUN_102542f14(plVar4,plVar3,uVar24);
    *(undefined **)(unaff_x20 + lVar21) = puStack_d8;
    func_0x000107c61574(plVar3);
    func_0x000107c614a8(&puStack_a8);
    lVar20 = *(long *)(unaff_x20 + _DAT_112ea4ae8);
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar21 = lVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar20);
    if (lVar21 != 0) {
      func_0x000107c61174(plVar4);
      func_0x000107c5c2e0(lVar21);
      func_0x000107c615e8(lVar21);
      func_0x000107c61170(plVar4);
    }
  }
  else {
    func_0x000107c614a8(&puStack_a8);
    if (*(char *)((long)plVar4 + _DAT_112ea4d38) == '\x01') {
      FUN_10254df10();
    }
  }
  func_0x000107c61170(plVar4);
  func_0x000107c61574(plVar3);
  return;
}



/* Entry: 10254cfb8; end: 10254d0c7; -[_TtC33MapReactionServicesImplementation17MapReactionSender chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010254cff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010254d010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010254cff8) */
/* WARNING: Removing unreachable block (ram,0x00010254d014) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254cfb8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10254d0c8; end: 10254d41f;  */

undefined * FUN_10254d0c8(undefined *param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *apuStack_c0 [9];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined *)0x0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x112ea47d8,&UNK_10dab79f0);
    puVar5 = param_1;
    func_0x000107c60494();
    puStack_68 = puVar5;
    func_0x000107c60418();
    puVar7 = param_1;
    func_0x000107c60444();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      FUN_10254d76c(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        apuStack_c0[0] = puVar7;
        func_0x000107c6147c(&lStack_70,apuStack_c0,puVar2 + 8,uVar6,7);
        uVar8 = 0;
        apuStack_c0[0] = param_2;
        FUN_10254eb80(0);
        func_0x000107c6147c(&uStack_78,apuStack_c0,puVar2 + 8,uVar8,7);
        lVar3 = lStack_70;
        uVar8 = uStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          func_0x000102543a98(*(ulong *)(puVar5 + 0x10) + 1,1);
          puVar5 = puStack_68;
        }
        func_0x000107c6068c(apuStack_c0,*(undefined8 *)(puVar5 + 0x28));
        param_2 = *(undefined **)(lVar3 + 0x10);
        func_0x000107c5fb58(apuStack_c0,param_2,*(undefined8 *)(lVar3 + 0x18));
        puVar7 = (undefined *)(ulong)*(byte *)(lVar3 + 0x20);
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar10 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar1 = false;
          uVar10 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10254d30c);
              (*pcVar4)();
            }
            uVar9 = 0;
            if (uVar11 != uVar10) {
              uVar9 = uVar11;
            }
            bVar1 = (bool)(uVar11 == uVar10 | bVar1);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40);
        *(long *)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = lVar3;
        *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar8;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c60444();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 10254d420; end: 10254d71f;  */

undefined * FUN_10254d420(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112ea4be8);
  puVar3 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar9;
  func_0x00010035a314();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar9;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      *puVar1 = uVar11;
      puVar1[1] = uVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10254d530);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61434();
        return puVar3;
      }
      uVar9 = puVar6[-2];
      uVar11 = puVar6[-1];
      uVar10 = *puVar6;
      func_0x000107c61434();
      uVar4 = uVar9;
      func_0x00010035a314();
      puVar6 = puVar6 + 3;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10254d500);
  (*pcVar2)();
}



/* Entry: 10254d720; end: 10254d763;  */

long FUN_10254d720(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10254d764; end: 10254d76b;  */

void FUN_10254d764(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e4d1b8;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10254d76c; end: 10254d78b;  */

void FUN_10254d76c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea4b38);
  return;
}



/* Entry: 10254d78c; end: 10254d79b;  */

undefined1  [16] FUN_10254d78c(void)

{
  return ZEXT816(0x11051ee90);
}



/* Entry: 10254d79c; end: 10254d7bb;  */

void FUN_10254d79c(void)

{
  func_0x000107c61168(&PTR_PTR_11284d178);
  return;
}



/* Entry: 10254d7bc; end: 10254d7cf;  */

undefined1  [16] FUN_10254d7bc(void)

{
  return ZEXT816(0x11051eeb0);
}



/* Entry: 10254d7d0; end: 10254d813;  */

void FUN_10254d7d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ea4bd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10254d76c(0xff);
  puVar2 = &UNK_10dab7cec;
  func_0x000107c61520(&UNK_10dab7cec,uVar1);
  puRam0000000112ea4bd8 = puVar2;
  return;
}



/* Entry: 10254d814; end: 10254d82f;  */

void FUN_10254d814(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_10254c8c4(uVar2,uVar1,uVar3,uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10254d830; end: 10254d86b;  */

void FUN_10254d830(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10254d86c; end: 10254d8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254d86c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  pcVar3 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    if (((*(byte *)(lVar5 + 0x22) & 1) == 0) && ((*(byte *)(lVar5 + 0x21) & 1) == 0)) {
      *(undefined1 *)(lVar5 + 0x22) = 1;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(2);
      }
      lVar1 = lVar6 + _DAT_112ea4af0;
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar4 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar2);
      (**(code **)(lVar4 + 0x10))
                (*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),uVar2,lVar4);
      func_0x000107c61428(lVar6 + _DAT_112ea4ad0,auStack_70,0x21,0);
      FUN_102542c0c(lVar5);
      func_0x000107c614a8(auStack_70);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10254d8ac; end: 10254d93b;  */

void FUN_10254d8ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000cad14();
  uVar1 = param_2;
  func_0x0001000cad14();
  uVar2 = uVar1;
  func_0x0001000cad14();
  uVar3 = uVar2;
  func_0x0001000cad14();
  func_0x000100387214(0);
  func_0x000107c610f8();
  func_0x0001038baef8(param_2,uVar1,uVar2,uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 10254d93c; end: 10254d947;  */

void FUN_10254d93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000cad14(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  uVar2 = uVar1;
  func_0x0001000cad14();
  uVar3 = uVar2;
  func_0x0001000cad14();
  uVar4 = uVar3;
  func_0x0001000cad14();
  func_0x000100387214(0);
  func_0x000107c610f8();
  func_0x0001038baef8(uVar1,uVar2,uVar3,uVar4);
  *param_1 = uVar1;
  return;
}



/* Entry: 10254d948; end: 10254dc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254d948(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  uVar2 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  uVar5 = uVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_112fcd168);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  lVar6 = 0;
  func_0x00010254bc30();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar2;
  *(undefined8 *)(lVar6 + 0x18) = param_3;
  *(long *)(lVar6 + 0x20) = lVar4;
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
  func_0x000107c61434(param_3);
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_11307fc48);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&uStack_70);
  uVar8 = uStack_70;
  func_0x000107c42cb0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar9 = uStack_78;
  func_0x000107c407c0();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar10 = uStack_78;
  func_0x0001000cad14();
  lVar11 = 0;
  func_0x000102542224();
  lVar3 = lVar11;
  func_0x000107c613fc();
  lVar12 = 0x112ea4ce0;
  func_0x0001000285a8(0x112ea4ce0,&UNK_10dab7e50);
  func_0x000107c61538();
  lVar13 = lVar12;
  FUN_10254d420();
  uVar5 = 0x112ea4ce8;
  func_0x0001000285a8(0x112ea4ce8,&UNK_10dab7e58);
  func_0x000107c61408(lVar12 + 0x20,7,uVar5);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long *)(lVar3 + 0x10) = lVar13;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = param_3;
  *(long *)(lVar3 + 0x28) = lVar6;
  *(long *)(lVar3 + 0x30) = lVar4;
  *(undefined8 *)(lVar3 + 0x38) = uVar7;
  *(undefined8 *)(lVar3 + 0x40) = uVar8;
  *(undefined8 *)(lVar3 + 0x48) = uVar9;
  *(undefined8 *)(lVar3 + 0x50) = uVar10;
  *(undefined **)(lVar3 + 0x58) = puVar1;
  param_1[3] = lVar11;
  param_1[4] = (long)&PTR_DAT_11051e998;
  *param_1 = lVar3;
  return;
}



/* Entry: 10254dc24; end: 10254dc37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254dc24(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar14,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar12 = lStack_68;
  uVar2 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  uVar5 = uVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  uVar5 = *(undefined8 *)(lStack_68 + _DAT_112fcd168);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  lVar6 = 0;
  func_0x00010254bc30();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar2;
  *(undefined8 *)(lVar6 + 0x18) = uVar14;
  *(long *)(lVar6 + 0x20) = lVar4;
  *(undefined8 *)(lVar6 + 0x28) = uVar5;
  func_0x000107c61434(uVar14);
  func_0x000100083b20(&lStack_68);
  lVar12 = lStack_68;
  lVar3 = lStack_68;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_11307fc48);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&uStack_70);
  uVar8 = uStack_70;
  func_0x000107c42cb0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar9 = uStack_78;
  func_0x000107c407c0();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar10 = uStack_78;
  func_0x0001000cad14();
  lVar11 = 0;
  func_0x000102542224();
  lVar3 = lVar11;
  func_0x000107c613fc();
  lVar12 = 0x112ea4ce0;
  func_0x0001000285a8(0x112ea4ce0,&UNK_10dab7e50);
  func_0x000107c61538();
  lVar13 = lVar12;
  FUN_10254d420();
  uVar5 = 0x112ea4ce8;
  func_0x0001000285a8(0x112ea4ce8,&UNK_10dab7e58);
  func_0x000107c61408(lVar12 + 0x20,7,uVar5);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(long *)(lVar3 + 0x10) = lVar13;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uVar14;
  *(long *)(lVar3 + 0x28) = lVar6;
  *(long *)(lVar3 + 0x30) = lVar4;
  *(undefined8 *)(lVar3 + 0x38) = uVar7;
  *(undefined8 *)(lVar3 + 0x40) = uVar8;
  *(undefined8 *)(lVar3 + 0x48) = uVar9;
  *(undefined8 *)(lVar3 + 0x50) = uVar10;
  *(undefined **)(lVar3 + 0x58) = puVar1;
  param_1[3] = lVar11;
  param_1[4] = (long)&PTR_DAT_11051e998;
  *param_1 = lVar3;
  return;
}



/* Entry: 10254dc38; end: 10254dce3;  */

void FUN_10254dc38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4c440();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x000102547e58();
  uVar1 = uVar3;
  func_0x000107c613fc();
  FUN_10254608c(uVar2,uVar1);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_11051eb78;
  *param_1 = uVar2;
  return;
}



/* Entry: 10254dce4; end: 10254dceb;  */

void FUN_10254dce4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4c440();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  func_0x000102547e58();
  uVar1 = uVar3;
  func_0x000107c613fc();
  FUN_10254608c(uVar2,uVar1);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_11051eb78;
  *param_1 = uVar2;
  return;
}



/* Entry: 10254dcec; end: 10254de87;  */

void FUN_10254dcec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar7 = lStack_58;
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar7 != 0) {
      func_0x000107c5fb14();
      goto LAB_10254dda0;
    }
  }
  param_3 = 0;
LAB_10254dda0:
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c3f8f8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c45070();
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  lVar4 = 0;
  func_0x000102549c68();
  lVar5 = lVar4;
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(long *)(lVar5 + 0x10) = lVar7;
  *(undefined8 *)(lVar5 + 0x18) = param_3;
  *(long *)(lVar5 + 0x20) = lVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *(undefined8 *)(lVar5 + 0x30) = uVar3;
  *(undefined **)(lVar5 + 0x38) = puVar6;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_11051eba0;
  *param_1 = lVar5;
  return;
}



/* Entry: 10254de88; end: 10254dec3;  */

void FUN_10254de88(void)

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



/* Entry: 10254dec4; end: 10254df0f;  */

void FUN_10254dec4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),uVar8,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = lStack_58;
  lVar7 = lStack_58;
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar7 != 0) {
      func_0x000107c5fb14();
      goto LAB_10254dda0;
    }
  }
  uVar8 = 0;
LAB_10254dda0:
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c3f8f8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c45070();
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  lVar4 = 0;
  func_0x000102549c68();
  lVar5 = lVar4;
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(long *)(lVar5 + 0x10) = lVar7;
  *(undefined8 *)(lVar5 + 0x18) = uVar8;
  *(long *)(lVar5 + 0x20) = lVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *(undefined8 *)(lVar5 + 0x30) = uVar3;
  *(undefined **)(lVar5 + 0x38) = puVar6;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_11051eba0;
  *param_1 = lVar5;
  return;
}



/* Entry: 10254df10; end: 10254e17f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254df10(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar1 = _DAT_112ea4d00;
  ppuVar4 = &puStack_60;
  if (*(long *)(unaff_x20 + _DAT_112ea4d00) != 0) {
    func_0x000107c498f8();
  }
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar3 = &UNK_11051f1c8;
  func_0x000107c613fc(&UNK_11051f1c8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_40 = 0x10254ed18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100fef460;
  puStack_48 = &UNK_11051f2f8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c51924(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10254e180; end: 10254e18f; -[_TtC33MapReactionServicesImplementation29ReactionNotificationPresenter containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254e180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ea4d18));
  return;
}



/* Entry: 10254e190; end: 10254e65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254e190(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long unaff_x20;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  *(undefined1 *)(unaff_x20 + _DAT_112ea4d38) = 1;
  lVar13 = *(long *)(unaff_x20 + _DAT_112ea4d18);
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
  lVar3 = _DAT_112ea4d08;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4d08);
  *(long *)(unaff_x20 + _DAT_112ea4d08) = lVar4;
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
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4d10);
  *(long *)(unaff_x20 + _DAT_112ea4d10) = lVar6;
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
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar4 = lVar13;
    func_0x000107c402a0(0);
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    *(long *)(puVar8 + 0x30) = lVar4;
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
    puVar7 = &UNK_11051f150;
    func_0x000107c613fc(&UNK_11051f150,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = param_2;
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x10254ebac;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11051f168;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    puVar7 = puStack_78;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar7);
    pcStack_80 = FUN_10254e65c;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar8;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100288f10;
    puStack_88 = &UNK_11051f190;
    ppuVar12 = &puStack_a0;
    func_0x000107c60bc4(ppuVar12);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar10);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea4d20);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000100b64c10();
    func_0x00010058d43c(uVar5,uVar2);
    puVar10 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    puVar7 = &UNK_11051f1c8;
    func_0x000107c613fc(&UNK_11051f1c8,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    pcStack_80 = FUN_10254ebd0;
    puStack_a0 = puVar8;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100fef460;
    puStack_88 = &UNK_11051f1e0;
    ppuVar11 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar11);
    func_0x000107c61574(puStack_78);
    func_0x000107c51924(0x4015333333333333);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c60bd0(ppuVar11);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4d00);
    *(undefined **)(unaff_x20 + _DAT_112ea4d00) = puVar10;
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10254e65c; end: 10254e65f;  */

void FUN_10254e65c(void)

{
  return;
}



/* Entry: 10254e660; end: 10254e6b3;  */

void FUN_10254e660(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x00010254e000();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10254e6b4; end: 10254e75f; -[_TtC33MapReactionServicesImplementation29ReactionNotificationPresenter presentNotificationOverView:completion:] */

/* WARNING: Possible PIC construction at 0x00010254e744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010254e748) */

void FUN_10254e6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11051f128;
    func_0x000107c613fc(&UNK_11051f128,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_10254eba0;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10254e190(param_3,pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10254e760; end: 10254e7cb;  */

void FUN_10254e760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254e7cc,uVar1,uVar2);
  return;
}



/* Entry: 10254e7cc; end: 10254e98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254e7cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x40,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + _DAT_112ea4d08) != 0) {
      func_0x000107c521e8();
    }
    if (*(long *)(lVar6 + _DAT_112ea4d10) != 0) {
      func_0x000107c521e8();
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_11051f268;
    func_0x000107c613fc(&UNK_11051f268,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x10254ed08;
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11051f280;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar4);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(uVar7);
    func_0x000107c61574(uVar8);
    puVar3 = &UNK_11051f2b8;
    func_0x000107c613fc(&UNK_11051f2b8,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar6;
    *(code **)(unaff_x22 + 0x30) = FUN_10254ece4;
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    *(undefined **)(unaff_x22 + 0x10) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11051f2d0;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar5);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(lVar6);
    func_0x000107c61574(uVar7);
    func_0x000107c3dcd0(0x3fd3333333333333,puVar2);
    func_0x000107c60bd0(lVar5);
    func_0x000107c60bd0(lVar4);
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010254e988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10254e98c; end: 10254ea23;  */

/* WARNING: Possible PIC construction at 0x00010254e9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010254ea00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254e98c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x000107c4ff34(*(undefined8 *)(param_2 + _DAT_112ea4d18));
  (**(code **)(param_2 + _DAT_112ea4cf0))();
  *(undefined1 *)(param_2 + _DAT_112ea4d38) = 0;
  puVar1 = (undefined8 *)(param_2 + _DAT_112ea4d20);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 == (code *)0x0) {
    pcVar2 = (code *)0x0;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
  }
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10254ea24; end: 10254ea5f;  */

void FUN_10254ea24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010254ea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10254ea60; end: 10254ea8b; -[_TtC33MapReactionServicesImplementation29ReactionNotificationPresenter debugInfo] */

void FUN_10254ea60(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef27c20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10254ea8c; end: 10254eaeb; -[_TtC33MapReactionServicesImplementation29ReactionNotificationPresenter init] */

void FUN_10254ea8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapReactionServicesImplementation.ReactionNotificationPresenter",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10254eab8);
  (*pcVar1)();
}



/* Entry: 10254eaec; end: 10254eb7f; -[_TtC33MapReactionServicesImplementation29ReactionNotificationPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254eaec(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4cf0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4d00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4d08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4d10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4d18));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112ea4d20),
                      ((undefined8 *)(param_1 + _DAT_112ea4d20))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea4d28 + 8))
  ;
  return;
}



/* Entry: 10254eb80; end: 10254eb9f;  */

void FUN_10254eb80(void)

{
  func_0x000107c61168(&PTR_PTR_11284d258);
  return;
}



/* Entry: 10254eba0; end: 10254ebcf;  */

void FUN_10254eba0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010254eba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10254ebd0; end: 10254ebe7;  */

void FUN_10254ebd0(void)

{
  FUN_10254e660();
  return;
}



/* Entry: 10254ebe8; end: 10254ec37;  */

void FUN_10254ebe8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10254ec38;
  plVar3[0xb] = lVar2;
  plVar3[0xc] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xd] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254e7cc,lVar1,lVar2);
  return;
}



/* Entry: 10254ec38; end: 10254ec73;  */

void FUN_10254ec38(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010254ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10254ec74; end: 10254ece3;  */

void FUN_10254ec74(undefined8 param_1)

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
  plVar3[1] = 0x10254ed1c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10254ece4; end: 10254ed1f;  */

/* WARNING: Possible PIC construction at 0x00010254e9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010254ea00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254ece4(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ff34(*(undefined8 *)(lVar2 + _DAT_112ea4d18));
  (**(code **)(lVar2 + _DAT_112ea4cf0))();
  *(undefined1 *)(lVar2 + _DAT_112ea4d38) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ea4d20);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)0x0;
    uVar4 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    uVar4 = puVar1[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
  }
  if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10254ed20; end: 10254f097;  */

undefined1  [16] FUN_10254ed20(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef27d80);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0a8d10);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10254edec);
  (*pcVar1)();
}



/* Entry: 10254f098; end: 10254f0a7;  */

undefined1  [16] FUN_10254f098(void)

{
  return ZEXT816(0x11051f3e0);
}



/* Entry: 10254f0a8; end: 10254f0d3;  */

void FUN_10254f0a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10254f0d4; end: 10254f25b;  */

void FUN_10254f0d4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *param_2;
  func_0x0001000285a8(0x112ea4d78,&UNK_10dab7f20);
  puVar2 = &uStack_48;
  uStack_48 = uVar5;
  func_0x0001000838ec();
  func_0x0001026b8d60(uVar3);
  func_0x000100082720("EmbeddedMapDataBridgeLoggerServiceProvider",0x2a,2);
  puVar4 = puVar2;
  FUN_1026b8e74(puVar2,uVar1,uVar3);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  func_0x000100082720("EmbeddedMapDataBridgeEntryPointProvider",0x27,2);
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 10254f25c; end: 10254f26b;  */

undefined1  [16] FUN_10254f25c(void)

{
  return ZEXT816(0x11051f4d0);
}



/* Entry: 10254f26c; end: 10254f2a7;  */

void FUN_10254f26c(void)

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



/* Entry: 10254f2a8; end: 10254f357;  */

void FUN_10254f2a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *param_2;
  func_0x0001000285a8(0x112ea4d90,&UNK_10dab7f78);
  puVar4 = &uStack_58;
  uStack_58 = uVar6;
  func_0x0001000838ec(puVar4);
  FUN_102551930(uVar5,uVar2,puVar4,uVar1,uVar3);
  func_0x000107c61574(puVar4);
  func_0x000100082720("WidgetOnboardingWorkflowEntryPointProvider",0x2a,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 10254f358; end: 10254f3d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254f358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea4d98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4da0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea4da8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 10254f3d8; end: 10254f43b; -[_TtC33MapWidgetOnboardingImplementation35DevelopmentNavigationViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254f3d8(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea4d98) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapWidgetOnboardingImplementation/DevelopmentNavigationViewController.swift",
                      0x4b,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10254f43c);
  (*pcVar1)();
}



/* Entry: 10254f43c; end: 10254f89f;  */

void FUN_10254f43c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar3 = unaff_x20;
  func_0x000107c4d510();
  func_0x000107c61180();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0a8dc0);
  func_0x000107c59e18(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  lVar3 = unaff_x20;
  func_0x000107c4d510();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar4 = 0x65736f6c43;
  func_0x000107c5fadc(0x65736f6c43,0xe500000000000000);
  if (lVar2 == 0) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(&stack0xffffffffffffff80,lVar2);
    lVar11 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
    puVar10 = &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar11 + 0x10))(puVar10);
    puVar9 = puVar10;
    func_0x000107c605b0(puVar10,lVar2);
    (**(code **)(lVar11 + 8))(puVar10,lVar2);
    func_0x000100183ab8(&stack0xffffffffffffff80);
  }
  puVar5 = PTR__OBJC_CLASS___UIBarButtonItem_1126b0670;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIBarButtonItem_1126b0670);
  func_0x000107c48d80();
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(puVar9);
  func_0x000107c55b80(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar5);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10254f894);
    (*pcVar1)();
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c411d4();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  uVar4 = 0x20746e6573657250;
  func_0x000107c5fadc(0x20746e6573657250,0xec00000079617274);
  func_0x000107c59e1c(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c3d8b8(puVar5);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10254f898);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = 0x112d360b8;
  FUN_10254fdb8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 5;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  puVar6 = puVar5;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar11 = lVar3;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar7 = puVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar11);
    *(undefined **)(lVar2 + 0x20) = puVar7;
    puVar6 = puVar5;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = unaff_x20;
      func_0x000107c3f764(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar8 = puVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar3);
      *(undefined **)(lVar2 + 0x28) = puVar8;
      uVar4 = 0;
      FUN_10254fe30(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar4);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10254f8a0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10254f89c);
  (*pcVar1)();
}



/* Entry: 10254f8a0; end: 10254f8c7; -[_TtC33MapWidgetOnboardingImplementation35DevelopmentNavigationViewController viewDidLoad] */

void FUN_10254f8a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10254f43c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10254f8c8; end: 10254f99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254f8c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  func_0x000100343df4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x0001038bb3a4(puVar2,0,0xe000000000000000);
  puStack_40 = puVar2;
  func_0x00010008a7c8(&uStack_38,&puStack_40);
  func_0x000100083b20(&puStack_40);
  func_0x000107c61574(uStack_38);
  puVar1 = puStack_40;
  func_0x000107c3e85c(puStack_40);
  func_0x000107c61170(puVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea4d98);
  *(undefined **)(unaff_x20 + _DAT_112ea4d98) = puVar1;
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 10254f99c; end: 10254f9c3; -[_TtC33MapWidgetOnboardingImplementation35DevelopmentNavigationViewController didTapButton] */

void FUN_10254f99c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10254f8c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10254f9c4; end: 10254fa03; -[_TtC33MapWidgetOnboardingImplementation35DevelopmentNavigationViewController didTapClose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254f9c4(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ea4da8);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10254fa04; end: 10254fa63; -[_TtC33MapWidgetOnboardingImplementation35DevelopmentNavigationViewController initWithNibName:bundle:] */

void FUN_10254fa04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapWidgetOnboardingImplementation.DevelopmentNavigationViewController",0x45,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10254fa30);
  (*pcVar1)();
}



/* Entry: 10254fa64; end: 10254faaf; -[_TtC33MapWidgetOnboardingImplementation35DevelopmentNavigationViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254fa64(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4da0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4da8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea4d98));
  return;
}



/* Entry: 10254fab0; end: 10254fb1b;  */

void FUN_10254fab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10254fb1c,uVar1,uVar2);
  return;
}



/* Entry: 10254fb1c; end: 10254fbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254fb1c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112ea4d98);
  *(undefined8 *)(lVar1 + _DAT_112ea4d98) = 0;
  func_0x000107c615e8(uVar2);
  (**(code **)(lVar1 + _DAT_112ea4da8))();
                    /* WARNING: Could not recover jumptable at 0x00010254fb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10254fbb0; end: 10254fc7b; -[_TtC33MapWidgetOnboardingImplementation35DevelopmentNavigationViewController mapWidgetOnboardingDidDismissWith:] */

void FUN_10254fbb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11051f598;
  func_0x000107c613fc(&UNK_11051f598,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11051f5c0;
  func_0x000107c613fc(&UNK_11051f5c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab7fe8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x70;
  func_0x0001001ca524(0x70,0,0x3c,4,0,0,&UNK_10dab7ff0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10254fc7c; end: 10254fd23;  */

void FUN_10254fc7c(void)

{
  func_0x000107c61168(&PTR_PTR_11284d360);
  return;
}



/* Entry: 10254fd24; end: 10254fd93;  */

void FUN_10254fd24(undefined8 param_1)

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
  plVar3[1] = (long)FUN_10254fe70;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10254fd94; end: 10254fdb7;  */

void FUN_10254fd94(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ea4dd8;
  plVar5 = (long *)&UNK_10dab7ff8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10254fe30(0,0x112ea4de0,&PTR_PTR_1126ae588);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10254fdb8; end: 10254fe2f;  */

void FUN_10254fdb8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10254fe30(0,param_1,param_2);
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



/* Entry: 10254fe30; end: 10254fe6f;  */

void FUN_10254fe30(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10254fe70; end: 10254fe73;  */

void FUN_10254fe70(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010254fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10254fe74; end: 10254fefb; -[_TtC33MapWidgetOnboardingImplementation26MapWidgetOnboardingBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254fe74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 10254fefc; end: 10254ff5b; -[_TtC33MapWidgetOnboardingImplementation26MapWidgetOnboardingBuilder init] */

void FUN_10254fefc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapWidgetOnboardingImplementation.MapWidgetOnboardingBuilder",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10254ff28);
  (*pcVar1)();
}



/* Entry: 10254ff5c; end: 10254ff6b; -[_TtC33MapWidgetOnboardingImplementation26MapWidgetOnboardingBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10254ff5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea4de8));
  return;
}


