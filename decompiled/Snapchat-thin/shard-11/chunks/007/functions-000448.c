/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108820970; end: 108820983;  */

void FUN_108820970(void)

{
  func_0x00010882098c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820984; end: 10882099b;  */

void FUN_108820984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10882099c; end: 1088209af;  */

void FUN_10882099c(void)

{
  func_0x0001088209b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088209b0; end: 1088209c7;  */

void FUN_1088209b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088209c8; end: 1088209db;  */

void FUN_1088209c8(void)

{
  func_0x0001088209e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088209dc; end: 1088209f3;  */

void FUN_1088209dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088209f4; end: 108820b07;  */

undefined1 * FUN_1088209f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  code *extraout_x8;
  int extraout_w9;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  func_0x000107c33c90();
  func_0x000107c33af8();
  puVar1 = param_1;
  func_0x000107c33908();
  *puVar1 = &PTR_FUN_110a75150;
  puVar4 = puVar1 + 3;
  *puVar4 = &PTR_DAT_110a751a0;
  puVar3 = puVar1 + 4;
  *puVar3 = 0;
  puVar1[5] = 0;
  func_0x000107c29c18(puVar3);
  *(undefined1 *)(param_1 + 5) = 0;
  in_stack_00000000 = puVar4;
  in_stack_00000008 = param_1;
  in_stack_00000010 = puVar4;
  in_stack_00000018 = param_1;
  do {
    func_0x000107c338cc();
  } while (extraout_w9 != 0);
  func_0x00010882f4b4();
  (*extraout_x8)();
  FUN_108623234();
  func_0x000107c29b24(puVar3);
  __ZNSt3__117__assoc_sub_state4waitEv(in_stack_00000000);
  puVar2 = (undefined1 *)register0x00000008;
  FUN_108820c58();
  func_0x000107c29bd8();
  FUN_108820d20(&stack0x00000010);
  return puVar2;
}



/* Entry: 108820b08; end: 108820b0b;  */

void FUN_108820b08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a75150;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108820b0c; end: 108820b1f;  */

void FUN_108820b0c(void)

{
  FUN_108820c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820b20; end: 108820b2b;  */

void FUN_108820b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108820b2c; end: 108820b9f;  */

void FUN_108820b2c(void)

{
  FUN_108820ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820ba0; end: 108820bcb;  */

undefined8 * FUN_108820ba0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a751a0;
  func_0x000107c29c1c(param_1 + 1);
  return param_1;
}



/* Entry: 108820bcc; end: 108820be3;  */

void FUN_108820bcc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_38 [40];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = FUN_108820be4;
    func_0x00010882fcfc();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c33990();
  *(long *)((long)register0x00000008 + -0x30) = lVar2 + 0x18;
  *(undefined1 *)((long)register0x00000008 + -0x28) = 1;
  __ZNSt3__15mutex4lockEv();
  lVar2 = unaff_x19;
  func_0x000107c28058();
  if ((int)lVar2 != 0) {
    func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108820c40);
    (*pcVar1)();
  }
  *(undefined1 *)(unaff_x19 + 0x8c) = *unaff_x20;
  func_0x000107c33b2c();
  func_0x000107c2798c((undefined1 *)((long)register0x00000008 + -0x30));
  return;
}



/* Entry: 108820be4; end: 108820c4b;  */

void FUN_108820be4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  undefined1 *unaff_x20;
  long lStack_30;
  undefined1 uStack_28;
  
  func_0x000107c33990();
  lStack_30 = param_1 + 0x18;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar2 = unaff_x19;
  func_0x000107c28058();
  if ((int)lVar2 == 0) {
    *(undefined1 *)(unaff_x19 + 0x8c) = *unaff_x20;
    func_0x000107c33b2c();
    func_0x000107c2798c(&lStack_30);
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108820c40);
  (*pcVar1)();
}



