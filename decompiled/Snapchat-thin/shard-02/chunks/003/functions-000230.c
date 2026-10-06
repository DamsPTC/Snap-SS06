/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bef1e4; end: 101bef263;  */

void FUN_101bef1e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101befb00;
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8(plVar3,uVar1,uVar2);
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x101bed960;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(uVar5);
  return;
}



/* Entry: 101bef264; end: 101bef2a3;  */

void FUN_101bef264(void)

{
  undefined *puVar1;
  
  if (puRam00000001134897a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dd6e0;
  func_0x000107c61520(&UNK_10d9dd6e0,&UNK_110454910);
  puRam00000001134897a0 = puVar1;
  return;
}



/* Entry: 101bef2a4; end: 101bef327;  */

void FUN_101bef2a4(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  if (*param_1 == 0) {
    (*param_3)(param_2);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101bef328; end: 101bef33f;  */

undefined8 * FUN_101bef328(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101bef340; end: 101bef7a7;  */

/* WARNING: Possible PIC construction at 0x000101bef40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bef4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bef5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bef4ac) */
/* WARNING: Removing unreachable block (ram,0x000101bef78c) */
/* WARNING: Removing unreachable block (ram,0x000101bef794) */
/* WARNING: Removing unreachable block (ram,0x000101bef7a4) */
/* WARNING: Removing unreachable block (ram,0x000101bef500) */
/* WARNING: Removing unreachable block (ram,0x000101bef50c) */
/* WARNING: Removing unreachable block (ram,0x000101bef544) */
/* WARNING: Removing unreachable block (ram,0x000101bef740) */
/* WARNING: Removing unreachable block (ram,0x000101bef54c) */
/* WARNING: Removing unreachable block (ram,0x000101bef568) */
/* WARNING: Removing unreachable block (ram,0x000101bef744) */
/* WARNING: Removing unreachable block (ram,0x000101bef56c) */
/* WARNING: Removing unreachable block (ram,0x000101bef748) */
/* WARNING: Removing unreachable block (ram,0x000101bef578) */
/* WARNING: Removing unreachable block (ram,0x000101bef550) */
/* WARNING: Removing unreachable block (ram,0x000101bef580) */
/* WARNING: Removing unreachable block (ram,0x000101bef538) */
/* WARNING: Removing unreachable block (ram,0x000101bef58c) */
/* WARNING: Removing unreachable block (ram,0x000101bef5a0) */
/* WARNING: Removing unreachable block (ram,0x000101bef5a4) */
/* WARNING: Removing unreachable block (ram,0x000101bef540) */
/* WARNING: Removing unreachable block (ram,0x000101bef5a8) */
/* WARNING: Removing unreachable block (ram,0x000101bef5cc) */
/* WARNING: Removing unreachable block (ram,0x000101bef5ac) */
/* WARNING: Removing unreachable block (ram,0x000101bef5d4) */
/* WARNING: Removing unreachable block (ram,0x000101bef5d8) */
/* WARNING: Removing unreachable block (ram,0x000101bef410) */
/* WARNING: Removing unreachable block (ram,0x000101bef74c) */
/* WARNING: Removing unreachable block (ram,0x000101bef754) */
/* WARNING: Removing unreachable block (ram,0x000101bef418) */
/* WARNING: Removing unreachable block (ram,0x000101bef424) */
/* WARNING: Removing unreachable block (ram,0x000101bef440) */
/* WARNING: Removing unreachable block (ram,0x000101bef48c) */
/* WARNING: Removing unreachable block (ram,0x000101bef444) */
/* WARNING: Removing unreachable block (ram,0x000101bef73c) */
/* WARNING: Removing unreachable block (ram,0x000101bef450) */
/* WARNING: Removing unreachable block (ram,0x000101bef45c) */
/* WARNING: Removing unreachable block (ram,0x000101bef738) */
/* WARNING: Removing unreachable block (ram,0x000101bef468) */
/* WARNING: Removing unreachable block (ram,0x000101bef4a4) */
/* WARNING: Removing unreachable block (ram,0x000101bef474) */
/* WARNING: Removing unreachable block (ram,0x000101bef488) */
/* WARNING: Removing unreachable block (ram,0x000101bef764) */
/* WARNING: Removing unreachable block (ram,0x000101bef5e0) */
/* WARNING: Removing unreachable block (ram,0x000101bef600) */
/* WARNING: Removing unreachable block (ram,0x000101bef620) */
/* WARNING: Removing unreachable block (ram,0x000101bef654) */
/* WARNING: Removing unreachable block (ram,0x000101bef62c) */
/* WARNING: Removing unreachable block (ram,0x000101bef64c) */
/* WARNING: Removing unreachable block (ram,0x000101bef660) */
/* WARNING: Removing unreachable block (ram,0x000101bef714) */

void FUN_101bef340(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = 0;
  FUN_101bef870(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar4 = uVar3;
  func_0x000100deaee4();
  puVar1 = puVar2;
  func_0x000107c5fe10(puVar2,uVar3,uVar4);
  func_0x000107c61170(puVar2);
  FUN_101bea900(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 101bef7a8; end: 101bef833;  */

void FUN_101bef7a8(long param_1)

{
  undefined1 uVar1;
  uint3 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  uVar2 = *(uint3 *)(unaff_x20 + 0x40);
  plVar4 = (long *)0x60;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x50);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bef834;
  *(undefined1 *)((long)plVar4 + 0x54) = uVar1;
  *(uint *)(plVar4 + 10) = (uint)uVar2;
  plVar4[4] = lVar5;
  plVar4[5] = lVar6;
  plVar4[2] = param_1;
  plVar4[3] = unaff_x20 + 0x10;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar6;
  func_0x000107c5fce8();
  plVar4[6] = lVar5;
  lVar5 = 0x112d45220;
  FUN_101bef2a4(0x112d45220,0xff,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[7] = lVar6;
  plVar4[8] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bea7e8,lVar6,lVar5);
  return;
}



/* Entry: 101bef834; end: 101bef86f;  */

void FUN_101bef834(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bef86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bef870; end: 101bef8af;  */

void FUN_101bef870(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101bef8b0; end: 101bef92b;  */

void FUN_101bef8b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bef92c;
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar4;
  plVar3[8] = param_2;
  plVar3[9] = lVar1;
  plVar3[7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101beb618,0,0);
  return;
}



/* Entry: 101bef92c; end: 101bef993;  */

void FUN_101bef92c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bef964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bef994; end: 101bef9f7;  */

void FUN_101bef994(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101befb08;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x101befae0;
                    /* WARNING: Could not recover jumptable at 0x000101bebe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar3,param_1);
  return;
}



/* Entry: 101bef9f8; end: 101befa43;  */

void FUN_101bef9f8(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101befb0c;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x101bec078;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(uVar3);
  return;
}



/* Entry: 101befa44; end: 101befacb;  */

undefined8 FUN_101befa44(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101befacc; end: 101befb0f;  */

undefined1  [16] FUN_101befacc(void)

{
  return ZEXT816(0x110454910);
}



/* Entry: 101befb10; end: 101befcc7;  */

undefined1  [16] FUN_101befb10(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f0033c0);
  puVar4 = &UNK_10d9dd978;
  func_0x000107c614e0(&UNK_10d9dd978);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    func_0x000107c61574(puVar4);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar10,0);
    puVar11 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar8 = puStack_78;
      uVar9 = *puVar11;
      uStack_90 = uVar9;
      func_0x000107c614b0(uVar9);
      func_0x000107c614bc(&puStack_88,&uStack_90,puVar4);
      func_0x000107c614ac(uVar9);
      uVar9 = uStack_80;
      puVar3 = puStack_88;
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puStack_78 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      puVar8 = puStack_78;
      *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_78 + uVar1 * 0x10 + 0x20) = puVar3;
      *(undefined8 *)(puStack_78 + uVar1 * 0x10 + 0x28) = uVar9;
      lVar10 = lVar10 + -1;
      puVar11 = puVar11 + 1;
    } while (lVar10 != 0);
    func_0x000107c61574(puVar4);
  }
  uVar9 = 0x112d38270;
  puStack_88 = puVar8;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar9;
  func_0x00010011d734();
  uVar6 = 0x202c;
  uVar7 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar9,uVar5);
  func_0x000107c6142c(puVar8);
  func_0x000107c5fb78(uVar6,uVar7);
  func_0x000107c6142c(uVar7);
  auVar2._8_8_ = uStack_68;
  auVar2._0_8_ = uStack_70;
  return auVar2;
}



/* Entry: 101befcc8; end: 101befd7b;  */

void FUN_101befcc8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c614cc(*param_2,auStack_48,auStack_60);
  lVar3 = *(long *)(lStack_58 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  (**(code **)(lVar3 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = lStack_58;
  lVar2 = lStack_50;
  func_0x000107c60640();
  (**(code **)(lVar3 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_58);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 101befd7c; end: 101befdbb;  */

undefined1  [16] FUN_101befd7c(void)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *unaff_x20;
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x36);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f0033c0);
  puVar4 = &UNK_10d9dd978;
  func_0x000107c614e0(&UNK_10d9dd978);
  lVar11 = *(long *)(lVar7 + 0x10);
  if (lVar11 == 0) {
    func_0x000107c61574(puVar4);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar11,0);
    puVar12 = (undefined8 *)(lVar7 + 0x20);
    do {
      puVar9 = puStack_78;
      uVar10 = *puVar12;
      uStack_90 = uVar10;
      func_0x000107c614b0(uVar10);
      func_0x000107c614bc(&puStack_88,&uStack_90,puVar4);
      func_0x000107c614ac(uVar10);
      uVar10 = uStack_80;
      puVar3 = puStack_88;
      uVar1 = *(ulong *)(puVar9 + 0x10);
      puStack_78 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puStack_78;
      *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_78 + uVar1 * 0x10 + 0x20) = puVar3;
      *(undefined8 *)(puStack_78 + uVar1 * 0x10 + 0x28) = uVar10;
      lVar11 = lVar11 + -1;
      puVar12 = puVar12 + 1;
    } while (lVar11 != 0);
    func_0x000107c61574(puVar4);
  }
  uVar10 = 0x112d38270;
  puStack_88 = puVar9;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar10;
  func_0x00010011d734();
  uVar6 = 0x202c;
  uVar8 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar10,uVar5);
  func_0x000107c6142c(puVar9);
  func_0x000107c5fb78(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  auVar2._8_8_ = uStack_68;
  auVar2._0_8_ = uStack_70;
  return auVar2;
}



/* Entry: 101befdbc; end: 101beff63;  */

void FUN_101befdbc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar5 = *(long *)(lVar6 + 0x70);
  *(long *)(unaff_x22 + 0x28) = lVar5;
  if (lVar5 == 0) {
    puVar1 = &UNK_110454b30;
    func_0x000107c613fc(&UNK_110454b30,0x20,7);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
    *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    func_0x000107c6157c(uVar2);
    uVar2 = 0x112e08b60;
    func_0x0001000285a8(0x112e08b60,&UNK_10d9dd848);
    lVar5 = 10;
    func_0x000100859150(10,3,0x50,4,0,0,&UNK_10d9dd840,puVar1,uVar2);
    *(long *)(unaff_x22 + 0x40) = lVar5;
    func_0x000107c61574(puVar1);
    uVar4 = *(undefined8 *)(lVar6 + 0x70);
    *(long *)(lVar6 + 0x70) = lVar5;
    func_0x000107c6157c(lVar5);
    func_0x000107c61574(uVar4);
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar3;
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101befff8;
    lVar6 = unaff_x22 + 0x58;
  }
  else {
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c6157c(lVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar3;
    uVar2 = 0x112e08b60;
    func_0x0001000285a8(0x112e08b60,&UNK_10d9dd848);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101beff64;
    lVar6 = unaff_x22 + 0x59;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)(lVar6,lVar5,uVar2,uVar4,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 101beff64; end: 101beffbf;  */

void FUN_101beff64(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101beffc0;
  }
  else {
    pcVar1 = FUN_101bf00a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x20),0);
  return;
}



/* Entry: 101beffc0; end: 101befff7;  */

void FUN_101beffc0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101befff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x59));
  return;
}



