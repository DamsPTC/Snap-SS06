/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005c3944; end: 005c3957;  */

void FUN_005c3944(long param_1)

{
  param_1 = param_1 + 8;
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c3958; end: 005c39b7;  */

void FUN_005c3958(undefined8 param_1)

{
  undefined4 uVar1;
  long extraout_x8;
  long *unaff_x19;
  undefined4 auStack_40 [8];
  
  func_0x005c4684();
  uVar1 = *(undefined4 *)(extraout_x8 + 0x10);
  func_0x005c4300();
  auStack_40[0] = uVar1;
  func_0x005c4334();
  func_0x005c4560();
  func_0x005c4400(*(undefined8 *)(*unaff_x19 + 0x18),param_1,auStack_40);
  func_0x005c4268();
  func_0x005c41ec();
  return;
}



/* Entry: 005c39b8; end: 005c39d7;  */

void FUN_005c39b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c39dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c39d8; end: 005c39db;  */

void FUN_005c39d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c39dc; end: 005c3a1b;  */

long FUN_005c39dc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42d0();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c3a1c; end: 005c3a27;  */

void FUN_005c3a1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a045b0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3a28; end: 005c3a6f;  */

void FUN_005c3a28(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c3a70; end: 005c3a73;  */

void FUN_005c3a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a046f0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3a74; end: 005c3a87;  */

void FUN_005c3a74(void)

{
  FUN_005c3ef4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3a88; end: 005c3a93;  */

void FUN_005c3a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c3a94; end: 005c3aa7;  */

void FUN_005c3a94(void)

{
  FUN_005c3c3c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3aa8; end: 005c3c2b;  */

void FUN_005c3aa8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puStack_90;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar4 = *param_3;
  if (lVar4 == 0) {
    puStack_50 = (undefined8 *)0x0;
    puStack_48 = (undefined8 *)0x0;
  }
  else {
    puVar2 = param_1;
    func_0x005c4720();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_00a04798;
    puStack_50 = puVar2 + 3;
    *puStack_50 = &PTR_DAT_00a047e8;
    lVar3 = param_1[2];
    uVar5 = param_1[1];
    puVar2[5] = param_1[2];
    puVar2[4] = uVar5;
    if (lVar3 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10 != 0);
      lVar4 = *param_3;
    }
    lVar3 = param_3[1];
    puVar2[6] = lVar4;
    puVar2[7] = lVar3;
    puStack_48 = puVar2;
    if (lVar3 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
  }
  puVar1 = puStack_48;
  puVar2 = puStack_50;
  uStack_58 = 0;
  FUN_005ba4b8(param_2,&uStack_58);
  if ((int)param_2 == 0) {
    func_0x005c4748();
    puStack_78 = (undefined8 *)CONCAT44(puStack_78._4_4_,3);
    puStack_70 = puStack_90;
    func_0x005c43f4();
    func_0x005c4400();
    func_0x005c4268();
    func_0x005c4278();
  }
  else {
    puStack_78 = puVar2;
    puStack_70 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_01 != 0);
    }
    func_0x005c430c();
    (*extraout_x8)();
    func_0x005c0650(&puStack_78);
  }
  FUN_00468b24(&uStack_58);
  FUN_005c3ed0(&puStack_50);
  return;
}



/* Entry: 005c3c2c; end: 005c3c3b;  */

void FUN_005c3c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c3c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 005c3c3c; end: 005c3c73;  */

long FUN_005c3c3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_DAT_00a04740);
  func_0x005c2700(lVar1 + 0x18);
  func_0x0045cbec();
  return param_1;
}



/* Entry: 005c3c74; end: 005c3c77;  */

void FUN_005c3c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04798;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3c78; end: 005c3c8b;  */

void FUN_005c3c78(void)

{
  FUN_005c3ec4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3c8c; end: 005c3c97;  */

void FUN_005c3c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c3c98; end: 005c3cab;  */

void FUN_005c3c98(void)

{
  FUN_005c3dc0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c3cac; end: 005c3dbf;  */

undefined1 * FUN_005c3cac(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  code *in_stack_00000050;
  undefined **in_stack_00000058;
  undefined8 in_stack_00000088;
  
  func_0x005c4978();
  func_0x005c4048();
  in_stack_00000008 = *(undefined8 *)(param_1 + 0x20);
  in_stack_00000000 = *(undefined8 *)(param_1 + 0x18);
  in_stack_00000088 = extraout_x8;
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  func_0x005c46d0();
  FUN_0045cc3c();
  func_0x005c4928();
  func_0x005c4584();
  lVar2 = *(long *)(unaff_x22 + 0x70);
  in_stack_00000050 = FUN_005c3e1c;
  in_stack_00000058 = &PTR_FUN_00a04828;
  func_0x005c46c8();
  func_0x005c4120();
  func_0x005c46c0();
  func_0x005c4460();
  func_0x005c4294();
  func_0x005c4010();
  func_0x005c437c();
  if (lVar2 == 0) {
    func_0x005c4238();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    func_0x005c430c();
    func_0x005c4384();
    func_0x005c41f4();
  }
  puVar1 = (undefined1 *)register0x00000008;
  FUN_005c3ea4();
  func_0x005c3fd8(in_stack_00000088);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c40dc();
    FUN_005c3ea4();
    func_0x005c4134();
    puVar1 = (undefined1 *)register0x00000008;
    func_0x005c46f4(&PTR_DAT_00a047e8);
    func_0x005c3df8(puVar1 + 0x18);
    func_0x0045cbec();
    return (undefined1 *)register0x00000008;
  }
  return puVar1;
}



/* Entry: 005c3dc0; end: 005c3e1b;  */

long FUN_005c3dc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_DAT_00a047e8);
  func_0x005c3df8(lVar1 + 0x18);
  func_0x0045cbec();
  return param_1;
}



/* Entry: 005c3e1c; end: 005c3e7f;  */

void FUN_005c3e1c(undefined8 param_1)

{
  undefined4 uVar1;
  long extraout_x8;
  undefined4 auStack_40 [8];
  
  func_0x005c4684();
  uVar1 = *(undefined4 *)(extraout_x8 + 0x10);
  func_0x005c4300();
  auStack_40[0] = uVar1;
  func_0x005c4560();
  func_0x005c43f4();
  func_0x005c4400(param_1,auStack_40);
  func_0x005c4268();
  func_0x005c41ec();
  return;
}



/* Entry: 005c3e80; end: 005c3e9f;  */

void FUN_005c3e80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c3ea4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c3ea0; end: 005c3ea3;  */

void FUN_005c3ea0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c3ea4; end: 005c3ec3;  */

long FUN_005c3ea4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x005c42d0();
  lVar1 = unaff_x19;
  func_0x005c4318();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c3ec4; end: 005c3ecf;  */

void FUN_005c3ec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04798;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3ed0; end: 005c3ef3;  */

void FUN_005c3ed0(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c3ef4; end: 005c3eff;  */

void FUN_005c3ef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a046f0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c3f00; end: 005c3f3f;  */

long FUN_005c3f00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_FUN_00a03ce0);
  func_0x0045cbec(lVar1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  func_0x00465de0();
  return param_1;
}



/* Entry: 005c3f40; end: 005c3fbf;  */

void FUN_005c3f40(undefined8 param_1)

{
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  undefined1 auStack_40 [40];
  undefined1 uStack_18;
  
  auStack_40[0] = 0;
  uStack_18 = 0;
  auStack_60[0] = 0;
  uStack_48 = 0;
  auStack_80[0] = 0;
  uStack_68 = 0;
  auStack_a0[0] = 0;
  uStack_88 = 0;
  FUN_00465ae4(param_1,0,0,auStack_40,0x101,auStack_60,auStack_80,0,auStack_a0);
  FUN_00457530(auStack_a0);
  FUN_00457530(auStack_80);
  FUN_00457530(auStack_60);
  FUN_00459de4(auStack_40);
  return;
}



/* Entry: 005c3fc0; end: 005c498b;  */

void FUN_005c3fc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c498c; end: 005c49af;  */

void FUN_005c498c(undefined1 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = param_1;
  FUN_005c49b0(&uStack_11);
  return;
}



/* Entry: 005c49b0; end: 005c49ef;  */

void FUN_005c49b0(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  dword *pdVar2;
  
  pdVar2 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar1 = *param_2;
  *(undefined ***)pdVar2 = &PTR_FUN_00a048a0;
  *(undefined1 *)(pdVar2 + 2) = uVar1;
  *param_1 = pdVar2;
  return;
}



