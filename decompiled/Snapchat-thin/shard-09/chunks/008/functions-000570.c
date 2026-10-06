/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10727d368; end: 10727d3ab;  */

void FUN_10727d368(long param_1)

{
  if (*(uint *)(param_1 + 0x208) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996d30)[*(uint *)(param_1 + 0x208)]);
  }
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  return;
}



/* Entry: 10727d3ac; end: 10727d3bf;  */

void FUN_10727d3ac(void)

{
  return;
}



/* Entry: 10727d3c0; end: 10727d3e3;  */

void FUN_10727d3c0(void)

{
  func_0x000107285b10();
  FUN_10727d2e4();
  return;
}



/* Entry: 10727d3e4; end: 10727d403;  */

void FUN_10727d3e4(long param_1)

{
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    FUN_107283000();
  }
  return;
}



/* Entry: 10727d404; end: 10727d473;  */

void FUN_10727d404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *param_7 = param_1;
  param_7[1] = param_2;
  uVar2 = param_8[1];
  uVar1 = *param_8;
  uVar4 = param_8[3];
  uVar3 = param_8[2];
  uVar6 = *(undefined8 *)((long)param_8 + 0x21);
  uVar5 = *(undefined8 *)((long)param_8 + 0x19);
  *(undefined1 *)(param_7 + 8) = 0;
  *(undefined8 *)((long)param_7 + 0x31) = uVar6;
  *(undefined8 *)((long)param_7 + 0x29) = uVar5;
  param_7[3] = uVar2;
  param_7[2] = uVar1;
  param_7[5] = uVar4;
  param_7[4] = uVar3;
  *(undefined1 *)(param_7 + 0xb) = 0;
  if (*(char *)(param_8 + 9) == '\x01') {
    uVar2 = param_8[7];
    uVar1 = param_8[6];
    param_7[10] = param_8[8];
    param_7[9] = uVar2;
    param_7[8] = uVar1;
    param_8[7] = 0;
    param_8[8] = 0;
    param_8[6] = 0;
    *(undefined1 *)(param_7 + 0xb) = 1;
  }
  param_7[0xc] = param_3;
  param_7[0xd] = param_4;
  param_7[0xe] = param_5;
  param_7[0xf] = param_6;
  param_7[0x10] = in_stack_00000000;
  param_7[0x11] = in_stack_00000008;
  param_7[0x12] = in_stack_00000010;
  param_7[0x13] = in_stack_00000018;
  param_7[0x14] = in_stack_00000020;
  param_7[0x15] = in_stack_00000028;
  return;
}



/* Entry: 10727d474; end: 10727d507;  */

long FUN_10727d474(long param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puStack_38;
  
  puVar2 = (undefined1 *)(param_1 + 8);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  FUN_10727d508(puVar2);
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (uVar1 != 0xffffffff) {
    puStack_38 = puVar2;
    (*(code *)(&PTR_FUN_110996d68)[uVar1])(&puStack_38,param_2 + 8);
    *(uint *)(param_1 + 0xe8) = uVar1;
  }
  FUN_10724cbe8(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



/* Entry: 10727d508; end: 10727d54b;  */

void FUN_10727d508(long param_1)

{
  if (*(uint *)(param_1 + 0xe0) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996d48)[*(uint *)(param_1 + 0xe0)]);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  return;
}



/* Entry: 10727d54c; end: 10727d55f;  */

void FUN_10727d54c(void)

{
  return;
}



/* Entry: 10727d560; end: 10727d593;  */

long FUN_10727d560(long param_1)

{
  FUN_107266a30(param_1 + 0xa8);
  FUN_107266a30(param_1 + 0x70);
  func_0x000107285ad4();
  func_0x000107285750();
  return param_1;
}



/* Entry: 10727d594; end: 10727d5ab;  */

void FUN_10727d594(void)

{
  return;
}



/* Entry: 10727d5ac; end: 10727d613;  */

void FUN_10727d5ac(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727d614();
  func_0x000107285b90();
  FUN_10727d614();
  FUN_10727d614(unaff_x19 + 0x70,unaff_x20 + 0x70);
  FUN_10727d614(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  return;
}



/* Entry: 10727d614; end: 10727d643;  */

void FUN_10727d614(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10727d644();
  return;
}



/* Entry: 10727d644; end: 10727d687;  */

void FUN_10727d644(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_107266a30();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_FUN_110996d88);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 10727d688; end: 10727d69b;  */

void FUN_10727d688(void)

{
  return;
}



/* Entry: 10727d69c; end: 10727d6bb;  */

void FUN_10727d69c(long param_1)

{
  long unaff_x19;
  
  func_0x000107285c78();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10727d6bc; end: 10727d70f;  */

void FUN_10727d6bc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10727d710; end: 10727d753;  */

void FUN_10727d710(long param_1)

{
  if (*(uint *)(param_1 + 0xc0) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996da0)[*(uint *)(param_1 + 0xc0)]);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  return;
}



/* Entry: 10727d754; end: 10727d76b;  */

void FUN_10727d754(void)

{
  return;
}



/* Entry: 10727d76c; end: 10727d7e7;  */

void FUN_10727d76c(void)

{
  func_0x000107285d00();
  func_0x000107285a54();
  return;
}



/* Entry: 10727d7e8; end: 10727d8c3;  */

void FUN_10727d7e8(long param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puStack_48;
  
  func_0x0001006392cc();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  func_0x000107285ccc();
  uVar1 = *(uint *)(unaff_x20 + 200);
  if (uVar1 != 0xffffffff) {
    puStack_48 = (undefined1 *)(param_1 + 8);
    (*(code *)(&PTR_FUN_110996dc0)[uVar1])(&puStack_48,unaff_x20 + 8);
    *(uint *)(unaff_x19 + 200) = uVar1;
  }
  puVar2 = (undefined1 *)(unaff_x19 + 0xd8);
  *puVar2 = 0;
  *(undefined4 *)(unaff_x19 + 0x1b8) = 0xffffffff;
  FUN_10727d508(puVar2);
  uVar1 = *(uint *)(unaff_x20 + 0x1b8);
  if (uVar1 != 0xffffffff) {
    puStack_48 = puVar2;
    (*(code *)(&PTR_FUN_110996de0)[uVar1])(&puStack_48,unaff_x20 + 0xd8);
    *(uint *)(unaff_x19 + 0x1b8) = uVar1;
  }
  func_0x000105302f48(unaff_x19 + 0x1c0,unaff_x20 + 0x1c0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x1f0);
  *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x20 + 0x200);
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x1f8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar5;
  return;
}



/* Entry: 10727d8c4; end: 10727d8db;  */

void FUN_10727d8c4(undefined8 *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*param_1,param_2,0x48);
  return;
}



