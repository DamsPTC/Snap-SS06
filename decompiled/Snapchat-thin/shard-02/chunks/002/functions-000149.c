/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a58940; end: 101a5899f;  */

void FUN_101a58940(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101a584e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_10af247c8);
  return;
}



/* Entry: 101a589a0; end: 101a589a7;  */

void FUN_101a589a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112def480,&UNK_10d9bc428);
  puVar2 = &UNK_110431600;
  func_0x000107c613fc(&UNK_110431600,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x000107c6157c(uVar3);
  uVar3 = 2;
  func_0x000104887c7c(2,0,0x48,4,0xd000000000000019,0x800000010efcce60,&UNK_10d9bc438,puVar2);
  func_0x000107c61574(puVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101a589a8; end: 101a58a0b;  */

void FUN_101a589a8(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a58a0c;
  plVar2[3] = param_1;
  plVar2[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a57bb4,0,0);
  return;
}



/* Entry: 101a58a0c; end: 101a58a87;  */

void FUN_101a58a0c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a58a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a58a88; end: 101a58a8b;  */

void FUN_101a58a88(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a58738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a58a8c; end: 101a58bc7;  */

long FUN_101a58a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a85f0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  func_0x000107c6157c(unaff_x20);
  uVar2 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10d9bc448,unaff_x20,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(unaff_x20);
  func_0x000107c61574(uVar2);
  return unaff_x20;
}



/* Entry: 101a58bc8; end: 101a58c4b;  */

void FUN_101a58bc8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a58c10;
  plVar1[4] = param_2;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar1[5] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[6] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[8] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a58da8,0,0);
  return;
}



/* Entry: 101a58c4c; end: 101a58c9f;  */

void FUN_101a58c4c(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101a59900;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x101a58c10;
  plVar1[4] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar1[5] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[6] = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[8] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a58da8,0,0);
  return;
}



/* Entry: 101a58ca0; end: 101a58cf3;  */

void FUN_101a58ca0(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a58cf4;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x101a58c10;
  plVar1[4] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar1[5] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[6] = lVar3;
  uVar5 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[7] = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[8] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a58da8,0,0);
  return;
}



/* Entry: 101a58cf4; end: 101a58da7;  */

void FUN_101a58cf4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a58d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a58da8; end: 101a59377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a58da8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  
  uVar10 = *(ulong *)(*(long *)(unaff_x22 + 0x20) + 0x10);
  uVar1 = uVar10;
  FUN_101a59904();
  lVar8 = *(long *)(unaff_x22 + 0x20);
  if ((uVar1 & 0xff) == 0) {
    uVar11 = *(undefined8 *)(lVar8 + 0x28);
    uVar2 = 0x656e6f6e;
    func_0x000107c5fadc(0x656e6f6e,0xe400000000000000);
    pcVar9 = "disabled_run_mode";
    uVar5 = 0xd000000000000011;
  }
  else {
    if (((uint)uVar1 & 0xff) == 3) {
      uVar11 = *(undefined8 *)(lVar8 + 0x28);
      uVar2 = 0x656e6f6e;
      func_0x000107c5fadc(0x656e6f6e,0xe400000000000000);
      pcVar9 = "unknown_run_mode";
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + _DAT_113083868);
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x50) = lVar8;
      if (lVar8 != 0) {
        lVar16 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0x18);
        lVar7 = lVar16;
        func_0x000107c4cc44();
        func_0x000107c61180();
        lVar15 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0x58) = lVar15;
        func_0x000107c61170(lVar7);
        if (lVar15 != 0) {
          func_0x000107c4cb6c();
          func_0x000107c61180();
          lVar7 = lVar16;
          func_0x000107c5c734();
          func_0x000107c61180();
          *(long *)(unaff_x22 + 0x60) = lVar7;
          func_0x000107c61170(lVar16);
          if (lVar7 != 0) {
            lVar16 = lVar15;
            func_0x000107c5c5bc();
            func_0x000107c61180();
            if (lVar16 == 0) {
              uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28);
              uVar2 = 0x656e6f6e;
              func_0x000107c5fadc(0x656e6f6e,0xe400000000000000);
              pcVar9 = "empty_sync_token";
              uVar5 = 0xd000000000000010;
            }
            else {
              func_0x000107c61170();
              lVar16 = lVar7;
              func_0x000107c41fe4();
              func_0x000107c61180();
              if (lVar16 != 0) {
                uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
                uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
                lVar12 = *(long *)(unaff_x22 + 0x30);
                uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x28);
                func_0x000107c5ee94(uVar2);
                func_0x000107c61170(lVar16);
                (**(code **)(lVar12 + 0x20))(uVar5,uVar2,uVar18);
                uVar2 = *(undefined8 *)(uVar10 + _DAT_1130806b8);
                func_0x000107c6157c(uVar2);
                func_0x0001000d224c(unaff_x22 + 0x10);
                func_0x000107c61574(uVar2);
                lVar12 = *(long *)(unaff_x22 + 0x10);
                lVar16 = lVar12;
                func_0x000107c43800();
                func_0x000107c615e8(lVar12);
                dVar19 = (double)lVar16;
                func_0x000107c5ee88(uVar11);
                func_0x000107c5ee8c();
                if ((double)lVar16 <= dVar19) {
                  uVar17 = *(undefined8 *)(unaff_x22 + 0x48);
                  lVar16 = *(long *)(unaff_x22 + 0x30);
                  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
                  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
                  uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28);
                  uVar11 = 0x656e6f6e;
                  func_0x000107c5fadc(0x656e6f6e,0xe400000000000000);
                  uVar18 = 0xd00000000000001f;
                  func_0x000107c5fadc(0xd00000000000001f,0x800000010efccf40);
                  func_0x000105664c34(uVar13,uVar11,uVar18,1);
                  func_0x000107c61170(lVar7);
                  func_0x000107c61170(uVar18);
                  func_0x000107c61170(uVar11);
                  func_0x000107c615e8(lVar8);
                  func_0x000107c615e8(lVar15);
                  pcVar14 = *(code **)(lVar16 + 8);
                  (*pcVar14)(uVar5,uVar2);
                }
                else {
                  if (((uint)uVar1 & 0xff) != 1) {
                    plVar6 = (long *)0x40;
                    func_0x000107c615b8();
                    *(long **)(unaff_x22 + 0x68) = plVar6;
                    *plVar6 = unaff_x22;
                    plVar6[1] = (long)FUN_101a59378;
                    lVar7 = *(long *)(unaff_x22 + 0x48);
                    lVar15 = *(long *)(unaff_x22 + 0x20);
                    plVar6[4] = *(long *)(unaff_x22 + 0x38);
                    plVar6[5] = lVar15;
                    plVar6[2] = lVar8;
                    plVar6[3] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a594c0,0,0);
                    return;
                  }
                  uVar17 = *(undefined8 *)(unaff_x22 + 0x48);
                  lVar16 = *(long *)(unaff_x22 + 0x30);
                  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
                  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
                  uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28);
                  uVar11 = 0x72645f6567727570;
                  func_0x000107c5fadc(0x72645f6567727570,0xee0065646f6d5f79);
                  uVar18 = 0xd000000000000010;
                  func_0x000107c5fadc(0xd000000000000010,0x800000010efccf60);
                  func_0x000105664c34(uVar13,uVar11,uVar18,1);
                  func_0x000107c61170(uVar18);
                  func_0x000107c61170(uVar11);
                  puVar3 = PTR_PTR_1126a85f8;
                  func_0x000107c610f8(PTR_PTR_1126a85f8);
                  func_0x000107c453e4();
                  puVar4 = puVar3;
                  func_0x000107c55614();
                  func_0x000107c5ee70();
                  func_0x000107c5348c(puVar3);
                  func_0x000107c61170(puVar4);
                  func_0x000107c5ee70();
                  func_0x000107c54b20(puVar3);
                  func_0x000107c61170(puVar4);
                  func_0x000107c57a44(puVar3);
                  func_0x000107c61174(puVar3);
                  func_0x000107c4bfb0(lVar8);
                  func_0x000107c61170(lVar7);
                  func_0x000107c61170(puVar3);
                  func_0x000107c61170(puVar3);
                  func_0x000107c615e8(lVar8);
                  func_0x000107c615e8(lVar15);
                  pcVar14 = *(code **)(lVar16 + 8);
                  (*pcVar14)(uVar5,uVar2);
                }
                (*pcVar14)(uVar17,uVar2);
                goto LAB_101a59180;
              }
              uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28);
              uVar2 = 0x656e6f6e;
              func_0x000107c5fadc(0x656e6f6e,0xe400000000000000);
              pcVar9 = "empty_db_creation_ts";
              uVar5 = 0xd000000000000014;
            }
            func_0x000107c5fadc(uVar5,(ulong)(pcVar9 + -0x20) | 0x8000000000000000);
            func_0x000105664c34(uVar11,uVar2,uVar5,1);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar2);
            func_0x000107c61170(lVar7);
            func_0x000107c615e8(lVar15);
            func_0x000107c615e8(lVar8);
            goto LAB_101a59180;
          }
          func_0x000107c615e8(lVar8);
          lVar8 = lVar15;
        }
        func_0x000107c615e8(lVar8);
      }
      uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28);
      uVar2 = 0x656e6f6e;
      func_0x000107c5fadc(0x656e6f6e,0xe400000000000000);
      pcVar9 = "nil_dependencies";
    }
    uVar5 = 0xd000000000000010;
  }
  func_0x000107c5fadc(uVar5,(ulong)(pcVar9 + -0x20) | 0x8000000000000000);
  func_0x000105664c34(uVar11,uVar2,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
LAB_101a59180:
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101a591c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a59378; end: 101a593bf;  */

void FUN_101a59378(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a593c0,0,0);
  return;
}



