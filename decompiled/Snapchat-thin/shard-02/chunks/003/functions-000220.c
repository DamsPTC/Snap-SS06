/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bba820; end: 101bba887;  */

void FUN_101bba820(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bba888;
  plVar1[0xb] = lVar2;
  plVar1[10] = param_1;
  plVar1[8] = param_2;
  plVar1[9] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb9ffc,0,0);
  return;
}



/* Entry: 101bba888; end: 101bba8cf;  */

void FUN_101bba888(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bba8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bba8d0; end: 101bba94f;  */

void FUN_101bba8d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bbab94,0,0);
  return;
}



/* Entry: 101bba950; end: 101bba95f;  */

void FUN_101bba950(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101bba95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101bba960; end: 101bba9df;  */

void FUN_101bba960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bbab98,0,0);
  return;
}



/* Entry: 101bba9e0; end: 101bba9f7;  */

void FUN_101bba9e0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bba9f8,0,0);
  return;
}



/* Entry: 101bba9f8; end: 101bbaabf;  */

void FUN_101bba9f8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101bbaa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bbaac0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110451820;
  func_0x000107c613fc(&UNK_110451820,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101bbab30,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bbaac0; end: 101bbaaff;  */

void FUN_101bbaac0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101bbab9c,0,0);
  return;
}



/* Entry: 101bbab00; end: 101bbab0f;  */

undefined1  [16] FUN_101bbab00(void)

{
  return ZEXT816(0x110451800);
}



/* Entry: 101bbab10; end: 101bbab2f;  */

void FUN_101bbab10(void)

{
  func_0x000107c61168(&PTR_PTR_112e072c8);
  return;
}



/* Entry: 101bbab30; end: 101bbab33;  */

void FUN_101bbab30(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101bbab80(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101bbab34; end: 101bbab7f;  */

void FUN_101bbab34(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101bbab80(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101bbab80; end: 101bbab9f;  */

void FUN_101bbab80(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101bbaba0; end: 101bbac23;  */

/* WARNING: Possible PIC construction at 0x000101bbabf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bbac08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bbabfc) */
/* WARNING: Removing unreachable block (ram,0x000101bbac0c) */

void FUN_101bbaba0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101bbbdb4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110451868;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bbac24; end: 101bbac2f;  */

/* WARNING: Possible PIC construction at 0x000101bbabf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101bbac08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bbabfc) */
/* WARNING: Removing unreachable block (ram,0x000101bbac0c) */

void FUN_101bbac24(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = lVar1;
  FUN_101bbbdb4();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(long *)(lVar6 + 0x10) = lVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_110451868;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 101bbac30; end: 101bbac7f;  */

void FUN_101bbac30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 101bbac80; end: 101bbac9b;  */

void FUN_101bbac80(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbac9c,0,0);
  return;
}



/* Entry: 101bbac9c; end: 101bbad47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbac9c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112fd9ce8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lVar3);
  func_0x0001000d224c(unaff_x22 + 0x18);
  func_0x000107c61574(uVar2);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bbad48;
                    /* WARNING: Could not recover jumptable at 0x000101bbad44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101bbad48; end: 101bbad9b;  */

void FUN_101bbad48(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  *(undefined1 *)(lVar1 + 0xb8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbad9c,0,0);
  return;
}



/* Entry: 101bbad9c; end: 101bbaf27;  */

void FUN_101bbad9c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    puVar6 = *(undefined1 **)(unaff_x22 + 0x58);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
    FUN_101bb47ac(puVar6,1);
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar6,0,0);
    *puVar6 = 0;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bbae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x0001000285a8(0x112e06ff8,&UNK_10d9db110);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c442ec();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar5;
  func_0x000103edf20c();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  func_0x000107c61170(uVar5);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bbaf28;
                    /* WARNING: Could not recover jumptable at 0x000101bbaf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101bb47c0)();
  return;
}



/* Entry: 101bbaf28; end: 101bbaf7b;  */

void FUN_101bbaf28(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined1 *)(lVar1 + 0xb9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbaf7c,0,0);
  return;
}



/* Entry: 101bbaf7c; end: 101bbb25f;  */

void FUN_101bbaf7c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  
  puVar9 = *(undefined1 **)(unaff_x22 + 0x70);
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    *(undefined1 **)(unaff_x22 + 0x28) = puVar9;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar12,PTR___ss5ErrorWS_11034ee10);
    }
    puVar9 = *(undefined1 **)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xb8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
    FUN_101bbbd4c(puVar9,1);
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar9,0,0);
    *puVar9 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c5b134();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0x78) = puVar9;
    puVar4 = puVar9;
    func_0x000107c4ca3c();
    if ((int)puVar4 == 2) {
      puVar13 = puVar9;
      func_0x000107c5d808();
      func_0x000107c61180();
      *(undefined1 **)(unaff_x22 + 0x80) = puVar13;
      puVar4 = (undefined1 *)0x0;
      if (puVar13 != (undefined1 *)0x0) {
        puVar9 = puVar13;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        puVar4 = puVar9;
        func_0x000107c5faec();
        lVar10 = param_2;
        func_0x000107c61170(puVar9);
        *(long *)(unaff_x22 + 0x88) = param_2;
        puVar9 = puVar13;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (puVar9 == (undefined1 *)0x0) {
          lVar6 = 0;
          puVar9 = (undefined1 *)0x0;
        }
        else {
          puVar5 = puVar9;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar9);
          lVar6 = 0;
          puVar9 = puVar5;
          func_0x000107c5ee24(0,puVar5,lVar10);
          func_0x00010006c090(puVar5,lVar10);
        }
        *(undefined1 **)(unaff_x22 + 0x90) = puVar9;
        func_0x000107c4a804();
        func_0x000107c61180();
        if (puVar13 == (undefined1 *)0x0) {
          lVar7 = 0;
          puVar13 = (undefined1 *)0x0;
        }
        else {
          puVar5 = puVar13;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar13);
          lVar7 = 0;
          puVar13 = puVar5;
          func_0x000107c5ee24(0,puVar5,lVar10);
          func_0x00010006c090(puVar5,lVar10);
        }
        *(undefined1 **)(unaff_x22 + 0x98) = puVar13;
        plVar8 = (long *)0xf0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xa0) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_101bbb260;
        lVar10 = *(long *)(unaff_x22 + 0x40);
        plVar8[0x13] = (long)puVar13;
        plVar8[0x14] = lVar10;
        plVar8[0x11] = (long)puVar9;
        plVar8[0x12] = lVar7;
        plVar8[0xf] = param_2;
        plVar8[0x10] = lVar6;
        plVar8[0xe] = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbb404,0,0);
        return;
      }
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined1 *)(unaff_x22 + 0xb9);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xb8);
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar4,0,0);
    *puVar4 = 2;
    func_0x000107c61654();
    func_0x000107c61170(puVar9);
    FUN_101bbbd4c(uVar11,uVar2);
  }
  FUN_101bb47ac(uVar12,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bbb194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bbb260; end: 101bbb2f3;  */

void FUN_101bbb260(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa0));
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 0x90);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xb0) = param_1;
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x98));
    func_0x000107c6142c(uVar2);
    pcVar1 = FUN_101bbb2f4;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x98));
    func_0x000107c6142c(uVar2);
    pcVar1 = FUN_101bbb36c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bbb2f4; end: 101bbb36b;  */

