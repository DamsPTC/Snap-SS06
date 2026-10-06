/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10170d698; end: 10170d6e3;  */

void FUN_10170d698(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x240));
  (**(code **)(*(long *)(unaff_x22 + 0x1f0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1e8));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010170d6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10170d6e4; end: 10170d8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170d6e4(undefined1 *param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *apuStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar4 = 0x112dc3df8;
  apuStack_90[1] = (undefined1 *)param_4;
  apuStack_90[2] = param_1;
  func_0x0001000285a8(0x112dc3df8,&UNK_10d981408);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)apuStack_90 - extraout_x8;
  lVar4 = 0x112dc3810;
  func_0x0001000285a8(0x112dc3810,&UNK_10d981500);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = (undefined1 *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_112dc3df0;
  lVar10 = (long)puVar8 - extraout_x12;
  func_0x000107c61428(param_3 + _DAT_112dc3df0,auStack_78,0,0);
  FUN_101714bac(param_3 + lVar3,lVar9,0x112dc3df8,&UNK_10d981408);
  lVar3 = lVar9;
  (**(code **)(lVar7 + 0x30))(lVar9,1,lVar4);
  if ((int)lVar3 == 1) {
    uVar5 = 0x112dc3df8;
    puVar6 = &UNK_10d981408;
    lVar10 = lVar9;
  }
  else {
    func_0x000101714c3c(lVar9,lVar10,0x112dc3810,&UNK_10d981500);
    func_0x000107c5ee68(lVar10 + *(int *)(lVar4 + 0x30));
    if (param_2 < 900.0) {
      func_0x000101714c3c(lVar10,puVar8,0x112dc3810,&UNK_10d981500);
      uVar1 = *puVar8;
      iVar2 = *(int *)(lVar4 + 0x30);
      func_0x000107c6142c(*(undefined8 *)(puVar8 + *(int *)(lVar4 + 0x40)));
      *apuStack_90[2] = uVar1;
      lVar4 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(puVar8 + iVar2,lVar4);
      return;
    }
    uVar5 = 0x112dc3810;
    puVar6 = &UNK_10d981500;
  }
  func_0x000101714fec(lVar10,uVar5,puVar6);
  *apuStack_90[2] = 2;
  return;
}



/* Entry: 10170d8f8; end: 10170da1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170d8f8(long param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112dc3df8;
  func_0x0001000285a8(0x112dc3df8,&UNK_10d981408);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined1 *)((long)&uStack_80 - extraout_x8);
  lVar3 = 0x112dc3810;
  func_0x0001000285a8(0x112dc3810,&UNK_10d981500);
  iVar1 = *(int *)(lVar3 + 0x30);
  iVar2 = *(int *)(lVar3 + 0x40);
  *puVar4 = param_2;
  func_0x000107c5eea0(puVar4 + iVar1);
  *(undefined8 *)(puVar4 + iVar2) = param_3;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,0,1,lVar3);
  lVar3 = _DAT_112dc3df0;
  func_0x000107c61428(param_1 + _DAT_112dc3df0,auStack_78,0x21,0);
  func_0x000107c61434(param_3);
  func_0x000101714bf4(puVar4,param_1 + lVar3,0x112dc3df8,&UNK_10d981408);
  func_0x000107c614a8(auStack_78);
  return;
}



/* Entry: 10170da1c; end: 10170db47; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider isEligibleForProfileUpsellWithCompletionHandler:] */

void FUN_10170da1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fd9c0;
  func_0x000107c613fc(&UNK_1103fd9c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fd9e8;
  func_0x000107c613fc(&UNK_1103fd9e8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9815c8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fda10;
  func_0x000107c613fc(&UNK_1103fda10,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9815d0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d9815d8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10170db48; end: 10170db9f;  */

void FUN_10170db48(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = param_2;
  plVar4 = (long *)0x250;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10170dba0;
  plVar4[0x3b] = (long)param_2;
  plVar4[0x3c] = *param_2;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar4[0x3d] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x3e] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x3f] = uVar2;
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  plVar4[0x40] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x10170d234;
  plVar3[3] = (long)param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a600,0,0);
  return;
}



/* Entry: 10170dba0; end: 10170dc03;  */

void FUN_10170dba0(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  func_0x000107c61574(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,param_1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010170dc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 10170dc04; end: 10170dc1b;  */

void FUN_10170dc04(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170dc1c,0,0);
  return;
}



/* Entry: 10170dc1c; end: 10170df13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170dc1c(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x22;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 auStack_a8 [80];
  
  puVar14 = *(undefined **)(unaff_x22 + 0x18);
  uVar5 = 0x112d5d480;
  func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
  func_0x000100087bd4(unaff_x22 + 0x10,FUN_10171362c,puVar14,uVar5);
  lVar12 = *(long *)(unaff_x22 + 0x10);
  uVar5 = 0x112dc3dd8;
  func_0x0001000285a8(0x112dc3dd8,&UNK_10d9813b8);
  func_0x000100087bd4(unaff_x22 + 0x10,FUN_101713688,puVar14,uVar5);
  puVar17 = *(undefined **)(unaff_x22 + 0x10);
  if (*(long *)(lVar12 + 0x10) == 0) {
    func_0x000107c6142c(lVar12);
  }
  else {
    if ((ulong)puVar17 >> 0x3e == 0) {
      puVar15 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar15 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar17) {
        puVar15 = puVar17;
      }
      func_0x000107c60480();
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
    if (puVar15 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (((ulong)puVar17 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10170deb4);
            (*pcVar3)();
          }
          puVar6 = *(undefined **)(puVar17 + (long)puVar16 * 8 + 0x20);
          func_0x000107c61174();
          puVar10 = puVar14;
        }
        else {
          puVar6 = puVar16;
          puVar10 = puVar17;
          FUN_101711940(puVar16,puVar17,&PTR_PTR_1126a7a80,0x112dc3fe0);
        }
        bVar4 = SCARRY8((long)puVar16,1);
        puVar16 = puVar16 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10170deb0);
          (*pcVar3)();
        }
        puVar7 = puVar6;
        func_0x000107c40cb8();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5faec();
        puVar14 = puVar10;
        func_0x000107c61170(puVar7);
        if (*(long *)(lVar12 + 0x10) != 0) {
          func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar12 + 0x28));
          puVar9 = auStack_a8;
          puVar14 = puVar8;
          func_0x000107c5fb58(puVar9,puVar8,puVar10);
          func_0x000107c606a8();
          uVar11 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          uVar13 = (ulong)puVar9 & (uVar11 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar12 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
            do {
              plVar1 = (long *)(*(long *)(lVar12 + 0x30) + uVar13 * 0x10);
              puVar7 = (undefined *)*plVar1;
              puVar14 = (undefined *)plVar1[1];
              if ((puVar7 == puVar8 && puVar14 == puVar10) ||
                 (func_0x000107c605b8(puVar7,puVar14,puVar8,puVar10,0), ((ulong)puVar7 & 1) != 0)) {
                func_0x000107c6142c(puVar10);
                func_0x000107c61170(puVar6);
                goto LAB_10170dd18;
              }
              uVar13 = uVar13 + 1 & ~uVar11;
            } while ((*(ulong *)(lVar12 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c(puVar10);
        puVar10 = puVar2;
        func_0x000107c61558();
        if (((ulong)puVar10 & 1) == 0) {
          puVar14 = (undefined *)(*(long *)(puVar2 + 0x10) + 1);
          FUN_10171320c(0,puVar14,1);
        }
        uVar11 = *(ulong *)(puVar2 + 0x10);
        puVar10 = (undefined *)(uVar11 + 1);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
          puVar14 = puVar10;
          FUN_10171320c(1 < *(ulong *)(puVar2 + 0x18),puVar10,1);
        }
        *(undefined **)(puVar2 + 0x10) = puVar10;
        *(undefined **)(puVar2 + uVar11 * 8 + 0x20) = puVar6;
LAB_10170dd18:
      } while (puVar16 != puVar15);
    }
    func_0x000107c6142c(puVar17);
    func_0x000107c6142c(lVar12);
    puVar17 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010170df10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar17);
  return;
}



/* Entry: 10170df14; end: 10170dfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170df14(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  param_2 = param_2 + _DAT_112dc3df0;
  func_0x000107c61428(param_2,auStack_48,0,0);
  lVar1 = 0x112dc3810;
  func_0x0001000285a8(0x112dc3810,&UNK_10d981500);
  lVar2 = param_2;
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_2,1,lVar1);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)lVar2 == 0) {
    puVar3 = *(undefined **)(param_2 + *(int *)(lVar1 + 0x40));
    func_0x000107c61434();
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10170dfb8; end: 10170e0e3; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider cachedProfileUpsellCreatorsWithCompletionHandler:] */

void FUN_10170dfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fd948;
  func_0x000107c613fc(&UNK_1103fd948,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fd970;
  func_0x000107c613fc(&UNK_1103fd970,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9815a8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fd998;
  func_0x000107c613fc(&UNK_1103fd998,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9815b0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d9815b8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10170e0e4; end: 10170e13b;  */

void FUN_10170e0e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x20;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10170e13c;
  plVar1[3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170dc1c,0,0);
  return;
}



/* Entry: 10170e13c; end: 10170e1d7;  */

void FUN_10170e13c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x20));
  func_0x000107c61574(uVar2);
  uVar1 = 0;
  FUN_101714e68(0,0x112dc3fe0,&PTR_PTR_1126a7a80);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010170e1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 10170e1d8; end: 10170e2ef;  */

void FUN_10170e1d8(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_58 [8];
  long lVar4;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  iVar2 = (int)lVar4;
  FUN_101709dc8();
  iVar1 = 6;
  if ((param_2 & 0xff) != 1) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0) {
    func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    FUN_10170cbe0();
    uVar5 = 0x112dc3de0;
    func_0x0001000285a8(0x112dc3de0,&UNK_10d9813c0);
    func_0x000100087bd4(auStack_58,0x1017136a0,auStack_a0,uVar5);
    (**(code **)(lVar6 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  }
  else {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  return;
}



/* Entry: 10170e2f0; end: 10170e517;  */

void FUN_10170e2f0(undefined8 *param_1,double param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 auStack_90 [8];
  undefined8 *puStack_88;
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112dc3840;
  dVar9 = param_2;
  puStack_88 = param_1;
  func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_00;
  func_0x000107c61428(param_3 + 0x78,auStack_78,0x20,0);
  lVar4 = *(long *)(param_3 + 0x78);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_10170e4c4:
    func_0x000107c614a8(auStack_78);
  }
  else {
    func_0x000107c61434(lVar4);
    func_0x000100029284(param_4);
    if ((param_5 & 1) == 0) {
      func_0x000107c6142c(lVar4);
      goto LAB_10170e4c4;
    }
    FUN_101714bac(*(long *)(lVar4 + 0x38) + *(long *)(lVar5 + 0x48) * param_4,lVar8,0x112dc3840,
                  &UNK_10d980f60);
    func_0x000101714c3c(lVar8,lVar7,0x112dc3840,&UNK_10d980f60);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(lVar4);
    func_0x000107c5ee68(lVar7 + *(int *)(lVar2 + 0x30));
    if (dVar9 < param_2) {
      FUN_101714bac(lVar7,puVar6,0x112dc3840,&UNK_10d980f60);
      iVar1 = *(int *)(lVar2 + 0x30);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      func_0x000101714fec(lVar7,0x112dc3840,&UNK_10d980f60);
      lVar2 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar6 + iVar1,lVar2);
      goto LAB_10170e4d0;
    }
    func_0x000101714fec(lVar7,0x112dc3840,&UNK_10d980f60);
  }
  puVar3 = (undefined *)0x0;
LAB_10170e4d0:
  *puStack_88 = puVar3;
  return;
}



/* Entry: 10170e518; end: 10170e577; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider cachedEligibilityFor:] */

void FUN_10170e518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_10170e1d8(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10170e578; end: 10170e7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170e578(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  long alStack_90 [2];
  long lStack_80;
  long lStack_68;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112dc3da8);
  func_0x0001000285a8(0x112d7e670,&UNK_10d9e4e40);
  lVar6 = param_1;
  func_0x000107c6048c();
  lVar14 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  if (uVar13 == 0) goto LAB_10170e634;
  do {
    uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar13 = uVar13 - 1 & uVar13;
    while( true ) {
      uVar9 = LZCOUNT(uVar9);
      uVar10 = uVar9 | lVar14 << 6;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
      uVar4 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + uVar10 * 8) + _DAT_113041e98);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      uVar12 = (uVar9 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
      *(ulong *)(lVar6 + 0x40 + uVar12) = *(ulong *)(lVar6 + 0x40 + uVar12) | 1L << (uVar9 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar7;
      puVar2[1] = uVar3;
      *(undefined1 *)(*(long *)(lVar6 + 0x38) + uVar10) = uVar4;
      if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10170e7bc);
        (*pcVar5)();
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
      func_0x000107c61434();
      if (uVar13 != 0) break;
LAB_10170e634:
      do {
        lVar1 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10170e7b8);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar1) {
          uVar7 = 0x112d5d480;
          lStack_80 = lVar8;
          func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
          func_0x000100087bd4(&lStack_68,FUN_10171502c,alStack_90,uVar7);
          func_0x000107c61574(lVar6);
          if (*(long *)(lStack_68 + 0x10) != 0) {
            lStack_80 = lStack_68;
            func_0x000100087bd4(0x101715044,alStack_90,PTR___sytN_11034f1b0 + 8);
          }
          func_0x000107c6142c(lStack_68);
          func_0x0001000285a8(0x112dc4028,&UNK_10d981710);
          func_0x000100087bd4(alStack_90,FUN_1017150d8);
          lVar14 = alStack_90[0];
          alStack_90[0] = param_1;
          func_0x0001007d6d78(alStack_90);
          func_0x000107c61574(lVar14);
          return;
        }
        uVar13 = ((ulong *)(param_1 + 0x40))[lVar1];
        lVar14 = lVar14 + 1;
      } while (uVar13 == 0);
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar14 = lVar1;
    }
  } while( true );
}



