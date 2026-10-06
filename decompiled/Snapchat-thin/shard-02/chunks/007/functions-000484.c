/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020d189c; end: 1020d1997;  */

long * FUN_1020d189c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    lVar8 = *(long *)(lVar5 + -8);
    plVar6 = param_2;
    (**(code **)(lVar8 + 0x30))(param_2,1,lVar5);
    if ((int)plVar6 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
      (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar5);
    }
    else {
      lVar5 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020d1998; end: 1020d1a03;  */

void FUN_1020d1998(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar3 + 8))(param_1,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  return;
}



/* Entry: 1020d1a04; end: 1020d1ad3;  */

long FUN_1020d1a04(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar4 + -8);
  lVar5 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1020d1ad4; end: 1020d1c03;  */

long FUN_1020d1ad4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = param_1;
  (*pcVar8)(param_1,1,lVar3);
  lVar5 = param_2;
  (*pcVar8)(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar3);
      goto LAB_1020d1ba4;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar3);
    goto LAB_1020d1ba4;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_1020d1ba4:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 1020d1c04; end: 1020d1cc7;  */

long FUN_1020d1c04(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar3 + -8);
  lVar4 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  return param_1;
}



/* Entry: 1020d1cc8; end: 1020d1de7;  */

long FUN_1020d1cc8(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = param_1;
  (*pcVar9)(param_1,1,lVar4);
  lVar6 = param_2;
  (*pcVar9)(param_2,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x28))(param_1,param_2,lVar4);
      goto LAB_1020d1d98;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar4);
    goto LAB_1020d1d98;
  }
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
LAB_1020d1d98:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar7);
  return param_1;
}



/* Entry: 1020d1de8; end: 1020d1dff;  */

void FUN_1020d1de8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020d1e00; end: 1020d1e6f;  */

void FUN_1020d1e00(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10da5aa10;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020d1e70; end: 1020d1ec3;  */

void FUN_1020d1e70(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1020d20b8;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[6] = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar3[8] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_1020cd854;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(80000000);
  return;
}



/* Entry: 1020d1ec4; end: 1020d1ed3;  */

void FUN_1020d1ec4(byte param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_10da5a860;
    func_0x000107c614e0(&UNK_10da5a860);
    puVar3 = &UNK_10da5a888;
    func_0x000107c614e0(&UNK_10da5a888);
    bStack_49 = param_1 & 1;
    func_0x000107c61174(lVar1);
    func_0x000107c5f210(&bStack_49,lVar1,puVar2,puVar3);
    if ((param_1 & 1) != 0) {
      FUN_1020cc124();
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1020d1ed4; end: 1020d1f0f;  */

void FUN_1020d1ed4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020d1f10; end: 1020d1f87;  */

void FUN_1020d1f10(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1020d20bc;
  plVar7[0xd] = lVar6;
  plVar7[0xe] = lVar2;
  plVar7[0xb] = lVar4;
  plVar7[0xc] = lVar1;
  lVar4 = 0;
  func_0x0001020d1180();
  plVar7[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x11] = uVar5;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar4 = lVar6;
  func_0x000107c5fce8();
  plVar7[0x12] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[0x13] = lVar6;
  plVar7[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdcd8,lVar6,lVar4);
  return;
}



/* Entry: 1020d1f88; end: 1020d1fdb;  */

void FUN_1020d1f88(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1020d1fdc;
  plVar5[5] = lVar6;
  *(undefined1 *)((long)plVar5 + 0x39) = uVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar6 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar6;
  uVar4 = 0x112d45220;
  FUN_1020d1408(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d0abc,lVar3,uVar4);
  return;
}



/* Entry: 1020d1fdc; end: 1020d2017;  */

void FUN_1020d1fdc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020d2014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020d2018; end: 1020d2087;  */

void FUN_1020d2018(undefined8 param_1)

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
  plVar3[1] = 0x1020d20c4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1020d2088; end: 1020d20c7;  */

void FUN_1020d2088(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x48) = lVar5;
    if (lVar5 != 0) {
      plVar2 = (long *)0x40;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x50) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1020cd9b8;
      plVar2[6] = lVar5;
      lVar3 = 0;
      func_0x000107c5fcec();
      puVar1 = PTR___sScMMa_11034fc70;
      lVar5 = lVar3;
      func_0x000107c5fce8();
      plVar2[7] = lVar5;
      uVar4 = 0x112d45220;
      FUN_1020d1408(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8(lVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1020cdb04,lVar3,uVar4);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001020cd9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020d20c8; end: 1020d21e3;  */

long * FUN_1020d20c8(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar6 = (long)*(int *)(param_3 + 0x14);
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar7 = *(long *)(lVar4 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    func_0x000107c61174(lVar3);
    lVar3 = (long)param_2 + lVar6;
    (*pcVar8)(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
    }
    else {
      lVar3 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                          *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  }
  else {
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1020d21e4; end: 1020d225f;  */

void FUN_1020d21e4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61170(*param_1);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_1 + (long)iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x18)));
  return;
}



/* Entry: 1020d2260; end: 1020d24ab;  */

undefined8 * FUN_1020d2260(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar4 = *param_2;
  *param_1 = uVar4;
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  func_0x000107c61174(uVar4);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1020d24ac; end: 1020d258f;  */

undefined8 * FUN_1020d24ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = *param_2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 1020d2590; end: 1020d26cf;  */

undefined8 * FUN_1020d2590(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar2);
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_1 + lVar6;
  (*pcVar8)(lVar5,1,lVar3);
  lVar4 = (long)param_2 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  if ((int)lVar5 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      goto LAB_1020d2674;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    goto LAB_1020d2674;
  }
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                      *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
LAB_1020d2674:
  lVar5 = (long)*(int *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  func_0x000107c61574(uVar2);
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 1020d26d0; end: 1020d26fb;  */

void FUN_1020d26d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020d26fc; end: 1020d277f;  */

void FUN_1020d26fc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10da5aa78;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10da5aa78;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020d2780; end: 1020d278f;  */

void FUN_1020d2780(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6aef70,1);
  return;
}



/* Entry: 1020d2790; end: 1020d3283;  */

void FUN_1020d2790(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar11;
  undefined8 extraout_x12;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long alStack_b0 [5];
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  uStack_70 = param_1;
  FUN_1020d34e4();
  alStack_b0[4] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar19 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e57510;
  func_0x0001000285a8(0x112e57510,&UNK_10da5aae8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e57518;
  plStack_88 = (long *)(lVar19 - extraout_x8_00);
  func_0x0001000285a8(0x112e57518,&UNK_10da5aaf0);
  alStack_b0[2] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar16 = (long *)((lVar19 - extraout_x8_00) - extraout_x8_01);
  lVar4 = 0x112e57520;
  func_0x0001000285a8(0x112e57520,&UNK_10da5aaf8);
  lStack_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  alStack_b0[3] = (long)plVar16 - extraout_x8_02;
  func_0x000107c5f6f0();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = ((long)plVar16 - extraout_x8_02) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d503e8;
  func_0x0001000285a8(0x112d503e8,&UNK_10d916ac0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar15 - extraout_x8_04;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar17 - extraout_x8_05;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar4 = alStack_b0[4];
  lVar11 = lVar14 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *param_2;
  if (lVar6 == 0) {
    func_0x0001020d26e8();
    func_0x0001020d3da4((long)param_2 + (long)*(int *)(lVar6 + 0x14),lVar14,0x112d36580,
                        &UNK_10d9016d0);
    lVar5 = lVar14;
    (**(code **)(lVar18 + 0x30))(lVar14,1,extraout_x12);
    if ((int)lVar5 == 1) {
      func_0x0001020d3dec(lVar14,0x112d36580,&UNK_10d9016d0);
      func_0x000107c5f6cc();
      lVar4 = lStack_80;
      plVar16 = plStack_88;
      *plStack_88 = lVar14;
      plVar10 = plVar16;
      func_0x000107c6159c(plVar16,lVar4,1);
      func_0x0001020d3528();
      func_0x000107c5f490(uStack_70,plVar16,lStack_78,PTR___s7SwiftUI5ColorVN_1103496f0,plVar10,
                          PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
    }
    else {
      alStack_b0[1] = lVar11;
      (**(code **)(lVar18 + 0x20))(lVar11,lVar14,extraout_x12);
      (**(code **)(lVar18 + 0x10))(lVar19,lVar11,extraout_x12);
      uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x18));
      *(undefined8 *)(lVar19 + *(int *)(lVar4 + 0x14)) = uVar13;
      puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar4 + 0x18));
      puVar7 = &UNK_10da5ab10;
      func_0x000107c614e0();
      *puVar1 = puVar7;
      *(undefined1 *)(puVar1 + 1) = 0;
      iVar3 = *(int *)(lVar4 + 0x1c);
      uStack_68 = 0;
      func_0x000107c6157c(uVar13);
      uVar13 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      func_0x000107c5f728(lVar19 + iVar3,&uStack_68,uVar13);
      FUN_1020d36ac(lVar19,plVar16);
      func_0x000107c6159c(plVar16,alStack_b0[2],1);
      uVar13 = 0x112e57538;
      func_0x0001000285a8(0x112e57538,&UNK_10da5ab08);
      uVar8 = uVar13;
      func_0x0001020d35a0();
      uVar9 = uVar8;
      func_0x0001020d3668();
      lVar5 = alStack_b0[3];
      func_0x000107c5f490(alStack_b0[3],plVar16,uVar13,lVar4,uVar8,uVar9);
      plVar16 = plStack_88;
      func_0x0001020d3da4(lVar5,plStack_88,0x112e57520,&UNK_10da5aaf8);
      plVar10 = plVar16;
      func_0x000107c6159c(plVar16,lStack_80,0);
      func_0x0001020d3528();
      func_0x000107c5f490(uStack_70,plVar16,lStack_78,PTR___s7SwiftUI5ColorVN_1103496f0,plVar10,
                          PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
      func_0x0001020d3dec(lVar5,0x112e57520,&UNK_10da5aaf8);
      func_0x0001020d36f0(lVar19);
      (**(code **)(lVar18 + 8))(alStack_b0[1],extraout_x12);
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    alStack_b0[1] = lVar6;
    func_0x000107c5f6e8();
    lVar4 = 0;
    func_0x0001020d26e8();
    lVar14 = *(long *)((long)param_2 + (long)*(int *)(lVar4 + 0x18));
    lVar4 = 0;
    func_0x000107c5f6f8();
    lVar11 = *(long *)(lVar4 + -8);
    puVar2 = (undefined4 *)PTR___s7SwiftUI5ImageV21TemplateRenderingModeO8originalyA2EmFWC_110349750
    ;
    if (lVar14 != 0) {
      puVar2 = (undefined4 *)
               PTR___s7SwiftUI5ImageV21TemplateRenderingModeO8templateyA2EmFWC_110349758;
    }
    (**(code **)(lVar11 + 0x68))(lVar17,*puVar2,lVar4);
    func_0x000107c5f6f8(0);
    (**(code **)(lVar11 + 0x38))(lVar17,0,1,lVar4);
    lVar4 = lVar17;
    func_0x000107c5f6f4(lVar17,lVar6);
    func_0x000107c61574(lVar6);
    func_0x0001020d3dec(lVar17,0x112d503e8,&UNK_10d916ac0);
    (**(code **)(lVar12 + 0x68))
              (lVar15,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar5);
    lVar6 = lVar15;
    func_0x000107c5f6fc(0,0,0,0,lVar15,lVar4);
    func_0x000107c61574(lVar4);
    (**(code **)(lVar12 + 8))(lVar15,lVar5);
    puVar7 = &UNK_10da5ab40;
    func_0x000107c614e0();
    *plVar16 = lVar6;
    plVar16[1] = 0;
    *(undefined2 *)(plVar16 + 2) = 1;
    plVar16[3] = (long)puVar7;
    plVar16[4] = lVar14;
    func_0x000107c6159c(plVar16,alStack_b0[2],0);
    func_0x000107c61580(lVar14,2);
    func_0x000107c6157c(lVar6);
    func_0x000107c6157c(puVar7);
    uVar13 = 0x112e57538;
    func_0x0001000285a8(0x112e57538,&UNK_10da5ab08);
    uVar8 = uVar13;
    func_0x0001020d35a0();
    uVar9 = uVar8;
    func_0x0001020d3668();
    lVar4 = alStack_b0[3];
    func_0x000107c5f490(alStack_b0[3],plVar16,uVar13,alStack_b0[4],uVar8,uVar9);
    plVar16 = plStack_88;
    func_0x0001020d3da4(lVar4,plStack_88,0x112e57520,&UNK_10da5aaf8);
    plVar10 = plVar16;
    func_0x000107c6159c(plVar16,lStack_80,0);
    func_0x0001020d3528();
    func_0x000107c5f490(uStack_70,plVar16,lStack_78,PTR___s7SwiftUI5ColorVN_1103496f0,plVar10,
                        PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
    func_0x000107c61170(alStack_b0[1]);
    func_0x000107c61574(lVar14);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(lVar6);
    func_0x0001020d3dec(lVar4,0x112e57520,&UNK_10da5aaf8);
  }
  return;
}



/* Entry: 1020d3284; end: 1020d329b;  */

void FUN_1020d3284(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d329c,0,0);
  return;
}



/* Entry: 1020d329c; end: 1020d33a3;  */

void FUN_1020d329c(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x38);
  lVar3 = 0;
  FUN_1020d34e4();
  iVar1 = *(int *)(lVar3 + 0x1c);
  *(int *)(unaff_x22 + 0x68) = iVar1;
  puVar2 = (undefined8 *)(lVar7 + iVar1);
  uVar8 = *puVar2;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar2[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  uVar8 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
  func_0x000107c5f72c(unaff_x22 + 0x20);
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x0001020d3318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x38) + (long)*(int *)(lVar3 + 0x18));
  lVar3 = *plVar4;
  uVar5 = (ulong)*(byte *)(plVar4 + 1);
  FUN_1020d58f8();
  func_0x000100083b20(unaff_x22 + 0x28);
  func_0x000107c61574();
  plVar6 = *(long **)(unaff_x22 + 0x28);
  *(long **)(unaff_x22 + 0x48) = plVar6;
  func_0x000107c5ed70();
  *(ulong *)(unaff_x22 + 0x50) = uVar5;
  plVar4 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1020d33a4;
  plVar4[0x26] = uVar5;
  plVar4[0x27] = (long)plVar6;
  plVar4[0x25] = lVar3;
  plVar4[0x28] = *plVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c5cbc,0,0);
  return;
}



/* Entry: 1020d33a4; end: 1020d3407;  */

void FUN_1020d33a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d3408,0,0);
  return;
}