void FUN_101bbb2f4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined1 *)(unaff_x22 + 0xb9);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar1);
  FUN_101bbbd4c(uVar4,uVar2);
  FUN_101bb47ac(uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bbb368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Entry: 101bbb36c; end: 101bbb3df;  */

void FUN_101bbb36c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined1 *)(unaff_x22 + 0xb9);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61170(uVar1);
  FUN_101bbbd4c(uVar4,uVar2);
  FUN_101bb47ac(uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bbb3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bbb3e0; end: 101bbb403;  */

void FUN_101bbb3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbb404,0,0);
  return;
}



/* Entry: 101bbb404; end: 101bbb5b3;  */

/* WARNING: Removing unreachable block (ram,0x000101bbb4e4) */

void FUN_101bbb404(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long unaff_x22;
  long lVar11;
  
  func_0x000100083b20(unaff_x22 + 0x68);
  puVar10 = *(undefined1 **)(unaff_x22 + 0x68);
  puVar8 = puVar10;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  puVar10 = puVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xa8) = puVar10;
  func_0x000107c61170();
  if (puVar10 != (undefined1 *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar11 = *(long *)(unaff_x22 + 0x70);
    func_0x000100083b20(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar7 = *(long *)(unaff_x22 + 0x60);
    func_0x000101bbbd60(unaff_x22 + 0x40,uVar4);
    (**(code **)(lVar7 + 8))(lVar11,uVar3,uVar6,uVar2,uVar5,uVar1,uVar4,lVar7);
    *(long *)(unaff_x22 + 0xb0) = lVar11;
    func_0x000101bbbd84(unaff_x22 + 0x40);
    puVar8 = puVar10;
    func_0x000107c614f0();
    plVar9 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101bbb5b4;
    plVar9[4] = (long)puVar8;
    plVar9[5] = (long)puVar10;
    plVar9[3] = lVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbb924,0,0);
    return;
  }
  func_0x000101bba9a0();
  func_0x000107c613f8(&UNK_1104519c8,puVar8,0,0);
  *puVar8 = 3;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bbb54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bbb5b4; end: 101bbb613;  */

void FUN_101bbb5b4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xc0) = param_1;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bbb614;
  }
  else {
    pcVar1 = FUN_101bbb8cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bbb614; end: 101bbb747;  */

void FUN_101bbb614(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  puVar3 = *(undefined1 **)(unaff_x22 + 0xc0);
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    *(undefined1 **)(unaff_x22 + 0xd0) = puVar4;
    *(long *)(unaff_x22 + 0xd8) = param_2;
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar11 = *(long *)(unaff_x22 + 0x38);
    func_0x000101bbbd60(unaff_x22 + 0x10,uVar9);
    plVar5 = (long *)0x30;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101bbb748;
    plVar7 = (long *)0x30;
    func_0x000107c615b8();
    plVar5[2] = (long)plVar7;
    *plVar7 = (long)plVar5;
    plVar7[1] = (long)FUN_102174124;
    plVar7[2] = (long)puVar4;
    plVar7[3] = param_2;
    piVar8 = *(int **)(lVar11 + 8);
    iVar1 = *piVar8;
    puVar6 = (undefined8 *)(ulong)(uint)piVar8[1];
    func_0x000107c615b8();
    plVar7[4] = (long)puVar6;
    *puVar6 = plVar7;
    puVar6[1] = FUN_102173c98;
                    /* WARNING: Could not recover jumptable at 0x000102173c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))(puVar4,param_2,1,uVar9,lVar11);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000101bba9a0();
  func_0x000107c613f8(&UNK_1104519c8,puVar3,0,0);
  *puVar3 = 7;
  func_0x000107c61654();
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101bbb744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bbb748; end: 101bbb7b7;  */

void FUN_101bbb748(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xe8) = param_1;
    pcVar1 = FUN_101bbb7b8;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_101bbb820;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bbb7b8; end: 101bbb81f;  */

void FUN_101bbb7b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uVar3);
  func_0x000101bbbd84(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101bbb81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xe8));
  return;
}