/* Entry: 10170e7bc; end: 10170ea4f;  */

void FUN_10170e7bc(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_78 [24];
  
  lVar16 = 0x112dc4000;
  func_0x0001000285a8(0x112dc4000,&UNK_10d9816c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffff60 + -extraout_x8;
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x38);
  func_0x000107c61434(param_1);
  lVar16 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar2 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                       lVar16 * 0x400);
      lVar6 = *plVar1;
      uVar2 = plVar1[1];
      func_0x000107c61428(param_2 + 0x78,auStack_78,0x21,0);
      uVar12 = *(undefined8 *)(param_2 + 0x78);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar12);
      uVar8 = uVar2;
      func_0x000100029284();
      func_0x000107c6142c(uVar12);
      if ((uVar8 & 1) == 0) {
        lVar6 = 0x112dc3840;
        func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar11,1,1,lVar6);
      }
      else {
        iVar5 = (int)*(undefined8 *)(param_2 + 0x78);
        func_0x000107c61558();
        lVar13 = *(long *)(param_2 + 0x78);
        *(undefined8 *)(param_2 + 0x78) = 0x8000000000000000;
        if (iVar5 == 0) {
          func_0x00010171233c();
        }
        func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar13 + 0x30) + lVar6 * 0x10 + 8));
        lVar14 = *(long *)(lVar13 + 0x38);
        lVar7 = 0x112dc3840;
        func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
        lVar10 = *(long *)(lVar7 + -8);
        func_0x000101714c3c(lVar14 + *(long *)(lVar10 + 0x48) * lVar6,puVar11,0x112dc3840,
                            &UNK_10d980f60);
        func_0x000101713024(lVar6,lVar13);
        uVar12 = *(undefined8 *)(param_2 + 0x78);
        *(long *)(param_2 + 0x78) = lVar13;
        func_0x000107c6142c(uVar12);
        (**(code **)(lVar10 + 0x38))(puVar11,0,1,lVar7);
      }
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(uVar2);
      func_0x000101714fec(puVar11,0x112dc4000,&UNK_10d9816c8);
    }
    bVar4 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar4) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
      func_0x000107c61574(param_1);
      return;
    }
    uVar15 = ((ulong *)(param_1 + 0x38))[lVar16];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10170ea50);
  (*pcVar3)();
}



