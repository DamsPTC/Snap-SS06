/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8f3a90; end: 10b8f3a93;  */

void FUN_10b8f3a90(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x29;
  code *unaff_x30;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  code *in_stack_00000038;
  undefined **in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_000000a0;
  code *in_stack_000000a8;
  
  while( true ) {
    func_0x00010b8feb90();
    plVar1 = param_1;
    puVar4 = param_4;
    in_stack_000000a0 = unaff_x29;
    in_stack_000000a8 = unaff_x30;
    func_0x00010b8fd474();
    in_stack_0000001c = 0;
    in_stack_00000018._3_1_ = 0;
    in_stack_00000010 = 0;
    in_stack_00000038 = FUN_10b8f92c8;
    in_stack_00000040 = &PTR_FUN_110d738a0;
    func_0x00010b8fdd04();
    *plVar1 = (long)&stack0x00000018 + 3;
    plVar1[1] = (long)param_1;
    plVar1[2] = (long)param_3;
    plVar1[3] = (long)param_4;
    plVar1[4] = (long)param_2;
    plVar1[5] = (long)&stack0x0000001c;
    param_2 = &stack0x00000010;
    puVar7 = &stack0x00000038;
    plVar2 = param_1;
    in_stack_00000048 = plVar1;
    FUN_10b8e3408(param_1);
    func_0x00010b8fd604(in_stack_00000040);
    func_0x00010b8fe030();
    if ((in_stack_00000018._3_1_ & 1) == 0) {
      in_ZR = *(char *)((long)param_1 + 0x369) == '\0';
      uVar5 = 100;
      if ((bool)in_ZR) {
        uVar5 = 0;
      }
      puVar7 = (undefined8 *)(ulong)uVar5;
      uVar6 = param_4[1];
      func_0x000107c31084();
      func_0x00010b8fe15c();
      in_stack_00000020 = param_3;
      in_stack_00000028 = extraout_x8;
      func_0x000107c2793c(&UNK_10f7cc868);
      puVar4 = &stack0x00000020;
      func_0x00010b8fdf54(&stack0x00000038);
      func_0x000107c31080(&stack0x00000008,plVar2,&stack0x00000038);
      FUN_10b99f6a4(&stack0x00000020,&stack0x00000008);
      param_2 = &stack0x00000020;
      FUN_10b99ff08(uVar6);
      func_0x00010b8fe620();
      func_0x00010b8fd9e0();
      func_0x00010b8fe0f8();
    }
    param_4 = puVar4;
    param_3 = puVar7;
    uVar3 = (ulong)in_stack_0000001c;
    func_0x00010b8fd3bc(in_stack_00000068);
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f3bc4;
    ___stack_chk_fail();
    param_1 = (long *)(uVar3 - 0x20);
    unaff_x29 = &stack0x000000a0;
  }
  return;
}



/* Entry: 10b8f3a94; end: 10b8f3bc3;  */

void FUN_10b8f3a94(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x29;
  code *unaff_x30;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  code *in_stack_00000038;
  undefined **in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_000000a0;
  code *in_stack_000000a8;
  
  while( true ) {
    func_0x00010b8feb90();
    plVar1 = param_1;
    puVar4 = param_4;
    in_stack_000000a0 = unaff_x29;
    in_stack_000000a8 = unaff_x30;
    func_0x00010b8fd474();
    in_stack_0000001c = 0;
    in_stack_00000018._3_1_ = 0;
    in_stack_00000010 = 0;
    in_stack_00000038 = FUN_10b8f92c8;
    in_stack_00000040 = &PTR_FUN_110d738a0;
    func_0x00010b8fdd04();
    *plVar1 = (long)&stack0x00000018 + 3;
    plVar1[1] = (long)param_1;
    plVar1[2] = (long)param_3;
    plVar1[3] = (long)param_4;
    plVar1[4] = (long)param_2;
    plVar1[5] = (long)&stack0x0000001c;
    param_2 = &stack0x00000010;
    puVar7 = &stack0x00000038;
    plVar2 = param_1;
    in_stack_00000048 = plVar1;
    FUN_10b8e3408(param_1);
    func_0x00010b8fd604(in_stack_00000040);
    func_0x00010b8fe030();
    if ((in_stack_00000018._3_1_ & 1) == 0) {
      in_ZR = *(char *)((long)param_1 + 0x369) == '\0';
      uVar5 = 100;
      if ((bool)in_ZR) {
        uVar5 = 0;
      }
      puVar7 = (undefined8 *)(ulong)uVar5;
      uVar6 = param_4[1];
      func_0x000107c31084();
      func_0x00010b8fe15c();
      in_stack_00000020 = param_3;
      in_stack_00000028 = extraout_x8;
      func_0x000107c2793c(&UNK_10f7cc868);
      puVar4 = &stack0x00000020;
      func_0x00010b8fdf54(&stack0x00000038);
      func_0x000107c31080(&stack0x00000008,plVar2,&stack0x00000038);
      FUN_10b99f6a4(&stack0x00000020,&stack0x00000008);
      param_2 = &stack0x00000020;
      FUN_10b99ff08(uVar6);
      func_0x00010b8fe620();
      func_0x00010b8fd9e0();
      func_0x00010b8fe0f8();
    }
    param_4 = puVar4;
    param_3 = puVar7;
    uVar3 = (ulong)in_stack_0000001c;
    func_0x00010b8fd3bc(in_stack_00000068);
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f3bc4;
    ___stack_chk_fail();
    param_1 = (long *)(uVar3 - 0x20);
    unaff_x29 = &stack0x000000a0;
  }
  return;
}



/* Entry: 10b8f3bc4; end: 10b8f3bcb;  */

void FUN_10b8f3bc4(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x29;
  code *unaff_x30;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  code *in_stack_00000038;
  undefined **in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_000000a0;
  code *in_stack_000000a8;
  
  while( true ) {
    plVar3 = (long *)(param_1 - 0x20);
    func_0x00010b8feb90();
    plVar1 = plVar3;
    puVar4 = param_4;
    in_stack_000000a0 = unaff_x29;
    in_stack_000000a8 = unaff_x30;
    func_0x00010b8fd474();
    in_stack_0000001c = 0;
    in_stack_00000018._3_1_ = 0;
    in_stack_00000010 = 0;
    in_stack_00000038 = FUN_10b8f92c8;
    in_stack_00000040 = &PTR_FUN_110d738a0;
    func_0x00010b8fdd04();
    *plVar1 = (long)&stack0x00000018 + 3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = (long)param_3;
    plVar1[3] = (long)param_4;
    plVar1[4] = (long)param_2;
    plVar1[5] = (long)&stack0x0000001c;
    param_2 = &stack0x00000010;
    puVar7 = &stack0x00000038;
    plVar2 = plVar3;
    in_stack_00000048 = plVar1;
    FUN_10b8e3408(plVar3);
    func_0x00010b8fd604(in_stack_00000040);
    func_0x00010b8fe030();
    if ((in_stack_00000018._3_1_ & 1) == 0) {
      in_ZR = *(char *)((long)plVar3 + 0x369) == '\0';
      uVar5 = 100;
      if ((bool)in_ZR) {
        uVar5 = 0;
      }
      puVar7 = (undefined8 *)(ulong)uVar5;
      uVar6 = param_4[1];
      func_0x000107c31084();
      func_0x00010b8fe15c();
      in_stack_00000020 = param_3;
      in_stack_00000028 = extraout_x8;
      func_0x000107c2793c(&UNK_10f7cc868);
      puVar4 = &stack0x00000020;
      func_0x00010b8fdf54(&stack0x00000038);
      func_0x000107c31080(&stack0x00000008,plVar2,&stack0x00000038);
      FUN_10b99f6a4(&stack0x00000020,&stack0x00000008);
      param_2 = &stack0x00000020;
      FUN_10b99ff08(uVar6);
      func_0x00010b8fe620();
      func_0x00010b8fd9e0();
      func_0x00010b8fe0f8();
    }
    param_4 = puVar4;
    param_3 = puVar7;
    param_1 = (ulong)in_stack_0000001c;
    func_0x00010b8fd3bc(in_stack_00000068);
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f3bc4;
    ___stack_chk_fail();
    unaff_x29 = &stack0x000000a0;
  }
  return;
}



/* Entry: 10b8f3bcc; end: 10b8f3c7b;  */

/* WARNING: Possible PIC construction at 0x00010b8f3c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f3c3c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f3c50) */
/* WARNING: Removing unreachable block (ram,0x00010b8f3c48) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd8e8) */

void FUN_10b8f3bcc(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_50;
  
  func_0x00010b8fd408();
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = param_1;
  if (*param_2 != 0) {
    do {
      func_0x00010b8fdb28();
      uStack_78 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b8fe57c(auStack_70);
  func_0x00010b8fde00(FUN_10b8f93f8);
  FUN_10b8f9464();
  func_0x00010b8fde88();
  func_0x00010b8fd640(uStack_50);
  func_0x00010b8fdf68(&uStack_80);
  FUN_10b9a8d98();
  func_0x000107c278f4(unaff_x19 + 8);
  return;
}



/* Entry: 10b8f3c7c; end: 10b8f3c83;  */

/* WARNING: Possible PIC construction at 0x00010b8f3c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f3c3c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f3c50) */
/* WARNING: Removing unreachable block (ram,0x00010b8f3c48) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd8e8) */

void FUN_10b8f3c7c(long param_1,long *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_50;
  
  param_1 = param_1 + -0x20;
  func_0x00010b8fd408();
  uStack_60 = 0;
  uStack_78 = 0;
  lStack_80 = param_1;
  if (*param_2 != 0) {
    do {
      func_0x00010b8fdb28();
      uStack_78 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b8fe57c(auStack_70);
  func_0x00010b8fde00(FUN_10b8f93f8);
  FUN_10b8f9464();
  func_0x00010b8fde88();
  func_0x00010b8fd640(uStack_50);
  func_0x00010b8fdf68(&lStack_80);
  FUN_10b9a8d98();
  func_0x000107c278f4(unaff_x19 + 8);
  return;
}



/* Entry: 10b8f3c84; end: 10b8f3d3b;  */

void FUN_10b8f3c84(long param_1,long *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined4 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar1 = (long *)((long)register0x00000008 + -0x60);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fd430();
    uVar2 = SUB84(param_3,0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    unaff_x19 = *param_2;
    if (unaff_x19 == 0) {
      *(code **)((long)register0x00000008 + -0x58) = FUN_10b8f94f8;
      *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_FUN_110d738e0;
    }
    else {
      do {
        func_0x00010b8fd810();
      } while (extraout_w10 != 0);
      *(code **)((long)register0x00000008 + -0x58) = FUN_10b8f94f8;
      *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_FUN_110d738e0;
      do {
        func_0x00010b8fd810();
        uVar2 = SUB84(param_3,0);
      } while (extraout_w10_00 != 0);
    }
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(long *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined4 *)((long)register0x00000008 + -0x40) = uVar2;
    *(long *)((long)register0x00000008 + -0x38) = param_1;
    param_3 = (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x0001080d3888();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x50))(unaff_x20);
    param_1 = unaff_x19;
    func_0x000107c278f8();
    func_0x00010b8fe1dc();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f3d3c;
    ___stack_chk_fail();
    param_1 = param_1 + -0x20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = plVar1;
  }
  return;
}



/* Entry: 10b8f3d3c; end: 10b8f3d43;  */

void FUN_10b8f3d3c(long param_1,long *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined4 uVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -0x20;
    plVar1 = (long *)((long)register0x00000008 + -0x60);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fd430();
    uVar2 = SUB84(param_3,0);
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    unaff_x19 = *param_2;
    if (unaff_x19 == 0) {
      *(code **)((long)register0x00000008 + -0x58) = FUN_10b8f94f8;
      *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_FUN_110d738e0;
    }
    else {
      do {
        func_0x00010b8fd810();
      } while (extraout_w10 != 0);
      *(code **)((long)register0x00000008 + -0x58) = FUN_10b8f94f8;
      *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_FUN_110d738e0;
      do {
        func_0x00010b8fd810();
        uVar2 = SUB84(param_3,0);
      } while (extraout_w10_00 != 0);
    }
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(long *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined4 *)((long)register0x00000008 + -0x40) = uVar2;
    *(long *)((long)register0x00000008 + -0x38) = param_1;
    param_3 = (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x0001080d3888();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x50))(unaff_x20);
    param_1 = unaff_x19;
    func_0x000107c278f8();
    func_0x00010b8fe1dc();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f3d3c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = plVar1;
  }
  return;
}



/* Entry: 10b8f3d44; end: 10b8f3e3b;  */

void FUN_10b8f3d44(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined8 unaff_x19;
  undefined4 uVar5;
  undefined8 *unaff_x29;
  code *unaff_x30;
  long in_stack_00000008;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  long in_stack_00000030;
  code *in_stack_00000038;
  undefined **in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_000000a0;
  code *in_stack_000000a8;
  
  while( true ) {
    uVar4 = SUB84(param_3,0);
    func_0x00010b8feb90();
    in_stack_000000a0 = unaff_x29;
    in_stack_000000a8 = unaff_x30;
    func_0x00010b8fd408();
    in_stack_00000068 = extraout_x8;
    FUN_10b93d070(*(undefined8 *)(param_1 + 0x88));
    func_0x00010b8fe384(&stack0x00000038);
    if (in_stack_00000038 == (code *)0x0) {
      uVar5 = 0;
    }
    else {
      func_0x00010b8fe96c();
      (*extraout_x9)(&stack0x00000008);
      if (in_stack_00000008 == 0) {
        uVar5 = 0;
      }
      else {
        lVar2 = in_stack_00000008;
        FUN_10b94d6d4();
        uVar5 = (undefined4)lVar2;
      }
      func_0x00010b8fb1f8(in_stack_00000008);
    }
    func_0x00010b8fe2fc();
    in_stack_00000030 = 0;
    puVar3 = &stack0x00000008;
    func_0x0001080cbe58(puVar3,param_2);
    in_stack_00000038 = FUN_10b8f967c;
    in_stack_00000040 = &PTR_FUN_110d73900;
    in_stack_00000020 = uVar4;
    in_stack_00000024 = uVar5;
    func_0x00010b8fdb18();
    func_0x0001080cbe58();
    uVar1 = CONCAT44(in_stack_00000024,in_stack_00000020);
    puVar3[4] = unaff_x19;
    puVar3[3] = uVar1;
    param_2 = &stack0x00000030;
    param_3 = &stack0x00000038;
    in_stack_00000048 = puVar3;
    func_0x00010b8fdf9c();
    func_0x00010b8fd604(in_stack_00000040);
    func_0x000104bfe1e0(&stack0x00000008);
    param_1 = in_stack_00000030;
    func_0x000105276914();
    func_0x00010b8fd3bc(in_stack_00000068);
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f3e3c;
    ___stack_chk_fail();
    param_1 = param_1 + -0x20;
    unaff_x29 = &stack0x000000a0;
  }
  return;
}



/* Entry: 10b8f3e3c; end: 10b8f3e43;  */

void FUN_10b8f3e3c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined8 unaff_x19;
  undefined4 uVar5;
  undefined8 *unaff_x29;
  code *unaff_x30;
  long in_stack_00000008;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  long in_stack_00000030;
  code *in_stack_00000038;
  undefined **in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_000000a0;
  code *in_stack_000000a8;
  
  while( true ) {
    uVar4 = SUB84(param_3,0);
    param_1 = param_1 + -0x20;
    func_0x00010b8feb90();
    in_stack_000000a0 = unaff_x29;
    in_stack_000000a8 = unaff_x30;
    func_0x00010b8fd408();
    in_stack_00000068 = extraout_x8;
    FUN_10b93d070(*(undefined8 *)(param_1 + 0x88));
    func_0x00010b8fe384(&stack0x00000038);
    if (in_stack_00000038 == (code *)0x0) {
      uVar5 = 0;
    }
    else {
      func_0x00010b8fe96c();
      (*extraout_x9)(&stack0x00000008);
      if (in_stack_00000008 == 0) {
        uVar5 = 0;
      }
      else {
        lVar2 = in_stack_00000008;
        FUN_10b94d6d4();
        uVar5 = (undefined4)lVar2;
      }
      func_0x00010b8fb1f8(in_stack_00000008);
    }
    func_0x00010b8fe2fc();
    in_stack_00000030 = 0;
    puVar3 = &stack0x00000008;
    func_0x0001080cbe58(puVar3,param_2);
    in_stack_00000038 = FUN_10b8f967c;
    in_stack_00000040 = &PTR_FUN_110d73900;
    in_stack_00000020 = uVar4;
    in_stack_00000024 = uVar5;
    func_0x00010b8fdb18();
    func_0x0001080cbe58();
    uVar1 = CONCAT44(in_stack_00000024,in_stack_00000020);
    puVar3[4] = unaff_x19;
    puVar3[3] = uVar1;
    param_2 = &stack0x00000030;
    param_3 = &stack0x00000038;
    in_stack_00000048 = puVar3;
    func_0x00010b8fdf9c();
    func_0x00010b8fd604(in_stack_00000040);
    func_0x000104bfe1e0(&stack0x00000008);
    param_1 = in_stack_00000030;
    func_0x000105276914();
    func_0x00010b8fd3bc(in_stack_00000068);
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f3e3c;
    ___stack_chk_fail();
    unaff_x29 = &stack0x000000a0;
  }
  return;
}



/* Entry: 10b8f3e44; end: 10b8f3eb3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b8f3e44(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 in_x3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long alStack_b0 [2];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [6];
  
  func_0x00010b8fd408();
  uStack_60 = 0;
  FUN_10b9a8f04(auStack_70);
  uStack_58 = 0x10b8f98e4;
  puVar2 = auStack_50;
  func_0x00010b8f9968(puVar2,auStack_70);
  puVar3 = &uStack_60;
  func_0x00010b8fdf9c();
  func_0x00010b8fd640(auStack_50[0]);
  func_0x00010b8fe0e8();
  func_0x00010b8fe030();
  func_0x00010b8fd3a4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar1 = puVar3[1];
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
    }
    if (uVar1 == 0) {
      alStack_b0[1] = 0;
    }
    else {
      func_0x000107c31084();
      func_0x000107c31080(alStack_b0 + 1);
    }
    uStack_c0 = 0;
    puStack_b8 = (undefined8 *)0x0;
    func_0x00010b8fe1e4(alStack_b0,puVar2[0x12],&puStack_b8,&uStack_c0,in_x3,alStack_b0 + 1);
    func_0x0001080d5b98(uStack_c0);
    puVar3 = puStack_b8;
    func_0x000108100600();
    uVar4 = puVar2[0x12];
    func_0x00010b8fdd04();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110d73f48;
    puVar2 = puVar3 + 3;
    *puVar2 = &PTR_DAT_110d73f98;
    puVar3[4] = uVar4;
    if ((alStack_b0[0] != 0) && (*(long *)(alStack_b0[0] + 0x10) != 0)) {
      do {
        func_0x00010b8fda68();
        puVar2 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    puVar3[5] = alStack_b0[0];
    *extraout_x8 = puVar2;
    extraout_x8[1] = puVar3;
    func_0x000105276914(alStack_b0[0]);
    func_0x00010b8fdbd0();
    return;
  }
  return;
}



/* Entry: 10b8f3eb4; end: 10b8f3f93;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b8f3eb4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  int extraout_w11;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long alStack_40 [2];
  
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 == 0) {
    alStack_40[1] = 0;
  }
  else {
    func_0x000107c31084();
    func_0x000107c31080(alStack_40 + 1);
  }
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  func_0x00010b8fe1e4(alStack_40,*(undefined8 *)(param_2 + 0x90),&puStack_48,&uStack_50,param_5,
                      alStack_40 + 1);
  func_0x0001080d5b98(uStack_50);
  puVar2 = puStack_48;
  func_0x000108100600();
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010b8fdd04();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110d73f48;
  puVar3 = puVar2 + 3;
  *puVar3 = &PTR_DAT_110d73f98;
  puVar2[4] = uVar4;
  if ((alStack_40[0] != 0) && (*(long *)(alStack_40[0] + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      puVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar2[5] = alStack_40[0];
  *param_1 = puVar3;
  param_1[1] = puVar2;
  func_0x000105276914(alStack_40[0]);
  func_0x00010b8fdbd0();
  return;
}



/* Entry: 10b8f3f94; end: 10b8f3f9b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b8f3f94(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  int extraout_w11;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  long alStack_40 [2];
  
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 == 0) {
    alStack_40[1] = 0;
  }
  else {
    func_0x000107c31084();
    func_0x000107c31080(alStack_40 + 1);
  }
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  func_0x00010b8fe1e4(alStack_40,*(undefined8 *)(param_2 + 0x70),&puStack_48,&uStack_50,param_5,
                      alStack_40 + 1);
  func_0x0001080d5b98(uStack_50);
  puVar2 = puStack_48;
  func_0x000108100600();
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010b8fdd04();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110d73f48;
  puVar3 = puVar2 + 3;
  *puVar3 = &PTR_DAT_110d73f98;
  puVar2[4] = uVar4;
  if ((alStack_40[0] != 0) && (*(long *)(alStack_40[0] + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      puVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar2[5] = alStack_40[0];
  *param_1 = puVar3;
  param_1[1] = puVar2;
  func_0x000105276914(alStack_40[0]);
  func_0x00010b8fdbd0();
  return;
}



/* Entry: 10b8f3f9c; end: 10b8f406b;  */