/* Entry: 101bbb820; end: 101bbb8cb;  */

void FUN_101bbb820(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar5 = (undefined1 *)(unaff_x22 + 0x10);
  func_0x000101bbbd84();
  func_0x000101bba9a0();
  func_0x000107c613f8(&UNK_1104519c8,puVar5,0,0);
  *puVar5 = 8;
  func_0x000107c61654();
  func_0x00010006c090(uVar1,uVar3);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bbb8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bbb8cc; end: 101bbb907;  */

void FUN_101bbb8cc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bbb904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bbb908; end: 101bbb923;  */

void FUN_101bbb908(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbb924,0,0);
  return;
}



/* Entry: 101bbb924; end: 101bbba03;  */

void FUN_101bbb924(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001000285a8(0x112deb958,&UNK_10d9db790);
  puVar1 = &UNK_1104518b0;
  func_0x000107c613fc(&UNK_1104518b0,0x28,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(uVar4);
  uVar2 = 0;
  func_0x0001048897a0(0,1,0,FUN_101bbbdd4,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bbba04;
                    /* WARNING: Could not recover jumptable at 0x000101bbba00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bba9e0();
  return;
}



/* Entry: 101bbba04; end: 101bbba57;  */

void FUN_101bbba04(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbba58,0,0);
  return;
}



/* Entry: 101bbba58; end: 101bbbb03;  */

void FUN_101bbba58(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101bbbadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000101bbbb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 101bbbb04; end: 101bbbb0f;  */

void FUN_101bbbb04(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101bbbb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bbbb10; end: 101bbbb5b;  */

void FUN_101bbbb10(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101bbbb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bbbb5c; end: 101bbbbbb;  */

void FUN_101bbbb5c(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bbbe20;
  plVar1[7] = param_2;
  plVar1[8] = lVar2;
  plVar1[6] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbac9c,0,0);
  return;
}



/* Entry: 101bbbbbc; end: 101bbbc4b;  */

void FUN_101bbbbbc(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bbbc4c;
  plVar1[0x13] = param_6;
  plVar1[0x14] = lVar2;
  plVar1[0x11] = param_4;
  plVar1[0x12] = param_5;
  plVar1[0xf] = param_2;
  plVar1[0x10] = param_3;
  plVar1[0xe] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbb404,0,0);
  return;
}



/* Entry: 101bbbc4c; end: 101bbbc93;  */

void FUN_101bbbc4c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bbbc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bbbc94; end: 101bbbd4b;  */

void FUN_101bbbc94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  pcStack_50 = FUN_101bbbde0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f17d9c;
  puStack_58 = &UNK_1104518c8;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c50788(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101bbbd4c; end: 101bbbdb3;  */

void FUN_101bbbd4c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101bbbdb4; end: 101bbbdd3;  */

void FUN_101bbbdb4(void)

{
  func_0x000107c61168(&PTR_PTR_112e07378);
  return;
}



/* Entry: 101bbbdd4; end: 101bbbddf;  */

void FUN_101bbbdd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar3 = &puStack_70;
  pcStack_50 = FUN_101bbbde0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f17d9c;
  puStack_58 = &UNK_1104518c8;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70,uVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c50788(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101bbbde0; end: 101bbbe03;  */

void FUN_101bbbde0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 101bbbe04; end: 101bbbe3b;  */

void FUN_101bbbe04(long param_1,long param_2)

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



/* Entry: 101bbbe3c; end: 101bbbe4f;  */

void FUN_101bbbe3c(void)

{
  FUN_101bbbe50();
  return;
}



/* Entry: 101bbbe50; end: 101bbc273;  */

undefined *
FUN_101bbbe50(undefined1 *param_1,undefined1 *param_2,ulong param_3,ulong param_4,ulong param_5,
             undefined *param_6)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  
  puVar12 = (undefined1 *)0x2f2f3a6f63;
  puVar3 = puVar12;
  puVar6 = param_2;
  func_0x000107c5fbb4(0x2f2f3a6f63,0xe500000000000000,param_1,param_2);
  func_0x000107c61434(param_2);
  puVar4 = param_1;
  if (((ulong)puVar3 & 1) != 0) {
    func_0x000107c5fb5c(0x2f2f3a6f63,0xe500000000000000);
    puVar3 = param_2;
    func_0x0001011a7878();
    func_0x000107c6142c(param_2);
    func_0x000107c5fb2c(puVar12,param_1,puVar3,puVar6);
    func_0x000107c6142c(puVar6);
    puVar4 = puVar12;
    param_2 = param_1;
  }
  puVar3 = param_2;
  func_0x000107c5ee08(puVar4,param_2,0);
  func_0x000107c6142c();
  if ((ulong)puVar3 >> 0x3c < 0xf) {
    uVar2 = (uint)((ulong)puVar3 >> 0x20);
    uVar11 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        if (((ulong)puVar3 & 0xff000000000000) != 0) {
LAB_101bbbf68:
          puVar5 = PTR_PTR_1126b08b0;
          func_0x000107c61168(PTR_PTR_1126b08b0);
          puVar6 = puVar4;
          func_0x000107c5ee20(puVar4,puVar3);
          func_0x000107c40498(puVar5);
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          puVar7 = PTR_PTR_1126b17d8;
          func_0x000107c610f8();
          func_0x000107c61174(puVar5);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar10 = PTR___sSSN_11034da80;
          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
          func_0x000107c460ec();
          func_0x000107c61170(puVar5);
          func_0x000107c61170();
          if (puVar7 == (undefined1 *)0x0) {
            func_0x000101bba9a0();
            func_0x000107c613f8(&UNK_1104519c8,puVar8,0,0);
            *puVar8 = 5;
            func_0x000107c61654();
          }
          else {
            func_0x000107c56498(puVar7);
            if ((param_4 != 0) && (param_6 != (undefined *)0x0)) {
              uVar1 = param_3 & 0xffffffffffff;
              if ((param_4 & 0x2000000000000000) != 0) {
                uVar1 = param_4 >> 0x38 & 0xf;
              }
              if (uVar1 != 0) {
                uVar1 = param_5 & 0xffffffffffff;
                if (((ulong)param_6 & 0x2000000000000000) != 0) {
                  uVar1 = (ulong)param_6 >> 0x38 & 0xf;
                }
                if (uVar1 != 0) {
                  func_0x000107c5fadc(param_3,param_4);
                  func_0x000107c5fadc(param_5,param_6);
                  func_0x000107c54584(puVar7);
                  func_0x000107c61170(param_3);
                  func_0x000107c61170(param_5);
                  puVar10 = param_6;
                }
              }
            }
            puVar8 = PTR_PTR_1126b9620;
            func_0x000107c610f8();
            func_0x000107c453e4();
            puVar9 = PTR_PTR_1126c0308;
            func_0x000107c610f8(PTR_PTR_1126c0308);
            func_0x000107c453e4();
            func_0x000107c5a494();
            func_0x000107c55638(puVar8);
            func_0x000107c61170(puVar9);
            param_6 = puVar8;
            func_0x000107c41214();
            func_0x000107c61180();
            func_0x000107c61170(puVar8);
            if (param_6 != (undefined *)0x0) {
              puVar8 = param_6;
              func_0x000107c5ee30(param_6);
              func_0x000107c61170(param_6);
              param_6 = puVar8;
              func_0x000107c5ee20(puVar8,puVar10);
              func_0x00010006c090(puVar8,puVar10);
            }
            func_0x000107c58f7c(puVar7);
            func_0x000107c61170(param_6);
            puVar6 = puVar7;
            func_0x000107c3ecd0();
            func_0x000107c61180();
            if (puVar6 != (undefined1 *)0x0) {
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar7);
              func_0x0001000b44c0(puVar4,puVar3);
              return puVar6;
            }
            func_0x000101bba9a0();
            func_0x000107c613f8(&UNK_1104519c8,puVar6,0,0);
            *puVar6 = 6;
            func_0x000107c61654();
            func_0x000107c61170(puVar5);
            puVar5 = puVar7;
          }
          func_0x000107c61170(puVar5);
          func_0x0001000b44c0(puVar4,puVar3);
          return param_6;
        }
      }
      else if ((long)(int)puVar4 != (long)puVar4 >> 0x20) goto LAB_101bbbf68;
    }
    else if ((uVar11 == 2) && (*(long *)(puVar4 + 0x10) != *(long *)(puVar4 + 0x18)))
    goto LAB_101bbbf68;
    func_0x0001000b44c0(puVar4,puVar3);
    param_2 = puVar4;
  }
  func_0x000101bba9a0();
  func_0x000107c613f8(&UNK_1104519c8,param_2,0,0);
  *param_2 = 4;
  func_0x000107c61654();
  return param_6;
}



/* Entry: 101bbc274; end: 101bbc3fb;  */

undefined1  [16] FUN_101bbc274(void)

{
  return ZEXT816(0x110451918);
}



/* Entry: 101bbc3fc; end: 101bbc43b;  */

void FUN_101bbc3fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e073f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9db8b8;
  func_0x000107c61520(&UNK_10d9db8b8,&UNK_1104519c8);
  puRam0000000112e073f8 = puVar1;
  return;
}