/* Entry: 101a593c0; end: 101a59453;  */

void FUN_101a593c0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uVar1);
  pcVar6 = *(code **)(lVar2 + 8);
  (*pcVar6)(uVar4,uVar7);
  (*pcVar6)(uVar5,uVar7);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101a59450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a59454; end: 101a59497;  */

void FUN_101a59454(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a59498; end: 101a594bf;  */

void FUN_101a59498(void)

{
  return;
}



/* Entry: 101a594c0; end: 101a595f7;  */

void FUN_101a594c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x28);
  uVar2 = 0x6567727570;
  func_0x000107c5fadc(0x6567727570,0xe500000000000000);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efccf60);
  func_0x000105664c34(uVar7,uVar2,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126a85f8;
  func_0x000107c610f8(PTR_PTR_1126a85f8);
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c55614();
  func_0x000107c5ee70();
  func_0x000107c5348c(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5ee70();
  func_0x000107c54b20(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c57a44(puVar4);
  func_0x000107c4bfb0(uVar1);
  func_0x000107c61170(puVar4);
  plVar6 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a595f8;
  plVar6[0x10] = *(long *)(unaff_x22 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a596a8,0,0);
  return;
}



/* Entry: 101a595f8; end: 101a5968f;  */

void FUN_101a595f8(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x38) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = 0x101a59654;
  plVar1[2] = *(long *)(lVar2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a5984c,0,0);
  return;
}



/* Entry: 101a59690; end: 101a596a7;  */

void FUN_101a59690(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a596a8,0,0);
  return;
}



/* Entry: 101a596a8; end: 101a597c3;  */

void FUN_101a596a8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x80) + 0x18);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x88) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101a597c4;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar3 = &UNK_1104316d8;
    func_0x000107c613fc(&UNK_1104316d8,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_101a598dc;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104316f0;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c41850(lVar2);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a597c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a597c4; end: 101a59833;  */

void FUN_101a597c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a59804,0,0);
  return;
}



/* Entry: 101a59834; end: 101a5984b;  */

void FUN_101a59834(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a5984c,0,0);
  return;
}



/* Entry: 101a5984c; end: 101a598db;  */

void FUN_101a5984c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x20);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c54d50(lVar3,param_2,1);
      lVar2 = lVar3;
      func_0x000107c49e54();
      if ((int)lVar2 != 0) {
        func_0x000107c54d44(lVar3,param_2,1);
      }
      func_0x000107c61170(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x000101a598d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a598dc);
  (*pcVar1)();
}



/* Entry: 101a598dc; end: 101a59903;  */