void FUN_10b8f3f9c(undefined1 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  undefined8 *puVar6;
  code *pcVar7;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *unaff_x19;
  long *plVar8;
  undefined1 *unaff_x20;
  long lVar9;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar1 = (long *)((long)register0x00000008 + -0x80);
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8fdffc(param_1);
    func_0x00010b8fd3f4();
    lVar9 = *param_2;
    func_0x00010b8fde24();
    lVar4 = lVar9;
    func_0x00010b8fe128();
    lVar4 = *(long *)(lVar4 + 0x10);
    plVar8 = param_4;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x00010b8fda68();
      } while (extraout_w11 != 0);
      lVar9 = *unaff_x21;
      plVar8 = param_4;
      lVar4 = extraout_x8;
    }
    *(long *)((long)register0x00000008 + -0x70) = lVar4;
    lVar5 = unaff_x21[1];
    *(long *)((long)register0x00000008 + -0x80) = lVar9;
    *(long *)((long)register0x00000008 + -0x78) = lVar5;
    lVar4 = 0;
    if (lVar5 != 0) {
      do {
        func_0x00010b8fda68();
        lVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    *(code **)((long)register0x00000008 + -0x68) = FUN_10b8f99ac;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_FUN_110d73940;
    *(long *)((long)register0x00000008 + -0x58) = lVar9;
    *(long *)((long)register0x00000008 + -0x50) = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    plVar2 = (long *)((long)register0x00000008 + -0x70);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x68);
    unaff_x20 = (undefined1 *)0x0;
    func_0x00010b8fe7c4(unaff_x19);
    func_0x00010b8fd6f8(*(undefined8 *)((long)register0x00000008 + -0x60));
    FUN_10b8f9a70();
    func_0x00010b8fe030();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_2 = (long *)((long)register0x00000008 + -0x160);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(long **)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0xa8) =
         (undefined1 *)((long)register0x00000008 + -0x68);
    *(long *)((long)register0x00000008 + -0xa0) = lVar9;
    *(long **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_10b8f406c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x90);
    param_4 = plVar8;
    func_0x00010b8fd474();
    lVar4 = *plVar2;
    if (lVar4 == 0) {
      lVar4 = plVar1[0x8c];
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
        do {
          func_0x00010b8fda68();
          lVar4 = extraout_x8_01;
        } while (extraout_w11_01 != 0);
      }
    }
    else {
      *plVar2 = 0;
    }
    *(long *)((long)register0x00000008 + -0x160) = lVar4;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xf8);
    FUN_10b8eb114((undefined1 *)((long)register0x00000008 + -0xf8),plVar1,
                  (undefined1 *)((long)register0x00000008 + -0x160),puVar3);
    func_0x00010b8fe1dc();
    unaff_x22 = (long *)plVar1[0x6c];
    in_ZR = (int)unaff_x20 == 2;
    if ((bool)in_ZR) {
      *(undefined8 *)((long)register0x00000008 + -0x128) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x128);
      (**(code **)(*(long *)((long)register0x00000008 + -0xf0) + 0x10))
                ((undefined1 *)((long)register0x00000008 + -0x120),
                 (undefined1 *)((long)register0x00000008 + -0xf0));
      param_2 = (long *)((long)register0x00000008 + -0x128);
      (**(code **)(*unaff_x22 + 0x30))(unaff_x22,param_2,((ulong)plVar8 & 0xffffffff) * 1000000);
      puVar6 = *(undefined8 **)((long)register0x00000008 + -0x120);
LAB_10b8f410c:
      pcVar7 = (code *)*puVar6;
      puVar3 = unaff_x20 + 8;
LAB_10b8f4134:
      (*pcVar7)(puVar3);
    }
    else {
      plVar2 = unaff_x22;
      (**(code **)(*unaff_x22 + 0x40))();
      if ((int)plVar2 != 0) {
        pcVar7 = *(code **)((long)register0x00000008 + -0xf8);
        puVar3 = (undefined1 *)((long)register0x00000008 + -0xf8);
        goto LAB_10b8f4134;
      }
      plVar8 = (long *)plVar1[0x6c];
      in_ZR = (int)unaff_x20 == 1;
      if (!(bool)in_ZR) {
        *(undefined8 *)((long)register0x00000008 + -0x158) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x158);
        param_2 = (long *)((long)register0x00000008 + -0xf0);
        (**(code **)(*(long *)((long)register0x00000008 + -0xf0) + 0x10))
                  ((undefined1 *)((long)register0x00000008 + -0x150));
        func_0x00010b8fdcc8(*(undefined8 *)(*plVar8 + 0x28));
        (*extraout_x8_02)();
        puVar6 = *(undefined8 **)((long)register0x00000008 + -0x150);
        goto LAB_10b8f410c;
      }
      param_2 = (long *)((long)register0x00000008 + -0xf8);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    param_1 = (undefined1 *)((long)register0x00000008 + -0xf0);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xf0))();
    func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -200));
    if ((bool)in_ZR) {
      return;
    }
    unaff_x30 = FUN_10b8f41e0;
    ___stack_chk_fail();
    param_1 = param_1 + -0x20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x160);
    unaff_x19 = plVar8;
    unaff_x21 = plVar1;
  } while( true );
}



/* Entry: 10b8f406c; end: 10b8f41df;  */

void FUN_10b8f406c(long *param_1,long *param_2,undefined1 *param_3,long *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar5 = (long *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar2 = param_4;
    func_0x00010b8fd474();
    lVar7 = *param_2;
    if (lVar7 == 0) {
      lVar7 = param_1[0x8c];
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
        do {
          func_0x00010b8fda68();
          lVar7 = extraout_x8_01;
        } while (extraout_w11_01 != 0);
      }
    }
    else {
      *param_2 = 0;
    }
    *(long *)((long)register0x00000008 + -0xe0) = lVar7;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x78);
    FUN_10b8eb114((undefined1 *)((long)register0x00000008 + -0x78),param_1,
                  (undefined1 *)((long)register0x00000008 + -0xe0),param_5);
    func_0x00010b8fe1dc();
    unaff_x22 = (long *)param_1[0x6c];
    uVar1 = (int)param_3 == 2;
    unaff_x19 = param_4;
    if ((bool)uVar1) {
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      param_3 = (undefined1 *)((long)register0x00000008 + -0xa8);
      (**(code **)(*(long *)((long)register0x00000008 + -0x70) + 0x10))
                ((undefined1 *)((long)register0x00000008 + -0xa0),
                 (undefined1 *)((long)register0x00000008 + -0x70));
      plVar5 = (long *)((long)register0x00000008 + -0xa8);
      (**(code **)(*unaff_x22 + 0x30))(unaff_x22,plVar5,((ulong)param_4 & 0xffffffff) * 1000000);
      puVar8 = *(undefined8 **)((long)register0x00000008 + -0xa0);
LAB_10b8f410c:
      pcVar9 = (code *)*puVar8;
      puVar4 = param_3 + 8;
LAB_10b8f4134:
      (*pcVar9)(puVar4);
      param_4 = plVar2;
    }
    else {
      plVar3 = unaff_x22;
      (**(code **)(*unaff_x22 + 0x40))();
      if ((int)plVar3 != 0) {
        pcVar9 = *(code **)((long)register0x00000008 + -0x78);
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x78);
        goto LAB_10b8f4134;
      }
      unaff_x19 = (long *)param_1[0x6c];
      uVar1 = (int)param_3 == 1;
      if (!(bool)uVar1) {
        *(undefined8 *)((long)register0x00000008 + -0xd8) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        param_3 = (undefined1 *)((long)register0x00000008 + -0xd8);
        plVar5 = (long *)((long)register0x00000008 + -0x70);
        (**(code **)(*(long *)((long)register0x00000008 + -0x70) + 0x10))
                  ((undefined1 *)((long)register0x00000008 + -0xd0));
        func_0x00010b8fdcc8(*(undefined8 *)(*unaff_x19 + 0x28));
        (*extraout_x8_02)();
        puVar8 = *(undefined8 **)((long)register0x00000008 + -0xd0);
        goto LAB_10b8f410c;
      }
      plVar5 = (long *)((long)register0x00000008 + -0x78);
      (**(code **)(*unaff_x19 + 0x20))(unaff_x19);
      param_4 = plVar2;
    }
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))(puVar4);
    func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    plVar2 = (long *)((long)register0x00000008 + -0x160);
    *(long **)((long)register0x00000008 + -0x110) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x108) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x100) = param_3;
    *(long **)((long)register0x00000008 + -0xf8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xe8) = FUN_10b8f41e0;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    func_0x00010b8fdffc(puVar4 + -0x20);
    func_0x00010b8fd3f4();
    unaff_x20 = *plVar5;
    func_0x00010b8fde24();
    lVar7 = unaff_x20;
    func_0x00010b8fe128();
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      do {
        func_0x00010b8fda68();
      } while (extraout_w11 != 0);
      unaff_x20 = *param_1;
      lVar7 = extraout_x8;
    }
    *(long *)((long)register0x00000008 + -0x150) = lVar7;
    lVar6 = param_1[1];
    *(long *)((long)register0x00000008 + -0x160) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x158) = lVar6;
    lVar7 = 0;
    if (lVar6 != 0) {
      do {
        func_0x00010b8fda68();
        lVar7 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    *(code **)((long)register0x00000008 + -0x148) = FUN_10b8f99ac;
    *(undefined ***)((long)register0x00000008 + -0x140) = &PTR_FUN_110d73940;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x148);
    *(long *)((long)register0x00000008 + -0x138) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x130) = lVar7;
    if (lVar7 != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    param_2 = (long *)((long)register0x00000008 + -0x150);
    param_5 = (undefined1 *)((long)register0x00000008 + -0x148);
    param_3 = (undefined1 *)0x0;
    func_0x00010b8fe7c4(unaff_x19);
    func_0x00010b8fd6f8(*(undefined8 *)((long)register0x00000008 + -0x140));
    FUN_10b8f9a70();
    func_0x00010b8fe030();
    func_0x00010b8fd38c();
    if ((bool)uVar1) {
      return;
    }
    unaff_x30 = FUN_10b8f406c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x160);
    param_1 = plVar2;
  } while( true );
}



/* Entry: 10b8f41e0; end: 10b8f41e7;  */

void FUN_10b8f41e0(undefined1 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  undefined8 *puVar6;
  code *pcVar7;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *plVar8;
  long *unaff_x19;
  long lVar9;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar1 = (long *)((long)register0x00000008 + -0x80);
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8fdffc(param_1 + -0x20);
    func_0x00010b8fd3f4();
    lVar9 = *param_2;
    func_0x00010b8fde24();
    lVar4 = lVar9;
    func_0x00010b8fe128();
    lVar4 = *(long *)(lVar4 + 0x10);
    plVar8 = param_4;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x00010b8fda68();
      } while (extraout_w11 != 0);
      lVar9 = *unaff_x21;
      plVar8 = param_4;
      lVar4 = extraout_x8;
    }
    *(long *)((long)register0x00000008 + -0x70) = lVar4;
    lVar5 = unaff_x21[1];
    *(long *)((long)register0x00000008 + -0x80) = lVar9;
    *(long *)((long)register0x00000008 + -0x78) = lVar5;
    lVar4 = 0;
    if (lVar5 != 0) {
      do {
        func_0x00010b8fda68();
        lVar4 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    *(code **)((long)register0x00000008 + -0x68) = FUN_10b8f99ac;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_FUN_110d73940;
    *(long *)((long)register0x00000008 + -0x58) = lVar9;
    *(long *)((long)register0x00000008 + -0x50) = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    plVar2 = (long *)((long)register0x00000008 + -0x70);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x68);
    unaff_x20 = (undefined1 *)0x0;
    func_0x00010b8fe7c4(unaff_x19);
    func_0x00010b8fd6f8(*(undefined8 *)((long)register0x00000008 + -0x60));
    FUN_10b8f9a70();
    func_0x00010b8fe030();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    param_2 = (long *)((long)register0x00000008 + -0x160);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(long **)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0xa8) =
         (undefined1 *)((long)register0x00000008 + -0x68);
    *(long *)((long)register0x00000008 + -0xa0) = lVar9;
    *(long **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_10b8f406c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x90);
    param_4 = plVar8;
    func_0x00010b8fd474();
    lVar4 = *plVar2;
    if (lVar4 == 0) {
      lVar4 = plVar1[0x8c];
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
        do {
          func_0x00010b8fda68();
          lVar4 = extraout_x8_01;
        } while (extraout_w11_01 != 0);
      }
    }
    else {
      *plVar2 = 0;
    }
    *(long *)((long)register0x00000008 + -0x160) = lVar4;
    unaff_x23 = (undefined1 *)((long)register0x00000008 + -0xf8);
    FUN_10b8eb114((undefined1 *)((long)register0x00000008 + -0xf8),plVar1,
                  (undefined1 *)((long)register0x00000008 + -0x160),puVar3);
    func_0x00010b8fe1dc();
    unaff_x22 = (long *)plVar1[0x6c];
    in_ZR = (int)unaff_x20 == 2;
    if ((bool)in_ZR) {
      *(undefined8 *)((long)register0x00000008 + -0x128) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x128);
      (**(code **)(*(long *)((long)register0x00000008 + -0xf0) + 0x10))
                ((undefined1 *)((long)register0x00000008 + -0x120),
                 (undefined1 *)((long)register0x00000008 + -0xf0));
      param_2 = (long *)((long)register0x00000008 + -0x128);
      (**(code **)(*unaff_x22 + 0x30))(unaff_x22,param_2,((ulong)plVar8 & 0xffffffff) * 1000000);
      puVar6 = *(undefined8 **)((long)register0x00000008 + -0x120);
LAB_10b8f410c:
      pcVar7 = (code *)*puVar6;
      puVar3 = unaff_x20 + 8;
LAB_10b8f4134:
      (*pcVar7)(puVar3);
    }
    else {
      plVar2 = unaff_x22;
      (**(code **)(*unaff_x22 + 0x40))();
      if ((int)plVar2 != 0) {
        pcVar7 = *(code **)((long)register0x00000008 + -0xf8);
        puVar3 = (undefined1 *)((long)register0x00000008 + -0xf8);
        goto LAB_10b8f4134;
      }
      plVar8 = (long *)plVar1[0x6c];
      in_ZR = (int)unaff_x20 == 1;
      if (!(bool)in_ZR) {
        *(undefined8 *)((long)register0x00000008 + -0x158) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x158);
        param_2 = (long *)((long)register0x00000008 + -0xf0);
        (**(code **)(*(long *)((long)register0x00000008 + -0xf0) + 0x10))
                  ((undefined1 *)((long)register0x00000008 + -0x150));
        func_0x00010b8fdcc8(*(undefined8 *)(*plVar8 + 0x28));
        (*extraout_x8_02)();
        puVar6 = *(undefined8 **)((long)register0x00000008 + -0x150);
        goto LAB_10b8f410c;
      }
      param_2 = (long *)((long)register0x00000008 + -0xf8);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    param_1 = (undefined1 *)((long)register0x00000008 + -0xf0);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xf0))();
    func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -200));
    if ((bool)in_ZR) {
      return;
    }
    unaff_x30 = FUN_10b8f41e0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x160);
    unaff_x19 = plVar8;
    unaff_x21 = plVar1;
  } while( true );
}



/* Entry: 10b8f41e8; end: 10b8f42ef;  */

void FUN_10b8f41e8(long param_1)

{
  long lVar1;
  long *extraout_x8;
  int extraout_w10;
  long lVar2;
  long lVar3;
  long in_stack_00000038;
  
  func_0x00010b8feb10();
  func_0x00010b8fddc0();
  func_0x00010b8fe340(&stack0x00000038);
  __ZNSt3__15mutex4lockEv(param_1 + 0xb0);
  lVar1 = in_stack_00000038;
  func_0x00010b8fe328();
  __ZNSt3__15mutex6unlockEv(param_1 + 0xb0);
  FUN_10b8eac40(lVar1);
  lVar3 = *(long *)(param_1 + 0x4b8);
  for (lVar2 = *(long *)(param_1 + 0x4b0); lVar2 != lVar3; lVar2 = lVar2 + 8) {
    FUN_10b8f1634(lVar1,lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x4d0);
  for (lVar2 = *(long *)(param_1 + 0x4c8); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    FUN_10b8f16cc(lVar1,lVar2,lVar2 + 8);
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x510);
  func_0x00010b8fe700();
  func_0x00010b8fe78c();
  func_0x00010b8e8a98(&stack0x00000028);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x510);
  lVar2 = *(long *)(lVar1 + 8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    ___dynamic_cast(lVar2,&PTR_DAT_110d7ea88,&PTR_DAT_110a1ee70,0xfffffffffffffffe);
    if (lVar2 != 0) {
      *extraout_x8 = lVar2;
      extraout_x8[1] = lVar3;
      if (lVar3 != 0) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10 != 0);
      }
      goto LAB_10b8f42e0;
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
LAB_10b8f42e0:
  func_0x00010b8e8bd0(lVar1);
  return;
}



/* Entry: 10b8f42f0; end: 10b8f42f7;  */

void FUN_10b8f42f0(long param_1)

{
  long lVar1;
  long *extraout_x8;
  int extraout_w10;
  long lVar2;
  long lVar3;
  long in_stack_00000038;
  
  param_1 = param_1 + -0x20;
  func_0x00010b8feb10();
  func_0x00010b8fddc0();
  func_0x00010b8fe340(&stack0x00000038);
  __ZNSt3__15mutex4lockEv(param_1 + 0xb0);
  lVar1 = in_stack_00000038;
  func_0x00010b8fe328();
  __ZNSt3__15mutex6unlockEv(param_1 + 0xb0);
  FUN_10b8eac40(lVar1);
  lVar3 = *(long *)(param_1 + 0x4b8);
  for (lVar2 = *(long *)(param_1 + 0x4b0); lVar2 != lVar3; lVar2 = lVar2 + 8) {
    FUN_10b8f1634(lVar1,lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x4d0);
  for (lVar2 = *(long *)(param_1 + 0x4c8); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    FUN_10b8f16cc(lVar1,lVar2,lVar2 + 8);
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x510);
  func_0x00010b8fe700();
  func_0x00010b8fe78c();
  func_0x00010b8e8a98(&stack0x00000028);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x510);
  lVar2 = *(long *)(lVar1 + 8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    ___dynamic_cast(lVar2,&PTR_DAT_110d7ea88,&PTR_DAT_110a1ee70,0xfffffffffffffffe);
    if (lVar2 != 0) {
      *extraout_x8 = lVar2;
      extraout_x8[1] = lVar3;
      if (lVar3 != 0) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10 != 0);
      }
      goto LAB_10b8f42e0;
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
LAB_10b8f42e0:
  func_0x00010b8e8bd0(lVar1);
  return;
}



/* Entry: 10b8f42f8; end: 10b8f435b;  */

