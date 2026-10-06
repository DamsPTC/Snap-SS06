/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10273fe90; end: 10273ff2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273fe90(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x00010273fcbc(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10273ff30;
                    /* WARNING: Could not recover jumptable at 0x00010273ff2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
             *(undefined8 *)(unaff_x22 + 0x48),*(undefined1 *)(unaff_x22 + 0x70),uVar2,lVar3);
  return;
}



/* Entry: 10273ff30; end: 10273ff8f;  */

void FUN_10273ff30(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10273ff90;
  }
  else {
    pcVar1 = FUN_102740070;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10273ff90; end: 10274006f;  */

void FUN_10273ff90(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_10273fb1c(unaff_x22 + 0x10);
  puVar1 = (undefined8 *)PTR_PTR_1126b27a8;
  func_0x000107c61168();
  func_0x000107c61174(uVar2);
  func_0x000107c45160();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102740018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar1);
    return;
  }
  FUN_10273fce0();
  func_0x000107c613f8(&UNK_1105427b0,puVar1,0,0);
  *puVar1 = uVar2;
  puVar1[1] = 0x1000000000000000;
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010274006c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102740070; end: 1027400a3;  */

void FUN_102740070(void)

{
  long unaff_x22;
  
  FUN_10273fb1c(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001027400a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027400a4; end: 1027400d7;  */

undefined8 FUN_1027400a4(undefined8 param_1)

{
  FUN_10273d9b0();
  return param_1;
}



/* Entry: 1027400d8; end: 10274011b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1027400d8(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1c & 3;
  if (uVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  if (uVar2 != 0) {
    return;
  }
  uVar1 = uVar1 >> 0x1e;
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 10274011c; end: 10274015f;  */

undefined8 * FUN_10274011c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_1027400d8(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x000102740100(uVar2,uVar4);
  return param_1;
}



/* Entry: 102740160; end: 102740197;  */

undefined8 * FUN_102740160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000102740100(uVar1,uVar2);
  return param_1;
}



/* Entry: 102740198; end: 102740293;  */

uint FUN_102740198(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[4] != '\0')) {
    return *param_1 + 2;
  }
  return (uint)(((*(ulong *)(param_1 + 2) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0);
}



/* Entry: 102740294; end: 10274037f;  */

long * FUN_102740294(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0x112ebb848;
    func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
    lVar5 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,2,lVar2);
    if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
      return param_1;
    }
    lVar6 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar5 + 0x38))(param_1,0,2,lVar2);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102740380; end: 1027403ef;  */

void FUN_102740380(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
  uVar1 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,2,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001027403ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return;
}



/* Entry: 1027403f0; end: 1027404b7;  */

undefined8 FUN_1027403f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,2,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,2,lVar1);
  return param_1;
}



/* Entry: 1027404b8; end: 1027405d3;  */

undefined8 FUN_1027404b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar1 = param_1;
  (*pcVar6)(param_1,2,lVar4);
  uVar2 = param_2;
  (*pcVar6)(param_2,2,lVar4);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      FUN_1027405d4(param_1);
      goto LAB_102740570;
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x18))(param_1,param_2,lVar4);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_102740570:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1,0,2,lVar4);
  }
  return param_1;
}



/* Entry: 1027405d4; end: 10274061b;  */

undefined8 FUN_1027405d4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10274061c; end: 1027406e3;  */

undefined8 FUN_10274061c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,2,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,2,lVar1);
  return param_1;
}



/* Entry: 1027406e4; end: 1027407ff;  */

undefined8 FUN_1027406e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar1 = param_1;
  (*pcVar6)(param_1,2,lVar4);
  uVar2 = param_2;
  (*pcVar6)(param_2,2,lVar4);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      FUN_1027405d4(param_1);
      goto LAB_10274079c;
    }
    lVar4 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_10274079c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1,0,2,lVar4);
  }
  return param_1;
}



/* Entry: 102740800; end: 102740817;  */

void FUN_102740800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102740818; end: 10274085b;  */