void FUN_101a598dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a59904; end: 101a5995f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a59904(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 auStack_30 [2];
  
  func_0x0001000d224c(auStack_30);
  uVar1 = auStack_30[0];
  func_0x000107c5098c();
  func_0x000107c615e8(auStack_30[0]);
  uVar2 = (uint)uVar1;
  if (2 < uVar2) {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 101a59960; end: 101a599bb;  */

void FUN_101a59960(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a599bc; end: 101a5a36b;  */

/* WARNING: Possible PIC construction at 0x000101a59be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a5a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a5a5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a59f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a59c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a59f90) */
/* WARNING: Removing unreachable block (ram,0x000101a5a5e8) */
/* WARNING: Removing unreachable block (ram,0x000101a59be8) */
/* WARNING: Removing unreachable block (ram,0x000101a59c6c) */
/* WARNING: Removing unreachable block (ram,0x000101a59c84) */

undefined *
FUN_101a599bc(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long *plVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long alStack_200 [5];
  undefined8 auStack_1d8 [2];
  undefined8 auStack_1c8 [4];
  long alStack_1a8 [8];
  undefined8 uStack_168;
  long alStack_160 [2];
  undefined1 auStack_150 [8];
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  code *pcStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 auStack_c0 [10];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  uStack_f8 = param_1;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar5 - extraout_x8_00;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar19 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      pcStack_120 = *(code **)(param_5 + 0x18);
      lVar12 = param_5;
      lStack_118 = lVar18;
      lStack_110 = lVar2;
      lStack_108 = lVar3;
      lStack_100 = lVar1;
      (*pcStack_120)(param_4,param_5);
      puStack_f0 = (undefined *)0xd00000000000001c;
      lStack_e8 = 0x800000010efccf80;
      func_0x000107c5fb78();
      lVar1 = lStack_100;
      func_0x000107c6142c(lVar12);
      lVar2 = lStack_e8;
      func_0x000107c5edd0(lVar16,puStack_f0,lStack_e8);
      func_0x000107c6142c(lVar2);
      lVar2 = lVar16;
      (**(code **)(lVar19 + 0x30))(lVar16,1,lVar1);
      if ((int)lVar2 == 1) {
        FUN_101a5a6d0(lVar16,0x112d36580,&UNK_10d9016d0);
        uVar4 = 0xff;
        func_0x000107c614b8(0xff,param_5,param_4,&UNK_10e6912a4,&UNK_10e6912b4);
        puVar5 = (undefined1 *)0x0;
        func_0x000100759bc0(0,uVar4);
        FUN_101a5a64c();
        puVar11 = &UNK_110485fc8;
        func_0x000107c613f8(&UNK_110485fc8,puVar5,0,0);
        *puVar5 = 1;
        func_0x00010488904c();
      }
      else {
        (**(code **)(lVar19 + 0x20))(lStack_118,lVar16,lVar1);
        puVar11 = *(undefined **)(unaff_x20 + 0x28);
        func_0x000107c44d84();
        func_0x000107c61180();
        if (puVar11 == (undefined *)0x0) {
          puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8();
        }
        else {
          puVar20 = puVar11;
          func_0x000107c5f9e8();
          func_0x000107c61170(puVar11);
        }
        puStack_130 = puVar20;
        lStack_128 = lVar19;
        if (param_3 == 0) {
          func_0x000107c61434(puVar20);
        }
        else {
          func_0x000107c61434(puVar20);
          func_0x000107c61434(param_3);
          puVar11 = puVar20;
          func_0x000107c61558(puVar20);
          puStack_f0 = puVar20;
          FUN_101a5a710(param_3,&UNK_101391c9c,0,puVar11,&puStack_f0);
          func_0x000107c6142c(param_3);
          puVar20 = puStack_f0;
        }
        puVar6 = PTR_PTR_1126bc1e0;
        func_0x000107c610f8();
        puVar9 = puVar6;
        func_0x000107c5ed90();
        puVar7 = PTR___sSSSHsWP_11034da90;
        puVar11 = PTR___sSSN_11034da80;
        puStack_138 = puVar20;
        func_0x000107c5f9dc(puVar20,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        *(undefined8 *)(lVar18 + -0x10) = 0;
        *(undefined2 *)(lVar18 + -0x18) = 0;
        *(undefined8 *)(lVar18 + -0x20) = 0;
        plVar15 = (long *)0x0;
        func_0x000107c477d8();
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar20);
        lVar1 = lStack_108;
        puStack_140 = puVar6;
        func_0x000107c4d0c4();
        func_0x000107c61180();
        puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        lStack_148 = lVar1;
        func_0x000107c61168();
        uVar4 = uStack_f8;
        func_0x000107c5caf8(uStack_f8);
        func_0x000107c61180();
        puVar20 = PTR___sypN_11034f1a8;
        uVar17 = uVar4;
        func_0x000107c5f9e8();
        func_0x000107c61170(uVar4);
        uVar4 = uVar17;
        func_0x000107c5f9dc(uVar17,puVar11,puVar20 + 8,puVar7);
        func_0x000107c6142c(uVar17);
        puStack_f0 = (undefined *)0x0;
        func_0x000107c41300();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        puVar20 = puStack_f0;
        func_0x000107c61174(puStack_f0);
        if (puVar6 == (undefined *)0x0) {
          puVar11 = puVar20;
          func_0x000107c5ed30();
          func_0x000107c61170(puVar20);
          func_0x000107c61654();
          goto code_r0x000107c614ac;
        }
        puVar20 = puVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar6);
        func_0x000107c5fb04(puVar5);
        puVar7 = puVar20;
        puVar6 = puVar11;
        func_0x000107c5faf0(puVar20,puVar11,puVar5);
        if (puVar6 == (undefined *)0x0) {
          puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
        }
        else {
          puVar9 = (undefined *)0x112d38300;
          func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
          func_0x000107c61534();
          *(undefined8 *)(puVar9 + 0x18) = 2;
          *(undefined8 *)(puVar9 + 0x10) = 1;
          *(undefined8 *)(puVar9 + 0x20) = 0x6e6f736a;
          *(undefined8 *)(puVar9 + 0x28) = 0xe400000000000000;
          *(undefined **)(puVar9 + 0x30) = puVar7;
          *(undefined **)(puVar9 + 0x38) = puVar6;
          puVar7 = puVar9;
          func_0x0001001830b8();
          func_0x000107c61588(puVar9);
          FUN_101a5a6d0(puVar9 + 0x20,0x112d38308,&UNK_10d902040);
        }
        func_0x00010006c090(puVar20,puVar11);
        puVar11 = puStack_130;
        puVar20 = puVar7;
        func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(puVar7);
        lVar1 = lStack_148;
        func_0x000107c5d8ac(lStack_148);
        func_0x000107c61170(puVar20);
        lVar2 = lVar1;
        func_0x000107c5045c();
        func_0x000107c61180();
        func_0x000107c6142c(puStack_138);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(puStack_140);
        func_0x000107c6142c(puVar11);
        puVar11 = PTR_PTR_1126b7220;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar20 = param_4;
        lVar1 = param_5;
        (*pcStack_120)();
        uVar17 = 0x2d;
        uVar13 = 0xe100000000000000;
        puStack_f0 = puVar20;
        lStack_e8 = lVar1;
        func_0x000107c5fb78(0x2d,0xe100000000000000);
        func_0x00010011df08();
        func_0x000107c61180();
        uVar4 = uVar17;
        func_0x000107c5faec();
        func_0x000107c61170(uVar17);
        func_0x000107c5fb78(uVar4,uVar13);
        func_0x000107c6142c(uVar13);
        lVar1 = lStack_e8;
        puVar20 = puStack_f0;
        func_0x000107c5fadc(puStack_f0,lStack_e8);
        func_0x000107c6142c(lVar1);
        puVar7 = puVar11;
        func_0x000107c5e5a0();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar20);
        uVar4 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        func_0x000107c5fc48();
        puVar11 = puVar7;
        func_0x000107c5e474();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar4);
        puVar20 = puVar11;
        func_0x000107c5e890();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        puVar11 = puVar20;
        func_0x000107c5e75c();
        func_0x000107c61180();
        func_0x000107c61170(puVar20);
        puVar20 = puVar11;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        uVar4 = 0xff;
        func_0x000107c614b8(0xff,param_5,param_4,&UNK_10e6912a4,&UNK_10e6912b4);
        func_0x000100759d7c(0,uVar4);
        puVar8 = (undefined1 *)0x0;
        func_0x000100759dd0();
        func_0x000107c61174();
        func_0x0001000d224c(auStack_c0);
        puVar9 = (undefined *)0x0;
        func_0x000100964acc();
        func_0x000100bcb214();
        func_0x000107c61170(auStack_c0[0]);
        puVar11 = &UNK_1104317c0;
        func_0x000107c613fc(&UNK_1104317c0,0x28,7);
        *(undefined **)(puVar11 + 0x10) = param_4;
        *(long *)(puVar11 + 0x18) = param_5;
        *(undefined1 **)(puVar11 + 0x20) = puVar8;
        uStack_d0 = 0x101a5a68c;
        puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
        lStack_e8 = 0x42000000;
        puStack_e0 = &UNK_101365b40;
        puStack_d8 = &UNK_1104317d8;
        ppuVar10 = &puStack_f0;
        puStack_c8 = puVar11;
        func_0x000107c60bc4();
        puVar11 = puStack_c8;
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar11);
        lVar1 = lStack_110;
        puVar7 = puVar20;
        puVar6 = puVar9;
        ppuVar14 = ppuVar10;
        func_0x000107c5c2f4(lStack_110);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61170(lVar2);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c615e8(lStack_108);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar9);
        (**(code **)(lStack_128 + 8))(lStack_118,lStack_100);
        puVar11 = *(undefined **)(puVar8 + 0x10);
        func_0x000107c6157c(puVar11);
        puVar5 = puVar8;
        func_0x000107c61574();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return puVar11;
        }
        func_0x000107c60e78();
        *(undefined **)(lVar18 + -0x50) = puVar20;
        *(long *)(lVar18 + -0x48) = param_5;
        *(undefined **)(lVar18 + -0x40) = param_4;
        *(undefined1 **)(lVar18 + -0x38) = puVar8;
        *(long *)(lVar18 + -0x30) = lVar1;
        *(long *)(lVar18 + -0x28) = lVar2;
        *(undefined **)(lVar18 + -0x20) = puVar11;
        *(undefined ***)(lVar18 + -0x18) = ppuVar10;
        *(undefined1 **)(lVar18 + -0x10) = &stack0xfffffffffffffff0;
        *(code **)(lVar18 + -8) = FUN_101a5a36c;
        *(undefined8 *)(lVar18 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        if (ppuVar14 == (undefined **)0x0) {
          if ((ulong)puVar6 >> 0x3c < 0xf) {
            lVar1 = *plVar15;
            puVar20 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x000107c61168();
            func_0x00010006c00c(puVar7,puVar6);
            puVar11 = puVar7;
            func_0x000107c5ee20(puVar7,puVar6);
            *(undefined8 *)(lVar18 + -0x78) = 0;
            func_0x000107c3ab8c();
            func_0x000107c61180();
            func_0x000107c61170(puVar11);
            puVar11 = *(undefined **)(lVar18 + -0x78);
            if (puVar20 == (undefined *)0x0) {
              puVar20 = puVar11;
              func_0x000107c61174();
              func_0x000107c5ed30(puVar11);
              func_0x000107c61170(puVar20);
              func_0x000107c61654();
              goto code_r0x000107c614ac;
            }
            func_0x000107c61174();
            func_0x000107c60234(lVar18 + -0x78,puVar20);
            func_0x000107c615e8(puVar20);
            uVar4 = 0x112d472a8;
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar11 = PTR___sypN_11034f1a8;
            puVar5 = (undefined1 *)(lVar18 + -0x88);
            func_0x000107c6147c(puVar5,lVar18 + -0x78,PTR___sypN_11034f1a8 + 8,uVar4,6);
            if (((ulong)puVar5 & 1) == 0) {
              FUN_101a5a64c();
              puVar11 = &UNK_110485fc8;
              func_0x000107c613f8(&UNK_110485fc8,puVar5,0,0);
              *puVar5 = 2;
              func_0x00010488ade0();
              goto code_r0x000107c614ac;
            }
            uVar17 = *(undefined8 *)(lVar18 + -0x88);
            puVar20 = *(undefined **)(lVar1 + 0x50);
            uVar4 = uVar17;
            func_0x00010018cc3c(uVar17);
            func_0x000107c6142c(uVar17);
            func_0x000107c614e8();
            func_0x000107c610f8();
            uVar17 = uVar4;
            func_0x000107c5f9dc(uVar4,PTR___ss11AnyHashableVN_11034e448,puVar11 + 8,
                                PTR___ss11AnyHashableVSHsWP_11034e450);
            func_0x000107c6142c(uVar4);
            func_0x000107c47020();
            func_0x000107c61170(uVar17);
            *(undefined **)(lVar18 + -0x78) = puVar20;
            func_0x000100b60084(lVar18 + -0x78);
            func_0x0001000b44c0(puVar7,puVar6);
            func_0x000107c61170(puVar20);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar18 + -0x58)) {
              return puVar20;
            }
            goto LAB_101a5a628;
          }
          FUN_101a5a64c();
          puVar11 = &UNK_110485fc8;
          func_0x000107c613f8(&UNK_110485fc8,puVar5,0,0);
          *puVar5 = 0;
        }
        else {
          FUN_101a5a64c();
          puVar11 = &UNK_110485fc8;
          func_0x000107c613f8(&UNK_110485fc8,puVar5,0,0);
          *puVar5 = 3;
        }
        puVar20 = puVar11;
        func_0x00010488ade0();
        puVar6 = puVar11;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(lVar18 + -0x58)) {
LAB_101a5a628:
          func_0x000107c60e78();
          *(long **)(lVar18 + -0xb0) = plVar15;
          *(undefined **)(lVar18 + -0xa8) = puVar6;
          *(long *)(lVar18 + -0xa0) = lVar18 + -0x10;
          *(code **)(lVar18 + -0x98) = FUN_101a5a62c;
          FUN_101a599bc();
          return puVar20;
        }
      }
      goto code_r0x000107c614ac;
    }
    func_0x000107c615e8(lVar2);
  }
  uVar4 = 0xff;
  func_0x000107c614b8(0xff,param_5,param_4,&UNK_10e6912a4,&UNK_10e6912b4);
  puVar5 = (undefined1 *)0x0;
  func_0x000100759bc0(0,uVar4);
  FUN_101a5a64c();
  puVar11 = &UNK_110485fc8;
  func_0x000107c613f8(&UNK_110485fc8,puVar5,0,0);
  *puVar5 = 4;
  func_0x00010488904c();
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar11);
  return puVar11;
}



/* Entry: 101a5a36c; end: 101a5a62b;  */

/* WARNING: Possible PIC construction at 0x000101a5a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a5a5b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a5a5e8) */