/* Entry: 101befff8; end: 101bf0053;  */

void FUN_101befff8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bf0054;
  }
  else {
    pcVar1 = (code *)0x101bf00d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x20),0);
  return;
}



/* Entry: 101bf0054; end: 101bf009f;  */

void FUN_101bf0054(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x58);
  *(undefined8 *)(lVar3 + 0x70) = 0;
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bf009c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101bf00a0; end: 101bf016f;  */

void FUN_101bf00a0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101bf00d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf0170; end: 101bf01e3;  */

void FUN_101bf0170(undefined1 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bf01b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined1 *)(lVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf01e4,0,0);
  return;
}



/* Entry: 101bf01e4; end: 101bf01fb;  */

void FUN_101bf01e4(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000101bf01f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf01fc; end: 101bf021f;  */

void FUN_101bf01fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101bf0220; end: 101bf022b;  */

void FUN_101bf0220(void)

{
  return;
}



/* Entry: 101bf022c; end: 101bf036f;  */

void FUN_101bf022c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08a90,&UNK_10d9dd720);
  puVar1 = &UNK_110454a28;
  func_0x000107c613fc(&UNK_110454a28,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101bf0370,puVar1);
  return;
}



/* Entry: 101bf0370; end: 101bf037b;  */

void FUN_101bf0370(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  func_0x000100083b20(&uStack_48,lVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  FUN_101bf037c();
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  param_1[3] = &UNK_110454b00;
  param_1[4] = &PTR_DAT_110454a68;
  puVar4 = &UNK_110454b80;
  func_0x000107c613fc(&UNK_110454b80,0x30,7);
  *param_1 = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(long *)(puVar4 + 0x18) = lVar1;
  *(undefined8 *)(puVar4 + 0x20) = uStack_48;
  *(long *)(puVar4 + 0x28) = lVar3;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 101bf037c; end: 101bf0443;  */

void FUN_101bf037c(void)

{
  func_0x000107c61168(&PTR_PTR_112e08ad8);
  return;
}



/* Entry: 101bf0444; end: 101bf04c7;  */

void FUN_101bf0444(void)

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
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bf04c8;
                    /* WARNING: Could not recover jumptable at 0x000101bf04c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 101bf04c8; end: 101bf0533;  */

void FUN_101bf04c8(undefined1 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x13d) = param_1;
    pcVar1 = FUN_101bf0534;
  }
  else {
    pcVar1 = FUN_101bf0934;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf0534; end: 101bf0613;  */

void FUN_101bf0534(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  cVar4 = *(char *)(unaff_x22 + 0x13d);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar4 == '\x01') {
    func_0x000100083b20(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar3 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
    piVar7 = *(int **)(lVar3 + 0x20);
    iVar1 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x118) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101bf0614;
                    /* WARNING: Could not recover jumptable at 0x000101bf05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(plVar6,*(undefined8 *)(unaff_x22 + 0xe0),uVar2,lVar3);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x13d);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101bf0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 101bf0614; end: 101bf065b;  */

void FUN_101bf0614(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf065c,0,0);
  return;
}



/* Entry: 101bf065c; end: 101bf085f;  */

void FUN_101bf065c(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x22;
  code *pcVar10;
  double dVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar8 = *(long *)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = uVar7;
  (**(code **)(lVar8 + 0x30))(uVar7,1,uVar1);
  if ((int)uVar6 == 1) {
    FUN_101bf2050(uVar7,0x112d373d8,&UNK_10d9014c0);
    func_0x0001000834e4(unaff_x22 + 0x38);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    (**(code **)(lVar8 + 0x20))(uVar2,uVar7,uVar1);
    func_0x0001000834e4(unaff_x22 + 0x38);
    func_0x000107c5eea0(uVar6);
    func_0x000107c5ee68(uVar2);
    pcVar10 = *(code **)(lVar8 + 8);
    dVar11 = param_1;
    (*pcVar10)(uVar6,uVar1);
    func_0x000100083b20(unaff_x22 + 0xb0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c4020c(uVar6);
    func_0x000107c615e8(uVar6);
    (*pcVar10)(uVar2,uVar1);
    if (param_1 < dVar11) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x100));
      func_0x000107c615c0(uVar1);
      func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101bf0790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(1);
      return;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x13c);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined4 *)(unaff_x22 + 0x138);
  func_0x000100083b20(unaff_x22 + 0x60);
  FUN_101bf1f38(unaff_x22 + 0x60,unaff_x22 + 0x88);
  puVar5 = &UNK_110454a50;
  func_0x000107c613fc(&UNK_110454a50,0x58,7);
  *(undefined **)(unaff_x22 + 0x120) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  puVar5[0x18] = (char)uVar3;
  puVar5[0x19] = (char)((uint)uVar3 >> 8);
  puVar5[0x1a] = (char)((uint)uVar3 >> 0x10);
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar5[0x28] = uVar4;
  func_0x000100cc9638(unaff_x22 + 0x88,puVar5 + 0x30);
  plVar9 = (long *)0x60;
  func_0x000107c6157c(uVar6);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101bf0860;
  lVar8 = *(long *)(unaff_x22 + 0xd8);
  plVar9[3] = (long)puVar5;
  plVar9[4] = lVar8;
  plVar9[2] = (long)&UNK_10d9dd740;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101befdbc,lVar8,0);
  return;
}