/* Entry: 101bbc43c; end: 101bbc44f;  */

bool FUN_101bbc43c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101bbc450; end: 101bbc4fb;  */

void FUN_101bbc450(void)

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



/* Entry: 101bbc4fc; end: 101bbc50b;  */

void FUN_101bbc4fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101bbc50c; end: 101bbc56b;  */

/* WARNING: Possible PIC construction at 0x000101bbc554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bbc558) */

void FUN_101bbc50c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101bbc984();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  *(long *)(lVar2 + 0x18) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110451a60;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bbc56c; end: 101bbc573;  */

/* WARNING: Possible PIC construction at 0x000101bbc554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bbc558) */

void FUN_101bbc56c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_101bbc984();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(long *)(lVar4 + 0x18) = lVar1;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110451a60;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 101bbc574; end: 101bbc5af;  */

void FUN_101bbc574(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 101bbc5b0; end: 101bbc5cf;  */

void FUN_101bbc5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbc5d0,0,0);
  return;
}



/* Entry: 101bbc5d0; end: 101bbc65f;  */

void FUN_101bbc5d0(void)

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
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bbc660;
                    /* WARNING: Could not recover jumptable at 0x000101bbc65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),uVar2,lVar3);
  return;
}



/* Entry: 101bbc660; end: 101bbc737;  */