/* Entry: 108820c4c; end: 108820c57;  */

void FUN_108820c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a75150;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108820c58; end: 108820c9f;  */

undefined8 FUN_108820c58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  *param_1 = 0;
  uStack_28 = uVar1;
  FUN_108820ca0(uVar1);
  func_0x00010538d0f8(&uStack_28);
  return uVar1;
}



/* Entry: 108820ca0; end: 108820d1f;  */

undefined1 FUN_108820ca0(void)

{
  undefined1 uVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x000107c33b14();
  func_0x000107c33a20();
  __ZNSt3__15mutex4lockEv();
  func_0x000107c33c34();
  lVar3 = *(long *)(unaff_x19 + 0x10);
  uStack_48 = 0;
  func_0x000107c33aa0();
  if (lVar3 == 0) {
    uVar1 = *(undefined1 *)(unaff_x19 + 0x8c);
    func_0x000107c33be0();
    return uVar1;
  }
  func_0x00010882fd98();
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108820d08);
  (*pcVar2)();
}



/* Entry: 108820d20; end: 108820d43;  */

void FUN_108820d20(long param_1)

{
  func_0x000107c3398c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108820d44; end: 108820d57;  */

void FUN_108820d44(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_DAT_110a751e8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108820d58; end: 108820d6b;  */

void FUN_108820d58(void)

{
  FUN_108820e24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820d6c; end: 108820d77;  */

void FUN_108820d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108820d78; end: 108820d8b;  */

void FUN_108820d78(void)

{
  FUN_108820de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820d8c; end: 108820de3;  */

void FUN_108820d8c(void)

{
  long alStack_40 [2];
  long lStack_30;
  
  func_0x000107c33c24();
  if (alStack_40[0] != 0) {
    func_0x000107c33a5c();
    func_0x000107c33b3c();
  }
  if (lStack_30 != 0) {
    func_0x000107c33a5c();
    func_0x000107c33b3c();
  }
  func_0x000107c29c24(alStack_40);
  return;
}



/* Entry: 108820de4; end: 108820e23;  */

long FUN_108820de4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010882f3a0(&PTR_DAT_110a75278);
  func_0x000107c27a68(lVar1 + 0x58);
  func_0x000107c27a68(param_1 + 0x48);
  __ZNSt3__15mutexD1Ev();
  return param_1;
}



/* Entry: 108820e24; end: 108820e33;  */

void FUN_108820e24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a75228;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108820e34; end: 108820e47;  */

void FUN_108820e34(void)

{
  func_0x000108820e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820e48; end: 108820e5f;  */

void FUN_108820e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108820e60; end: 108820e73;  */

void FUN_108820e60(void)

{
  func_0x000108820e7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820e74; end: 108820e87;  */

void FUN_108820e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108820e88; end: 108820ea3;  */

void FUN_108820e88(long param_1)

{
  func_0x000107c29b60();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 108820ea4; end: 108820ea7;  */

void FUN_108820ea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a75360;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108820ea8; end: 108820ebb;  */

void FUN_108820ea8(void)

{
  func_0x000108820ec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820ebc; end: 108820ed3;  */

void FUN_108820ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108820ed4; end: 108820efb;  */

void FUN_108820ed4(void)

{
  FUN_1088213e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820efc; end: 10882111f;  */

void FUN_108820efc(code *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **in_register_00005008;
  long lStack_2e0;
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [48];
  undefined4 uStack_270;
  code *pcStack_260;
  undefined **ppuStack_258;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [208];
  code *pcStack_a0;
  undefined **ppuStack_98;
  
  func_0x00010882eaac();
  func_0x000107c3380c();
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x00010882f400(*(undefined8 *)(param_2 + 0x10));
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28c08(auStack_1d0);
  func_0x000107c28c28(auStack_1b8);
  func_0x000107c28c18(auStack_1a0);
  func_0x00010882fb5c();
  func_0x000107c28c50(auStack_170,param_7);
  func_0x000107c28150();
  lVar2 = *(long *)(lVar3 + 0x10);
  func_0x00010882f10c();
  lVar4 = *(long *)(lVar2 + 0x70);
  pcStack_a0 = FUN_108821268;
  ppuStack_98 = &PTR_FUN_110a75438;
  func_0x000107c33bc8();
  func_0x00010882edd8();
  func_0x000107c28c08();
  func_0x000107c28c28(unaff_x20 + 0x28,auStack_1b8);
  func_0x000107c28c18(unaff_x20 + 0x40,auStack_1a0);
  func_0x00010882fba0();
  func_0x000107c28c50(unaff_x20 + 0x70,auStack_170);
  func_0x00010882fc1c();
  func_0x000107c33880(ppuStack_98);
  func_0x00010882efb0();
  uVar1 = (undefined4)param_4;
  if (lVar4 == 0) {
    in_register_00005008 = *(undefined ***)(lVar3 + 0x18);
    param_1 = *(code **)(lVar3 + 0x10);
    pcStack_a0 = param_1;
    ppuStack_98 = in_register_00005008;
    if (*(long *)(lVar3 + 0x18) != 0) {
      do {
        func_0x000107c3383c();
        uVar1 = (undefined4)param_4;
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c339ac();
    (*extraout_x8_01)();
    func_0x00010882f95c();
  }
  func_0x00010882131c();
  func_0x000107c337a8(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882f95c();
    func_0x00010882131c(auStack_1e0);
    func_0x00010882edf0();
    func_0x00010882e314();
    func_0x00010882f2d4();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x000108686d68(auStack_2a0);
    uStack_270 = uVar1;
    func_0x000107c28150();
    func_0x00010882fb2c();
    func_0x00010882f10c();
    lVar3 = *(long *)(lVar2 + 0x70);
    pcStack_260 = FUN_108821358;
    ppuStack_258 = &PTR_FUN_110a75450;
    func_0x000107c33ab0();
    func_0x00010882edc4();
    func_0x000108686d68();
    *(undefined4 *)(unaff_x20 + 0x40) = uStack_270;
    func_0x000107c28154(lVar2 + 0x48,&pcStack_260);
    func_0x00010882e688(ppuStack_258);
    func_0x00010882efb0();
    if (lVar3 == 0) {
      func_0x00010882ebe8();
      pcStack_260 = param_1;
      ppuStack_258 = in_register_00005008;
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c339ac();
      (*extraout_x8_04)();
      func_0x000107c27e74(&pcStack_260);
    }
    FUN_1088213c4();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107c27e74(&pcStack_260);
      FUN_1088213c4(auStack_2b0);
      func_0x00010882edf0();
      func_0x00010882ed48();
      FUN_1088212a8();
      if (lStack_2e0 != 0) {
        func_0x000107c339ac();
        func_0x00010882f5a4();
      }
      func_0x00010882f49c();
      return;
    }
    return;
  }
  return;
}



/* Entry: 108821120; end: 108821267;  */

void FUN_108821120(code *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x22;
  long lVar1;
  undefined **in_register_00005008;
  long lStack_100;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [48];
  undefined4 uStack_90;
  code *pcStack_80;
  undefined **ppuStack_78;
  
  func_0x00010882e314();
  func_0x00010882f2d4();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000108686d68(auStack_c0);
  uStack_90 = param_4;
  func_0x000107c28150();
  func_0x00010882fb2c();
  func_0x00010882f10c();
  lVar1 = *(long *)(unaff_x22 + 0x70);
  pcStack_80 = FUN_108821358;
  ppuStack_78 = &PTR_FUN_110a75450;
  func_0x000107c33ab0();
  func_0x00010882edc4();
  func_0x000108686d68();
  *(undefined4 *)(unaff_x20 + 0x40) = uStack_90;
  func_0x000107c28154(unaff_x22 + 0x48,&pcStack_80);
  func_0x00010882e688(ppuStack_78);
  func_0x00010882efb0();
  if (lVar1 == 0) {
    func_0x00010882ebe8();
    pcStack_80 = param_1;
    ppuStack_78 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c339ac();
    (*extraout_x8_01)();
    func_0x000107c27e74(&pcStack_80);
  }
  FUN_1088213c4();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_80);
    FUN_1088213c4(auStack_d0);
    func_0x00010882edf0();
    func_0x00010882ed48();
    FUN_1088212a8();
    if (lStack_100 != 0) {
      func_0x000107c339ac();
      func_0x00010882f5a4();
    }
    func_0x00010882f49c();
    return;
  }
  return;
}



/* Entry: 108821268; end: 1088212a7;  */

void FUN_108821268(void)

{
  undefined8 uStack_30;
  
  func_0x00010882ed48();
  FUN_1088212a8();
  if (uStack_30 != 0) {
    func_0x000107c339ac();
    func_0x00010882f5a4();
  }
  func_0x00010882f49c();
  return;
}



/* Entry: 1088212a8; end: 1088212d3;  */

void FUN_1088212a8(long param_1)

{
  long unaff_x19;
  
  func_0x00010882faa4();
  if (param_1 != 0) {
    func_0x00010882fcd0();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010882feac();
    }
  }
  return;
}



/* Entry: 1088212d4; end: 1088212f3;  */

void FUN_1088212d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010882131c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088212f4; end: 1088212f7;  */

void FUN_1088212f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088212f8; end: 108821357;  */

void FUN_1088212f8(long param_1)

{
  func_0x000107c3398c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108821358; end: 10882139f;  */

void FUN_108821358(void)

{
  code *extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010882ed48();
  FUN_1088212a8();
  if (uStack_30 != 0) {
    func_0x000107c33a5c();
    (*extraout_x8)();
  }
  func_0x00010882f49c();
  return;
}



/* Entry: 1088213a0; end: 1088213bf;  */

void FUN_1088213a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1088213c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088213c0; end: 1088213c3;  */

void FUN_1088213c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088213c4; end: 1088213e3;  */

long FUN_1088213c4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33b14();
  func_0x000107c279dc();
  lVar1 = unaff_x19;
  func_0x000107c3398c();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1088213e4; end: 1088213f3;  */

void FUN_1088213e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a753b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1088213f4; end: 108821407;  */

void FUN_1088213f4(void)

{
  FUN_108821784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821408; end: 108821413;  */

void FUN_108821408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821414; end: 108821427;  */

void FUN_108821414(void)

{
  func_0x000107c29c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821428; end: 1088216e3;  */

void FUN_108821428(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 in_x5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  long lVar6;
  long lStack_1d0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [48];
  undefined8 auStack_130 [26];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  code *pcStack_40;
  undefined **ppuStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x000107c33c58();
  func_0x00010882eaac();
  plVar4 = param_2;
  func_0x000107c3380c();
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_8 = extraout_x8;
  func_0x000104bf1c14(&uStack_60,(plVar4[1] - *plVar4) / 0x378);
  lVar5 = param_2[1];
  for (lVar6 = *param_2; uVar1 = lVar6 == lVar5, !(bool)uVar1; lVar6 = lVar6 + 0x378) {
    if (((*(char *)(lVar6 + 0x350) != '\x01') || ((*(byte *)(lVar6 + 0x340) & 1) == 0)) ||
       (*(char *)(lVar6 + 0x328) == '\x01')) {
      func_0x0001086feeec(&uStack_60,lVar6);
    }
  }
  lVar6 = *(long *)(param_1 + 0x18);
  uStack_198 = *(undefined8 *)(param_1 + 0x10);
  uStack_1a0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  uStack_188 = uStack_58;
  uStack_190 = uStack_60;
  uStack_180 = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  func_0x000107c28c28(auStack_178);
  func_0x000107c28c18(auStack_160);
  func_0x00010882fb5c();
  puVar2 = auStack_130;
  func_0x000107c28c50(puVar2,in_x5);
  func_0x000107c28150();
  lVar5 = *(long *)(lVar6 + 0x10);
  puVar3 = puVar2;
  func_0x00010882f10c();
  lVar5 = *(long *)(lVar5 + 0x70);
  pcStack_40 = FUN_1088216e4;
  ppuStack_38 = &PTR_FUN_110a75500;
  func_0x000107c33bc8();
  puVar3[1] = uStack_198;
  *puVar3 = uStack_1a0;
  puVar3[3] = uStack_188;
  puVar3[2] = uStack_190;
  uStack_1a0 = 0;
  uStack_198 = 0;
  puVar3[4] = uStack_180;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_190 = 0;
  func_0x000107c28c28(puVar3 + 5,auStack_178);
  func_0x000107c28c18(puVar3 + 8,auStack_160);
  func_0x00010882fba0();
  func_0x000107c28c50(puVar3 + 0xe,auStack_130);
  puStack_30 = puVar3;
  puStack_10 = puVar2;
  func_0x00010882fc1c();
  func_0x000107c33880(ppuStack_38);
  func_0x00010882efb0();
  if (lVar5 == 0) {
    ppuStack_38 = *(undefined ***)(lVar6 + 0x18);
    pcStack_40 = *(code **)(lVar6 + 0x10);
    if (*(long *)(lVar6 + 0x18) != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c339ac();
    (*extraout_x8_00)();
    func_0x00010882f95c();
  }
  FUN_108821748(&uStack_1a0);
  func_0x000107c27b40();
  func_0x000107c337a8(uStack_8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010882f95c();
  FUN_108821748(&uStack_1a0);
  func_0x000107c27b40(&uStack_60);
  func_0x00010882edf0();
  func_0x00010882ed48();
  FUN_1088212a8();
  if (lStack_1d0 != 0) {
    func_0x000107c339ac();
    func_0x00010882f5a4();
  }
  func_0x00010882f49c();
  return;
}



/* Entry: 1088216e4; end: 108821723;  */

void FUN_1088216e4(void)

{
  undefined8 uStack_30;
  
  func_0x00010882ed48();
  FUN_1088212a8();
  if (uStack_30 != 0) {
    func_0x000107c339ac();
    func_0x00010882f5a4();
  }
  func_0x00010882f49c();
  return;
}



/* Entry: 108821724; end: 108821743;  */

void FUN_108821724(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108821748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108821744; end: 108821747;  */

void FUN_108821744(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108821748; end: 108821783;  */

long FUN_108821748(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882fd50();
  func_0x000107c28c5c(unaff_x19 + 0x58);
  func_0x000107c27b3c(unaff_x19 + 0x40);
  func_0x000107c28c60(unaff_x19 + 0x28);
  func_0x000107c27b40(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x000107c3398c();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 108821784; end: 108821793;  */

void FUN_108821784(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a75478;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108821794; end: 1088217a7;  */

void FUN_108821794(void)

{
  func_0x0001088217b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088217a8; end: 1088217bf;  */

void FUN_1088217a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088217c0; end: 1088217d3;  */

void FUN_1088217c0(void)

{
  func_0x0001088217dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088217d4; end: 1088217eb;  */

void FUN_1088217d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088217ec; end: 1088217ff;  */

void FUN_1088217ec(void)

{
  func_0x000108821808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821800; end: 108821817;  */

void FUN_108821800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821818; end: 10882182b;  */

void FUN_108821818(void)

{
  func_0x000108821834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882182c; end: 108821843;  */

void FUN_10882182c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821844; end: 108821857;  */

void FUN_108821844(void)

{
  func_0x000108821860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821858; end: 10882186f;  */

void FUN_108821858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821870; end: 108821883;  */

void FUN_108821870(void)

{
  func_0x00010882188c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821884; end: 10882189b;  */

void FUN_108821884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10882189c; end: 1088218af;  */

void FUN_10882189c(void)

{
  func_0x0001088218b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088218b0; end: 1088218c3;  */

void FUN_1088218b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088218c4; end: 1088218e7;  */

void FUN_1088218c4(long param_1)

{
  func_0x000107c3398c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1088218e8; end: 1088218eb;  */

void FUN_1088218e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a75758;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1088218ec; end: 1088218ff;  */

void FUN_1088218ec(void)

{
  FUN_10882192c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821900; end: 108821907;  */

void FUN_108821900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821908; end: 10882192b;  */

void FUN_108821908(long param_1)

{
  func_0x000107c3398c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10882192c; end: 108821937;  */

void FUN_10882192c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a75758;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108821938; end: 10882197f;  */

void FUN_108821938(long param_1)

{
  func_0x000107c3398c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108821980; end: 108821983;  */

void FUN_108821980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a757a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108821984; end: 108821997;  */

void FUN_108821984(void)

{
  func_0x0001088219a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821998; end: 1088219af;  */

void FUN_108821998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088219b0; end: 1088219c3;  */

void FUN_1088219b0(void)

{
  FUN_1088219e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088219c4; end: 1088219e3;  */

void FUN_1088219c4(void)

{
  long unaff_x19;
  
  func_0x000107c33a7c();
  func_0x000107c290c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1088219e4; end: 1088219f7;  */

void FUN_1088219e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088219f8; end: 108821a0b;  */

void FUN_1088219f8(void)

{
  func_0x000108821a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821a0c; end: 108821a23;  */

void FUN_108821a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821a24; end: 108821a37;  */

void FUN_108821a24(void)

{
  FUN_108821a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821a38; end: 108821a57;  */

void FUN_108821a38(void)

{
  long unaff_x19;
  
  func_0x000107c33a7c();
  func_0x000107c2870c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(unaff_x19 + 0x18);
  return;
}



/* Entry: 108821a58; end: 108821a6b;  */

void FUN_108821a58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821a6c; end: 108821a7f;  */

void FUN_108821a6c(void)

{
  func_0x000108821a88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821a80; end: 108821a97;  */

void FUN_108821a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821a98; end: 108821aab;  */

void FUN_108821a98(void)

{
  FUN_108821b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821aac; end: 108821b23;  */

void FUN_108821aac(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 0x50);
  while (lVar1 != 0) {
    func_0x00010882fd2c();
    func_0x00010882ee14();
    lVar1 = unaff_x21;
  }
  lVar1 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x28);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000108723158(lVar1);
    func_0x00010882ee14();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821b24; end: 108821b37;  */

void FUN_108821b24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821b38; end: 108821b4b;  */

void FUN_108821b38(void)

{
  func_0x000108821b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821b4c; end: 108821b63;  */

void FUN_108821b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821b64; end: 108821b77;  */

void FUN_108821b64(void)

{
  FUN_108821bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821b78; end: 108821bb3;  */

long FUN_108821b78(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33a7c();
  func_0x000107c28ab8();
  func_0x000107c28ab4(unaff_x19 + 0x48);
  func_0x000107c28800(unaff_x19 + 0x38);
  func_0x000107c28808(unaff_x19 + 0x28);
  lVar1 = unaff_x19 + 0x18;
  func_0x000100450bd8();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108821bb4; end: 108821bc7;  */

void FUN_108821bb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821bc8; end: 108821bdb;  */

void FUN_108821bc8(void)

{
  func_0x000108821be4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108821bdc; end: 108821bf3;  */

void FUN_108821bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108821bf4; end: 108821c07;  */

void FUN_108821bf4(void)

{
  func_0x000108821c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