/* Entry: 005c49f0; end: 005c4af3;  */

void FUN_005c49f0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    param_1[1] = 2;
    *param_1 = 4;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 500;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
    puVar1 = &UNK_00817838;
    lVar2 = 8;
    do {
      func_0x00482734(param_1 + 7,puVar1);
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -4;
    } while (lVar2 != 0);
  }
  else {
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}



/* Entry: 005c4af4; end: 005c4b03;  */

undefined8 FUN_005c4af4(void)

{
  return 0;
}



/* Entry: 005c4b04; end: 005c4d87;  */

undefined8 *
FUN_005c4b04(undefined8 *param_1,long param_2,long param_3,undefined1 param_4,undefined1 param_5,
            undefined8 *param_6,undefined8 *param_7)

{
  qword *pqVar1;
  qword *pqVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = &PTR_FUN_00a048f8;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = param_4;
  *(undefined1 *)((long)param_1 + 0x12) = param_5;
  FUN_00425cb4(param_1 + 3,"local");
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_00425cb4(param_1 + 0xf,"unknown");
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  FUN_00425cb4(param_1 + 0x15,"");
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    lVar4 = param_7[1];
    uVar6 = param_7[1];
    uVar5 = *param_7;
    pqVar1 = (qword *)section_00000108.segname;
    __Znwm();
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    if (lVar4 != 0) {
      do {
        func_0x005c79ec();
      } while (extraout_w10_00 != 0);
    }
    pqVar2 = pqVar1;
    FUN_005c5800();
    *pqVar2 = (qword)&PTR_FUN_00a04948;
    FUN_00425cb4(pqVar2 + 0x16,*(undefined8 *)(param_2 + 0x10));
    pqVar1[0x22] = 0;
    pqVar1[0x1a] = 0;
    pqVar1[0x1b] = 0;
    pqVar1[0x19] = param_3;
  }
  else {
    lVar4 = param_7[1];
    uVar6 = param_7[1];
    uVar5 = *param_7;
    pqVar1 = &section_00000108.size;
    __Znwm();
    uStack_70 = uVar5;
    uStack_68 = uVar6;
    if (lVar4 != 0) {
      do {
        func_0x005c79ec();
      } while (extraout_w10 != 0);
    }
    FUN_005c5800(pqVar1);
    *pqVar1 = (qword)&PTR_FUN_00a04ab8;
    pqVar1[0x19] = 0;
    pqVar1[0x18] = 0;
    pqVar1[0x1b] = 0;
    pqVar1[0x1a] = 0;
    pqVar1[0x1d] = 0;
    pqVar1[0x1c] = 0;
    FUN_00425cb4(pqVar1 + 0x1e,*(undefined8 *)(param_2 + 0x10));
    pqVar1[0x21] = param_3;
    pqVar1[0x22] = 0;
    pqVar1[0x23] = 0;
    pqVar1[0x24] = 0;
    pqVar1[0x25] = 0xffffffffffffffff;
  }
  func_0x00467c1c(&uStack_70);
  lVar4 = *plVar3;
  *plVar3 = (long)pqVar1;
  if (lVar4 != 0) {
    func_0x005c7d00();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x28);
  uVar6 = param_6[1];
  uVar5 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x005c79ec();
    } while (extraout_w10_01 != 0);
  }
  uStack_68 = param_1[0x1a];
  uStack_70 = param_1[0x19];
  param_1[0x1a] = uVar6;
  param_1[0x19] = uVar5;
  func_0x00467c40(&uStack_70);
  return param_1;
}



/* Entry: 005c4d88; end: 005c5757;  */