/* Entry: 101bf0860; end: 101bf08d3;  */

void FUN_101bf0860(undefined1 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x120);
  *(long *)(lVar3 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x128));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar3 + 0x13e) = param_1;
    pcVar2 = FUN_101bf08d4;
  }
  else {
    pcVar2 = FUN_101bf098c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101bf08d4; end: 101bf0933;  */

void FUN_101bf08d4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x13e);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bf0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101bf0934; end: 101bf098b;  */

void FUN_101bf0934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bf0988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf098c; end: 101bf09e3;  */

void FUN_101bf098c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bf09e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf09e4; end: 101bf0a7f;  */

void FUN_101bf09e4(long param_1,uint param_2,long param_3,undefined1 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_5;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bf0a80;
  *(undefined1 *)((long)plVar3 + 0x13b) = param_4;
  *(uint *)((long)plVar3 + 0x13c) = param_2 & 0xffffff;
  plVar3[0x29] = param_1;
  plVar3[0x2a] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf1a6c,0,0);
  return;
}



/* Entry: 101bf0a80; end: 101bf0aef;  */

void FUN_101bf0a80(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x40) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
    func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101bf0acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf0af0,0,0);
  return;
}



/* Entry: 101bf0af0; end: 101bf0bff;  */

void FUN_101bf0af0(void)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  cVar3 = *(char *)(unaff_x22 + 0x40);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  lVar2 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar1);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
  if (cVar3 == '\x01') {
    func_0x000107c5eea0(uVar8);
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar8,0,1,lVar4);
    piVar6 = *(int **)(lVar2 + 0x18);
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar6 + (long)piVar6);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar5;
    pcVar7 = FUN_101bf0c00;
  }
  else {
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar8,1,1,lVar4);
    piVar6 = *(int **)(lVar2 + 0x18);
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar6 + (long)piVar6);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar5;
    pcVar7 = FUN_101bf0ce4;
  }
  *plVar5 = unaff_x22;
  plVar5[1] = (long)pcVar7;
                    /* WARNING: Could not recover jumptable at 0x000101bf0bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0x18),uVar1,lVar2);
  return;
}



/* Entry: 101bf0c00; end: 101bf0c63;  */

