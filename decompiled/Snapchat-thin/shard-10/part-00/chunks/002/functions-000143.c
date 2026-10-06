/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10754e710; end: 10754e737;  */

void FUN_10754e710(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109baf00;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754e738; end: 10754e75f;  */

void FUN_10754e738(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109baf00;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754e760; end: 10754e787;  */

void FUN_10754e760(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109baf60);
  func_0x000107550a70();
  return;
}



/* Entry: 10754e788; end: 10754e793;  */

undefined ** FUN_10754e788(void)

{
  return &PTR_DAT_1109baf60;
}



/* Entry: 10754e794; end: 10754e7b3;  */

void FUN_10754e794(void)

{
  func_0x000107550cbc();
  FUN_107556034();
  return;
}



/* Entry: 10754e7b4; end: 10754e80f;  */

void FUN_10754e7b4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_88;
  undefined8 uStack_28;
  
  func_0x000107550a80();
  func_0x000107550c98();
  if ((extraout_x8 & 1) == 0) {
    func_0x000107550e54();
    FUN_10754e86c();
    func_0x000107550d04();
    func_0x000107550c14();
  }
  func_0x000107550a34(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107550bb8();
    func_0x000104c2f714();
    func_0x000107550b68();
    func_0x000107550a80();
    func_0x000107550c98();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x000107550e54();
      FUN_10754e8b8();
      func_0x000107550d04();
      func_0x000107550c14();
    }
    func_0x000107550a34(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107550bb8();
      func_0x000104c2f714();
      func_0x000107550b68();
      uVar2 = *param_1;
      puVar1 = &UNK_10f40a3f5;
      puStack_100 = &UNK_10f40a3f5;
      uStack_f8 = 3;
      FUN_1073396ec();
      ppuStack_120 = &puStack_100;
      uStack_118 = uVar2;
      ppuStack_110 = ppuStack_120;
      uStack_108 = uVar2;
      FUN_10754bc38(extraout_x8_01,&UNK_10f40a3f5,3,puVar1,&ppuStack_110,&ppuStack_120);
      return;
    }
  }
  return;
}



/* Entry: 10754e810; end: 10754e86b;  */

void FUN_10754e810(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_28;
  
  func_0x000107550a80();
  func_0x000107550c98();
  if ((extraout_x8 & 1) == 0) {
    func_0x000107550e54();
    FUN_10754e8b8();
    func_0x000107550d04();
    func_0x000107550c14();
  }
  func_0x000107550a34(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107550bb8();
  func_0x000104c2f714();
  func_0x000107550b68();
  uVar2 = *param_1;
  puVar1 = &UNK_10f40a3f5;
  puStack_a0 = &UNK_10f40a3f5;
  uStack_98 = 3;
  FUN_1073396ec();
  ppuStack_c0 = &puStack_a0;
  uStack_b8 = uVar2;
  ppuStack_b0 = ppuStack_c0;
  uStack_a8 = uVar2;
  FUN_10754bc38(extraout_x8_00,&UNK_10f40a3f5,3,puVar1,&ppuStack_b0,&ppuStack_c0);
  return;
}



/* Entry: 10754e86c; end: 10754e86f;  */

void FUN_10754e86c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_2;
  puVar1 = &UNK_10f40a3f5;
  puStack_40 = &UNK_10f40a3f5;
  uStack_38 = 3;
  FUN_1073396ec();
  ppuStack_60 = &puStack_40;
  uStack_58 = uVar2;
  ppuStack_50 = ppuStack_60;
  uStack_48 = uVar2;
  FUN_10754bc38(param_1,&UNK_10f40a3f5,3,puVar1,&ppuStack_50,&ppuStack_60);
  return;
}



/* Entry: 10754e870; end: 10754e887;  */

long * FUN_10754e870(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107550dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  if ((char)plVar1[9] == '\x01') {
    FUN_107432d98(plVar1);
  }
  return plVar1;
}



/* Entry: 10754e888; end: 10754e8b7;  */

long FUN_10754e888(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_107432d98(param_1);
  }
  return param_1;
}



/* Entry: 10754e8b8; end: 10754e8c3;  */

void FUN_10754e8b8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_2;
  puVar1 = &UNK_10f40a3f5;
  puStack_40 = &UNK_10f40a3f5;
  uStack_38 = 3;
  FUN_1073396ec();
  ppuStack_60 = &puStack_40;
  uStack_58 = uVar2;
  ppuStack_50 = ppuStack_60;
  uStack_48 = uVar2;
  FUN_10754bc38(param_1,&UNK_10f40a3f5,3,puVar1,&ppuStack_50,&ppuStack_60);
  return;
}