void FUN_005c4d88(double param_1,long param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  uint *puVar18;
  uint *puVar19;
  double dVar20;
  undefined1 auStack_120 [32];
  uint auStack_100 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  uint auStack_c0 [10];
  undefined1 uStack_98;
  undefined1 uStack_90;
  uint auStack_88 [6];
  
  puVar11 = param_3;
  (**(code **)(*(long *)param_3 + 0x10))(param_3,0);
  if ((int)puVar11 != 0) {
    func_0x005c7b38(*(undefined8 *)(*(long *)param_3 + 0x48));
    puVar7 = auStack_c0 + 6;
    FUN_00425cb4(puVar7,"x-request-id");
    func_0x005c7d60();
    func_0x005c7ad4();
    auStack_88[0] = 0;
    auStack_88[1] = 0;
    auStack_88[2] = 0;
    auStack_88[3] = 0;
    auStack_88[4] = 0;
    auStack_88[5] = 0;
    puVar11 = puVar11 + 2;
    if (puVar11 != puVar7) {
      lVar14 = (long)*(char *)((long)puVar7 + 0x4f);
      if (lVar14 < 0) {
        puVar8 = *(uint **)(puVar7 + 0xe);
        lVar14 = *(long *)(puVar7 + 0x10);
      }
      else {
        puVar8 = puVar7 + 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (auStack_88,puVar8,lVar14);
    }
    puVar8 = auStack_c0 + 6;
    FUN_00425cb4(puVar8,"x-request-consistent-tracking-id");
    func_0x005c7d60();
    puVar7 = puVar8;
    func_0x005c7ad4();
    auStack_c0[6] = auStack_c0[6] & 0xffffff00;
    uStack_90 = 0;
    if (puVar11 != puVar8) {
      lVar14 = (long)*(char *)((long)puVar8 + 0x4f);
      if (lVar14 < 0) {
        puVar7 = *(uint **)(puVar8 + 0xe);
        lVar14 = *(long *)(puVar8 + 0x10);
      }
      else {
        puVar7 = puVar8 + 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                (auStack_100,puVar7,lVar14);
      puVar7 = auStack_c0 + 6;
      FUN_00473a54(puVar7,auStack_100);
      func_0x005c7abc();
      func_0x005c7a1c();
    }
    func_0x005c7ae4();
    func_0x005c79c8();
    func_0x005c7a28();
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    auStack_c0[2] = 0;
    auStack_c0[3] = 0;
    auStack_c0[4] = 0;
    auStack_c0[5] = 0;
    if (puVar11 != puVar8) {
      lVar14 = (long)*(char *)((long)puVar8 + 0x4f);
      if (lVar14 < 0) {
        puVar16 = *(uint **)(puVar8 + 0xe);
        lVar14 = *(long *)(puVar8 + 0x10);
      }
      else {
        puVar16 = puVar8 + 0xe;
      }
      puVar7 = auStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (puVar7,puVar16,lVar14);
      func_0x005c7a1c();
    }
    func_0x005c7ae4();
    func_0x005c79c8();
    func_0x005c7a28();
    if (puVar11 != puVar8) {
      func_0x005c7d3c();
      func_0x005c7bfc();
      func_0x005c7a1c();
      func_0x005c7b80();
      (**(code **)(extraout_x8 + 0x10))();
      func_0x005c7abc();
    }
    func_0x005c7ae4();
    func_0x005c79c8();
    func_0x005c7a28();
    if (puVar11 != puVar8) {
      func_0x005c7d3c();
      func_0x005c7bfc();
      func_0x005c7a1c();
      func_0x005c7b80();
      (**(code **)(extraout_x8_00 + 0x18))();
      func_0x005c7abc();
    }
    uStack_c4 = 0;
    func_0x005c7ae4();
    func_0x005c79c8();
    func_0x005c7a28();
    func_0x005c7ae4();
    func_0x005c79c8();
    func_0x005c7abc();
    if (puVar11 != puVar8 || puVar11 != puVar7) {
      uStack_c4 = 3;
      if (puVar11 == puVar7) {
        uStack_c4 = 1;
      }
      if (puVar11 == puVar8) {
        uStack_c4 = 2;
      }
    }
    func_0x005c7b80();
    (**(code **)(extraout_x8_01 + 0x58))();
    func_0x005c7c98();
    func_0x005c7ae4();
    func_0x005c79c8();
    func_0x005c7a28();
    if (puVar11 != puVar8) {
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      lVar14 = (long)*(char *)((long)puVar8 + 0x4f);
      if (lVar14 < 0) {
        puVar7 = *(uint **)(puVar8 + 0xe);
        lVar14 = *(long *)(puVar8 + 0x10);
      }
      else {
        puVar7 = puVar8 + 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (&uStack_e0,puVar7,lVar14);
      lVar14 = *(long *)(param_2 + 8);
      FUN_0047a304(auStack_100,&uStack_e0);
      FUN_00463600(lVar14 + 0x80,auStack_100);
      puVar7 = auStack_100;
      FUN_00457530();
      func_0x005c7c98();
      func_0x005c7ae4();
      puVar16 = puVar11;
      puVar18 = puVar11;
LAB_005c5020:
      do {
        puVar8 = puVar18;
        puVar16 = *(uint **)puVar16;
        puVar18 = puVar8;
        if (puVar16 == (uint *)0x0) goto LAB_005c50b0;
        puVar7 = auStack_100;
        func_0x004278bc(puVar7,puVar16 + 8);
        puVar18 = puVar16;
      } while (((uint)puVar7 >> 7 & 1) != 0);
      puVar7 = puVar16 + 8;
      func_0x004278bc(puVar7,auStack_100);
      if (((uint)puVar7 >> 7 & 1) != 0) {
        puVar16 = puVar16 + 2;
        puVar18 = puVar8;
        goto LAB_005c5020;
      }
      puVar19 = puVar16 + 2;
      puVar9 = auStack_100;
      func_0x005c75f8(puVar9,*(undefined8 *)puVar16,puVar16);
      puVar7 = puVar9;
      while (puVar18 = puVar8, puVar16 = *(uint **)puVar19, puVar8 = puVar9, puVar16 != (uint *)0x0)
      {
        puVar7 = auStack_100;
        func_0x004278bc(puVar7,puVar16 + 8);
        bVar5 = -1 < (char)puVar7;
        lVar14 = 0;
        if (bVar5) {
          lVar14 = 8;
        }
        puVar19 = (uint *)((long)puVar16 + lVar14);
        puVar8 = puVar16;
        if (bVar5) {
          puVar8 = puVar18;
        }
      }
LAB_005c50b0:
      while (puVar8 != puVar18) {
        func_0x005c7a1c();
        puVar8 = puVar7;
      }
      func_0x005c7abc();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
    }
    in_ZR = *(int *)(param_2 + 0xc0) == 2;
    if (!(bool)in_ZR) {
      func_0x005c7ae4();
      func_0x005c79c8();
      func_0x005c7a28();
      in_ZR = puVar11 == puVar8;
      if (!(bool)in_ZR) {
        puVar8 = puVar8 + 0xe;
        FUN_004c7da8(puVar8,"br",0);
        in_ZR = puVar8 == (uint *)0xffffffffffffffff;
        if (!(bool)in_ZR) {
          func_0x005c7a1c();
        }
      }
    }
    plVar15 = *(long **)(param_2 + 8);
    FUN_00459e04(auStack_120,auStack_c0 + 6);
    (**(code **)(*plVar15 + 0x20))(plVar15,auStack_88,auStack_c0,auStack_120);
    FUN_00457530(auStack_120);
    func_0x005c7d2c();
    FUN_00457530(auStack_c0 + 6);
    puVar11 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x005c7a54();
  (*extraout_x8_02)();
  if ((int)puVar11 != 0) {
    func_0x005c7b38(*(undefined8 *)(*(long *)param_3 + 0x28));
    FUN_00485afc();
    func_0x005c7b80();
    (**(code **)(extraout_x8_03 + 0x28))();
  }
  func_0x005c7a54();
  (*extraout_x8_04)();
  if ((int)puVar11 != 0) {
    puVar11 = param_3;
    (**(code **)(*(long *)param_3 + 0x40))();
    func_0x005c7b80();
    (**(code **)(extraout_x8_05 + 0x38))();
  }
  func_0x005c7a54();
  (*extraout_x8_06)();
  if ((int)puVar11 != 0) {
    func_0x005c7b80();
    (**(code **)(extraout_x8_07 + 0x30))();
  }
  func_0x005c7a54();
  (*extraout_x8_08)();
  if ((int)puVar11 != 0) {
    func_0x005c7b80();
    (**(code **)(extraout_x8_09 + 0x40))();
    func_0x005c7b38(*(undefined8 *)(*(long *)param_3 + 0x70));
    *(uint **)(param_2 + 0x68) = puVar11;
    func_0x005c7a98("x-envoy-upstream-service-time");
    func_0x005c7b48();
    if (!(bool)in_ZR) {
      auStack_c0[6] = 0;
      uVar10 = *(undefined8 *)(extraout_x8_10 + 0x30);
      func_0x005baa10(uVar10,*(undefined8 *)(extraout_x8_10 + 0x38),auStack_c0 + 6);
      if ((int)uVar10 != 0) {
        *(uint *)(param_2 + 0x60) = auStack_c0[6];
      }
      puVar11 = *(uint **)(param_2 + 0x68);
    }
    func_0x005c7be4();
    func_0x005c7b48();
    if (!(bool)in_ZR) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (param_2 + 0x18,*(undefined8 *)(extraout_x8_11 + 0x30),
                 *(undefined8 *)(extraout_x8_11 + 0x38));
      puVar11 = *(uint **)(param_2 + 0x68);
    }
    func_0x005c7a98("content-encoding");
    func_0x005c7b48();
    if (!(bool)in_ZR) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (param_2 + 0x30,*(undefined8 *)(extraout_x8_12 + 0x30),
                 *(undefined8 *)(extraout_x8_12 + 0x38));
      puVar11 = *(uint **)(param_2 + 0x68);
    }
    func_0x005c7a98("content-type");
    if ((uint *)(*(long *)(param_2 + 0x68) + 8) != puVar11) {
      puVar7 = puVar11 + 0xc;
      puVar8 = puVar11 + 0xe;
      puVar11 = (uint *)(param_2 + 0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (puVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar8);
    }
  }
  func_0x005c7a54();
  (*extraout_x8_13)();
  if ((int)puVar11 == 0) goto LAB_005c5414;
  func_0x005c7b38(*(undefined8 *)(*(long *)param_3 + 0x68));
  puVar7 = puVar11;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    if (puVar11 == (uint *)0x0) goto LAB_005c5414;
    FUN_00485afc();
    if ((*(char *)(param_2 + 0x12) != '\x01') || (puVar7 == (uint *)0x0)) {
LAB_005c53d8:
      puVar11 = puVar7;
      dVar20 = 0.0;
      if (puVar11 == (uint *)0x0) goto LAB_005c5414;
      goto LAB_005c5400;
    }
    auStack_c0[6] = auStack_c0[6] & 0xffffff00;
    uStack_98 = 0;
    FUN_005ba5ac(puVar11,auStack_c0 + 6);
    dVar20 = 0.0;
    if ((int)puVar11 != 0) {
      plVar15 = (long *)CONCAT44(auStack_c0[7],auStack_c0[6]);
      if (plVar15 == (long *)0x0) {
LAB_005c53e4:
        plVar17 = (long *)0x0;
LAB_005c53e8:
        plVar15 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar15 + 0x18))();
        plVar17 = (long *)CONCAT44(auStack_c0[7],auStack_c0[6]);
        dVar20 = (double)(ulong)((long)plVar15 << 3);
        if (plVar17 == (long *)0x0) goto LAB_005c53e4;
        (**(code **)(*plVar17 + 0x10))();
        plVar15 = (long *)CONCAT44(auStack_c0[7],auStack_c0[6]);
        if (plVar15 == (long *)0x0) goto LAB_005c53e8;
        (**(code **)(*plVar15 + 0x18))();
      }
      FUN_005baca8(plVar17,plVar15);
      dVar20 = param_1 / dVar20;
    }
    puVar11 = auStack_c0 + 6;
    FUN_005be37c();
  }
  else {
    if (puVar11 == (uint *)0x0) goto LAB_005c5414;
    (**(code **)(*(long *)puVar11 + 0x28))();
    if ((*(char *)(param_2 + 0x12) != '\x01') || (puVar7 == (uint *)0x0)) goto LAB_005c53d8;
    FUN_004b8cec(auStack_c0 + 6,puVar7);
    FUN_0054a1cc(puVar11,CONCAT44(auStack_c0[7],auStack_c0[6]),puVar7);
    dVar20 = 0.0;
    if ((int)puVar11 != 0) {
      FUN_005baca8(CONCAT44(auStack_c0[7],auStack_c0[6]),puVar7);
      dVar20 = param_1 / (double)(ulong)((long)puVar7 << 3);
    }
    puVar11 = auStack_c0 + 6;
    FUN_0040d974();
  }
LAB_005c5400:
  func_0x005c7b80();
  (**(code **)(extraout_x8_14 + 0x48))(dVar20);
LAB_005c5414:
  iVar6 = (int)puVar11;
  func_0x005c7a54();
  (*extraout_x8_15)();
  if (iVar6 != 0) {
    puVar12 = *(undefined4 **)(param_2 + 0x68);
    if ((puVar12 != (undefined4 *)0x0) &&
       (func_0x005c7be4(), (undefined4 *)(*(long *)(param_2 + 0x68) + 8) != puVar12)) {
      puVar1 = (undefined8 *)(puVar12 + 0xc);
      puVar3 = (undefined8 *)(puVar12 + 0xe);
      puVar12 = (undefined4 *)(param_2 + 0x18);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (puVar12,*puVar1,*puVar3);
    }
    func_0x005c7b38(*(undefined8 *)(*(long *)param_3 + 0x80));
    if (puVar12 != (undefined4 *)0x0) {
      puVar13 = puVar12;
      func_0x005c7a98("snap-grpc-protocol");
      puVar2 = puVar12 + 2;
      if (puVar2 != puVar13) {
        puVar1 = (undefined8 *)(puVar13 + 0xc);
        puVar3 = (undefined8 *)(puVar13 + 0xe);
        puVar13 = (undefined4 *)(param_2 + 0x78);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                  (puVar13,*puVar1,*puVar3);
      }
      func_0x005c7950("snap-grpc-connection-reuse");
      puVar12 = puVar13;
      if (puVar2 != puVar13) {
        puVar12 = *(undefined4 **)(puVar13 + 0xc);
        func_0x00465a14(puVar12,*(undefined8 *)(puVar13 + 0xe),"1",1);
        if ((int)puVar12 != 0) {
          *(undefined1 *)(param_2 + 0x70) = 1;
        }
      }
      func_0x005c7950("snap-dns-resolve");
      if (puVar2 != puVar12) {
        func_0x005c79e0();
        func_0x005c79ac();
        *(int *)(param_2 + 0x90) = (int)puVar12;
        func_0x005c7ad4();
      }
      func_0x005c7950("snap-connection-setup");
      if (puVar2 != puVar12) {
        func_0x005c79e0();
        func_0x005c79ac();
        *(int *)(param_2 + 0x98) = (int)puVar12;
        func_0x005c7ad4();
      }
      func_0x005c7950("snap-ssl-setup");
      if (puVar2 != puVar12) {
        func_0x005c79e0();
        func_0x005c79ac();
        *(int *)(param_2 + 0x94) = (int)puVar12;
        func_0x005c7ad4();
      }
      func_0x005c7950("snap-request-wire-setup");
      if (puVar2 != puVar12) {
        func_0x005c79e0();
        func_0x005c79ac();
        *(int *)(param_2 + 0x9c) = (int)puVar12;
        func_0x005c7ad4();
      }
      func_0x005c7950("snap-response-wire-setup");
      if (puVar2 != puVar12) {
        func_0x005c79e0();
        func_0x005c79ac();
        *(int *)(param_2 + 0xa0) = (int)puVar12;
        func_0x005c7ad4();
      }
      func_0x005c7950("snap-server-ip");
      if (puVar2 != puVar12) {
        func_0x005c79e0();
        puVar12 = (undefined4 *)(param_2 + 0xa8);
        FUN_004575b8(puVar12,auStack_c0 + 6);
        func_0x005c7ad4();
      }
    }
    func_0x005c7b38(*(undefined8 *)(*(long *)param_3 + 0x78));
    uVar4 = *puVar12;
    plVar15 = *(long **)(param_2 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_c0 + 6,puVar12 + 2);
    (**(code **)(*plVar15 + 0x50))
              (plVar15,uVar4,param_2 + 0x18,auStack_c0 + 6,*(undefined4 *)(param_2 + 0x60),
               param_2 + 0x78,*(undefined1 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x90),
               *(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x94),
               *(undefined4 *)(param_2 + 0x9c),*(undefined4 *)(param_2 + 0xa0),param_2 + 0x48,
               param_2 + 0x30,param_2 + 0xa8);
    func_0x005c7ad4();
  }
  (**(code **)(*(long *)param_3 + 0x18))(param_3);
  return;
}