void FUN_101bf0c00(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x18);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
  FUN_101bf2050(uVar1,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf0c64,0,0);
  return;
}



/* Entry: 101bf0c64; end: 101bf0ce3;  */

void FUN_101bf0c64(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bf0d48;
                    /* WARNING: Could not recover jumptable at 0x000101bf0ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined1 *)(unaff_x22 + 0x40),uVar2,lVar3);
  return;
}



/* Entry: 101bf0ce4; end: 101bf0d47;  */

void FUN_101bf0ce4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x18);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
  FUN_101bf2050(uVar1,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bf22b0,0,0);
  return;
}



/* Entry: 101bf0d48; end: 101bf0d97;  */

void FUN_101bf0d48(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bf0d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(*(undefined1 *)(lVar1 + 0x40));
  return;
}



/* Entry: 101bf0d98; end: 101bf0e17;  */

void FUN_101bf0d98(void)

{
  undefined1 uVar1;
  uint3 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(uint3 *)(unaff_x20 + 0x18);
  plVar6 = (long *)0x50;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bf0e18;
  plVar6[2] = unaff_x20 + 0x30;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[3] = uVar4;
  plVar5 = (long *)0x180;
  func_0x000107c615b8();
  plVar6[4] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_101bf0a80;
  *(undefined1 *)((long)plVar5 + 0x13b) = uVar1;
  *(uint *)((long)plVar5 + 0x13c) = (uint)uVar2;
  plVar5[0x29] = lVar7;
  plVar5[0x2a] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf1a6c,0,0);
  return;
}



/* Entry: 101bf0e18; end: 101bf0e5b;  */

void FUN_101bf0e18(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bf0e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101bf0e5c; end: 101bf0f0b;  */

void FUN_101bf0e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x144) = param_6;
  *(undefined4 *)(unaff_x22 + 0x140) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  lVar3 = 0x112e08b70;
  func_0x0001000285a8(0x112e08b70,&UNK_10d9dd880);
  *(long *)(unaff_x22 + 0x100) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x108) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf0f0c,0,0);
  return;
}



/* Entry: 101bf0f0c; end: 101bf1227;  */