/* Entry: 1020d3408; end: 1020d344b;  */

void FUN_1020d3408(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001020d3448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020d344c; end: 1020d344f;  */

void FUN_1020d344c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_160;
  undefined1 auStack_158 [80];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  FUN_1020d34e4();
  lVar6 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001020d2fac(&uStack_b8);
  uVar1 = uStack_b0;
  uStack_160 = uStack_b8;
  FUN_1020d36ac();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1104c9770;
  func_0x000107c613fc(&UNK_1104c9770,uVar7 + lVar2,uVar5 | 7);
  FUN_1020d3cc0(auStack_158 + (-8 - (lVar2 + 0xfU & 0xfffffffffffffff0)),puVar3 + uVar7);
  uStack_108 = 0;
  uVar4 = 0x112e08348;
  func_0x0001000285a8(0x112e08348,&UNK_10da5ac20);
  func_0x000107c5f728(&uStack_b8,&uStack_108,uVar4);
  uStack_78 = uStack_b8;
  uStack_108 = uStack_160;
  uStack_100 = uVar1;
  uStack_f8 = uStack_a8;
  uStack_f0 = uStack_a0;
  uStack_e8 = uStack_98;
  uStack_e0 = uStack_90;
  puStack_d8 = &UNK_10da5ac18;
  uStack_c8 = uStack_b8;
  uStack_c0 = uStack_b0;
  uStack_b8 = uStack_160;
  puStack_88 = &UNK_10da5ac18;
  uStack_70 = uStack_b0;
  puStack_d0 = puVar3;
  puStack_80 = puVar3;
  FUN_1020d3da4(&uStack_108,auStack_158,0x112e57608,&UNK_10da5ac28);
  func_0x0001020d3dec(&uStack_b8,0x112e57608,&UNK_10da5ac28);
  param_1[5] = CONCAT71(uStack_df,uStack_e0);
  param_1[4] = uStack_e8;
  param_1[7] = puStack_d0;
  param_1[6] = puStack_d8;
  param_1[9] = uStack_c0;
  param_1[8] = uStack_c8;
  param_1[1] = uStack_100;
  *param_1 = uStack_108;
  param_1[3] = uStack_f0;
  param_1[2] = uStack_f8;
  return;
}