/* Entry: 005c5758; end: 005c575b;  */

undefined8 * FUN_005c5758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a048f8;
  func_0x00467c40(param_1 + 0x19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x15);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  func_0x005c57d4(param_1 + 1);
  return param_1;
}



/* Entry: 005c575c; end: 005c576f;  */

void FUN_005c575c(void)

{
  FUN_005c5770();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c5770; end: 005c57ff;  */

undefined8 * FUN_005c5770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a048f8;
  func_0x00467c40(param_1 + 0x19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x15);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  func_0x005c57d4(param_1 + 1);
  return param_1;
}



/* Entry: 005c5800; end: 005c5847;  */

void FUN_005c5800(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a049e0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  return;
}



/* Entry: 005c5848; end: 005c5897;  */

undefined8 * FUN_005c5848(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a049e0;
  FUN_00457530(param_1 + 0x10);
  FUN_00457530(param_1 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x005c7cf8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 005c5898; end: 005c589b;  */

undefined8 * FUN_005c5898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04948;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x16);
  *param_1 = &PTR_DAT_00a049e0;
  FUN_00457530(param_1 + 0x10);
  FUN_00457530(param_1 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x005c7cf8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 005c589c; end: 005c58af;  */

void FUN_005c589c(void)

{
  FUN_005c61d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c58b0; end: 005c58bf;  */

void FUN_005c58b0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x110) = param_2;
  return;
}



/* Entry: 005c58c0; end: 005c594f;  */

void FUN_005c58c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x005c7aec();
  *(long *)(param_1 + 0xe0) = lVar1;
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  func_0x005c7ca4();
  func_0x005c7db4();
  func_0x005c7d9c();
  FUN_005b9d8c(auStack_48,*(undefined8 *)(param_1 + 200));
  func_0x005c7d80(param_1 + 0x28);
  func_0x005c7b10();
  FUN_005b9a64(auStack_48,*(long *)(param_1 + 200) + 0x58,param_1 + 0xb0);
  FUN_005c6200(param_1,param_1 + 0x10,auStack_48,0);
  func_0x005c7b10();
  return;
}



/* Entry: 005c5950; end: 005c59a3;  */

void FUN_005c5950(long param_1,undefined8 param_2)

{
  code *extraout_x8;
  long unaff_x20;
  
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  func_0x005c7ac4();
  if (unaff_x20 != 0) {
    func_0x005c7b5c();
    func_0x005c7984();
    func_0x005c7a44();
    (*extraout_x8)();
    func_0x005c7a88();
    func_0x005c7a80();
  }
  return;
}



/* Entry: 005c59a4; end: 005c5a17;  */

void FUN_005c59a4(long param_1,undefined8 param_2)

{
  long lVar1;
  code *extraout_x8;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x005c7aec();
  *(long *)(param_1 + 0xf0) = lVar1;
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  func_0x0033a204();
  FUN_0033a2e8();
  func_0x005c7ac4();
  if (unaff_x20 != 0) {
    func_0x005c7998();
    func_0x005c7984();
    func_0x005c7a44();
    (*extraout_x8)();
    func_0x005c7a88();
    func_0x005c7a80();
  }
  return;
}



/* Entry: 005c5a18; end: 005c5a7f;  */

void FUN_005c5a18(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  puVar1 = puRam0000000000b6bf88;
  if (((param_2 & 1) == 0) && (puRam0000000000b6bf88 != (undefined8 *)0x0)) {
    func_0x005c7b5c();
    auStack_58[0] = 0;
    uStack_40 = 0;
    func_0x005c7d94(*(undefined8 *)*puVar1,puVar1,1,auStack_38,param_4,auStack_58);
    func_0x005c7a88();
    func_0x005c7a80();
  }
  return;
}



/* Entry: 005c5a80; end: 005c5aeb;  */

void FUN_005c5a80(double param_1,long param_2)

{
  code *extraout_x8;
  long unaff_x20;
  
  func_0x005c7aec();
  func_0x0033a204();
  FUN_0033a2e8();
  *(long *)(param_2 + 0xa0) = (long)param_1;
  func_0x005c7ac4();
  if (unaff_x20 != 0) {
    func_0x005c7998();
    func_0x005c7984();
    func_0x005c7a44();
    (*extraout_x8)();
    func_0x005c7a88();
    func_0x005c7a80();
  }
  func_0x005c7cb8();
  return;
}



/* Entry: 005c5aec; end: 005c5ba7;  */

void FUN_005c5aec(double param_1,long param_2,undefined8 param_3)