/* Entry: 10170ea50; end: 10170eb3b;  */

bool FUN_10170ea50(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  
  lVar2 = *param_1;
  uVar4 = param_1[1];
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_10170eab8:
    cVar7 = '\x02';
    lVar5 = *(long *)(param_3 + 0x10);
  }
  else {
    func_0x000107c61434(param_2);
    lVar5 = lVar2;
    uVar3 = uVar4;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_10170eab8;
    }
    cVar7 = *(char *)(*(long *)(param_2 + 0x38) + lVar5);
    func_0x000107c6142c(param_2);
    lVar5 = *(long *)(param_3 + 0x10);
  }
  if (lVar5 != 0) {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      cVar6 = *(char *)(*(long *)(param_3 + 0x38) + lVar2);
      func_0x000107c6142c(param_3);
      goto LAB_10170eb00;
    }
    func_0x000107c6142c(param_3);
  }
  cVar6 = '\x02';
LAB_10170eb00:
  bVar1 = cVar6 != '\x02';
  if (cVar7 != '\x02') {
    bVar1 = cVar6 == '\x02' || cVar6 != cVar7;
  }
  return bVar1;
}



/* Entry: 10170eb3c; end: 10170ec8f;  */

/* WARNING: Possible PIC construction at 0x00010170ec60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010170ec64) */

void FUN_10170eb3c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  FUN_10170baf8();
  uVar2 = param_5;
  FUN_10171720c(param_5,param_6);
  if ((uVar2 & 1) != 0) {
    puVar3 = &UNK_1103fd720;
    func_0x000107c613fc(&UNK_1103fd720,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,puVar1);
    puVar1 = &UNK_1103fd748;
    func_0x000107c613fc(&UNK_1103fd748,0x70,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    *(undefined8 *)(puVar1 + 0x20) = param_4;
    *(undefined8 *)(puVar1 + 0x30) = 0xf000000000000000;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(ulong *)(puVar1 + 0x38) = param_5;
    *(undefined8 *)(puVar1 + 0x40) = param_6;
    *(undefined8 *)(puVar1 + 0x48) = param_8;
    *(undefined **)(puVar1 + 0x50) = param_1;
    *(undefined8 *)(puVar1 + 0x58) = param_2;
    puVar1[0x60] = param_9 & 1;
    *(undefined8 *)(puVar1 + 0x68) = param_7;
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61434(param_2);
    func_0x0001009548b0(0xcb,0,0x60,4,0,0,&UNK_10d9813c8,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10170ec90; end: 10170ee9b; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider restoreSubscriptionWithRetryWithCreatorId:productId:transactionId:maxRetryCount:source:isUserInitiatedPurchase:] */

/* WARNING: Possible PIC construction at 0x00010170ed38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010170ed3c) */

void FUN_10170ec90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c6157c(param_1);
  FUN_10170eb3c(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7,param_8);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10170ee9c; end: 10170ef5f; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider restoreSubscriptionFromTransactionWithRetryWithTransactionId:transactionJSON:maxRetryCount:source:isUserInitiatedPurchase:] */

void FUN_10170ee9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  uVar2 = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(uVar1);
  func_0x00010170ed68(param_3,param_2,param_4,uVar2,param_5,param_6,param_7);
  func_0x00010006c090(param_4,uVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10170ef60; end: 10170ef7b;  */

void FUN_10170ef60(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x31) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170ef7c,0,0);
  return;
}



/* Entry: 10170ef7c; end: 10170f043;  */

void FUN_10170ef7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x68);
  *(long *)(unaff_x22 + 0x20) = *(long *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined1 *)(unaff_x22 + 0x30) = *(undefined1 *)(unaff_x22 + 0x31);
  uVar2 = 0x112dc4030;
  func_0x0001000285a8(0x112dc4030,&UNK_10d981720);
  func_0x000100087bd4(unaff_x22 + 0x38,0x101714ec0,unaff_x22 + 0x10,uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x40);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar3;
  uVar2 = 0x112dc3fe8;
  func_0x0001000285a8(0x112dc3fe8,&UNK_10d981670);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10170f044;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0x48,uVar1,uVar2);
  return;
}



/* Entry: 10170f044; end: 10170f08b;  */

void FUN_10170f044(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170f08c,0,0);
  return;
}



/* Entry: 10170f08c; end: 10170f0ff;  */

void FUN_10170f08c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000100087bd4(FUN_101714edc,unaff_x22 + 0x50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010170f0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 10170f100; end: 10170f22b; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider syncSubscriptionsIfNecessaryWithCompletionHandler:] */

void FUN_10170f100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fd8d0;
  func_0x000107c613fc(&UNK_1103fd8d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fd8f8;
  func_0x000107c613fc(&UNK_1103fd8f8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981588;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fd920;
  func_0x000107c613fc(&UNK_1103fd920,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981590;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d981598,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10170f22c; end: 10170f283;  */

void FUN_10170f22c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x50;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10170f284;
  plVar1[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a1f0,0,0);
  return;
}



/* Entry: 10170f284; end: 10170f327;  */

void FUN_10170f284(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x20));
  func_0x000107c61574(uVar1);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000103fd7dd8(0);
    lVar2 = param_1;
    func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(param_1);
  }
  (**(code **)(*(long *)(lVar3 + 0x10) + 0x10))(*(long *)(lVar3 + 0x10),lVar2);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010170f324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 10170f328; end: 10170f483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170f328(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_48;
  
  if (*(char *)(param_2 + _DAT_112dc3e40) == '\x01') {
    *param_1 = *(long *)(param_2 + _DAT_112dc3e30);
    func_0x000107c61174();
  }
  else {
    *(undefined1 *)(param_2 + _DAT_112dc3e40) = 1;
    func_0x000100083b20(&lStack_48);
    lVar1 = lStack_48;
    func_0x000107c5cec4();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      FUN_101714e68(0,0x112dc4010,&PTR_PTR_1126a7a88);
      func_0x000107c614e8();
      uVar3 = 0xd00000000000001e;
      func_0x000107c5fadc(0xd00000000000001e,0x800000010efb91f0);
      lVar1 = lVar2;
      func_0x000107c5cec8();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(lVar2);
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)(param_2 + _DAT_112dc3e30);
        *(long *)(param_2 + _DAT_112dc3e30) = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c61170(uVar3);
        *param_1 = lVar1;
        return;
      }
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10170f484; end: 10170f65f;  */