void FUN_102740818(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
                    /* WARNING: Could not recover jumptable at 0x000102740858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,2,lVar1);
  return;
}



/* Entry: 10274085c; end: 10274085f;  */

void FUN_10274085c(void)

{
  return;
}



/* Entry: 102740860; end: 1027408ab;  */

void FUN_102740860(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
                    /* WARNING: Could not recover jumptable at 0x0001027408a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,2,lVar1);
  return;
}



/* Entry: 1027408ac; end: 1027408e3;  */

void FUN_1027408ac(undefined8 param_1)

{
  if (lRam0000000112ebb8c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6f0f2c);
  return;
}



/* Entry: 1027408e4; end: 102740937;  */

void FUN_1027408e4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    func_0x000107c61530(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Entry: 102740938; end: 102740947;  */

void FUN_102740938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102740948; end: 102740987;  */

void FUN_102740948(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_102741704();
  uVar1 = param_2;
  func_0x000107c613fc();
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_110542830;
  *param_1 = uVar1;
  return;
}



/* Entry: 102740988; end: 102740997;  */

void FUN_102740988(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 102740998; end: 102740ddb;  */

undefined * FUN_102740998(void)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ebbc();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  uVar15 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = uVar15 - extraout_x8_00;
  lVar5 = 0;
  func_0x000107c5ec24();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ebe4(lVar17);
  lVar4 = lVar17;
  (**(code **)(lVar18 + 0x30))(lVar17,1,lVar5);
  if ((int)lVar4 == 1) {
    func_0x000100f14918(lVar17);
  }
  else {
    lVar4 = lVar19;
    (**(code **)(lVar18 + 0x20))(lVar19,lVar17,lVar5);
    func_0x000107c5ebc4();
    if (lVar4 != 0) {
      lStack_a0 = lVar5;
      uStack_70 = *(ulong *)(lVar4 + 0x10);
      puVar20 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      lStack_b0 = lVar19;
      lStack_a8 = lVar18;
      if (*(ulong *)(lVar4 + 0x10) != 0) {
        uVar16 = 0;
        lStack_78 = lVar4 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
        uStack_88 = uVar15;
        lStack_80 = lVar14;
        lStack_98 = lVar4;
        lStack_90 = lVar3;
        do {
          if (*(ulong *)(lVar4 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102740dc4);
            (*pcVar2)();
          }
          uVar9 = lStack_78 + *(long *)(lVar14 + 0x48) * uVar16;
          (**(code **)(lVar14 + 0x10))(uVar15,uVar9,lVar3);
          func_0x000107c5ebb4();
          uVar6 = uVar15;
          uVar10 = uVar9;
          func_0x000107c5ebb8();
          if (uVar10 == 0) {
            func_0x000107c61434(puVar20);
            uVar6 = uVar9;
            func_0x000100029284();
            func_0x000107c6142c(puVar20);
            lVar14 = lStack_80;
            uVar13 = uStack_88;
            if ((uVar6 & 1) == 0) {
              (**(code **)(lStack_80 + 8))(uStack_88,lVar3);
              func_0x000107c6142c(uVar9);
            }
            else {
              puVar8 = puVar20;
              func_0x000107c61558();
              uVar13 = uStack_88;
              puStack_68 = puVar20;
              if ((int)puVar8 == 0) {
                func_0x000100184498();
              }
              puVar20 = puStack_68;
              func_0x000107c6142c(*(undefined8 *)(*(long *)(puStack_68 + 0x30) + uVar15 * 0x10 + 8))
              ;
              func_0x000107c6142c(*(undefined8 *)(*(long *)(puVar20 + 0x38) + uVar15 * 0x10 + 8));
              func_0x00010105bd08(uVar15,puVar20);
              func_0x000107c6142c(uVar9);
              lVar14 = lStack_80;
              (**(code **)(lStack_80 + 8))(uVar13,lVar3);
            }
          }
          else {
            puVar8 = puVar20;
            func_0x000107c61558();
            uVar7 = uVar15;
            uVar11 = uVar9;
            puStack_68 = puVar20;
            func_0x000100029284();
            uVar13 = (ulong)~(uint)uVar11 & 1;
            lVar4 = *(long *)(puVar20 + 0x10) + uVar13;
            if (SCARRY8(*(long *)(puVar20 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102740dc8);
              (*pcVar2)();
            }
            if (*(long *)(puVar20 + 0x18) < lVar4) {
              func_0x0001001833c8(lVar4,puVar8);
              uVar7 = uVar15;
              uVar12 = uVar9;
              func_0x000100029284();
              lVar3 = lStack_90;
              uVar13 = uStack_88;
              lVar14 = lStack_80;
              puVar20 = puStack_68;
              if (((uint)uVar11 & 1) != ((uint)uVar12 & 1)) {
                func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102740ddc);
                (*pcVar2)();
              }
            }
            else {
              lVar3 = lStack_90;
              uVar13 = uStack_88;
              lVar14 = lStack_80;
              puVar20 = puStack_68;
              if (((ulong)puVar8 & 1) == 0) {
                func_0x000100184498();
                lVar3 = lStack_90;
                uVar13 = uStack_88;
                lVar14 = lStack_80;
                puVar20 = puStack_68;
              }
            }
            lStack_90 = lVar3;
            uStack_88 = uVar13;
            lStack_80 = lVar14;
            puStack_68 = puVar20;
            if ((uVar11 & 1) == 0) {
              *(ulong *)(puVar20 + (uVar7 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar20 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
              puVar1 = (ulong *)(*(long *)(puVar20 + 0x30) + uVar7 * 0x10);
              *puVar1 = uVar15;
              puVar1[1] = uVar9;
              puVar1 = (ulong *)(*(long *)(puVar20 + 0x38) + uVar7 * 0x10);
              *puVar1 = uVar6;
              puVar1[1] = uVar10;
              (**(code **)(lVar14 + 8))(uVar13,lVar3);
              if (SCARRY8(*(long *)(puVar20 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102740dcc);
                (*pcVar2)();
              }
              *(long *)(puVar20 + 0x10) = *(long *)(puVar20 + 0x10) + 1;
              lVar4 = lStack_98;
            }
            else {
              puVar1 = (ulong *)(*(long *)(puVar20 + 0x38) + uVar7 * 0x10);
              uVar15 = puVar1[1];
              *puVar1 = uVar6;
              puVar1[1] = uVar10;
              func_0x000107c6142c(uVar9);
              func_0x000107c6142c(uVar15);
              lVar14 = lStack_80;
              uVar13 = uStack_88;
              lVar3 = lStack_90;
              (**(code **)(lStack_80 + 8))(uStack_88,lStack_90);
              lVar4 = lStack_98;
            }
          }
          uVar16 = uVar16 + 1;
          uVar15 = uVar13;
        } while (uStack_70 != uVar16);
      }
      func_0x000107c6142c(lVar4);
      (**(code **)(lStack_a8 + 8))(lStack_b0,lStack_a0);
      return puVar20;
    }
    (**(code **)(lVar18 + 8))(lVar19,lVar5);
  }
  return (undefined *)0x0;
}



/* Entry: 102740ddc; end: 102740deb;  */

void FUN_102740ddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102740dec; end: 102740e37;  */

void FUN_102740dec(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_1027412f4(&uStack_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    *(undefined1 *)(param_1 + 6) = uStack_28;
  }
  return;
}



/* Entry: 102740e38; end: 1027412f3;  */

void FUN_102740e38(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  ulong uStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_58;
  
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_102740f60:
    uVar6 = 0;
    FUN_1027408ac(0);
    uVar7 = uVar6;
    FUN_10273fdac();
    func_0x000107c613f8(uVar6,uVar7,0,0);
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(uVar7,param_3,lVar5);
    lVar5 = 0x112ebb848;
    func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar7,0,2,lVar5);
    func_0x000107c61654();
    return;
  }
  func_0x000107c61434();
  lVar5 = 0x44495f50414e53;
  uVar8 = 0;
  func_0x000100029284();
  if ((uVar8 & 1) == 0) {
    func_0x000107c6142c(param_2);
    goto LAB_102740f60;
  }
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar5 * 0x10);
  uVar7 = *puVar1;
  uVar6 = puVar1[1];
  func_0x000107c61434(uVar6);
  func_0x000107c6142c(param_2);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_1027410d0:
    uVar11 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar14 = 1;
    goto LAB_10274122c;
  }
  func_0x000107c61434(param_2);
  lVar5 = 0x575f544547524154;
  uVar8 = 0xec00000048544449;
  func_0x000100029284();
  if ((uVar8 & 1) == 0) {
LAB_1027410ec:
    func_0x000107c6142c(param_2);
LAB_102741178:
    uVar13 = 0;
    uVar14 = 1;
    lVar5 = *(long *)(param_2 + 0x10);
    uVar11 = 0;
  }
  else {
    puVar9 = (ulong *)(*(long *)(param_2 + 0x38) + lVar5 * 0x10);
    uVar8 = *puVar9;
    uVar3 = puVar9[1];
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(param_2);
    uStack_58 = 0;
    puStack_70 = &uStack_58;
    if ((uVar3 >> 0x3c & 1) == 0) {
      if ((uVar3 >> 0x3d & 1) == 0) {
        if ((uVar8 >> 0x3c & 1) == 0) goto LAB_10274126c;
        puVar9 = (ulong *)(uVar3 + 0x20);
        bVar4 = *(byte *)puVar9;
        if (((bVar4 - 9 < 5) || (bVar4 == 0)) || (bVar4 == 0x20)) goto LAB_102741000;
        func_0x000107c61434(uVar3);
        func_0x000107c60eb4(puVar9,&uStack_58);
        if (puVar9 != (ulong *)0x0) goto LAB_102741120;
LAB_102740f50:
        bStack_81 = 0;
      }
      else {
        uStack_90 = uVar3 & 0xffffffffffffff;
        uVar2 = (uint)uVar8 & 0xff;
        uStack_98 = uVar8;
        if (((uVar2 - 9 < 5) || ((uVar8 & 0xff) == 0)) || (uVar2 == 0x20)) {
LAB_102741000:
          bStack_81 = 0;
          func_0x000107c61434(uVar3);
        }
        else {
          func_0x000107c61434(uVar3);
          puVar9 = &uStack_98;
          func_0x000107c60eb4(puVar9,&uStack_58);
          if (puVar9 == (ulong *)0x0) goto LAB_102740f50;
LAB_102741120:
          bStack_81 = (byte)*puVar9 == 0;
        }
      }
    }
    else {
LAB_10274126c:
      func_0x000107c61434(uVar3);
      func_0x000107c602f0(&bStack_81,0x102741724,auStack_80,uVar8,uVar3,PTR___sSbN_11034dd40);
    }
    func_0x000107c61430(uVar3,2);
    uVar13 = uStack_58;
    if ((bStack_81 & 1) == 0) goto LAB_102741178;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_1027410d0;
    func_0x000107c61434(param_2);
    lVar5 = 0x485f544547524154;
    uVar8 = 0xed00005448474945;
    func_0x000100029284();
    if ((uVar8 & 1) == 0) goto LAB_1027410ec;
    puVar9 = (ulong *)(*(long *)(param_2 + 0x38) + lVar5 * 0x10);
    uVar8 = *puVar9;
    uVar3 = puVar9[1];
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(param_2);
    uStack_58 = 0;
    puStack_70 = &uStack_58;
    if ((uVar3 >> 0x3c & 1) == 0) {
      if ((uVar3 >> 0x3d & 1) != 0) {
        uStack_90 = uVar3 & 0xffffffffffffff;
        uStack_98 = uVar8;
        if ((0x20 < ((uint)uVar8 & 0xff)) || ((1L << (uVar8 & 0x3f) & 0x100003e01U) == 0)) {
          func_0x000107c61434(uVar3);
          puVar9 = &uStack_98;
          goto LAB_1027411f0;
        }
LAB_102741164:
        func_0x000107c61434(uVar3);
LAB_10274116c:
        func_0x000107c61430();
        goto LAB_102741178;
      }
      if ((uVar8 >> 0x3c & 1) == 0) goto LAB_1027412a4;
      puVar9 = (ulong *)(uVar3 + 0x20);
      if ((*(byte *)puVar9 < 0x21) && ((1L << ((ulong)*(byte *)puVar9 & 0x3f) & 0x100003e01U) != 0))
      goto LAB_102741164;
      func_0x000107c61434(uVar3);
LAB_1027411f0:
      func_0x000107c60eb4(puVar9,&uStack_58);
      if (puVar9 == (ulong *)0x0) goto LAB_10274116c;
      uVar8 = *puVar9;
      func_0x000107c61430(uVar3,2);
      if ((byte)uVar8 != 0) goto LAB_102741178;
    }
    else {
LAB_1027412a4:
      func_0x000107c61434(uVar3);
      func_0x000107c602f0(&bStack_81,FUN_1027417b0,auStack_80,uVar8,uVar3,PTR___sSbN_11034dd40);
      func_0x000107c61430(uVar3,2);
      if ((bStack_81 & 1) == 0) goto LAB_102741178;
    }
    uVar14 = 0;
    lVar5 = *(long *)(param_2 + 0x10);
    uVar11 = uStack_58;
  }
  if (lVar5 == 0) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    uVar8 = 0;
    lVar5 = -0x2fffffffffffffe3;
    func_0x000100029284();
    if ((uVar8 & 1) == 0) {
      uVar12 = 0;
      uVar10 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar5 * 0x10);
      uVar12 = *puVar1;
      uVar10 = puVar1[1];
      func_0x000107c61434(uVar10);
    }
    func_0x000107c6142c(param_2);
  }
LAB_10274122c:
  *param_1 = uVar7;
  param_1[1] = uVar6;
  param_1[2] = uVar12;
  param_1[3] = uVar10;
  param_1[4] = uVar13;
  param_1[5] = uVar11;
  *(undefined1 *)(param_1 + 6) = uVar14;
  return;
}