void FUN_10b8f42f8(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fd408(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    FUN_10b9a8f04((undefined1 *)((long)register0x00000008 + -0x68));
    *(code **)((long)register0x00000008 + -0x58) = FUN_10b8f9a94;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x58);
    param_1 = (undefined1 *)((long)register0x00000008 + -0x50);
    FUN_10b8f9ae0(param_1,(undefined1 *)((long)register0x00000008 + -0x68));
    func_0x00010b8fdf94();
    func_0x00010b8fd640(*(undefined8 *)((long)register0x00000008 + -0x50));
    func_0x00010b8fdf8c();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f435c;
    ___stack_chk_fail();
    param_1 = param_1 + -0x20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10b8f435c; end: 10b8f4363;  */

void FUN_10b8f435c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fd408(param_1 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    FUN_10b9a8f04((undefined1 *)((long)register0x00000008 + -0x68));
    *(code **)((long)register0x00000008 + -0x58) = FUN_10b8f9a94;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x58);
    param_1 = (undefined1 *)((long)register0x00000008 + -0x50);
    FUN_10b8f9ae0(param_1,(undefined1 *)((long)register0x00000008 + -0x68));
    func_0x00010b8fdf94();
    func_0x00010b8fd640(*(undefined8 *)((long)register0x00000008 + -0x50));
    func_0x00010b8fdf8c();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f435c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10b8f4364; end: 10b8f4477;  */

undefined8 *
FUN_10b8f4364(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  code *pcVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w12;
  int extraout_w12_00;
  long *plVar7;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  
  puVar3 = &uStack_70;
  func_0x00010b8fd430();
  uStack_48 = *param_2;
  lStack_68 = param_2[1];
  ppuStack_40 = (undefined1 **)0x0;
  uStack_70 = uStack_48;
  if (lStack_68 != 0) {
    do {
      func_0x00010b8fe3ac();
      ppuStack_40 = (undefined1 **)extraout_x8;
      uStack_48 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  pcStack_58 = FUN_10b8f9b24;
  ppuStack_50 = &PTR_FUN_110d739a0;
  uStack_60 = param_1;
  if (ppuStack_40 != (undefined1 **)0x0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  pcStack_38 = (code *)param_1;
  func_0x00010b8fe6bc();
  func_0x00010b8fd728(ppuStack_50);
  func_0x00010b8db14c();
  func_0x00010b8fd3a4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ppuVar4 = &puStack_e0;
    uStack_78 = 0x10b8f43ec;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010b8fd430();
    uStack_b0 = *param_2;
    lStack_d0 = param_2[1];
    pcStack_a8 = (code *)0x0;
    puStack_e0 = puVar3;
    uStack_d8 = uStack_b0;
    if (lStack_d0 != 0) {
      do {
        func_0x00010b8fe3ac();
        pcStack_a8 = (code *)extraout_x8_00;
        uStack_b0 = extraout_x9_00;
      } while (extraout_w12_00 != 0);
    }
    uVar5 = (undefined4)param_3;
    pcStack_c8 = FUN_10b8fa268;
    ppuStack_c0 = &PTR_FUN_110d739c0;
    puStack_b8 = puVar3;
    if (pcStack_a8 != (code *)0x0) {
      do {
        func_0x00010b8fd9c4();
        uVar5 = (undefined4)param_3;
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b8fe6bc();
    func_0x00010b8fd640(ppuStack_c0);
    puVar3 = &uStack_d8;
    func_0x00010b8db14c();
    func_0x00010b8fd3a4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar6 = FUN_10b8f4478;
      func_0x00010b8feb90();
      ppuStack_40 = &puStack_80;
      pcStack_38 = pcVar6;
      func_0x00010b8fd408();
      uVar1 = *param_2;
      lVar2 = param_2[1];
      puStack_e0 = puVar3;
      uStack_d8 = uVar1;
      lStack_d0 = lVar2;
      uStack_78 = extraout_x8_01;
      if (lVar2 != 0) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_01 != 0);
      }
      plVar7 = (long *)*param_4;
      if (plVar7 != (long *)0x0) {
        func_0x00010b8fdd78(*(undefined8 *)(*plVar7 + 0x10));
      }
      puStack_b8 = (undefined8 *)param_4[2];
      ppuStack_c0 = (undefined **)param_4[1];
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
      pcStack_a8 = FUN_10b8fa4a8;
      ppuStack_a0 = &PTR_FUN_110d739e0;
      pcStack_c8 = (code *)plVar7;
      func_0x00010b8fe214();
      *puVar3 = &puStack_e0;
      puVar3[1] = uVar1;
      puVar3[2] = lVar2;
      if (lVar2 != 0) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_02 != 0);
      }
      if (plVar7 != (long *)0x0) {
        func_0x00010b8fdd78(*(undefined8 *)(*plVar7 + 0x10));
      }
      puVar3[3] = plVar7;
      puVar3[5] = puStack_b8;
      puVar3[4] = ppuStack_c0;
      *(undefined4 *)(puVar3 + 6) = uVar5;
      puStack_98 = puVar3;
      func_0x00010b8fdf94();
      func_0x00010b8fd604(ppuStack_a0);
      FUN_10b8f456c();
      func_0x00010b8fd3bc(uStack_78);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        if (ppuVar4[3] != (undefined8 *)0x0) {
          func_0x00010b8fd5d8();
        }
        func_0x00010b8db14c(ppuVar4 + 1);
        return ppuVar4;
      }
      return ppuVar4;
    }
  }
  return puVar3;
}



/* Entry: 10b8f4478; end: 10b8f456b;  */

BADSPACEBASE *
FUN_10b8f4478(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 unaff_x19;
  long *plVar3;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  code *in_stack_00000038;
  undefined **in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000068;
  
  func_0x00010b8feb90();
  func_0x00010b8fd408();
  uVar1 = *param_2;
  lVar2 = param_2[1];
  in_stack_00000000 = param_1;
  in_stack_00000008 = uVar1;
  in_stack_00000010 = lVar2;
  in_stack_00000068 = extraout_x8;
  if (lVar2 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  plVar3 = (long *)*param_4;
  if (plVar3 != (long *)0x0) {
    func_0x00010b8fdd78(*(undefined8 *)(*plVar3 + 0x10));
  }
  in_stack_00000028 = param_4[2];
  in_stack_00000020 = param_4[1];
  in_stack_00000038 = FUN_10b8fa4a8;
  in_stack_00000040 = &PTR_FUN_110d739e0;
  in_stack_00000018 = plVar3;
  in_stack_00000030 = param_3;
  func_0x00010b8fe214();
  *param_1 = unaff_x19;
  param_1[1] = uVar1;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10_00 != 0);
  }
  if (plVar3 != (long *)0x0) {
    func_0x00010b8fdd78(*(undefined8 *)(*plVar3 + 0x10));
  }
  param_1[3] = plVar3;
  param_1[5] = in_stack_00000028;
  param_1[4] = in_stack_00000020;
  *(undefined4 *)(param_1 + 6) = param_3;
  in_stack_00000048 = param_1;
  func_0x00010b8fdf94();
  func_0x00010b8fd604(in_stack_00000040);
  FUN_10b8f456c();
  func_0x00010b8fd3bc(in_stack_00000068);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (*(long *)((long)register0x00000008 + 0x18) != 0) {
      func_0x00010b8fd5d8();
    }
    func_0x00010b8db14c((undefined1 *)((long)register0x00000008 + 8));
    return (BADSPACEBASE *)(undefined1 *)register0x00000008;
  }
  return register0x00000008;
}



/* Entry: 10b8f456c; end: 10b8f459b;  */

long FUN_10b8f456c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b8fd5d8();
  }
  func_0x00010b8db14c(param_1 + 8);
  return param_1;
}



/* Entry: 10b8f459c; end: 10b8f463f;  */

long ** FUN_10b8f459c(long **param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                     undefined8 *param_5)

{
  undefined1 uVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  undefined1 auStack_108 [32];
  long *plStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [32];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  pplVar2 = param_1;
  FUN_10b8f1c28(param_1,param_5);
  lVar5 = param_5[1];
  if ((*(byte *)(lVar5 + 8) & 1) == 0) {
    func_0x00010b8fd9b8(param_1,&UNK_10f7cc8a3,0x17,lVar5);
    func_0x00010b8fe87c();
    func_0x00010b8fea48();
    FUN_10b8f23fc();
    func_0x00010b8fdd9c();
    return param_1;
  }
  uVar1 = param_1[0x31] == (long *)0x1;
  if (!(bool)uVar1) {
    return pplVar2;
  }
  plVar4 = (long *)*param_5;
  plVar3 = plVar4;
  func_0x00010b8fd41c(param_1,plVar4,param_2);
  uStack_58 = extraout_x8;
  FUN_10b8dba18(auStack_b8,plVar3,param_2);
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_80 = 0;
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = 0;
  uStack_d8 = 3;
  plStack_e8 = plVar4;
  puStack_e0 = auStack_b8;
  lStack_d0 = lVar5;
  plStack_98 = plVar4;
  plStack_78 = plVar4;
  func_0x0001080e01a8(auStack_c8);
  (**(code **)(*plVar4 + 0x110))(auStack_108,plVar4,param_1 + 0x33,&plStack_e8);
  func_0x00010b8fdda4();
  if ((*(byte *)(lVar5 + 8) & 1) == 0) {
    FUN_10b8f279c(unaff_x20,&UNK_10f7cc8a3,0x17,lVar5);
  }
  do {
    pplVar2 = &plStack_78;
    func_0x0001080e0bc0();
    func_0x00010b8fdfcc();
  } while (!(bool)uVar1);
  func_0x00010b8fd3bc(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pplVar2[1] = pplVar2[1] + 5;
    *pplVar2 = (long *)((long)*pplVar2 + 1);
    func_0x00010b8fc890();
    return pplVar2;
  }
  return pplVar2;
}



/* Entry: 10b8f4640; end: 10b8f46ff;  */

void FUN_10b8f4640(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  int iVar6;
  code **ppcVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  code **ppcVar12;
  undefined1 *puVar13;
  code *pcVar14;
  uint extraout_w8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar15;
  long lVar16;
  undefined8 extraout_x8_02;
  undefined8 uVar17;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  ulong uVar18;
  long lVar19;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar20;
  long lVar21;
  code **ppcVar22;
  long lVar23;
  long lVar24;
  undefined8 **in_stack_00000030;
  code *in_stack_00000038;
  undefined1 auStack_130 [64];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code **ppcStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  code **ppcStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  code *pcStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  puVar9 = param_4;
  func_0x00010b8fd3f4();
  FUN_10b8fce6c(&pcStack_80);
  FUN_10b8f4700(param_1,pcStack_80);
  ppuStack_50 = (undefined **)CONCAT71(uStack_77,uStack_78);
  pcStack_58 = pcStack_80;
  if (CONCAT71(uStack_77,uStack_78) != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  uStack_98 = 0;
  uStack_88._0_2_ = CONCAT11((char)param_4,(char)param_3);
  ppcVar22 = &pcStack_68;
  pcStack_68 = FUN_10b8fa6b0;
  ppuStack_60 = &PTR_DAT_110d73a00;
  uStack_a0 = 0;
  puStack_40 = (undefined8 *)CONCAT62(puStack_40._2_6_,(undefined2)uStack_88);
  ppcVar12 = &pcStack_68;
  puStack_90 = param_2;
  puStack_48 = param_2;
  func_0x00010b8fdf94();
  func_0x00010b8fd640(ppuStack_60);
  FUN_10b8fd0cc(&uStack_a0);
  ppcVar7 = &pcStack_80;
  FUN_10b8fd0cc();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar8 = *ppcVar7;
  puStack_b0 = (undefined8 *)&stack0xfffffffffffffff0;
  if (pcVar8 != (code *)0x0) {
    *extraout_x8 = pcVar8;
    pcStack_a8 = FUN_10b8f4700;
    ppcStack_c0 = ppcVar22;
    puStack_b8 = param_2;
    __ZNSt3__15mutex4lockEv(pcVar8 + 0x18);
    if ((*(uint *)(pcVar8 + 0x88) >> 1 & 1) != 0) {
      _abort();
      pcVar14 = (code *)auStack_130;
      puVar13 = auStack_130;
      pcStack_c8 = FUN_10b8fd134;
      uStack_f0 = param_1;
      uStack_e8 = param_3;
      ppcStack_e0 = ppcVar22;
      pcStack_d8 = pcVar8;
      ppuStack_d0 = &puStack_b0;
      func_0x00010b8fd9b8();
      func_0x000107c2837c();
      func_0x00010b8feaa8();
      func_0x000107c28378();
      ppuStack_60 = (undefined **)((long)ppuStack_60 + ((long)pcStack_68 - (long)pcVar14));
      pcStack_68 = pcVar14;
      FUN_10b8fd18c(auStack_130,param_3,puVar9);
      *puVar9 = puVar13;
      return;
    }
    do {
      func_0x00010b8fda68();
    } while (extraout_w11_00 != 0);
    *(uint *)(pcVar8 + 0x88) = extraout_w8 | 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(pcVar8 + 0x18);
    return;
  }
  pcStack_a8 = FUN_10b8f4700;
  _abort();
  pcVar14 = FUN_10b8f471c;
  func_0x00010b8fe46c();
  in_stack_00000030 = &puStack_b0;
  in_stack_00000038 = pcVar14;
  func_0x00010b8fd4b8();
  puVar9 = (undefined8 *)0x78;
  __Znwm();
  puVar9[2] = 0x32aaaba7;
  puVar9[1] = 1;
  *puVar9 = &PTR_FUN_110d73320;
  *(undefined1 *)(puVar9 + 0xe) = 0;
  puVar9[4] = 0;
  puVar9[3] = 0;
  puVar9[6] = 0;
  puVar9[5] = 0;
  puVar9[8] = 0;
  puVar9[7] = 0;
  puVar9[10] = 0;
  puVar9[9] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  __ZNSt3__15mutex4lockEv(pcVar8 + 0x30);
  lVar23 = *(long *)(pcVar8 + 0x80);
  if (lVar23 == 0) {
    func_0x00010b8fb01c(0);
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[2] = 0;
    __ZNSt3__15mutex6unlockEv(pcVar8 + 0x30);
LAB_10b8f4a3c:
    func_0x00010b8fb01c(lVar23);
    FUN_10b8fb1d4(puVar9);
    func_0x00010b8fd3bc(extraout_x8_01);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(lVar23 + 0x10) != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b8fb01c(0);
    puVar20 = *(undefined8 **)(pcVar8 + 0x4e8);
    if (puVar20 < *(undefined8 **)(pcVar8 + 0x4f0)) {
      do {
        func_0x00010b8fe41c();
      } while (extraout_w9 != 0);
      puVar11 = puVar20 + 1;
      *puVar20 = puVar9;
      puVar20 = extraout_x8_00;
LAB_10b8f48b8:
      *(undefined8 **)(pcVar8 + 0x4e8) = puVar11;
      *(undefined1 *)(lVar23 + 0x1f9) = 1;
      __ZNSt3__15mutex6unlockEv(pcVar8 + 0x30);
      iVar6 = (int)*(undefined8 *)(pcVar8 + 0x360);
      func_0x00010b8fdad4();
      if (iVar6 == 0) {
        pcVar8 = *(code **)(pcVar8 + 0x360);
        do {
          func_0x00010b8fe41c();
        } while (extraout_w9_01 != 0);
        pcStack_58 = FUN_10b8fac24;
        ppuStack_50 = &PTR_FUN_110d73a20;
        puStack_48 = puVar9;
        (**(code **)(*(long *)pcVar8 + 0x28))();
        func_0x00010b8fd640(ppuStack_50);
      }
      else {
        FUN_10b8f4a6c(pcVar8,lVar23);
      }
      uStack_88 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_78 = 1;
      pcStack_80 = pcVar8;
      while( true ) {
        __ZNSt3__15mutex4lockEv(puVar9 + 2);
        bVar3 = *(byte *)(puVar9 + 0xe);
        ppcVar22 = (code **)(ulong)bVar3;
        func_0x00010b8fe2f4();
        if ((bVar3 & 1) != 0) break;
        puVar11 = &uStack_88;
        func_0x000107c28148();
        if ((long)ppcVar12 < (long)puVar11) {
          pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,2);
          uStack_a0 = 0;
          uStack_98 = 0;
          func_0x00010b8fdcc8();
          FUN_10b8ea78c();
          func_0x00010b8e30ac(&pcStack_a8);
          func_0x00010b8fe2c0();
          func_0x00010b8fe798();
        }
        else {
          pcStack_a8 = (code *)0x2faf080;
          __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                    (&pcStack_a8);
        }
      }
      __ZNSt3__15mutex4lockEv(puVar9 + 2);
      pcStack_a8 = (code *)((ulong)pcStack_a8 & 0xffffffffffffff00);
      puStack_90 = (undefined8 *)((ulong)puStack_90 & 0xffffffffffffff00);
      in_ZR = *(char *)(puVar9 + 0xe) == '\x01';
      if ((bool)in_ZR) {
        func_0x00010b8faca0(&pcStack_a8,puVar9 + 0xb);
        puStack_90 = (undefined8 *)CONCAT71(puStack_90._1_7_,1);
        func_0x00010b8fe2f4();
        ppcVar22 = &pcStack_70;
        ppcVar12 = &pcStack_70;
        func_0x00010b8faca0(ppcVar12,&pcStack_a8);
        func_0x00010b8fe744();
        *puVar20 = ppcVar12;
        puVar20[2] = ppcVar12 + 3;
        for (lVar24 = 0; in_ZR = lVar24 == 0x18, !(bool)in_ZR; lVar24 = lVar24 + 0x18) {
          func_0x00010b8faca0();
          ppcVar12 = ppcVar12 + 3;
        }
        puVar20[1] = ppcVar12;
        func_0x00010b8e30ac(&pcStack_70);
      }
      else {
        func_0x00010b8fe2f4();
        *puVar20 = 0;
        puVar20[1] = 0;
        puVar20[2] = 0;
      }
      FUN_10b8f4de8(&pcStack_a8);
      goto LAB_10b8f4a3c;
    }
    ppcVar22 = (code **)((long)puVar20 - *(long *)(pcVar8 + 0x4e0));
    uVar1 = ((long)ppcVar22 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar15 = (long)*(undefined8 **)(pcVar8 + 0x4f0) - *(long *)(pcVar8 + 0x4e0);
      uVar18 = (long)uVar15 >> 2;
      if (uVar18 <= uVar1) {
        uVar18 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar18 = 0x1fffffffffffffff;
      }
      puStack_b0 = extraout_x8_00;
      if (uVar18 == 0) {
        lVar24 = 0;
      }
      else {
        if (uVar18 >> 0x3d != 0) goto LAB_10b8f4a68;
        lVar24 = uVar18 << 3;
        __Znwm();
      }
      puVar11 = (undefined8 *)(lVar24 + (long)ppcVar22);
      do {
        func_0x00010b8fe41c();
      } while (extraout_w9_00 != 0);
      lVar21 = *(long *)(pcVar8 + 0x4e8);
      lVar10 = *(long *)(pcVar8 + 0x4e0);
      *puVar11 = puVar9;
      lVar16 = lVar10 - lVar21;
      lVar19 = lVar10;
      while (lVar19 != lVar21) {
        func_0x00010b8fe40c();
        lVar19 = extraout_x9;
      }
      for (; lVar10 != lVar21; lVar10 = lVar10 + 8) {
        FUN_10b8fb1b4();
      }
      lVar10 = *(long *)(pcVar8 + 0x4e0);
      *(long *)(pcVar8 + 0x4e0) = (long)puVar11 + lVar16;
      puVar11 = puVar11 + 1;
      *(undefined8 **)(pcVar8 + 0x4e8) = puVar11;
      *(ulong *)(pcVar8 + 0x4f0) = lVar24 + uVar18 * 8;
      puVar20 = puStack_b0;
      if (lVar10 != 0) {
        __ZdlPv();
        puVar20 = puStack_b0;
      }
      goto LAB_10b8f48b8;
    }
  }
  func_0x00010bdb3f6c();
LAB_10b8f4a68:
  func_0x000104bfe188();
  pcVar8 = FUN_10b8f4a6c;
  func_0x00010b8feb54();
  puStack_40 = &stack0x00000030;
  pcStack_38 = pcVar8;
  func_0x00010b8fd9d4();
  do {
    __ZNSt3__15mutex4lockEv(ppcVar22 + 6);
    pcVar8 = ppcVar22[0x9c];
    pcVar14 = ppcVar22[0x9d];
    if (pcVar8 == pcVar14) {
      __ZNSt3__15mutex6unlockEv(ppcVar22 + 6);
      lVar23 = 0;
    }
    else {
      lVar23 = *(long *)(pcVar14 + -8);
      if (lVar23 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10_01 != 0);
      }
      FUN_10b8fb1d4(0);
      func_0x00010b8f5f14(ppcVar22 + 0x9c,ppcVar22[0x9d] + -8);
      __ZNSt3__15mutex6unlockEv(ppcVar22 + 6);
      FUN_10b8f38c8(&uStack_88,ppcVar22,puVar9);
      lVar24 = uStack_88;
      func_0x00010b8fe888();
      func_0x00010b8fe1ac();
      uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
      uVar17 = 0;
      if (pcStack_a8 != (code *)0x0) {
        do {
          func_0x00010b8fdb28();
          uVar17 = extraout_x8_02;
        } while (extraout_w11 != 0);
      }
      puVar20 = puStack_b0;
      uStack_98 = uVar17;
      if ((puStack_b0 != (undefined8 *)0x0) && (puStack_b0[2] != 0)) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_02 != 0);
      }
      puStack_90 = puVar20;
      FUN_10b8ea78c(lVar23,&uStack_a0);
      func_0x00010b8e30ac(&uStack_a0);
      func_0x000105276914(puVar20);
      func_0x00010b8fd9e0();
      plVar2 = (long *)(lVar24 + 8);
      do {
        lVar24 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar24 + -1 == 0) {
        func_0x00010b8fd734();
      }
    }
    FUN_10b8fb1d4(lVar23);
  } while (pcVar8 != pcVar14);
  return;
}