void FUN_101bf0f0c(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  func_0x000103a83784();
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    do {
      func_0x00010008a7c8(unaff_x22 + 0xc0);
      lVar7 = *(long *)(unaff_x22 + 0xc0);
      if (lVar7 != 0) {
        uVar13 = *(ulong *)(unaff_x22 + 0xf0);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar2 = *(undefined1 *)(unaff_x22 + 0x144);
        uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar1 = *(undefined4 *)(unaff_x22 + 0x140);
        func_0x000100083b20(unaff_x22 + 0x38);
        func_0x000107c61574(lVar7);
        func_0x000100cc9638(unaff_x22 + 0x38,unaff_x22 + 0x10);
        lVar7 = 0;
        func_0x000107c5fd0c();
        lVar10 = *(long *)(lVar7 + -8);
        (**(code **)(lVar10 + 0x38))(uVar8,1,1,lVar7);
        FUN_101bf1f38(unaff_x22 + 0x10,unaff_x22 + 0x60);
        puVar3 = &UNK_110454b58;
        func_0x000107c613fc(&UNK_110454b58,0x59,7);
        plVar11 = (long *)(puVar3 + 0x10);
        *plVar11 = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        func_0x000100cc9638(unaff_x22 + 0x60,puVar3 + 0x20);
        puVar3[0x48] = (char)uVar1;
        puVar3[0x49] = (char)((uint)uVar1 >> 8);
        puVar3[0x4a] = (char)((uint)uVar1 >> 0x10);
        *(undefined8 *)(puVar3 + 0x50) = uVar5;
        puVar3[0x58] = uVar2;
        func_0x0001000abe04(uVar8,uVar13);
        (**(code **)(lVar10 + 0x30))(uVar13,1,lVar7);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
        if ((int)uVar13 == 1) {
          FUN_101bf2050(uVar8,0x112d453c8,&UNK_10d90ac60);
          uVar13 = 0x3100;
          lVar7 = *plVar11;
          if (lVar7 != 0) goto LAB_101bf10ec;
LAB_101bf1150:
          lVar10 = 0;
          lVar6 = 0;
        }
        else {
          func_0x000107c5fd08();
          (**(code **)(lVar10 + 8))(uVar8,lVar7);
          uVar13 = uVar13 & 0xff | 0x3100;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_101bf1150;
LAB_101bf10ec:
          lVar6 = *(long *)(puVar3 + 0x18);
          lVar10 = lVar7;
          func_0x000107c614f0();
          func_0x000107c615f0(lVar7);
          func_0x000107c5fca8();
          func_0x000107c615e8(lVar7);
        }
        uVar8 = **(undefined8 **)(unaff_x22 + 0xd8);
        func_0x000107c6157c(puVar3);
        if (lVar6 == 0 && lVar10 == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          *(undefined8 *)(unaff_x22 + 0x88) = 0;
          *(undefined8 *)(unaff_x22 + 0x90) = 0;
          *(long *)(unaff_x22 + 0x98) = lVar10;
          *(long *)(unaff_x22 + 0xa0) = lVar6;
          puVar4 = (undefined8 *)(unaff_x22 + 0x88);
        }
        uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
        *(undefined8 *)(unaff_x22 + 0xa8) = 1;
        *(undefined8 **)(unaff_x22 + 0xb0) = puVar4;
        *(undefined8 *)(unaff_x22 + 0xb8) = uVar8;
        func_0x000107c615bc(uVar13,unaff_x22 + 0xa8,&UNK_110454c40,&UNK_10d9dd890,puVar3);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(uVar13);
        FUN_101bf2050(uVar5,0x112d453c8,&UNK_10d90ac60);
        func_0x0001000834e4(unaff_x22 + 0x10);
      }
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  func_0x000107c6142c(param_1);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = **(undefined8 **)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar5;
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar8;
  func_0x000107c5fd80(uVar9,uVar5,&UNK_110454c40,uVar8,PTR___ss5ErrorWS_11034ee10);
  *(undefined **)(unaff_x22 + 0x128) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar11 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101bf1228;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
            (plVar11,unaff_x22 + 200,*(undefined8 *)(unaff_x22 + 0x100));
  return;
}



/* Entry: 101bf1228; end: 101bf1283;  */

void FUN_101bf1228(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bf1284;
  }
  else {
    pcVar1 = FUN_101bf1490;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf1284; end: 101bf148f;  */

void FUN_101bf1284(void)

{
  long *plVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x22;
  undefined1 uVar10;
  undefined1 *puVar11;
  
  lVar4 = *(long *)(unaff_x22 + 200);
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x108);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000107c5fd94(*(undefined8 *)(unaff_x22 + 0x118),&UNK_110454c40,
                        *(undefined8 *)(unaff_x22 + 0x120),PTR___ss5ErrorWS_11034ee10);
    (**(code **)(lVar4 + 8))(uVar5,uVar6);
    uVar10 = 0;
  }
  else {
    if (lVar4 != 2) {
      if (lVar4 != 1) {
        uVar7 = *(ulong *)(unaff_x22 + 0x128);
        func_0x000107c614b0(lVar4);
        func_0x000107c61558();
        uVar9 = *(ulong *)(unaff_x22 + 0x128);
        uVar3 = uVar9;
        if ((uVar7 & 1) == 0) {
          uVar3 = 0;
          FUN_101bf282c(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        }
        uVar7 = *(ulong *)(uVar3 + 0x10);
        uVar9 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar7) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_101bf282c(uVar9,uVar7 + 1,1,uVar3);
        }
        *(ulong *)(uVar9 + 0x10) = uVar7 + 1;
        *(long *)(uVar9 + uVar7 * 8 + 0x20) = lVar4;
        FUN_101bf1f18(lVar4);
        *(ulong *)(unaff_x22 + 0x128) = uVar9;
      }
      plVar1 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x130) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_101bf1228;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
                (plVar1,(long *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0x100));
      return;
    }
    lVar4 = *(long *)(unaff_x22 + 0x128);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x110);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))(puVar2,*(undefined8 *)(unaff_x22 + 0x100));
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
      FUN_101bf1ed8();
      func_0x000107c613f8(&UNK_110454ba8,puVar2,0,0);
      *puVar2 = uVar5;
      func_0x000107c61654();
      uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
      func_0x000107c615c0(uVar6);
      func_0x000107c615c0(uVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101bf1430;
    }
    uVar10 = 1;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar11 = *(undefined1 **)(unaff_x22 + 0xd0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x128));
  *puVar11 = uVar10;
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar5);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101bf1430:
                    /* WARNING: Could not recover jumptable at 0x000101bf1444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bf1490; end: 101bf14fb;  */

void FUN_101bf1490(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
            (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x110));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bf14f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf14fc; end: 101bf151f;  */

void FUN_101bf14fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 100) = param_7;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined4 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf1520,0,0);
  return;
}



/* Entry: 101bf1520; end: 101bf15d7;  */

void FUN_101bf1520(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar4 = *(uint *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar2);
  (**(code **)(lVar3 + 0x10))(unaff_x22 + 0x10,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101bf15d8;
                    /* WARNING: Could not recover jumptable at 0x000101bf15d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar6,uVar4 & 0xffffff,*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined1 *)(unaff_x22 + 100),uVar2,lVar3);
  return;
}



/* Entry: 101bf15d8; end: 101bf1647;  */

void FUN_101bf15d8(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x65) = param_1 & 1;
    pcVar1 = FUN_101bf1648;
  }
  else {
    pcVar1 = (code *)0x101bf1690;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bf1648; end: 101bf16cf;  */

void FUN_101bf1648(void)

{
  byte bVar1;
  long unaff_x22;
  
  bVar1 = *(byte *)(unaff_x22 + 0x65);
  func_0x0001000834e4(unaff_x22 + 0x10);
  **(ulong **)(unaff_x22 + 0x38) = (ulong)~(uint)bVar1 & 1;
                    /* WARNING: Could not recover jumptable at 0x000101bf168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf16d0; end: 101bf175f;  */

void FUN_101bf16d0(uint param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x20;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  plVar7 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101bf1760;
  plVar7[0x1a] = lVar1;
  plVar7[0x1b] = lVar3;
  plVar7[0x18] = lVar5;
  plVar7[0x19] = lVar2;
  *(undefined1 *)((long)plVar7 + 0x13c) = param_3;
  plVar7[0x17] = param_2;
  *(uint *)(plVar7 + 0x27) = param_1 & 0xffffff;
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x1c] = uVar4;
  lVar5 = 0;
  func_0x000107c5eea4();
  plVar7[0x1d] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[0x1e] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x1f] = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x20] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf0444,0,0);
  return;
}