/* Entry: 10727d8dc; end: 10727d96f;  */

void FUN_10727d8dc(long param_1)

{
  long unaff_x19;
  
  func_0x0001072856b0();
  func_0x000104c318bc();
  func_0x000104c318bc(param_1 + 0x38,unaff_x19 + 0x38);
  func_0x000107285da0();
  return;
}



/* Entry: 10727d970; end: 10727d987;  */

void FUN_10727d970(void)

{
  return;
}



/* Entry: 10727d988; end: 10727d9cb;  */

void FUN_10727d988(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072856b0();
  FUN_10727d9cc();
  FUN_10727d9cc(param_1 + 0x38,unaff_x19 + 0x38);
  FUN_10727d9cc(unaff_x20 + 0x70,unaff_x19 + 0x70);
  FUN_10727d9cc(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  return;
}



/* Entry: 10727d9cc; end: 10727d9f3;  */

void FUN_10727d9cc(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10727d9f4();
  return;
}



/* Entry: 10727d9f4; end: 10727da37;  */

void FUN_10727d9f4(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_107266a30();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_FUN_110996e00);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 10727da38; end: 10727da4b;  */

void FUN_10727da38(void)

{
  return;
}



/* Entry: 10727da4c; end: 10727da6f;  */

void FUN_10727da4c(long param_1,long param_2)

{
  FUN_10727da70();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 10727da70; end: 10727da93;  */

void FUN_10727da70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



/* Entry: 10727da94; end: 10727dae7;  */

void FUN_10727da94(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x208) != -1 || *(int *)(param_2 + 0x208) != -1) {
    if (*(int *)(param_2 + 0x208) == -1) {
      if (*(uint *)(param_1 + 0x208) != 0xffffffff) {
        func_0x000107285594((&PTR_FUN_110996d30)[*(uint *)(param_1 + 0x208)],param_1,param_1,param_2
                           );
      }
      *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
      return;
    }
    func_0x000107285cd4();
  }
  return;
}



/* Entry: 10727dae8; end: 10727db13;  */

void FUN_10727dae8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x208) != 0) {
    FUN_10727d368(lVar1);
    *(undefined4 *)(lVar1 + 0x208) = 0;
  }
  return;
}



/* Entry: 10727db14; end: 10727db83;  */

/* WARNING: Possible PIC construction at 0x00010727db48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010727db4c) */

void FUN_10727db14(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107285d60();
  if (*(int *)(unaff_x21 + 0x208) == 1) {
    func_0x000107285994();
    FUN_10726d358();
    if (*(char *)(param_2 + 0x27) < '\0') {
      func_0x000107c60e14(*(undefined8 *)(param_2 + 0x10));
    }
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    *(undefined1 *)(unaff_x19 + 0x27) = 0;
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
    return;
  }
  FUN_10727d368();
  func_0x000107285de8();
  FUN_10727dc80();
  *(undefined4 *)(unaff_x21 + 0x208) = 1;
  return;
}



/* Entry: 10727db84; end: 10727dc7f;  */

void FUN_10727db84(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_38;
  
  func_0x000107285d60();
  if (*(int *)(unaff_x21 + 0x208) == 2) {
    uVar2 = *(uint *)(unaff_x19 + 200);
    if (*(int *)(param_2 + 200) != -1 || uVar2 != 0xffffffff) {
      lVar1 = param_2 + 8;
      if (uVar2 == 0xffffffff) {
        FUN_10727d710(lVar1);
      }
      else {
        lStack_38 = lVar1;
        (*(code *)(&PTR_FUN_110996e30)[uVar2])(&lStack_38,lVar1,unaff_x19 + 8);
      }
    }
    uVar2 = *(uint *)(unaff_x19 + 0x1b8);
    if (*(int *)(param_2 + 0x1b8) != -1 || uVar2 != 0xffffffff) {
      lVar1 = param_2 + 0xd8;
      if (uVar2 == 0xffffffff) {
        FUN_10727d508(lVar1);
      }
      else {
        lStack_38 = lVar1;
        (*(code *)(&PTR_FUN_110996e50)[uVar2])(&lStack_38,lVar1,unaff_x19 + 0xd8);
      }
    }
    func_0x000100639330(param_2 + 0x1c0,unaff_x19 + 0x1c0);
    uVar3 = *(undefined1 *)(unaff_x19 + 0x200);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x1e0);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x1f8);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x1f0);
    *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x1e8);
    *(undefined8 *)(param_2 + 0x1e0) = uVar6;
    *(undefined8 *)(param_2 + 0x1f8) = uVar5;
    *(undefined8 *)(param_2 + 0x1f0) = uVar4;
    *(undefined1 *)(param_2 + 0x200) = uVar3;
  }
  else {
    FUN_10727d368();
    func_0x000107285de8();
    FUN_10727d7e8();
    *(undefined4 *)(unaff_x21 + 0x208) = 2;
  }
  return;
}



/* Entry: 10727dc80; end: 10727dcbf;  */

void FUN_10727dc80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10727dcc0; end: 10727dd57;  */

void FUN_10727dcc0(void)

{
  long unaff_x20;
  
  func_0x000107285d54();
  if (*(int *)(unaff_x20 + 0xc0) != 0) {
    func_0x000107285a5c();
    func_0x000107285838();
    *(undefined4 *)(unaff_x20 + 0xc0) = 0;
    return;
  }
  func_0x000107285994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)();
  return;
}



/* Entry: 10727dd58; end: 10727de23;  */

void FUN_10727dd58(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107285d60();
  if (*(int *)(unaff_x21 + 0xc0) == 2) {
    func_0x000107285994();
    func_0x000104c2f1f0();
    func_0x000107285c38();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x95);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x8d);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(param_2 + 0x70) = uVar5;
    *(undefined8 *)(param_2 + 0x88) = uVar4;
    *(undefined8 *)(param_2 + 0x80) = uVar3;
    *(undefined8 *)(param_2 + 0x95) = uVar2;
    *(undefined8 *)(param_2 + 0x8d) = uVar1;
  }
  else {
    func_0x000107285ccc();
    func_0x000107285de8();
    FUN_10727d8dc();
    *(undefined4 *)(unaff_x21 + 0xc0) = 2;
  }
  return;
}



/* Entry: 10727de24; end: 10727de4f;  */

void FUN_10727de24(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0xe0) != 0) {
    FUN_10727d508(lVar1);
    *(undefined4 *)(lVar1 + 0xe0) = 0;
  }
  return;
}



/* Entry: 10727de50; end: 10727de57;  */