/* Entry: 1027412f4; end: 1027416f3;  */

void FUN_1027412f4(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *pcVar10;
  long unaff_x21;
  long lVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  plVar4 = param_2;
  FUN_102740998();
  if (plVar4 == (long *)0x0) {
    FUN_1027408ac();
    plVar3 = plVar4;
    FUN_10273fdac();
    func_0x000107c613f8(plVar4,plVar3,0,0);
    lVar6 = 0x112ebb848;
    func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
    pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    uVar8 = 2;
    goto LAB_1027414a0;
  }
  plVar3 = plVar4;
  func_0x000107c5edc8();
  plVar5 = plVar3;
  func_0x000102788d18();
  if (param_3 == 0) {
    func_0x000102788d24();
LAB_102741424:
    func_0x000107c6142c(plVar4);
    plVar4 = (long *)0x0;
    FUN_1027408ac(0);
    plVar3 = plVar4;
    FUN_10273fdac();
    func_0x000107c613f8(plVar4,plVar3,0,0);
    lVar6 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(plVar3,param_2,lVar6);
    lVar6 = 0x112ebb848;
    func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
    pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    uVar8 = 0;
LAB_1027414a0:
    (*pcVar10)(plVar3,uVar8,2,lVar6);
    func_0x000107c61654();
    return;
  }
  plVar2 = (long *)*plVar5;
  if ((plVar2 == plVar3 && param_3 == plVar5[1]) ||
     (func_0x000107c605b8(plVar2,plVar5[1],plVar3,param_3,0), ((ulong)plVar2 & 1) != 0)) {
    func_0x000107c6142c(param_3);
    FUN_102740e38(&uStack_98,plVar4,param_2);
    if (unaff_x21 == 0) {
      func_0x000107c6142c(plVar4);
      uVar8 = uStack_98;
      uVar7 = uStack_90;
      goto LAB_1027413b8;
    }
    goto LAB_10274162c;
  }
  func_0x000102788d24();
  plVar5 = (long *)*plVar2;
  if ((plVar5 == plVar3) && (param_3 == plVar2[1])) {
    func_0x000107c6142c(param_3);
  }
  else {
    func_0x000107c605b8(plVar5,plVar2[1],plVar3,param_3,0);
    func_0x000107c6142c(param_3);
    if (((ulong)plVar5 & 1) == 0) goto LAB_102741424;
  }
  if (plVar4[2] != 0) {
    func_0x000107c61434(plVar4);
    lVar6 = 0x495255;
    uVar9 = 0;
    func_0x000100029284();
    if ((uVar9 & 1) != 0) {
      puVar1 = (undefined8 *)(plVar4[7] + lVar6 * 0x10);
      uVar8 = *puVar1;
      uVar7 = puVar1[1];
      func_0x000107c61434(uVar7);
      func_0x000107c6142c(plVar4);
      if (plVar4[2] == 0) {
        uStack_b0 = 0;
        uStack_a8 = 0;
LAB_1027416b8:
        uStack_c0 = 0;
        uStack_b8 = 0;
      }
      else {
        lVar11 = 0x4954505952434e45;
        func_0x000107c61434(plVar4);
        uVar9 = 0xee0059454b5f4e4f;
        lVar6 = lVar11;
        func_0x000100029284();
        if ((uVar9 & 1) == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          puVar1 = (undefined8 *)(plVar4[7] + lVar6 * 0x10);
          uStack_a8 = *puVar1;
          uStack_b0 = puVar1[1];
          func_0x000107c61434();
        }
        func_0x000107c6142c(plVar4);
        if (plVar4[2] == 0) goto LAB_1027416b8;
        func_0x000107c61434(plVar4);
        uVar9 = 0xed000056495f4e4f;
        func_0x000100029284();
        if ((uVar9 & 1) == 0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          puVar1 = (undefined8 *)(plVar4[7] + lVar11 * 0x10);
          uStack_b8 = *puVar1;
          uStack_c0 = puVar1[1];
          func_0x000107c61434();
        }
        func_0x000107c6142c(plVar4);
      }
      func_0x000107c6142c(plVar4);
      uStack_68 = 0x80;
      uStack_80 = uStack_b0;
      uStack_88 = uStack_a8;
      uStack_78 = uStack_b8;
      uStack_70 = uStack_c0;
LAB_1027413b8:
      *param_1 = uVar8;
      param_1[1] = uVar7;
      param_1[2] = uStack_88;
      param_1[3] = uStack_80;
      param_1[4] = uStack_78;
      param_1[5] = uStack_70;
      *(undefined1 *)(param_1 + 6) = uStack_68;
      return;
    }
    func_0x000107c6142c(plVar4);
  }
  uVar7 = 0;
  FUN_1027408ac(0);
  uVar8 = uVar7;
  FUN_10273fdac();
  func_0x000107c613f8(uVar7,uVar8,0,0);
  lVar6 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(uVar8,param_2,lVar6);
  lVar6 = 0x112ebb848;
  func_0x0001000285a8(0x112ebb848,&UNK_10dad4590);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar8,0,2,lVar6);
  func_0x000107c61654();