void FUN_101bbc660(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x60) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101bbc6c8;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_101bbc738;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bbc738; end: 101bbc7d3;  */

void FUN_101bbc738(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bbc7d4;
                    /* WARNING: Could not recover jumptable at 0x000101bbc7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8),
             *(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),uVar2,lVar3);
  return;
}



/* Entry: 101bbc7d4; end: 101bbc86b;  */

void FUN_101bbc7d4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x78) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x80) = param_1;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    uVar1 = 0x101bbc700;
  }
  else {
    uVar1 = 0x101bbc838;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101bbc86c; end: 101bbc877;  */

void FUN_101bbc86c(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101bbc8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bbc878; end: 101bbc8b3;  */

void FUN_101bbc878(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101bbc8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bbc8b4; end: 101bbc92b;  */

void FUN_101bbc8b4(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bbc92c;
  plVar1[0x16] = lVar2;
  plVar1[0x14] = param_1;
  plVar1[0x15] = param_2;
  plVar1[0x12] = param_3;
  plVar1[0x13] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbc5d0,0,0);
  return;
}



/* Entry: 101bbc92c; end: 101bbc973;  */

void FUN_101bbc92c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bbc970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bbc974; end: 101bbc983;  */

undefined1  [16] FUN_101bbc974(void)

{
  return ZEXT816(0x110451a80);
}



/* Entry: 101bbc984; end: 101bbc9a3;  */

void FUN_101bbc984(void)

{
  func_0x000107c61168(&PTR_PTR_112e07448);
  return;
}



/* Entry: 101bbc9a4; end: 101bbc9f7;  */

void FUN_101bbc9a4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101bbdc7c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110451a98;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bbc9f8; end: 101bbc9ff;  */

void FUN_101bbc9f8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101bbdc7c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110451a98;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101bbca00; end: 101bbca2f;  */

void FUN_101bbca00(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101bbca30; end: 101bbca53;  */

void FUN_101bbca30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbca54,0,0);
  return;
}



/* Entry: 101bbca54; end: 101bbcaff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bbca54(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112fd9ce8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lVar3);
  func_0x0001000d224c(unaff_x22 + 0x18);
  func_0x000107c61574(uVar2);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bbcb00;
                    /* WARNING: Could not recover jumptable at 0x000101bbcafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101bbcb00; end: 101bbcb53;  */

void FUN_101bbcb00(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined1 *)(lVar1 + 0x90) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbcb54,0,0);
  return;
}



/* Entry: 101bbcb54; end: 101bbcccb;  */

void FUN_101bbcb54(void)

{
  undefined8 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    puVar6 = *(undefined1 **)(unaff_x22 + 0x70);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
    FUN_101bb47ac(puVar6,1);
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar6,0,0);
    *puVar6 = 0;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
    func_0x0001000285a8(0x112e06ff8,&UNK_10d9db110);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c442ec();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = uVar5;
    func_0x000103edf20c();
    *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
    func_0x000107c61170(uVar5);
    plVar4 = (long *)0x80;
    UNRECOVERED_JUMPTABLE = (code *)0x101bb47c0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101bbcccc;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bbccc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bbcccc; end: 101bbcd1f;  */

void FUN_101bbcccc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0x91) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbcd20,0,0);
  return;
}



/* Entry: 101bbcd20; end: 101bbd357;  */