/* Entry: 10b8f4700; end: 10b8f471b;  */

void FUN_10b8f4700(long *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  code *pcVar10;
  uint extraout_w8;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar11;
  long lVar12;
  undefined8 extraout_x8_01;
  undefined8 uVar13;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  ulong uVar14;
  long extraout_x9;
  long lVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *unaff_x29;
  ulong unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  undefined1 in_stack_00000028;
  code *in_stack_00000048;
  undefined **in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  code *in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined1 *in_stack_000000d0;
  code *in_stack_000000d8;
  undefined1 auStack_90 [64];
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    *param_1 = (long)param_2;
    __ZNSt3__15mutex4lockEv(param_2 + 3);
    if ((*(uint *)(param_2 + 0x11) >> 1 & 1) != 0) {
      _abort();
      puVar8 = auStack_90;
      puVar9 = auStack_90;
      func_0x00010b8fd9b8();
      func_0x000107c2837c();
      func_0x00010b8feaa8();
      func_0x000107c28378();
      lVar19 = *unaff_x20;
      *unaff_x20 = (long)puVar8;
      unaff_x20[1] = unaff_x20[1] + (lVar19 - (long)puVar8);
      FUN_10b8fd18c();
      *param_4 = puVar9;
      return;
    }
    do {
      func_0x00010b8fda68();
    } while (extraout_w11_00 != 0);
    *(uint *)(param_2 + 0x11) = extraout_w8 | 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 3);
    return;
  }
  _abort();
  pcVar10 = FUN_10b8f471c;
  func_0x00010b8fe46c();
  in_stack_000000d0 = &stack0xfffffffffffffff0;
  in_stack_000000d8 = pcVar10;
  func_0x00010b8fd4b8();
  puVar7 = (undefined8 *)0x78;
  in_stack_00000078 = extraout_x8_00;
  __Znwm();
  puVar7[2] = 0x32aaaba7;
  puVar7[1] = 1;
  *puVar7 = &PTR_FUN_110d73320;
  *(undefined1 *)(puVar7 + 0xe) = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  __ZNSt3__15mutex4lockEv(param_2 + 6);
  lVar19 = param_2[0x10];
  if (lVar19 == 0) {
    func_0x00010b8fb01c(0);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    __ZNSt3__15mutex6unlockEv(param_2 + 6);
LAB_10b8f4a3c:
    func_0x00010b8fb01c(lVar19);
    FUN_10b8fb1d4(puVar7);
    func_0x00010b8fd3bc(in_stack_00000078);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(lVar19 + 0x10) != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    func_0x00010b8fb01c(0);
    puVar16 = (undefined8 *)param_2[0x9d];
    if (puVar16 < (undefined8 *)param_2[0x9e]) {
      do {
        func_0x00010b8fe41c();
      } while (extraout_w9 != 0);
      puVar18 = puVar16 + 1;
      *puVar16 = puVar7;
LAB_10b8f48b8:
      param_2[0x9d] = (long)puVar18;
      *(undefined1 *)(lVar19 + 0x1f9) = 1;
      __ZNSt3__15mutex6unlockEv(param_2 + 6);
      iVar6 = (int)param_2[0x6c];
      func_0x00010b8fdad4();
      if (iVar6 == 0) {
        param_2 = (long *)param_2[0x6c];
        do {
          func_0x00010b8fe41c();
        } while (extraout_w9_01 != 0);
        in_stack_00000048 = FUN_10b8fac24;
        in_stack_00000050 = &PTR_FUN_110d73a20;
        in_stack_00000058 = puVar7;
        (**(code **)(*param_2 + 0x28))();
        func_0x00010b8fd640(in_stack_00000050);
      }
      else {
        FUN_10b8f4a6c(param_2,lVar19);
      }
      in_stack_00000018 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      in_stack_00000028 = 1;
      in_stack_00000020 = param_2;
      while( true ) {
        __ZNSt3__15mutex4lockEv(puVar7 + 2);
        bVar3 = *(byte *)(puVar7 + 0xe);
        unaff_x20 = (long *)(ulong)bVar3;
        func_0x00010b8fe2f4();
        if ((bVar3 & 1) != 0) break;
        puVar16 = &stack0x00000018;
        func_0x000107c28148();
        if (param_3 < (long)puVar16) {
          unaff_x30 = CONCAT44((int)(unaff_x30 >> 0x20),2);
          in_stack_00000000 = 0;
          in_stack_00000008 = 0;
          func_0x00010b8fdcc8();
          FUN_10b8ea78c();
          func_0x00010b8e30ac(&stack0xfffffffffffffff8);
          func_0x00010b8fe2c0();
          func_0x00010b8fe798();
        }
        else {
          unaff_x30 = 50000000;
          __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                    (&stack0xfffffffffffffff8);
        }
      }
      __ZNSt3__15mutex4lockEv(puVar7 + 2);
      unaff_x30 = unaff_x30 & 0xffffffffffffff00;
      in_stack_00000010 = (undefined8 *)((ulong)in_stack_00000010 & 0xffffffffffffff00);
      in_ZR = *(char *)(puVar7 + 0xe) == '\x01';
      if ((bool)in_ZR) {
        func_0x00010b8faca0(&stack0xfffffffffffffff8,puVar7 + 0xb);
        in_stack_00000010 = (undefined8 *)CONCAT71(in_stack_00000010._1_7_,1);
        func_0x00010b8fe2f4();
        unaff_x20 = (long *)&stack0x00000030;
        puVar8 = &stack0x00000030;
        func_0x00010b8faca0(puVar8,&stack0xfffffffffffffff8);
        func_0x00010b8fe744();
        *extraout_x8 = puVar8;
        extraout_x8[2] = puVar8 + 0x18;
        for (lVar21 = 0; in_ZR = lVar21 == 0x18, !(bool)in_ZR; lVar21 = lVar21 + 0x18) {
          func_0x00010b8faca0();
          puVar8 = puVar8 + 0x18;
        }
        extraout_x8[1] = puVar8;
        func_0x00010b8e30ac(&stack0x00000030);
      }
      else {
        func_0x00010b8fe2f4();
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
      }
      FUN_10b8f4de8(&stack0xfffffffffffffff8);
      goto LAB_10b8f4a3c;
    }
    unaff_x20 = (long *)((long)puVar16 - param_2[0x9c]);
    uVar1 = ((long)unaff_x20 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar11 = param_2[0x9e] - param_2[0x9c];
      uVar14 = (long)uVar11 >> 2;
      if (uVar14 <= uVar1) {
        uVar14 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar14 = 0x1fffffffffffffff;
      }
      unaff_x29 = extraout_x8;
      if (uVar14 == 0) {
        lVar21 = 0;
      }
      else {
        if (uVar14 >> 0x3d != 0) goto LAB_10b8f4a68;
        lVar21 = uVar14 << 3;
        __Znwm();
      }
      puVar18 = (undefined8 *)(lVar21 + (long)unaff_x20);
      do {
        func_0x00010b8fe41c();
      } while (extraout_w9_00 != 0);
      lVar17 = param_2[0x9d];
      lVar20 = param_2[0x9c];
      *puVar18 = puVar7;
      lVar12 = lVar20 - lVar17;
      lVar15 = lVar20;
      while (lVar15 != lVar17) {
        func_0x00010b8fe40c();
        lVar15 = extraout_x9;
      }
      for (; lVar20 != lVar17; lVar20 = lVar20 + 8) {
        FUN_10b8fb1b4();
      }
      lVar20 = param_2[0x9c];
      param_2[0x9c] = (long)puVar18 + lVar12;
      puVar18 = puVar18 + 1;
      param_2[0x9d] = (long)puVar18;
      param_2[0x9e] = lVar21 + uVar14 * 8;
      if (lVar20 != 0) {
        __ZdlPv();
      }
      goto LAB_10b8f48b8;
    }
  }
  func_0x00010bdb3f6c();
LAB_10b8f4a68:
  func_0x000104bfe188();
  pcVar10 = FUN_10b8f4a6c;
  func_0x00010b8feb54();
  in_stack_00000060 = &stack0x000000d0;
  in_stack_00000068 = pcVar10;
  func_0x00010b8fd9d4();
  do {
    __ZNSt3__15mutex4lockEv(unaff_x20 + 6);
    lVar19 = unaff_x20[0x9c];
    lVar21 = unaff_x20[0x9d];
    if (lVar19 == lVar21) {
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 6);
      lVar20 = 0;
    }
    else {
      lVar20 = *(long *)(lVar21 + -8);
      if (lVar20 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b8fb1d4(0);
      func_0x00010b8f5f14(unaff_x20 + 0x9c,unaff_x20[0x9d] + -8);
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 6);
      FUN_10b8f38c8(&stack0x00000018,unaff_x20,puVar7);
      lVar15 = in_stack_00000018;
      func_0x00010b8fe888();
      func_0x00010b8fe1ac();
      in_stack_00000000 = CONCAT44(in_stack_00000000._4_4_,1);
      uVar13 = 0;
      if (unaff_x30 != 0) {
        do {
          func_0x00010b8fdb28();
          uVar13 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      in_stack_00000008 = uVar13;
      if ((unaff_x29 != (undefined8 *)0x0) && (unaff_x29[2] != 0)) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_01 != 0);
      }
      in_stack_00000010 = unaff_x29;
      FUN_10b8ea78c(lVar20,&stack0x00000000);
      func_0x00010b8e30ac(&stack0x00000000);
      func_0x000105276914(unaff_x29);
      func_0x00010b8fd9e0();
      plVar2 = (long *)(lVar15 + 8);
      do {
        lVar15 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 + -1 == 0) {
        func_0x00010b8fd734();
      }
    }
    FUN_10b8fb1d4(lVar20);
  } while (lVar19 != lVar21);
  return;
}



/* Entry: 10b8f471c; end: 10b8f4a6b;  */

void FUN_10b8f471c(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar10;
  long lVar11;
  undefined8 extraout_x8_01;
  undefined8 uVar12;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  ulong uVar13;
  long extraout_x9;
  long lVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined1 *unaff_x20;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  undefined1 in_stack_00000038;
  code *in_stack_00000058;
  undefined **in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  code *in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000e0;
  
  func_0x00010b8fe46c();
  func_0x00010b8fd4b8();
  puVar7 = (undefined8 *)0x78;
  in_stack_00000088 = extraout_x8_00;
  __Znwm();
  puVar7[2] = 0x32aaaba7;
  puVar7[1] = 1;
  *puVar7 = &PTR_FUN_110d73320;
  *(undefined1 *)(puVar7 + 0xe) = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 6);
  lVar18 = param_1[0x10];
  if (lVar18 == 0) {
    func_0x00010b8fb01c(0);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 6);
LAB_10b8f4a3c:
    func_0x00010b8fb01c(lVar18);
    FUN_10b8fb1d4(puVar7);
    func_0x00010b8fd3bc(in_stack_00000088);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(lVar18 + 0x10) != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    func_0x00010b8fb01c(0);
    puVar15 = (undefined8 *)param_1[0x9d];
    if (puVar15 < (undefined8 *)param_1[0x9e]) {
      do {
        func_0x00010b8fe41c();
      } while (extraout_w9 != 0);
      puVar17 = puVar15 + 1;
      *puVar15 = puVar7;
LAB_10b8f48b8:
      param_1[0x9d] = (long)puVar17;
      *(undefined1 *)(lVar18 + 0x1f9) = 1;
      __ZNSt3__15mutex6unlockEv(param_1 + 6);
      iVar6 = (int)param_1[0x6c];
      func_0x00010b8fdad4();
      if (iVar6 == 0) {
        param_1 = (long *)param_1[0x6c];
        do {
          func_0x00010b8fe41c();
        } while (extraout_w9_01 != 0);
        in_stack_00000058 = FUN_10b8fac24;
        in_stack_00000060 = &PTR_FUN_110d73a20;
        in_stack_00000068 = puVar7;
        (**(code **)(*param_1 + 0x28))();
        func_0x00010b8fd640(in_stack_00000060);
      }
      else {
        FUN_10b8f4a6c(param_1,lVar18);
      }
      in_stack_00000028 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      in_stack_00000038 = 1;
      in_stack_00000030 = param_1;
      while( true ) {
        __ZNSt3__15mutex4lockEv(puVar7 + 2);
        bVar3 = *(byte *)(puVar7 + 0xe);
        unaff_x20 = (undefined1 *)(ulong)bVar3;
        func_0x00010b8fe2f4();
        if ((bVar3 & 1) != 0) break;
        puVar15 = &stack0x00000028;
        func_0x000107c28148();
        if (param_2 < (long)puVar15) {
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,2);
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          func_0x00010b8fdcc8();
          FUN_10b8ea78c();
          func_0x00010b8e30ac(&stack0x00000008);
          func_0x00010b8fe2c0();
          func_0x00010b8fe798();
        }
        else {
          in_stack_00000008 = 50000000;
          __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                    (&stack0x00000008);
        }
      }
      __ZNSt3__15mutex4lockEv(puVar7 + 2);
      in_stack_00000008 = in_stack_00000008 & 0xffffffffffffff00;
      in_stack_00000020 = (undefined8 *)((ulong)in_stack_00000020 & 0xffffffffffffff00);
      in_ZR = *(char *)(puVar7 + 0xe) == '\x01';
      if ((bool)in_ZR) {
        func_0x00010b8faca0(&stack0x00000008,puVar7 + 0xb);
        in_stack_00000020 = (undefined8 *)CONCAT71(in_stack_00000020._1_7_,1);
        func_0x00010b8fe2f4();
        unaff_x20 = &stack0x00000040;
        puVar8 = &stack0x00000040;
        func_0x00010b8faca0(puVar8,&stack0x00000008);
        func_0x00010b8fe744();
        *extraout_x8 = puVar8;
        extraout_x8[2] = puVar8 + 0x18;
        for (lVar20 = 0; in_ZR = lVar20 == 0x18, !(bool)in_ZR; lVar20 = lVar20 + 0x18) {
          func_0x00010b8faca0();
          puVar8 = puVar8 + 0x18;
        }
        extraout_x8[1] = puVar8;
        func_0x00010b8e30ac(&stack0x00000040);
      }
      else {
        func_0x00010b8fe2f4();
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0;
      }
      FUN_10b8f4de8(&stack0x00000008);
      goto LAB_10b8f4a3c;
    }
    unaff_x20 = (undefined1 *)((long)puVar15 - param_1[0x9c]);
    uVar1 = ((long)unaff_x20 >> 3) + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar10 = param_1[0x9e] - param_1[0x9c];
      uVar13 = (long)uVar10 >> 2;
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar13 = 0x1fffffffffffffff;
      }
      in_stack_00000000 = extraout_x8;
      if (uVar13 == 0) {
        lVar20 = 0;
      }
      else {
        if (uVar13 >> 0x3d != 0) goto LAB_10b8f4a68;
        lVar20 = uVar13 << 3;
        __Znwm();
      }
      puVar17 = (undefined8 *)(unaff_x20 + lVar20);
      do {
        func_0x00010b8fe41c();
      } while (extraout_w9_00 != 0);
      lVar16 = param_1[0x9d];
      lVar19 = param_1[0x9c];
      *puVar17 = puVar7;
      lVar11 = lVar19 - lVar16;
      lVar14 = lVar19;
      while (lVar14 != lVar16) {
        func_0x00010b8fe40c();
        lVar14 = extraout_x9;
      }
      for (; lVar19 != lVar16; lVar19 = lVar19 + 8) {
        FUN_10b8fb1b4();
      }
      lVar19 = param_1[0x9c];
      param_1[0x9c] = (long)puVar17 + lVar11;
      puVar17 = puVar17 + 1;
      param_1[0x9d] = (long)puVar17;
      param_1[0x9e] = lVar20 + uVar13 * 8;
      if (lVar19 != 0) {
        __ZdlPv();
      }
      goto LAB_10b8f48b8;
    }
  }
  func_0x00010bdb3f6c();
LAB_10b8f4a68:
  func_0x000104bfe188();
  pcVar9 = FUN_10b8f4a6c;
  func_0x00010b8feb54();
  in_stack_00000070 = &stack0x000000e0;
  in_stack_00000078 = pcVar9;
  func_0x00010b8fd9d4();
  do {
    __ZNSt3__15mutex4lockEv(unaff_x20 + 0x30);
    lVar18 = *(long *)(unaff_x20 + 0x4e0);
    lVar20 = *(long *)(unaff_x20 + 0x4e8);
    if (lVar18 == lVar20) {
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x30);
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(lVar20 + -8);
      if (lVar19 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10_00 != 0);
      }
      FUN_10b8fb1d4(0);
      func_0x00010b8f5f14(unaff_x20 + 0x4e0,*(long *)(unaff_x20 + 0x4e8) + -8);
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x30);
      FUN_10b8f38c8(&stack0x00000028,unaff_x20,puVar7);
      lVar14 = in_stack_00000028;
      func_0x00010b8fe888();
      func_0x00010b8fe1ac();
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,1);
      uVar12 = 0;
      if (in_stack_00000008 != 0) {
        do {
          func_0x00010b8fdb28();
          uVar12 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      in_stack_00000018 = uVar12;
      if ((in_stack_00000000 != (undefined8 *)0x0) && (in_stack_00000000[2] != 0)) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_01 != 0);
      }
      in_stack_00000020 = in_stack_00000000;
      FUN_10b8ea78c(lVar19,&stack0x00000010);
      func_0x00010b8e30ac(&stack0x00000010);
      func_0x000105276914(in_stack_00000000);
      func_0x00010b8fd9e0();
      plVar2 = (long *)(lVar14 + 8);
      do {
        lVar14 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 + -1 == 0) {
        func_0x00010b8fd734();
      }
    }
    FUN_10b8fb1d4(lVar19);
  } while (lVar18 != lVar20);
  return;
}



/* Entry: 10b8f4a6c; end: 10b8f4b97;  */

void FUN_10b8f4a6c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  func_0x00010b8feb54();
  func_0x00010b8fd9d4();
  do {
    __ZNSt3__15mutex4lockEv(unaff_x20 + 0x30);
    lVar7 = *(long *)(unaff_x20 + 0x4e0);
    lVar8 = *(long *)(unaff_x20 + 0x4e8);
    if (lVar7 == lVar8) {
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x30);
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar8 + -8);
      if (lVar6 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10 != 0);
      }
      FUN_10b8fb1d4(0);
      func_0x00010b8f5f14(unaff_x20 + 0x4e0,*(long *)(unaff_x20 + 0x4e8) + -8);
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x30);
      FUN_10b8f38c8(&stack0x00000028);
      lVar5 = in_stack_00000028;
      func_0x00010b8fe888();
      func_0x00010b8fe1ac();
      in_stack_00000010 = 1;
      uVar4 = 0;
      if (in_stack_00000008 != 0) {
        do {
          func_0x00010b8fdb28();
          uVar4 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      in_stack_00000018 = uVar4;
      if ((in_stack_00000000 != 0) && (*(long *)(in_stack_00000000 + 0x10) != 0)) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_00 != 0);
      }
      in_stack_00000020 = in_stack_00000000;
      FUN_10b8ea78c(lVar6,&stack0x00000010);
      func_0x00010b8e30ac(&stack0x00000010);
      func_0x000105276914(in_stack_00000000);
      func_0x00010b8fd9e0();
      plVar1 = (long *)(lVar5 + 8);
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        func_0x00010b8fd734();
      }
    }
    FUN_10b8fb1d4(lVar6);
  } while (lVar7 != lVar8);
  return;
}



/* Entry: 10b8f4b98; end: 10b8f4bb3;  */