{
  code *extraout_x8;
  code *extraout_x8_00;
  
  *(undefined8 *)(param_2 + 0xd8) = param_3;
  if (lRam0000000000b6bf88 != 0) {
    func_0x005c7998();
    func_0x005c7984();
    func_0x005c7a44();
    (*extraout_x8)();
    func_0x005c7a88();
    func_0x005c7a80();
  }
  if ((0.0 < param_1) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7998();
    func_0x005c7984();
    func_0x005c7a44();
    (*extraout_x8_00)();
    func_0x005c7a88();
    func_0x005c7a80();
  }
  func_0x005c7cb8();
  return;
}



/* Entry: 005c5ba8; end: 005c61c3;  */

void FUN_005c5ba8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,undefined1 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int iVar9;
  long unaff_x20;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  long lVar13;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [32];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [32];
  long alStack_500 [4];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [376];
  long lStack_280;
  long lStack_278;
  undefined4 auStack_270 [94];
  long lStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_88;
  
  uVar7 = param_3;
  iVar9 = param_6;
  func_0x005c7a6c();
  *(int *)(param_2 + 0x78) = iVar9;
  uStack_88 = extraout_x8;
  func_0x005c7aec();
  *(long *)(unaff_x20 + 0x100) = param_2;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar7;
  lVar13 = *(long *)(unaff_x20 + 0x110);
  func_0x0033a204();
  FUN_0033a2e8();
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  dVar11 = param_1;
  if (*(char *)(unaff_x20 + 0x98) == '\x01') {
    func_0x005c7c98();
    func_0x005c7ce4(&uStack_588);
  }
  func_0x005c7b8c();
  func_0x00483dc8(&uStack_588,auStack_270);
  func_0x005c7cb0();
  lVar3 = lRam0000000000b6bf88;
  if (lRam0000000000b6bf88 != 0) {
    func_0x005c7a10(auStack_3f8);
    func_0x005c7b2c();
    dVar11 = param_1 + (double)lVar13;
    func_0x005c7b18();
    (*extraout_x8_00)(lVar3,3,auStack_3f8);
    func_0x005c7b24();
    func_0x005c7d78();
  }
  lVar13 = lRam0000000000b6bf88;
  if ((param_6 != -1) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7a10(auStack_3f8);
    func_0x005c7b2c();
    func_0x005c7b18();
    (*extraout_x8_01)(lVar13,0xb,auStack_3f8);
    func_0x005c7b24();
    func_0x005c7d78();
  }
  FUN_005c6754(&uStack_588,param_4);
  lVar13 = lRam0000000000b6bf88;
  iVar9 = (int)param_3;
  if (lRam0000000000b6bf88 != 0) {
    func_0x005c7a10(auStack_3f8);
    func_0x005c7b2c();
    func_0x005c7dd4();
    (*extraout_x8_02)(lVar13,4,auStack_3f8);
    func_0x005c7b24();
    func_0x005c7d78();
  }
  if (iVar9 != 0) {
    func_0x005c7b8c();
    func_0x00483acc(auStack_3f8,auStack_270,1);
    func_0x005c7cb0();
    FUN_005baa18(auStack_3f8,param_5);
    lVar13 = lRam0000000000b6bf88;
    if (lRam0000000000b6bf88 != 0) {
      func_0x005c7a10(&uStack_480);
      FUN_0048405c(auStack_270,auStack_3f8);
      func_0x005c7dd4();
      func_0x005c7d94(lVar13,5,&uStack_480);
      func_0x005c7b24();
      func_0x005c7bb4();
    }
    FUN_00484190(auStack_3f8);
  }
  func_0x005c7a10(auStack_270);
  uVar4 = iVar9 == 0;
  puVar8 = (undefined4 *)(unaff_x20 + 0x10);
  FUN_005c6830();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_270);
  FUN_005ba8c8(param_5);
  func_0x005c7d48();
  if (lStack_280 != 0) {
    func_0x0033a204(*(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                    *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
    FUN_0033a2e8();
    dVar12 = dVar11;
    func_0x0033a204(*(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                    *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
    FUN_0033a2e8();
    func_0x005c7a10(&uStack_498);
    FUN_005b9d8c(&uStack_4b0,*(undefined8 *)(unaff_x20 + 200));
    uVar2 = *(undefined4 *)(*(long *)(unaff_x20 + 200) + 0x28);
    func_0x005c7d24(&uStack_4c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_4e0,param_16);
    uStack_470 = uStack_488;
    uStack_408 = uStack_4d0;
    uStack_478 = uStack_490;
    uStack_480 = uStack_498;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_460 = uStack_4a8;
    uStack_468 = uStack_4b0;
    uStack_458 = uStack_4a0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_440 = uStack_4c0;
    uStack_448 = uStack_4c8;
    uStack_438 = uStack_4b8;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_428 = param_10;
    uStack_424 = param_11;
    uStack_420 = param_12;
    uStack_41c = param_13;
    uStack_410 = uStack_4d8;
    uStack_418 = uStack_4e0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uVar10 = *(undefined8 *)(unaff_x20 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_450 = uVar2;
    uStack_430 = param_8;
    uStack_42c = param_9;
    uStack_400 = param_5;
    FUN_00462e1c(alStack_500,param_14);
    FUN_00462e1c(auStack_520,param_15);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_538,unaff_x20 + 0x40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_550,unaff_x20 + 0x10);
    FUN_00459e04(auStack_570,unaff_x20 + 0x58);
    uVar4 = iVar9 == 0;
    FUN_005bb174(auStack_3f8,&uStack_480,(long)dVar11,uVar10,(long)dVar12,uVar7,uVar1,alStack_500,
                 auStack_520,uVar4,iVar9,auStack_538,auStack_550,auStack_570,0x101,
                 *(undefined8 *)(unaff_x20 + 0x110),0x101,*(undefined8 *)(unaff_x20 + 8),
                 (long)*(int *)(unaff_x20 + 0x78),*(undefined4 *)(unaff_x20 + 0x7c));
    FUN_00457530(auStack_570);
    func_0x005c7d2c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_538);
    FUN_00457530(auStack_520);
    plVar5 = alStack_500;
    FUN_00457530();
    func_0x005c7c50();
    func_0x005c7bdc();
    func_0x005c7bf4();
    func_0x005c7c60();
    func_0x005c7c58();
    FUN_005c7fd4();
    FUN_005bb2e4(auStack_270,auStack_3f8);
    lStack_f8 = lStack_280;
    lStack_f0 = lStack_278;
    if (lStack_278 != 0) {
      do {
        func_0x005c79ec();
      } while (extraout_w10 != 0);
    }
    pcStack_e8 = FUN_005c6af8;
    ppuStack_e0 = &PTR_FUN_00a04a90;
    lVar13 = 0x188;
    __Znwm();
    puVar8 = auStack_270;
    FUN_005bb2e4();
    *(long *)(lVar13 + 0x180) = lStack_f0;
    *(long *)(lVar13 + 0x178) = lStack_f8;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_d8 = lVar13;
    func_0x005c7d54(*(undefined8 *)(*plVar5 + 0x10));
    func_0x005c7ab0(ppuStack_e0);
    FUN_005c6b30(auStack_270);
    func_0x005bb408(auStack_3f8);
  }
  func_0x005c7c1c();
  FUN_00484190(&uStack_588);
  func_0x005c79fc(uStack_88);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x005c7b24();
    func_0x005c7bb4();
    FUN_00484190(auStack_3f8);
    puVar6 = &uStack_588;
    FUN_00484190();
    func_0x005c7a64();
    *(undefined4 *)((long)puVar6 + 0x7c) = *puVar8;
    return;
  }
  return;
}



/* Entry: 005c61c4; end: 005c61cf;  */

void FUN_005c61c4(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = *param_2;
  return;
}



/* Entry: 005c61d0; end: 005c61ff;  */

undefined8 * FUN_005c61d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04948;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x16);
  *param_1 = &PTR_DAT_00a049e0;
  FUN_00457530(param_1 + 0x10);
  FUN_00457530(param_1 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x005c7cf8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 005c6200; end: 005c6413;  */

void FUN_005c6200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  dword *pdVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x20;
  undefined1 auStack_170 [16];
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [24];
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  long alStack_d8 [3];
  long lStack_c0;
  long lStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  dword *pdStack_98;
  undefined8 uStack_48;
  
  plVar4 = &lStack_140;
  plVar5 = &lStack_140;
  func_0x005c7a6c();
  plVar1 = &lStack_c0;
  uStack_48 = extraout_x8;
  FUN_005c6414();
  if ((lStack_c0 != 0) &&
     (plVar2 = unaff_x20, FUN_005c647c(), plVar1 = plVar2, ((ulong)plVar2 & 1) != 0)) {
    in_ZR = (char)unaff_x20[0x13] == '\x01';
    if ((bool)in_ZR) {
      plVar2 = alStack_d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (plVar2,unaff_x20 + 0x10);
    }
    else {
      func_0x005c7c0c();
    }
    FUN_005c7fd4();
    lStack_138 = lStack_b8;
    lStack_140 = lStack_c0;
    if (lStack_b8 != 0) {
      do {
        func_0x005c79ec();
      } while (extraout_w10 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_118,param_3);
    func_0x005c7da8();
    pcStack_a8 = FUN_005c64dc;
    ppuStack_a0 = &PTR_FUN_00a04a40;
    pdVar3 = &segment_command_00000020.nsects;
    uStack_e8 = param_4;
    __Znwm();
    *(long *)(pdVar3 + 2) = lStack_138;
    *(long *)pdVar3 = lStack_140;
    lStack_140 = 0;
    lStack_138 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(pdVar3 + 4,auStack_130)
    ;
    *(undefined8 *)(pdVar3 + 0xc) = uStack_110;
    *(long *)(pdVar3 + 10) = lStack_118;
    *(undefined8 *)(pdVar3 + 0xe) = uStack_108;
    uStack_110 = 0;
    uStack_108 = 0;
    lStack_118 = 0;
    *(undefined8 *)(pdVar3 + 0x12) = uStack_f8;
    *(undefined8 *)(pdVar3 + 0x10) = uStack_100;
    *(undefined8 *)(pdVar3 + 0x14) = uStack_f0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    *(undefined1 *)(pdVar3 + 0x16) = uStack_e8;
    pdStack_98 = pdVar3;
    (**(code **)(*plVar2 + 0x10))(plVar2,&pcStack_a8);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    FUN_005c6524();
    func_0x005c7bc4();
    plVar1 = plVar4;
    unaff_x20 = plVar2;
  }
  func_0x005c7bd4();
  func_0x005c79fc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    FUN_005c6524();
    func_0x005c7bc4();
    func_0x005c7bd4();
    func_0x005c7a64();
    pcStack_148 = FUN_005c6414;
    plStack_160 = unaff_x20;
    plStack_158 = plVar1;
    puStack_150 = &stack0xfffffffffffffff0;
    *plVar5 = 0;
    plVar5[1] = 0;
    if (plRam0000000000b6bf88 != (long *)0x0) {
      (**(code **)(*plRam0000000000b6bf88 + 0x10))(auStack_170);
      FUN_005ba108(plVar5,auStack_170);
      func_0x005c7bbc();
    }
    return;
  }
  return;
}