/* Entry: 10754e8c4; end: 10754e8eb;  */

void FUN_10754e8c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109baf80;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754e8ec; end: 10754e90b;  */

void FUN_10754e8ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109baf80;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754e90c; end: 10754e973;  */

void FUN_10754e90c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  func_0x000107550a80();
  FUN_107432d30(auStack_b8);
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107550e08();
  func_0x0001077ae210(uVar1,auStack_70);
  func_0x000107550d5c();
  func_0x000107550d64();
  func_0x000107550a34(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107550d5c();
  func_0x000107550d64();
  func_0x000107550b68();
  func_0x000107550b70();
  func_0x000107550b48();
  func_0x000107550a70();
  return;
}



/* Entry: 10754e974; end: 10754e99b;  */

void FUN_10754e974(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109baff0);
  func_0x000107550a70();
  return;
}



/* Entry: 10754e99c; end: 10754e9a7;  */

undefined ** FUN_10754e99c(void)

{
  return &PTR_DAT_1109baff0;
}



/* Entry: 10754e9a8; end: 10754e9db;  */

void FUN_10754e9a8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107550ba0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107550b1c(uVar1);
  return;
}



/* Entry: 10754e9dc; end: 10754e9e3;  */

void FUN_10754e9dc(void)

{
  return;
}



/* Entry: 10754e9e4; end: 10754ea0b;  */

void FUN_10754e9e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109bb010;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754ea0c; end: 10754ea33;  */

void FUN_10754ea0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109bb010;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754ea34; end: 10754ea5b;  */

void FUN_10754ea34(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb070);
  func_0x000107550a70();
  return;
}



/* Entry: 10754ea5c; end: 10754ea67;  */

undefined ** FUN_10754ea5c(void)

{
  return &PTR_DAT_1109bb070;
}



/* Entry: 10754ea68; end: 10754ea97;  */

long FUN_10754ea68(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1074e71ac(param_1);
  }
  return param_1;
}



/* Entry: 10754ea98; end: 10754ea9f;  */

void FUN_10754ea98(void)

{
  return;
}



/* Entry: 10754eaa0; end: 10754eac7;  */

void FUN_10754eaa0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109bb090;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754eac8; end: 10754eae7;  */

void FUN_10754eac8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109bb090;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754eae8; end: 10754eb6f;  */

void FUN_10754eae8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [80];
  undefined8 uStack_28;
  
  func_0x000107550a80();
  FUN_1074e7910(auStack_c8);
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1074e813c(auStack_78,auStack_c8);
  func_0x0001077ae6e0(uVar1,auStack_78);
  FUN_1074e71ac(auStack_78);
  FUN_1074e71ac();
  func_0x000107550a34(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1074e71ac(auStack_78);
  FUN_1074e71ac(auStack_c8);
  func_0x000107550b68();
  func_0x000107550b70();
  func_0x000107550b48();
  func_0x000107550a70();
  return;
}



/* Entry: 10754eb70; end: 10754eb97;  */

void FUN_10754eb70(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb100);
  func_0x000107550a70();
  return;
}



/* Entry: 10754eb98; end: 10754eba3;  */

undefined ** FUN_10754eb98(void)

{
  return &PTR_DAT_1109bb100;
}



/* Entry: 10754eba4; end: 10754ebd7;  */

void FUN_10754eba4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107550ba0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107550b1c(uVar1);
  return;
}



/* Entry: 10754ebd8; end: 10754ebdf;  */

void FUN_10754ebd8(void)

{
  return;
}



/* Entry: 10754ebe0; end: 10754ec07;  */

void FUN_10754ebe0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109bb120;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754ec08; end: 10754ec2f;  */

void FUN_10754ec08(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109bb120;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754ec30; end: 10754ec57;  */

void FUN_10754ec30(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb180);
  func_0x000107550a70();
  return;
}



/* Entry: 10754ec58; end: 10754ec6b;  */

undefined ** FUN_10754ec58(void)

{
  return &PTR_DAT_1109bb180;
}



/* Entry: 10754ec6c; end: 10754ec93;  */

void FUN_10754ec6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb1a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754ec94; end: 10754ecb3;  */