void FUN_10b8f4b98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  func_0x00010b8feb54(param_1 + -0x18);
  func_0x00010b8fd9d4();
  do {
    __ZNSt3__15mutex4lockEv(unaff_x20 + 0x30);
    lVar7 = *(long *)(unaff_x20 + 0x4e0);
    lVar8 = *(long *)(unaff_x20 + 0x4e8);
    if (lVar7 == lVar8) {
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x30);
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar8 + -8);
      if (lVar6 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10 != 0);
      }
      FUN_10b8fb1d4(0);
      func_0x00010b8f5f14(unaff_x20 + 0x4e0,*(long *)(unaff_x20 + 0x4e8) + -8);
      __ZNSt3__15mutex6unlockEv(unaff_x20 + 0x30);
      FUN_10b8f38c8(&stack0x00000028);
      lVar5 = in_stack_00000028;
      func_0x00010b8fe888();
      func_0x00010b8fe1ac();
      in_stack_00000010 = 1;
      uVar4 = 0;
      if (in_stack_00000008 != 0) {
        do {
          func_0x00010b8fdb28();
          uVar4 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      in_stack_00000018 = uVar4;
      if ((in_stack_00000000 != 0) && (*(long *)(in_stack_00000000 + 0x10) != 0)) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_00 != 0);
      }
      in_stack_00000020 = in_stack_00000000;
      FUN_10b8ea78c(lVar6,&stack0x00000010);
      func_0x00010b8e30ac(&stack0x00000010);
      func_0x000105276914(in_stack_00000000);
      func_0x00010b8fd9e0();
      plVar1 = (long *)(lVar5 + 8);
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        func_0x00010b8fd734();
      }
    }
    FUN_10b8fb1d4(lVar6);
  } while (lVar7 != lVar8);
  return;
}



/* Entry: 10b8f4bb4; end: 10b8f4be7;  */

void FUN_10b8f4bb4(void)

{
  long unaff_x20;
  
  func_0x00010b8fd9d4();
  func_0x00010b8fe71c();
  FUN_10b8f4be8(unaff_x20 + 0x3c0);
  func_0x00010b8fea14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10b8f4be8; end: 10b8f4c13;  */

void FUN_10b8f4be8(void)

{
  func_0x00010b8fea28();
  func_0x000107c31060();
  func_0x00010b8fdcc8();
  func_0x000107c31060();
  func_0x00010b8fd9e0();
  return;
}



/* Entry: 10b8f4c14; end: 10b8f4c4b;  */

void FUN_10b8f4c14(undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x00010b8fd9b8();
  __ZNSt3__15mutex4lockEv(param_2 + 0x378);
  FUN_10b8f4be8(unaff_x20 + 0x3c8,param_3);
  func_0x00010b8fea14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10b8f4c4c; end: 10b8f4c83;  */

void FUN_10b8f4c4c(void)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8fe554();
  func_0x00010b8fe71c();
  uVar1 = 0;
  if (*(long *)(unaff_x19 + 0x3c8) != 0) {
    do {
      func_0x00010b8fdb28();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *unaff_x20 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x378);
  return;
}



/* Entry: 10b8f4c84; end: 10b8f4c8f;  */

undefined1 FUN_10b8f4c84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x44c);
}



/* Entry: 10b8f4c90; end: 10b8f4dc3;  */

void FUN_10b8f4c90(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  cVar1 = *(char *)(param_2 + 0x370);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (cVar1 == '\x01') {
    lStack_28 = 0;
    func_0x00010b8fe71c();
    func_0x000107c31068(&lStack_28,param_2 + 0x3c0);
    __ZNSt3__15mutex6unlockEv(param_2 + 0x378);
    if ((lStack_28 != 0) && (*(int *)(lStack_28 + 0xc) != 0)) {
      FUN_10b9a5e5c(auStack_70,&lStack_28);
      func_0x00010b8fe6f4(&UNK_10f7cc8bb);
      func_0x00010b8fe094();
      func_0x00010b8fe830();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
      func_0x00010b8fe364();
    }
    func_0x00010b8f4ba0(&lStack_78,param_2);
    if (lStack_78 != 0) {
      lVar2 = *(long *)(lStack_78 + 0x38);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
        FUN_10b9a5e5c(auStack_70,(long *)(lStack_78 + 0x38));
        func_0x00010b8fe6f4(&UNK_10f7cc8c8);
        func_0x00010b8fe094();
        func_0x00010b8fe830();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
        func_0x00010b8fe364();
      }
    }
    func_0x000105276914(lStack_78);
    func_0x000107c278f8(lStack_28);
  }
  return;
}



/* Entry: 10b8f4dc4; end: 10b8f4de7;  */

long FUN_10b8f4dc4(long param_1)

{
  return *(long *)(param_1 + 0x88) + 0x50;
}



/* Entry: 10b8f4de8; end: 10b8f4e07;  */

void FUN_10b8f4de8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b8e30ac();
  }
  return;
}



/* Entry: 10b8f4e08; end: 10b8f5ebb;  */

void FUN_10b8f4e08(long param_1)