void FUN_10170f484(ulong *param_1,long param_2,long param_3,char param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lStack_48;
  
  uVar7 = *(ulong *)(param_2 + 0x58);
  if (uVar7 != 0) {
    uVar5 = uVar7;
    func_0x000107c6157c();
    func_0x000107c615c8();
    if ((uVar5 & 1) == 0) {
      uVar5 = *(ulong *)(param_2 + 0x60);
      *param_1 = uVar7;
      goto LAB_10170f640;
    }
    func_0x000107c61574(uVar7);
  }
  if (param_4 == '\x01') {
    func_0x000100083b20(&lStack_48);
    lVar2 = lStack_48;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c40cf8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      FUN_101714e68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      lVar2 = 0;
      func_0x000107c60110();
    }
    param_3 = lVar2;
    func_0x000107c60668();
    func_0x000107c61170(lVar2);
  }
  puVar3 = &UNK_1103fd6f8;
  func_0x000107c613fc(&UNK_1103fd6f8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  puVar4 = &UNK_1103fdcb8;
  func_0x000107c613fc(&UNK_1103fdcb8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(long *)(puVar4 + 0x18) = param_3;
  uVar6 = 0x112dc3fe8;
  func_0x0001000285a8(0x112dc3fe8,&UNK_10d981670);
  uVar7 = 0xcb;
  func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10d981730,puVar4,uVar6);
  func_0x000107c61574(puVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(ulong *)(param_2 + 0x58) = uVar7;
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(uVar6);
  uVar5 = *(long *)(param_2 + 0x60) + 1;
  *(ulong *)(param_2 + 0x60) = uVar5;
  *param_1 = uVar7;
LAB_10170f640:
  param_1[1] = uVar5;
  return;
}



/* Entry: 10170f660; end: 10170f67f;  */

void FUN_10170f660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170f680,0,0);
  return;
}



/* Entry: 10170f680; end: 10170f727;  */

void FUN_10170f680(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x2c8);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x298,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x2d8) = lVar2;
  if (lVar2 != 0) {
    func_0x000100083b20(unaff_x22 + 0x2b0);
    lVar2 = *(long *)(unaff_x22 + 0x2b0);
    *(long *)(unaff_x22 + 0x2e0) = lVar2;
    plVar1 = (long *)0x1c0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2e8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10170f728;
    plVar1[0x2a] = *(long *)(unaff_x22 + 0x2d0);
    plVar1[0x2b] = lVar2;
    plVar1[0x29] = unaff_x22 + 0x250;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101719d6c,0,0);
    return;
  }
  **(undefined8 **)(unaff_x22 + 0x2c0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010170f724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170f728; end: 10170f78f;  */

void FUN_10170f728(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x2e0);
  *(long *)(lVar2 + 0x2f0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2e8));
  func_0x000107c61574(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10170f790;
  }
  else {
    pcVar1 = FUN_10170fc78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10170f790; end: 10170fc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170f790(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long unaff_x22;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar24 = unaff_x22 + 0x250;
  FUN_10170a8e0();
  FUN_10170ad04();
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1017054cc();
  puVar10 = *(undefined **)(unaff_x22 + 600);
  if (puVar10 != (undefined *)0x0) {
    func_0x000107c61434();
    puVar15 = puVar10;
  }
  lVar17 = *(long *)(puVar15 + 0x10);
  if (lVar17 == 0) {
LAB_10170fb24:
    func_0x000107c6142c(puVar15);
    func_0x000107c6142c(lVar24);
    puVar15 = puVar9;
    FUN_10170fd00();
    if (((ulong)puVar15 & 1) != 0) {
      func_0x000100083b20(unaff_x22 + 0x2b8);
      puVar10 = *(undefined **)(unaff_x22 + 0x2b8);
      puVar15 = puVar10;
      func_0x000107c4ec80();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = puVar15;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar10 != (undefined *)0x0) {
        uVar19 = 0;
        if (*(long *)(unaff_x22 + 600) != 0) {
          uVar19 = *(undefined8 *)(unaff_x22 + 0x250);
        }
        func_0x000107c6066c(uVar19);
        func_0x000107c53b0c(puVar10);
        func_0x000107c61170(uVar19);
        func_0x000107c61170();
        puVar15 = puVar10;
      }
    }
    lVar24 = *(long *)(unaff_x22 + 0x2d8);
    FUN_10170ad04();
    FUN_10170e578();
    uVar19 = *(undefined8 *)(lVar24 + 0x50);
    func_0x000107c6157c(uVar19);
    func_0x000103b68a38();
    func_0x000101714fec(unaff_x22 + 0x250,0x112dc4038,&UNK_10d981738);
    func_0x000107c61574(lVar24);
    func_0x000107c61574(uVar19);
    func_0x000107c6142c(puVar9);
    **(undefined8 **)(unaff_x22 + 0x2c0) = puVar15;
                    /* WARNING: Could not recover jumptable at 0x00010170fc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar20 = 0;
  lVar22 = 0x20;
  do {
    puVar1 = (undefined8 *)(puVar15 + lVar22);
    uVar27 = puVar1[1];
    uVar19 = *puVar1;
    uVar29 = puVar1[3];
    uVar28 = puVar1[2];
    uVar18 = puVar1[4];
    uVar31 = puVar1[7];
    uVar30 = puVar1[6];
    *(undefined8 *)(unaff_x22 + 0x38) = puVar1[5];
    *(undefined8 *)(unaff_x22 + 0x30) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar28;
    uVar27 = puVar1[9];
    uVar19 = puVar1[8];
    uVar29 = puVar1[0xb];
    uVar28 = puVar1[10];
    uVar18 = puVar1[0xc];
    uVar31 = puVar1[0xf];
    uVar30 = puVar1[0xe];
    *(undefined8 *)(unaff_x22 + 0x78) = puVar1[0xd];
    *(undefined8 *)(unaff_x22 + 0x70) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar28;
    uVar27 = puVar1[0x11];
    uVar19 = puVar1[0x10];
    uVar29 = puVar1[0x13];
    uVar28 = puVar1[0x12];
    uVar18 = puVar1[0x14];
    uVar31 = puVar1[0x17];
    uVar30 = puVar1[0x16];
    *(undefined8 *)(unaff_x22 + 0xb8) = puVar1[0x15];
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar18;
    *(undefined8 *)(unaff_x22 + 200) = uVar31;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar29;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar28;
    uVar3 = *(ulong *)(unaff_x22 + 0x10);
    uVar4 = *(ulong *)(unaff_x22 + 0x18);
    if (*(long *)(lVar24 + 0x10) == 0) {
      FUN_101714f7c(unaff_x22 + 0x10,unaff_x22 + 400);
LAB_10170f8e4:
      lVar26 = 0;
      lVar23 = 0;
    }
    else {
      FUN_101714f7c(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(lVar24);
      uVar11 = uVar3;
      uVar14 = uVar4;
      func_0x000100029284();
      if ((uVar14 & 1) == 0) {
        func_0x000107c6142c(lVar24);
        func_0x000107c6142c(uVar4);
        goto LAB_10170f8e4;
      }
      lVar12 = *(long *)(*(long *)(lVar24 + 0x38) + uVar11 * 8);
      func_0x000107c61174();
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(lVar24);
      lVar26 = *(long *)(lVar12 + _DAT_113041ec0);
      lVar23 = ((long *)(lVar12 + _DAT_113041ec0))[1];
      func_0x000107c61434(lVar23);
      func_0x000107c61170(lVar12);
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar12 = *(long *)(unaff_x22 + 0x68);
    lVar25 = *(long *)(unaff_x22 + 0x70);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar29);
    func_0x000107c61434(uVar19);
    func_0x000107c61434(lVar25);
    lVar13 = lVar12;
    func_0x000107c5fb5c(lVar12,lVar25);
    if (lVar13 < 1) {
      func_0x000107c6142c(lVar25);
      func_0x000107c61434(lVar23);
      lVar25 = lVar23;
      lVar12 = lVar26;
    }
    uVar7 = *(undefined1 *)(unaff_x22 + 0x30);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000103fd7dd8(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar6);
    uVar11 = uVar3;
    func_0x000103fd7a10(uVar3,uVar4,uVar27,uVar29,uVar7,uVar30,uVar5,uVar18,uVar19,uVar28,lVar12,
                        lVar25,uVar31,uVar6);
    func_0x000107c6142c(lVar23);
    func_0x000107c61174();
    puVar10 = puVar9;
    func_0x000107c61558();
    uVar14 = uVar3;
    uVar16 = uVar4;
    func_0x000100029284();
    uVar21 = (ulong)~(uint)uVar16 & 1;
    lVar26 = *(long *)(puVar9 + 0x10) + uVar21;
    if (SCARRY8(*(long *)(puVar9 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10170fc74);
      (*pcVar8)();
    }
    if (*(long *)(puVar9 + 0x18) < lVar26) {
      func_0x000101712870(lVar26,puVar10);
      uVar14 = uVar3;
      uVar21 = uVar4;
      func_0x000100029284();
      if (((uint)uVar16 & 1) != ((uint)uVar21 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                  (PTR___sSSN_11034da80);
        return;
      }
LAB_10170fa5c:
      if ((uVar16 & 1) == 0) goto LAB_10170faa0;
LAB_10170fa60:
      uVar19 = *(undefined8 *)(*(long *)(puVar9 + 0x38) + uVar14 * 8);
      *(ulong *)(*(long *)(puVar9 + 0x38) + uVar14 * 8) = uVar11;
      func_0x000107c61170(uVar19);
      func_0x000101714fb8(unaff_x22 + 0x10);
      func_0x000107c61170(uVar11);
    }
    else {
      if (((ulong)puVar10 & 1) != 0) goto LAB_10170fa5c;
      FUN_1017121cc();
      if ((uVar16 & 1) != 0) goto LAB_10170fa60;
LAB_10170faa0:
      *(ulong *)(puVar9 + (uVar14 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar9 + (uVar14 >> 6) * 8 + 0x40) | 1L << (uVar14 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar14 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(ulong *)(*(long *)(puVar9 + 0x38) + uVar14 * 8) = uVar11;
      func_0x000107c61434(uVar4);
      func_0x000101714fb8(unaff_x22 + 0x10);
      func_0x000107c61170(uVar11);
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10170fc78);
        (*pcVar8)();
      }
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
    }
    if (lVar17 - 1U == uVar20) goto LAB_10170fb24;
    uVar20 = uVar20 + 1;
    lVar22 = lVar22 + 0xc0;
    if (*(ulong *)(puVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10170fb24);
      (*pcVar8)();
    }
  } while( true );
}



/* Entry: 10170fc78; end: 10170fcff;  */

void FUN_10170fc78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2f0);
  lVar3 = *(long *)(unaff_x22 + 0x2d8);
  uVar2 = *(undefined8 *)(lVar3 + 0x50);
  func_0x000107c6157c(uVar2);
  func_0x000103b68a44(0x5f6b726f7774656e,0xed0000726f727265);
  func_0x000107c614ac(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(lVar3);
  **(undefined8 **)(unaff_x22 + 0x2c0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010170fcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170fd00; end: 10170fde3;  */

/* WARNING: Removing unreachable block (ram,0x00010170fdbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10170fd00(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_50 [2];
  undefined8 uStack_40;
  
  func_0x0001000285a8(0x112dc4008,&UNK_10d9816f8);
  func_0x000100087bd4(alStack_50,0x1017150ec);
  if (alStack_50[0] != 0) {
    uVar1 = 0;
    uStack_40 = param_1;
    FUN_101714e68(0,0x112dc4010,&PTR_PTR_1126a7a88);
    func_0x0001031acfe4(0,0,0x10171505c,alStack_50,alStack_50[0],uVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(alStack_50[0]);
  }
  return alStack_50[0] != 0;
}



/* Entry: 10170fde4; end: 10170fe0b;  */

void FUN_10170fde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x210) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x208) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x200) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170fe0c,0,0);
  return;
}