/* Entry: 101bf1760; end: 101bf17a7;  */

void FUN_101bf1760(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bf17a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bf17a8; end: 101bf17b7;  */

undefined1  [16] FUN_101bf17a8(void)

{
  return ZEXT816(0x110454a88);
}



/* Entry: 101bf17b8; end: 101bf181b;  */

long FUN_101bf17b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bf181c; end: 101bf18fb;  */

undefined8 * FUN_101bf181c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 101bf18fc; end: 101bf194f;  */

undefined8 * FUN_101bf18fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bf1950; end: 101bf19e7;  */

int FUN_101bf1950(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bf19e8; end: 101bf1a4b;  */

void FUN_101bf19e8(long param_1)

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
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bf22bc;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101bf0170;
                    /* WARNING: Could not recover jumptable at 0x000101bf016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 101bf1a4c; end: 101bf1a6b;  */

void FUN_101bf1a4c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x13b) = param_4;
  *(undefined4 *)(unaff_x22 + 0x13c) = param_2;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf1a6c,0,0);
  return;
}



/* Entry: 101bf1a6c; end: 101bf1ba3;  */

void FUN_101bf1a6c(void)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  uVar2 = *(undefined4 *)(unaff_x22 + 0x13c);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x148);
  *(char *)(unaff_x22 + 0x128) = (char)uVar2;
  *(char *)(unaff_x22 + 0x129) = (char)((uint)uVar2 >> 8);
  *(char *)(unaff_x22 + 0x12a) = (char)((uint)uVar2 >> 0x10);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined1 *)(unaff_x22 + 0x138) = *(undefined1 *)(unaff_x22 + 0x13b);
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    uVar7 = 0x112e08b60;
    func_0x0001000285a8(0x112e08b60,&UNK_10d9dd848);
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x158) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_101bf1ba4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )(plVar8,unaff_x22 + 0x139,&UNK_110454c40,uVar7,0,0,&UNK_10d9dd868,unaff_x22 + 0x110,
      &UNK_110454c40,uVar7);
    return;
  }
  uVar3 = *(uint *)(unaff_x22 + 0x13c);
  func_0x000107c615ac(unaff_x22 + 0x10,&UNK_110454c40);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar8 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x160) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101bf1bfc;
  lVar9 = *(long *)(unaff_x22 + 0x148);
  lVar1 = *(long *)(unaff_x22 + 0x150);
  *(undefined1 *)((long)plVar8 + 0x144) = *(undefined1 *)(unaff_x22 + 0x13b);
  *(uint *)(plVar8 + 0x28) = uVar3 & 0xffffff;
  plVar8[0x1c] = lVar9;
  plVar8[0x1d] = lVar1;
  plVar8[0x1a] = unaff_x22 + 0x13a;
  plVar8[0x1b] = unaff_x22 + 0x140;
  lVar9 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1e] = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1f] = uVar6;
  lVar9 = 0x112e08b70;
  func_0x0001000285a8(0x112e08b70,&UNK_10d9dd880);
  plVar8[0x20] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar8[0x21] = lVar9;
  uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x22] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf0f0c,0,0);
  return;
}



/* Entry: 101bf1ba4; end: 101bf1bfb;  */

void FUN_101bf1ba4(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x158));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101bf1be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bf1bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined1 *)(lVar1 + 0x139));
  return;
}



/* Entry: 101bf1bfc; end: 101bf1ca7;  */

void FUN_101bf1bfc(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf1d28,0,0);
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x170) = plVar1;
  func_0x0001000285a8(0x112e08b68,&UNK_10d9dd870);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101bf1ca8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101bf1ca8; end: 101bf1d27;  */

void FUN_101bf1ca8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bf1cf0,0,0);
  return;
}



/* Entry: 101bf1d28; end: 101bf1dbb;  */

void FUN_101bf1d28(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_110454c40,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x178) = plVar2;
  func_0x0001000285a8(0x112e08b68,&UNK_10d9dd870);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101bf1dbc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101bf1dbc; end: 101bf1e03;  */

void FUN_101bf1dbc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf1e04,0,0);
  return;
}



/* Entry: 101bf1e04; end: 101bf1e47;  */

void FUN_101bf1e04(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bf1e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bf1e48; end: 101bf1ed7;  */

void FUN_101bf1e48(long param_1,long param_2)

{
  undefined1 uVar1;
  uint3 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(uint3 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x150;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bf22c0;
  *(undefined1 *)((long)plVar5 + 0x144) = uVar1;
  *(uint *)(plVar5 + 0x28) = (uint)uVar2;
  plVar5[0x1c] = lVar6;
  plVar5[0x1d] = lVar7;
  plVar5[0x1a] = param_1;
  plVar5[0x1b] = param_2;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1e] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1f] = uVar4;
  lVar6 = 0x112e08b70;
  func_0x0001000285a8(0x112e08b70,&UNK_10d9dd880);
  plVar5[0x20] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x21] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x22] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf0f0c,0,0);
  return;
}



/* Entry: 101bf1ed8; end: 101bf1f17;  */

void FUN_101bf1ed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dd934;
  func_0x000107c61520(&UNK_10d9dd934,&UNK_110454ba8);
  puRam0000000112e08b78 = puVar1;
  return;
}



/* Entry: 101bf1f18; end: 101bf1f37;  */

void FUN_101bf1f18(ulong param_1)