void FUN_101a5a36c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,long *param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 auStack_88 [2];
  undefined *apuStack_78 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_6 == 0) {
    if (param_5 >> 0x3c < 0xf) {
      lVar6 = *param_7;
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      func_0x00010006c00c(param_4,param_5);
      uVar1 = param_4;
      func_0x000107c5ee20(param_4,param_5);
      apuStack_78[0] = (undefined *)0x0;
      func_0x000107c3ab8c();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      puVar4 = apuStack_78[0];
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c61174();
        func_0x000107c60234(apuStack_78,puVar5);
        func_0x000107c615e8(puVar5);
        uVar1 = 0x112d472a8;
        func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
        puVar4 = PTR___sypN_11034f1a8;
        puVar2 = auStack_88;
        func_0x000107c6147c(puVar2,apuStack_78,PTR___sypN_11034f1a8 + 8,uVar1,6);
        if (((ulong)puVar2 & 1) == 0) {
          FUN_101a5a64c();
          puVar4 = &UNK_110485fc8;
          func_0x000107c613f8(&UNK_110485fc8,puVar2,0,0);
          *(undefined1 *)puVar2 = 2;
          func_0x00010488ade0();
          goto code_r0x000107c614ac;
        }
        puVar5 = *(undefined **)(lVar6 + 0x50);
        uVar1 = auStack_88[0];
        func_0x00010018cc3c(auStack_88[0]);
        func_0x000107c6142c(auStack_88[0]);
        func_0x000107c614e8();
        func_0x000107c610f8();
        uVar3 = uVar1;
        func_0x000107c5f9dc(uVar1,PTR___ss11AnyHashableVN_11034e448,puVar4 + 8,
                            PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c6142c(uVar1);
        func_0x000107c47020();
        func_0x000107c61170(uVar3);
        apuStack_78[0] = puVar5;
        func_0x000100b60084(apuStack_78);
        func_0x0001000b44c0(param_4,param_5);
        func_0x000107c61170(puVar5);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return;
        }
        goto LAB_101a5a628;
      }
      puVar5 = apuStack_78[0];
      func_0x000107c61174();
      func_0x000107c5ed30(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61654();
      goto code_r0x000107c614ac;
    }
    FUN_101a5a64c();
    puVar4 = &UNK_110485fc8;
    func_0x000107c613f8(&UNK_110485fc8,param_1,0,0);
    *param_1 = 0;
  }
  else {
    FUN_101a5a64c();
    puVar4 = &UNK_110485fc8;
    func_0x000107c613f8(&UNK_110485fc8,param_1,0,0);
    *param_1 = 3;
  }
  func_0x00010488ade0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
LAB_101a5a628:
    func_0x000107c60e78();
    FUN_101a599bc();
    return;
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar4);
  return;
}



/* Entry: 101a5a62c; end: 101a5a64b;  */

void FUN_101a5a62c(void)

{
  FUN_101a599bc();
  return;
}



/* Entry: 101a5a64c; end: 101a5a6b3;  */

void FUN_101a5a64c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112def608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da169a8;
  func_0x000107c61520(&UNK_10da169a8,&UNK_110485fc8);
  puRam0000000112def608 = puVar1;
  return;
}



/* Entry: 101a5a6b4; end: 101a5a6cf;  */

void FUN_101a5a6b4(long param_1,long param_2)

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



/* Entry: 101a5a6d0; end: 101a5a70f;  */

undefined8 FUN_101a5a6d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a5a710; end: 101a5a983;  */

void FUN_101a5a710(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101a5a970);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a5a984);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101a5a974);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a5a96c);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101a5a984; end: 101a5aa07;  */

void FUN_101a5a984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101a5aa08; end: 101a5ac2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_101a5aa08(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = uVar6;
  func_0x000107c44f4c();
  func_0x000107c61180();
  func_0x000107c44f60();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11305e778);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(auStack_68);
  func_0x000107c61574(uVar7);
  puVar2 = auStack_68;
  func_0x0001000a8868(puVar2,uStack_50);
  uVar7 = 3;
  func_0x00010043c5c0(3,0xd,0,uStack_50,uStack_48,puVar2);
  puVar2 = auStack_68;
  func_0x0001000834e4();
  func_0x000103fbf3c4();
  puVar3 = &UNK_110431818;
  func_0x000107c613fc(&UNK_110431818,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined1 **)(puVar3 + 0x28) = puVar2;
  func_0x0001000285a8(0x112def648,&UNK_10d9bc550);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c615f0(puVar2);
  pcVar4 = FUN_101a5ac2c;
  func_0x0001000bdd8c(FUN_101a5ac2c,puVar3);
  uVar5 = 0;
  func_0x0001001f6888(0);
  func_0x000107c610f8();
  func_0x000101dcd4fc(pcVar4,uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(puVar2);
  return pcVar4;
}



/* Entry: 101a5ac2c; end: 101a5ac37;  */

void FUN_101a5ac2c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x000101a5999c();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_1104317a0;
  *param_1 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar4);
  return;
}



/* Entry: 101a5ac38; end: 101a5ac5b;  */

/* WARNING: Possible PIC construction at 0x000101a5ac44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a5ac48) */

void FUN_101a5ac38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a5ac5c; end: 101a5acaf;  */

void FUN_101a5ac5c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a5acb0; end: 101a5ad2f;  */

void FUN_101a5acb0(undefined8 param_1)

{
  if (lRam0000000112def678 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e669d5c);
  return;
}



/* Entry: 101a5ad30; end: 101a5ad53;  */

void FUN_101a5ad30(undefined8 *param_1,undefined8 param_2)

{
  FUN_101a5aa08();
  *param_1 = param_2;
  return;
}



/* Entry: 101a5ad54; end: 101a5af03;  */

long FUN_101a5ad54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104318d8;
  func_0x000107c613fc(&UNK_1104318d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112def730,&UNK_10d9bc5a0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_101a5af80;
  func_0x0001000bdd8c(FUN_101a5af80,puVar1);
  uVar3 = 0;
  func_0x0001002197c4(0);
  func_0x000107c610f8();
  func_0x000101d43ad4(pcVar2,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a5af04; end: 101a5af7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5af04(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_2 + _DAT_11303eae0);
  lVar2 = 0;
  FUN_101a5b0b8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112def808) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101a5af80; end: 101a5af97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5af80(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303eae0);
  lVar2 = 0;
  FUN_101a5b0b8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112def808) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101a5af98; end: 101a5b037;  */

void FUN_101a5af98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a5b038; end: 101a5b047;  */

void FUN_101a5b038(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a5b048; end: 101a5b0a7; -[_TtC40MemoriesValdiSnapDocClaimingServicesImpl19ValdiSnapDocClaimer init] */

void FUN_101a5b048(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiSnapDocClaimingServicesImpl.ValdiSnapDocClaimer",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a5b074);
  (*pcVar1)();
}



/* Entry: 101a5b0a8; end: 101a5b0b7; -[_TtC40MemoriesValdiSnapDocClaimingServicesImpl19ValdiSnapDocClaimer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5b0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112def808));
  return;
}



/* Entry: 101a5b0b8; end: 101a5b0d7;  */

void FUN_101a5b0b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f1bd8);
  return;
}



/* Entry: 101a5b0d8; end: 101a5b1bf; -[_TtC40MemoriesValdiSnapDocClaimingServicesImpl19ValdiSnapDocClaimer claimSnapDocWithInput:] */

void FUN_101a5b0d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_38;
  
  func_0x0001000285a8(0x112def840,&UNK_10d9bc648);
  puVar1 = PTR_PTR_1126a8610;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126a8618;
  func_0x000107c610f8(PTR_PTR_1126a8618);
  func_0x000107c467b4();
  uVar3 = 0x6c706d6920746f4e;
  func_0x000107c5fadc(0x6c706d6920746f4e,0xef6465746e656d65);
  func_0x000107c54664(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5486c(puVar1);
  func_0x000107c61170(puVar2);
  ppuVar4 = &puStack_38;
  puStack_38 = puVar1;
  func_0x000104888f7c(ppuVar4);
  func_0x000107c61170(puVar1);
  func_0x000103edf0bc();
  func_0x000107c61574(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101a5b1c0; end: 101a5b1db;  */

void FUN_101a5b1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a5b1dc,0,0);
  return;
}



/* Entry: 101a5b1dc; end: 101a5b3eb;  */

/* WARNING: Removing unreachable block (ram,0x000101a5b248) */

void FUN_101a5b1dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c5b1a8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar1);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  uVar1 = uVar2;
  func_0x0001010282b0(uVar2,param_2);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x00010006c090(uVar2,param_2);
  func_0x000107c3fa18(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46814();
  *(undefined **)(unaff_x22 + 0x60) = puVar3;
  func_0x000107c61170(uVar2);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a5b3ec;
  plVar7 = *(long **)(unaff_x22 + 0x50);
  plVar4[5] = unaff_x22 + 0x10;
  plVar4[6] = (long)plVar7;
  lVar8 = *(long *)(*plVar7 + 0x50);
  plVar4[7] = lVar8;
  lVar5 = 0;
  __sSqMa(0,lVar8);
  plVar4[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[9] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar6;
  lVar5 = *(long *)(lVar8 + -8);
  plVar4[0xb] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a5b3ec; end: 101a5b433;  */

void FUN_101a5b3ec(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a5b434,0,0);
  return;
}



/* Entry: 101a5b434; end: 101a5b4f3;  */

void FUN_101a5b434(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar3 + 0x48))(uVar4,uVar2,uVar1,lVar3);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a5b4f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)();
  return;
}



/* Entry: 101a5b4f4; end: 101a5b557;  */