/* Entry: 1020d3450; end: 1020d34e3;  */

void FUN_1020d3450(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = unaff_x20;
  FUN_1020d2790();
  uVar3 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x1c));
  uVar4 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x20));
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_60,uVar3,0,uVar4,0,lVar2,param_3);
  lVar2 = 0x112e57508;
  func_0x0001000285a8(0x112e57508,&UNK_10da5aae0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = uStack_40;
  return;
}



/* Entry: 1020d34e4; end: 1020d34f7;  */

void FUN_1020d34e4(undefined8 param_1)

{
  if (lRam0000000112e575a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6aef48);
  return;
}



/* Entry: 1020d34f8; end: 1020d3527;  */

void FUN_1020d34f8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1020d3528; end: 1020d3617;  */

void FUN_1020d3528(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e57528 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57520;
  func_0x00010002969c(0x112e57520,&UNK_10da5aaf8);
  uVar2 = uVar1;
  func_0x0001020d35a0();
  uVar3 = uVar2;
  func_0x0001020d3668();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_30);
  puRam0000000112e57528 = puVar4;
  return;
}



/* Entry: 1020d3618; end: 1020d36ab;  */

void FUN_1020d3618(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4fb58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fb60;
  func_0x00010002969c(0x112d4fb60,&UNK_10d915b10);
  puVar2 = PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8;
  func_0x000107c61520(PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8,
                      uVar1);
  puRam0000000112d4fb58 = puVar2;
  return;
}



/* Entry: 1020d36ac; end: 1020d372b;  */

undefined8 FUN_1020d36ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1020d34e4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020d372c; end: 1020d37f7;  */

long * FUN_1020d372c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar7 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar9 = *puVar2;
    uVar6 = *(undefined1 *)(puVar2 + 1);
    *puVar1 = uVar9;
    *(undefined1 *)(puVar1 + 1) = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = *puVar2;
    lVar7 = puVar2[1];
    *puVar1 = uVar3;
    puVar1[1] = lVar7;
    func_0x000107c6157c();
    func_0x000107c6157c(uVar9);
    func_0x000107c61174(uVar3);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar7);
  return param_1;
}



/* Entry: 1020d37f8; end: 1020d385f;  */

/* WARNING: Possible PIC construction at 0x0001020d3830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020d3834) */

void FUN_1020d37f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 1020d3860; end: 1020d3b0b;  */

long FUN_1020d3860(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
  iVar5 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar5);
  puVar2 = (undefined8 *)(param_2 + iVar5);
  uVar8 = *puVar2;
  uVar6 = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar8;
  *(undefined1 *)(puVar1 + 1) = uVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar4);
  return param_1;
}



/* Entry: 1020d3b0c; end: 1020d3b23;  */

void FUN_1020d3b0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020d3b24; end: 1020d3caf;  */

void FUN_1020d3b24(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10da5aa78;
    puStack_30 = &UNK_10da5ab80;
    puStack_28 = &UNK_10da5ab98;
    func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020d3cb0; end: 1020d3cbf;  */

void FUN_1020d3cb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6aef98,1);
  return;
}



/* Entry: 1020d3cc0; end: 1020d3d03;  */

undefined8 FUN_1020d3cc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1020d34e4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020d3d04; end: 1020d3d67;  */

void FUN_1020d3d04(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  FUN_1020d34e4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1020d3d68;
  plVar2[7] = unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d329c,0,0);
  return;
}



/* Entry: 1020d3d68; end: 1020d3da3;  */

void FUN_1020d3d68(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020d3da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020d3da4; end: 1020d3f33;  */

undefined8 FUN_1020d3da4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020d3f34; end: 1020d3fa3;  */

void FUN_1020d3f34(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0;
    puVar2 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                        param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1020d3fa4; end: 1020d3fe3;  */

void FUN_1020d3fa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e57638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5bdf4;
  func_0x000107c61520(&UNK_10da5bdf4,&UNK_1104ca100);
  puRam0000000112e57638 = puVar1;
  return;
}



/* Entry: 1020d3fe4; end: 1020d3ffb;  */

void FUN_1020d3fe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020d3ffc; end: 1020d422f;  */

long * FUN_1020d3ffc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar16 = *param_2;
    lVar9 = param_2[1];
    *param_1 = lVar16;
    *(char *)(param_1 + 1) = (char)lVar9;
    lVar9 = param_2[2];
    lVar15 = param_2[3];
    param_1[2] = lVar9;
    param_1[3] = lVar15;
    lVar14 = param_2[4];
    lVar10 = param_2[5];
    param_1[4] = lVar14;
    param_1[5] = lVar10;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    uVar4 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar4;
    lVar7 = 0;
    func_0x0001020c2460();
    lVar17 = (long)*(int *)(lVar7 + 0x18);
    lVar8 = 0;
    func_0x000107c5ede0();
    lVar11 = *(long *)(lVar8 + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    func_0x000107c6157c(lVar16);
    func_0x000107c61174(lVar9);
    func_0x000107c6157c(lVar15);
    func_0x000107c6157c(lVar14);
    func_0x000107c6157c(lVar10);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    lVar9 = (long)puVar2 + lVar17;
    (*pcVar12)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar8);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar17,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar17,(long)puVar2 + lVar17,
                          *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(lVar7 + 0x1c);
    lVar9 = (long)puVar2 + lVar15;
    (*pcVar12)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar11 + 0x10))((long)puVar1 + lVar15,(long)puVar2 + lVar15,lVar8);
      (**(code **)(lVar11 + 0x38))((long)puVar1 + lVar15,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar15,(long)puVar2 + lVar15,
                          *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
    func_0x000107c61434();
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar13 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar9 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020d4230; end: 1020d4323;  */

/* WARNING: Possible PIC construction at 0x0001020d4284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020d4288) */
/* WARNING: Removing unreachable block (ram,0x0001020d42c8) */
/* WARNING: Removing unreachable block (ram,0x0001020d42d8) */
/* WARNING: Removing unreachable block (ram,0x0001020d42f0) */
/* WARNING: Removing unreachable block (ram,0x0001020d4300) */

void FUN_1020d4230(undefined8 *param_1,long param_2)

{
  func_0x000107c61574(*param_1);
  func_0x000107c61170(param_1[2]);
  func_0x000107c61574(param_1[3]);
  func_0x000107c61574(param_1[4]);
  func_0x000107c61574(param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x1c) + 8));
  return;
}



/* Entry: 1020d4324; end: 1020d4c23;  */

undefined8 * FUN_1020d4324(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  uVar16 = *param_2;
  uVar8 = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar16;
  *(undefined1 *)(param_1 + 1) = uVar8;
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar15 = param_2[4];
  uVar12 = param_2[5];
  param_1[4] = uVar15;
  param_1[5] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  uVar6 = puVar2[3];
  puVar1[2] = puVar2[2];
  puVar1[3] = uVar6;
  lVar9 = 0;
  func_0x0001020c2460();
  lVar17 = (long)*(int *)(lVar9 + 0x18);
  lVar10 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar10 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  func_0x000107c6157c(uVar16);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar12);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  lVar11 = (long)puVar2 + lVar17;
  (*pcVar14)(lVar11,1,lVar10);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar13 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar10);
    (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar17,0,1,lVar10);
  }
  else {
    lVar11 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)puVar1 + lVar17,(long)puVar2 + lVar17,
                        *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(lVar9 + 0x1c);
  lVar11 = (long)puVar2 + lVar9;
  (*pcVar14)(lVar11,1,lVar10);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar13 + 0x10))((long)puVar1 + lVar9,(long)puVar2 + lVar9,lVar10);
    (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar9,0,1,lVar10);
  }
  else {
    lVar11 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)puVar1 + lVar9,(long)puVar2 + lVar9,
                        *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)iVar7) = *(undefined8 *)((long)param_2 + (long)iVar7);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1020d4c24; end: 1020d4c3b;  */

void FUN_1020d4c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020d4c3c; end: 1020d4c73;  */

void FUN_1020d4c3c(undefined8 param_1)

{
  if (lRam0000000112e57698 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6aefc0);
  return;
}



/* Entry: 1020d4c74; end: 1020d4d0b;  */