{
  if (param_1 == 2) {
    return;
  }
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 101bf1f38; end: 101bf1f7b;  */

long FUN_101bf1f38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101bf1f7c; end: 101bf2013;  */

void FUN_101bf1f7c(long param_1)

{
  undefined1 uVar1;
  uint3 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x50);
  uVar2 = *(uint3 *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x70;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x58);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bf2014;
  *(undefined1 *)((long)plVar3 + 100) = uVar1;
  plVar3[8] = unaff_x20 + 0x20;
  plVar3[9] = lVar4;
  *(uint *)(plVar3 + 0xc) = (uint)uVar2;
  plVar3[7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bf1520,0,0);
  return;
}



/* Entry: 101bf2014; end: 101bf204f;  */

void FUN_101bf2014(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bf204c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bf2050; end: 101bf208f;  */

undefined8 FUN_101bf2050(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101bf2090; end: 101bf20b7;  */

undefined1  [16] FUN_101bf2090(void)

{
  return ZEXT816(0x110454ba8);
}



/* Entry: 101bf20b8; end: 101bf21af;  */

ulong * FUN_101bf20b8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      func_0x000107c614b0(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    func_0x000107c614ac();
    *param_1 = *param_2;
  }
  else {
    func_0x000107c614b0(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c614ac(uVar1);
  }
  return param_1;
}



/* Entry: 101bf21b0; end: 101bf22c3;  */

int FUN_101bf21b0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 101bf22c4; end: 101bf24c7;  */

void FUN_101bf22c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08b80,&UNK_10d9dd9b0);
  puVar1 = &UNK_110454cd8;
  func_0x000107c613fc(&UNK_110454cd8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_101bf24c8,puVar1);
  return;
}



/* Entry: 101bf24c8; end: 101bf24fb;  */

void FUN_101bf24c8(void)

{
  long unaff_x20;
  
  func_0x000101bf23c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101bf24fc; end: 101bf252f;  */

undefined8 FUN_101bf24fc(undefined8 param_1)

{
  (*(code *)&DAT_103a82acc)();
  return param_1;
}



/* Entry: 101bf2530; end: 101bf26df;  */

/* WARNING: Removing unreachable block (ram,0x000101bf26c0) */

undefined * FUN_101bf2530(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000103a83784();
  lVar7 = *(long *)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 == 0) {
    func_0x000107c6142c(param_1);
    puVar6 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_78 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    do {
      func_0x00010008a7c8(&lStack_a8);
      lVar2 = lStack_a8;
      if (lStack_a8 != 0) {
        func_0x000100083b20(&puStack_78);
        func_0x000107c61574(lVar2);
        func_0x000101122624(&puStack_78,auStack_a0);
        func_0x000101122624(auStack_a0,&puStack_78);
        puVar6 = puVar3;
        func_0x000107c61558();
        puVar4 = puVar3;
        if (((ulong)puVar6 & 1) == 0) {
          puVar4 = (undefined *)0x0;
          func_0x000101bf295c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
        }
        uVar1 = *(ulong *)(puVar4 + 0x10);
        puVar3 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          func_0x000101bf295c(puVar3,uVar1 + 1,1,puVar4);
        }
        *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x40) = uStack_58;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x28) = uStack_70;
        *(undefined **)(puVar3 + uVar1 * 0x28 + 0x20) = puStack_78;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x38) = uStack_60;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x30) = uStack_68;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(param_1);
    puVar6 = *(undefined **)(puVar3 + 0x10);
    puStack_78 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puStack_78;
  if (puVar6 != (undefined *)0x0) {
    uVar5 = 0x112e08b88;
    func_0x0001000285a8(0x112e08b88,&UNK_10d9dd9b8);
    func_0x000107c60498(puVar6,uVar5);
    puStack_78 = puVar6;
  }
  FUN_101bf2aa0(puVar3,1,&puStack_78);
  return puStack_78;
}



/* Entry: 101bf26e0; end: 101bf275f;  */

void FUN_101bf26e0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101bf2760; end: 101bf27c7;  */

void FUN_101bf2760(undefined8 param_1)

{
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_60);
  func_0x00010008a7c8(&uStack_38,auStack_60);
  FUN_101bf24fc(auStack_60);
  func_0x000100083b20(param_1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 101bf27c8; end: 101bf2827;  */

void FUN_101bf27c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101bf2828; end: 101bf282b;  */

/* WARNING: Removing unreachable block (ram,0x000101bf26c0) */

undefined * FUN_101bf2828(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000103a83784();
  lVar7 = *(long *)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 == 0) {
    func_0x000107c6142c(param_1);
    puVar6 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_78 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    do {
      func_0x00010008a7c8(&lStack_a8);
      lVar2 = lStack_a8;
      if (lStack_a8 != 0) {
        func_0x000100083b20(&puStack_78);
        func_0x000107c61574(lVar2);
        func_0x000101122624(&puStack_78,auStack_a0);
        func_0x000101122624(auStack_a0,&puStack_78);
        puVar6 = puVar3;
        func_0x000107c61558();
        puVar4 = puVar3;
        if (((ulong)puVar6 & 1) == 0) {
          puVar4 = (undefined *)0x0;
          func_0x000101bf295c(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
        }
        uVar1 = *(ulong *)(puVar4 + 0x10);
        puVar3 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          func_0x000101bf295c(puVar3,uVar1 + 1,1,puVar4);
        }
        *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x40) = uStack_58;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x28) = uStack_70;
        *(undefined **)(puVar3 + uVar1 * 0x28 + 0x20) = puStack_78;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x38) = uStack_60;
        *(undefined8 *)(puVar3 + uVar1 * 0x28 + 0x30) = uStack_68;
      }
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    func_0x000107c6142c(param_1);
    puVar6 = *(undefined **)(puVar3 + 0x10);
    puStack_78 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puStack_78;
  if (puVar6 != (undefined *)0x0) {
    uVar5 = 0x112e08b88;
    func_0x0001000285a8(0x112e08b88,&UNK_10d9dd9b8);
    func_0x000107c60498(puVar6,uVar5);
    puStack_78 = puVar6;
  }
  FUN_101bf2aa0(puVar3,1,&puStack_78);
  return puStack_78;
}



/* Entry: 101bf282c; end: 101bf2a9f;  */