LAB_10274162c:
  func_0x000107c6142c(plVar4);
  return;
}



/* Entry: 1027416f4; end: 102741703;  */

undefined1  [16] FUN_1027416f4(void)

{
  return ZEXT816(0x110542850);
}



/* Entry: 102741704; end: 102741737;  */

void FUN_102741704(void)

{
  func_0x000107c61168(&PTR_PTR_112ebb918);
  return;
}



/* Entry: 102741738; end: 1027417af;  */

void FUN_102741738(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb4(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1027417b0; end: 1027417c3;  */

void FUN_1027417b0(void)

{
  func_0x000102741724();
  return;
}



/* Entry: 1027417c4; end: 1027418ff;  */

undefined8 FUN_1027417c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010090a350(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102741900; end: 102741947;  */

void FUN_102741900(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102741948; end: 102741973;  */

undefined ** FUN_102741948(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 102741974; end: 102741a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102741974(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000107c610f8();
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ebba60) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102741a14; end: 102741a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102741a14(void)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)
            (*(undefined8 *)((long)unaff_x20 + _DAT_112ebba60),*(undefined8 *)(uVar1 + 0x50),
             *(undefined8 *)(uVar1 + 0x58),*(undefined8 *)(uVar1 + 0x60));
  return;
}



/* Entry: 102741a40; end: 102741a67;  */

void FUN_102741a40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102741a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102741a68; end: 102741a87;  */

void FUN_102741a68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerCancellableTask.ComposerCancellableTask",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102741af8);
  (*pcVar1)();
}



/* Entry: 102741a88; end: 102741abb;  */

void FUN_102741a88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102741abc; end: 102741acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102741abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebba60));
  return;
}



/* Entry: 102741acc; end: 102741af7;  */