void FUN_1020d4c74(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10da5ac60;
  puStack_48 = &UNK_10da5ac78;
  puStack_40 = &UNK_10da5ac78;
  lVar1 = 0x13f;
  func_0x0001020c2460();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10da5ac90;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    func_0x000107c6153c(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020d4d0c; end: 1020d5533;  */

void FUN_1020d4d0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  double dVar12;
  long extraout_x8_01;
  undefined8 *puVar13;
  long lVar14;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  double dVar22;
  double dStack_150;
  long alStack_148 [7];
  undefined8 *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar16 = 0x112d36580;
  lStack_f8 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  alStack_148[5] = (long)&dStack_150 - extraout_x8;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  dVar12 = (double)(((long)&dStack_150 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)
                   );
  lVar16 = 0x112e576e8;
  dStack_150 = dVar12;
  func_0x0001000285a8(0x112e576e8,&UNK_10da5ad28);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar16 = (long)dVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_148[6] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar16 - extraout_x12);
  lVar5 = 0;
  puStack_f0 = puVar13;
  FUN_1020d4c3c();
  alStack_148[3] = *(long *)(lVar5 + -8);
  alStack_148[1] = *(long *)(alStack_148[3] + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar13 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  lVar16 = 0x112e576f0;
  alStack_148[2] = lVar14;
  func_0x0001000285a8(0x112e576f0,&UNK_10da5ad30);
  alStack_148[4] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (undefined8 *)(lVar14 - extraout_x12_01);
  lVar16 = 0x112e576f8;
  func_0x0001000285a8(0x112e576f8,&UNK_10da5ad38);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  lVar14 = (long)puVar20 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = (undefined8 *)(lVar14 - extraout_x12_02);
  lVar14 = param_6 + *(int *)(lVar5 + 0x1c);
  lVar6 = 0;
  func_0x0001020c2460();
  iVar2 = *(int *)(lVar6 + 0x18);
  lVar7 = 0;
  alStack_148[0] = lVar6;
  func_0x0001020d26e8();
  FUN_1020d5ce0(lVar14 + iVar2,(long)puVar19 + (long)*(int *)(lVar7 + 0x14),0x112d36580,
                &UNK_10d9016d0);
  dVar22 = *(double *)(param_6 + *(int *)(lVar5 + 0x24));
  dVar12 = dVar22 + dVar22;
  *puVar19 = 0;
  *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar7 + 0x18)) = 0;
  *(double *)((long)puVar19 + (long)*(int *)(lVar7 + 0x1c)) = dVar12;
  *(double *)((long)puVar19 + (long)*(int *)(lVar7 + 0x20)) = dVar12;
  uVar8 = 0x28;
  func_0x0001026ff7d0();
  uVar10 = uVar8;
  func_0x000107c5f56c();
  lVar5 = 0x112e57700;
  func_0x0001000285a8(0x112e57700,&UNK_10da5ad40);
  puVar13 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar5 + 0x24));
  *puVar13 = uVar8;
  *(char *)(puVar13 + 1) = (char)uVar10;
  puStack_110 = puVar19;
  *(undefined2 *)((long)puVar19 + (long)*(int *)(lVar16 + 0x24)) = 0x100;
  uStack_c8 = *(undefined8 *)(param_6 + 0x18);
  uStack_d0 = *(undefined8 *)(param_6 + 0x10);
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(&uStack_e0);
  uVar10 = uStack_e0;
  uStack_c8 = *(undefined8 *)(param_6 + 0x28);
  uStack_d0 = *(undefined8 *)(param_6 + 0x20);
  func_0x0001000285a8(0x112e57708,&UNK_10da5ad50);
  func_0x000107c5f72c(&uStack_e0);
  uVar8 = uStack_e0;
  pcVar17 = *(code **)(lVar18 + 0x38);
  lVar16 = (long)puVar20 + (long)*(int *)(lVar7 + 0x14);
  uVar11 = 1;
  (*pcVar17)(lVar16,1,1,lVar4);
  *puVar20 = uVar10;
  *(undefined8 *)((long)puVar20 + (long)*(int *)(lVar7 + 0x18)) = uVar8;
  *(double *)((long)puVar20 + (long)*(int *)(lVar7 + 0x1c)) = dVar12;
  *(double *)((long)puVar20 + (long)*(int *)(lVar7 + 0x20)) = dVar12;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_d0,dVar12,0,dVar12,0,lVar16,uVar11);
  lVar16 = 0x112e57710;
  func_0x0001000285a8(0x112e57710,&UNK_10da5ad58);
  uVar10 = uStack_d0;
  puVar13 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar16 + 0x24));
  puVar13[1] = uStack_c8;
  *puVar13 = uVar10;
  puVar13[3] = uStack_b8;
  puVar13[2] = uStack_c0;
  puVar13[5] = uStack_a8;
  puVar13[4] = uStack_b0;
  lVar16 = 0x112e57718;
  uVar8 = uStack_c0;
  func_0x0001000285a8(0x112e57718,&UNK_10da5ad60);
  *(undefined2 *)((long)puVar20 + (long)*(int *)(lVar16 + 0x24)) = 0x100;
  lVar16 = alStack_148[2];
  FUN_1020d5790(param_6,alStack_148[2]);
  uVar15 = (ulong)*(byte *)(alStack_148[3] + 0x50);
  uVar21 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  puVar9 = &UNK_1104c97d8;
  func_0x000107c613fc(&UNK_1104c97d8,uVar21 + alStack_148[1],uVar15 | 7);
  func_0x0001020d57d4(lVar16,puVar9 + uVar21);
  uStack_e8 = 0;
  uVar10 = 0x112e08348;
  func_0x0001000285a8(0x112e08348,&UNK_10da5ac20);
  func_0x000107c5f728(&uStack_e0,&uStack_e8,uVar10);
  puVar13 = (undefined8 *)((long)puVar20 + (long)*(int *)(alStack_148[4] + 0x24));
  *puVar13 = &UNK_10da5ad70;
  puVar13[1] = puVar9;
  lVar16 = alStack_148[5];
  puVar13[3] = uStack_d8;
  puVar13[2] = uStack_e0;
  FUN_1020d5ce0(lVar14 + *(int *)(alStack_148[0] + 0x1c),lVar16,0x112d36580,&UNK_10d9016d0);
  lVar5 = lVar16;
  (**(code **)(lVar18 + 0x30))(lVar16,1,lVar4);
  dVar12 = dStack_150;
  bVar3 = (int)lVar5 != 1;
  if (bVar3) {
    (**(code **)(lVar18 + 0x20))(dStack_150,lVar16,lVar4);
    puVar19 = puStack_f0;
    iVar2 = *(int *)(lVar7 + 0x14);
    (**(code **)(lVar18 + 0x10))((long)puStack_f0 + (long)iVar2,dVar12,lVar4);
    (*pcVar17)((long)puVar19 + (long)iVar2,0,1,lVar4);
    uVar10 = 0xcd;
    func_0x0001026ff7d0();
    *puVar19 = 0;
    *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar7 + 0x18)) = uVar10;
    *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar7 + 0x1c)) = 0x4024000000000000;
    *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar7 + 0x20)) = 0x4024000000000000;
    func_0x000107c5f56c();
    uVar11 = 0x4008000000000000;
    func_0x000107c5f280();
    lVar16 = 0x112e57730;
    func_0x0001000285a8(0x112e57730,&UNK_10da5ad90);
    puVar1 = (undefined1 *)((long)puVar19 + (long)*(int *)(lVar16 + 0x24));
    *puVar1 = (char)uVar10;
    *(undefined8 *)(puVar1 + 8) = uVar11;
    *(undefined8 *)(puVar1 + 0x10) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    uVar8 = 0x21;
    func_0x0001026ff7d0();
    uVar10 = uVar8;
    func_0x000107c5f56c();
    (**(code **)(lVar18 + 8))(dVar12,lVar4);
    lVar16 = 0x112e57738;
    func_0x0001000285a8(0x112e57738,&UNK_10da5ad98);
    puVar13 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar16 + 0x24));
    *puVar13 = uVar8;
    *(char *)(puVar13 + 1) = (char)uVar10;
    lVar16 = 0x112e57740;
    func_0x0001000285a8(0x112e57740,&UNK_10da5ada0);
    *(undefined2 *)((long)puVar19 + (long)*(int *)(lVar16 + 0x24)) = 0x100;
    lVar16 = 0x112e57720;
    func_0x0001000285a8(0x112e57720,&UNK_10da5ad80);
    puVar13 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar16 + 0x24));
    *puVar13 = 0;
    puVar13[1] = dVar22;
    pcVar17 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
  }
  else {
    FUN_1020d58b8(lVar16,0x112d36580,&UNK_10d9016d0);
    lVar16 = 0x112e57720;
    func_0x0001000285a8(0x112e57720,&UNK_10da5ad80);
    pcVar17 = *(code **)(*(long *)(lVar16 + -8) + 0x38);
    puVar19 = puStack_f0;
  }
  (*pcVar17)(puVar19,!bVar3,1,lVar16);
  lVar14 = lStack_108;
  puVar13 = puStack_110;
  FUN_1020d5ce0(puStack_110,lStack_108,0x112e576f8,&UNK_10da5ad38);
  lVar4 = lStack_100;
  FUN_1020d5ce0(puVar20,lStack_100,0x112e576f0);
  puVar19 = puStack_f0;
  lVar5 = alStack_148[6];
  FUN_1020d5ce0(puStack_f0,alStack_148[6],0x112e576e8,&UNK_10da5ad28);
  lVar6 = lStack_f8;
  FUN_1020d5ce0(lVar14,lStack_f8,0x112e576f8,&UNK_10da5ad38);
  lVar16 = 0x112e57728;
  func_0x0001000285a8(0x112e57728,&UNK_10da5ad88);
  FUN_1020d5ce0(lVar4,lVar6 + *(int *)(lVar16 + 0x30),0x112e576f0,&UNK_10da5ad30);
  FUN_1020d5ce0(lVar5,lVar6 + *(int *)(lVar16 + 0x40),0x112e576e8,&UNK_10da5ad28);
  FUN_1020d58b8(puVar19,0x112e576e8,&UNK_10da5ad28);
  FUN_1020d58b8(puVar20,0x112e576f0,&UNK_10da5ad30);
  FUN_1020d58b8(puVar13,0x112e576f8,&UNK_10da5ad38);
  FUN_1020d58b8(lVar5,0x112e576e8,&UNK_10da5ad28);
  FUN_1020d58b8(lVar4,0x112e576f0,&UNK_10da5ad30);
  FUN_1020d58b8(lVar14,0x112e576f8,&UNK_10da5ad38);
  return;
}