void FUN_10727de50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0xe0) == 1) {
    func_0x000107285994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)();
    return;
  }
  FUN_10727d508();
  func_0x0001072858fc();
  _memcpy();
  *(undefined4 *)(lVar1 + 0xe0) = 1;
  return;
}



/* Entry: 10727de58; end: 10727df87;  */

long FUN_10727de58(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107285d54();
  if (*(int *)(unaff_x20 + 0xe0) == 2) {
    func_0x000107285994();
    func_0x0001072856b0();
    FUN_10727df88();
    FUN_10727df88(unaff_x20 + 0x38,unaff_x19 + 0x38);
    FUN_10727df88(unaff_x20 + 0x70,unaff_x19 + 0x70);
    FUN_10727df88(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
    return unaff_x20;
  }
  lVar1 = unaff_x20;
  FUN_10727d508();
  func_0x0001072858fc();
  FUN_10727d988();
  *(undefined4 *)(unaff_x20 + 0xe0) = 2;
  return lVar1;
}



/* Entry: 10727df88; end: 10727dfab;  */

undefined8 FUN_10727df88(undefined8 param_1)

{
  FUN_10727dfac();
  return param_1;
}



/* Entry: 10727dfac; end: 10727dffb;  */

void FUN_10727dfac(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x0001072745a8((&PTR_FUN_110995e60)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x000107285cd4();
  }
  return;
}



/* Entry: 10727dffc; end: 10727e00f;  */

void FUN_10727dffc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) != 0) {
    uStack_18 = param_3;
    FUN_10727e03c(&lStack_20);
  }
  return;
}



/* Entry: 10727e010; end: 10727e03b;  */

void FUN_10727e010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_10727e03c(&lStack_20);
  }
  return;
}



/* Entry: 10727e03c; end: 10727e05b;  */

void FUN_10727e03c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107285750();
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 10727e05c; end: 10727e063;  */

void FUN_10727e05c(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lStack_20;
  undefined4 *puStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  puStack_18 = param_3;
  FUN_10727e0a0(&lStack_20);
  return;
}



/* Entry: 10727e064; end: 10727e09f;  */

void FUN_10727e064(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lStack_20;
  undefined4 *puStack_18;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  lStack_20 = param_1;
  puStack_18 = param_3;
  FUN_10727e0a0(&lStack_20);
  return;
}



/* Entry: 10727e0a0; end: 10727e0ab;  */

void FUN_10727e0a0(undefined8 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x0001072856b0(*param_1,param_1[1]);
  FUN_107266a30();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 1;
  return;
}



/* Entry: 10727e0ac; end: 10727e0db;  */

void FUN_10727e0ac(void)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x0001072856b0();
  FUN_107266a30();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 1;
  return;
}



/* Entry: 10727e0dc; end: 10727e0e3;  */