/* Entry: 10170fe0c; end: 10170ff8b;  */

void FUN_10170fe0c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  func_0x000107c31808();
  *(undefined8 *)(unaff_x22 + 0x218) = param_1;
  func_0x000100083b20(unaff_x22 + 0x1d0);
  lVar8 = *(long *)(unaff_x22 + 0x1d0);
  lVar7 = lVar8;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar8 != 0) {
    lVar7 = lVar8;
    func_0x000107c42dcc();
    func_0x000107c615e8(lVar8);
    if ((int)lVar7 != 0) {
      plVar3 = (long *)0x30;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x220) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10170ff8c;
      plVar3[3] = *(long *)(unaff_x22 + 0x210);
      pcVar4 = FUN_10170bf40;
      goto LAB_107c615e0;
    }
  }
  lVar7 = *(long *)(unaff_x22 + 0x1e8);
  if (lVar7 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c602fc(0x12);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar10,lVar7);
    func_0x000107c6142c(0x800000010efb9160);
  }
  func_0x000100083b20(unaff_x22 + 0x1d8);
  lVar9 = *(long *)(unaff_x22 + 0x1d8);
  *(long *)(unaff_x22 + 0x230) = lVar9;
  plVar3 = (long *)0x400;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x238) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1017101d8;
  lVar6 = *(long *)(unaff_x22 + 0x208);
  lVar7 = *(long *)(unaff_x22 + 0x1f8);
  lVar1 = *(long *)(unaff_x22 + 0x200);
  lVar8 = *(long *)(unaff_x22 + 0x1e8);
  lVar2 = *(long *)(unaff_x22 + 0x1f0);
  lVar5 = *(long *)(unaff_x22 + 0x1e0);
  plVar3[0x7d] = lVar9;
  plVar3[0x7c] = lVar6;
  plVar3[0x7b] = lVar1;
  plVar3[0x7a] = lVar7;
  plVar3[0x79] = lVar2;
  plVar3[0x78] = lVar8;
  plVar3[0x77] = lVar5;
  plVar3[0x76] = unaff_x22 + 0xf0;
  pcVar4 = FUN_10171a06c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 10170ff8c; end: 10170ffdb;  */

void FUN_10170ff8c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x228) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x220));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170ffdc,0,0);
  return;
}



/* Entry: 10170ffdc; end: 1017101d7;  */