/* Entry: 1020d5534; end: 1020d554b;  */

void FUN_1020d5534(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d554c,0,0);
  return;
}



/* Entry: 1020d554c; end: 1020d560b;  */

void FUN_1020d554c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar6 = *puVar10;
  FUN_1020d58f8(uVar6,*(undefined1 *)(puVar10 + 1));
  func_0x000100083b20(unaff_x22 + 0x10);
  func_0x000107c61574(uVar6);
  lVar9 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x30) = lVar9;
  lVar7 = 0;
  FUN_1020d4c3c();
  plVar8 = (long *)((long)puVar10 + (long)*(int *)(lVar7 + 0x1c));
  lVar1 = *plVar8;
  lVar3 = plVar8[1];
  lVar2 = plVar8[2];
  lVar4 = plVar8[3];
  plVar8 = (long *)((long)puVar10 + (long)*(int *)(lVar7 + 0x20));
  lVar7 = *plVar8;
  lVar5 = plVar8[1];
  plVar8 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1020d560c;
  plVar8[0x17] = lVar5;
  plVar8[0x18] = lVar9;
  plVar8[0x15] = lVar4;
  plVar8[0x16] = lVar7;
  plVar8[0x13] = lVar3;
  plVar8[0x14] = lVar2;
  plVar8[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c5118,0,0);
  return;
}



/* Entry: 1020d560c; end: 1020d5663;  */

void FUN_1020d560c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  *(undefined8 *)(lVar2 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d5664,0,0);
  return;
}



/* Entry: 1020d5664; end: 1020d571b;  */

void FUN_1020d5664(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000107c61174();
  uVar3 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x18),uVar3);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c6157c(uVar1);
  uVar3 = 0x112e57708;
  func_0x0001000285a8(0x112e57708,&UNK_10da5ad50);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x20),uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001020d5718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020d571c; end: 1020d5727;  */

void FUN_1020d571c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020d5728; end: 1020d576f;  */