void FUN_101a5b4f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a5b558;
  }
  else {
    pcVar1 = FUN_101a5b5c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a5b558; end: 101a5b5c3;  */

void FUN_101a5b558(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar3 = PTR_PTR_1126a8600;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  **(undefined8 **)(unaff_x22 + 0x40) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000101a5b5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a5b5c4; end: 101a5b6cf;  */

void FUN_101a5b5c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar4 = (undefined8 *)(unaff_x22 + 0x38);
  *puVar4 = uVar5;
  func_0x000107c614b0(uVar5);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fb18(puVar4,uVar1);
  puVar2 = PTR_PTR_1126a8600;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126a8608;
  func_0x000107c610f8(PTR_PTR_1126a8608);
  func_0x000107c467b4();
  func_0x000107c5fadc(puVar4,uVar1);
  func_0x000107c54664(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c5486c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c614ac(uVar5);
  func_0x000107c6142c(uVar1);
  **(undefined8 **)(unaff_x22 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000101a5b6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a5b6d0; end: 101a5b7d7; -[_TtC40MemoriesValdiSnapDocClaimingServicesImpl19ValdiSnapDocClaimer unclaimSnapDocWithInput:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5b6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112def838,&UNK_10d9bc628);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112def808);
  puVar1 = &UNK_110431940;
  func_0x000107c613fc(&UNK_110431940,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  uVar2 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000015,0x800000010efcd050,&UNK_10d9bc638,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000103edf0bc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101a5b7d8; end: 101a5b83b;  */

void FUN_101a5b7d8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a5b83c;
  plVar3[9] = lVar1;
  plVar3[10] = lVar2;
  plVar3[8] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a5b1dc,0,0);
  return;
}



/* Entry: 101a5b83c; end: 101a5b877;  */

void FUN_101a5b83c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a5b874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a5b878; end: 101a5b8f3;  */

void FUN_101a5b878(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd50(uVar2,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a5b8f4; end: 101a5b913;  */

void FUN_101a5b8f4(void)

{
  func_0x000107c61168(&PTR_PTR_112def888);
  return;
}



/* Entry: 101a5b914; end: 101a5b927; +[SCMemoriesMonetizationStorageQuotaState withTweakValues] */

void FUN_101a5b914(void)

{
  FUN_101a5ba44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a5b928; end: 101a5b9cb; +[SCMemoriesMonetizationStorageQuotaViolation withTweakValues] */

void FUN_101a5b928(undefined8 param_1)

{
  ulong uVar1;
  long extraout_x8;
  
  uVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar1 - 8) + 0x40));
  func_0x000107c3091c();
  if (0 < (long)uVar1) {
    func_0x000107c614ec(param_1);
    func_0x000107c5ee88(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                        (double)uVar1);
    func_0x000107c610f8(param_1);
    func_0x000103fbe4fc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                        param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a5b9cc; end: 101a5ba43; +[SCMemoriesMonetizationStorageQuotaUpsell withTweakValues] */

void FUN_101a5b9cc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x000107c30928();
  if ((uVar1 & 1) == 0) {
    func_0x000107c614ec(param_1);
    uVar1 = param_1;
    func_0x000107c3092c();
    uVar2 = uVar1;
    func_0x000107c30930();
    uVar3 = uVar2;
    func_0x000107c30934();
    func_0x000107c610f8(param_1);
    func_0x000103fbe7e8(uVar1,uVar2,uVar3,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a5ba44; end: 101a5bb7f;  */

void FUN_101a5ba44(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  uVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar1 - 8) + 0x40));
  puVar8 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c30918();
  puVar2 = (undefined1 *)0x0;
  if ((uVar1 & 1) == 0) {
    func_0x000107c30920();
    puVar3 = puVar2;
    func_0x000107c30924();
    puVar7 = puVar3;
    func_0x000107c3091c();
    if ((long)puVar7 < 1) {
      puVar8 = (undefined1 *)0x0;
      func_0x000107c30928();
    }
    else {
      func_0x000107c5ee88(puVar8,(double)puVar7);
      uVar4 = 0;
      func_0x000103fbeb84(0);
      func_0x000107c610f8();
      func_0x000103fbe4fc(puVar8,uVar4);
      puVar7 = puVar8;
      func_0x000107c30928();
    }
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c3092c();
      puVar5 = puVar7;
      func_0x000107c30930();
      puVar6 = puVar5;
      func_0x000107c30934();
      uVar4 = 0;
      func_0x000103fbeb64(0);
      func_0x000107c610f8();
      func_0x000103fbe7e8(puVar7,puVar5,puVar6,uVar4);
    }
    else {
      puVar7 = (undefined1 *)0x0;
    }
    uVar4 = 0;
    func_0x000103fbf074(0);
    func_0x000107c610f8();
    func_0x000103fbe238(puVar2,puVar3,puVar8,puVar7,uVar4);
    return;
  }
  return;
}



/* Entry: 101a5bb80; end: 101a5bb8f;  */

void FUN_101a5bb80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101a5bb90; end: 101a5c0cf;  */

void FUN_101a5bb90(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  long unaff_x21;
  long lVar14;
  undefined1 auStack_140 [14];
  undefined2 uStack_132;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_e8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100672b50(param_2,&stack0xffffffffffffff00);
  if (lStack_e8 == 0) {
    FUN_101a5c150(&stack0xffffffffffffff00,0x112d387f8,&UNK_10d902650);
    uVar7 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar7 != 0) {
      FUN_101a5c0d0();
      func_0x000107c61658(&stack0xffffffffffffff00,&UNK_110431a98,uVar7);
    }
    FUN_101a5c150(param_2,0x112d387f8,&UNK_10d902650);
    unaff_x21 = 0;
  }
  else {
    func_0x000100102924(&stack0xffffffffffffff00,auStack_90);
    func_0x0001000bb420(auStack_90,&stack0xffffffffffffff00);
    puVar5 = auStack_140;
    func_0x000107c6147c(puVar5,&stack0xffffffffffffff00,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSN_11034da80,6);
    if (((ulong)puVar5 & 1) == 0) {
      uVar7 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar7 != 0) {
        FUN_101a5c0d0();
        func_0x000107c61658(&stack0xffffffffffffff00,&UNK_110431a98,uVar7);
      }
      FUN_101a5c150(param_2,0x112d387f8,&UNK_10d902650);
      func_0x000100183ab8(auStack_90);
      unaff_x21 = 1;
    }
    else {
      lVar6 = CONCAT17(auStack_140[7],
                       CONCAT16(auStack_140[6],
                                CONCAT15(auStack_140[5],
                                         CONCAT14(auStack_140[4],
                                                  CONCAT13(auStack_140[3],
                                                           CONCAT12(auStack_140[2],
                                                                    CONCAT11(auStack_140[1],
                                                                             auStack_140[0])))))));
      puVar5 = (undefined1 *)
               CONCAT26(uStack_132,
                        CONCAT15(auStack_140[0xd],
                                 CONCAT14(auStack_140[0xc],
                                          CONCAT13(auStack_140[0xb],
                                                   CONCAT12(auStack_140[10],
                                                            CONCAT11(auStack_140[9],auStack_140[8]))
                                                  ))));
      puVar11 = puVar5;
      func_0x000107c5ee08(lVar6,puVar5,0);
      func_0x000107c6142c(puVar5);
      if ((ulong)puVar11 >> 0x3c < 0xf) {
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uVar3 = (uint)((ulong)puVar11 >> 0x20);
        uVar13 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar13 == 0) {
            auStack_140[0] = (undefined1)lVar6;
            auStack_140[1] = (undefined1)((ulong)lVar6 >> 8);
            auStack_140[2] = (undefined1)((ulong)lVar6 >> 0x10);
            auStack_140[3] = (undefined1)((ulong)lVar6 >> 0x18);
            auStack_140[4] = (undefined1)((ulong)lVar6 >> 0x20);
            auStack_140[5] = (undefined1)((ulong)lVar6 >> 0x28);
            auStack_140[6] = (undefined1)((ulong)lVar6 >> 0x30);
            auStack_140[7] = (undefined1)((ulong)lVar6 >> 0x38);
            auStack_140[8] = SUB81(puVar11,0);
            auStack_140[9] = (undefined1)((ulong)puVar11 >> 8);
            auStack_140[10] = (undefined1)((ulong)puVar11 >> 0x10);
            auStack_140[0xb] = (undefined1)((ulong)puVar11 >> 0x18);
            auStack_140[0xc] = (undefined1)((ulong)puVar11 >> 0x20);
            auStack_140[0xd] = (undefined1)((ulong)puVar11 >> 0x28);
            puVar12 = auStack_140 + ((ulong)puVar11 >> 0x30 & 0xff);
            func_0x000101a5c110();
            puVar8 = auStack_140;
          }
          else {
            lVar14 = (long)(int)lVar6;
            puVar8 = (undefined1 *)((lVar6 >> 0x20) - lVar14);
            if (lVar6 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101a5c0c0);
              (*pcVar4)();
            }
            puVar9 = (undefined1 *)((ulong)puVar11 & 0x3fffffffffffffff);
            func_0x000107c6157c();
            func_0x000107c5ec30();
            if (puVar9 == (undefined1 *)0x0) {
              func_0x000107c5ec38();
              puVar8 = (undefined1 *)0x0;
              puVar5 = puVar9;
LAB_101a5bf40:
              puVar12 = (undefined1 *)0x0;
            }
            else {
              puVar5 = puVar9;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar14,(long)puVar5)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101a5c0cc);
                (*pcVar4)();
              }
              puVar9 = puVar9 + (lVar14 - (long)puVar5);
              func_0x000107c5ec38();
              puVar1 = puVar5;
              if ((long)puVar8 <= (long)puVar5) {
                puVar1 = puVar8;
              }
              puVar8 = (undefined1 *)0x0;
              if (puVar9 != (undefined1 *)0x0) {
                puVar8 = puVar9;
              }
              puVar12 = (undefined1 *)0x0;
              if (puVar9 != (undefined1 *)0x0) {
                puVar12 = puVar1 + (long)puVar9;
              }
            }