void FUN_10170ffdc(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  double dVar15;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar5 = *(ulong *)(unaff_x22 + 0x1f0);
  FUN_1017138d4(uVar5,*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1e0),
                *(undefined8 *)(unaff_x22 + 0x1e8),uVar13);
  func_0x000107c6142c(uVar13);
  if ((uVar5 & 1) != 0) {
    dVar15 = *(double *)(unaff_x22 + 0x218);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
    func_0x000107c31808();
    func_0x000103b68534(param_1 - dVar15,0xd000000000000014,0x800000010efb9180);
    func_0x000103b685e0();
    puVar6 = &UNK_1103fd6f8;
    func_0x000107c613fc(&UNK_1103fd6f8,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,uVar11);
    puVar7 = &UNK_1103fd798;
    func_0x000107c613fc(&UNK_1103fd798,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = uVar13;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10d9813f0,puVar7,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010171010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x1e8);
  if (lVar12 != 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c602fc(0x12);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar13,lVar12);
    func_0x000107c6142c(0x800000010efb9160);
  }
  func_0x000100083b20(unaff_x22 + 0x1d8);
  lVar14 = *(long *)(unaff_x22 + 0x1d8);
  *(long *)(unaff_x22 + 0x230) = lVar14;
  plVar8 = (long *)0x400;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x238) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1017101d8;
  lVar10 = *(long *)(unaff_x22 + 0x208);
  lVar12 = *(long *)(unaff_x22 + 0x1f8);
  lVar3 = *(long *)(unaff_x22 + 0x200);
  lVar1 = *(long *)(unaff_x22 + 0x1e8);
  lVar4 = *(long *)(unaff_x22 + 0x1f0);
  lVar9 = *(long *)(unaff_x22 + 0x1e0);
  plVar8[0x7d] = lVar14;
  plVar8[0x7c] = lVar10;
  plVar8[0x7b] = lVar3;
  plVar8[0x7a] = lVar12;
  plVar8[0x79] = lVar4;
  plVar8[0x78] = lVar1;
  plVar8[0x77] = lVar9;
  plVar8[0x76] = unaff_x22 + 0xf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171a06c,0,0);
  return;
}



/* Entry: 1017101d8; end: 10171023f;  */

void FUN_1017101d8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x230);
  *(long *)(lVar2 + 0x240) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x238));
  func_0x000107c61574(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101710240;
  }
  else {
    pcVar1 = FUN_101710344;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101710240; end: 101710343;  */

void FUN_101710240(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x140);
  dVar6 = *(double *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(double *)(unaff_x22 + 0x10) = dVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x100);
  iVar3 = (int)unaff_x22 + 0x10;
  FUN_1017138b0();
  if (iVar3 == 1) {
    uVar4 = 1;
  }
  else {
    dVar7 = *(double *)(unaff_x22 + 0x218);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x18);
    func_0x000107c31808();
    func_0x000103b68534(dVar6 - dVar7,0xd00000000000001d,0x800000010efb9140);
    FUN_101713b34(uVar4,uVar1,uVar5,uVar2);
    func_0x000101714fec(unaff_x22 + 0xf0,0x112dc3de8,&UNK_10d9813e0);
  }
                    /* WARNING: Could not recover jumptable at 0x000101710340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101710344; end: 101710377;  */

void FUN_101710344(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x000101710374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 101710378; end: 1017104df; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider subscribeToCreatorWithCreatorId:productId:transactionId:completionHandler:] */

void FUN_101710378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fd858;
  func_0x000107c613fc(&UNK_1103fd858,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fd880;
  func_0x000107c613fc(&UNK_1103fd880,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981568;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fd8a8;
  func_0x000107c613fc(&UNK_1103fd8a8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981570;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10d981578,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1017104e0; end: 1017105b7;  */

void FUN_1017104e0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  long *plVar4;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  *(long *)(unaff_x22 + 0x18) = param_5;
  if (param_1 == 0) {
    param_1 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5faec();
  }
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar2 = lVar1;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar3 = lVar2;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x30) = lVar3;
  plVar4 = (long *)0x250;
  func_0x000107c6157c(param_5);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1017105b8;
  plVar4[0x42] = param_5;
  plVar4[0x41] = lVar3;
  plVar4[0x3f] = lVar2;
  plVar4[0x40] = param_3;
  plVar4[0x3d] = lVar1;
  plVar4[0x3e] = param_2;
  plVar4[0x3c] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170fe0c,0,0);
  return;
}



/* Entry: 1017105b8; end: 10171063f;  */

void FUN_1017105b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0x30);
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x10);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x38));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c6142c(uVar2);
  (**(code **)(lVar3 + 0x10))(lVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010171063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))();
  return;
}



/* Entry: 101710640; end: 10171069b;  */

void FUN_101710640(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x5b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10171069c;
  plVar1[0xb1] = unaff_x20;
  plVar1[0xb0] = param_2;
  plVar1[0xaf] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017106f8,0,0);
  return;
}



/* Entry: 10171069c; end: 1017106d7;  */

void FUN_10171069c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001017106d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1017106d8; end: 1017106f7;  */

void FUN_1017106d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x588) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x580) = param_2;
  *(undefined8 *)(unaff_x22 + 0x578) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017106f8,0,0);
  return;
}



/* Entry: 1017106f8; end: 10171080f;  */

void FUN_1017106f8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x588);
  func_0x000107c31808();
  *(undefined8 *)(unaff_x22 + 0x590) = param_1;
  uVar1 = 0x112dc3fe8;
  func_0x0001000285a8(0x112dc3fe8,&UNK_10d981670);
  func_0x000107c61418(unaff_x22 + 0x10,0,uVar1,&UNK_10d981668,uVar4,unaff_x22 + 0x568);
  func_0x000100083b20(unaff_x22 + 0x290);
  lVar5 = *(long *)(unaff_x22 + 0x290);
  lVar2 = lVar5;
  func_0x000107c5d9ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x598) = lVar5;
  func_0x000107c61170(lVar2);
  if (lVar5 == 0) {
    pcVar3 = (code *)0x101710994;
    lVar2 = unaff_x22 + 0x290;
  }
  else {
    *(long *)(unaff_x22 + 0x560) = lVar5;
    uVar1 = 0x112dc3ff0;
    func_0x0001000285a8(0x112dc3ff0,&UNK_10d981690);
    func_0x000107c61418(unaff_x22 + 0x290,0,uVar1,&UNK_10d981688,unaff_x22 + 0x550,unaff_x22 + 0x570
                       );
    pcVar3 = FUN_101710810;
    lVar2 = unaff_x22 + 0x510;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)(unaff_x22 + 0x10,unaff_x22 + 0x568,pcVar3,lVar2);
  return;
}



/* Entry: 101710810; end: 10171084f;  */

void FUN_101710810(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_throwing_110350068)
            (unaff_x22 + 0x290,unaff_x22 + 0x570,0x101710828,unaff_x22 + 0x510);
  return;
}



/* Entry: 101710850; end: 10171092b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101710850(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  double dVar3;
  
  dVar3 = *(double *)(unaff_x22 + 0x590);
  lVar2 = *(long *)(unaff_x22 + 0x580);
  func_0x000107c31808();
  func_0x000103b68534(param_1 - dVar3,0xd000000000000018,0x800000010efb91a0);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x588);
    *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x578);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x580);
    uVar1 = 0x112d715c0;
    func_0x0001000285a8(0x112d715c0,&UNK_10d932080);
    func_0x000100087bd4(unaff_x22 + 0x538,FUN_101714a90,unaff_x22 + 0x510,uVar1);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x548));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x290,unaff_x22 + 0x570,FUN_10171092c,unaff_x22 + 0x510);
  return;
}



/* Entry: 10171092c; end: 10171093f;  */

void FUN_10171092c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101710940,0,0);
  return;
}



/* Entry: 101710940; end: 10171097f;  */

void FUN_101710940(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x598));
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,unaff_x22 + 0x568,FUN_101710980,unaff_x22 + 0x290);
  return;
}



/* Entry: 101710980; end: 1017109a7;  */

void FUN_101710980(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017150d4,0,0);
  return;
}



/* Entry: 1017109a8; end: 101710a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017109a8(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  double dVar3;
  
  dVar3 = *(double *)(unaff_x22 + 0x590);
  lVar2 = *(long *)(unaff_x22 + 0x580);
  func_0x000107c31808();
  func_0x000103b68534(param_1 - dVar3,0xd000000000000018,0x800000010efb91a0);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x588);
    *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x578);
    *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x580);
    uVar1 = 0x112d715c0;
    func_0x0001000285a8(0x112d715c0,&UNK_10d932080);
    func_0x000100087bd4(unaff_x22 + 0x510,0x1017150c0,unaff_x22 + 0x290,uVar1);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x520));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,unaff_x22 + 0x568,FUN_101710a84,unaff_x22 + 0x290);
  return;
}



/* Entry: 101710a84; end: 101710a9f;  */