void FUN_1020d5728(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c5f7ac();
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0x112e576e0;
  func_0x0001000285a8(0x112e576e0,&UNK_10da5ad20);
  FUN_1020d4d0c((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  return;
}



/* Entry: 1020d5770; end: 1020d578f;  */

undefined8 FUN_1020d5770(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_90 [12];
  uint uStack_84;
  code *pcStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  puVar1 = (ulong *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (ulong *)(param_2 + *(int *)(param_3 + 0x1c));
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  uVar12 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar12 - extraout_x12;
  lVar14 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar11 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar11 - extraout_x12_00;
  uVar9 = puVar2[1];
  if (puVar1[1] == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar6 = *puVar1;
    if (((uVar6 != *puVar2) || (puVar1[1] != uVar9)) && (func_0x000107c605b8(), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  uVar9 = puVar2[3];
  if (puVar1[3] == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar6 = puVar1[2];
    if (((uVar6 != puVar2[2]) || (puVar1[3] != uVar9)) && (func_0x000107c605b8(), (uVar6 & 1) == 0))
    {
      return 0;
    }
  }
  lVar7 = 0;
  uStack_78 = uVar12;
  puStack_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001020c2460();
  iVar3 = *(int *)(lVar7 + 0x18);
  lVar13 = (long)*(int *)(lVar14 + 0x30);
  lStack_68 = lVar7;
  func_0x000100029394((long)puVar1 + (long)iVar3,lVar15);
  func_0x000100029394((long)puVar2 + (long)iVar3,lVar15 + lVar13);
  pcVar10 = *(code **)(lVar17 + 0x30);
  lVar7 = lVar15;
  (*pcVar10)(lVar15,1,lVar5);
  if ((int)lVar7 == 1) {
    lVar13 = lVar15 + lVar13;
    (*pcVar10)(lVar13,1,lVar5);
    if ((int)lVar13 != 1) goto LAB_1020c39e4;
    pcStack_80 = pcVar10;
    FUN_1020c3a80(lVar15,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000100029394(lVar15,lVar16);
    lVar7 = lVar15 + lVar13;
    (*pcVar10)(lVar7,1,lVar5);
    puVar4 = puStack_70;
    if ((int)lVar7 == 1) {
      (**(code **)(lVar17 + 8))(lVar16,lVar5);
      goto LAB_1020c39e4;
    }
    puVar8 = puStack_70;
    pcStack_80 = pcVar10;
    (**(code **)(lVar17 + 0x20))(puStack_70,lVar15 + lVar13,lVar5);
    func_0x000101553b98();
    lVar13 = lVar16;
    func_0x000107c5fab8(lVar16,puVar4,lVar5,puVar8);
    uStack_84 = (uint)lVar13;
    pcVar10 = *(code **)(lVar17 + 8);
    (*pcVar10)(puVar4,lVar5);
    (*pcVar10)(lVar16,lVar5);
    FUN_1020c3a80(lVar15,0x112d36580,&UNK_10d9016d0);
    if ((uStack_84 & 1) == 0) {
      return 0;
    }
  }
  iVar3 = *(int *)(lStack_68 + 0x1c);
  lVar14 = (long)*(int *)(lVar14 + 0x30);
  func_0x000100029394((long)puVar1 + (long)iVar3,lVar11);
  func_0x000100029394((long)puVar2 + (long)iVar3,lVar11 + lVar14);
  pcVar10 = pcStack_80;
  lVar16 = lVar11;
  (*pcStack_80)(lVar11,1,lVar5);
  uVar9 = uStack_78;
  lVar15 = lVar11;
  if ((int)lVar16 == 1) {
    lVar14 = lVar11 + lVar14;
    (*pcVar10)(lVar14,1,lVar5);
    if ((int)lVar14 == 1) {
      FUN_1020c3a80(lVar11,0x112d36580,&UNK_10d9016d0);
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar11,uStack_78);
    lVar16 = lVar11 + lVar14;
    (*pcVar10)(lVar16,1,lVar5);
    puVar4 = puStack_70;
    if ((int)lVar16 != 1) {
      puVar8 = puStack_70;
      (**(code **)(lVar17 + 0x20))(puStack_70,lVar11 + lVar14,lVar5);
      func_0x000101553b98();
      uVar12 = uVar9;
      func_0x000107c5fab8(uVar9,puVar4,lVar5,puVar8);
      pcVar10 = *(code **)(lVar17 + 8);
      (*pcVar10)(puVar4,lVar5);
      (*pcVar10)(uVar9,lVar5);
      FUN_1020c3a80(lVar11,0x112d36580,&UNK_10d9016d0);
      if ((uVar12 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar17 + 8))(uVar9,lVar5);
  }
LAB_1020c39e4:
  FUN_1020c3a80(lVar15,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 1020d5790; end: 1020d5817;  */

undefined8 FUN_1020d5790(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1020d4c3c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020d5818; end: 1020d587b;  */

void FUN_1020d5818(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  FUN_1020d4c3c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1020d587c;
  plVar2[5] = unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020d554c,0,0);
  return;
}



/* Entry: 1020d587c; end: 1020d58b7;  */

void FUN_1020d587c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020d58b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020d58b8; end: 1020d58f7;  */

undefined8 FUN_1020d58b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1020d58f8; end: 1020d5a7b;  */

undefined8 FUN_1020d58f8(undefined8 param_1,char param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5f3f8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  func_0x000107c6157c();
  if (param_2 != '\x01') {
    func_0x000107c5ff78();
    uVar3 = uVar2;
    func_0x000107c5f558();
    uVar5 = uVar3;
    func_0x000107c611d4();
    if ((int)uVar5 != 0) {
      puVar4 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar5 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar4 = 0x8200102;
      uVar6 = 0xd000000000000018;
      uStack_58 = uVar5;
      func_0x0001014bfa20(0xd000000000000018,0x800000010f062310,&uStack_58);
      *(undefined8 *)(puVar4 + 1) = uVar6;
      func_0x000107c60ea4(0x100000000,uVar3,(uint)uVar2 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar4,0xc);
      func_0x000100183ab8(uVar5);
      func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c5f3f4(puVar7);
    func_0x000107c614bc(&uStack_58,puVar7,param_1);
    func_0x000107c61574(param_1);
    (**(code **)(lVar8 + 8))(puVar7,lVar1);
    param_1 = uStack_58;
  }
  return param_1;
}



/* Entry: 1020d5a7c; end: 1020d5c8f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1020d5a7c(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  func_0x000107c5f3f8();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar8 - extraout_x8_00);
  FUN_1020d5ce0();
  puVar2 = puVar9;
  func_0x000107c614c4(puVar9,lVar3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,puVar9,lVar3);
  }
  else {
    uVar10 = *puVar9;
    func_0x000107c5ff78();
    puVar9 = puVar2;
    func_0x000107c5f558();
    puVar4 = puVar9;
    func_0x000107c611d4();
    if ((int)puVar4 != 0) {
      puVar5 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0x5463696d616e7944;
      auStack_70[1] = uVar6;
      func_0x0001014bfa20(0x5463696d616e7944,0xef657a6953657079,auStack_70 + 1);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      func_0x000107c60ea4(0x100000000,puVar9,(uint)puVar2 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar5,0xc);
      func_0x000100183ab8(uVar6);
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(puVar9);
    func_0x000107c5f3f4(lVar8);
    func_0x000107c614bc(param_1,lVar8,uVar10);
    func_0x000107c61574(uVar10);
    (**(code **)(lVar11 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 1020d5c90; end: 1020d5cdf;  */

void FUN_1020d5c90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e57748 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57750;
  func_0x00010002969c(0x112e57750,&UNK_10da5adb0);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,uVar1);
  puRam0000000112e57748 = puVar2;
  return;
}



/* Entry: 1020d5ce0; end: 1020d5d27;  */

undefined8 FUN_1020d5ce0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020d5d28; end: 1020d5e07;  */

long * FUN_1020d5d28(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((uVar1 >> 0x11 & 1) == 0) {
    param_1[1] = param_2[1];
    lVar6 = (long)*(int *)(param_3 + 0x14);
    func_0x000107c61174();
    uVar4 = 0x112e57758;
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    lVar3 = (long)param_2 + lVar6;
    func_0x000107c614c4(lVar3,uVar4);
    bVar2 = (int)lVar3 != 1;
    if (bVar2) {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      func_0x000107c6157c();
    }
    else {
      lVar3 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3)
      ;
    }
    func_0x000107c6159c((long)param_1 + lVar6,uVar4,!bVar2);
  }
  else {
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020d5e08; end: 1020d5e83;  */

void FUN_1020d5e08(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61170(*param_1);
  lVar3 = (long)*(int *)(param_2 + 0x14);
  uVar1 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar2 = (long)param_1 + lVar3;
  func_0x000107c614c4(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    func_0x000107c5f340();
                    /* WARNING: Could not recover jumptable at 0x0001020d5e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + lVar3,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)((long)param_1 + lVar3));
  return;
}



/* Entry: 1020d5e84; end: 1020d5f2f;  */

undefined8 * FUN_1020d5e84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  func_0x000107c61174();
  uVar2 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar3 = (long)param_2 + lVar4;
  func_0x000107c614c4(lVar3,uVar2);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
    func_0x000107c6157c();
  }
  else {
    lVar3 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3);
  }
  func_0x000107c6159c((long)param_1 + lVar4,uVar2,!bVar1);
  return param_1;
}



/* Entry: 1020d5f30; end: 1020d601b;  */

undefined8 * FUN_1020d5f30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  param_1[1] = param_2[1];
  if (param_1 != param_2) {
    lVar4 = (long)*(int *)(param_3 + 0x14);
    uVar3 = 0x112e57758;
    func_0x0001020d7294((long)param_1 + lVar4,0x112e57758,&UNK_10da5add0);
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    lVar2 = (long)param_2 + lVar4;
    func_0x000107c614c4(lVar2,uVar3);
    bVar1 = (int)lVar2 != 1;
    if (bVar1) {
      *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
      func_0x000107c6157c();
    }
    else {
      lVar2 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2)
      ;
    }
    func_0x000107c6159c((long)param_1 + lVar4,uVar3,!bVar1);
  }
  return param_1;
}



/* Entry: 1020d601c; end: 1020d60c7;  */

undefined8 * FUN_1020d601c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar2 = (long)param_2 + lVar3;
  func_0x000107c614c4(lVar2,lVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar2);
    func_0x000107c6159c((long)param_1 + lVar3,lVar1,1);
  }
  else {
    func_0x000107c610b4((long)param_1 + lVar3,(long)param_2 + lVar3,
                        *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1020d60c8; end: 1020d61af;  */

undefined8 * FUN_1020d60c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  if (param_1 != param_2) {
    lVar4 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0x112e57758;
    func_0x0001020d7294((long)param_1 + lVar4,0x112e57758,&UNK_10da5add0);
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    lVar3 = (long)param_2 + lVar4;
    func_0x000107c614c4(lVar3,lVar2);
    if ((int)lVar3 == 1) {
      lVar3 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3)
      ;
      func_0x000107c6159c((long)param_1 + lVar4,lVar2,1);
    }
    else {
      func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                          *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Entry: 1020d61b0; end: 1020d61c7;  */

void FUN_1020d61b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020d61c8; end: 1020d61ff;  */

void FUN_1020d61c8(undefined8 param_1)

{
  if (lRam0000000112e577c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6af010);
  return;
}



/* Entry: 1020d6200; end: 1020d62c7;  */

void FUN_1020d6200(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10da5adf8;
  lVar1 = 0x13f;
  func_0x0001020d6274();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020d62c8; end: 1020d62d7;  */

void FUN_1020d62c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af038,1);
  return;
}



/* Entry: 1020d62d8; end: 1020d6557;  */

void FUN_1020d62d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined8 uVar11;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  long alStack_e0 [2];
  long alStack_d0 [5];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *plVar7;
  
  lVar5 = 0x112e57800;
  puVar10 = &UNK_10da5ae60;
  func_0x0001000285a8();
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  plVar7 = (long *)((long)alStack_d0 + lVar3);
  func_0x000107c5f7ac();
  *plVar7 = lVar6;
  *(undefined **)((long)alStack_d0 + lVar3 + 8) = puVar10;
  lVar6 = 0x112e57808;
  func_0x0001000285a8(0x112e57808,&UNK_10da5ae68);
  FUN_1020d6558((long)plVar7 + (long)*(int *)(lVar6 + 0x2c));
  uVar11 = 0x112e57810;
  FUN_1020d7668(0x112e57810,0x112e57800,&UNK_10da5ae60,
                PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910);
  func_0x0001026ffb14(param_1,0x4036000000000000,0x17,lVar5,uVar11);
  func_0x0001020d7294(plVar7,0x112e57800,&UNK_10da5ae60);
  uVar4 = SUB81(plVar7,0);
  func_0x000107c5f584();
  uVar11 = 0x4020000000000000;
  func_0x000107c5f280();
  lVar5 = 0x112e57818;
  puVar10 = &UNK_10da5ae70;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar1 = uVar4;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f7ac();
  *(long *)((long)alStack_e0 + lVar3) = lVar5;
  *(undefined **)((long)alStack_e0 + lVar3 + 8) = puVar10;
  auStack_e8[lVar3] = 1;
  *(undefined8 *)((long)&uStack_f0 + lVar3) = 0;
  auStack_f8[lVar3] = 1;
  *(undefined8 *)((long)&uStack_100 + lVar3) = 0;
  func_0x000107c5f388(alStack_d0,0,1,0,1,0x7ff0000000000000,0,0,1);
  lVar5 = 0x112e57820;
  func_0x0001000285a8(0x112e57820,&UNK_10da5ae78);
  plVar7 = (long *)(param_1 + *(int *)(lVar5 + 0x24));
  plVar7[9] = lStack_88;
  plVar7[8] = lStack_90;
  plVar7[0xb] = lStack_78;
  plVar7[10] = lStack_80;
  plVar7[0xd] = lStack_68;
  plVar7[0xc] = lStack_70;
  plVar7[1] = alStack_d0[1];
  *plVar7 = alStack_d0[0];
  plVar7[3] = alStack_d0[3];
  plVar7[2] = alStack_d0[2];
  plVar7[5] = lStack_a8;
  plVar7[4] = alStack_d0[4];
  plVar7[7] = lStack_98;
  plVar7[6] = lStack_a0;
  uVar8 = 0x6b;
  func_0x0001026ff7d0();
  uVar11 = uVar8;
  func_0x000107c5f56c();
  lVar5 = 0x112e57828;
  func_0x0001000285a8(0x112e57828,&UNK_10da5ae80);
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x24));
  *puVar2 = uVar8;
  *(char *)(puVar2 + 1) = (char)uVar11;
  func_0x000107c5f2e4();
  uVar9 = 0;
  func_0x000107c5f2dc(0);
  uVar11 = uVar9;
  func_0x000107c5f2e4();
  uVar8 = uVar11;
  func_0x000107c5f2e8();
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar11);
  lVar6 = lVar5;
  func_0x000107c5f2d8(lVar5,uVar8);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(uVar8);
  lVar5 = 0x112e57830;
  func_0x0001000285a8(0x112e57830,&UNK_10da5ae88);
  *(long *)(param_1 + *(int *)(lVar5 + 0x24)) = lVar6;
  return;
}



/* Entry: 1020d6558; end: 1020d689f;  */

void FUN_1020d6558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long alStack_a0 [4];
  
  lVar4 = 0;
  alStack_a0[3] = param_1;
  FUN_1020d61c8();
  alStack_a0[1] = *(long *)(lVar4 + -8);
  lVar10 = *(long *)(alStack_a0[1] + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)alStack_a0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e57838;
  func_0x0001000285a8(0x112e57838,&UNK_10da5ae90);
  alStack_a0[2] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_a0[2] + 0x40));
  lVar13 = lVar17 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  lVar5 = 0x112e57840;
  func_0x0001000285a8(0x112e57840,&UNK_10da5ae98);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar3 = (undefined1)lVar6;
  lVar15 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar15 - extraout_x12_00;
  FUN_1020d68a0(lVar16);
  func_0x000107c5f568();
  uVar18 = 0x403c000000000000;
  func_0x000107c5f280();
  lVar6 = 0x112e57848;
  func_0x0001000285a8(0x112e57848,&UNK_10da5aea0);
  puVar1 = (undefined1 *)(lVar16 + *(int *)(lVar6 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar18;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  puVar7 = &UNK_10da5aea8;
  func_0x000107c614e0();
  lVar6 = 0x112e57850;
  func_0x0001000285a8(0x112e57850,&UNK_10da5aed8);
  puVar2 = (undefined8 *)(lVar16 + *(int *)(lVar6 + 0x24));
  *puVar2 = puVar7;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 *)(lVar16 + *(int *)(lVar5 + 0x24)) = 0x3ff0000000000000;
  FUN_1020d7100(param_6,lVar17);
  uVar9 = (ulong)*(byte *)(alStack_a0[1] + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &UNK_1104c9848;
  func_0x000107c613fc(&UNK_1104c9848,uVar12 + lVar10,uVar9 | 7);
  func_0x0001020d7144(lVar17,puVar7 + uVar12);
  uVar18 = 0x112e57858;
  func_0x0001000285a8(0x112e57858,&UNK_10da5aee0);
  uVar8 = 0x112e57860;
  FUN_1020d7528(0x112e57860,0x112e57858,&UNK_10da5aee0,FUN_1020d7194);
  func_0x000107c5f738(lVar14,FUN_1020d7188,puVar7,0x1020d6c14,0,uVar18,uVar8);
  FUN_1020d724c(lVar16,lVar15,0x112e57840,&UNK_10da5ae98);
  lVar6 = alStack_a0[2];
  pcVar11 = *(code **)(alStack_a0[2] + 0x10);
  (*pcVar11)(lVar13,lVar14,lVar4);
  lVar10 = alStack_a0[3];
  FUN_1020d724c(lVar15,alStack_a0[3],0x112e57840,&UNK_10da5ae98);
  lVar5 = 0x112e57880;
  func_0x0001000285a8(0x112e57880,&UNK_10da5aef0);
  (*pcVar11)(lVar10 + *(int *)(lVar5 + 0x30),lVar13,lVar4);
  pcVar11 = *(code **)(lVar6 + 8);
  (*pcVar11)(lVar14,lVar4);
  func_0x0001020d7294(lVar16,0x112e57840,&UNK_10da5ae98);
  (*pcVar11)(lVar13,lVar4);
  func_0x0001020d7294(lVar15,0x112e57840,&UNK_10da5ae98);
  return;
}



/* Entry: 1020d68a0; end: 1020d6bb7;  */

void FUN_1020d68a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long alStack_70 [2];
  
  lVar1 = 0x112e57888;
  alStack_70[1] = param_1;
  func_0x0001000285a8(0x112e57888,&UNK_10da5aef8);
  alStack_70[0] = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = -extraout_x8;
  plVar8 = (long *)((long)alStack_70 + lVar5);
  lVar1 = 0x112e57890;
  func_0x0001000285a8(0x112e57890,&UNK_10da5af00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)plVar8 - extraout_x8_00;
  lVar2 = 0x112e57898;
  func_0x0001000285a8(0x112e57898,&UNK_10db564f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar14 = (long *)(lVar13 - extraout_x8_01);
  lVar3 = 0;
  func_0x000107c5f340();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)plVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_1020d61c8();
  FUN_1020d5a7c(lVar9);
  func_0x000107c5f338();
  (**(code **)(lVar12 + 8))(lVar9,lVar3);
  if ((uVar4 & 1) == 0) {
    func_0x000107c5f410();
    *plVar8 = lVar9;
    *(undefined8 *)((long)alStack_70 + lVar5 + 8) = 0x4010000000000000;
    (&stack0xffffffffffffffa0)[lVar5] = 0;
    lVar5 = 0x112e578a0;
    func_0x0001000285a8(0x112e578a0,&UNK_10da5af10);
    FUN_1020d6cd0((long)plVar8 + (long)*(int *)(lVar5 + 0x2c));
    uVar10 = 0x112e57888;
    puVar11 = &UNK_10da5aef8;
    FUN_1020d724c(plVar8,lVar13,0x112e57888,&UNK_10da5aef8);
    func_0x000107c6159c(lVar13,lVar1,1);
    uVar6 = 0x112e578a8;
    FUN_1020d7668(0x112e578a8,0x112e57898,&UNK_10db564f0,
                  PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
    uVar7 = 0x112e578b0;
    FUN_1020d7668(0x112e578b0,0x112e57888,&UNK_10da5aef8,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    func_0x000107c5f490(alStack_70[1],lVar13,lVar2,alStack_70[0],uVar6,uVar7);
  }
  else {
    func_0x000107c5f438();
    *plVar14 = lVar9;
    plVar14[1] = 0x4010000000000000;
    *(undefined1 *)(plVar14 + 2) = 0;
    lVar5 = 0x112e578b8;
    func_0x0001000285a8(0x112e578b8,&UNK_10db564d0);
    FUN_1020d6cd0((long)plVar14 + (long)*(int *)(lVar5 + 0x2c));
    uVar10 = 0x112e57898;
    puVar11 = &UNK_10db564f0;
    FUN_1020d724c(plVar14,lVar13,0x112e57898,&UNK_10db564f0);
    func_0x000107c6159c(lVar13,lVar1,0);
    uVar6 = 0x112e578a8;
    FUN_1020d7668(0x112e578a8,0x112e57898,&UNK_10db564f0,
                  PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
    uVar7 = 0x112e578b0;
    FUN_1020d7668(0x112e578b0,0x112e57888,&UNK_10da5aef8,
                  PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
    func_0x000107c5f490(alStack_70[1],lVar13,lVar2,alStack_70[0],uVar6,uVar7);
    plVar8 = plVar14;
  }
  func_0x0001020d7294(plVar8,uVar10,puVar11);
  return;
}



/* Entry: 1020d6bb8; end: 1020d6ccf;  */

void FUN_1020d6bb8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x000107c61174();
    FUN_1020d0224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  lVar4 = param_1[1];
  func_0x0001020d05f8();
  lVar3 = lVar2;
  FUN_1020c1a24();
  func_0x000107c5f394(0,lVar4,lVar2,lVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020d6c14);
  (*pcVar1)();
}



/* Entry: 1020d6cd0; end: 1020d6f4b;  */

void FUN_1020d6cd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 in_x3;
  long lVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 unaff_x20;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  FUN_1020d61c8();
  lStack_98 = *(long *)(lVar1 + -8);
  lStack_90 = *(long *)(lStack_98 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)&uStack_b0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112e02cd8;
  puVar6 = &UNK_10d9d5220;
  lStack_a0 = lVar12;
  func_0x0001000285a8();
  lVar10 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12_00;
  func_0x0001020e78e4();
  lStack_70 = lVar2;
  puStack_68 = puVar6;
  func_0x000100e8b654();
  plVar3 = &lStack_70;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  uVar4 = 0xbf;
  func_0x0001026ff7d0();
  uVar5 = uVar4;
  plVar7 = plVar3;
  puVar8 = puVar6;
  lVar9 = lVar2;
  func_0x000107c5f5d0();
  uStack_b0 = uVar5;
  lStack_a8 = lVar9;
  func_0x000107c61574(uVar4);
  func_0x000100f795bc(plVar3,puVar6,lVar2);
  func_0x000107c6142c(in_x3);
  lVar2 = lStack_a0;
  FUN_1020d7100(unaff_x20,lStack_a0);
  uVar11 = (ulong)*(byte *)(lStack_98 + 0x50);
  uVar15 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1104c9870;
  func_0x000107c613fc(&UNK_1104c9870,uVar15 + lStack_90,uVar11 | 7);
  func_0x0001020d7144(lVar2,puVar6 + uVar15);
  func_0x000107c5f738(lVar14,FUN_1020d7388,puVar6,FUN_1020d7020,0,PTR___s7SwiftUI4TextVN_1103493f8,
                      PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
  pcVar13 = *(code **)(lVar10 + 0x10);
  (*pcVar13)(lVar12,lVar14,lVar1);
  lVar9 = lStack_a8;
  uVar5 = uStack_b0;
  *param_1 = uStack_b0;
  param_1[1] = plVar7;
  *(char *)(param_1 + 2) = (char)puVar8;
  param_1[3] = lStack_a8;
  lVar2 = 0x112e578c0;
  func_0x0001000285a8(0x112e578c0,&UNK_10db564e0);
  (*pcVar13)((long)param_1 + (long)*(int *)(lVar2 + 0x30),lVar12,lVar1);
  func_0x000100f8a880(uVar5,plVar7,puVar8);
  pcVar13 = *(code **)(lVar10 + 8);
  func_0x000107c61434(lVar9);
  (*pcVar13)(lVar14,lVar1);
  (*pcVar13)(lVar12,lVar1);
  func_0x000100f795bc(uVar5,plVar7,puVar8);
  func_0x000107c6142c(lVar9);
  return;
}



/* Entry: 1020d6f4c; end: 1020d701f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020d6f4c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000100083b20(&uStack_38);
    puVar3 = &UNK_1104c9898;
    func_0x000107c613fc(&UNK_1104c9898,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar2);
    func_0x000107c6157c(puVar3);
    FUN_1020c7f48(FUN_1020d73d0,puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uStack_38);
    func_0x000107c61578(puVar3,2);
    return;
  }
  lVar5 = param_1[1];
  func_0x0001020d05f8();
  lVar4 = lVar2;
  FUN_1020c1a24();
  func_0x000107c5f394(0,lVar5,lVar2,lVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020d7020);
  (*pcVar1)();
}



/* Entry: 1020d7020; end: 1020d70ef;  */

void FUN_1020d7020(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &uStack_70;
  func_0x0001020e79ac();
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000100e8b654();
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  uVar2 = 0xc3;
  func_0x0001026ff7d0();
  uVar3 = uVar2;
  puVar5 = (undefined1 *)puVar1;
  puVar6 = puVar4;
  uVar7 = param_2;
  func_0x000107c5f5d0();
  func_0x000107c61574(uVar2);
  func_0x000100f795bc(puVar1,puVar4,param_2);
  func_0x000107c6142c(param_5);
  *param_1 = uVar3;
  param_1[1] = puVar5;
  *(char *)(param_1 + 2) = (char)puVar6;
  param_1[3] = uVar7;
  return;
}



/* Entry: 1020d70f0; end: 1020d70ff;  */

void FUN_1020d70f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020d7100; end: 1020d7187;  */

undefined8 FUN_1020d7100(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1020d61c8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020d7188; end: 1020d7193;  */

void FUN_1020d7188(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1020d61c8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020d73cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1020d6bb8(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1020d7194; end: 1020d720b;  */

void FUN_1020d7194(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e57868 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57870;
  func_0x00010002969c(0x112e57870,&UNK_10da5aee8);
  uVar2 = uVar1;
  FUN_1020d720c();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e57868 = puVar3;
  return;
}



/* Entry: 1020d720c; end: 1020d724b;  */

void FUN_1020d720c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e57878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5b6d0;
  func_0x000107c61520(&UNK_10da5b6d0,&UNK_1104c9c68);
  puRam0000000112e57878 = puVar1;
  return;
}



/* Entry: 1020d724c; end: 1020d72d3;  */

undefined8 FUN_1020d724c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020d72d4; end: 1020d7387;  */

void FUN_1020d72d4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar2 = 0;
  FUN_1020d61c8();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  func_0x000107c61170(*puVar1);
  lVar4 = (long)*(int *)(lVar2 + 0x14);
  uVar3 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar2 = (long)puVar1 + lVar4;
  func_0x000107c614c4(lVar2,uVar3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar2 + -8) + 8))((long)puVar1 + lVar4,lVar2);
  }
  else {
    func_0x000107c61574(*(undefined8 *)((long)puVar1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020d7388; end: 1020d7393;  */

void FUN_1020d7388(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1020d61c8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020d73cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1020d6f4c(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1020d7394; end: 1020d73cf;  */

void FUN_1020d7394(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1020d61c8();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020d73cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1020d73d0; end: 1020d73d7;  */

/* WARNING: Possible PIC construction at 0x0001020d0a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020d0a10) */

void FUN_1020d73d0(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_1104c9700;
  func_0x000107c613fc(&UNK_1104c9700,0x20,7);
  puVar1[0x10] = param_1;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  puVar2 = &UNK_1104c9728;
  func_0x000107c613fc(&UNK_1104c9728,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10da5aa50;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c();
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5aa58,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1020d73d8; end: 1020d7527;  */

void FUN_1020d73d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e578c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57830;
  func_0x00010002969c(0x112e57830,&UNK_10da5ae88);
  uVar2 = uVar1;
  func_0x0001020d7470();
  uVar3 = 0x112e09080;
  FUN_1020d7668(0x112e09080,0x112e09088,&UNK_10db7f080,
                PTR___s7SwiftUI21_TraitWritingModifierVyxGAA04ViewE0AAMc_110348ff0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e578c8 = puVar4;
  return;
}



/* Entry: 1020d7528; end: 1020d7667;  */

void FUN_1020d7528(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}