LAB_101a5bf44:
            func_0x000101a5c110();
          }
        }
        else {
          if (uVar13 == 2) {
            lVar14 = *(long *)(lVar6 + 0x10);
            lVar2 = *(long *)(lVar6 + 0x18);
            func_0x000107c6157c(lVar6);
            puVar8 = (undefined1 *)((ulong)puVar11 & 0x3fffffffffffffff);
            func_0x000107c6157c();
            func_0x000107c5ec30();
            puVar5 = puVar8;
            if (puVar8 != (undefined1 *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar14,(long)puVar5)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101a5c0c8);
                (*pcVar4)();
              }
              puVar8 = puVar8 + (lVar14 - (long)puVar5);
            }
            puVar12 = (undefined1 *)(lVar2 - lVar14);
            if (SBORROW8(lVar2,lVar14)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101a5c0c4);
              (*pcVar4)();
            }
            func_0x000107c5ec38();
            if (puVar8 == (undefined1 *)0x0) goto LAB_101a5bf40;
            puVar9 = puVar5;
            if ((long)puVar12 <= (long)puVar5) {
              puVar9 = puVar12;
            }
            puVar12 = puVar9 + (long)puVar8;
            goto LAB_101a5bf44;
          }
          func_0x000101a5c110();
          auStack_140[0] = 0;
          auStack_140[1] = 0;
          auStack_140[2] = 0;
          auStack_140[3] = 0;
          auStack_140[4] = 0;
          auStack_140[5] = 0;
          auStack_140[6] = 0;
          auStack_140[7] = 0;
          auStack_140[8] = 0;
          auStack_140[9] = 0;
          auStack_140[10] = 0;
          auStack_140[0xb] = 0;
          auStack_140[0xc] = 0;
          auStack_140[0xd] = 0;
          puVar8 = auStack_140;
          puVar12 = auStack_140;
        }
        func_0x00010006ae80(puVar8,puVar12,&uStack_c0,0,100,0,&UNK_110431fb0,puVar5);
        if (unaff_x21 == 0) {
          func_0x0001000b44c0(lVar6,puVar11);
          FUN_101a5c150(&uStack_c0,0x112d49548,&UNK_10d90fde0);
          func_0x0001000b44c0(lVar6,puVar11);
          auStack_140[8] = 0;
          auStack_140[9] = 0;
          auStack_140[10] = 0;
          auStack_140[0xb] = 0;
          auStack_140[0xc] = 0;
          auStack_140[0xd] = 0;
          uStack_132 = 0;
          auStack_140[0] = 0;
          auStack_140[1] = 0;
          auStack_140[2] = 0;
          auStack_140[3] = 0;
          auStack_140[4] = 0;
          auStack_140[5] = 0;
          auStack_140[6] = 0;
          auStack_140[7] = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0xc000000000000000;
          uStack_110 = 0;
          FUN_101a5c150(param_2,0x112d387f8,&UNK_10d902650);
          func_0x000100183ab8(auStack_90);
          param_1[1] = CONCAT26(uStack_132,
                                CONCAT15(auStack_140[0xd],
                                         CONCAT14(auStack_140[0xc],
                                                  CONCAT13(auStack_140[0xb],
                                                           CONCAT12(auStack_140[10],
                                                                    CONCAT11(auStack_140[9],
                                                                             auStack_140[8]))))));
          *param_1 = CONCAT17(auStack_140[7],
                              CONCAT16(auStack_140[6],
                                       CONCAT15(auStack_140[5],
                                                CONCAT14(auStack_140[4],
                                                         CONCAT13(auStack_140[3],
                                                                  CONCAT12(auStack_140[2],
                                                                           CONCAT11(auStack_140[1],
                                                                                    auStack_140[0]))
                                                                 )))));
          param_1[3] = uStack_128;
          param_1[2] = uStack_130;
          param_1[5] = uStack_118;
          param_1[4] = uStack_120;
          param_1[7] = uStack_108;
          param_1[6] = uStack_110;
          goto LAB_101a5c014;
        }
        func_0x0001000b44c0(lVar6,puVar11);
        FUN_101a5c150(&uStack_c0,0x112d49548,&UNK_10d90fde0);
        func_0x000101a5c190(&stack0xffffffffffffff00);
        uVar7 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar7 != 0) {
          FUN_101a5c0d0();
          func_0x000107c61658(&stack0xffffffffffffff00,&UNK_110431a98,uVar7);
        }
        func_0x0001000b44c0(lVar6,puVar11);
        FUN_101a5c150(param_2,0x112d387f8,&UNK_10d902650);
        func_0x000100183ab8(auStack_90);
      }
      else {
        uVar7 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar7 != 0) {
          FUN_101a5c0d0();
          func_0x000107c61658(&stack0xffffffffffffff00,&UNK_110431a98,uVar7);
        }
        FUN_101a5c150(param_2,0x112d387f8,&UNK_10d902650);
        func_0x000100183ab8(auStack_90);
        unaff_x21 = 2;
      }
    }
  }
  *param_3 = unaff_x21;
LAB_101a5c014:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112def8f0 == (undefined *)0x0) {
    puVar10 = &UNK_10d9bc708;
    func_0x000107c61520(&UNK_10d9bc708,&UNK_110431a98);
    puRam0000000112def8f0 = puVar10;
    return;
  }
  return;
}



/* Entry: 101a5c0d0; end: 101a5c14f;  */

void FUN_101a5c0d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112def8f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9bc708;
  func_0x000107c61520(&UNK_10d9bc708,&UNK_110431a98);
  puRam0000000112def8f0 = puVar1;
  return;
}



/* Entry: 101a5c150; end: 101a5c1c3;  */