/* Entry: 005c6414; end: 005c647b;  */

void FUN_005c6414(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  if (plRam0000000000b6bf88 != (long *)0x0) {
    (**(code **)(*plRam0000000000b6bf88 + 0x10))(auStack_30);
    FUN_005ba108(param_1,auStack_30);
    func_0x005c7bbc();
  }
  return;
}



/* Entry: 005c647c; end: 005c64db;  */

undefined1 FUN_005c647c(long param_1)

{
  long *aplStack_30 [2];
  
  if ((*(byte *)(param_1 + 0xa9) & 1) == 0) {
    FUN_005c6414(aplStack_30);
    (**(code **)(*aplStack_30[0] + 0x20))();
    *(ushort *)(param_1 + 0xa8) = (ushort)aplStack_30[0] | 0x100;
    func_0x005c7bbc();
  }
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 005c64dc; end: 005c64ff;  */

void FUN_005c64dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x005c64fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x28))
            ((long *)*puVar1,puVar1 + 2,puVar1 + 5,puVar1 + 8,*(undefined1 *)(puVar1 + 0xb));
  return;
}



/* Entry: 005c6500; end: 005c651f;  */

void FUN_005c6500(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c6524();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c6520; end: 005c6523;  */

void FUN_005c6520(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c6524; end: 005c654f;  */

void FUN_005c6524(void)

{
  long unaff_x19;
  
  func_0x005c7d6c();
  func_0x005c7cf8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x10);
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c6550; end: 005c6643;  */

void FUN_005c6550(undefined8 param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x20;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined1 uStack_68;
  undefined8 uStack_28;
  
  func_0x005c7a6c();
  uStack_28 = extraout_x8;
  FUN_005c6414(&lStack_a0);
  if ((lStack_a0 != 0) && (FUN_005c647c(), ((ulong)unaff_x20 & 1) != 0)) {
    FUN_005c7fd4();
    if (lStack_98 != 0) {
      do {
        func_0x005c79ec();
      } while (extraout_w10 != 0);
    }
    pcStack_88 = FUN_005c6644;
    ppuStack_80 = &PTR_DAT_00a04a58;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = param_2;
    uStack_68 = param_2;
    (**(code **)(*unaff_x20 + 0x10))();
    func_0x005c7ab0(ppuStack_80);
    func_0x005bb7c4(&uStack_b8);
  }
  func_0x005bb7c4(&lStack_a0);
  func_0x005c79fc(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c7ab0(ppuStack_80);
    func_0x005bb7c4(&uStack_b8);
    plVar1 = &lStack_a0;
    func_0x005bb7c4();
    func_0x005c7a64();
                    /* WARNING: Could not recover jumptable at 0x005c6658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)plVar1[2] + 0x38))((long *)plVar1[2],(char)plVar1[4]);
    return;
  }
  return;
}



/* Entry: 005c6644; end: 005c6687;  */

void FUN_005c6644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c6658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
            (*(long **)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 005c6688; end: 005c6753;  */

void FUN_005c6688(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x005c7d18(uVar3);
    lVar2 = uVar3 + 0x30;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    func_0x005c7d0c((long)(uVar3 - *param_1) / 0x30);
    FUN_00483f7c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
    func_0x005c7d18(lStack_58);
    lStack_58 = lStack_58 + 0x30;
    func_0x005c7d88();
    lVar2 = param_1[1];
    func_0x005c7c80();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 005c6754; end: 005c682f;  */

void FUN_005c6754(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_00484030(uVar3,&PTR_s_source_00a04a70,param_2);
    lVar2 = uVar3 + 0x30;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    func_0x005c7d0c((long)(uVar3 - *param_1) / 0x30);
    FUN_00483f7c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
    FUN_00484030(lStack_48,&PTR_s_source_00a04a70,param_2);
    lStack_48 = lStack_48 + 0x30;
    func_0x005c7d88();
    lVar2 = param_1[1];
    func_0x005c7c80();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 005c6830; end: 005c6a3f;  */

long * FUN_005c6830(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                   undefined1 param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  dword *pdVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w10;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [24];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  long alStack_e8 [3];
  long lStack_d0;
  long lStack_c8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_58;
  
  plVar3 = &lStack_150;
  plVar4 = &lStack_150;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  plVar1 = &lStack_d0;
  uVar5 = param_3;
  FUN_005c6414();
  if ((lStack_d0 != 0) && (plVar1 = param_1, FUN_005c647c(), ((ulong)plVar1 & 1) != 0)) {
    in_ZR = (char)param_1[0x13] == '\x01';
    if ((bool)in_ZR) {
      plVar1 = alStack_e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (plVar1,param_1 + 0x10);
    }
    else {
      func_0x005c7c0c();
    }
    FUN_005c7fd4();
    lStack_148 = lStack_c8;
    lStack_150 = lStack_d0;
    if (lStack_c8 != 0) {
      do {
        func_0x005c79ec();
      } while (extraout_w10 != 0);
    }
    func_0x005c7d24(auStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_128,param_3);
    func_0x005c7da8();
    uStack_f8 = CONCAT11(param_5,param_4);
    pcStack_b8 = FUN_005c6a80;
    ppuStack_b0 = &PTR_FUN_00a04a78;
    pdVar2 = &segment_command_00000020.nsects;
    __Znwm();
    *(long *)(pdVar2 + 2) = lStack_148;
    *(long *)pdVar2 = lStack_150;
    lStack_150 = 0;
    lStack_148 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(pdVar2 + 4,auStack_140)
    ;
    *(undefined8 *)(pdVar2 + 0xc) = uStack_120;
    *(long *)(pdVar2 + 10) = lStack_128;
    *(undefined8 *)(pdVar2 + 0xe) = uStack_118;
    uStack_120 = 0;
    uStack_118 = 0;
    lStack_128 = 0;
    *(undefined8 *)(pdVar2 + 0x12) = uStack_108;
    *(undefined8 *)(pdVar2 + 0x10) = uStack_110;
    *(undefined8 *)(pdVar2 + 0x14) = uStack_100;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    *(undefined2 *)(pdVar2 + 0x16) = uStack_f8;
    pdStack_a8 = pdVar2;
    (**(code **)(*plVar1 + 0x10))(plVar1,&pcStack_b8);
    func_0x005c7c88();
    FUN_005c6acc();
    func_0x005c7bc4();
    plVar1 = plVar3;
  }
  func_0x005c7bd4();
  func_0x005c79fc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x005c7c88();
    FUN_005c6acc(&lStack_150);
    func_0x005c7bc4();
    func_0x005c7bd4();
    func_0x005c7a64();
    plVar1 = plVar4;
    FUN_00425cb4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar1 + 3,uVar5);
    return plVar4;
  }
  return plVar1;
}



/* Entry: 005c6a40; end: 005c6a7f;  */

long FUN_005c6a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00425cb4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 005c6a80; end: 005c6aa7;  */

void FUN_005c6a80(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x005c6aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x30))
            ((long *)*puVar1,puVar1 + 2,puVar1 + 5,puVar1 + 8,*(undefined1 *)(puVar1 + 0xb),
             *(undefined1 *)((long)puVar1 + 0x59));
  return;
}



/* Entry: 005c6aa8; end: 005c6ac7;  */

void FUN_005c6aa8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c6acc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c6ac8; end: 005c6acb;  */

void FUN_005c6ac8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c6acc; end: 005c6af7;  */

void FUN_005c6acc(void)

{
  long unaff_x19;
  
  func_0x005c7d6c();
  func_0x005c7cf8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x10);
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c6af8; end: 005c6b0b;  */

void FUN_005c6af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c6b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x178) + 0x10))();
  return;
}