void FUN_102741acc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerCancellableTask.ComposerCancellableTask",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102741af8);
  (*pcVar1)();
}



/* Entry: 102741af8; end: 102741afb;  */

void FUN_102741af8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102741afc; end: 102741b3f;  */

void FUN_102741afc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x68);
  return;
}



/* Entry: 102741b40; end: 102741b4b;  */

void FUN_102741b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6f102c);
  return;
}



/* Entry: 102741b4c; end: 102741def;  */

/* WARNING: Possible PIC construction at 0x000102741cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102741dc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102741db4) */
/* WARNING: Removing unreachable block (ram,0x000102741da4) */
/* WARNING: Removing unreachable block (ram,0x000102741d94) */
/* WARNING: Removing unreachable block (ram,0x000102741d84) */
/* WARNING: Removing unreachable block (ram,0x000102741d74) */
/* WARNING: Removing unreachable block (ram,0x000102741d64) */
/* WARNING: Removing unreachable block (ram,0x000102741d54) */
/* WARNING: Removing unreachable block (ram,0x000102741d44) */
/* WARNING: Removing unreachable block (ram,0x000102741d34) */
/* WARNING: Removing unreachable block (ram,0x000102741d24) */
/* WARNING: Removing unreachable block (ram,0x000102741d14) */
/* WARNING: Removing unreachable block (ram,0x000102741d04) */
/* WARNING: Removing unreachable block (ram,0x000102741cf4) */
/* WARNING: Removing unreachable block (ram,0x000102741ce4) */
/* WARNING: Removing unreachable block (ram,0x000102741cd4) */
/* WARNING: Removing unreachable block (ram,0x000102741dc4) */

void FUN_102741b4c(undefined8 *param_1)

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
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  code *pcVar34;
  long unaff_x20;
  undefined8 uVar35;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar33 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar26 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar27 = *(undefined8 *)(unaff_x20 + 200);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar28 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar29 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar30 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar31 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar35 = *(undefined8 *)(unaff_x20 + 0x110);
  puVar32 = &UNK_110542ba8;
  func_0x000107c613fc(&UNK_110542ba8,0x118,7);
  *(undefined8 *)(puVar32 + 0x10) = uVar1;
  *(undefined8 *)(puVar32 + 0x18) = uVar16;
  *(undefined8 *)(puVar32 + 0x20) = uVar33;
  *(undefined8 *)(puVar32 + 0x28) = uVar17;
  *(undefined8 *)(puVar32 + 0x30) = uVar2;
  *(undefined8 *)(puVar32 + 0x38) = uVar18;
  *(undefined8 *)(puVar32 + 0x40) = uVar3;
  *(undefined8 *)(puVar32 + 0x48) = uVar19;
  *(undefined8 *)(puVar32 + 0x50) = uVar4;
  *(undefined8 *)(puVar32 + 0x58) = uVar20;
  *(undefined8 *)(puVar32 + 0x60) = uVar5;
  *(undefined8 *)(puVar32 + 0x68) = uVar21;
  *(undefined8 *)(puVar32 + 0x70) = uVar6;
  *(undefined8 *)(puVar32 + 0x78) = uVar22;
  *(undefined8 *)(puVar32 + 0x80) = uVar7;
  *(undefined8 *)(puVar32 + 0x88) = uVar23;
  *(undefined8 *)(puVar32 + 0x90) = uVar8;
  *(undefined8 *)(puVar32 + 0x98) = uVar24;
  *(undefined8 *)(puVar32 + 0xa0) = uVar9;
  *(undefined8 *)(puVar32 + 0xa8) = uVar25;
  *(undefined8 *)(puVar32 + 0xb0) = uVar10;
  *(undefined8 *)(puVar32 + 0xb8) = uVar26;
  *(undefined8 *)(puVar32 + 0xc0) = uVar11;
  *(undefined8 *)(puVar32 + 200) = uVar27;
  *(undefined8 *)(puVar32 + 0xd0) = uVar12;
  *(undefined8 *)(puVar32 + 0xd8) = uVar28;
  *(undefined8 *)(puVar32 + 0xe0) = uVar13;
  *(undefined8 *)(puVar32 + 0xe8) = uVar29;
  *(undefined8 *)(puVar32 + 0xf0) = uVar14;
  *(undefined8 *)(puVar32 + 0xf8) = uVar30;
  *(undefined8 *)(puVar32 + 0x100) = uVar15;
  *(undefined8 *)(puVar32 + 0x108) = uVar31;
  *(undefined8 *)(puVar32 + 0x110) = uVar35;
  uVar33 = 0x112ebba70;
  func_0x0001000285a8(0x112ebba70,&UNK_10dad4820);
  func_0x000107c613fc();
  pcVar34 = FUN_102741f24;
  func_0x0001000841fc(FUN_102741f24,puVar32,uVar33);
  func_0x000100084214(&UNK_10dad47f0,0x2d,2);
  *param_1 = pcVar34;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102741df0; end: 102741dff;  */

undefined1  [16] FUN_102741df0(void)

{
  return ZEXT816(0x110542b88);
}



/* Entry: 102741e00; end: 102741f23;  */

void FUN_102741e00(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102741f24; end: 102742653;  */

void FUN_102741f24(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
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
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar31 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar32 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar28 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar23 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar33 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar29 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar24 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar34 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar30 = *(undefined8 *)(unaff_x20 + 200);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar26 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x110);
  func_0x0001000285a8(0x112ebba78,&UNK_10dad4828);
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  puVar11 = &uStack_80;
  func_0x0001000838ec(puVar11);
  FUN_102754434();
  func_0x000100082720("MemoriesValdiIdentityServiceImplServiceProvider",0x2f,2);
  FUN_102754cc8();
  func_0x000100082720("MemoriesValdiMeoHttpServiceImplServiceProvider",0x2e,2);
  func_0x00010274211c(uVar14,uVar6,uVar1,puVar11,uVar7,uVar2,uVar8,uVar16,uVar27,uVar31,uVar17,
                      uVar22,uVar3,uVar12,uVar9,uVar13,uVar28,uVar32,uVar18,uVar23,uVar29,uVar33,
                      uVar19,uVar24,uVar30,uVar34,uVar20,uVar25,uVar21,uVar26,uVar4);
  func_0x000100082720("MemTwoLandingPageValdiComponentScopedFactoryServiceProvider",0x3b,2);
  FUN_1027567fc(uVar15,uVar5,uVar10,puVar11,uVar14);
  func_0x0001002acff8("MemTwoLandingPageViewControllerEntryPointProvider",0x31,2);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(puVar11);
  *param_1 = uVar15;
  return;
}