void FUN_101bbcd20(undefined8 param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  long unaff_x22;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_b0;
  long lStack_88;
  long lStack_80;
  
  lVar17 = *(long *)(unaff_x22 + 0x88);
  if (*(char *)(unaff_x22 + 0x91) == '\x01') {
    *(long *)(unaff_x22 + 0x28) = lVar17;
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    puVar18 = *(undefined1 **)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x90);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    FUN_101bbbd4c(puVar18,1);
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar18,0,0);
    *puVar18 = 1;
    func_0x000107c61654();
    FUN_101bb47ac(uVar6,uVar2);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5b134();
    func_0x000107c61180();
    lVar11 = 0x112d36580;
    puVar13 = &UNK_10d9016d0;
    func_0x0001000285a8();
    uVar1 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xf;
    uVar5 = uVar1 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    lVar11 = lVar17;
    func_0x000107c4ca3c();
    if ((int)lVar11 == 2) {
      lVar11 = lVar17;
      func_0x000107c5d808();
      func_0x000107c61180();
      if (lVar11 == 0) goto LAB_101bbcee4;
      lVar8 = lVar11;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      lVar20 = lVar8;
      func_0x000107c5faec();
      puVar14 = puVar13;
      func_0x000107c61170(lVar8);
      lVar8 = lVar11;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (lVar8 == 0) {
        uVar6 = 0;
        lStack_80 = 0;
      }
      else {
        lVar21 = lVar8;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar8);
        uVar6 = 0;
        lStack_80 = lVar21;
        func_0x000107c5ee24(0,lVar21,puVar14);
        func_0x00010006c090(lVar21,puVar14);
      }
      lVar8 = lVar11;
      func_0x000107c4a804();
      func_0x000107c61180();
      if (lVar8 == 0) {
        uStack_b0 = 0;
        lStack_88 = 0;
      }
      else {
        lVar21 = lVar8;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar8);
        uStack_b0 = 0;
        lStack_88 = lVar21;
        func_0x000107c5ee24(0,lVar21,puVar14);
        func_0x00010006c090(lVar21,puVar14);
      }
      uVar7 = 0x112d70260;
      func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
      lVar8 = 0;
      func_0x000107c5ebbc();
      lVar21 = *(long *)(lVar8 + -8);
      lVar22 = *(long *)(lVar21 + 0x48);
      uVar15 = (ulong)*(byte *)(lVar21 + 0x50);
      uVar19 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
      func_0x000107c613fc(uVar7,uVar19 + lVar22,uVar15 | 7);
      *(undefined8 *)(uVar7 + 0x18) = 2;
      *(undefined8 *)(uVar7 + 0x10) = 1;
      puVar9 = (undefined8 *)0x495255;
      func_0x000107c5ebb0(uVar7 + uVar19,0x495255,0xe300000000000000,lVar20,puVar13);
      if (lStack_80 != 0) {
        puVar9 = (undefined8 *)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
        func_0x000107c615b8();
        func_0x000107c5ebb0(puVar9,0x4954505952434e45,0xee0059454b5f4e4f,uVar6,lStack_80);
        uVar15 = *(ulong *)(uVar7 + 0x10);
        uVar12 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar15) {
          uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          func_0x0001012d3170(uVar12,uVar15 + 1,1,uVar7);
        }
        *(ulong *)(uVar12 + 0x10) = uVar15 + 1;
        (**(code **)(lVar21 + 0x20))(uVar12 + uVar19 + uVar15 * lVar22,puVar9,lVar8);
        func_0x000107c615c0();
        uVar7 = uVar12;
      }
      if (lStack_88 != 0) {
        puVar9 = (undefined8 *)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
        func_0x000107c615b8();
        func_0x000107c5ebb0(puVar9,0x4954505952434e45,0xed000056495f4e4f,uStack_b0,lStack_88);
        uVar15 = *(ulong *)(uVar7 + 0x10);
        uVar12 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar15) {
          uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          func_0x0001012d3170(uVar12,uVar15 + 1,1,uVar7);
        }
        *(ulong *)(uVar12 + 0x10) = uVar15 + 1;
        (**(code **)(lVar21 + 0x20))(uVar12 + uVar19 + uVar15 * lVar22,puVar9,lVar8);
        func_0x000107c615c0();
        uVar7 = uVar12;
      }
      func_0x000102788d24();
      uVar6 = *puVar9;
      uVar23 = puVar9[1];
      lVar8 = 0;
      func_0x000107c5ec24();
      lVar20 = *(long *)(lVar8 + -8);
      uVar15 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar15);
      func_0x000107c61434(uVar23);
      func_0x000107c5ec20(uVar15);
      func_0x000107c61434(uVar23);
      func_0x000107c5ec10(uVar6,uVar23);
      func_0x000107c5ebf0(0,0xe000000000000000);
      func_0x000107c61434(uVar7);
      func_0x000107c5ebc8();
      func_0x000107c5ebe8(uVar5);
      func_0x000107c61170(lVar11);
      func_0x000107c6142c(uVar23);
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(lStack_88);
      func_0x000107c6142c(lStack_80);
      (**(code **)(lVar20 + 8))(uVar15,lVar8);
      func_0x000107c6142c(uVar7);
      func_0x000107c615c0(uVar15);
    }
    else {
LAB_101bbcee4:
      uVar24 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x40);
      func_0x000107c3fbe4(lVar17);
      FUN_101bbd628(uVar5,uVar24,uVar16,uVar6,uVar23,param_1,0);
    }
    puVar10 = (undefined1 *)(uVar1 & 0xfffffffffffffff0);
    func_0x000107c615b8();
    func_0x000100029394(uVar5,puVar10);
    lVar11 = 0;
    func_0x000107c5ede0();
    lVar8 = *(long *)(lVar11 + -8);
    puVar18 = puVar10;
    (**(code **)(lVar8 + 0x30))(puVar10,1,lVar11);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x91);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x90);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    if ((int)puVar18 != 1) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
      func_0x0001000293e4(uVar5);
      func_0x000107c61170(lVar17);
      FUN_101bbbd4c(uVar23,uVar2);
      FUN_101bb47ac(uVar6,uVar3);
      (**(code **)(lVar8 + 0x20))(uVar16,puVar10,lVar11);
      func_0x000107c615c0(puVar10);
      func_0x000107c615c0(uVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_101bbd2f4;
    }
    func_0x0001000293e4(puVar10);
    func_0x000107c615c0();
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar10,0,0);
    *puVar10 = 0xb;
    func_0x000107c61654();
    func_0x000107c61170(lVar17);
    FUN_101bbbd4c(uVar23,uVar2);
    FUN_101bb47ac(uVar6,uVar3);
    func_0x0001000293e4(uVar5);
    func_0x000107c615c0(uVar5);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101bbd2f4:
                    /* WARNING: Could not recover jumptable at 0x000101bbd314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bbd358; end: 101bbd627;  */