undefined * FUN_101bf282c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bf295c);
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
    puVar3 = (undefined *)0x112e08ba0;
    func_0x0001000285a8(0x112e08ba0,&UNK_10d9dda38);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101bf2aa0; end: 101bf2def;  */

void FUN_101bf2aa0(long param_1,uint param_2,long *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 != 0) {
    FUN_101bf3574(param_1 + 0x20,auStack_88);
    puVar2 = auStack_88;
    uVar12 = 0;
    func_0x000101122624();
    lVar9 = *param_3;
    func_0x000101137240();
    lVar6 = *(long *)(lVar9 + 0x10);
    uVar7 = (ulong)~(uint)uVar12 & 1;
    puVar3 = (undefined1 *)(lVar6 + uVar7);
    if (SCARRY8(lVar6,uVar7)) {
LAB_101bf2d40:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bf2d44);
      (*pcVar1)();
    }
    if (*(long *)(lVar9 + 0x18) < (long)puVar3) {
      param_2 = param_2 & 1;
      FUN_101bf32e4();
      func_0x000101137240();
      puVar2 = puVar3;
      if (((uint)uVar12 & 1) != (param_2 & 1)) {
LAB_101bf2b44:
        func_0x000107c60624(&UNK_1106c6890);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101bf2b54);
        (*pcVar1)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_101bf3178();
    }
    if ((uVar12 & 1) != 0) {
LAB_101bf2b5c:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      func_0x000107c613f8(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,
                          0,0);
      func_0x000107c61654();
      func_0x000107c6142c(param_1);
      func_0x000107c614b0(puVar4);
      uVar11 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c();
      if ((uVar11 & 1) == 0) {
        func_0x0001000834e4(auStack_b0);
        func_0x000107c614ac(puVar4);
        return;
      }
      func_0x000107c602fc(0x1e);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efbd6e0);
      func_0x000107c603d0();
      func_0x000107c5fb78(0x27,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                          "Swift/arm64e-apple-ios.swiftinterface",0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bf2df0);
      (*pcVar1)();
    }
    lVar9 = *param_3;
    lVar6 = lVar9 + ((ulong)puVar2 >> 6) * 8;
    *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << ((ulong)puVar2 & 0x3f);
    func_0x000101122624(auStack_b0,*(long *)(lVar9 + 0x38) + (long)puVar2 * 0x28);
    if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
LAB_101bf2d44:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bf2d48);
      (*pcVar1)();
    }
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    if (uVar11 != 1) {
      lVar6 = param_1 + 0x48;
      uVar12 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101bf2d4c);
          (*pcVar1)();
        }
        FUN_101bf3574(lVar6,auStack_88);
        puVar2 = auStack_88;
        uVar7 = 0;
        func_0x000101122624();
        lVar10 = *param_3;
        func_0x000101137240();
        lVar9 = *(long *)(lVar10 + 0x10);
        uVar8 = (ulong)~(uint)uVar7 & 1;
        puVar3 = (undefined1 *)(lVar9 + uVar8);
        if (SCARRY8(lVar9,uVar8)) goto LAB_101bf2d40;
        if (*(long *)(lVar10 + 0x18) < (long)puVar3) {
          uVar5 = 1;
          FUN_101bf32e4();
          func_0x000101137240();
          puVar2 = puVar3;
          if (((uint)uVar7 & 1) != (uVar5 & 1)) goto LAB_101bf2b44;
        }
        if ((uVar7 & 1) != 0) goto LAB_101bf2b5c;
        lVar10 = *param_3;
        lVar9 = lVar10 + ((ulong)puVar2 >> 6) * 8;
        *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << ((ulong)puVar2 & 0x3f);
        func_0x000101122624(auStack_b0,*(long *)(lVar10 + 0x38) + (long)puVar2 * 0x28);
        if (SCARRY8(*(long *)(lVar10 + 0x10),1)) goto LAB_101bf2d44;
        uVar12 = uVar12 + 1;
        *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar11 != uVar12);
    }
  }
  func_0x000107c6142c(param_1);
  return;
}



/* Entry: 101bf2df0; end: 101bf2dff;  */

undefined1  [16] FUN_101bf2df0(void)

{
  return ZEXT816(0x110454d50);
}



/* Entry: 101bf2e00; end: 101bf2e8b;  */

long FUN_101bf2e00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101bf2e8c; end: 101bf2f37;  */

undefined8 * FUN_101bf2e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  uVar3 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  uVar8 = param_2[8];
  param_1[8] = uVar8;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  return param_1;
}



/* Entry: 101bf2f38; end: 101bf303b;  */

undefined8 * FUN_101bf2f38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bf303c; end: 101bf30cf;  */

undefined8 * FUN_101bf303c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bf30d0; end: 101bf3177;  */

int FUN_101bf30d0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bf3178; end: 101bf32e3;  */

void FUN_101bf3178(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_78 [40];
  
  func_0x0001000285a8(0x112e08b88,&UNK_10d9dd9b8);
  lVar7 = *unaff_x20;
  lVar3 = lVar7;
  func_0x000107c6048c();
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar1 = lVar7 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar7 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar8 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar7 + 0x10);
    uVar5 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar7 + 0x40);
    if (uVar4 == 0) goto LAB_101bf3258;
    do {
      uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar4 = uVar4 - 1 & uVar4;
      while( true ) {
        lVar9 = (LZCOUNT(uVar6) | lVar8 << 6) * 0x28;
        func_0x0001011225e0(*(long *)(lVar7 + 0x38) + lVar9,auStack_78);
        func_0x000101122624(auStack_78,*(long *)(lVar3 + 0x38) + lVar9);
        if (uVar4 != 0) break;
LAB_101bf3258:
        do {
          lVar9 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101bf32e4);
            (*pcVar2)();
          }
          if ((long)(uVar5 + 0x3f >> 6) <= lVar9) goto LAB_101bf32b8;
          uVar4 = *(ulong *)(lVar1 + lVar9 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar4 == 0);
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
        lVar8 = lVar9;
      }
    } while( true );
  }
LAB_101bf32b8:
  func_0x000107c61574(lVar7);
  *unaff_x20 = lVar3;
  return;
}