/* Entry: 102742654; end: 102742663;  */

undefined1  [16] FUN_102742654(void)

{
  return ZEXT816(0x110542cd0);
}



/* Entry: 102742664; end: 102742777;  */

void FUN_102742664(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102742778; end: 102742b77;  */

void FUN_102742778(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  char *pcVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  char *pcVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  long unaff_x20;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar22 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar28 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar42 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar41 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar39 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar37 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar40 = *(undefined8 *)(unaff_x20 + 200);
  uVar38 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar36 = *(undefined8 *)(unaff_x20 + 0x100);
  func_0x0001000285a8(0x112ebba90,&UNK_10dad4888);
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  puVar21 = &uStack_90;
  func_0x0001000838ec();
  FUN_102751824();
  func_0x000100082720("MemTwoCreateVideoSnapDocLoaderServiceProvider",0x2d,2);
  FUN_10274ee9c();
  func_0x000100082720("MemTwoLandingPageBackupServiceProviderImplServiceProvider",0x39,2);
  puVar24 = puVar21;
  FUN_10274dfe0(puVar21,uVar1);
  pcVar25 = "MemoriesPlusBillingManagementPresenterServiceProvider";
  func_0x000100082720("MemoriesPlusBillingManagementPresenterServiceProvider",0x35,2);
  FUN_10274f0e4();
  func_0x000100082720("MemTwoLandingPageEmptyStateControllerImplServiceProvider",0x38,2);
  FUN_102754344();
  func_0x000100082720("MemTwoLandingPageQuickCutScopeExposerServiceProvider",0x34,2);
  puVar27 = puVar21;
  FUN_10274e50c(puVar21,uVar2,uVar11);
  func_0x000100082720("MemoriesPlusStoragePaywallPresenterServiceProvider",0x32,2);
  FUN_10274f760(uVar28);
  func_0x000100082720("MemTwoLandingPageValdiCameraRollProviderServiceProvider",0x37,2);
  puVar29 = puVar21;
  FUN_102742b78(puVar21,uVar12,uVar3);
  func_0x000100082720("MemTwoLandingPageOperaLauncherServiceProvider",0x2d,2);
  puVar30 = puVar21;
  FUN_102746c68(puVar21,uVar3,uVar13,uVar4);
  func_0x000100082720("MemTwoLandingPageSendToLauncherServiceProvider",0x2e,2);
  puVar31 = puVar21;
  FUN_102748bd8(puVar21,uVar14,uVar5,uVar3,uVar15);
  pcVar32 = "MemTwoLandingPageSnapDocSendServiceProviderImplServiceProvider";
  func_0x000100082720("MemTwoLandingPageSnapDocSendServiceProviderImplServiceProvider",0x3e,2);
  FUN_1027517a4();
  func_0x000100082720("MemTwoLandingPageValdiViewModelServiceProvider",0x2e,2);
  puVar33 = puVar21;
  FUN_10275378c(puVar21,uVar26,uVar22);
  func_0x000100082720("MemTwoLandingPageQuickCutLauncherServiceProvider",0x30,2);
  puVar34 = puVar21;
  FUN_10274fd28(puVar21,puVar33,uVar6,uVar23,puVar24,uVar16,uVar28,uVar7,uVar17,pcVar25,uVar41,
                uVar42,uVar37,uVar39,uVar38,uVar40,uVar8,puVar29,uVar18,uVar9,puVar30,uVar19,puVar31
                ,uVar10,puVar27,uVar20);
  func_0x000100082720("MemTwoLandingPageValdiContextServiceProvider",0x2c,2);
  puVar35 = puVar34;
  FUN_10274f8b4(puVar34,pcVar32,uVar36);
  func_0x000107c61574(puVar34);
  func_0x000107c61574(puVar33);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(puVar31);
  func_0x000107c61574(puVar30);
  func_0x000107c61574(puVar29);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(puVar27);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(puVar24);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(puVar21);
  func_0x000100082720("MemTwoLandingPageValdiComponentEntryPointProvider",0x31,2);
  *param_1 = puVar35;
  return;
}



/* Entry: 102742b78; end: 102742ca7;  */

void FUN_102742b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebba98,&UNK_10dad48c0);
  puVar1 = &UNK_110542dc0;
  func_0x000107c613fc(&UNK_110542dc0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102742ca8,puVar1);
  return;
}



/* Entry: 102742ca8; end: 102742cb3;  */

void FUN_102742ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1027434dc();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  uVar2 = uVar1;
  FUN_102743374(uVar1,uStack_48,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(uVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 102742cb4; end: 102742d1b;  */

undefined8 FUN_102742cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_102743374(param_1,param_2,param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 102742d1c; end: 102742d33;  */

void FUN_102742d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102742d34,0,0);
  return;
}



/* Entry: 102742d34; end: 102742d9b;  */

void FUN_102742d34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102742d9c,uVar1,uVar2);
  return;
}



/* Entry: 102742d9c; end: 102742dd7;  */