void FUN_10727e0dc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x0001072856b0(param_2,param_3);
    FUN_10727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  FUN_10727e150(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10727e0e4; end: 10727e11f;  */

void FUN_10727e0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x0001072856b0(param_2,param_3);
    FUN_10727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  FUN_10727e150(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10727e120; end: 10727e14f;  */

void FUN_10727e120(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072856b0();
  FUN_10727e15c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
  return;
}



/* Entry: 10727e150; end: 10727e15b;  */

void FUN_10727e150(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001072856b0(*param_1,param_1[1]);
  FUN_107266a30();
  func_0x0001072858fc();
  FUN_10727da4c();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 10727e15c; end: 10727e22f;  */

void FUN_10727e15c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072856b0();
  func_0x00010727e190();
  *(undefined1 *)(unaff_x20 + 0x10) = *(undefined1 *)(unaff_x19 + 0x10);
  func_0x00010727e1b4(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10727e230; end: 10727e257;  */

long FUN_10727e230(long param_1)

{
  FUN_10727e258(param_1 + 8);
  return param_1;
}



/* Entry: 10727e258; end: 10727e273;  */

void FUN_10727e258(long param_1)

{
  FUN_10727dc80();
  *(undefined4 *)(param_1 + 0x208) = 1;
  return;
}



/* Entry: 10727e274; end: 10727e2a3;  */

void FUN_10727e274(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  lVar1 = param_1;
  FUN_10726b2ac();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b230(param_1);
  return;
}



/* Entry: 10727e2a4; end: 10727e2bf;  */

void FUN_10727e2a4(long param_1)

{
  if (*(int *)(param_1 + 0x210) != -1) {
    return;
  }
  func_0x00010563ab98();
  return;
}



/* Entry: 10727e2c0; end: 10727e2c3;  */

void FUN_10727e2c0(void)

{
  return;
}



/* Entry: 10727e2c4; end: 10727e77b;  */

void FUN_10727e2c4(long *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 extraout_x8;
  undefined8 ***pppuVar7;
  long extraout_x8_00;
  int extraout_w10;
  long lVar8;
  undefined8 *puVar9;
  ulong unaff_x21;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long unaff_x23;
  undefined8 ****unaff_x24;
  ulong uVar12;
  byte bVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 unaff_d9;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 unaff_d10;
  char cVar27;
  undefined8 ***pppuStack_a40;
  long lStack_a38;
  undefined8 ***pppuStack_a30;
  undefined8 ***pppuStack_a28;
  undefined8 ***pppuStack_a20;
  long lStack_a18;
  uint uStack_960;
  undefined1 auStack_958 [272];
  undefined1 uStack_848;
  undefined1 uStack_828;
  undefined1 auStack_820 [272];
  undefined1 auStack_710 [8];
  undefined1 auStack_708 [256];
  uint uStack_608;
  undefined1 uStack_600;
  undefined1 auStack_5f8 [8];
  undefined1 auStack_5f0 [192];
  uint uStack_530;
  undefined8 ***pppuStack_528;
  long lStack_520;
  undefined8 ***pppuStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 ***pppuStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined4 uStack_318;
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [616];
  uint uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  
  func_0x000107285528();
  param_1 = (long *)*param_1;
  lVar8 = *param_1;
  ppppuVar6 = *(undefined8 *****)(lVar8 + 0x10);
  lStack_a38 = *(long *)(lVar8 + 0x18);
  pppuStack_a40 = ppppuVar6;
  uStack_90 = extraout_x8;
  if (lStack_a38 != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10 != 0);
  }
  FUN_107262e9c(&pppuStack_528,param_2 + 0x10);
  Hint_Prefetch(*ppppuVar6,0,2,0);
  func_0x000107285bc8(*ppppuVar6);
  pppuVar7 = ppppuVar6[1];
  pppuVar1 = ppppuVar6[2];
  func_0x000107285b54();
  while( true ) {
    func_0x000107285b30();
    cVar14 = (char)((ulong)unaff_d9 >> 8);
    cVar15 = (char)((ulong)unaff_d9 >> 0x10);
    cVar16 = (char)((ulong)unaff_d9 >> 0x18);
    cVar17 = (char)((ulong)unaff_d9 >> 0x20);
    cVar18 = (char)((ulong)unaff_d9 >> 0x28);
    cVar19 = (char)((ulong)unaff_d9 >> 0x30);
    cVar20 = (char)((ulong)unaff_d9 >> 0x38);
    cVar21 = (char)((ulong)unaff_d10 >> 8);
    cVar22 = (char)((ulong)unaff_d10 >> 0x10);
    cVar23 = (char)((ulong)unaff_d10 >> 0x18);
    cVar24 = (char)((ulong)unaff_d10 >> 0x20);
    cVar25 = (char)((ulong)unaff_d10 >> 0x28);
    cVar26 = (char)((ulong)unaff_d10 >> 0x30);
    cVar27 = (char)((ulong)unaff_d10 >> 0x38);
    for (; unaff_x21 != 0; unaff_x21 = unaff_x21 - 1 & unaff_x21) {
      uVar12 = (unaff_x21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x21 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = unaff_x23 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & (ulong)pppuVar1;
      ppppuVar5 = &pppuStack_a28;
      pppuStack_a28 = unaff_x24;
      pppuStack_a20 = ppppuVar6;
      FUN_10727e7f0(ppppuVar5,pppuVar7 + uVar12 * 0x56);
      if ((int)ppppuVar5 != 0) {
        unaff_x24 = (undefined8 ****)(ppppuVar6[1] + uVar12 * 0x56);
        goto LAB_10727e3a8;
      }
      unaff_x24 = &pppuStack_528;
    }
    bVar13 = NEON_umaxv(CONCAT17(-(cVar27 == cVar20),
                                 CONCAT16(-(cVar26 == cVar19),
                                          CONCAT15(-(cVar25 == cVar18),
                                                   CONCAT14(-(cVar24 == cVar17),
                                                            CONCAT13(-(cVar23 == cVar16),
                                                                     CONCAT12(-(cVar22 == cVar15),
                                                                              CONCAT11(-(cVar21 ==
                                                                                        cVar14),-((
                                                  char)unaff_d10 == (char)unaff_d9)))))))),1);
    if ((bVar13 & 1) != 0) break;
    func_0x000107285b6c();
  }
LAB_10727e3a8:
  func_0x0001072859e8();
  if (unaff_x21 == 0) {
    auStack_310[0] = 0;
    uStack_98 = 0;
    uStack_318 = 0;
    FUN_10727da94(lVar8 + 0x228,&lStack_520);
    FUN_10727d368(&lStack_520);
LAB_10727e64c:
    func_0x000107280b8c(auStack_310);
    func_0x000107283b14(&pppuStack_a40);
    func_0x0001072854dc(uStack_90);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar10 = auStack_310;
    FUN_10727e844(auStack_308,unaff_x24 + 8);
    uStack_98 = 1;
    lStack_520 = param_1[1];
    pppuStack_528 = &pppuStack_a40;
    in_ZR = uStack_a0 == 0xffffffff;
    pppuStack_518 = pppuStack_528;
    lStack_510 = lStack_520;
    lStack_508 = param_2;
    pppuStack_500 = pppuStack_528;
    lStack_4f8 = lStack_520;
    lStack_4f0 = param_2;
    if (!(bool)in_ZR) {
      pppuStack_a28 = &pppuStack_528;
      (*(code *)(&PTR_FUN_110996f00)[uStack_a0])(auStack_5f8,&pppuStack_a28,auStack_308);
      pppuVar2 = pppuStack_a40;
      FUN_107262e9c(&pppuStack_528,param_2 + 0x28);
      pppuVar7 = (undefined8 ***)pppuVar2[4];
      Hint_Prefetch(pppuVar7,0,2,0);
      func_0x000107285bc8(pppuVar7);
      pppuVar7 = (undefined8 ***)pppuVar2[5];
      pppuVar1 = (undefined8 ***)pppuVar2[6];
      func_0x000107285b54();
      while( true ) {
        func_0x000107285b30();
        for (; puVar10 != (undefined1 *)0x0;
            puVar10 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar10)) {
          uVar12 = ((ulong)puVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((ulong)puVar10 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = unaff_x23 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) &
                   (ulong)pppuVar1;
          ppppuVar6 = &pppuStack_a28;
          pppuStack_a28 = unaff_x24;
          pppuStack_a20 = pppuVar2 + 4;
          func_0x00010727fac4(ppppuVar6,pppuVar7 + uVar12 * 0x29);
          if ((int)ppppuVar6 != 0) {
            unaff_x24 = (undefined8 ****)(pppuVar2[5] + uVar12 * 0x29);
            goto LAB_10727e4bc;
          }
          unaff_x24 = &pppuStack_528;
        }
        bVar13 = NEON_umaxv(CONCAT17(-(cVar27 == cVar20),
                                     CONCAT16(-(cVar26 == cVar19),
                                              CONCAT15(-(cVar25 == cVar18),
                                                       CONCAT14(-(cVar24 == cVar17),
                                                                CONCAT13(-(cVar23 == cVar16),
                                                                         CONCAT12(-(cVar22 == cVar15
                                                                                   ),CONCAT11(-(
                                                  cVar21 == cVar14),
                                                  -((char)unaff_d10 == (char)unaff_d9)))))))),1);
        if ((bVar13 & 1) != 0) break;
        func_0x000107285b6c();
      }
LAB_10727e4bc:
      func_0x0001072859e8();
      if (puVar10 == (undefined1 *)0x0) {
        auStack_710[0] = 0;
        uStack_600 = 0;
        uStack_318 = 0;
        func_0x0001072858d8();
        func_0x0001072858d0();
      }
      else {
        FUN_10727fad0(auStack_708,unaff_x24 + 8);
        uStack_600 = 1;
        pppuStack_a28 = (undefined8 ***)param_1[1];
        if (uStack_608 == 0xffffffff) {
          func_0x00010563ab98();
          goto LAB_10727e6c4;
        }
        pppuStack_528 = &pppuStack_a28;
        (*(code *)(&PTR_DAT_110996fc8)[uStack_608])(auStack_820,&pppuStack_528,auStack_708);
        pppuStack_a20 = (undefined8 ***)((ulong)pppuStack_a20 & 0xffffffffffffff00);
        uStack_960 = 0xffffffff;
        func_0x000107285a5c();
        uVar3 = uStack_530;
        in_ZR = uStack_530 == 0xffffffff;
        if (!(bool)in_ZR) {
          pppuStack_a30 = &pppuStack_a20;
          (*(code *)(&PTR_DAT_1109971e8)[uStack_530])(&pppuStack_a30,auStack_5f0);
          uStack_960 = uVar3;
        }
        FUN_10727d474(auStack_958,auStack_820);
        uStack_848 = 0;
        uStack_828 = 0;
        func_0x00010727d7bc(&pppuStack_528,&pppuStack_a28);
        func_0x0001072858d8();
        func_0x0001072858d0();
        func_0x00010727e204(&pppuStack_a28);
        pppuStack_a28 = (undefined8 ***)param_1[1];
        pppuStack_a20 = pppuStack_a28;
        lStack_a18 = lVar8;
        FUN_107280788(uStack_530);
        pppuStack_a30 = &pppuStack_a28;
        func_0x000107285b48(uStack_530);
        (*(code *)(&PTR_FUN_110997208)[extraout_x8_00])(&pppuStack_528,&pppuStack_a30,auStack_5f0);
        if ((*(byte *)(**(long **)(lVar8 + 8) + 0xb7) & 1) == 0) {
          puVar11 = *(undefined8 **)(lVar8 + 0x440);
          for (puVar9 = *(undefined8 **)(lVar8 + 0x438); in_ZR = puVar9 == puVar11, !(bool)in_ZR;
              puVar9 = puVar9 + 2) {
            (**(code **)(*(long *)*puVar9 + 0x10))();
          }
        }
        FUN_10727af80(lVar8,&pppuStack_528,auStack_820);
        func_0x000107283610(auStack_820);
      }
      FUN_107280b5c(auStack_710);
      func_0x000107285d24();
      goto LAB_10727e64c;
    }
  }
  func_0x00010563ab98();
LAB_10727e6c4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10727e6c8);
  (*pcVar4)();
}



/* Entry: 10727e77c; end: 10727e7ef;  */

void FUN_10727e77c(long *param_1,long param_2)

{
  long extraout_x8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  if ((*(uint *)(param_2 + 0x1b8) & 0xfffffffe) == 2) {
    uStack_40 = *(undefined8 *)(*param_1 + 0x10);
    uStack_48 = *(undefined8 *)(*param_1 + 0x18);
    uStack_38 = uStack_48;
    uStack_30 = uStack_40;
    FUN_107280788(*(undefined4 *)(param_2 + 200));
    puStack_28 = &uStack_48;
    func_0x000107285b48(*(undefined4 *)(param_2 + 200));
    (*(code *)(&PTR_FUN_110997228)[extraout_x8])(&puStack_28,param_2 + 8);
  }
  return;
}



/* Entry: 10727e7f0; end: 10727e80b;  */

bool FUN_10727e7f0(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10727e80c; end: 10727e843;  */

ulong FUN_10727e80c(long param_1,long param_2)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x10;
  
  lVar1 = param_2;
  func_0x000107264c5c(param_2);
  func_0x000100062d4c(param_1,param_2);
  func_0x000100061c28(param_1 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10727e844; end: 10727e873;  */

void FUN_10727e844(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0x268) = extraout_w8;
  FUN_10727e874();
  return;
}



/* Entry: 10727e874; end: 10727e8b7;  */

void FUN_10727e874(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727e8b8();
  iVar1 = *(int *)(unaff_x20 + 0x268);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_FUN_110996ed0);
    *(int *)(unaff_x19 + 0x268) = iVar1;
  }
  return;
}



/* Entry: 10727e8b8; end: 10727e8fb;  */

void FUN_10727e8b8(long param_1)

{
  if (*(uint *)(param_1 + 0x268) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996ea0)[*(uint *)(param_1 + 0x268)]);
  }
  *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  return;
}