void FUN_101bbd358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  uStack_98 = param_4;
  uStack_90 = param_6;
  lStack_88 = param_7;
  uStack_70 = param_1;
  func_0x000107c5ec24();
  lStack_78 = *(long *)(lVar4 + -8);
  lStack_68 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ebbc();
  lVar12 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar10 = *(long *)(lVar12 + 0x48);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
  func_0x000107c613fc();
  *(undefined8 *)(uVar5 + 0x18) = 2;
  *(undefined8 *)(uVar5 + 0x10) = 1;
  puVar6 = (undefined8 *)0x495255;
  func_0x000107c5ebb0(uVar5 + uVar9,0x495255,0xe300000000000000,param_2,param_3);
  lVar4 = lStack_80;
  if (param_5 != 0) {
    func_0x000107c5ebb0(lVar11 - extraout_x12,0x4954505952434e45,0xee0059454b5f4e4f,uStack_98,
                        param_5);
    uVar1 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001012d3170(uVar7,uVar1 + 1,1,uVar5);
    }
    lVar4 = lStack_80;
    *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
    puVar6 = (undefined8 *)(uVar7 + uVar9 + uVar1 * lVar10);
    (**(code **)(lVar12 + 0x20))(puVar6,lVar11 - extraout_x12,lStack_80);
    uVar5 = uVar7;
  }
  if (lStack_88 != 0) {
    func_0x000107c5ebb0(lVar11,0x4954505952434e45,0xed000056495f4e4f,uStack_90);
    uVar1 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001012d3170(uVar7,uVar1 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
    puVar6 = (undefined8 *)(uVar7 + uVar9 + uVar1 * lVar10);
    (**(code **)(lVar12 + 0x20))(puVar6,lVar11,lVar4);
    uVar5 = uVar7;
  }
  func_0x000102788d24();
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  func_0x000107c61434(uVar3);
  func_0x000107c5ec20(puVar8);
  func_0x000107c61434(uVar3);
  func_0x000107c5ec10(uVar2,uVar3);
  func_0x000107c5ebf0(0,0xe000000000000000);
  func_0x000107c61434(uVar5);
  func_0x000107c5ebc8();
  func_0x000107c5ebe8(uStack_70);
  func_0x000107c6142c(uVar3);
  (**(code **)(lStack_78 + 8))(puVar8,lStack_68);
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 101bbd628; end: 101bbdb5f;  */

void FUN_101bbd628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,double param_6,uint param_7)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  uint uStack_7c;
  long lStack_78;
  
  uStack_7c = param_7 & 0xff;
  lVar3 = 0;
  dStack_a0 = param_6;
  uStack_98 = param_1;
  func_0x000107c5ec24();
  lStack_90 = *(long *)(lVar3 + -8);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ebbc();
  lVar11 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar15 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar12 = *(long *)(lVar11 + 0x48);
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  func_0x000107c613fc();
  *(undefined8 *)(uVar4 + 0x18) = 6;
  *(undefined8 *)(uVar4 + 0x10) = 3;
  lVar3 = uVar4 + uVar14;
  uVar5 = 0x44495f50414e53;
  uVar8 = 0xe700000000000000;
  func_0x000107c5ebb0(lVar3,0x44495f50414e53,0xe700000000000000,param_4,param_5);
  func_0x000107c5fdd8(param_2);
  puVar9 = (undefined8 *)0xec00000048544449;
  func_0x000107c5ebb0(lVar3 + lVar12,0x575f544547524154,0xec00000048544449,uVar5,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fdd8(param_3);
  func_0x000107c5ebb0(lVar3 + lVar12 * 2,0x485f544547524154,0xed00005448474945,uVar8,puVar9);
  func_0x000107c6142c();
  lVar16 = lStack_88;
  lVar3 = lStack_90;
  if (uStack_7c != 1) {
    if ((((ulong)dStack_a0 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bbd934);
      (*pcVar2)();
    }
    if (dStack_a0 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bbd938);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dStack_a0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bbd93c);
      (*pcVar2)();
    }
    lStack_78 = (long)dStack_a0;
    puVar6 = PTR___ss5Int64VN_11034ee50;
    puVar10 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
    func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                        PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
    func_0x000107c5ebb0(lVar15,0xd00000000000001d,0x800000010f002210,puVar6,puVar10);
    func_0x000107c6142c(puVar10);
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar7 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x0001012d3170(uVar7,uVar1 + 1,1,uVar4);
    }
    lVar16 = lStack_88;
    lVar3 = lStack_90;
    *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
    puVar9 = (undefined8 *)(uVar7 + uVar14 + uVar1 * lVar12);
    (**(code **)(lVar11 + 0x20))(puVar9,lVar15,lStack_a8);
    uVar4 = uVar7;
  }
  func_0x000102788d18();
  uVar5 = *puVar9;
  uVar8 = puVar9[1];
  func_0x000107c61434(uVar8);
  func_0x000107c5ec20(puVar13);
  func_0x000107c61434(uVar8);
  func_0x000107c5ec10(uVar5,uVar8);
  func_0x000107c5ebf0(0,0xe000000000000000);
  func_0x000107c61434(uVar4);
  func_0x000107c5ebc8();
  func_0x000107c5ebe8(uStack_98);
  func_0x000107c6142c(uVar8);
  (**(code **)(lVar3 + 8))(puVar13,lVar16);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 101bbdb60; end: 101bbdb83;  */