void FUN_102742d9c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  FUN_102742dd8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102742dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102742dd8; end: 1027430a7;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102742dd8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long alStack_c0 [9];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x000100371f10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000100371f48();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar3 = _DAT_112ebbac0;
  puVar11 = (undefined8 *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + _DAT_112ebbac0,auStack_78,0,0);
  func_0x0001027435e4(unaff_x20 + lVar3,alStack_c0 + 4);
  func_0x00010274359c(alStack_c0 + 4);
  if (alStack_c0[7] == 0) {
    lVar6 = unaff_x20 + _DAT_112ebbab0;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar7 = param_1;
      func_0x000107c5b69c();
      func_0x000107c61180();
      if (lVar7 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar7;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
      }
      func_0x000107c5eea0((long)puVar11 + (long)*(int *)(lVar5 + 0x28));
      puVar11[1] = 0x3a;
      *puVar11 = 4;
      puVar11[3] = 7;
      puVar11[2] = 1;
      puVar11[5] = 0x37;
      puVar11[4] = 0;
      *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar5 + 0x2c)) = 0x6c;
      func_0x000100083b20(alStack_c0 + 4);
      lVar7 = 0;
      FUN_102744a1c();
      lVar5 = lVar7;
      func_0x000107c613fc();
      *(long *)(lVar5 + 0x10) = param_1;
      FUN_102743634(alStack_c0 + 4,lVar5 + 0x18);
      FUN_10274364c(puVar11,lVar9);
      plVar1 = (long *)(lVar9 + *(int *)(lVar4 + 0x14));
      plVar1[3] = lVar7;
      plVar1[4] = (long)&PTR_DAT_110542e70;
      *plVar1 = lVar5;
      lVar5 = unaff_x20 + _DAT_112ebbab8;
      func_0x000107c61618();
      puVar8 = &UNK_110542e30;
      func_0x000107c613fc(&UNK_110542e30,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      *(long *)(lVar9 + *(int *)(lVar4 + 0x18)) = lVar6;
      *(long *)(lVar9 + *(int *)(lVar4 + 0x1c)) = lVar5;
      *(long *)(lVar9 + *(int *)(lVar4 + 0x20)) = lVar12;
      puVar2 = (undefined8 *)(lVar9 + *(int *)(lVar4 + 0x24));
      *puVar2 = FUN_102743690;
      puVar2[1] = puVar8;
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ebbaa0);
      func_0x000107c61174(param_1);
      func_0x000107c6157c(uVar10);
      func_0x00010008a7c8(alStack_c0 + 3,lVar9);
      func_0x000107c61574(uVar10);
      func_0x0001048580f8(alStack_c0 + 4);
      func_0x000107c61574(alStack_c0[3]);
      FUN_102743698(puVar11,&SUB_100371f48);
      FUN_102743698(lVar9,&SUB_100371f10);
      func_0x000107c61428(unaff_x20 + lVar3,alStack_c0,0x21,0);
      func_0x0001027436d4(alStack_c0 + 4,unaff_x20 + lVar3);
      func_0x000107c614a8(alStack_c0);
    }
  }
  return;
}



/* Entry: 1027430a8; end: 102743173; -[_TtC44MemTwoLandingPageOperaLauncherImplementation30MemTwoLandingPageOperaLauncher launchWithParams:] */

/* WARNING: Possible PIC construction at 0x000102743158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010274315c) */

void FUN_1027430a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110542e08;
  func_0x000107c613fc(&UNK_110542e08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar2 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad4950,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102743174; end: 1027431ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102743174(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ebbac0;
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c61428(param_1 + _DAT_112ebbac0,auStack_78,0x21,0);
    func_0x0001027436d4(&uStack_60,param_1 + lVar1);
    func_0x000107c614a8(auStack_78);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102743200; end: 10274325f; -[_TtC44MemTwoLandingPageOperaLauncherImplementation30MemTwoLandingPageOperaLauncher init] */

void FUN_102743200(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoLandingPageOperaLauncherImplementation.MemTwoLandingPageOperaLauncher",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10274322c);
  (*pcVar1)();
}



/* Entry: 102743260; end: 1027432c7; -[_TtC44MemTwoLandingPageOperaLauncherImplementation30MemTwoLandingPageOperaLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102743260(long param_1)

{
  long lVar1;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebbaa0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebbaa8));
  func_0x000100d03698(param_1 + _DAT_112ebbab0);
  func_0x000100d03698(param_1 + _DAT_112ebbab8);
  param_1 = param_1 + _DAT_112ebbac0;
  lVar1 = 0x112ebbaf0;
  func_0x0001000285a8(0x112ebbaf0,&UNK_10dad4958);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1027432c8; end: 10274334b;  */

uint FUN_1027432c8(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  func_0x000107c5faec();
  plVar3 = param_2;
  func_0x000107c5faec();
  if (lVar2 == lVar4 && param_2 == plVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(lVar2,param_2,lVar4,plVar3,0);
    uVar1 = (uint)lVar2;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(plVar3);
  return uVar1 & 1;
}



/* Entry: 10274334c; end: 102743373;  */

void FUN_10274334c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 102743374; end: 1027434cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102743374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ebbab0;
  func_0x000107c61614(unaff_x20 + _DAT_112ebbab0,0);
  lVar3 = _DAT_112ebbab8;
  func_0x000107c61614(unaff_x20 + _DAT_112ebbab8,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebbac0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebbaa0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebbaa8) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000100083b20(&uStack_70);
  uVar4 = uStack_70;
  func_0x000107c61170(uStack_68);
  func_0x000107c615e8(uStack_60);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61604(unaff_x20 + lVar2,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&uStack_70);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_70);
  uVar4 = uStack_60;
  func_0x000107c41408(uStack_60);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_60);
  func_0x000107c61604(unaff_x20 + lVar3,uVar4);
  func_0x000107c615e8(uVar4);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027434cc; end: 1027434db;  */

undefined1  [16] FUN_1027434cc(void)

{
  return ZEXT816(0x110542de8);
}



/* Entry: 1027434dc; end: 1027434fb;  */

void FUN_1027434dc(void)

{
  func_0x000107c61168(&PTR_PTR_11285ea88);
  return;
}



/* Entry: 1027434fc; end: 10274355f;  */

void FUN_1027434fc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102743560;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102742d34,0,0);
  return;
}



/* Entry: 102743560; end: 10274359b;  */