/* Entry: 005c6b0c; end: 005c6b2b;  */

void FUN_005c6b0c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c6b30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c6b2c; end: 005c6b2f;  */

void FUN_005c6b2c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c6b30; end: 005c6b57;  */

void FUN_005c6b30(long param_1)

{
  func_0x005bb7c4(param_1 + 0x178);
  FUN_00457530(param_1 + 0x128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf8);
  FUN_00457530(param_1 + 0xd0);
  FUN_00457530(param_1 + 0xb0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x004870f0();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 005c6b58; end: 005c6b5b;  */

undefined8 * FUN_005c6b58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04ab8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x22);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1e);
  *param_1 = &PTR_DAT_00a049e0;
  FUN_00457530(param_1 + 0x10);
  FUN_00457530(param_1 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x005c7cf8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 005c6b5c; end: 005c6b6f;  */

void FUN_005c6b5c(void)

{
  FUN_005c7504();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c6b70; end: 005c6b77;  */

void FUN_005c6b70(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x128) = param_2;
  return;
}



/* Entry: 005c6b78; end: 005c6c07;  */

void FUN_005c6b78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  uVar2 = param_2;
  func_0x005c7aec();
  *(long *)(param_1 + 0xb0) = lVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  func_0x005c7ca4();
  func_0x005c7db4();
  func_0x005c7d9c();
  FUN_005b9d8c(auStack_48,*(undefined8 *)(param_1 + 0x108));
  func_0x005c7d80(param_1 + 0x28);
  func_0x005c7b10();
  FUN_005b9a64(auStack_48,*(long *)(param_1 + 0x108) + 0x58,param_1 + 0xf0);
  FUN_005c6200(param_1,param_2,auStack_48,1);
  func_0x005c7b10();
  return;
}



/* Entry: 005c6c08; end: 005c6c57;  */

void FUN_005c6c08(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_2;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  FUN_005b9e2c(auStack_38);
  func_0x005c7d80(param_1 + 0x110);
  func_0x005c7b10();
  return;
}



/* Entry: 005c6c58; end: 005c6c5f;  */

void FUN_005c6c58(void)

{
  return;
}



/* Entry: 005c6c60; end: 005c6ccb;  */

void FUN_005c6c60(double param_1,long param_2)

{
  code *extraout_x8;
  long unaff_x20;
  
  func_0x005c7aec();
  func_0x0033a204();
  FUN_0033a2e8();
  *(long *)(param_2 + 0xa0) = (long)param_1;
  func_0x005c7ac4();
  if (unaff_x20 != 0) {
    func_0x005c7ba0();
    func_0x005c7984();
    func_0x005c7a44();
    (*extraout_x8)();
    func_0x005c7a88();
    func_0x005c7a80();
  }
  func_0x005c7cc4();
  return;
}



/* Entry: 005c6ccc; end: 005c6d5b;  */

void FUN_005c6ccc(double param_1,long param_2,long param_3)

{
  code *extraout_x8;
  long unaff_x20;
  
  *(long *)(param_2 + 0xe0) = *(long *)(param_2 + 0xe0) + param_3;
  *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + 1;
  if ((0.0 < param_1) && (func_0x005c7ac4(), unaff_x20 != 0)) {
    func_0x005c7ba0();
    func_0x005c7984();
    func_0x005c7a44();
    (*extraout_x8)();
    func_0x005c7a88();
    func_0x005c7a80();
  }
  func_0x005c7cc4();
  return;
}



/* Entry: 005c6d5c; end: 005c7503;  */