void FUN_10754ec94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb1a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754ecb4; end: 10754ecfb;  */

void FUN_10754ecb4(void)

{
  func_0x000107550ae0();
  func_0x000107550ac8();
  func_0x000107550be0();
  func_0x0001077ae414();
  func_0x000107550b7c();
  func_0x000107550b84();
  return;
}



/* Entry: 10754ecfc; end: 10754ed23;  */

void FUN_10754ecfc(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb200);
  func_0x000107550a70();
  return;
}



/* Entry: 10754ed24; end: 10754ed37;  */

undefined ** FUN_10754ed24(void)

{
  return &PTR_DAT_1109bb200;
}



/* Entry: 10754ed38; end: 10754ed5f;  */

void FUN_10754ed38(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb220;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754ed60; end: 10754ed87;  */

void FUN_10754ed60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb220;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754ed88; end: 10754edaf;  */

void FUN_10754ed88(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb280);
  func_0x000107550a70();
  return;
}



/* Entry: 10754edb0; end: 10754edc3;  */

undefined ** FUN_10754edb0(void)

{
  return &PTR_DAT_1109bb280;
}



/* Entry: 10754edc4; end: 10754edeb;  */

void FUN_10754edc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb2a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754edec; end: 10754ee0b;  */

void FUN_10754edec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb2a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754ee0c; end: 10754ee53;  */

void FUN_10754ee0c(void)

{
  func_0x000107550ae0();
  func_0x000107550ac8();
  func_0x000107550be0();
  func_0x0001077ae5d4();
  func_0x000107550b7c();
  func_0x000107550b84();
  return;
}



/* Entry: 10754ee54; end: 10754ee7b;  */

void FUN_10754ee54(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb300);
  func_0x000107550a70();
  return;
}



/* Entry: 10754ee7c; end: 10754ee8f;  */

undefined ** FUN_10754ee7c(void)

{
  return &PTR_DAT_1109bb300;
}



/* Entry: 10754ee90; end: 10754eeb7;  */

void FUN_10754ee90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb320;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754eeb8; end: 10754eedf;  */

void FUN_10754eeb8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb320;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754eee0; end: 10754ef07;  */

void FUN_10754eee0(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb380);
  func_0x000107550a70();
  return;
}



/* Entry: 10754ef08; end: 10754ef1b;  */

undefined ** FUN_10754ef08(void)

{
  return &PTR_DAT_1109bb380;
}



/* Entry: 10754ef1c; end: 10754ef43;  */

void FUN_10754ef1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb3a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754ef44; end: 10754ef63;  */

void FUN_10754ef44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb3a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754ef64; end: 10754efab;  */

void FUN_10754ef64(void)

{
  func_0x000107550ae0();
  func_0x000107550ac8();
  func_0x000107550be0();
  func_0x0001077ae394();
  func_0x000107550b7c();
  func_0x000107550b84();
  return;
}



/* Entry: 10754efac; end: 10754efd3;  */

void FUN_10754efac(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb400);
  func_0x000107550a70();
  return;
}



/* Entry: 10754efd4; end: 10754efe7;  */

undefined ** FUN_10754efd4(void)

{
  return &PTR_DAT_1109bb400;
}



/* Entry: 10754efe8; end: 10754f00f;  */

void FUN_10754efe8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb420;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f010; end: 10754f037;  */