/* Entry: 10727e8fc; end: 10727e913;  */

long FUN_10727e8fc(undefined8 param_1,long param_2)

{
  func_0x00010727e950(param_2 + 0xf0);
  func_0x00010727e950(param_2 + 0xb0);
  func_0x00010727e950(param_2 + 0x70);
  func_0x000107285ad4();
  func_0x000107285750();
  return param_2;
}



/* Entry: 10727e914; end: 10727e9cf;  */

long FUN_10727e914(long param_1)

{
  func_0x00010727e950(param_1 + 0xf0);
  func_0x00010727e950(param_1 + 0xb0);
  func_0x00010727e950(param_1 + 0x70);
  func_0x000107285ad4();
  func_0x000107285750();
  return param_1;
}



/* Entry: 10727e9d0; end: 10727ea13;  */

void FUN_10727e9d0(long param_1)

{
  if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996eb8)[*(uint *)(param_1 + 0x48)]);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 10727ea14; end: 10727ea27;  */

void FUN_10727ea14(void)

{
  return;
}



/* Entry: 10727ea28; end: 10727ead7;  */

long FUN_10727ea28(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001001148fc(param_1 + 0x28);
  func_0x000107274b8c(param_1);
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10727ead8; end: 10727eaeb;  */

void FUN_10727ead8(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc(*param_1);
  FUN_10727d614();
  func_0x000107285b90();
  FUN_10727d614();
  FUN_10727eb70(unaff_x19 + 0x70,unaff_x20 + 0x70);
  FUN_10727eb70(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  FUN_10727eb70(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  return;
}



/* Entry: 10727eaec; end: 10727eb6f;  */

void FUN_10727eaec(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727d614();
  func_0x000107285b90();
  FUN_10727d614();
  FUN_10727eb70(unaff_x19 + 0x70,unaff_x20 + 0x70);
  FUN_10727eb70(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  FUN_10727eb70(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  return;
}



/* Entry: 10727eb70; end: 10727eb9f;  */

void FUN_10727eb70(long param_1)

{
  func_0x000107285760();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10727eba0();
  return;
}



/* Entry: 10727eba0; end: 10727ebb3;  */

void FUN_10727eba0(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10727d614();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 10727ebb4; end: 10727ebcf;  */

void FUN_10727ebb4(long param_1)

{
  FUN_10727d614();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10727ebd0; end: 10727ebd7;  */

void FUN_10727ebd0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc(*param_1);
  FUN_10727ecac();
  func_0x000107285c90();
  FUN_10727d614(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_10727d614(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  FUN_10727eb70(unaff_x19 + 0x110,unaff_x20 + 0x110);
  FUN_10727eb70(unaff_x19 + 0x150,unaff_x20 + 0x150);
  FUN_10727eb70(unaff_x19 + 400,unaff_x20 + 400);
  FUN_10727eb70(unaff_x19 + 0x1d0,unaff_x20 + 0x1d0);
  return;
}



/* Entry: 10727ebd8; end: 10727ecab;  */

void FUN_10727ebd8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727ecac();
  func_0x000107285c90();
  FUN_10727d614(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_10727d614(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  FUN_10727eb70(unaff_x19 + 0x110,unaff_x20 + 0x110);
  FUN_10727eb70(unaff_x19 + 0x150,unaff_x20 + 0x150);
  FUN_10727eb70(unaff_x19 + 400,unaff_x20 + 400);
  FUN_10727eb70(unaff_x19 + 0x1d0,unaff_x20 + 0x1d0);
  return;
}



/* Entry: 10727ecac; end: 10727ecdb;  */

void FUN_10727ecac(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010728560c();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_10727ecdc();
  return;
}



/* Entry: 10727ecdc; end: 10727ed1f;  */

void FUN_10727ecdc(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727e9d0();
  iVar1 = *(int *)(unaff_x20 + 0x48);
  if (iVar1 != -1) {
    func_0x000107285544(&PTR_FUN_110996ee8);
    *(int *)(unaff_x19 + 0x48) = iVar1;
  }
  return;
}



/* Entry: 10727ed20; end: 10727ed3b;  */

void FUN_10727ed20(void)

{
  return;
}



/* Entry: 10727ed3c; end: 10727ed73;  */

void FUN_10727ed3c(long param_1)

{
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727d6bc();
  func_0x00010028af84(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 10727ed74; end: 10727ed7b;  */

void FUN_10727ed74(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc(*param_1);
  FUN_10727ecac();
  func_0x000107285c90();
  FUN_10727ee6c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_10727d614(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  FUN_10727d614(unaff_x19 + 0x130,unaff_x20 + 0x130);
  FUN_10727eb70(unaff_x19 + 0x168,unaff_x20 + 0x168);
  FUN_10727eb70(unaff_x19 + 0x1a8,unaff_x20 + 0x1a8);
  FUN_10727eb70(unaff_x19 + 0x1e8,unaff_x20 + 0x1e8);
  FUN_10727eb70(unaff_x19 + 0x228,unaff_x20 + 0x228);
  return;
}



/* Entry: 10727ed7c; end: 10727ee6b;  */

void FUN_10727ed7c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10727ecac();
  func_0x000107285c90();
  FUN_10727ee6c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_10727d614(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  FUN_10727d614(unaff_x19 + 0x130,unaff_x20 + 0x130);
  FUN_10727eb70(unaff_x19 + 0x168,unaff_x20 + 0x168);
  FUN_10727eb70(unaff_x19 + 0x1a8,unaff_x20 + 0x1a8);
  FUN_10727eb70(unaff_x19 + 0x1e8,unaff_x20 + 0x1e8);
  FUN_10727eb70(unaff_x19 + 0x228,unaff_x20 + 0x228);
  return;
}



/* Entry: 10727ee6c; end: 10727ee9b;  */

void FUN_10727ee6c(long param_1)

{
  func_0x000107285760();
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_10727ee9c();
  return;
}



/* Entry: 10727ee9c; end: 10727eeaf;  */

void FUN_10727ee9c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_10727ecac();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



/* Entry: 10727eeb0; end: 10727eecb;  */

void FUN_10727eeb0(long param_1)

{
  FUN_10727ecac();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10727eecc; end: 10727f04f;  */

void FUN_10727eecc(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_60 [16];
  
  lVar5 = *(long *)(*param_2 + 8);
  func_0x000107285658();
  uVar1 = param_3;
  FUN_10727f5d8(param_3,lVar5 + 0x38,auStack_60);
  func_0x000107285800();
  func_0x000107285658();
  uVar2 = param_3 + 0x38;
  func_0x0001072856fc();
  func_0x000107285800();
  if (*(char *)(param_3 + 0xa8) == '\x01') {
    FUN_10727f6dc(param_3 + 0x70);
    func_0x000107285658();
    lVar5 = param_3 + 0x70;
    func_0x0001072856fc();
    func_0x000107285800();
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(param_3 + 0xe8) == '\x01') {
    FUN_10727f6dc(param_3 + 0xb0);
    func_0x000107285658();
    lVar4 = param_3 + 0xb0;
    func_0x0001072856fc();
    func_0x000107285800();
  }
  else {
    lVar4 = 0;
  }
  if (*(char *)(param_3 + 0x128) == '\x01') {
    FUN_10727f6dc(param_3 + 0xf0);
    func_0x000107285658();
    lVar3 = param_3 + 0xf0;
    func_0x0001072856fc();
    func_0x000107285800();
  }
  else {
    lVar3 = 0;
  }
  dVar6 = 0.0;
  if (uVar1 >> 0x20 != 0) {
    dVar6 = (double)(float)uVar1;
  }
  dVar7 = 0.0;
  if (uVar2 >> 0x20 != 0) {
    dVar7 = (double)(float)uVar2;
  }
  func_0x000107285748(dVar6,dVar7,param_1 + 8);
  *(char *)(param_1 + 0x1c) = (char)((ulong)lVar5 >> 0x20);
  *(int *)(param_1 + 0x18) = (int)lVar5;
  *(char *)(param_1 + 0x24) = (char)((ulong)lVar4 >> 0x20);
  *(int *)(param_1 + 0x20) = (int)lVar4;
  *(char *)(param_1 + 0x2c) = (char)((ulong)lVar3 >> 0x20);
  *(int *)(param_1 + 0x28) = (int)lVar3;
  *(undefined4 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 10727f050; end: 10727f2ef;  */

void FUN_10727f050(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [56];
  undefined1 auStack_150 [56];
  undefined1 auStack_118 [16];
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  
  func_0x000107285500();
  uStack_78 = extraout_x8;
  func_0x00010728564c(auStack_188);
  func_0x000107285d6c();
  FUN_10727f9a8(auStack_e8,auStack_188);
  FUN_1072625b4(auStack_b0,auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x000107285acc();
  func_0x00010728564c(auStack_188,param_2 + 0x50);
  func_0x000107285d6c();
  FUN_10727f9a8(auStack_1a0,auStack_188);
  FUN_1072625b4(auStack_e8,auStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
  func_0x000107285acc();
  uVar2 = param_2 + 0xa0;
  func_0x000107285564();
  uVar3 = param_2 + 0xd8;
  func_0x000107285564();
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_10727f6dc(param_2 + 0x110);
    lVar4 = param_2 + 0x110;
    func_0x000107285564();
  }
  else {
    lVar4 = 0;
  }
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_10727f6dc(param_2 + 0x150);
    lVar5 = param_2 + 0x150;
    func_0x000107285564();
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_10727f6dc(param_2 + 400);
    lVar6 = param_2 + 400;
    func_0x000107285564();
  }
  else {
    lVar6 = 0;
  }
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_10727f6dc(param_2 + 0x1d0);
    param_2 = param_2 + 0x1d0;
    func_0x000107285564();
  }
  else {
    param_2 = 0;
  }
  func_0x000104c2fe00(auStack_188,auStack_b0);
  func_0x000104c2fe00(auStack_150,auStack_e8);
  dVar7 = 0.0;
  if (uVar2 >> 0x20 != 0) {
    dVar7 = (double)(float)uVar2;
  }
  uVar1 = uVar3 >> 0x20 == 0;
  dVar8 = 0.0;
  if (!(bool)uVar1) {
    dVar8 = (double)(float)uVar3;
  }
  func_0x000107285748(dVar7,dVar8,auStack_118);
  uStack_108 = (undefined4)lVar4;
  uStack_104 = (undefined1)((ulong)lVar4 >> 0x20);
  uStack_100 = (undefined4)lVar5;
  uStack_fc = (undefined1)((ulong)lVar5 >> 0x20);
  uStack_f8 = (undefined4)lVar6;
  uStack_f4 = (undefined1)((ulong)lVar6 >> 0x20);
  uStack_f0 = (undefined4)param_2;
  uStack_ec = (undefined1)((ulong)param_2 >> 0x20);
  func_0x000104c2f714(auStack_e8);
  func_0x000104c2f714(auStack_b0);
  FUN_10727d8dc(unaff_x19 + 8,auStack_188);
  *(undefined4 *)(unaff_x19 + 200) = 2;
  FUN_10727d76c(auStack_188);
  func_0x0001072854dc(uStack_78);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_150);
  func_0x000104c2f714(auStack_188);
  func_0x000104c2f714(auStack_e8);
  do {
    func_0x000104c2f714(auStack_b0);
    func_0x00010728561c();
    func_0x000107285acc();
  } while( true );
}



/* Entry: 10727f2f0; end: 10727f5d7;  */

void FUN_10727f2f0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1b8 [24];
  undefined1 uStack_1a0;
  undefined1 auStack_198 [56];
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [16];
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  
  func_0x000107285500();
  uStack_68 = extraout_x8;
  func_0x00010728564c(auStack_198);
  func_0x000107285d6c();
  FUN_10727f9a8(auStack_d8,auStack_198);
  FUN_1072625b4(auStack_a0,auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  func_0x0001072859d0();
  func_0x00010728564c(auStack_198,param_2 + 0x50);
  func_0x000107285d6c();
  FUN_10727f9a8(auStack_1b8,auStack_198);
  FUN_1072625b4(auStack_d8,auStack_1b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
  func_0x0001072859d0();
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    func_0x00010728564c(auStack_1b8,param_2 + 0xa0);
  }
  else {
    auStack_1b8[0] = 0;
    uStack_1a0 = 0;
  }
  uVar2 = param_2 + 0xf8;
  func_0x000107285564();
  uVar3 = param_2 + 0x130;
  func_0x000107285564();
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_10727f6dc(param_2 + 0x168);
    lVar4 = param_2 + 0x168;
    func_0x000107285564();
  }
  else {
    lVar4 = 0;
  }
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_10727f6dc(param_2 + 0x1a8);
    lVar5 = param_2 + 0x1a8;
    func_0x000107285564();
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_10727f6dc(param_2 + 0x1e8);
    lVar6 = param_2 + 0x1e8;
    func_0x000107285564();
  }
  else {
    lVar6 = 0;
  }
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_10727f6dc(param_2 + 0x228);
    param_2 = param_2 + 0x228;
    func_0x000107285564();
  }
  else {
    param_2 = 0;
  }
  func_0x000104c2fe00(auStack_198,auStack_a0);
  func_0x000104c2fe00(auStack_160,auStack_d8);
  func_0x00010028af84(auStack_128,auStack_1b8);
  dVar7 = 0.0;
  if (uVar2 >> 0x20 != 0) {
    dVar7 = (double)(float)uVar2;
  }
  uVar1 = uVar3 >> 0x20 == 0;
  dVar8 = 0.0;
  if (!(bool)uVar1) {
    dVar8 = (double)(float)uVar3;
  }
  func_0x000107285748(dVar7,dVar8,auStack_108);
  uStack_f8 = (undefined4)lVar4;
  uStack_f4 = (undefined1)((ulong)lVar4 >> 0x20);
  uStack_f0 = (undefined4)lVar5;
  uStack_ec = (undefined1)((ulong)lVar5 >> 0x20);
  uStack_e8 = (undefined4)lVar6;
  uStack_e4 = (undefined1)((ulong)lVar6 >> 0x20);
  uStack_e0 = (undefined4)param_2;
  uStack_dc = (undefined1)((ulong)param_2 >> 0x20);
  func_0x000107285a78();
  func_0x000104c2f714(auStack_d8);
  func_0x000104c2f714(auStack_a0);
  func_0x00010727d90c(unaff_x19 + 8,auStack_198);
  *(undefined4 *)(unaff_x19 + 200) = 3;
  func_0x00010727d78c(auStack_198);
  func_0x0001072854dc(uStack_68);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_d8);
  do {
    func_0x000104c2f714(auStack_a0);
    func_0x00010728561c();
    func_0x0001072859d0();
  } while( true );
}



/* Entry: 10727f5d8; end: 10727f6db;  */

ulong FUN_10727f5d8(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 extraout_x8;
  uint *unaff_x19;
  undefined1 auStack_378 [56];
  undefined1 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_290;
  undefined1 auStack_270 [136];
  undefined1 auStack_1e8 [400];
  undefined8 uStack_58;
  
  func_0x000107285514();
  uVar4 = *(uint *)(param_2 + 0x30);
  uVar1 = (ulong)uVar4;
  uStack_58 = extraout_x8;
  if (uVar4 != 0) {
    in_ZR = uVar4 == 1;
    if ((bool)in_ZR) {
      uVar4 = *unaff_x19;
    }
    else {
      func_0x000107751284(auStack_378);
      FUN_107295f10(auStack_270,param_4);
      uStack_290 = param_3;
      func_0x000107751334(auStack_1e8,auStack_378);
      FUN_107267da8(auStack_378);
      auStack_378[0] = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      uVar1 = 0;
      FUN_10727f6f4();
      param_1 = uVar1;
      func_0x00010724b3d8(auStack_378);
      FUN_107267da8(auStack_1e8);
      uVar4 = (uint)uVar1;
    }
    uVar1 = (ulong)uVar4 | 0x100000000;
  }
  func_0x0001072854dc(uStack_58,uVar1);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107285908();
  func_0x00010724b3d8();
  puVar2 = auStack_1e8;
  FUN_107267da8();
  func_0x00010728561c();
  if ((puVar2[0x38] & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  puVar3 = puVar2;
  FUN_10727f740();
  if (((ulong)puVar3 >> 0x20 & 1) == 0) {
    if (puVar2[0x2c] == '\x01') {
      param_1 = (ulong)*(uint *)(puVar2 + 0x28);
    }
  }
  else {
    param_1 = (ulong)puVar3 & 0xffffffff;
  }
  return param_1;
}



/* Entry: 10727f6dc; end: 10727f6f3;  */

ulong FUN_10727f6dc(ulong param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = (uint)param_2;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar1 = CONCAT44(uVar3,uVar2);
  FUN_10727f740();
  if ((uVar3 & 1) == 0) {
    if (*(char *)(lVar1 + 0x2c) == '\x01') {
      param_1 = (ulong)*(uint *)(lVar1 + 0x28);
    }
  }
  else {
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



/* Entry: 10727f6f4; end: 10727f73f;  */

ulong FUN_10727f6f4(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar1 = (uint)param_2;
  FUN_10727f740();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      param_1 = (ulong)*(uint *)(param_2 + 0x28);
    }
  }
  else {
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



/* Entry: 10727f740; end: 10727f7db;  */

ulong FUN_10727f740(ulong *param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107285528();
  uVar1 = *param_1;
  func_0x000107285a94();
  func_0x000107285d48();
  if ((bool)in_ZR) {
    func_0x000107285a70();
    func_0x000107776fc4();
    uVar2 = uVar1 & 0x100000000;
    uVar3 = uVar1 & 0xffffff00;
    uVar4 = uVar1 & 0xff;
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  func_0x0001072855b4();
  func_0x0001072854dc(extraout_x8);
  if ((bool)in_ZR) {
    return uVar4 | uVar2 | uVar3;
  }
  ___stack_chk_fail();
  func_0x0001072855b4();
  func_0x00010728561c();
  if (*(int *)(uVar1 + 0x78) == 1) {
    return uVar1 + 8;
  }
  func_0x00010563ab98();
  uVar2 = uVar1;
  if (*(uint *)(uVar1 + 0x70) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996f18)[*(uint *)(uVar1 + 0x70)]);
  }
  *(undefined4 *)(uVar1 + 0x70) = 0xffffffff;
  return uVar2;
}



/* Entry: 10727f7dc; end: 10727f7f7;  */

long FUN_10727f7dc(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x78) == 1) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  lVar1 = param_1;
  if (*(uint *)(param_1 + 0x70) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996f18)[*(uint *)(param_1 + 0x70)]);
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return lVar1;
}



/* Entry: 10727f7f8; end: 10727f83b;  */

void FUN_10727f7f8(long param_1)

{
  if (*(uint *)(param_1 + 0x70) != 0xffffffff) {
    func_0x000107285594((&PTR_FUN_110996f18)[*(uint *)(param_1 + 0x70)]);
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return;
}



/* Entry: 10727f83c; end: 10727f84b;  */

void FUN_10727f83c(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10727f84c; end: 10727f9a7;  */

undefined8 *
FUN_10727f84c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [56];
  undefined1 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_280;
  undefined1 auStack_260 [136];
  undefined8 auStack_1d8 [50];
  undefined8 uStack_48;
  
  func_0x000107285514();
  puVar2 = param_2;
  uStack_48 = extraout_x8;
  if (*(int *)(param_2 + 9) == 0) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 0;
  }
  else {
    in_ZR = *(int *)(param_2 + 9) == 1;
    unaff_x20 = param_2;
    if ((bool)in_ZR) {
      func_0x0001072854dc(extraout_x8);
      if ((bool)in_ZR) {
        func_0x000107c60c94();
        *(undefined1 *)(unaff_x19 + 3) = 1;
        return unaff_x19;
      }
      goto LAB_10727f974;
    }
    func_0x000107751284(auStack_368);
    FUN_107295f10(auStack_260,param_4);
    uStack_280 = param_3;
    func_0x000107751334(auStack_1d8,auStack_368);
    FUN_107267da8(auStack_368);
    auStack_368[0] = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    uStack_398 = 0;
    puVar2 = auStack_1d8;
    FUN_10727f9d8(&uStack_380,param_2,puVar2,auStack_368,&uStack_398);
    unaff_x19[1] = uStack_378;
    *unaff_x19 = uStack_380;
    unaff_x19[2] = uStack_370;
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_380 = 0;
    *(undefined1 *)(unaff_x19 + 3) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_380);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_398);
    func_0x00010724b3d8(auStack_368);
    param_1 = auStack_1d8;
    FUN_107267da8(param_1);
  }
  func_0x0001072854dc(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
LAB_10727f974:
  ___stack_chk_fail();
  func_0x000107285908();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010724b3d8(auStack_368);
  puVar1 = auStack_1d8;
  FUN_107267da8();
  func_0x00010728561c();
  if (*(char *)(puVar1 + 3) == '\x01') {
    uVar3 = *puVar1;
    extraout_x8_00[1] = puVar1[1];
    *extraout_x8_00 = uVar3;
    extraout_x8_00[2] = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    return puVar1;
  }
  func_0x00010002b82c(extraout_x8_00);
  func_0x000107c613d0(puVar2);
  func_0x000107c60c50(unaff_x20);
  return unaff_x20;
}



/* Entry: 10727f9a8; end: 10727f9d7;  */

void FUN_10727f9a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return;
  }
  func_0x00010002b82c(param_1);
  func_0x000107c613d0(param_3);
  func_0x000107c60c50();
  return;
}



/* Entry: 10727f9d8; end: 10727fa37;  */

void FUN_10727f9d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 auStack_50 [32];
  
  FUN_10727fa38(auStack_50);
  lVar1 = param_2 + 0x28;
  if (*(char *)(param_2 + 0x40) == '\0') {
    lVar1 = param_5;
  }
  FUN_10727fab0(param_1,auStack_50,lVar1);
  func_0x0001072856a8();
  return;
}



/* Entry: 10727fa38; end: 10727faaf;  */

void FUN_10727fa38(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 auStack_a9 [129];
  undefined8 uStack_28;
  
  func_0x000107285500();
  puVar1 = (undefined1 *)*param_1;
  uStack_28 = extraout_x8;
  func_0x000107285a94();
  func_0x000107285d48();
  if ((bool)in_ZR) {
    func_0x000107285a70();
    param_2 = auStack_a9;
    func_0x000107776f6c();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x18] = 0;
  }
  func_0x0001072855b4();
  func_0x0001072854dc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855b4();
  func_0x00010728561c();
  if (puVar1[0x18] == '\0') {
    puVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (extraout_x8_00,puVar1);
  return;
}