undefined8 *
FUN_005c6d5c(double param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
            int param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9,undefined4 param_10
            ,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 in_stack_00000020;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_550 [32];
  undefined1 auStack_530 [32];
  undefined1 auStack_510 [24];
  long alStack_4f8 [3];
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f0 [368];
  long lStack_280;
  long lStack_278;
  undefined1 auStack_268 [368];
  long lStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_88;
  
  iVar12 = param_6;
  func_0x005c7a6c();
  uStack_568 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  *(int *)(param_2 + 0x78) = iVar12;
  uStack_88 = extraout_x8;
  if (*(char *)(param_2 + 0x98) == '\x01') {
    func_0x005c7c98();
    func_0x005c7ce4(&uStack_568);
  }
  lVar15 = *(long *)(unaff_x20 + 0x128);
  func_0x005c7aec();
  func_0x0033a204();
  FUN_0033a2e8();
  if ((0 < *(long *)(unaff_x20 + 0xc0)) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7b18();
    func_0x005c7a34();
    func_0x005c7b40();
    func_0x005c7a90();
    func_0x005c7adc();
  }
  if ((0 < *(long *)(unaff_x20 + 200)) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7b18();
    func_0x005c7a34();
    func_0x005c7b40();
    func_0x005c7a90();
    func_0x005c7adc();
  }
  if (0 < *(long *)(unaff_x20 + 0xd0)) {
    FUN_00484078(auStack_3f0,&uStack_568);
    func_0x005c7cd8();
    lVar8 = lRam0000000000b6bf88;
    if (lRam0000000000b6bf88 != 0) {
      func_0x005c7978(&uStack_480);
      func_0x005c7cec();
      func_0x005c7b18();
      func_0x005c7b40(lVar8,0x17,&uStack_480);
      func_0x005c7a90();
      func_0x005c7bb4();
    }
    func_0x005c7cd0();
  }
  if ((0 < *(long *)(unaff_x20 + 0xd8)) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7b18();
    func_0x005c7a34();
    func_0x005c7b40();
    func_0x005c7a90();
    func_0x005c7adc();
  }
  if ((0 < *(long *)(unaff_x20 + 0xe0)) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7b18();
    func_0x005c7a34();
    func_0x005c7b40();
    func_0x005c7a90();
    func_0x005c7adc();
  }
  if ((0 < *(long *)(unaff_x20 + 0xe8)) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7b18();
    func_0x005c7a34();
    func_0x005c7b40();
    func_0x005c7a90();
    func_0x005c7adc();
  }
  FUN_005c6688(&uStack_568,"host",unaff_x20 + 0x28);
  if (lRam0000000000b6bf88 != 0) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7b18();
    func_0x005c7a34();
    (*extraout_x8_00)();
    func_0x005c7a90();
    func_0x005c7adc();
  }
  if ((param_6 != -1) && (lRam0000000000b6bf88 != 0)) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7b18();
    func_0x005c7a34();
    (*extraout_x8_01)();
    func_0x005c7a90();
    func_0x005c7adc();
  }
  FUN_005c6754(&uStack_568,param_4);
  lVar8 = lRam0000000000b6bf88;
  if (lRam0000000000b6bf88 != 0) {
    func_0x005c7940();
    func_0x005c79bc();
    func_0x005c7dd4();
    (*extraout_x8_02)(lVar8,0x1a,auStack_3f0);
    func_0x005c7a90();
    func_0x005c7adc();
  }
  if (param_3 != 0) {
    FUN_005c6a40(auStack_268,"host",unaff_x20 + 0x28);
    func_0x00483acc(auStack_3f0,auStack_268,1);
    func_0x00483da0(auStack_268);
    func_0x005c7cd8();
    if (*(char *)(unaff_x20 + 0x98) == '\x01') {
      func_0x005c7c98();
      func_0x005c7ce4(auStack_3f0);
    }
    lVar8 = lRam0000000000b6bf88;
    if (lRam0000000000b6bf88 != 0) {
      func_0x005c7978(&uStack_480);
      func_0x005c7cec();
      func_0x005c7dd4();
      func_0x005c7d94(lVar8,0x19,&uStack_480);
      func_0x005c7a90();
      func_0x005c7bb4();
    }
    func_0x005c7cd0();
  }
  func_0x005c7978(auStack_268);
  uVar9 = param_3 == 0;
  FUN_005c6830();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
  FUN_005ba8c8(param_5);
  func_0x005c7d48();
  if (lStack_280 != 0) {
    func_0x005c7978(&uStack_498);
    FUN_005b9d8c(&uStack_4b0,*(undefined8 *)(unaff_x20 + 0x108));
    uVar7 = *(undefined4 *)(*(long *)(unaff_x20 + 0x108) + 0x28);
    func_0x005c7d24(&uStack_4c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_4e0,in_stack_00000020);
    uStack_470 = uStack_488;
    uStack_408 = uStack_4d0;
    uStack_478 = uStack_490;
    uStack_480 = uStack_498;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_460 = uStack_4a8;
    uStack_468 = uStack_4b0;
    uStack_458 = uStack_4a0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_440 = uStack_4c0;
    uStack_448 = uStack_4c8;
    uStack_438 = uStack_4b8;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_428 = param_10;
    uStack_424 = param_11;
    uStack_420 = param_12;
    uStack_41c = param_13;
    uStack_410 = uStack_4d8;
    uStack_418 = uStack_4e0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x20 + 200);
    uStack_450 = uVar7;
    uStack_430 = param_8;
    uStack_42c = param_9;
    uStack_400 = param_5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (alStack_4f8,unaff_x20 + 0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_510,unaff_x20 + 0x40);
    FUN_00459e04(auStack_530,unaff_x20 + 0x58);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x128);
    uVar13 = *(undefined8 *)(unaff_x20 + 8);
    FUN_00459e04(auStack_550,unaff_x20 + 0x80);
    uVar9 = param_3 == 0;
    FUN_005bae38(auStack_3f0,&uStack_480,uVar5,uVar4,uVar1,uVar3,uVar2,uVar6,
                 (long)(param_1 + (double)lVar15),uVar9,param_3,alStack_4f8,auStack_510,auStack_530,
                 0x101,uVar14,0x101,uVar13,auStack_550,(long)*(int *)(unaff_x20 + 0x78),
                 *(undefined4 *)(unaff_x20 + 0x7c));
    FUN_00457530(auStack_550);
    FUN_00457530(auStack_530);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
    plVar10 = alStack_4f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x005c7c50();
    func_0x005c7bdc();
    func_0x005c7bf4();
    func_0x005c7c60();
    func_0x005c7c58();
    FUN_005c7fd4();
    FUN_005bb034(auStack_268,auStack_3f0);
    lStack_f0 = lStack_278;
    lStack_f8 = lStack_280;
    if (lStack_278 != 0) {
      do {
        func_0x005c79ec();
      } while (extraout_w10 != 0);
    }
    pcStack_e8 = FUN_005c7544;
    ppuStack_e0 = &PTR_FUN_00a04b30;
    lVar15 = 0x180;
    __Znwm();
    FUN_005bb034();
    *(long *)(lVar15 + 0x178) = lStack_f0;
    *(long *)(lVar15 + 0x170) = lStack_f8;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_d8 = lVar15;
    func_0x005c7d54(*(undefined8 *)(*plVar10 + 0x10));
    func_0x005c7c40();
    FUN_005c757c(auStack_268);
    func_0x005bb134(auStack_3f0);
  }
  func_0x005c7c1c();
  puVar11 = &uStack_568;
  FUN_00484190();
  func_0x005c79fc(uStack_88);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x005c7a90();
    func_0x005c7bb4();
    func_0x005c7cd0();
    puVar11 = &uStack_568;
    FUN_00484190();
    func_0x005c7a64();
    *puVar11 = &PTR_FUN_00a04ab8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 0x22);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 0x1e);
    *puVar11 = &PTR_DAT_00a049e0;
    FUN_00457530(puVar11 + 0x10);
    FUN_00457530(puVar11 + 0xb);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 8);
    func_0x005c7cf8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 2);
    return puVar11;
  }
  return puVar11;
}



/* Entry: 005c7504; end: 005c7543;  */

undefined8 * FUN_005c7504(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04ab8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x22);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1e);
  *param_1 = &PTR_DAT_00a049e0;
  FUN_00457530(param_1 + 0x10);
  FUN_00457530(param_1 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  func_0x005c7cf8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
  return param_1;
}



/* Entry: 005c7544; end: 005c7557;  */

void FUN_005c7544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c7554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x170) + 0x18))();
  return;
}



/* Entry: 005c7558; end: 005c7577;  */

void FUN_005c7558(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c757c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c7578; end: 005c757b;  */

void FUN_005c7578(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c757c; end: 005c75a3;  */

void FUN_005c757c(long param_1)

{
  func_0x005bb7c4(param_1 + 0x170);
  FUN_00457530(param_1 + 0x138);
  FUN_00457530(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x004870f0();
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 005c75a4; end: 005c7917;  */

undefined8 * FUN_005c75a4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  puVar1 = param_2;
  func_0x005c75f8(param_2,*puVar2,puVar2);
  if ((puVar2 == puVar1) || (func_0x004278bc(param_2,puVar1 + 4), ((uint)param_2 >> 7 & 1) != 0)) {
    puVar1 = puVar2;
  }
  return puVar1;
}



/* Entry: 005c7918; end: 005c7ddf;  */

long * FUN_005c7918(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    do {
      plVar3 = (long *)param_1[2];
      bVar1 = param_1 != (long *)*plVar3;
      param_1 = plVar3;
    } while (bVar1);
    return plVar3;
  }
  do {
    plVar2 = plVar3;
    plVar3 = (long *)*plVar2;
  } while (plVar3 != (long *)0x0);
  return plVar2;
}



/* Entry: 005c7de0; end: 005c7e2b;  */

void FUN_005c7de0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar4;
  func_0x005c7e9c(&uStack_20);
  return;
}



/* Entry: 005c7e2c; end: 005c7e57;  */

void FUN_005c7e2c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 005c7e58; end: 005c7e6b;  */

void FUN_005c7e58(void)

{
  FUN_005c7e6c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c7e6c; end: 005c7ec7;  */

undefined8 * FUN_005c7e6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04b58;
  func_0x005c7e9c(param_1 + 1);
  return param_1;
}



/* Entry: 005c7ec8; end: 005c7f5f;  */

void FUN_005c7ec8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lStack_58;
  undefined8 **ppuStack_50;
  long *plStack_48;
  
  lStack_58 = param_1;
  if (*(long *)(param_1 + 0x38) != -1) {
    plStack_48 = &lStack_58;
    ppuStack_50 = &plStack_48;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x38),&ppuStack_50,FUN_005c80f0);
  }
  (**(code **)**(undefined8 **)(param_1 + 8))
            (*(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 005c7f60; end: 005c7fab;  */

void FUN_005c7f60(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  func_0x005bb7c4(&uStack_20);
  return;
}



/* Entry: 005c7fac; end: 005c7fd3;  */

void FUN_005c7fac(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 005c7fd4; end: 005c806b;  */

undefined8 FUN_005c7fd4(void)

{
  undefined8 uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000000b6c038 & 1) == 0) {
    uVar1 = 0xb6c038;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      uStack_24 = 10;
      FUN_0064ba00();
      FUN_005c81ec(0xb6bf98,"grpcmetricslogger",&uStack_24,uVar1);
      ___cxa_guard_release(0xb6c038);
    }
  }
  return 0xb6bf98;
}



/* Entry: 005c806c; end: 005c806f;  */

undefined8 * FUN_005c806c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04bb0;
  func_0x005bcbbc(param_1 + 5);
  func_0x005bb7c4(param_1 + 3);
  func_0x005c80c8(param_1 + 1);
  return param_1;
}



/* Entry: 005c8070; end: 005c8083;  */

void FUN_005c8070(void)

{
  FUN_005c8084();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