void FUN_101710a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101710a98,0,0);
  return;
}



/* Entry: 101710aa0; end: 101710b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101710aa0(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  double dVar3;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x5a0));
  dVar3 = *(double *)(unaff_x22 + 0x590);
  lVar2 = *(long *)(unaff_x22 + 0x580);
  func_0x000107c31808();
  func_0x000103b68534(param_1 - dVar3,0xd000000000000018,0x800000010efb91a0);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x588);
    *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x578);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x580);
    uVar1 = 0x112d715c0;
    func_0x0001000285a8(0x112d715c0,&UNK_10d932080);
    func_0x000100087bd4(unaff_x22 + 0x538,FUN_101714a90,unaff_x22 + 0x510,uVar1);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x548));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x290,unaff_x22 + 0x570,FUN_10171092c,unaff_x22 + 0x510);
  return;
}



/* Entry: 101710b84; end: 101710cc7; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider mockSubscribeToCreatorWithCreatorId:completionHandler:] */

void FUN_101710b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fd7e0;
  func_0x000107c613fc(&UNK_1103fd7e0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fd808;
  func_0x000107c613fc(&UNK_1103fd808,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981530;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fd830;
  func_0x000107c613fc(&UNK_1103fd830,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981540;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d981550,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101710cc8; end: 101710d4f;  */

void FUN_101710cc8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  if (param_1 == 0) {
    param_1 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(long *)(unaff_x22 + 0x20) = param_2;
  plVar1 = (long *)0x5b0;
  func_0x000107c6157c(param_3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101710d50;
  plVar1[0xb1] = param_3;
  plVar1[0xb0] = param_2;
  plVar1[0xaf] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017106f8,0,0);
  return;
}



/* Entry: 101710d50; end: 101710db3;  */

void FUN_101710d50(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  lVar2 = *(long *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101710db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 101710db4; end: 101710dcf;  */

void FUN_101710db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101710dd0,0,0);
  return;
}



/* Entry: 101710dd0; end: 101710f77;  */

void FUN_101710dd0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x40) = lVar4;
  if (lVar4 != 0) {
    plVar3 = (long *)0x5b0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = 0x101710e5c;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    lVar2 = *(long *)(unaff_x22 + 0x38);
    plVar3[0xb1] = lVar4;
    plVar3[0xb0] = lVar2;
    plVar3[0xaf] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1017106f8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101710e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101710f78; end: 101710fa7;  */

void FUN_101710f78(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000101710f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101710fa8; end: 101711053;  */

void FUN_101710fa8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c4381c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000285a8(0x112d67d58,&UNK_10d92be70);
    lVar3 = lVar2;
    func_0x000100759c94(lVar2,0);
    *(long *)(unaff_x22 + 0x28) = lVar3;
    func_0x000107c61170(lVar2);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101711054;
                    /* WARNING: Could not recover jumptable at 0x00010171104c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_10171335c();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101711054);
  (*pcVar1)();
}



/* Entry: 101711054; end: 1017110a7;  */

void FUN_101711054(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017110a8,0,0);
  return;
}



/* Entry: 1017110a8; end: 10171114b;  */

void FUN_1017110a8(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x18);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    *puVar3 = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101711148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10171114c; end: 1017111df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10171114c(byte *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + _DAT_112dc3e00,auStack_58,0x21,0);
  func_0x000107c61434(param_4);
  pbVar1 = param_1 + 8;
  func_0x000100403b00(pbVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  *param_1 = (byte)pbVar1 & 1;
  return;
}



/* Entry: 1017111e0; end: 1017114df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017111e0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar13 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(param_2 + 0x40);
  func_0x000107c61434(param_2);
  lVar17 = 0;
  while( true ) {
    for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar3 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar6 = *(long *)(*(long *)(param_2 + 0x38) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
                       lVar17 * 0x200);
      uVar7 = *(undefined8 *)(lVar6 + _DAT_113041e88);
      uVar8 = ((undefined8 *)(lVar6 + _DAT_113041e88))[1];
      func_0x000107c61174();
      func_0x000107c61434(uVar8);
      func_0x000107c5fadc(uVar7,uVar8);
      func_0x000107c6142c(uVar8);
      uVar8 = *(undefined8 *)(lVar6 + _DAT_113041e90);
      uVar9 = ((undefined8 *)(lVar6 + _DAT_113041e90))[1];
      func_0x000107c61434(uVar9);
      func_0x000107c5fadc(uVar8,uVar9);
      func_0x000107c6142c(uVar9);
      lVar18 = _DAT_113041ea8;
      uVar2 = *(undefined1 *)(lVar6 + _DAT_113041e98);
      uVar10 = *(undefined8 *)(lVar6 + _DAT_113041ea0);
      func_0x000107c61428(lVar6 + _DAT_113041ea8,auStack_80,0,0);
      uVar11 = *(undefined8 *)(lVar6 + lVar18);
      puVar1 = (undefined8 *)(lVar6 + _DAT_113041eb0);
      func_0x000107c61428(puVar1,auStack_98,0,0);
      uVar9 = *puVar1;
      uVar12 = puVar1[1];
      func_0x000107c61434(uVar12);
      func_0x000107c5fadc(uVar9,uVar12);
      func_0x000107c6142c(uVar12);
      lVar18 = _DAT_113041eb8;
      func_0x000107c61428(lVar6 + _DAT_113041eb8,auStack_b0,0,0);
      uVar12 = *(undefined8 *)(lVar6 + lVar18);
      lVar18 = ((undefined8 *)(lVar6 + _DAT_113041ec0))[1];
      if (lVar18 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar6 + _DAT_113041ec0);
        func_0x000107c61434(lVar18);
        func_0x000107c5fadc(uVar14,lVar18);
        func_0x000107c6142c(lVar18);
      }
      lVar18 = ((undefined8 *)(lVar6 + _DAT_113041ec8))[1];
      if (lVar18 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lVar6 + _DAT_113041ec8);
        func_0x000107c61434(lVar18);
        func_0x000107c5fadc(uVar15,lVar18);
        func_0x000107c6142c(lVar18);
      }
      func_0x0001053db458(param_1,uVar7,uVar8,uVar2,uVar10,uVar11,uVar9,uVar12,uVar14,uVar15);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar15);
    }
    bVar5 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar5) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
      func_0x000107c61574(param_2);
      return;
    }
    uVar16 = ((ulong *)(param_2 + 0x40))[lVar17];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1017114e0);
  (*pcVar4)();
}



/* Entry: 1017114e0; end: 10171154f;  */

void FUN_1017114e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001053db190();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_101714e68(0,0x112dc4020,&PTR_PTR_1126b85c0);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101711550; end: 10171179b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101711550(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000101714fec(unaff_x20 + _DAT_112dc3df0,0x112dc3df8,&UNK_10d981408);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3dc0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dc3e00));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3dd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3da8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3e08));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3e10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112dc3e18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3da0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112dc3e20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3e28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112dc3e30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dc3e38));
  return;
}



/* Entry: 10171179c; end: 1017117ef;  */

void FUN_10171179c(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101715114;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bd94,0,0);
  return;
}



/* Entry: 1017117f0; end: 10171180b;  */

void FUN_1017117f0(void)

{
  long unaff_x20;
  
  FUN_1017057fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10171180c; end: 101711893;  */

void FUN_10171180c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  func_0x000101709088();
  FUN_1017055cc(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101711894);
  (*pcVar2)();
}