void FUN_102743560(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102743598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274359c; end: 102743633;  */

undefined8 FUN_10274359c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ebbaf0;
  func_0x0001000285a8(0x112ebbaf0,&UNK_10dad4958);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102743634; end: 10274364b;  */

undefined8 * FUN_102743634(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10274364c; end: 10274368f;  */

undefined8 FUN_10274364c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100371f48();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102743690; end: 102743697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102743690(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ebbac0;
  if (lVar2 != 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c61428(lVar2 + _DAT_112ebbac0,auStack_78,0x21,0);
    func_0x0001027436d4(&uStack_60,lVar2 + lVar1);
    func_0x000107c614a8(auStack_78);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102743698; end: 102743723;  */

undefined8 FUN_102743698(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102743724; end: 102743773;  */

long FUN_102743724(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_102743634(param_2,unaff_x20 + 0x18);
  return unaff_x20;
}



/* Entry: 102743774; end: 1027437df;  */

void FUN_102743774(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = *unaff_x20;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027437e0,0,0);
  return;
}



/* Entry: 1027437e0; end: 102743967;  */

void FUN_1027437e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x22;
  long lVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar14 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(lVar14 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  func_0x000107c4e9c8();
  func_0x000107c61180();
  uVar5 = 0x112ebbaf8;
  func_0x0001000285a8(0x112ebbaf8,&UNK_10dad4970);
  uVar6 = uVar4;
  func_0x000107c5fc54(uVar4,uVar5);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  func_0x000107c61170(uVar4);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  lVar7 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar2,1,1,lVar7);
  FUN_102743bc4(lVar14 + 0x18,unaff_x22 + 0x10);
  puVar8 = &UNK_110542e58;
  func_0x000107c613fc(&UNK_110542e58,0x40,7);
  *(undefined **)(unaff_x22 + 0x70) = puVar8;
  FUN_102743634(unaff_x22 + 0x10,puVar8 + 0x10);
  *(undefined8 *)(puVar8 + 0x38) = uVar1;
  plVar9 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar9;
  lVar7 = 0x112ebbb00;
  func_0x0001000285a8(0x112ebbb00,&UNK_10dad4988);
  lVar10 = 0;
  FUN_102787194();
  lVar14 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar11 = lVar14;
  func_0x000102743cc0();
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102743968;
  puVar3 = PTR___ss5ErrorWS_11034ee10;
  lVar12 = *(long *)(unaff_x22 + 0x58);
  plVar9[0x16] = unaff_x22 + 0x38;
  plVar9[0x17] = unaff_x22 + 0x40;
  plVar9[0x14] = lVar11;
  plVar9[0x15] = (long)puVar3;
  plVar9[0x12] = lVar10;
  plVar9[0x13] = lVar14;
  plVar9[0x10] = (long)puVar8;
  plVar9[0x11] = lVar7;
  plVar9[0xe] = lVar12;
  plVar9[0xf] = (long)&UNK_10dad4980;
  lVar7 = *(long *)(lVar14 + -8);
  plVar9[0x18] = lVar7;
  uVar13 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x19] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 102743968; end: 102743a03;  */

void FUN_102743968(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x68);
    uVar2 = *(undefined8 *)(lVar4 + 0x70);
    *(undefined8 *)(lVar4 + 0x80) = param_1;
    FUN_102745e60(*(undefined8 *)(lVar4 + 0x58),0x112d453c8,&UNK_10d90ac60);
    func_0x000107c61574(uVar2);
    func_0x000107c6142c(uVar1);
    pcVar3 = FUN_102743a04;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar4 + 0x70));
    pcVar3 = FUN_102743a74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102743a04; end: 102743a73;  */

void FUN_102743a04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c4363c(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102743a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x80),uVar3,param_2);
  return;
}



/* Entry: 102743a74; end: 102743acf;  */

void FUN_102743a74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_102745e60(uVar1,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102743acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102743ad0; end: 102743b27;  */

void FUN_102743ad0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  lVar2 = *param_2;
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102743b28;
  plVar1[0x1a] = lVar2;
  plVar1[0x1b] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102745668,0,0);
  return;
}



/* Entry: 102743b28; end: 102743b93;  */

void FUN_102743b28(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x30) = param_1;
    pcVar1 = FUN_102743b94;
  }
  else {
    pcVar1 = (code *)0x102743bac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102743b94; end: 102743bc3;  */

void FUN_102743b94(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000102743ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102743bc4; end: 102743c07;  */

long FUN_102743bc4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102743c08; end: 102743c83;  */

void FUN_102743c08(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102743c84;
  plVar2[2] = param_1;
  plVar2[3] = param_3;
  lVar3 = *param_2;
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  plVar2[4] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102743b28;
  plVar1[0x1a] = lVar3;
  plVar1[0x1b] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102745668,0,0);
  return;
}



/* Entry: 102743c84; end: 102743d0f;  */

void FUN_102743c84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102743cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102743d10; end: 102743d5f;  */

void FUN_102743d10(undefined1 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102743d60;
  plVar1[0x12] = param_2;
  *(undefined1 *)(plVar1 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102746284,0,0);
  return;
}



/* Entry: 102743d60; end: 102743d9b;  */

void FUN_102743d60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102743d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102743d9c; end: 102743dc3;  */

void FUN_102743d9c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 102743dc4; end: 102743ddf;  */

void FUN_102743dc4(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined1 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102743de0,0,0);
  return;
}



/* Entry: 102743de0; end: 102743e87;  */

void FUN_102743de0(void)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x30);
  uVar4 = (ulong)*(byte *)(unaff_x22 + 0x50);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  (*pcVar1)();
  uVar2 = uVar4;
  func_0x000103edf4f0();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  func_0x000107c61170(uVar4);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102743e88;
                    /* WARNING: Could not recover jumptable at 0x000102743e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 102743e88; end: 102743edb;  */

void FUN_102743e88(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x51) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102743edc,0,0);
  return;
}



/* Entry: 102743edc; end: 102743f77;  */

void FUN_102743edc(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x51) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102743f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102743f78; end: 102744007;  */

long FUN_102743f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  func_0x000107c5ee20();
  func_0x000107c5fadc(param_3,param_4);
  (**(code **)(param_7 + 0x10))(param_7,param_1,param_3,param_5,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return param_7;
}



/* Entry: 102744008; end: 10274402b;  */

void FUN_102744008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274402c,0,0);
  return;
}



/* Entry: 10274402c; end: 102744103;  */

void FUN_10274402c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  (*pcVar1)(uVar6,uVar5,uVar2,uVar4,uVar7,uVar3);
  uVar7 = uVar6;
  func_0x000103edf4f0();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar7;
  func_0x000107c61170(uVar6);
  plVar8 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102744104;
                    /* WARNING: Could not recover jumptable at 0x000102744100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 102744104; end: 102744157;  */

void FUN_102744104(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744158,0,0);
  return;
}