void FUN_10754f010(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb420;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f038; end: 10754f05f;  */

void FUN_10754f038(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb480);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f060; end: 10754f073;  */

undefined ** FUN_10754f060(void)

{
  return &PTR_DAT_1109bb480;
}



/* Entry: 10754f074; end: 10754f09b;  */

void FUN_10754f074(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb4a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f09c; end: 10754f0bb;  */

void FUN_10754f09c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb4a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f0bc; end: 10754f103;  */

void FUN_10754f0bc(void)

{
  func_0x000107550ae0();
  func_0x000107550ac8();
  func_0x000107550be0();
  func_0x0001077ae594();
  func_0x000107550b7c();
  func_0x000107550b84();
  return;
}



/* Entry: 10754f104; end: 10754f12b;  */

void FUN_10754f104(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb500);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f12c; end: 10754f13f;  */

undefined ** FUN_10754f12c(void)

{
  return &PTR_DAT_1109bb500;
}



/* Entry: 10754f140; end: 10754f167;  */

void FUN_10754f140(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb520;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f168; end: 10754f18f;  */

void FUN_10754f168(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb520;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f190; end: 10754f1b7;  */

void FUN_10754f190(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb580);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f1b8; end: 10754f1cb;  */

undefined ** FUN_10754f1b8(void)

{
  return &PTR_DAT_1109bb580;
}



/* Entry: 10754f1cc; end: 10754f1f3;  */

void FUN_10754f1cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb5a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f1f4; end: 10754f213;  */

void FUN_10754f1f4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb5a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f214; end: 10754f25b;  */

void FUN_10754f214(void)

{
  func_0x000107550ae0();
  func_0x000107550ac8();
  func_0x000107550be0();
  func_0x0001077ae354();
  func_0x000107550b7c();
  func_0x000107550b84();
  return;
}



/* Entry: 10754f25c; end: 10754f283;  */

void FUN_10754f25c(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb600);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f284; end: 10754f297;  */

undefined ** FUN_10754f284(void)

{
  return &PTR_DAT_1109bb600;
}



/* Entry: 10754f298; end: 10754f2bf;  */

void FUN_10754f298(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb620;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f2c0; end: 10754f2e7;  */

void FUN_10754f2c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb620;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f2e8; end: 10754f30f;  */

void FUN_10754f2e8(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb680);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f310; end: 10754f323;  */

undefined ** FUN_10754f310(void)

{
  return &PTR_DAT_1109bb680;
}



/* Entry: 10754f324; end: 10754f34b;  */

void FUN_10754f324(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb6a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f34c; end: 10754f36b;  */

void FUN_10754f34c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb6a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f36c; end: 10754f3b3;  */

void FUN_10754f36c(void)

{
  func_0x000107550ae0();
  func_0x000107550ac8();
  func_0x000107550be0();
  func_0x0001077ae314();
  func_0x000107550b7c();
  func_0x000107550b84();
  return;
}



/* Entry: 10754f3b4; end: 10754f3db;  */

void FUN_10754f3b4(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb700);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f3dc; end: 10754f3ef;  */

undefined ** FUN_10754f3dc(void)

{
  return &PTR_DAT_1109bb700;
}



/* Entry: 10754f3f0; end: 10754f417;  */

void FUN_10754f3f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bb720;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f418; end: 10754f43f;  */

void FUN_10754f418(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bb720;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f440; end: 10754f467;  */

void FUN_10754f440(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb780);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f468; end: 10754f473;  */

undefined ** FUN_10754f468(void)

{
  return &PTR_DAT_1109bb780;
}



/* Entry: 10754f474; end: 10754f4a3;  */

long FUN_10754f474(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x0001072ca37c(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10754f4a4; end: 10754f4ab;  */

void FUN_10754f4a4(void)

{
  return;
}



/* Entry: 10754f4ac; end: 10754f4d3;  */

void FUN_10754f4ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109bb7a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f4d4; end: 10754f4f3;  */

void FUN_10754f4d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109bb7a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10754f4f4; end: 10754f563;  */

void FUN_10754f4f4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_d8 [160];
  undefined8 uStack_38;
  
  func_0x000107550a98();
  func_0x000107550c78();
  FUN_1074830a8();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107550dd8();
  func_0x0001077ae614(uVar1,auStack_d8);
  func_0x000107550d24();
  func_0x000107550d2c();
  func_0x000107550a34(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107550d24();
  func_0x000107550d2c();
  func_0x000107550b68();
  func_0x000107550b70();
  func_0x000107550b48();
  func_0x000107550a70();
  return;
}



/* Entry: 10754f564; end: 10754f58b;  */

void FUN_10754f564(undefined8 param_1)

{
  func_0x000107550b70();
  func_0x000107550b48(param_1,&PTR_DAT_1109bb810);
  func_0x000107550a70();
  return;
}



/* Entry: 10754f58c; end: 10754f597;  */

undefined ** FUN_10754f58c(void)

{
  return &PTR_DAT_1109bb810;
}



/* Entry: 10754f598; end: 10754f5cb;  */

void FUN_10754f598(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107550ba0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107550b1c(uVar1);
  return;
}



/* Entry: 10754f5cc; end: 10754f5d3;  */

void FUN_10754f5cc(void)

{
  return;
}



/* Entry: 10754f5d4; end: 10754f5fb;  */

void FUN_10754f5d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107550a64();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109bb830;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10754f5fc; end: 10754f623;  */

void FUN_10754f5fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109bb830;
  param_2[1] = uVar1;
  return;
}