{
  long **pplVar1;
  long *plVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar9;
  ulong extraout_x8_02;
  code *extraout_x9;
  long lVar10;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  int extraout_w11;
  long lVar11;
  bool bVar12;
  undefined2 uStack_4bb;
  undefined1 uStack_4b9;
  undefined8 uStack_4b8;
  long *plStack_4b0;
  ulong uStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined1 auStack_470 [16];
  long lStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  ulong auStack_440 [3];
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined1 uStack_410;
  undefined1 auStack_408 [32];
  undefined1 uStack_3e8;
  code *pcStack_3e0;
  undefined8 uStack_3d8;
  ulong auStack_2f8 [11];
  undefined1 uStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined8 auStack_268 [4];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined1 auStack_188 [32];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010b8fd4b8();
  lVar11 = *(long *)(param_1 + 0x10);
  iVar5 = (int)lVar11 + 0x3d0;
  uStack_68 = extraout_x8;
  func_0x00010b948cc0();
  if ((*(byte *)(lVar11 + 0x368) & 1) != 0) goto LAB_10b8f5ea0;
  auStack_440[0] = auStack_440[0] & 0xffffffffffffff00;
  uStack_3e8 = 0;
  func_0x000105c3b044();
  iVar4 = 0;
  if (iVar5 != 0) {
    func_0x0001080e8d4c(auStack_440);
    auStack_440[0] = 0;
    auStack_440[1] = 0;
    auStack_440[2] = 0;
    puStack_428 = &UNK_10f7cbd6e;
    uStack_420 = 0x19;
    uStack_418 = 0;
    uStack_410 = 0;
    FUN_10bd3f3dc(auStack_408,&UNK_10f7cbd6e,0x19);
    iVar4 = (int)auStack_440;
    FUN_10b9a7630();
    uStack_3e8 = 1;
  }
  auStack_2f8[0] = auStack_2f8[0] & 0xffffffffffffff00;
  uStack_2a0 = 0;
  func_0x000105c3b044();
  if (iVar4 != 0) {
    FUN_10b8ca990(auStack_2f8,&UNK_10f7cbd9a);
  }
  uStack_4a8 = 0;
  func_0x00010b8fe384(&pcStack_3e0);
  if (pcStack_3e0 != (code *)0x0) {
    func_0x00010b8fe96c();
    (*extraout_x9)(&pcStack_c8);
    FUN_10b8ebae4(&uStack_4a8,&pcStack_c8);
    func_0x00010b8fb1f8(pcStack_c8);
  }
  func_0x00010b8fe040();
  if (uStack_4a8 != 0) {
    uVar9 = uStack_4a8;
    FUN_10b94d364();
    uRam00000001133fad60 = (undefined1)uVar9;
    uVar9 = uStack_4a8;
    FUN_10b94d39c();
    uRam0000000113846850 = (undefined1)uVar9;
  }
  (**(code **)(**(long **)(lVar11 + 0x78) + 0x28))
            (&plStack_4b0,*(long **)(lVar11 + 0x78),lVar11,*(undefined8 *)(lVar11 + 0xa8));
  uStack_4b8 = 0;
  uStack_4bb = 0;
  uStack_4b9 = 0;
  func_0x00010b8ffd54(&pcStack_3e0,plStack_4b0);
  FUN_10b8db548(plStack_4b0,&uStack_4bb,&pcStack_3e0);
  func_0x00010b8fd908();
  if ((bool)in_ZR) {
    (**(code **)(*plStack_4b0 + 0x1e8))(plStack_4b0,*(undefined1 *)(lVar11 + 0x578));
    func_0x00010b8ebb10(lVar11);
    uVar6 = 0xb0;
    __Znwm(0xb0);
    FUN_10b8feba4();
    pcStack_c8 = (code *)0x0;
    func_0x00010b8fb130(&uStack_4b8,uVar6);
    iVar5 = (int)&pcStack_c8;
    func_0x00010b8fb10c();
    plVar2 = plStack_4b0;
    pcStack_c8 = (code *)((ulong)pcStack_c8 & 0xffffffffffffff00);
    uStack_70 = 0;
    func_0x000105c3b044();
    uVar3 = in_ZR;
    if (iVar5 != 0) {
      func_0x0001081234a4(&pcStack_c8,&UNK_10f7cc23c);
      uVar3 = in_ZR;
    }
    plVar2[4] = lVar11 + 0x18;
    func_0x00010b8fde7c(auStack_e8);
    func_0x00010b8fd908();
    in_ZR = 0;
    if ((bool)uVar3) {
      func_0x00010b8fd820(&DAT_10f570415);
      func_0x00010b8fe4d0();
      func_0x00010b8fd4a8();
      func_0x00010b8fd908();
      in_ZR = 0;
      if ((bool)uVar3) {
        func_0x00010b8fde7c(auStack_108);
        func_0x00010b8fd908();
        in_ZR = 0;
        if ((bool)uVar3) {
          func_0x00010b8fd328();
          func_0x00010b8fd908();
          in_ZR = 0;
          if ((bool)uVar3) {
            func_0x00010b8fe804(auStack_128);
            func_0x00010b8fd704("version");
            func_0x00010b8fd4a8();
            func_0x00010b8fd908();
            in_ZR = 0;
            if ((bool)uVar3) {
              FUN_10b93bba8(*(undefined8 *)(lVar11 + 0x88));
              func_0x00010b8fe804(auStack_148);
              func_0x00010b8fd704("apiVersion");
              func_0x00010b8fd4a8();
              func_0x00010b8fd908();
              in_ZR = 0;
              if ((bool)uVar3) {
                in_ZR = *(char *)(lVar11 + 1099) == '\0';
                lVar8 = 0xc0;
                if ((bool)in_ZR) {
                  lVar8 = 0xe0;
                }
                lVar10 = 200;
                if ((bool)in_ZR) {
                  lVar10 = 0xe8;
                }
                uStack_168 = *(undefined8 *)((long)plVar2 + lVar8);
                uStack_158 = ((undefined8 *)((long)plVar2 + lVar10))[1];
                uStack_160 = *(undefined8 *)((long)plVar2 + lVar10);
                uStack_150 = 0;
                ppuStack_298 = (undefined **)&UNK_10f7cc255;
                uStack_290 = 0xe;
                func_0x00010b8fd4a8(*(undefined8 *)(*plVar2 + 0xf0));
                func_0x00010b8fd908();
                if ((bool)in_ZR) {
                  ppuStack_298 = (undefined **)0x10f29a940;
                  uStack_290 = 4;
                  func_0x00010b8fe100(auStack_188);
                  func_0x00010b8fd908();
                  if ((bool)in_ZR) {
                    func_0x00010b8fd704(&DAT_10f2f63b4);
                    func_0x00010b8fd4a8();
                    func_0x00010b8fd908();
                    if ((bool)in_ZR) {
                      lStack_1a8 = plVar2[0x1c];
                      lStack_198 = plVar2[0x1e];
                      lStack_1a0 = plVar2[0x1d];
                      uStack_190 = 0;
                      ppuStack_298 = (undefined **)&UNK_10f7cc264;
                      uStack_290 = 0x10;
                      func_0x00010b8fdba4(&lStack_1a8);
                      func_0x00010b8fd908();
                      if ((bool)in_ZR) {
                        if (uStack_4a8 == 0) {
                          lVar10 = 0xe8;
                          lVar8 = 0xe0;
                        }
                        else {
                          uVar9 = uStack_4a8;
                          FUN_10b94d494();
                          in_ZR = (uVar9 & 1) == 0;
                          lVar8 = 0xc0;
                          if ((bool)in_ZR) {
                            lVar8 = 0xe0;
                          }
                          lVar10 = 200;
                          if ((bool)in_ZR) {
                            lVar10 = 0xe8;
                          }
                        }
                        uStack_1c8 = *(undefined8 *)((long)plVar2 + lVar8);
                        uStack_1b8 = ((undefined8 *)((long)plVar2 + lVar10))[1];
                        uStack_1c0 = *(undefined8 *)((long)plVar2 + lVar10);
                        uStack_1b0 = 0;
                        func_0x00010b8fd704(&UNK_10f7cc275);
                        func_0x00010b8fd4a8();
                        func_0x00010b8fd908();
                        if ((bool)in_ZR) {
                          puStack_448 = &UNK_10f7cc292;
                          if (uStack_4a8 != 0) {
                            uVar9 = uStack_4a8;
                            func_0x00010b94d09c();
                            in_ZR = (int)uVar9 == 0;
                            puStack_448 = &UNK_10f7cc289;
                            if ((bool)in_ZR) {
                              puStack_448 = &UNK_10f7cc292;
                            }
                          }
                          puStack_450 = puStack_448;
                          _strlen();
                          func_0x00010b8fe100(auStack_1e8);
                          func_0x00010b8fd908();
                          if ((bool)in_ZR) {
                            func_0x00010b8fd704(&UNK_10f7cc298);
                            func_0x00010b8fd4a8();
                            func_0x00010b8fd908();
                            if ((bool)in_ZR) {
                              func_0x00010b8fd328();
                              func_0x00010b8fd908();
                              if ((bool)in_ZR) {
                                func_0x00010b8fd328();
                                func_0x00010b8fd908();
                                if ((bool)in_ZR) {
                                  func_0x00010b8fd328();
                                  func_0x00010b8fd908();
                                  if ((bool)in_ZR) {
                                    func_0x00010b8fd328();
                                    func_0x00010b8fd908();
                                    if ((bool)in_ZR) {
                                      func_0x00010b8fd328();
                                      func_0x00010b8fd908();
                                      if ((bool)in_ZR) {
                                        func_0x00010b8fd328();
                                        func_0x00010b8fd908();
                                        if ((bool)in_ZR) {
                                          func_0x00010b8fd328();
                                          func_0x00010b8fd908();
                                          if ((bool)in_ZR) {
                                            func_0x00010b8fd328();
                                            func_0x00010b8fd908();
                                            if ((bool)in_ZR) {
                                              func_0x00010b8fd328();
                                              func_0x00010b8fd908();
                                              if ((bool)in_ZR) {
                                                func_0x00010b8fd328();
                                                func_0x00010b8fd908();
                                                if ((bool)in_ZR) {
                                                  func_0x00010b8fd328();
                                                  func_0x00010b8fd908();
                                                  if ((bool)in_ZR) {
                                                    func_0x00010b8fd328();
                                                    func_0x00010b8fd908();
                                                    if ((bool)in_ZR) {
                                                      func_0x00010b8fd328();
                                                      func_0x00010b8fd908();
                                                      if ((bool)in_ZR) {
                                                        func_0x00010b8fd328();
                                                        func_0x00010b8fd908();
                                                        if ((bool)in_ZR) {
                                                          func_0x00010b8fd328();
                                                          func_0x00010b8fd908();
                                                          if ((bool)in_ZR) {
                                                            func_0x00010b8fd328();
                                                            func_0x00010b8fd908();
                                                            if ((bool)in_ZR) {
                                                              func_0x00010b8fd328();
                                                              func_0x00010b8fd908();
                                                              if ((bool)in_ZR) {
                                                                func_0x00010b8fd328();
                                                                func_0x00010b8fd908();
                                                                if ((bool)in_ZR) {
                                                                  func_0x00010b8fd328();
                                                                  func_0x00010b8fd908();
                                                                  if ((bool)in_ZR) {
                                                                    func_0x00010b8fd328();
                                                                    func_0x00010b8fd908();
                                                                    if ((bool)in_ZR) {
                                                                      func_0x00010b8fd328();
                                                                      func_0x00010b8fd908();
                                                                      if ((bool)in_ZR) {
                                                                        func_0x00010b8fd328();
                                                                        func_0x00010b8fd908();
                                                                        if ((bool)in_ZR) {
                                                                          func_0x00010b8fd328();
                                                                          func_0x00010b8fd908();
                                                                          if ((bool)in_ZR) {
                                                                            func_0x00010b8fd328();
                                                                            func_0x00010b8fd908();
                                                                            if ((bool)in_ZR) {
                                                                              func_0x00010b8fd328();
                                                                              func_0x00010b8fd908();
                                                                              if ((bool)in_ZR) {
                                                                                func_0x00010b8fd328(
                                                  );
                                                  func_0x00010b8fd908();
                                                  if ((bool)in_ZR) {
                                                    func_0x00010b8fd328();
                                                    func_0x00010b8fd908();
                                                    if ((bool)in_ZR) {
                                                      func_0x00010b8fd328();
                                                      func_0x00010b8fd908();
                                                      if ((bool)in_ZR) {
                                                        func_0x00010b8fd328();
                                                        func_0x00010b8fd908();
                                                        if ((bool)in_ZR) {
                                                          func_0x00010b8fd328();
                                                          func_0x00010b8fd908();
                                                          if ((bool)in_ZR) {
                                                            func_0x00010b8fd328();
                                                            func_0x00010b8fd908();
                                                            if ((bool)in_ZR) {
                                                              func_0x00010b8fd328();
                                                              func_0x00010b8fd908();
                                                              if ((bool)in_ZR) {
                                                                func_0x00010b8fd328();
                                                                func_0x00010b8fd908();
                                                                if ((bool)in_ZR) {
                                                                  func_0x00010b8fd328();
                                                                  func_0x00010b8fd908();
                                                                  if ((bool)in_ZR) {
                                                                    func_0x00010b8fd328();
                                                                    func_0x00010b8fd908();
                                                                    if ((bool)in_ZR) {
                                                                      func_0x00010b8fd328();
                                                                      func_0x00010b8fd908();
                                                                      if ((bool)in_ZR) {
                                                                        func_0x00010b8fd328();
                                                                        func_0x00010b8fd908();
                                                                        if ((bool)in_ZR) {
                                                                          func_0x00010b8fd328();
                                                                          func_0x00010b8fd908();
                                                                          if ((bool)in_ZR) {
                                                                            func_0x00010b8fd328();
                                                                            func_0x00010b8fd908();
                                                                            if ((bool)in_ZR) {
                                                                              func_0x00010b8fd328();
                                                                              func_0x00010b8fd908();
                                                                              if ((bool)in_ZR) {
                                                                                func_0x00010b8fd328(
                                                  );
                                                  func_0x00010b8fd908();
                                                  if ((bool)in_ZR) {
                                                    func_0x00010b8fd328();
                                                    func_0x00010b8fd908();
                                                    if ((bool)in_ZR) {
                                                      func_0x00010b8fd328();
                                                      func_0x00010b8fd908();
                                                      if ((bool)in_ZR) {
                                                        func_0x00010b8fd328();
                                                        func_0x00010b8fd908();
                                                        if ((bool)in_ZR) {
                                                          func_0x00010b8fd328();
                                                          func_0x00010b8fd908();
                                                          if ((bool)in_ZR) {
                                                            func_0x00010b8fd328();
                                                            func_0x00010b8fd908();
                                                            if ((bool)in_ZR) {
                                                              func_0x00010b8fd328();
                                                              func_0x00010b8fd908();
                                                              if ((bool)in_ZR) {
                                                                func_0x00010b8fd328();
                                                                func_0x00010b8fd908();
                                                                if ((bool)in_ZR) {
                                                                  func_0x00010b8fd328();
                                                                  func_0x00010b8fd908();
                                                                  if ((bool)in_ZR) {
                                                                    func_0x00010b8fd328();
                                                                    func_0x00010b8fd908();
                                                                    if ((bool)in_ZR) {
                                                                      func_0x00010b8fd328();
                                                                      func_0x00010b8fd908();
                                                                      if ((bool)in_ZR) {
                                                                        func_0x00010b8fd328();
                                                                        func_0x00010b8fd908();
                                                                        if ((bool)in_ZR) {
                                                                          func_0x00010b8fd328();
                                                                          func_0x00010b8fd908();
                                                                          if ((bool)in_ZR) {
                                                                            func_0x00010b8fd328();
                                                                            func_0x00010b8fd908();
                                                                            if ((bool)in_ZR) {
                                                                              func_0x00010b8fd328();
                                                                              func_0x00010b8fd908();
                                                                              if ((bool)in_ZR) {
                                                                                func_0x00010b8fd328(
                                                  );
                                                  func_0x00010b8fd908();
                                                  if ((bool)in_ZR) {
                                                    func_0x00010b8fd328();
                                                    func_0x00010b8fd908();
                                                    if ((bool)in_ZR) {
                                                      func_0x00010b8fd328();
                                                      func_0x00010b8fd908();
                                                      if ((bool)in_ZR) {
                                                        func_0x00010b8fd328();
                                                        func_0x00010b8fd908();
                                                        if ((bool)in_ZR) {
                                                          func_0x00010b8fd328();
                                                          func_0x00010b8fd908();
                                                          if ((bool)in_ZR) {
                                                            func_0x00010b8fd328();
                                                            func_0x00010b8fd908();
                                                            if ((bool)in_ZR) {
                                                              func_0x00010b8fd328();
                                                              func_0x00010b8fd908();
                                                              if ((bool)in_ZR) {
                                                                func_0x00010b8fd820(&DAT_10f408d65);
                                                                func_0x00010b8fe4d0();
                                                                func_0x00010b8fd4a8();
                                                                func_0x00010b8fd908();
                                                                if ((bool)in_ZR) {
                                                                  FUN_10b8e7a0c(auStack_208,plVar2,
                                                                                &pcStack_3e0);
                                                                  func_0x00010b8fd908();
                                                                  if ((bool)in_ZR) {
                                                                    func_0x00010b8fd820(&
                                                  UNK_10f7cc702);
                                                  func_0x00010b8fe4d0();
                                                  func_0x00010b8fd4a8();
                                                  func_0x00010b8fd908();
                                                  if ((bool)in_ZR) {
                                                    FUN_10b8e7e38(auStack_228,plVar2,&pcStack_3e0);
                                                    func_0x00010b8fd908();
                                                    if ((bool)in_ZR) {
                                                      func_0x00010b8fd820(&UNK_10f7cc70e);
                                                      func_0x00010b8fe4d0();
                                                      func_0x00010b8fd4a8();
                                                      func_0x00010b8fd908();
                                                      if ((bool)in_ZR) {
                                                        func_0x00010b8fde7c(auStack_248);
                                                        func_0x00010b8fd908();
                                                        if ((bool)in_ZR) {
                                                          func_0x00010b8fd3d0();
                                                          func_0x00010b8fd908();
                                                          if ((bool)in_ZR) {
                                                            puStack_4a0 = &UNK_10f7cc71d;
                                                            uStack_498 = 10;
                                                            func_0x00010b8dba34(&ppuStack_298,
                                                                                (double)*(long *)(
                                                  lVar11 + 0x4a0) / 1000000000.0,plVar2);
                                                  func_0x00010b8fd4a8(*(undefined8 *)
                                                                       (*plVar2 + 0xf0));
                                                  func_0x0001080e0bc0(&ppuStack_298);
                                                  func_0x00010b8fd908();
                                                  if ((bool)in_ZR) {
                                                    func_0x00010b8fd820(&DAT_10f4492aa);
                                                    func_0x00010b8fe4d0();
                                                    func_0x00010b8fd4a8();
                                                    func_0x00010b8fd908();
                                                    if ((bool)in_ZR) {
                                                      func_0x000107c31088(&lStack_458,&DAT_10f309588
                                                                         );
                                                      func_0x000104bd4df4(&lStack_460);
                                                      lVar8 = lStack_460;
                                                      uStack_290._0_2_ = 4;
                                                      ppuStack_298._0_4_ = 0x2a;
                                                      func_0x00010b8fe260("version");
                                                      FUN_10b8b510c(lVar8 + 0x10,&puStack_4a0);
                                                      func_0x00010b8fe1d4();
                                                      func_0x00010b8fdb48();
                                                      func_0x00010b8fe278();
                                                      lVar8 = lStack_460;
                                                      uStack_290 = CONCAT62(uStack_290._2_6_,4);
                                                      ppuStack_298 = (undefined **)
                                                                     CONCAT44(ppuStack_298._4_4_,1);
                                                      func_0x00010b8fe260(&DAT_10f2f98f2);
                                                      FUN_10b8b510c(lVar8 + 0x10,&puStack_4a0);
                                                      func_0x00010b8fe1d4();
                                                      func_0x00010b8fdb48();
                                                      func_0x00010b8fe278();
                                                      func_0x00010b8fe260("arm64");
                                                      FUN_10b9a8e18(&ppuStack_298,&puStack_4a0);
                                                      lVar8 = lStack_460;
                                                      func_0x000107c31088(auStack_268,&UNK_10f7cc728
                                                                         );
                                                      FUN_10b8b510c(lVar8 + 0x10,auStack_268);
                                                      func_0x00010b8fe1d4();
                                                      func_0x000107c278f8(auStack_268[0]);
                                                      func_0x00010b8fe278();
                                                      func_0x00010b8fdb48();
                                                      func_0x000104bd4df4(&puStack_4a0);
                                                      FUN_10b9a8f54(&ppuStack_298,&puStack_4a0);
                                                      lVar8 = lStack_460;
                                                      func_0x000107c31088(auStack_268,"env");
                                                      FUN_10b8b510c(lVar8 + 0x10,auStack_268);
                                                      func_0x00010b8fe1d4();
                                                      func_0x000107c278f8(auStack_268[0]);
                                                      func_0x00010b8fe278();
                                                      func_0x000104bd4e64(puStack_4a0);
                                                      FUN_10b9a8f54(auStack_470,&lStack_460);
                                                      func_0x00010b8fdcbc();
                                                      uStack_488 = 0;
                                                      uStack_480 = 0;
                                                      uStack_478 = 0;
                                                      uStack_290 = 0;
                                                      uStack_288 = 1;
                                                      uStack_278 = 0;
                                                      uStack_270 = 0;
                                                      ppuStack_298 = &puStack_4a0;
                                                      plStack_280 = &lStack_458;
                                                      FUN_10b900bd0(auStack_268,plVar2,auStack_470,
                                                                    &ppuStack_298,&pcStack_3e0);
                                                      FUN_10b9a8d98(auStack_470);
                                                      func_0x00010b8fd908();
                                                      if ((bool)in_ZR) {
                                                        func_0x00010b8fd3d0();
                                                        func_0x00010b8fd908();
                                                        if ((bool)in_ZR) {
                                                          if (lStack_458 == 0) {
                                                            func_0x00010b8fddb4();
                                                            uStack_290 = extraout_x8_01;
                                                            ppuStack_298 = extraout_x9_01;
                                                          }
                                                          else {
                                                            func_0x00010b8fdc0c();
                                                            uStack_290 = extraout_x8_00;
                                                            ppuStack_298 = extraout_x9_00;
                                                          }
                                                          func_0x00010b8fdba4(auStack_268);
                                                        }
                                                      }
                                                      func_0x0001080e0bc0(auStack_268);
                                                      func_0x000104bd4e64(lStack_460);
                                                      func_0x000107c278f8(lStack_458);
                                                    }
                                                  }
                                                  }
                                                  }
                                                  func_0x0001080e0bc0(auStack_248);
                                                  }
                                                  }
                                                  func_0x0001080e0bc0(auStack_228);
                                                  }
                                                  }
                                                  func_0x0001080e0bc0(auStack_208);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          func_0x0001080e0bc0(auStack_1e8);
                        }
                        func_0x0001080e0bc0(&uStack_1c8);
                      }
                      func_0x0001080e0bc0(&lStack_1a8);
                    }
                  }
                  func_0x0001080e0bc0(auStack_188);
                }
                func_0x0001080e0bc0(&uStack_168);
              }
              func_0x0001080e0bc0(auStack_148);
            }
            func_0x0001080e0bc0(auStack_128);
          }
        }
        func_0x0001080e0bc0(auStack_108);
      }
    }
    func_0x0001080e0bc0(auStack_e8);
    func_0x0001080e8dd4(&pcStack_c8);
    func_0x00010b8fd908();
    if (!(bool)in_ZR) goto LAB_10b8f5d90;
    __ZNSt3__15mutex4lockEv(lVar11 + 0x30);
    plVar2 = plStack_4b0;
    pplVar1 = (long **)(lVar11 + 0x80);
    in_ZR = pplVar1 == &plStack_4b0;
    if (!(bool)in_ZR) {
      plStack_4b0 = (long *)0x0;
      plVar7 = *pplVar1;
      *pplVar1 = plVar2;
      func_0x00010b8fb01c(plVar7);
    }
    __ZNSt3__15mutex6unlockEv(lVar11 + 0x30);
    uVar6 = uStack_4b8;
    uStack_4b8 = 0;
    func_0x00010b8fb130(lVar11 + 0x150,uVar6);
    func_0x00010b8eb888(lVar11 + 0x1d0,*(undefined8 *)(lVar11 + 0x80));
    ppuStack_298 = (undefined **)0x1;
    bVar12 = true;
  }
  else {
LAB_10b8f5d90:
    FUN_10b9a0084(&uStack_290,&pcStack_3e0);
    bVar12 = false;
    ppuStack_298 = (undefined **)0x2;
  }
  func_0x00010b8ffdac(&pcStack_3e0);
  func_0x00010b8fb10c(&uStack_4b8);
  func_0x00010b8fb01c(plStack_4b0);
  func_0x00010b8fb1f8(uStack_4a8);
  func_0x0001080e8dd4(auStack_2f8);
  if (bVar12) {
    *(undefined1 *)(lVar11 + 0x44a) = 1;
    uVar9 = *(ulong *)(lVar11 + 0x460);
    if ((uVar9 != 0) && (*(long *)(uVar9 + 0x10) != 0)) {
      do {
        func_0x00010b8fda68();
        uVar9 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    pcStack_c8 = FUN_10b8f60f4;
    ppuStack_c0 = &PTR_FUN_110d73580;
    auStack_2f8[0] = uVar9;
    lStack_b8 = lVar11;
    FUN_10b8eb114(&pcStack_3e0,lVar11,auStack_2f8,&pcStack_c8);
    (*pcStack_3e0)(&pcStack_3e0);
    func_0x00010b8fd6f8(uStack_3d8);
    func_0x00010b8fd640(ppuStack_c0);
    func_0x000105276914(auStack_2f8[0]);
    in_ZR = *(char *)(lVar11 + 0x44a) == '\x01';
    if ((bool)in_ZR) {
      *(undefined1 *)(lVar11 + 0x44c) = 1;
    }
  }
  else {
    FUN_10b8eb06c(lVar11,&UNK_10f7cbd88,0x11,&uStack_290);
  }
  func_0x0001080c6234(&ppuStack_298);
  func_0x0001080e8dd4(auStack_440);
LAB_10b8f5ea0:
  func_0x00010b8fd3bc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 10b8f5ebc; end: 10b8f5edf;  */

void FUN_10b8f5ebc(void)

{
  return;
}



/* Entry: 10b8f5ee0; end: 10b8f5f87;  */

void FUN_10b8f5ee0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b8e8a98();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8f5f88; end: 10b8f5fab;  */

void FUN_10b8f5f88(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8fd960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8f5fac; end: 10b8f60cf;  */

void FUN_10b8f5fac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x0001080e0bc0(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x28;
    }
    __ZdlPv();
    func_0x00010b8fd890();
  }
  return;
}



/* Entry: 10b8f60d0; end: 10b8f60f3;  */

/* WARNING: Possible PIC construction at 0x00010b8bc444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8bc448) */

void FUN_10b8f60d0(void)

{
  long unaff_x19;
  
  func_0x00010b8fdf68();
  func_0x00010b8fc594();
  func_0x00010007e5d0(unaff_x19 + 8);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8f60f4; end: 10b8f62d7;  */

void FUN_10b8f60f4(ulong *param_1,long param_2)

{
  undefined1 uVar1;
  ulong *puVar2;
  long *plVar3;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [5];
  
  puVar2 = param_1;
  func_0x00010b8fd3f4();
  lVar4 = *(long *)(param_2 + 0x10);
  uVar5 = *puVar2;
  func_0x000107c31088(auStack_78,&UNK_10f7cc73c);
  FUN_10b8ee4c0(auStack_58,lVar4,uVar5,auStack_78,1,0,0,param_1[1]);
  func_0x0001080e0bc0(auStack_58);
  func_0x00010b8fe650();
  uVar5 = param_1[1];
  uVar1 = 0;
  if (*(char *)(uVar5 + 8) == '\x01') {
    func_0x00010b8fe014();
    (**(code **)(extraout_x8 + 0x20))(auStack_78);
    func_0x00010b8fdb0c();
    uVar1 = extraout_w8 == 1;
    if ((bool)uVar1) {
      puStack_b8 = &UNK_10f7cc750;
      uStack_b0 = 0xc;
      (**(code **)(*(long *)*param_1 + 0xd0))(auStack_98,(long *)*param_1,auStack_70,&puStack_b8);
      func_0x00010b8fe74c();
      func_0x00010b8fdf4c();
      func_0x00010b8fddec(param_1[1]);
      if ((bool)uVar1) {
        uVar5 = *param_1;
        func_0x0001080e08ac(&puStack_b8,lVar4 + 0x1b0);
        FUN_10b8db52c(auStack_98,uVar5,&puStack_b8);
        func_0x00010b8fe74c();
        func_0x00010b8fdf4c();
        func_0x0001080e0bc0(&puStack_b8);
        puStack_c8 = &UNK_10f7cc75d;
        uStack_c0 = 4;
        plVar3 = (long *)*param_1;
        (**(code **)(*plVar3 + 0xd0))(auStack_98,plVar3,auStack_70,&puStack_c8,param_1[1]);
        func_0x00010b8fddec(param_1[1]);
        if ((bool)uVar1) {
          func_0x00010b8fe014();
          (**(code **)(extraout_x8_00 + 400))();
          if (((ulong)plVar3 & 1) == 0) {
            FUN_10b99f5f8(&puStack_c8,&UNK_10f7cc762);
            func_0x00010b8fe28c();
            func_0x00010b8fdd9c();
          }
          else {
            func_0x00010b8db4cc(*param_1,auStack_98);
          }
        }
        func_0x00010b8fdf4c();
      }
    }
    func_0x0001080e0bc0(auStack_78);
    uVar5 = param_1[1];
  }
  if ((*(byte *)(uVar5 + 8) & 1) == 0) {
    FUN_10b9a0084(auStack_58,uVar5);
    FUN_10b8eb06c(lVar4,&UNK_10f7cc9b2,0x16,auStack_58);
    func_0x000104bda960(auStack_58[0]);
  }
  func_0x00010b8fd38c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8f62d8; end: 10b8f634b;  */

void FUN_10b8f62d8(void)

{
  return;
}



/* Entry: 10b8f634c; end: 10b8f63ab;  */

undefined8 FUN_10b8f634c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b8f6378(&uStack_28);
  return param_1;
}



/* Entry: 10b8f63ac; end: 10b8f63b3;  */

void FUN_10b8f63ac(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10b8fb21c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8f63b4; end: 10b8f63e7;  */

void FUN_10b8f63b4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10b8fb21c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8f63e8; end: 10b8f640f;  */

undefined ** FUN_10b8f63e8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [64];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x00010b8fd408();
  uStack_48 = extraout_x8;
  if (*(long *)(lVar6 + 0x158) != 0) {
    FUN_10b8e1d84();
  }
  puStack_b0 = (undefined *)0x0;
  puStack_a8 = (undefined1 *)0x0;
  func_0x00010b8eb44c();
  func_0x000107c278e8();
  func_0x00010b8fe204();
  ppuVar7 = &PTR___tlv_bootstrap_11340e110;
  (*(code *)PTR___tlv_bootstrap_11340e110)();
  puStack_b0 = *ppuVar7;
  puStack_a8 = auStack_90;
  uStack_98 = 8;
  uStack_a0 = 0;
  uStack_50 = 0;
  *ppuVar7 = (undefined *)0x0;
  func_0x00010b8c1d38(*(undefined8 *)(unaff_x19 + 0x460));
  FUN_10b8c40e4(*(undefined8 *)(unaff_x19 + 0x90),unaff_x19 + 0x460);
  if (*(long *)(unaff_x19 + 0x120) != 0) {
    uVar9 = *(ulong *)(unaff_x19 + 0x128);
    in_ZR = uVar9 == 0x80;
    if (uVar9 < 0x80) {
      if (uVar9 != 0) {
        lVar6 = 0;
        for (uVar10 = 0; uVar10 != uVar9; uVar10 = uVar10 + 1) {
          if (-1 < *(char *)(*(long *)(unaff_x19 + 0x110) + uVar10)) {
            FUN_10b8f60d0(*(long *)(unaff_x19 + 0x118) + lVar6);
            uVar9 = *(ulong *)(unaff_x19 + 0x128);
          }
          lVar6 = lVar6 + 0x20;
        }
        *(undefined8 *)(unaff_x19 + 0x120) = 0;
        func_0x00010b8fdedc(*(undefined8 *)(unaff_x19 + 0x110));
        *(undefined1 *)(*(long *)(unaff_x19 + 0x110) + uVar9) = 0xff;
        uVar9 = *(ulong *)(unaff_x19 + 0x128);
        in_ZR = uVar9 == 7;
        lVar6 = 6;
        if (!(bool)in_ZR) {
          lVar6 = uVar9 - (uVar9 >> 3);
        }
        *(long *)(unaff_x19 + 0x138) = lVar6 - *(long *)(unaff_x19 + 0x120);
      }
    }
    else {
      func_0x00010b8f6074(unaff_x19 + 0x110);
    }
  }
  if (*(long *)(unaff_x19 + 0x2f8) != 0) {
    uVar9 = *(ulong *)(unaff_x19 + 0x300);
    in_ZR = uVar9 == 0x80;
    if (uVar9 < 0x80) {
      if (uVar9 != 0) {
        lVar6 = 8;
        for (uVar10 = 0; uVar10 != uVar9; uVar10 = uVar10 + 1) {
          if (-1 < *(char *)(*(long *)(unaff_x19 + 0x2e8) + uVar10)) {
            func_0x0001080e0bc0(*(long *)(unaff_x19 + 0x2f0) + lVar6);
            uVar9 = *(ulong *)(unaff_x19 + 0x300);
          }
          lVar6 = lVar6 + 0x28;
        }
        *(undefined8 *)(unaff_x19 + 0x2f8) = 0;
        func_0x00010b8fdedc(*(undefined8 *)(unaff_x19 + 0x2e8));
        *(undefined1 *)(*(long *)(unaff_x19 + 0x2e8) + uVar9) = 0xff;
        uVar9 = *(ulong *)(unaff_x19 + 0x300);
        in_ZR = uVar9 == 7;
        lVar6 = 6;
        if (!(bool)in_ZR) {
          lVar6 = uVar9 - (uVar9 >> 3);
        }
        *(long *)(unaff_x19 + 0x310) = lVar6 - *(long *)(unaff_x19 + 0x2f8);
      }
    }
    else {
      func_0x00010b8f5fac((long *)(unaff_x19 + 0x2e8));
    }
  }
  lStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  func_0x0001080e0180(&lStack_e0);
  func_0x0001080df8d0(unaff_x19 + 0x1b0,&lStack_e0);
  func_0x00010b8fe6d8();
  uStack_c0 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_10b8eb83c(unaff_x19 + 0x160,&lStack_e0);
  func_0x00010b8fb190(&lStack_e0);
  uStack_c0 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  FUN_10b8eb83c(unaff_x19 + 0x188,&lStack_e0);
  func_0x00010b8fb190(&lStack_e0);
  lStack_e0 = 0;
  lStack_d8 = 0;
  FUN_10b8e6bb8(unaff_x19 + 0x558,&lStack_e0);
  func_0x00010b8fe6d0();
  lStack_e0 = 0;
  lStack_d8 = 0;
  FUN_10b8e6bb8(unaff_x19 + 0x568,&lStack_e0);
  func_0x00010b8fe6d0();
  if (*(long *)(unaff_x19 + 0x140) != 0) {
    FUN_10b8e3238();
    plVar4 = *(long **)(unaff_x19 + 0x140);
    if (plVar4 != (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x140) = 0;
      plVar1 = plVar4 + 1;
      do {
        in_ZR = *plVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  ppuVar7 = (undefined **)0x0;
  func_0x00010b8fb130(unaff_x19 + 0x150);
  func_0x00010b8fe84c();
  lStack_e8 = 0;
  lStack_f0 = 0;
  __ZNSt3__15mutex4lockEv(unaff_x19 + 0x30);
  lVar6 = *(long *)(unaff_x19 + 0x80);
  if (lVar6 == 0) {
LAB_10b8eb7cc:
    lVar8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
  }
  else {
    if (*(long *)(lVar6 + 8) == 0) {
      lVar8 = *(long *)(lVar6 + 0x10);
      if (lVar8 == 0) goto LAB_10b8eb7cc;
      do {
        func_0x00010b8fd9c4();
        lStack_100 = lVar6;
        lStack_f8 = lVar8;
      } while (extraout_w10_00 != 0);
    }
    else {
      func_0x000107c278f0(&lStack_e0);
      lVar8 = lStack_d8;
      if (lStack_e0 == 0) {
        lVar6 = 0;
        lVar8 = 0;
      }
      else if (lStack_d8 != 0) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10 != 0);
      }
      func_0x000107c284e8(&lStack_e0);
      lStack_100 = lVar6;
      lStack_f8 = lVar8;
      if (lVar8 == 0) goto LAB_10b8eb7cc;
    }
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10_01 != 0);
    func_0x000107c27b90(lVar8);
    lVar8 = lStack_f8;
    lVar6 = lStack_100;
  }
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_e0 = lStack_f0;
  lStack_f0 = lVar6;
  lStack_d8 = lStack_e8;
  lStack_e8 = lVar8;
  func_0x00010b8fb23c(&lStack_e0);
  func_0x00010b8fb23c(&lStack_100);
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
    func_0x000107c3105c();
  }
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x30);
  func_0x00010b8fb23c(&lStack_f0);
  ppuVar5 = &puStack_b0;
  func_0x00010b94cb88();
  func_0x00010b8fd3bc(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  if (ppuVar5 != ppuVar7) {
    func_0x00010b8fb190(ppuVar5);
    *ppuVar5 = *ppuVar7;
    puVar12 = ppuVar7[2];
    puVar11 = ppuVar7[1];
    puVar13 = ppuVar7[3];
    ppuVar5[4] = ppuVar7[4];
    ppuVar5[3] = puVar13;
    ppuVar5[2] = puVar12;
    ppuVar5[1] = puVar11;
    *ppuVar7 = (undefined *)0x0;
  }
  return ppuVar5;
}



/* Entry: 10b8f6410; end: 10b8f6543;  */

long FUN_10b8f6410(long param_1,long param_2)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar1;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined8 uVar2;
  int extraout_w11;
  long lVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined1 **ppuStack_88;
  undefined8 uStack_80;
  undefined1 auStack_58 [40];
  
  lVar3 = param_2;
  func_0x00010b8fd3f4();
  lVar3 = *(long *)(lVar3 + 0x28);
  func_0x000107c31088(&lStack_90,&DAT_10f570415);
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x00010b8fd9e8();
  uStack_b8 = 0;
  uStack_b0 = 1;
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_88 = &puStack_c0;
  uStack_80 = 0;
  puStack_c0 = (undefined1 *)&uStack_f0;
  plStack_a8 = &lStack_90;
  func_0x00010b8fe9ec(2);
  FUN_10b900bd0(auStack_58);
  func_0x00010b8fdb0c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fe938();
    FUN_10b8f279c();
    goto LAB_10b8f6518;
  }
  func_0x00010b8fe014();
  (**(code **)(extraout_x8_00 + 0x20))(&ppuStack_88);
  in_ZR = *(char *)(*(long *)(param_1 + 8) + 8) == '\x01';
  if ((bool)in_ZR) {
    if (*(long *)(param_2 + 0x20) == 0) {
      func_0x00010b8fddb4();
      uStack_b8 = extraout_x8_02;
      puStack_c0 = extraout_x9_00;
    }
    else {
      func_0x00010b8fdc0c();
      uStack_b8 = extraout_x8_01;
      puStack_c0 = extraout_x9;
    }
    func_0x00010b8fe594(auStack_58);
    if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) == 0) goto LAB_10b8f6508;
  }
  else {
LAB_10b8f6508:
    func_0x00010b8fe938();
    FUN_10b8f279c();
  }
  func_0x00010b8fe194();
LAB_10b8f6518:
  func_0x0001080e0bc0(auStack_58);
  func_0x000107c278f8(lStack_90);
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fda54();
    func_0x00010b8fe22c(&PTR_FUN_110d735e0);
    uVar1 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        func_0x00010b8fdb28();
        uVar1 = extraout_x8_03;
      } while (extraout_w11 != 0);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = uVar1;
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    return lVar3;
  }
  return lStack_90;
}



/* Entry: 10b8f6544; end: 10b8f6587;  */

void FUN_10b8f6544(void)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fda54();
  func_0x00010b8fe22c(&PTR_FUN_110d735e0);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    do {
      func_0x00010b8fdb28();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  return;
}



/* Entry: 10b8f6588; end: 10b8f6597;  */

void FUN_10b8f6588(long param_1)

{
  undefined1 in_ZR;
  long *unaff_x19;
  
  func_0x00010b8fdf68(param_1 + 8);
  func_0x000107c278f4();
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*unaff_x19 != (long *)0x0)) {
    (**(code **)(*(long *)*unaff_x19 + 0x18))();
  }
  return;
}



/* Entry: 10b8f6598; end: 10b8f65d7;  */

void FUN_10b8f6598(void)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fda54();
  func_0x00010b8fe69c(&PTR_FUN_110d735e0);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    do {
      func_0x00010b8fdb28();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  return;
}



/* Entry: 10b8f65d8; end: 10b8f663b;  */

void FUN_10b8f65d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x00010b8fdaf0(*puVar1);
  if (plStack_48 != (long *)0x0) {
    func_0x00010b9a9750(&uStack_50,puVar1 + 3);
    (**(code **)(*plStack_48 + 0x18))(plStack_48,puVar1 + 1,puVar1 + 2,&uStack_50);
    func_0x000104bddf60(uStack_50);
  }
  func_0x00010b8fe040();
  return;
}



/* Entry: 10b8f663c; end: 10b8f665b;  */

void FUN_10b8f663c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8ec21c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8f665c; end: 10b8f665f;  */

void FUN_10b8f665c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8f6660; end: 10b8f66b7;  */

void FUN_10b8f6660(undefined8 *param_1)

{
  undefined8 uVar1;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010b8feac0();
  func_0x00010b8fd934(&PTR_FUN_110d73600);
  uVar1 = *unaff_x21;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(unaff_x21 + 1);
  *param_1 = uVar1;
  if (unaff_x21[2] != 0) {
    do {
      func_0x00010b8fdb28();
    } while (extraout_w11 != 0);
  }
  func_0x00010b8fe19c();
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f66b8; end: 10b8f670b;  */

void FUN_10b8f66b8(long param_1)

{
  undefined8 uStack_40;
  long *plStack_38;
  
  func_0x00010b8fdaf0(*(undefined8 *)(param_1 + 0x10));
  if (plStack_38 != (long *)0x0) {
    uStack_40 = 0;
    (**(code **)(*plStack_38 + 0x18))(plStack_38,param_1 + 0x18,param_1 + 0x20,&uStack_40);
    func_0x000104bddf60(uStack_40);
  }
  func_0x00010b8fe040();
  return;
}



/* Entry: 10b8f670c; end: 10b8f6763;  */

void FUN_10b8f670c(long param_1)

{
  func_0x00010007e5d0(param_1 + 0x18);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8f6764; end: 10b8f67ab;  */

void FUN_10b8f6764(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  func_0x00010b8fd4b8();
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_18 = extraout_x8;
  func_0x0001080ecf98(auStack_30,lVar1,1,0,0);
  func_0x00010b8fe7e0();
  func_0x00010b8fd3bc(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(lVar1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b8f67ac; end: 10b8f67ef;  */

void FUN_10b8f67ac(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10b8f67f0; end: 10b8f6833;  */

undefined8 * FUN_10b8f67f0(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  func_0x00010b8fd4b8();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  uStack_18 = extraout_x8;
  func_0x00010b9ac0a8(auStack_30,puVar1,puVar2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
  func_0x00010b8fe7e0();
  func_0x00010b8fd3bc(uStack_18);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  uVar3 = *puVar2;
  *puVar1 = &PTR_FUN_110d73660;
  puVar1[1] = uVar3;
  *puVar2 = 0;
  func_0x00010b9a8fa8(puVar1 + 2,puVar2 + 1);
  return puVar1;
}



/* Entry: 10b8f6834; end: 10b8f6867;  */

undefined8 * FUN_10b8f6834(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_110d73660;
  param_1[1] = uVar1;
  *param_2 = 0;
  func_0x00010b9a8fa8(param_1 + 2,param_2 + 1);
  return param_1;
}



/* Entry: 10b8f6868; end: 10b8f68af;  */

undefined8 FUN_10b8f6868(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b8fead8(param_1 + 8);
  FUN_10b9a8d98();
  func_0x0001003adc0c();
  func_0x000104bda3ac();
  return unaff_x19;
}



/* Entry: 10b8f68b0; end: 10b8f6947;  */

void FUN_10b8f68b0(void)

{
  undefined1 auStack_38 [24];
  
  FUN_10b9a77a8();
  FUN_10b9a7cac(auStack_38);
  func_0x00010b8f68e4(auStack_38);
  return;
}



/* Entry: 10b8f6948; end: 10b8f696b;  */

void FUN_10b8f6948(void)

{
  return;
}



/* Entry: 10b8f696c; end: 10b8f69d7;  */

void FUN_10b8f696c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b8fd9d4();
  func_0x00010b8f69a0();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 10b8f69d8; end: 10b8f7117;  */

void FUN_10b8f69d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long in_register_00005028;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  
  func_0x00010b8fe46c();
  func_0x00010b8fd9d4();
  do {
    plVar8 = unaff_x20;
LAB_10b8f6a10:
    while( true ) {
      unaff_x20 = plVar8;
      uVar9 = (long)unaff_x19 - (long)unaff_x20;
      uVar13 = (long)uVar9 / 0x38;
      cVar4 = SBORROW8(uVar13,5);
      cVar5 = (long)(uVar13 - 5) < 0;
      switch(uVar13) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x00010b8fe92c(unaff_x19[-4]);
        if (cVar5 == cVar4) {
          return;
        }
        func_0x00010b8fe53c();
        FUN_10b8f744c();
        return;
      case 3:
        func_0x00010b8fe38c(unaff_x20,unaff_x20 + 7);
        return;
      case 4:
        func_0x00010b8f71a8(unaff_x20,unaff_x20 + 7,unaff_x20 + 0xe,unaff_x19 + -7);
        return;
      case 5:
        FUN_10b8f720c(unaff_x20,unaff_x20 + 7,unaff_x20 + 0xe,unaff_x20 + 0x15,unaff_x19 + -7);
        return;
      }
      if ((long)uVar9 < 0x540) {
        if ((param_6 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while (plVar8 = unaff_x20, unaff_x20 = plVar8 + 7, unaff_x20 != unaff_x19) {
            if (plVar8[10] < plVar8[3]) {
              in_stack_00000058 = plVar8[8];
              in_stack_00000050 = *unaff_x20;
              in_stack_00000060 = plVar8[9];
              plVar8[8] = 0;
              plVar8[9] = 0;
              *unaff_x20 = 0;
              in_stack_00000070 = plVar8[0xb];
              in_stack_00000068 = plVar8[10];
              in_stack_00000080 = plVar8[0xd];
              in_stack_00000078 = plVar8[0xc];
              do {
                plVar6 = plVar8;
                func_0x00010b8fe5c0(plVar6 + 7);
                plVar8 = plVar6 + -7;
              } while (in_stack_00000068 < plVar6[-4]);
              func_0x00010b8f74a8(plVar6,&stack0x00000050);
              func_0x00010b8fdee4();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar11 = 0;
        plVar8 = unaff_x20;
        goto LAB_10b8f6d84;
      }
      if (param_5 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        uVar12 = uVar13 - 2 >> 1;
        uVar9 = uVar12;
        goto LAB_10b8f6e34;
      }
      plVar8 = unaff_x20 + (uVar13 >> 1) * 7;
      cVar4 = SBORROW8(uVar9,0x1c01);
      cVar5 = (long)(uVar9 - 0x1c01) < 0;
      if (uVar9 < 0x1c01) {
        func_0x00010b8fe38c(plVar8,unaff_x20);
      }
      else {
        func_0x00010b8fe38c(unaff_x20,plVar8);
        FUN_10b8f7118(unaff_x20 + 7,plVar8 + -7,unaff_x19 + -0xe);
        FUN_10b8f7118(unaff_x20 + 0xe,plVar8 + 7,unaff_x19 + -0x15);
        FUN_10b8f7118(plVar8 + -7,plVar8,plVar8 + 7);
        FUN_10b8f744c(unaff_x20,plVar8);
      }
      param_5 = param_5 + -1;
      if (((param_6 & 1) != 0) || (func_0x00010b8fe92c(unaff_x20[-4]), cVar5 != cVar4)) break;
      lVar16 = unaff_x20[1];
      lVar11 = *unaff_x20;
      in_stack_00000060 = unaff_x20[2];
      in_stack_00000050 = lVar11;
      in_stack_00000058 = lVar16;
      func_0x00010b8fde10();
      plVar6 = unaff_x20;
      if (lVar11 < unaff_x19[-4]) {
        do {
          plVar8 = plVar6 + 7;
          plVar7 = plVar6 + 10;
          plVar6 = plVar8;
        } while (*plVar7 <= lVar11);
      }
      else {
        do {
          plVar8 = plVar6 + 7;
          if (unaff_x19 <= plVar8) break;
          plVar7 = plVar6 + 10;
          plVar6 = plVar8;
        } while (*plVar7 <= lVar11);
      }
      plVar6 = unaff_x19;
      plVar7 = unaff_x19;
      in_stack_00000068 = lVar11;
      in_stack_00000070 = lVar16;
      in_stack_00000078 = param_2;
      in_stack_00000080 = in_register_00005028;
      if (plVar8 < unaff_x19) {
        do {
          plVar7 = plVar6 + -7;
          plVar14 = plVar6 + -4;
          plVar6 = plVar7;
        } while (lVar11 < *plVar14);
      }
      while (plVar8 < plVar7) {
        FUN_10b8f744c(plVar8,plVar7);
        do {
          plVar6 = plVar8 + 10;
          plVar8 = plVar8 + 7;
        } while (*plVar6 <= lVar11);
        do {
          plVar6 = plVar7 + -4;
          plVar7 = plVar7 + -7;
        } while (lVar11 < *plVar6);
      }
      plVar6 = plVar8 + -7;
      if (unaff_x20 != plVar6) {
        func_0x00010b8f74a8(unaff_x20,plVar6);
      }
      func_0x00010b8f74a8(plVar6,&stack0x00000050);
      func_0x00010b8fdee4();
      param_6 = 0;
    }
    lVar17 = unaff_x20[1];
    lVar16 = *unaff_x20;
    in_stack_00000060 = unaff_x20[2];
    in_stack_00000050 = lVar16;
    in_stack_00000058 = lVar17;
    func_0x00010b8fde10(0);
    lVar11 = extraout_x8;
    do {
      lVar3 = lVar11 + 0x50;
      lVar11 = lVar11 + 0x38;
    } while (*(long *)((long)unaff_x20 + lVar3) < lVar16);
    plVar6 = (long *)((long)unaff_x20 + lVar11);
    plVar7 = unaff_x19;
    plVar8 = plVar6;
    in_stack_00000068 = lVar16;
    in_stack_00000070 = lVar17;
    in_stack_00000078 = param_2;
    in_stack_00000080 = in_register_00005028;
    if (lVar11 == 0x38) {
      do {
        plVar14 = plVar7;
        if (plVar7 <= plVar6) break;
        plVar14 = plVar7 + -7;
        plVar1 = plVar7 + -4;
        plVar7 = plVar14;
      } while (lVar16 <= *plVar1);
    }
    else {
      do {
        plVar14 = plVar7 + -7;
        plVar1 = plVar7 + -4;
        plVar7 = plVar14;
      } while (lVar16 <= *plVar1);
    }
    while (plVar8 < plVar14) {
      FUN_10b8f744c(plVar8,plVar14);
      do {
        plVar1 = plVar8 + 10;
        plVar8 = plVar8 + 7;
      } while (*plVar1 < lVar16);
      do {
        plVar1 = plVar14 + -4;
        plVar14 = plVar14 + -7;
      } while (lVar16 <= *plVar1);
    }
    plVar14 = plVar8 + -7;
    if (unaff_x20 != plVar14) {
      func_0x00010b8f74a8(unaff_x20,plVar14);
    }
    func_0x00010b8f74a8(plVar14,&stack0x00000050);
    func_0x00010b8fdee4();
    if (plVar6 < plVar7) goto LAB_10b8f6bd8;
    plVar6 = unaff_x20;
    FUN_10b8f72a0(unaff_x20,plVar14);
    plVar7 = plVar8;
    FUN_10b8f72a0(plVar8,unaff_x19);
    if ((int)plVar7 == 0) goto code_r0x00010b8f6bd4;
    unaff_x19 = plVar14;
    if (((ulong)plVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b8f6d84:
  plVar6 = plVar8 + 7;
  if (plVar6 == unaff_x19) {
    return;
  }
  if (plVar8[10] < plVar8[3]) {
    in_stack_00000058 = plVar8[8];
    in_stack_00000050 = *plVar6;
    in_stack_00000060 = plVar8[9];
    plVar8[8] = 0;
    plVar8[9] = 0;
    *plVar6 = 0;
    in_stack_00000070 = plVar8[0xb];
    in_stack_00000068 = plVar8[10];
    in_stack_00000080 = plVar8[0xd];
    in_stack_00000078 = plVar8[0xc];
    lVar16 = lVar11;
    do {
      lVar17 = lVar16;
      func_0x00010b8fe5c0((long)unaff_x20 + lVar17 + 0x38);
      plVar8 = unaff_x20;
      if (lVar17 == 0) goto LAB_10b8f6dfc;
      lVar16 = lVar17 + -0x38;
    } while (in_stack_00000068 < *(long *)((long)unaff_x20 + lVar17 + -0x20));
    plVar8 = (long *)((long)unaff_x20 + lVar17);
LAB_10b8f6dfc:
    func_0x00010b8f74a8(plVar8,&stack0x00000050);
    func_0x00010b8fdee4();
  }
  lVar11 = lVar11 + 0x38;
  plVar8 = plVar6;
  goto LAB_10b8f6d84;
LAB_10b8f6e34:
  do {
    if ((long)uVar9 <= (long)uVar12) {
      uVar15 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
      plVar8 = unaff_x20 + uVar15 * 7;
      uVar2 = uVar9 * 2 + 2;
      uVar10 = uVar15;
      if ((long)uVar2 < (long)uVar13) {
        plVar6 = plVar8 + 3;
        plVar7 = plVar8 + 10;
        lVar11 = 0x38;
        if (*plVar7 <= *plVar6) {
          lVar11 = 0;
        }
        plVar8 = (long *)((long)plVar8 + lVar11);
        uVar10 = uVar2;
        if (*plVar7 <= *plVar6) {
          uVar10 = uVar15;
        }
      }
      plVar6 = unaff_x20 + uVar9 * 7;
      if (plVar6[3] <= plVar8[3]) {
        in_stack_00000058 = plVar6[1];
        in_stack_00000050 = *plVar6;
        in_stack_00000060 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        in_stack_00000070 = plVar6[4];
        lVar11 = plVar6[3];
        in_register_00005028 = plVar6[6];
        param_2 = plVar6[5];
        in_stack_00000068 = lVar11;
        in_stack_00000078 = param_2;
        in_stack_00000080 = in_register_00005028;
        do {
          plVar7 = plVar8;
          func_0x00010b8f74a8(plVar6,plVar7);
          if ((long)uVar12 < (long)uVar10) break;
          uVar15 = uVar10 << 1 | 1;
          plVar8 = unaff_x20 + uVar15 * 7;
          uVar2 = uVar10 * 2 + 2;
          uVar10 = uVar15;
          if ((long)uVar2 < (long)uVar13) {
            plVar6 = plVar8 + 3;
            plVar14 = plVar8 + 10;
            lVar16 = 0x38;
            if (*plVar14 <= *plVar6) {
              lVar16 = 0;
            }
            plVar8 = (long *)((long)plVar8 + lVar16);
            uVar10 = uVar2;
            if (*plVar14 <= *plVar6) {
              uVar10 = uVar15;
            }
          }
          plVar6 = plVar7;
        } while (lVar11 <= plVar8[3]);
        func_0x00010b8f74a8(plVar7,&stack0x00000050);
        func_0x00010b8fdee4();
      }
    }
    uVar9 = uVar9 - 1;
  } while (-1 < (long)uVar9);
  do {
    if ((long)uVar13 < 2) {
      return;
    }
    lVar16 = unaff_x20[1];
    lVar11 = *unaff_x20;
    in_stack_00000020 = unaff_x20[2];
    in_stack_00000010 = lVar11;
    in_stack_00000018 = lVar16;
    func_0x00010b8fde10(uVar13 - 2);
    plVar8 = unaff_x20;
    uVar9 = 0;
    in_stack_00000028 = lVar11;
    in_stack_00000030 = lVar16;
    in_stack_00000038 = param_2;
    in_stack_00000040 = in_register_00005028;
    do {
      uVar2 = uVar9 << 1 | 1;
      uVar12 = uVar9 * 2 + 2;
      plVar6 = plVar8 + uVar9 * 7 + 7;
      uVar15 = uVar2;
      if (((long)uVar12 < (long)uVar13) &&
         (plVar6 = plVar8 + uVar9 * 7 + 0xe, uVar15 = uVar12,
         plVar8[uVar9 * 7 + 0x11] <= plVar8[uVar9 * 7 + 10])) {
        plVar6 = plVar8 + uVar9 * 7 + 7;
        uVar15 = uVar2;
      }
      plVar8 = plVar6;
      func_0x00010b8fe5c0();
      uVar9 = uVar15;
    } while ((long)uVar15 <= (long)(extraout_x8_00 >> 1));
    unaff_x19 = unaff_x19 + -7;
    if (plVar8 == unaff_x19) {
      func_0x00010b8f74a8(plVar8,&stack0x00000010);
    }
    else {
      func_0x00010b8f74a8(plVar8,unaff_x19);
      func_0x00010b8f74a8(unaff_x19,&stack0x00000010);
      uVar9 = (long)plVar8 + (0x38 - (long)unaff_x20);
      if (0x38 < (long)uVar9) {
        uVar9 = uVar9 / 0x38 - 2 >> 1;
        if ((unaff_x20 + uVar9 * 7)[3] < plVar8[3]) {
          in_stack_00000058 = plVar8[1];
          in_stack_00000050 = *plVar8;
          in_stack_00000060 = plVar8[2];
          plVar8[1] = 0;
          plVar8[2] = 0;
          *plVar8 = 0;
          in_stack_00000070 = plVar8[4];
          lVar11 = plVar8[3];
          in_register_00005028 = plVar8[6];
          param_2 = plVar8[5];
          plVar6 = unaff_x20 + uVar9 * 7;
          in_stack_00000068 = lVar11;
          in_stack_00000078 = param_2;
          in_stack_00000080 = in_register_00005028;
          do {
            plVar7 = plVar6;
            func_0x00010b8f74a8(plVar8,plVar7);
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            plVar6 = unaff_x20 + uVar9 * 7;
            plVar8 = plVar7;
          } while ((unaff_x20 + uVar9 * 7)[3] < lVar11);
          func_0x00010b8f74a8(plVar7,&stack0x00000050);
          func_0x00010b8fdee4();
        }
      }
    }
    func_0x00010b8fe364();
    uVar13 = uVar13 - 1;
  } while( true );
code_r0x00010b8f6bd4:
  if (((ulong)plVar6 & 1) == 0) {
LAB_10b8f6bd8:
    FUN_10b8f69d8(unaff_x20,plVar14,param_5,(uint)param_6 & 1);
    param_6 = 0;
  }
  goto LAB_10b8f6a10;
}



/* Entry: 10b8f7118; end: 10b8f720b;  */

void FUN_10b8f7118(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_3;
  func_0x00010b8fea3c();
  lVar4 = *(long *)(param_2 + 0x18);
  lVar5 = puVar3[3];
  if (lVar4 < *(long *)(param_1 + 0x18)) {
    cVar1 = SBORROW8(lVar5,lVar4);
    cVar2 = lVar5 - lVar4 < 0;
    if (lVar4 <= lVar5) {
      FUN_10b8f744c();
      func_0x00010b8fea60(param_3[3]);
      unaff_x21 = unaff_x19;
      if (cVar2 == cVar1) {
        return;
      }
    }
LAB_10b8f7198:
    uStack_58 = unaff_x21[1];
    uStack_60 = *unaff_x21;
    uStack_50 = unaff_x21[2];
    unaff_x21[1] = 0;
    unaff_x21[2] = 0;
    *unaff_x21 = 0;
    uStack_40 = unaff_x21[4];
    uStack_48 = unaff_x21[3];
    uStack_38 = unaff_x21[5];
    func_0x00010b8f74a8();
    func_0x00010b8f74a8(param_3,&uStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
    return;
  }
  if (lVar5 < lVar4) {
    func_0x00010b8fd928();
    FUN_10b8f744c();
    param_3 = unaff_x19;
    if ((long)unaff_x19[3] < (long)unaff_x21[3]) goto LAB_10b8f7198;
  }
  return;
}



/* Entry: 10b8f720c; end: 10b8f729f;  */

void FUN_10b8f720c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  long param_5)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8fd9d4();
  func_0x00010b8f71a8();
  if (*(long *)(param_5 + 0x18) < (long)param_4[3]) {
    puVar3 = param_4;
    FUN_10b8f744c(param_4,param_5);
    lVar4 = param_4[3];
    lVar5 = *(long *)(param_3 + 0x18);
    cVar1 = SBORROW8(lVar4,lVar5);
    cVar2 = lVar4 - lVar5 < 0;
    if (lVar4 < lVar5) {
      func_0x00010b8fe730();
      func_0x00010b8fea60(*(undefined8 *)(param_3 + 0x18));
      if (cVar2 != cVar1) {
        func_0x00010b8fe894();
        func_0x00010b8fe92c(*(undefined8 *)(unaff_x19 + 0x18));
        if (cVar2 != cVar1) {
          func_0x00010b8fe008();
          uStack_58 = puVar3[1];
          uStack_60 = *puVar3;
          uStack_50 = puVar3[2];
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          uStack_48 = puVar3[3];
          func_0x00010b8f74a8();
          func_0x00010b8f74a8(param_5,&uStack_60);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10b8f72a0; end: 10b8f744b;  */

void FUN_10b8f72a0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x00010b8fda54();
  lVar8 = (param_2 - param_1) / 0x38;
  cVar3 = SBORROW8(lVar8,5);
  cVar4 = lVar8 + -5 < 0;
  switch(lVar8) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010b8fea60(unaff_x20[-4],1);
    if (cVar4 != cVar3) {
      func_0x00010b8f744c();
    }
    break;
  case 3:
    func_0x00010b8f7118();
    break;
  case 4:
    func_0x00010b8f71a8();
    break;
  case 5:
    FUN_10b8f720c();
    break;
  default:
    func_0x00010b8fe38c();
    lVar8 = 0;
    iVar9 = 0;
    puVar2 = (undefined8 *)(unaff_x19 + 0xa8);
    puVar6 = (undefined8 *)(unaff_x19 + 0x70);
    while (puVar5 = puVar2, puVar5 != unaff_x20) {
      if ((long)puVar5[3] < (long)puVar6[3]) {
        uStack_88 = puVar5[1];
        uStack_90 = *puVar5;
        uStack_80 = puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uStack_70 = puVar5[4];
        lStack_78 = puVar5[3];
        uStack_60 = puVar5[6];
        uStack_68 = puVar5[5];
        lVar7 = lVar8;
        do {
          lVar1 = unaff_x19 + lVar7;
          func_0x00010b8f74a8(lVar1 + 0xa8,lVar1 + 0x70);
          if (lVar7 == -0x70) break;
          lVar7 = lVar7 + -0x38;
        } while (lStack_78 < *(long *)(lVar1 + 0x50));
        func_0x00010b8f74a8();
        iVar9 = iVar9 + 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
        if (iVar9 == 8) {
          return;
        }
      }
      lVar8 = lVar8 + 0x38;
      puVar6 = puVar5;
      puVar2 = puVar5 + 7;
    }
  }
  return;
}



/* Entry: 10b8f744c; end: 10b8f751f;  */

void FUN_10b8f744c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_40 = param_1[4];
  uStack_48 = param_1[3];
  uStack_30 = param_1[6];
  uStack_38 = param_1[5];
  func_0x00010b8f74a8();
  func_0x00010b8f74a8(param_2,&uStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  return;
}



/* Entry: 10b8f7520; end: 10b8f7527;  */

void FUN_10b8f7520(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lStack_38;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x1d0) + 0x28) + 0x10);
  func_0x0001080da434();
  lStack_38 = param_2;
  (**(code **)(*plVar1 + 0x60))(param_1,plVar1,&lStack_38,1);
  func_0x00010b8cfc30();
  return;
}



/* Entry: 10b8f7528; end: 10b8f7557;  */

void FUN_10b8f7528(undefined8 param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10b9a8dd4(param_1,&uStack_28,0);
  func_0x00010b8fe120();
  return;
}



/* Entry: 10b8f7558; end: 10b8f760b;  */

void FUN_10b8f7558(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_stack_00000010;
  code *in_stack_00000038;
  undefined **in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined2 uStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x00010b8feb90();
  func_0x00010b8fd41c();
  in_stack_00000068 = extraout_x8;
  func_0x00010b8d3398(*(undefined8 *)(param_1 + 0x1d0));
  uVar4 = *param_2;
  puVar6 = &stack0x00000010;
  func_0x00010b8fe028(*(undefined8 *)(param_2[1] + 0x10));
  in_stack_00000038 = FUN_10b8f760c;
  in_stack_00000040 = &PTR_LAB_110d736a0;
  func_0x00010b8fdd04();
  lVar5 = in_stack_00000010;
  plVar2 = puVar6 + 1;
  *puVar6 = uVar4;
  puVar3 = &stack0x00000010;
  (**(code **)(lVar5 + 0x10))();
  in_stack_00000048 = puVar6;
  func_0x00010b8fe53c();
  FUN_10b8ccc4c();
  func_0x00010b8fd604(in_stack_00000040);
  func_0x00010b8fd804(in_stack_00000010);
  func_0x00010b8fd3bc(in_stack_00000068);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8fd430();
  puVar6 = (undefined8 *)puVar3[2];
  lVar5 = *plVar2;
  lStack_38 = plVar2[2];
  lStack_40 = plVar2[1];
  lStack_30 = plVar2[3];
  lStack_48 = lVar5;
  *plVar2 = 0;
  uVar1 = lVar5 == 1;
  if (((bool)uVar1) && (lStack_30 != 0)) {
    FUN_10bcd5a00(&uStack_60,lStack_38);
    func_0x000107c31084();
    func_0x000107c31080(auStack_78);
    func_0x00010b8fe560();
    FUN_10b9a8e18();
    func_0x00010b8fe028(*puVar6,auStack_70);
    func_0x00010b8fdbfc();
    func_0x00010b8fd9e0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  else {
    uStack_58 = 1;
    uStack_60 = 0;
    func_0x00010b8fe028(*puVar6,&uStack_60);
    func_0x00010b8fe08c();
  }
  plVar2 = &lStack_48;
  func_0x0001080c5c8c();
  func_0x00010b8fd3a4();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = plVar2[1];
  if (lVar5 != 0) {
    func_0x00010b8fe394(*(undefined8 *)(lVar5 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5);
    return;
  }
  return;
}



/* Entry: 10b8f760c; end: 10b8f76ff;  */

void FUN_10b8f760c(long *param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined2 uStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x00010b8fd430();
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  lStack_48 = *param_1;
  lStack_38 = param_1[2];
  lStack_40 = param_1[1];
  lStack_30 = param_1[3];
  *param_1 = 0;
  uVar1 = lStack_48 == 1;
  if (((bool)uVar1) && (lStack_30 != 0)) {
    FUN_10bcd5a00(&uStack_60,lStack_38);
    func_0x000107c31084();
    func_0x000107c31080(auStack_78);
    func_0x00010b8fe560();
    FUN_10b9a8e18();
    func_0x00010b8fe028(*puVar3,auStack_70);
    func_0x00010b8fdbfc();
    func_0x00010b8fd9e0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  else {
    uStack_58 = 1;
    uStack_60 = 0;
    func_0x00010b8fe028(*puVar3,&uStack_60);
    func_0x00010b8fe08c();
  }
  plVar2 = &lStack_48;
  func_0x0001080c5c8c();
  func_0x00010b8fd3a4();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = plVar2[1];
  if (lVar4 != 0) {
    func_0x00010b8fe394(*(undefined8 *)(lVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10b8f7700; end: 10b8f7703;  */

void FUN_10b8f7700(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8f7704; end: 10b8f774b;  */

void FUN_10b8f7704(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b8fdcd4();
  *param_1 = &PTR_LAB_110d736a0;
  func_0x00010b8fdd04();
  *param_1 = *unaff_x20;
  func_0x00010b8fe0e0(*(undefined8 *)(unaff_x20[1] + 0x18),param_1 + 1);
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f774c; end: 10b8f788b;  */

void FUN_10b8f774c(void)

{
  undefined8 uStack_28;
  
  func_0x00010b8ca1ac(&uStack_28);
  func_0x00010b8fdcc8();
  FUN_10b9a8f54();
  func_0x000104bd4e64(uStack_28);
  return;
}



/* Entry: 10b8f788c; end: 10b8f789b;  */

void FUN_10b8f788c(long param_1)

{
  undefined1 in_ZR;
  long *unaff_x19;
  
  func_0x00010b8fdf68(param_1 + 8);
  FUN_10b8e552c();
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*unaff_x19 != (long *)0x0)) {
    (**(code **)(*(long *)*unaff_x19 + 0x18))();
  }
  return;
}



/* Entry: 10b8f789c; end: 10b8f78db;  */

void FUN_10b8f789c(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b8fd9d4();
  func_0x00010b8fe69c(&PTR_FUN_110d736c0);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b8f78dc; end: 10b8f7937;  */

void FUN_10b8f78dc(long param_1)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b8fe45c();
    while (func_0x00010b8fe8f4(), !(bool)in_ZR) {
      if (-1 < *(char *)(param_1 + unaff_x21)) {
        func_0x00010b8fe9ac();
        FUN_10b8f7938();
      }
      unaff_x21 = unaff_x21 + 1;
    }
    __ZdlPv();
    func_0x00010b8fd890();
  }
  return;
}



/* Entry: 10b8f7938; end: 10b8f79b3;  */

undefined8 FUN_10b8f7938(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b8fead8();
  FUN_10b8a1838();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8f79b4; end: 10b8f79d3;  */

void FUN_10b8f79b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8f0860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8f79d4; end: 10b8f79d7;  */

void FUN_10b8f79d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8f79d8; end: 10b8f7a3b;  */

void FUN_10b8f79d8(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  
  func_0x00010b8feac0();
  func_0x00010b8fd934(&PTR_FUN_110d736e0);
  lVar1 = unaff_x21[1];
  uVar2 = *unaff_x21;
  param_1[1] = unaff_x21[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  if (unaff_x21[2] != 0) {
    do {
      func_0x00010b8fdb28();
    } while (extraout_w11 != 0);
  }
  func_0x00010b8fe19c();
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8f7a3c; end: 10b8f7a93;  */

void FUN_10b8f7a3c(long param_1)

{
  long *plStack_48;
  long alStack_30 [2];
  
  FUN_10b8e62c4(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    func_0x00010b8fdaf0();
    if (plStack_48 != (long *)0x0) {
      (**(code **)(*plStack_48 + 0x30))(plStack_48,param_1 + 0x20);
    }
    func_0x00010b8fe040();
  }
  func_0x0001080d3308(alStack_30);
  return;
}



/* Entry: 10b8f7a94; end: 10b8f7b17;  */

void FUN_10b8f7a94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110d73700;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[3] = param_2[2];
  param_2[2] = 0;
  return;
}



/* Entry: 10b8f7b18; end: 10b8f7baf;  */

long * FUN_10b8f7b18(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  code *extraout_x9;
  undefined8 *unaff_x19;
  long *plVar1;
  long unaff_x21;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_48;
  undefined8 uStack_40;
  
  func_0x00010b8fdffc();
  func_0x00010b8fd3f4();
  func_0x00010b8fe6c4();
  plVar1 = (long *)unaff_x19[1];
  plStack_48 = param_1;
  uStack_40 = param_2;
  if ((*(byte *)(plVar1 + 1) & 1) == 0) {
    in_ZR = *(char *)(unaff_x21 + 0x20) == '\x01';
    if ((bool)in_ZR) {
      param_1 = plVar1;
      (**(code **)(*plVar1 + 0x18))();
      *(undefined1 *)(plVar1 + 1) = 1;
    }
  }
  else {
    uStack_78 = *unaff_x19;
    uStack_70 = 0;
    uStack_68 = 0;
    plStack_60 = plVar1;
    func_0x00010b8fdb50(&uStack_78);
    func_0x00010b8fdb38();
    (*extraout_x9)(auStack_98);
    func_0x00010b8fdda4();
  }
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_1[2] != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 1;
}



/* Entry: 10b8f7bb0; end: 10b8f7c03;  */

long FUN_10b8f7bb0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 8;
}



/* Entry: 10b8f7c04; end: 10b8f7c67;  */

void FUN_10b8f7c04(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010b8fd9d4();
  lVar3 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar3 - lVar2);
  lVar4 = lVar3;
  while (lVar4 != lVar2) {
    func_0x00010b8fe40c();
    lVar4 = extraout_x9;
  }
  for (; lVar3 != lVar2; lVar3 = lVar3 + 8) {
    FUN_10b8fb21c();
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar1;
  unaff_x20[1] = lVar3;
  func_0x00010b8fdc8c();
  return;
}



/* Entry: 10b8f7c68; end: 10b8f7cdf;  */

undefined1  [16] FUN_10b8f7c68(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bfe188();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    FUN_10b8fb21c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b8f7ce0; end: 10b8f7d97;  */

undefined1 * FUN_10b8f7ce0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  ulong extraout_x9;
  undefined8 uVar3;
  long unaff_x19;
  undefined1 *puVar4;
  undefined8 *unaff_x20;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if ((lVar2 - lVar1 >> 3) + 1U >> 0x3d == 0) {
    func_0x00010b8fda54();
    plStack_38 = param_1 + 2;
    uStack_58 = *plStack_38 - extraout_x8 >> 2;
    if (uStack_58 <= extraout_x9) {
      uStack_58 = extraout_x9;
    }
    if (0x7ffffffffffffff7 < (ulong)(*plStack_38 - extraout_x8)) {
      uStack_58 = 0x1fffffffffffffff;
    }
    if (uStack_58 == 0) {
      param_2 = 0;
    }
    else {
      FUN_10b8f7c68();
    }
    puStack_50 = (undefined8 *)(uStack_58 + (lVar2 - lVar1));
    lStack_40 = uStack_58 + param_2 * 8;
    uVar3 = *unaff_x20;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = uVar3;
    func_0x00010b8fdcc8();
    FUN_10b8f7c04();
    puVar4 = *(undefined1 **)(unaff_x19 + 8);
    func_0x00010b8f7c98(&uStack_58);
    return puVar4;
  }
  func_0x00010bdb3f48();
  pcStack_68 = FUN_10b8f7d98;
  puVar4 = &uStack_71;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10b8f7dc0(puVar4,param_1,param_2,param_3);
  return puVar4;
}



/* Entry: 10b8f7d98; end: 10b8f7dbf;  */

void FUN_10b8f7d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b8f7dc0(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b8f7dc0; end: 10b8f7e0f;  */

void FUN_10b8f7dc0(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b8fe2d8();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x10) {
    func_0x00010b8fe8e8();
    func_0x00010b8e6300();
  }
  func_0x00010b8fe008();
  return;
}



/* Entry: 10b8f7e10; end: 10b8f7e47;  */

void FUN_10b8f7e10(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  FUN_10b8f10ac(lVar2);
  plVar1 = (long *)*param_1;
  *(undefined1 *)(lVar2 + 0x448) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010b8f7e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1d8))();
  return;
}



/* Entry: 10b8f7e48; end: 10b8f7e6b;  */

void FUN_10b8f7e48(void)

{
  return;
}



/* Entry: 10b8f7e6c; end: 10b8f7e93;  */

void FUN_10b8f7e6c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  lVar2 = param_2;
  func_0x00010b8fde94();
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  *puVar3 = uVar1;
  puVar3[1] = lVar2;
  return;
}



/* Entry: 10b8f7e94; end: 10b8f7eaf;  */

void FUN_10b8f7e94(void)

{
  return;
}



/* Entry: 10b8f7eb0; end: 10b8f7f0f;  */

void FUN_10b8f7eb0(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010b8fde94(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010b8f7ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10b8f7f10; end: 10b8f7f13;  */

void FUN_10b8f7f10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}