void FUN_101bbdb60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101bbdb84; end: 101bbdc07;  */

void FUN_101bbdb84(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bbdc08;
  plVar1[0xb] = lVar2;
  plVar1[9] = param_1;
  plVar1[10] = param_2;
  plVar1[7] = param_4;
  plVar1[8] = param_5;
  plVar1[6] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bbca54,0,0);
  return;
}



/* Entry: 101bbdc08; end: 101bbdc6b;  */

void FUN_101bbdc08(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bbdc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bbdc6c; end: 101bbdc7b;  */

undefined1  [16] FUN_101bbdc6c(void)

{
  return ZEXT816(0x110451ac8);
}



/* Entry: 101bbdc7c; end: 101bbdc9b;  */

void FUN_101bbdc7c(void)

{
  func_0x000107c61168(&PTR_PTR_112e074f8);
  return;
}



/* Entry: 101bbdc9c; end: 101bbdd83;  */

void FUN_101bbdc9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112e07560,&UNK_10d9dba48);
  func_0x000107c6157c();
  uVar1 = 0x101bbdddc;
  func_0x0001000823a8();
  param_1[3] = &UNK_110451ba0;
  param_1[4] = &PTR_DAT_110451b60;
  *param_1 = uVar1;
  return;
}



/* Entry: 101bbdd84; end: 101bbdd8b;  */

void FUN_101bbdd84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = 0x40;
  (**(code **)(lStack_38 + 8))(0x40,0,0x48,3,uStack_40,lStack_38);
  *param_1 = uVar1;
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101bbdd8c; end: 101bbddbb;  */

undefined8 FUN_101bbdd8c(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  return uStack_28;
}



/* Entry: 101bbddbc; end: 101bbdddf;  */

undefined1  [16] FUN_101bbddbc(void)

{
  return ZEXT816(0x110451b80);
}



/* Entry: 101bbdde0; end: 101bbdebf;  */

long * FUN_101bbdde0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0x112e07568;
    func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
    lVar6 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,2,lVar2);
    if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
      return param_1;
    }
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1,0,2,lVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101bbdec0; end: 101bbdf33;  */

void FUN_101bbdec0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,2,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bbdf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 101bbdf34; end: 101bbdfef;  */

undefined8 FUN_101bbdf34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,2,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,2,lVar1);
  return param_1;
}



/* Entry: 101bbdff0; end: 101bbe0fb;  */

undefined8 FUN_101bbdff0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,2,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,2,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_101bbe0a4;
    }
    (**(code **)(lVar4 + 0x18))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_101bbe0a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,2,lVar1);
  }
  return param_1;
}



/* Entry: 101bbe0fc; end: 101bbe1b7;  */

undefined8 FUN_101bbe0fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,2,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,2,lVar1);
  return param_1;
}



/* Entry: 101bbe1b8; end: 101bbe2c3;  */

undefined8 FUN_101bbe1b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  uVar2 = param_1;
  (*pcVar5)(param_1,2,lVar1);
  uVar3 = param_2;
  (*pcVar5)(param_2,2,lVar1);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 != 0) {
      (**(code **)(lVar4 + 8))(param_1,lVar1);
      goto LAB_101bbe26c;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,lVar1);
  }
  else {
    if ((int)uVar3 != 0) {
LAB_101bbe26c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,2,lVar1);
  }
  return param_1;
}



/* Entry: 101bbe2c4; end: 101bbe2db;  */

void FUN_101bbe2c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101bbe2dc; end: 101bbe31f;  */

void FUN_101bbe2dc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
                    /* WARNING: Could not recover jumptable at 0x000101bbe31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,2,lVar1);
  return;
}



/* Entry: 101bbe320; end: 101bbe323;  */

void FUN_101bbe320(void)

{
  return;
}



/* Entry: 101bbe324; end: 101bbe36f;  */

void FUN_101bbe324(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e07568;
  func_0x0001000285a8(0x112e07568,&UNK_10d9dbb00);
                    /* WARNING: Could not recover jumptable at 0x000101bbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,2,lVar1);
  return;
}



/* Entry: 101bbe370; end: 101bbe3a7;  */

void FUN_101bbe370(undefined8 param_1)

{
  if (lRam0000000112e075e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e679a74);
  return;
}