undefined8 FUN_101a5c150(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101a5c1c4; end: 101a5c1db;  */

void FUN_101a5c1c4(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 101a5c1dc; end: 101a5c2cb;  */

ulong * FUN_101a5c1dc(ulong *param_1,ulong *param_2)

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



/* Entry: 101a5c2cc; end: 101a5c3cb;  */

int FUN_101a5c2cc(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffd;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Entry: 101a5c3cc; end: 101a5c66f;  */

undefined1  [16] FUN_101a5c3cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar3 = puVar2;
  func_0x000100673624();
  func_0x000107c61534();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar11 = (undefined8 *)(puVar3 + 0x20);
  *puVar11 = puVar2;
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000100673700(puVar3);
  func_0x000107c61588(puVar3);
  uVar10 = *(undefined8 *)(puVar3 + 0x10);
  uVar5 = 0;
  FUN_101a5c704(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61408(puVar11,uVar10,uVar5);
  func_0x000100120cb0();
  puVar6 = puVar4;
  func_0x000107c5fe08(puVar4,uVar5,puVar11);
  func_0x000107c6142c(puVar4);
  FUN_101a5c704(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar12 + 0x68))
            (puVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1
            );
  puVar7 = puVar9;
  func_0x000107c5fff0(puVar9);
  (**(code **)(lVar12 + 8))(puVar9,lVar1);
  puVar3 = &UNK_110431ae0;
  func_0x000107c613fc(&UNK_110431ae0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_98 = FUN_101a5c744;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  uStack_a8 = 0x10168981c;
  puStack_a0 = &UNK_110431af8;
  ppuVar8 = &puStack_b8;
  puStack_90 = puVar3;
  func_0x000107c60bc4(ppuVar8);
  puVar3 = puStack_90;
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4da64();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  puVar3 = &UNK_110431b30;
  func_0x000107c613fc(&UNK_110431b30,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_2);
  uVar5 = 0x101a5c768;
  func_0x0001000b6d50(0x101a5c768,puVar3);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(puVar2);
  auVar13._8_8_ = &PTR_DAT_1107aaa40;
  auVar13._0_8_ = uVar5;
  return auVar13;
}



/* Entry: 101a5c670; end: 101a5c703;  */

void FUN_101a5c670(long param_1,ulong param_2,long param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x000107c61434(param_1);
    func_0x000100121450(param_3);
    if ((param_2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + param_3 * 0x20,&uStack_50);
      func_0x000107c6142c(param_1);
      goto LAB_101a5c6dc;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
LAB_101a5c6dc:
  func_0x000100087f6c(&uStack_50);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 101a5c704; end: 101a5c743;  */

void FUN_101a5c704(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a5c744; end: 101a5c777;  */

void FUN_101a5c744(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x000107c61434(param_1);
    func_0x000100121450(lVar1);
    if ((uVar2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&uStack_50);
      func_0x000107c6142c(param_1);
      goto LAB_101a5c6dc;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
LAB_101a5c6dc:
  func_0x000100087f6c(&uStack_50);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 101a5c778; end: 101a5c96b;  */

void FUN_101a5c778(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  if (param_1[2] == 0) {
    puVar9 = (undefined1 *)0x0;
    lVar5 = param_1[3];
  }
  else {
    func_0x000107c5ee88(lVar10,(double)(ulong)param_1[2] / 1000.0);
    (**(code **)(lVar11 + 0x10))(puVar9,lVar10,lVar5);
    uVar6 = 0;
    func_0x000103fbeb84(0);
    func_0x000107c610f8();
    func_0x000103fbe4fc(puVar9,uVar6);
    (**(code **)(lVar11 + 8))(lVar10,lVar5);
    lVar5 = param_1[3];
  }
  if (lVar5 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      if (-1 < lVar5) {
        uVar3 = *(undefined4 *)((long)param_1 + 0x24);
        uVar6 = 0;
        func_0x000103fbeb64(0);
        func_0x000107c610f8();
        func_0x000103fbe7e8(lVar5,iVar2,uVar3,uVar6);
        goto LAB_101a5c920;
      }
      func_0x0001000d224c(&lStack_58);
      if (lStack_58 != 0) {
        lVar5 = lStack_58;
        func_0x000107c4cba0();
        func_0x000107c61180();
        func_0x000107c61170(lStack_58);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a5c96c);
          (*pcVar4)();
        }
        puVar7 = PTR_PTR_1126b2438;
        func_0x000107c61168(PTR_PTR_1126b2438);
        func_0x000107c5beb8();
        func_0x000107c61180();
        func_0x000107c45314(lVar5);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(puVar7);
      }
    }
    lVar5 = 0;
  }
LAB_101a5c920:
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar8 = 0;
  func_0x000103fbf074(0);
  func_0x000107c610f8();
  func_0x000103fbe238(uVar1,uVar6,puVar9,lVar5,uVar8);
  return;
}



/* Entry: 101a5c96c; end: 101a5cbe7;  */

long FUN_101a5c96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110431b58;
  func_0x000107c613fc(&UNK_110431b58,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x0001000285a8(0x112def900,&UNK_10d9bc750);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  pcVar2 = FUN_101a5cce4;
  func_0x0001000bdd8c(FUN_101a5cce4,puVar1);
  puVar1 = &UNK_110431b80;
  func_0x000107c613fc(&UNK_110431b80,0x20,7);
  *(code **)(puVar1 + 0x10) = pcVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112def908,&UNK_10d9bc758);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c6157c(pcVar2);
  pcVar3 = FUN_101a5cd84;
  func_0x0001000bdd8c(FUN_101a5cd84,puVar1);
  puVar1 = &UNK_110431ba8;
  func_0x000107c613fc(&UNK_110431ba8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x0001000285a8(0x112def910,&UNK_10d9bc760);
  func_0x000107c613fc();
  func_0x000107c61174(param_5);
  pcVar4 = FUN_101a5ce04;
  func_0x0001000bdd8c(FUN_101a5ce04,puVar1);
  puVar1 = &UNK_110431bd0;
  func_0x000107c613fc(&UNK_110431bd0,0x20,7);
  *(code **)(puVar1 + 0x10) = pcVar2;
  *(code **)(puVar1 + 0x18) = pcVar4;
  func_0x0001000285a8(0x112def918,&UNK_10d9bc768);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101a5ce94;
  func_0x0001000bdd8c(FUN_101a5ce94,puVar1);
  uVar6 = 0;
  func_0x0001002176d4(0);
  func_0x000107c610f8();
  func_0x0001003a5a40(pcVar2,pcVar3,pcVar5,pcVar4,uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 101a5cbe8; end: 101a5cce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5cbe8(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x0001000285a8(0x112dbfa50,&UNK_10d97b760);
    lVar2 = param_2;
    func_0x0001000bda74();
    func_0x000107c61170(param_2);
    uVar5 = *(undefined8 *)(param_3 + _DAT_1130806b8);
    func_0x0001000285a8(0x112dd07c8,&UNK_10d9bc7b0);
    func_0x000107c6157c(uVar5);
    func_0x000107c444a4(param_4);
    func_0x000107c61180();
    uVar3 = param_4;
    func_0x0001000bda74();
    func_0x000107c61170(param_4);
    uVar4 = 0;
    FUN_101a5eee0(0);
    func_0x000107c610f8();
    FUN_101a5e724(lVar2,uVar5,uVar3,uVar4);
    *param_1 = lVar2;
    param_1[1] = (long)&PTR_DAT_110431cd8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a5cce4);
  (*pcVar1)();
}



/* Entry: 101a5cce4; end: 101a5ccef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5cce4(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001000285a8(0x112dbfa50,&UNK_10d97b760);
    lVar4 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
    uVar7 = *(undefined8 *)(lVar1 + _DAT_1130806b8);
    func_0x0001000285a8(0x112dd07c8,&UNK_10d9bc7b0);
    func_0x000107c6157c(uVar7);
    func_0x000107c444a4(uVar6);
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x0001000bda74();
    func_0x000107c61170(uVar6);
    uVar6 = 0;
    FUN_101a5eee0(0);
    func_0x000107c610f8();
    FUN_101a5e724(lVar4,uVar7,uVar5,uVar6);
    *param_1 = lVar4;
    param_1[1] = (long)&PTR_DAT_110431cd8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a5cce4);
  (*pcVar2)();
}



/* Entry: 101a5ccf0; end: 101a5cd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5ccf0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_3 + _DAT_1130806b8);
  lVar2 = 0;
  FUN_101a60d78();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112defb78) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112defb80) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101a5cd84; end: 101a5cd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5cd84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = &lStack_40;
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130806b8);
  lVar3 = 0;
  FUN_101a60d78();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112defb78) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112defb80) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_40,puVar2);
  *param_1 = plVar5;
  return;
}



/* Entry: 101a5cd8c; end: 101a5ce03;  */

void FUN_101a5cd8c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2;
  func_0x000107c4cc44();
  func_0x000107c61180();
  func_0x000107c4cb6c();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000101a5e4dc();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110431ca0;
  *param_1 = lVar3;
  return;
}



/* Entry: 101a5ce04; end: 101a5ce0b;  */

void FUN_101a5ce04(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar4;
  func_0x000107c4cc44();
  func_0x000107c61180();
  func_0x000107c4cb6c();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000101a5e4dc();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110431ca0;
  *param_1 = lVar3;
  return;
}



/* Entry: 101a5ce0c; end: 101a5ce93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5ce0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101a60064();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112defb40) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112defb48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101a5ce94; end: 101a5ce9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5ce94(undefined8 *param_1)

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
  FUN_101a60064();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112defb40) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112defb48) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101a5ce9c; end: 101a5cf27;  */

void FUN_101a5ce9c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a5cf28; end: 101a5cf2f;  */

void FUN_101a5cf28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a5cf30; end: 101a5cf53;  */

void FUN_101a5cf30(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a5cf54; end: 101a5cf6f;  */

void FUN_101a5cf54(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101a5cf70; end: 101a5d7ab;  */

long FUN_101a5cf70(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lStack_80;
  long lStack_78;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12;
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar11 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = uVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar9 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar7 - extraout_x12_05;
  func_0x0001009f0578(param_2,lVar4);
  lVar1 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000d1dcc(lVar4);
  }
  else {
    pcVar13 = *(code **)(lVar6 + 0x20);
    (*pcVar13)(lVar5,lVar4,lVar2);
    func_0x000107c5ee8c();
    if (param_1 <= 0.0) {
      pcVar13 = *(code **)(lVar6 + 8);
    }
    else {
      (*pcVar13)(lVar7,lVar5,lVar2);
      (*pcVar13)(lVar12,lVar7,lVar2);
      if (-1 < param_3) {
        func_0x000107c5eea0(lVar9);
        func_0x000107c5ee6c(lVar10,0xc17dfe2000000000);
        if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x101a5d2f8);
          (*pcVar13)();
        }
        func_0x000107c5ee6c(uVar11,(double)(param_3 + 1) * 86400.0 + -31536000.0);
        uVar3 = uVar11;
        func_0x000107c5ee74(uVar11,lVar10);
        lVar1 = lStack_80;
        if ((uVar3 & 1) == 0) {
          pcVar13 = *(code **)(lVar6 + 8);
          (*pcVar13)(uVar11,lVar2);
          (*pcVar13)(lVar10,lVar2);
          (*pcVar13)(lVar9,lVar2);
          (*pcVar13)(lVar12,lVar2);
          return 0;
        }
        pcVar13 = *(code **)(lVar6 + 0x10);
        (*pcVar13)(lStack_80,lVar10,lVar2);
        pcVar8 = *(code **)(lVar6 + 0x38);
        (*pcVar8)(lVar1,0,1,lVar2);
        lVar5 = lStack_78;
        (*pcVar13)(lStack_78,uVar11,lVar2);
        (*pcVar8)(lVar5,0,1,lVar2);
        lVar4 = lVar12;
        func_0x000101a5d2f8(lVar12,lVar1,lVar5);
        func_0x0001000d1dcc(lVar5);
        func_0x0001000d1dcc(lVar1);
        pcVar13 = *(code **)(lVar6 + 8);
        (*pcVar13)(uVar11,lVar2);
        (*pcVar13)(lVar10,lVar2);
        (*pcVar13)(lVar9,lVar2);
        (*pcVar13)(lVar12,lVar2);
        return lVar4;
      }
      pcVar13 = *(code **)(lVar6 + 8);
      lVar5 = lVar12;
    }
    (*pcVar13)(lVar5,lVar2);
  }
  return 0;
}



/* Entry: 101a5d7ac; end: 101a5e4af;  */

long FUN_101a5d7ac(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lStack_90;
  long lStack_88;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12;
  lStack_90 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar11 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = uVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar9 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar6 - extraout_x12_05;
  func_0x0001009f0578(param_2,lVar4);
  lVar1 = lVar4;
  (**(code **)(lVar8 + 0x30))(lVar4,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000d1dcc(lVar4);
  }
  else {
    pcVar13 = *(code **)(lVar8 + 0x20);
    (*pcVar13)(lVar5,lVar4,lVar2);
    func_0x000107c5ee8c();
    if (param_1 <= 0.0) {
      (**(code **)(lVar8 + 8))(lVar5,lVar2);
    }
    else {
      (*pcVar13)(lVar6,lVar5,lVar2);
      (*pcVar13)(lVar12,lVar6,lVar2);
      func_0x000107c5eea0(lVar9);
      func_0x000107c5ee6c(lVar10,0xc17dfe2000000000);
      func_0x000107c5ee6c(uVar11,0xc17dfe2000000000);
      uVar3 = uVar11;
      func_0x000107c5ee74(uVar11,lVar10);
      lVar1 = lStack_90;
      if ((uVar3 & 1) != 0) {
        pcVar13 = *(code **)(lVar8 + 0x10);
        (*pcVar13)(lStack_90,lVar10,lVar2);
        pcVar7 = *(code **)(lVar8 + 0x38);
        (*pcVar7)(lVar1,0,1,lVar2);
        lVar4 = lStack_88;
        (*pcVar13)(lStack_88,uVar11,lVar2);
        (*pcVar7)(lVar4,0,1,lVar2);
        lVar5 = lVar12;
        func_0x000101a5d2f8(lVar12,lVar1,lVar4);
        func_0x0001000d1dcc(lVar4);
        func_0x0001000d1dcc(lVar1);
        pcVar13 = *(code **)(lVar8 + 8);
        (*pcVar13)(uVar11,lVar2);
        (*pcVar13)(lVar10,lVar2);
        (*pcVar13)(lVar9,lVar2);
        (*pcVar13)(lVar12,lVar2);
        return lVar5;
      }
      pcVar13 = *(code **)(lVar8 + 8);
      (*pcVar13)(uVar11,lVar2);
      (*pcVar13)(lVar10,lVar2);
      (*pcVar13)(lVar9,lVar2);
      (*pcVar13)(lVar12,lVar2);
    }
  }
  return 0;
}



/* Entry: 101a5e4b0; end: 101a5e4fb;  */

void FUN_101a5e4b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a5e4fc; end: 101a5e59b;  */

void FUN_101a5e4fc(void)

{
  FUN_101a5cf70();
  return;
}



/* Entry: 101a5e59c; end: 101a5e5b7;  */

void FUN_101a5e59c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a5e5b8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a5e5b8; end: 101a5e6bf;  */

undefined * FUN_101a5e5b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a5e6c0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112defa98;
    func_0x0001000285a8(0x112defa98,&UNK_10d9bc800);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_11072c658);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x20 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a5e6c0; end: 101a5e703;  */

void FUN_101a5e6c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d58e60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eea4(0xff);
  puVar2 = PTR___s10Foundation4DateVSLAAMc_110350bd8;
  func_0x000107c61520(PTR___s10Foundation4DateVSLAAMc_110350bd8,uVar1);
  puRam0000000112d58e60 = puVar2;
  return;
}



/* Entry: 101a5e704; end: 101a5e713; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager isMonetizationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101a5e704(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112defad0);
}



/* Entry: 101a5e714; end: 101a5e723; -[_TtC32MemoriesMonetizationServicesImpl19StorageQuotaManager isMonetizationSettingsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101a5e714(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112defad8);
}



/* Entry: 101a5e724; end: 101a5eb47;  */

/* WARNING: Removing unreachable block (ram,0x000101a5e964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101a5e724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  undefined1 *puVar8;
  long unaff_x20;
  ulong *apuStack_190 [8];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [32];
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar8 = &stack0xfffffffffffffe60;
  func_0x000107c614f0();
  lVar2 = _DAT_112defac8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112defaa0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112defaa8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112defab0) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000d224c(&uStack_a0);
  uVar5 = uStack_a0;
  uVar4 = uStack_a0;
  func_0x000107c4cbf8();
  func_0x000107c615e8(uVar5);
  *(byte *)(unaff_x20 + _DAT_112defad8) = (byte)uVar4 ^ 1;
  func_0x0001000d224c(&uStack_a0);
  uVar5 = uStack_a0;
  uVar4 = uStack_a0;
  func_0x000107c4cbec();
  func_0x000107c615e8(uVar5);
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112defad0) = 0;
    uStack_a0 = 0;
    func_0x0001000285a8(0x112defb30,&UNK_10d9bc850);
    func_0x000107c613fc();
    puVar6 = &uStack_a0;
    func_0x00010042e6a0();
    *(ulong **)(unaff_x20 + _DAT_112defac0) = puVar6;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112defab8);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    goto LAB_101a5ea08;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112defab8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  func_0x0001000d224c(&uStack_110);
  if (uStack_110 == 0) {
LAB_101a5e990:
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
LAB_101a5e998:
    FUN_101a5fef0(&uStack_a0,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar5 = uStack_110;
    func_0x000107c5dc1c();
    func_0x000107c61180();
    if (uVar5 == 0) {
      func_0x000107c61170(uStack_110);
      goto LAB_101a5e990;
    }
    func_0x000107c60234(&uStack_a0);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uStack_110);
    if (lStack_88 == 0) goto LAB_101a5e998;
    func_0x000100102924(&uStack_a0,auStack_c0);
    func_0x0001000d224c(&uStack_a0);
    uVar5 = uStack_a0;
    uVar4 = uStack_a0;
    func_0x000107c4cbe8();
    func_0x000107c615e8(uVar5);
    if ((int)uVar4 != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112defad0) = 1;
      func_0x0001000bb420(auStack_c0,auStack_130);
      FUN_101a5bb90(&uStack_a0,auStack_130,auStack_140);
      uStack_108 = uStack_98;
      uStack_110 = uStack_a0;
      lStack_f8 = lStack_88;
      uStack_100 = uStack_90;
      uStack_e8 = uStack_78;
      uStack_f0 = uStack_80;
      uStack_d8 = uStack_68;
      uStack_e0 = uStack_70;
      func_0x000107c6157c(param_3);
      func_0x000101a5ff30(&uStack_a0,apuStack_190);
      puVar6 = &uStack_a0;
      FUN_101a5c778(puVar6,param_3);
      func_0x000107c61574(param_3);
      func_0x000101a5c190(&uStack_a0);
      apuStack_190[0] = puVar6;
      func_0x0001000285a8(0x112defb30,&UNK_10d9bc850);
      func_0x000107c613fc();
      func_0x000107c61174(puVar6);
      ppuVar7 = apuStack_190;
      func_0x00010042e6a0();
      *(ulong ***)(unaff_x20 + _DAT_112defac0) = ppuVar7;
      puVar8 = &stack0xfffffffffffffeb0;
      func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
      FUN_101a5eb48();
      FUN_101a5fef0(&uStack_110,0x112defb38,&UNK_10d9bc858);
      func_0x000107c61574(param_1);
      func_0x000107c61574(param_2);
      func_0x000107c61574(param_3);
      func_0x000107c61170(puVar6);
      func_0x000100183ab8(auStack_c0);
      return puVar8;
    }
    func_0x000100183ab8(auStack_c0);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112defad0) = 0;
  uStack_a0 = 0;
  func_0x0001000285a8(0x112defb30,&UNK_10d9bc850);
  func_0x000107c613fc();
  puVar6 = &uStack_a0;
  func_0x00010042e6a0();
  *(ulong **)(unaff_x20 + _DAT_112defac0) = puVar6;
  puVar8 = &stack0xffffffffffffff30;
LAB_101a5ea08:
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return puVar8;
}



/* Entry: 101a5eb48; end: 101a5ecd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5eb48(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_48;
  
  if (*(char *)(unaff_x20 + _DAT_112defad0) == '\x01') {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112defab0);
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 != 0) {
      puVar1 = &UNK_110431cf8;
      func_0x000107c613fc(&UNK_110431cf8,0x18,7);
      *(long *)(puVar1 + 0x10) = lStack_48;
      uVar2 = 0x112dbe938;
      func_0x0001000285a8(0x112dbe938,&UNK_10d979ce0);
      func_0x000107c613fc();
      pcVar3 = FUN_101a5ff6c;
      func_0x0001000b64ac(FUN_101a5ff6c,puVar1,uVar2);
      func_0x000107c6157c(uVar6);
      uVar2 = 0x112defb10;
      func_0x0001000285a8(0x112defb10,&UNK_10d9bc838);
      plVar4 = (long *)0x101a5ff74;
      func_0x0001000bfde0(0x101a5ff74,uVar6,uVar2);
      func_0x000107c61574(pcVar3);
      func_0x000107c61574(uVar6);
      puVar1 = &UNK_110431d20;
      func_0x000107c613fc(&UNK_110431d20,0x18,7);
      func_0x000107c61614(puVar1 + 0x10);
      uVar6 = 0x101a5ff7c;
      puVar5 = puVar1;
      (**(code **)(*plVar4 + 0x60))(0x101a5ff7c);
      func_0x000107c61574(plVar4);
      func_0x000107c61574(puVar1);
      uVar2 = uVar6;
      func_0x000107c614f0(uVar6);
      (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112defac8),uVar2,puVar5);
      func_0x000107c615e8(uVar6);
    }
  }
  return;
}