/* Entry: 101711894; end: 10171193f;  */

void FUN_101711894(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0x112dc3840;
  func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
  func_0x000101714c3c(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,0x112dc3840,
                      &UNK_10d980f60);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101711940);
  (*pcVar2)();
}



/* Entry: 101711940; end: 101711afb;  */

ulong FUN_101711940(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101711a24);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101711a28);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101714e68(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101711afc);
  (*pcVar2)();
}



/* Entry: 101711afc; end: 101711c13;  */

void FUN_101711afc(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    func_0x000101709088();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101711fd4();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    func_0x000101709088();
    lVar6 = *(long *)(lVar4 + -8);
    FUN_1017055cc(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    func_0x000101712e54(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101711c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 101711c14; end: 101711d5b;  */

void FUN_101711c14(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0x112dc3840;
    func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010171233c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0x112dc3840;
    func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
    lVar6 = *(long *)(lVar4 + -8);
    func_0x000101714c3c(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1,0x112dc3840,&UNK_10d980f60
                       );
    func_0x000101713024(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101711d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 101711d5c; end: 101711fd3;  */

ulong FUN_101711d5c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101711e44);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    func_0x000101712568(lVar4,param_4 & 1);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101711dfc);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101711fd4();
    lVar4 = *unaff_x20;
    goto joined_r0x000101711e58;
  }
  lVar4 = *unaff_x20;
joined_r0x000101711e58:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    func_0x000101709088();
    uVar3 = lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2;
    lVar4 = 0;
    func_0x000101709088();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(uVar3,param_1,lVar4);
    return uVar3;
  }
  FUN_10171180c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 101711fd4; end: 1017121cb;  */

void FUN_101711fd4(void)

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
  func_0x000101709088();
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x0001000285a8(0x112dc3820,&UNK_10d980f38);
  lVar13 = *unaff_x20;
  lVar6 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c61574(lVar13);
LAB_1017121a4:
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
  if (uVar8 == 0) goto LAB_101712100;
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
      func_0x0001017094f4(*(long *)(lVar13 + 0x38) + lVar12,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_1017055cc(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    *(long *)(lVar6 + 0x38) + lVar12);
      func_0x000107c61434(uVar4);
      if (uVar8 != 0) break;
LAB_101712100:
      do {
        lVar11 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1017121cc);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          func_0x000107c61574(lVar13);
          goto LAB_1017121a4;
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



/* Entry: 1017121cc; end: 10171233b;  */

void FUN_1017121cc(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112dc3828,&UNK_10d980f40);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1017122a8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1017122a8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10171233c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101712314;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_101712314:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10171233c; end: 10171320b;  */

void FUN_10171233c(void)

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
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  ulong uStack_68;
  
  lVar6 = 0x112dc3840;
  func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
  lVar7 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dc3838,&UNK_10d9816d0);
  lVar12 = *unaff_x20;
  lVar6 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) == 0) {
    func_0x000107c61574(lVar12);
LAB_101712540:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar12 + 0x40;
  uVar8 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar6 != lVar12) || (lVar1 + uVar8 * 8 <= lVar6 + 0x40U)) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar8 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar8 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar12 + 0x40);
  if (uStack_68 == 0) goto LAB_101712478;
  do {
    uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
      lVar11 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = *(long *)(lVar7 + 0x48) * uVar9;
      FUN_101714bac(*(long *)(lVar12 + 0x38) + lVar10,auStack_90 + -extraout_x8,0x112dc3840,
                    &UNK_10d980f60);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000101714c3c(auStack_90 + -extraout_x8,*(long *)(lVar6 + 0x38) + lVar10,0x112dc3840,
                          &UNK_10d980f60);
      func_0x000107c61434(uVar4);
      if (uStack_68 != 0) break;
LAB_101712478:
      do {
        lVar10 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101712568);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar12);
          goto LAB_101712540;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar13 = lVar13 + 1;
      } while (uStack_68 == 0);
      uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar13 = lVar10;
    }
  } while( true );
}



/* Entry: 10171320c; end: 101713227;  */

void FUN_10171320c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101713228();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101713228; end: 10171335b;  */

undefined * FUN_101713228(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10171335c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000101711718();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101714e68(0,0x112dc3fe0,&PTR_PTR_1126a7a80);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10171335c; end: 101713373;  */

void FUN_10171335c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101713374,0,0);
  return;
}



/* Entry: 101713374; end: 10171343b;  */

void FUN_101713374(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001017133bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10171343c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1103fdc18;
  func_0x000107c613fc(&UNK_1103fdc18,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101714aac,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10171343c; end: 10171347b;  */

void FUN_10171343c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10171347c,0,0);
  return;
}



/* Entry: 10171347c; end: 10171348b;  */

void FUN_10171347c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101713488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10171348c; end: 1017134eb;  */

void FUN_10171348c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001017134c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1017134ec; end: 10171352b;  */

int FUN_1017134ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10171352c; end: 101713563;  */

void FUN_10171352c(void)

{
  long unaff_x20;
  
  FUN_10170ce8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101713564; end: 1017135d3;  */

undefined8 FUN_101713564(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103d4a184)(param_2,param_1);
  return param_2;
}



/* Entry: 1017135d4; end: 1017135f3;  */

void FUN_1017135d4(void)

{
  long unaff_x20;
  
  FUN_10170d8f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1017135f4; end: 10171362b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1017135f4(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 10171362c; end: 101713687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10171362c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc3e00;
  func_0x000107c61428(unaff_x20 + _DAT_112dc3e00,auStack_48,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61434();
  return;
}



/* Entry: 101713688; end: 1017136c3;  */

void FUN_101713688(void)

{
  FUN_10170df14();
  return;
}



/* Entry: 1017136c4; end: 10171378f;  */

void FUN_1017136c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  lVar13 = *(long *)(unaff_x20 + 0x50);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  lVar10 = *(long *)(unaff_x20 + 0x58);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  lVar9 = *(long *)(unaff_x20 + 0x68);
  plVar8 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x101715118;
  *(undefined1 *)(plVar8 + 0x22) = uVar7;
  plVar8[0x1c] = lVar10;
  plVar8[0x1d] = lVar9;
  plVar8[0x1b] = lVar13;
  plVar8[0x1a] = lVar12;
  plVar8[0x18] = lVar6;
  plVar8[0x19] = lVar11;
  plVar8[0x16] = lVar5;
  plVar8[0x17] = lVar3;
  plVar8[0x14] = lVar4;
  plVar8[0x15] = lVar2;
  plVar8[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101715264,0,0);
  return;
}



/* Entry: 101713790; end: 1017137e3;  */

void FUN_101713790(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(ulong *)(unaff_x20 + 0x30) >> 0x3c < 0xf) {
    func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28));
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1017137e4; end: 1017138af;  */

void FUN_1017137e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  lVar13 = *(long *)(unaff_x20 + 0x50);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  lVar10 = *(long *)(unaff_x20 + 0x58);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  lVar9 = *(long *)(unaff_x20 + 0x68);
  plVar8 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x10171511c;
  *(undefined1 *)(plVar8 + 0x22) = uVar7;
  plVar8[0x1c] = lVar10;
  plVar8[0x1d] = lVar9;
  plVar8[0x1b] = lVar13;
  plVar8[0x1a] = lVar12;
  plVar8[0x18] = lVar6;
  plVar8[0x19] = lVar11;
  plVar8[0x16] = lVar5;
  plVar8[0x17] = lVar3;
  plVar8[0x14] = lVar4;
  plVar8[0x15] = lVar2;
  plVar8[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101715264,0,0);
  return;
}



/* Entry: 1017138b0; end: 1017138d3;  */

int FUN_1017138b0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


