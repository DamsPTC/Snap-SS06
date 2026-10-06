/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077def50; end: 1077defa7;  */

ulong FUN_1077def50(ulong param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x38) == 0) || (in_ZR = *(int *)(param_2 + 0x38) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0001077ee32c();
    if ((*(int *)(param_2 + 0x40) == 0) || (in_ZR = *(int *)(param_2 + 0x40) == 1, (bool)in_ZR)) {
      func_0x0001077eea20(1);
    }
    else {
      func_0x0001077ee6d8();
      func_0x0001077ee4ec();
      func_0x0001077ef1a8();
    }
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
      if (*(int *)(param_1 + 0x98) == 0) {
        return 1;
      }
      uVar1 = *(byte *)(param_1 + 0x18) >> 1 & 1;
      if (*(int *)(param_1 + 0x98) == 1) {
        uVar1 = 1;
      }
      return (ulong)uVar1;
    }
  }
  return param_1;
}



/* Entry: 1077df264; end: 1077df313;  */

void FUN_1077df264(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1;
  func_0x0001077efe3c();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_1109ddef8;
  func_0x000107780154(puVar2,param_2,param_3,param_4 & 1,param_5,param_6,param_7,param_8,param_9);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1077df6ac; end: 1077df6bf;  */

void FUN_1077df6ac(void)

{
  func_0x0001077df764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e1d2c; end: 1077e1d2f;  */

long FUN_1077e1d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de2a0);
  func_0x000104c2f714(lVar1 + 0x90);
  func_0x00010726afc0();
  return param_1;
}



/* Entry: 1077e1ec8; end: 1077e1f1f;  */

ulong FUN_1077e1ec8(ulong param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x40) == 0) || (in_ZR = *(int *)(param_2 + 0x40) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (*(int *)(param_1 + 0x48) == 0) {
      return 1;
    }
    uVar1 = *(byte *)(param_1 + 0x10) >> 1 & 1;
    if (*(int *)(param_1 + 0x48) == 1) {
      uVar1 = 1;
    }
    return (ulong)uVar1;
  }
  return param_1;
}



/* Entry: 1077e24b8; end: 1077e24ff;  */

void FUN_1077e24b8(long param_1)

{
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    func_0x0001077f1310((&PTR_DAT_1109de3c0)[*(uint *)(param_1 + 0x50)]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 1077e26b4; end: 1077e26bb;  */

void FUN_1077e26b4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x0001077e263c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e27c0; end: 1077e283f;  */

long FUN_1077e27c0(long param_1)

{
  func_0x00010727e9d0(param_1 + 0x100);
  func_0x000107266a30(param_1 + 200);
  func_0x000107266a30(param_1 + 0x90);
  func_0x00010727fc1c(param_1 + 0x58);
  func_0x0001077f1458();
  return param_1;
}



/* Entry: 1077e29bc; end: 1077e29bf;  */

long FUN_1077e29bc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [40];
  
  param_1 = (long *)*param_1;
  lVar5 = param_1[1];
  lVar1 = *param_2;
  lVar2 = (param_2[1] - lVar1) / 0x88;
  if (0 < lVar2) {
    lVar6 = param_1[1];
    if ((param_1[2] - lVar6) / 0x88 < lVar2) {
      plVar4 = param_1;
      FUN_1077de50c(param_1,(lVar6 - *param_1) / 0x88 + lVar2);
      func_0x0001077dea24(auStack_78,plVar4,(lVar5 - *param_1) / 0x88,param_1 + 2);
      func_0x0001077de55c(auStack_78,lVar1,lVar2);
      func_0x0001077de5c8(param_1,auStack_78,lVar5);
      func_0x0001077ef21c();
      func_0x0001077deaf0();
    }
    else {
      lVar6 = lVar6 - lVar5;
      lVar3 = lVar2 - lVar6 / 0x88;
      if (lVar3 == 0 || lVar2 < lVar6 / 0x88) {
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      else {
        func_0x0001077de3d4(param_1,lVar1 + lVar6,param_2[1],lVar3);
        if (lVar6 < 1) {
          return lVar5;
        }
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      func_0x0001077de47c();
    }
  }
  return lVar5;
}



/* Entry: 1077e2f38; end: 1077e30e7;  */

void FUN_1077e2f38(void)

{
  func_0x0001077f002c();
  func_0x0001077ee7c4();
  return;
}



/* Entry: 1077e32d8; end: 1077e34df;  */

long FUN_1077e32d8(long param_1)

{
  long lVar1;
  undefined8 *in_x6;
  undefined4 *in_x7;
  undefined4 *extraout_x8;
  undefined4 *unaff_x21;
  undefined4 *unaff_x22;
  undefined8 uVar2;
  undefined4 *in_stack_00000000;
  undefined4 *in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined4 *in_stack_00000038;
  undefined4 *puStack_78;
  undefined8 *puStack_70;
  
  func_0x0001077f16d0();
  lVar1 = param_1;
  func_0x0001077ef9e8();
  func_0x00010726ccd4();
  func_0x000104c318bc(lVar1 + 0x60);
  func_0x000104c318bc(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xd0) = *unaff_x22;
  *(undefined4 *)(param_1 + 0xd4) = *unaff_x21;
  *(undefined8 *)(param_1 + 0xd8) = *in_x6;
  *(undefined4 *)(param_1 + 0xe0) = *in_x7;
  *(undefined4 *)(param_1 + 0xe4) = *in_stack_00000000;
  *(undefined4 *)(param_1 + 0xe8) = *in_stack_00000008;
  *(undefined1 *)(param_1 + 0xec) = *in_stack_00000010;
  *(undefined1 *)(param_1 + 0xed) = *in_stack_00000018;
  *(undefined4 *)(param_1 + 0xf0) = *extraout_x8;
  *(undefined4 *)(param_1 + 0xf4) = *puStack_78;
  uVar2 = *puStack_70;
  *(undefined8 *)(param_1 + 0x100) = puStack_70[1];
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = *in_stack_00000038;
  return param_1;
}



/* Entry: 1077e3670; end: 1077e3677;  */

ulong FUN_1077e3670(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 in_ZR;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong unaff_x19;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar9 = auStack_60;
  func_0x00010775f5c4(param_1,"");
  func_0x000100060964(auStack_60);
  uVar7 = unaff_x19;
  func_0x00010775f02c();
  func_0x00010775f5fc();
  func_0x00010775f5b0(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010775f5fc();
  func_0x00010775f5dc();
  uVar8 = uVar7;
  func_0x000104c32db4();
  if (((int)uVar8 == 0) || (*(char *)(uVar7 + 0x38) != puVar9[0x38])) {
    return 0;
  }
  cVar5 = *(char *)(uVar7 + 0x58);
  if (cVar5 != puVar9[0x58] || cVar5 == '\0') {
    return (ulong)(cVar5 == puVar9[0x58]);
  }
  bVar3 = *(byte *)(uVar7 + 0x57);
  uVar8 = *(ulong *)(uVar7 + 0x48);
  if (-1 < (char)bVar3) {
    uVar8 = (ulong)bVar3;
  }
  bVar4 = puVar9[0x57];
  uVar1 = *(ulong *)(puVar9 + 0x48);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  if (uVar8 == uVar1) {
    plVar6 = (long *)*(long *)(uVar7 + 0x40);
    if (-1 < (char)bVar3) {
      plVar6 = (long *)(uVar7 + 0x40);
    }
    plVar2 = (long *)*(long *)(puVar9 + 0x40);
    if (-1 < (char)bVar4) {
      plVar2 = (long *)(puVar9 + 0x40);
    }
    func_0x000107c610b0(plVar6,plVar2);
    return (ulong)((int)plVar6 == 0);
  }
  return 0;
}



/* Entry: 1077e37a4; end: 1077e37f3;  */

/* WARNING: Possible PIC construction at 0x0001077e37c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e37c8) */
/* WARNING: Removing unreachable block (ram,0x0001077e37e8) */
/* WARNING: Removing unreachable block (ram,0x0001077ee7f4) */
/* WARNING: Removing unreachable block (ram,0x0001077e37e0) */
/* WARNING: Removing unreachable block (ram,0x0001077ee69c) */

void FUN_1077e37a4(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_70 [64];
  
  func_0x0001077ee254();
  func_0x0001077f0980();
  func_0x0001000d03a8(auStack_70);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e38bc; end: 1077e3903;  */

ulong FUN_1077e38bc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x0001077e38dc();
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*(uint *)*param_3;
}



/* Entry: 1077e3ad4; end: 1077e3afb;  */

undefined8 FUN_1077e3ad4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001077f1b98();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  func_0x0001077e3b24();
  func_0x0001077ef34c();
  func_0x0001077f1144();
  func_0x0001077e3b9c();
  func_0x0001077ee520();
  return param_1;
}



/* Entry: 1077e3c54; end: 1077e3c63;  */

void FUN_1077e3c54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001077efce8();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x0001077e263c();
  }
  return;
}



/* Entry: 1077e3ec4; end: 1077e3ef7;  */

void FUN_1077e3ec4(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001077f0c6c();
    func_0x0001077e3b60();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    func_0x0001077e3b24();
    func_0x0001077f0638();
    func_0x0001077f0a90();
    func_0x0001077e3f20();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1077e40ec; end: 1077e410f;  */

void FUN_1077e40ec(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 1077e4410; end: 1077e4473;  */

void FUN_1077e4410(void)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_88 [88];
  
  func_0x0001077ee9f8();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x20) {
    func_0x0001077e42cc(auStack_88,unaff_x21);
    func_0x0001077efec4();
    func_0x0001077e55ec();
    FUN_1077e24b8(auStack_88);
  }
  return;
}



/* Entry: 1077e47b4; end: 1077e4a7f;  */

ulong FUN_1077e47b4(undefined1 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  long extraout_x10;
  long lVar5;
  long extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 uVar6;
  undefined8 extraout_x11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  char unaff_w19;
  ulong uVar7;
  undefined1 auStack_50 [25];
  undefined1 uStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  
  uStack_37 = param_1;
  func_0x0001077ee3c0();
  func_0x0001077f13b4();
  cStack_36 = unaff_w19 + -0x58;
  func_0x0001077df888();
  cStack_35 = unaff_w19 + ' ';
  func_0x0001077df888();
  cStack_34 = unaff_w19 + -0x68;
  func_0x0001077df020();
  cStack_33 = unaff_w19 + -0x30;
  func_0x0001077df020();
  cStack_32 = unaff_w19 + '\b';
  func_0x0001077df040();
  cStack_31 = unaff_w19 + 'H';
  func_0x0001077df020();
  cStack_30 = unaff_w19 + -0x80;
  func_0x0001077df020();
  cStack_2f = unaff_w19 + -0x48;
  func_0x0001077df020();
  cStack_2e = unaff_w19 + -0x10;
  func_0x0001077e42ac();
  cStack_2d = unaff_w19 + '(';
  func_0x0001077e42ac();
  cStack_2c = unaff_w19 + '`';
  func_0x0001077df020();
  cStack_2b = unaff_w19 + -0x68;
  func_0x0001077df020();
  cStack_2a = unaff_w19 + -0x30;
  func_0x0001077df060();
  cStack_29 = unaff_w19 + '\x18';
  func_0x0001077df020();
  puVar3 = &uStack_37;
  func_0x0001077df080(auStack_50,puVar3,0xf);
  func_0x0001077ee860(0);
  uVar7 = extraout_x8;
  lVar4 = extraout_x9;
  lVar5 = extraout_x10;
  uVar6 = extraout_x11;
  while( true ) {
    uVar2 = lVar4 == lVar5 && (int)uVar7 == (int)uVar6;
    uVar7 = (ulong)(byte)uVar2;
    if (((bool)uVar2) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar4 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar2) {
      uVar1 = extraout_w8 + 1;
    }
    uVar7 = (ulong)uVar1;
    lVar5 = extraout_x10_00;
    uVar6 = extraout_x11_00;
  }
  func_0x000104be7d74(auStack_50);
  func_0x0001077ee2e4();
  if ((bool)uVar2) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x0001077ef1b8();
  func_0x0001074830a8();
  func_0x0001073244ec(uVar7 + 0xa8,puVar3 + 0xa8);
  func_0x0001073244ec(uVar7 + 0x120,puVar3 + 0x120);
  func_0x00010727d9cc(uVar7 + 400,puVar3 + 400);
  func_0x00010727d9cc(uVar7 + 0x1c8,puVar3 + 0x1c8);
  func_0x0001073390b4(uVar7 + 0x200,puVar3 + 0x200);
  func_0x00010727d9cc(uVar7 + 0x240,puVar3 + 0x240);
  func_0x00010727d9cc(uVar7 + 0x278,puVar3 + 0x278);
  func_0x00010727d9cc(uVar7 + 0x2b0,puVar3 + 0x2b0);
  func_0x000107310b20(uVar7 + 0x2e8,puVar3 + 0x2e8);
  func_0x000107310b20(uVar7 + 800,puVar3 + 800);
  func_0x00010727d9cc(uVar7 + 0x358,puVar3 + 0x358);
  func_0x00010727d9cc(uVar7 + 0x390,puVar3 + 0x390);
  func_0x000107432d30(uVar7 + 0x3c8,puVar3 + 0x3c8);
  func_0x00010727d9cc(uVar7 + 0x410,puVar3 + 0x410);
  return uVar7;
}



/* Entry: 1077e5070; end: 1077e509f;  */

void FUN_1077e5070(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x98) != 0) && (uVar1 = *(int *)(param_2 + 0x98) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2 + 8);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077e50f0();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077e51d4; end: 1077e51ef;  */

void FUN_1077e51d4(void)

{
  func_0x0001077ef51c();
  func_0x0001077e51f0();
  return;
}



/* Entry: 1077e5320; end: 1077e5353;  */

void FUN_1077e5320(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077e53bc(extraout_x8,param_1 + 8,param_1 + 0x68,param_1 + 0xa0,param_1 + 0xd8,
                      param_1 + 0xdc,param_1 + 0xe0,param_1 + 0xe8,param_1 + 0xec,param_1 + 0xf0,
                      param_1 + 0xf4,param_1 + 0xf5,param_1 + 0xf8,param_1 + 0xfc,param_1 + 0x100,
                      param_1 + 0x110,&stack0xfffffffffffffff0,&UNK_1077e5354);
  return;
}



/* Entry: 1077e56d8; end: 1077e56ff;  */

void FUN_1077e56d8(void)

{
  func_0x0001077ef34c();
  func_0x0001077f068c();
  func_0x0001077e5788();
  func_0x0001077ee520();
  return;
}



/* Entry: 1077e5850; end: 1077e58af;  */

void FUN_1077e5850(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    FUN_1077e24b8(param_3);
  }
  return;
}



/* Entry: 1077e5a40; end: 1077e5aa3;  */

void FUN_1077e5a40(long param_1)

{
  long unaff_x19;
  
  func_0x0001077eec18();
  _bzero(param_1 + 8,0x448);
  func_0x0001077f0608(&UNK_1109de790);
  func_0x0001077efe2c(unaff_x19 + 0x450);
  func_0x0001077f05cc(unaff_x19 + 0x468);
  return;
}



/* Entry: 1077e5f08; end: 1077e5f4f;  */

void FUN_1077e5f08(long param_1)

{
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    func_0x0001077f1310((&PTR_DAT_1109de478)[*(uint *)(param_1 + 0x50)]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 1077e6104; end: 1077e610b;  */

void FUN_1077e6104(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x0001077e608c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077e6210; end: 1077e627f;  */

long FUN_1077e6210(long param_1)

{
  func_0x00010727e9d0(param_1 + 0x90);
  func_0x00010727fc1c(param_1 + 0x58);
  func_0x0001077f1450();
  return param_1;
}



/* Entry: 1077e63e8; end: 1077e63eb;  */

long FUN_1077e63e8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [40];
  
  param_1 = (long *)*param_1;
  lVar5 = param_1[1];
  lVar1 = *param_2;
  lVar2 = (param_2[1] - lVar1) / 0x88;
  if (0 < lVar2) {
    lVar6 = param_1[1];
    if ((param_1[2] - lVar6) / 0x88 < lVar2) {
      plVar4 = param_1;
      FUN_1077de50c(param_1,(lVar6 - *param_1) / 0x88 + lVar2);
      func_0x0001077dea24(auStack_78,plVar4,(lVar5 - *param_1) / 0x88,param_1 + 2);
      func_0x0001077de55c(auStack_78,lVar1,lVar2);
      func_0x0001077de5c8(param_1,auStack_78,lVar5);
      func_0x0001077ef21c();
      func_0x0001077deaf0();
    }
    else {
      lVar6 = lVar6 - lVar5;
      lVar3 = lVar2 - lVar6 / 0x88;
      if (lVar3 == 0 || lVar2 < lVar6 / 0x88) {
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      else {
        func_0x0001077de3d4(param_1,lVar1 + lVar6,param_2[1],lVar3);
        if (lVar6 < 1) {
          return lVar5;
        }
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      func_0x0001077de47c();
    }
  }
  return lVar5;
}



/* Entry: 1077e7190; end: 1077e71e3;  */

void FUN_1077e7190(void)

{
  undefined1 in_ZR;
  undefined1 auStack_70 [64];
  
  func_0x0001077ee9f8();
  func_0x0001077ee374();
  func_0x0001077e8dc8(auStack_70);
  func_0x0001077eeee0();
  func_0x0001077e8cf8();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eea08();
  func_0x0001077ef068();
  func_0x0001077f0020();
  func_0x0001077ee99c();
  func_0x0001077e8dd0();
  return;
}



/* Entry: 1077e75d0; end: 1077e7607;  */

void FUN_1077e75d0(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001077ef398();
  func_0x0001077dd758(auStack_38);
  func_0x0001077effe4();
  func_0x0001077ef60c();
  return;
}



/* Entry: 1077e7c8c; end: 1077e7cfb;  */

long FUN_1077e7c8c(long param_1)

{
  func_0x0001072dbd40(param_1 + 0x208);
  func_0x00010726afc0(param_1 + 0x1e8);
  func_0x0001077f14f8();
  func_0x0001077f1228();
  func_0x0001077f152c();
  return param_1;
}



/* Entry: 1077e7e78; end: 1077e7ea7;  */

uint FUN_1077e7e78(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e7ea8();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e8040; end: 1077e805f;  */

void FUN_1077e8040(void)

{
  func_0x0001077ee234();
  func_0x0001077e8060();
  return;
}



/* Entry: 1077e81d4; end: 1077e820b;  */

void FUN_1077e81d4(void)

{
  func_0x0001077ee210();
  func_0x0001077e81f0();
  return;
}



/* Entry: 1077e83fc; end: 1077e8433;  */

void FUN_1077e83fc(void)

{
  func_0x0001077ee210();
  func_0x0001077e8418();
  return;
}



/* Entry: 1077e8640; end: 1077e86b3;  */

void FUN_1077e8640(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 *unaff_x19;
  
  func_0x0001077ee3e4();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x00010777590c();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x14] = 0;
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e86d0();
  return;
}



/* Entry: 1077e8870; end: 1077e88db;  */

void FUN_1077e8870(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775d58();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e88f8();
  return;
}



/* Entry: 1077e8a98; end: 1077e8b03;  */

ulong FUN_1077e8a98(ulong *param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  
  func_0x0001077ee420();
  uVar1 = *param_1;
  func_0x0001077ef734(uVar1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775dac();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e8b24();
  return uVar1 & 0xffffffffff;
}



/* Entry: 1077e8d24; end: 1077e8d3f;  */

void FUN_1077e8d24(void)

{
  func_0x0001077ee448();
  func_0x0001077e8d40();
  return;
}



/* Entry: 1077e8eb4; end: 1077e8ee3;  */

uint FUN_1077e8eb4(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e8ee4();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e9060; end: 1077e909f;  */

/* WARNING: Possible PIC construction at 0x0001077e90c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e90c4) */
/* WARNING: Removing unreachable block (ram,0x0001077ee500) */

undefined1 * FUN_1077e9060(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_40 [16];
  
  if ((*(int *)(param_2 + 0x40) != 0) && (*(int *)(param_2 + 0x40) != 1)) {
    param_1 = auStack_40;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001077ef398(param_3 + 8,param_2);
    func_0x0001077f0980();
    unaff_x30 = &UNK_1077e90c4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001072f6454(param_1);
  return param_1;
}



/* Entry: 1077e9254; end: 1077e926f;  */

void FUN_1077e9254(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [48];
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e620c();
    func_0x0001077f1b84();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077e92cc();
  func_0x0001077e92fc(auStack_70);
  return;
}



/* Entry: 1077e93cc; end: 1077e940b;  */

void FUN_1077e93cc(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001077ef424();
  func_0x0001077e940c(*unaff_x20);
  func_0x0001077e9648(unaff_x19 + 8,unaff_x20 + 1);
  return;
}



/* Entry: 1077e9718; end: 1077e972b;  */

void FUN_1077e9718(void)

{
  func_0x0001077e972c();
  return;
}



/* Entry: 1077e9a48; end: 1077e9aab;  */

byte FUN_1077e9a48(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    lVar2 = param_1;
    func_0x0001077f0cc4();
    if ((int)lVar2 == 0) {
      bVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 8);
      uVar1 = *(ulong *)(param_1 + 0x10);
      do {
        if (uVar5 == uVar1) {
          return 1;
        }
        uVar3 = uVar5;
        FUN_1077e9a48();
        uVar5 = uVar5 + 0x58;
        bVar4 = 0;
      } while ((uVar3 & 1) != 0);
    }
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x10) >> 1 & 1;
  }
  return bVar4;
}



/* Entry: 1077e9d04; end: 1077e9d17;  */

void FUN_1077e9d04(void)

{
  func_0x0001077eab38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077eb4b0; end: 1077eb503;  */

void FUN_1077eb4b0(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x20;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [64];
  
  func_0x0001077ef34c();
  func_0x0001077ee374();
  func_0x0001077e8dc8(auStack_70);
  lVar1 = unaff_x20 + 0x9d8;
  func_0x0001077efae0(lVar1);
  func_0x0001077ec3dc();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eea08();
  func_0x0001077ef068();
  puStack_78 = &UNK_1077eb504;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001077f0064();
  func_0x0001077ec45c(lVar1 + 0xa50,&uStack_81);
  return;
}



/* Entry: 1077ebc78; end: 1077ebca7;  */

void FUN_1077ebc78(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ebcf8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ebddc; end: 1077ebdf7;  */

void FUN_1077ebddc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebdf8();
  return;
}



/* Entry: 1077ebf28; end: 1077ebf5b;  */

void FUN_1077ebf28(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ebf78();
  return;
}



/* Entry: 1077ec078; end: 1077ec0a7;  */

void FUN_1077ec078(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x48) != 0) && (uVar1 = *(int *)(param_2 + 0x48) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2 + 8);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec0f8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec1dc; end: 1077ec1f7;  */

void FUN_1077ec1dc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec1f8();
  return;
}



/* Entry: 1077ec328; end: 1077ec35b;  */

void FUN_1077ec328(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec378();
  return;
}



/* Entry: 1077ec478; end: 1077ec4a7;  */

void FUN_1077ec478(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec4f8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec5dc; end: 1077ec5f7;  */

void FUN_1077ec5dc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec5f8();
  return;
}



/* Entry: 1077ecef4; end: 1077ecef7;  */

void FUN_1077ecef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1077ed11c; end: 1077ed177;  */

void FUN_1077ed11c(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [48];
  
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e5e9c();
    func_0x0001077f1858();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077ed178();
  func_0x0001077ed1a8(auStack_60);
  return;
}



/* Entry: 1077ed2d0; end: 1077ed2e7;  */

void FUN_1077ed2d0(void)

{
  func_0x0001077ed2e8();
  return;
}



/* Entry: 1077ed6f0; end: 1077ed91f;  */

undefined1 * FUN_1077ed6f0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar6;
  long extraout_x9;
  long lVar7;
  long extraout_x9_00;
  long extraout_x10;
  long lVar8;
  long extraout_x10_00;
  int extraout_w11;
  int iVar9;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long unaff_x19;
  undefined1 *puVar10;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined1 uStack_39e;
  undefined1 uStack_39d;
  undefined1 uStack_39c;
  char cStack_39b;
  byte bStack_39a;
  char cStack_399;
  undefined1 auStack_398 [24];
  undefined1 *puStack_380;
  undefined1 auStack_360 [72];
  undefined1 auStack_318 [72];
  undefined1 auStack_2d0 [72];
  undefined1 auStack_288 [16];
  undefined4 uStack_278;
  undefined4 uStack_260;
  undefined4 uStack_248;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [416];
  
  func_0x0001077ee358();
  func_0x0001077efc18();
  func_0x0001077edb84(auStack_228);
  uVar2 = unaff_w22;
  uVar3 = unaff_w22;
  uVar4 = unaff_w22;
  if (*(int *)(unaff_x21 + 0x78) != 0) {
    in_ZR = *(int *)(unaff_x21 + 0x78) == 1;
    if ((bool)in_ZR) {
      uVar2 = 1;
      uVar3 = 1;
      uVar4 = 1;
    }
    else {
      func_0x0001077efe74(auStack_1e0);
      func_0x0001077ef0c4(auStack_288,unaff_x21 + 0x10,auStack_1e0);
      func_0x0001077f0af4();
      uVar2 = uStack_278;
      uVar3 = uStack_260;
      uVar4 = uStack_248;
    }
  }
  uStack_248 = uVar4;
  uStack_260 = uVar3;
  uStack_278 = uVar2;
  func_0x000104c2f714(auStack_228);
  func_0x0001077f0b14(auStack_228,unaff_x21 + 0x80);
  func_0x0001077f0b14(auStack_2d0,unaff_x21 + 0xb8);
  func_0x0001077f0b14(auStack_318,unaff_x21 + 0xf0);
  func_0x0001077edba4(auStack_240);
  if ((*(int *)(unaff_x21 + 0x170) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x170) == 1, (bool)in_ZR))
  {
    func_0x0001077f02c4(1);
  }
  else {
    func_0x0001077efe74(auStack_1e0);
    func_0x0001077ef0c4(auStack_360,unaff_x21 + 0x128,auStack_1e0);
    func_0x0001077f0af4();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  func_0x0001077f0b14(auStack_1e0,unaff_x21 + 0x178);
  func_0x0001077ef1ec(auStack_288);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_288);
  func_0x0001077ef1ec(auStack_228);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_228);
  func_0x0001077ef1ec(auStack_2d0);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_2d0);
  func_0x0001077ef1ec(auStack_318);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_318);
  func_0x0001077ef1ec(auStack_360);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_360);
  func_0x0001077ef1ec(auStack_1e0);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_1e0);
  func_0x0001073ebef4(auStack_1e0);
  func_0x0001077ef870();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  puVar10 = auStack_228;
  func_0x0001073ebef4();
  func_0x0001077f02a0();
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return puVar10;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
  func_0x0001077efc00();
  func_0x0001077efc5c();
  uStack_39e = SUB81(auStack_228,0);
  func_0x0001073ebef4();
  func_0x0001077f02a0();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  puStack_380 = puVar10;
  func_0x0001077ef1b8();
  func_0x0001077df888();
  uStack_39d = uStack_39e;
  func_0x0001077f1184();
  uStack_39c = uStack_39d;
  func_0x0001077f118c();
  cStack_39b = (char)unaff_x19 + -0x10;
  func_0x0001077df020();
  if (*(int *)(unaff_x19 + 0x170) == 0) {
    bStack_39a = 1;
  }
  else {
    bStack_39a = *(byte *)(unaff_x19 + 0x138) >> 1 & 1;
    if (*(int *)(unaff_x19 + 0x170) == 1) {
      bStack_39a = 1;
    }
  }
  cStack_399 = (char)unaff_x19 + 'x';
  func_0x0001077df020();
  func_0x0001077df080(auStack_398,&uStack_39e,6);
  func_0x0001077ee5f4();
  uVar6 = extraout_x8;
  lVar7 = extraout_x9;
  lVar8 = extraout_x10;
  iVar9 = extraout_w11;
  while( true ) {
    uVar5 = lVar7 == lVar8 && (int)uVar6 == iVar9;
    puVar10 = (undefined1 *)(ulong)(byte)uVar5;
    if (((bool)uVar5) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar7 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar5) {
      uVar1 = extraout_w8 + 1;
    }
    uVar6 = (ulong)uVar1;
    lVar8 = extraout_x10_00;
    iVar9 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return puVar10;
}



/* Entry: 1077edba8; end: 1077edbff;  */

long FUN_1077edba8(long param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x30) == 0) || (in_ZR = *(int *)(param_2 + 0x30) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    lVar1 = param_1;
    func_0x0001077ef940(&PTR_DAT_1109de5d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x128);
    func_0x0001077edfc8();
    return param_1;
  }
  return param_1;
}



/* Entry: 1077ee054; end: 1077ee063;  */

undefined8 FUN_1077ee054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1077f0954; end: 1077f1bbf;  */

void FUN_1077f0954(void)

{
  return;
}



/* Entry: 1077f23c8; end: 1077f2427;  */

long FUN_1077f23c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1077f2704; end: 1077f273b;  */

undefined8 FUN_1077f2704(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x40;
  pbVar1 = &UNK_1109debe8;
  do {
    pbVar2 = &UNK_1109dec38;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2978; end: 1077f29af;  */

undefined8 FUN_1077f2978(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109ded38;
  do {
    pbVar2 = &UNK_1109ded78;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2c38; end: 1077f2c6f;  */

undefined8 FUN_1077f2c38(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109dee48;
  do {
    pbVar2 = &UNK_1109dee88;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f35a8; end: 1077f3643;  */

bool FUN_1077f35a8(long param_1)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x19 == param_1) {
    func_0x000100067218(&stack0xffffffffffffffe0);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1077f38c0; end: 1077f3943;  */

void FUN_1077f38c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001077f3944(param_1,param_4);
    func_0x0001077f397c(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001077f3b24(&uStack_40);
  return;
}



/* Entry: 1077f3ad4; end: 1077f3af3;  */

void FUN_1077f3ad4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010743e358();
  }
  return;
}



/* Entry: 1077f3d40; end: 1077f3d47;  */

void FUN_1077f3d40(void)

{
  return;
}



/* Entry: 1077f3e48; end: 1077f3e5b;  */

void FUN_1077f3e48(void)

{
  func_0x0001077f3e68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f471c; end: 1077f473f;  */

void FUN_1077f471c(void)

{
  return;
}



/* Entry: 1077f4eec; end: 1077f4f2b;  */

undefined8 * FUN_1077f4eec(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 4);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x7ffffffffffffff;
    }
    return puVar2;
  }
  func_0x000107407900();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 1077f51c8; end: 1077f53eb;  */

void FUN_1077f51c8(double param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [24];
  undefined8 *puStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_b0;
  func_0x0001077f873c();
  func_0x0001077f8548();
  uStack_58 = extraout_x8;
  _memcpy();
  *(undefined8 *)(unaff_x19 + 0xe50) = param_6;
  uVar1 = param_4 == 2;
  if ((bool)uVar1) {
    uVar5 = 0x44800000;
  }
  else {
    func_0x0001074163dc();
    uVar1 = param_1 == 0.0;
    uVar5 = 0x43480000;
    if ((bool)uVar1) {
      uVar5 = 0x42c80000;
    }
  }
  *(undefined4 *)(unaff_x19 + 0xe58) = uVar5;
  func_0x00010002b838(auStack_b0,&UNK_10f42ac86);
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0x4c));
  ppuStack_78 = &PTR_FUN_1109df760;
  puStack_70 = &UNK_1077f53ec;
  pppuStack_60 = &ppuStack_78;
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0x50));
  func_0x0001077f8654(fVar6 + *(float *)(unaff_x19 + 0xe58) * 2.0,
                      fVar8 + *(float *)(unaff_x19 + 0xe58) * 2.0,unaff_x19 + 0xe60,auStack_b0);
  func_0x0001072ab6cc(&ppuStack_78);
  func_0x0001077f8670();
  func_0x00010002b838(auStack_b0,&UNK_10f42ac95);
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0x4c));
  ppuStack_98 = &PTR_FUN_1109df760;
  puStack_90 = &UNK_1077f53ec;
  pppuStack_80 = &ppuStack_98;
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0x50));
  func_0x0001077f8654(fVar6 + *(float *)(unaff_x19 + 0xe58) * 2.0,
                      fVar8 + *(float *)(unaff_x19 + 0xe58) * 2.0,unaff_x19 + 0xf80);
  func_0x0001072ab6cc(&ppuStack_98);
  func_0x0001077f8670();
  *(undefined8 *)(unaff_x19 + 0x10b0) = 0;
  *(undefined8 *)(unaff_x19 + 0x10a8) = 0;
  *(undefined8 **)(unaff_x19 + 0x10a0) = (undefined8 *)(unaff_x19 + 0x10a8);
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0x4c));
  fVar9 = *(float *)(unaff_x19 + 0xe58);
  *(float *)(unaff_x19 + 0x10b8) = fVar9 + fVar6;
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0x50));
  *(float *)(unaff_x19 + 0x10bc) = fVar9 + fVar8;
  *(float *)(unaff_x19 + 0x10c0) = fVar6 + fVar9 * 2.0;
  fVar8 = fVar8 + fVar9 * 2.0;
  dVar7 = (double)(ulong)(uint)fVar8;
  *(float *)(unaff_x19 + 0x10c4) = fVar8;
  func_0x0001074163dc();
  fVar6 = *(float *)(unaff_x19 + 0xa4);
  _cos();
  *(float *)(unaff_x19 + 0x10c8) = (float)(dVar7 * (double)fVar6);
  func_0x0001077f8514(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077f80fc(unaff_x19 + 0x10a0);
  func_0x0001072a08c4(unaff_x19 + 0xf80);
  puVar2 = (undefined8 *)(unaff_x19 + 0xe60);
  func_0x0001072a08c4();
  func_0x0001077f8680();
  puVar3 = puVar2 + 8;
  func_0x0001072bb3b4();
  uStack_e0 = *puVar2;
  uStack_d8 = 0;
  puStack_f0 = puVar3;
  puStack_e8 = puVar4;
  func_0x0001003a91d4(&UNK_10f42acb4);
  func_0x0001003a9204(auStack_108);
  func_0x000107268798(extraout_x8_00,auStack_108);
  func_0x0001077f8678();
  return;
}



/* Entry: 1077f5f10; end: 1077f5f5b;  */

bool FUN_1077f5f10(float *param_1,float *param_2)

{
  if (((*param_2 <= *param_1) && (param_2[1] <= param_1[1])) && (param_1[2] < param_2[2])) {
    return param_1[3] < param_2[3];
  }
  return false;
}



/* Entry: 1077f702c; end: 1077f7193;  */

ulong FUN_1077f702c(long param_1,float *param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined8 in_d3;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar12 = (undefined4)((ulong)in_d3 >> 0x20);
  fVar10 = (float)in_d3;
  lVar1 = param_3;
  func_0x0001077f873c();
  fVar14 = *param_2;
  dVar6 = (double)(ulong)(uint)param_2[1];
  fVar13 = param_2[2];
  dVar9 = (double)(ulong)(uint)fVar13;
  fVar2 = fVar14;
  dVar5 = dVar6;
  func_0x0001077f7194(lVar1,*(undefined8 *)(param_1 + 0x4c));
  uStack_80 = CONCAT44(SUB84(dVar5,0),fVar2);
  fVar8 = SUB84(dVar9,0);
  uStack_78 = CONCAT44(fVar10,fVar8);
  dVar7 = dVar5;
  fVar11 = fVar10;
  if (fVar13 != 0.0) {
    dVar9 = 0.0;
    func_0x00010740b850(fVar14,param_3);
    dVar7 = dVar6;
  }
  if ((*(char *)(unaff_x19 + 0xa94) == '\x01') &&
     (fVar13 = *(float *)(unaff_x19 + 0xa90), 0.0 < fVar13)) {
    uStack_a0 = (double)(float)*unaff_x21;
    dStack_98 = (double)(float)((ulong)*unaff_x21 >> 0x20);
    uVar3 = *(undefined4 *)(unaff_x21 + 1);
    uVar4 = 0;
    func_0x00010741848c(&uStack_a0,param_3 + 0x308);
    func_0x0001074185bc(param_3 + 0x180,*(undefined8 *)(unaff_x19 + 0x4c),1);
    uStack_a0 = (double)fVar2;
    dStack_98 = (double)SUB84(dVar5,0);
    dStack_90 = (double)fVar8;
    dStack_88 = (double)fVar10;
    uStack_c0 = CONCAT44(uVar4,uVar3);
    dVar5 = (double)fVar13;
    uStack_a8 = CONCAT44(uVar12,fVar11);
    dStack_b8 = dVar7;
    dStack_b0 = dVar9;
    func_0x00010740b8e0(&uStack_a0,&uStack_c0);
    uStack_78 = CONCAT44((float)(double)CONCAT44(uVar12,fVar11),(float)dVar9);
    uStack_80 = CONCAT44((float)dVar7,(float)dVar5);
  }
  uStack_a0 = (double)CONCAT44(*(undefined4 *)(unaff_x19 + 0xe58),*(undefined4 *)(unaff_x19 + 0xe58)
                              );
  dStack_98 = 0.0;
  func_0x0001073b5da0(&uStack_80,&uStack_a0);
  return uStack_80 & 0xffffffff;
}



/* Entry: 1077f792c; end: 1077f793f;  */

void FUN_1077f792c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x0001077f795c();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1077f7bf4; end: 1077f7d57;  */

void FUN_1077f7bf4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int extraout_w10;
  long unaff_x19;
  uint *unaff_x21;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  func_0x0001077f873c();
  plVar2 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  plVar1 = plVar2 + 1;
  plVar3 = plVar7;
  if (plVar7 == plVar1) {
LAB_1077f7c30:
    plVar4 = plVar7;
    if ((plVar7 != (long *)*plVar2) && (func_0x00010002c810(), *unaff_x21 <= *(uint *)(plVar4 + 4)))
    goto LAB_1077f7cb0;
    plVar8 = plVar7;
    if (*plVar7 != 0) {
      plVar5 = plVar4 + 1;
      plStack_48 = plVar4;
      goto LAB_1077f7cc0;
    }
  }
  else {
    if (*unaff_x21 < *(uint *)(plVar7 + 4)) goto LAB_1077f7c30;
    if (*unaff_x21 <= *(uint *)(plVar7 + 4)) goto LAB_1077f7d2c;
    plVar5 = plVar7;
    func_0x00010002c7d4();
    if ((plVar1 == plVar5) || (*unaff_x21 < *(uint *)(plVar5 + 4))) {
      plVar8 = plVar7 + 1;
      plStack_48 = plVar5;
      if (*plVar8 != 0) goto LAB_1077f7cc0;
      goto LAB_1077f7cd4;
    }
LAB_1077f7cb0:
    plVar5 = plVar2;
    func_0x0001077f7da8(plVar2,&plStack_48);
LAB_1077f7cc0:
    plVar7 = (long *)*plVar5;
    plVar8 = plVar5;
    plVar3 = plStack_48;
    if (plVar7 != (long *)0x0) goto LAB_1077f7d2c;
  }
LAB_1077f7cd4:
  plStack_48 = plVar3;
  plVar7 = (long *)0x38;
  __Znwm();
  uStack_50 = 1;
  *(uint *)(plVar7 + 4) = *unaff_x21;
  lVar6 = *(long *)(unaff_x21 + 4);
  lVar9 = *(long *)(unaff_x21 + 2);
  plVar7[6] = *(long *)(unaff_x21 + 4);
  plVar7[5] = lVar9;
  plStack_58 = plVar1;
  if (lVar6 != 0) {
    do {
      func_0x0001077f8618();
    } while (extraout_w10 != 0);
  }
  func_0x0001077f7d58(plVar2,plStack_48,plVar8,plVar7);
  uStack_60 = 0;
  func_0x0001077f7df4(&uStack_60);
LAB_1077f7d2c:
  *(long **)(unaff_x19 + 8) = plVar7;
  func_0x00010002c7d4();
  *(long **)(unaff_x19 + 8) = plVar7;
  return;
}



/* Entry: 1077f8050; end: 1077f8057;  */

void FUN_1077f8050(void)

{
  return;
}



/* Entry: 1077f81f0; end: 1077f8267;  */

long * FUN_1077f81f0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001074c3124();
  }
  lVar1 = param_4 + param_3 * 0x14;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x14;
  return param_1;
}



/* Entry: 1077f8460; end: 1077f846b;  */

undefined ** FUN_1077f8460(void)

{
  return &PTR_DAT_1109df870;
}



/* Entry: 1077f8bf8; end: 1077f8d33;  */

void FUN_1077f8bf8(float param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 **ppuVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar5 = (int)((param_1 - *(float *)(param_2 + 0x38)) / 360.0);
  if (iVar5 != 0) {
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    ppuVar3 = *(undefined8 ***)(param_2 + 8);
    while (ppuVar3 != (undefined8 **)(param_2 + 0x10)) {
      uStack_88 = 0;
      uStack_80 = 0;
      puVar4 = *(undefined1 **)((long)ppuVar3 + 0x28);
      puStack_90 = &uStack_88;
      while (puVar4 != (undefined1 *)((long)ppuVar3 + 0x30)) {
        uVar2 = (ulong)(uint)(int)(short)(*(short *)(puVar4 + 0x32) + (short)iVar5);
        puVar1 = puVar4 + 0x30;
        func_0x000107515534();
        *(undefined1 **)(puVar4 + 0x30) = puVar1;
        *(ulong *)(puVar4 + 0x38) = uVar2;
        func_0x0001077f8d34(&puStack_90,puVar4 + 0x30,puVar4 + 0x30);
        func_0x00010002c7d4();
      }
      func_0x0001077f8d4c(&puStack_78,(undefined1 *)((long)ppuVar3 + 0x20),&puStack_90);
      ppuVar3 = &puStack_90;
      func_0x0001074f50e8();
      func_0x0001077fa614();
    }
    func_0x0001077f9524((undefined8 *)(param_2 + 8),&puStack_78);
    func_0x0001074f508c(&puStack_78);
  }
  *(float *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 1077f9288; end: 1077f933b;  */

undefined8 FUN_1077f9288(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  func_0x0001077fa5cc();
  uVar6 = 0;
  puVar1 = param_1 + 2;
  puVar4 = (undefined8 *)param_1[1];
  while (puVar4 != puVar1) {
    puVar5 = puVar4 + 5;
    puVar3 = (undefined8 *)*puVar5;
    while (puVar3 != puVar4 + 6) {
      lVar2 = unaff_x19;
      func_0x0001077f9fe4();
      if (lVar2 == 0) {
        func_0x0001077f90d4();
        param_1 = puVar5;
        func_0x0001077f9c98(puVar5,puVar3);
        uVar6 = 1;
        puVar3 = param_1;
      }
      else {
        func_0x00010002c7d4();
        param_1 = puVar3;
      }
    }
    func_0x0001077fa614();
    puVar4 = param_1;
  }
  return uVar6;
}



/* Entry: 1077f9628; end: 1077f9647;  */

void FUN_1077f9628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001077f9648(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 1077f9954; end: 1077f999b;  */

void FUN_1077f9954(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001077fa414();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0001077fa46c();
  func_0x0001077fa4ec();
  return;
}



/* Entry: 1077f9bc0; end: 1077f9c07;  */

void FUN_1077f9bc0(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001077fa414();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0001077fa46c();
  func_0x0001077fa4ec();
  return;
}



/* Entry: 1077f9e9c; end: 1077f9f4b;  */

undefined8 * FUN_1077f9e9c(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar4 = auStack_80;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)*param_2;
  param_1[1] = ((undefined8 *)*param_2)[1];
  *param_1 = uVar6;
  lVar1 = param_3[1];
  uVar6 = *(undefined8 *)*param_3;
  uVar2 = ((undefined8 *)*param_3)[1];
  uVar3 = *(undefined4 *)param_3[2];
  func_0x000104c2fe00(auStack_80,param_3[3]);
  func_0x0001077f875c(param_1 + 2,uVar6,uVar2,lVar1,uVar3,auStack_80);
  func_0x000104c2f714();
  func_0x0001077fa658(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c2f714();
    func_0x0001077fa4b8();
    puVar5 = puVar4;
    func_0x0001077f95c4();
    if (puVar4 + 8 != puVar5) {
      func_0x0001077f9f8c(puVar4,puVar5);
    }
    return (undefined8 *)(ulong)(puVar4 + 8 != puVar5);
  }
  return param_1;
}



/* Entry: 1077fa160; end: 1077fa1d7;  */

long * FUN_1077fa160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  
  func_0x0001077fa5cc();
  plVar2 = *(long **)(unaff_x20 + 8);
  plVar3 = (long *)(unaff_x20 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000104c2fc44(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000104c2fc44(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_1077fa1c8;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_1077fa1c8;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_1077fa1c8:
  *unaff_x19 = plVar4;
  return plVar3;
}



/* Entry: 1077fa304; end: 1077fa377;  */

long FUN_1077fa304(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077fa458();
  func_0x0001077fa33c();
  if ((unaff_x19 == param_1) || (func_0x0001077fa54c(), (int)param_1 != 0)) {
    unaff_x21 = unaff_x19;
  }
  return unaff_x21;
}



/* Entry: 1077fa8c4; end: 1077fa907;  */

long * FUN_1077fa8c4(long *param_1)

{
  if (param_1[1] != 0) {
    func_0x0001096fba38();
  }
  if (*param_1 != 0) {
    func_0x000109754ce4();
  }
  func_0x0001003adc18(param_1 + 2);
  return param_1;
}



/* Entry: 1077fb24c; end: 1077fb2f3;  */

void FUN_1077fb24c(double param_1,double param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  
  pfVar3 = (float *)param_3[1];
  if (pfVar3 < (float *)param_3[2]) {
    *pfVar3 = (float)param_1;
    pfVar3[1] = (float)param_2;
    pfVar3 = pfVar3 + 2;
  }
  else {
    plVar2 = param_3;
    func_0x000107809094((long)pfVar3 - *param_3);
    lVar1 = *param_3;
    pfVar3 = (float *)param_3[1];
    if (plVar2 != (long *)0x0) {
      func_0x0001077fe1fc();
    }
    func_0x000107809350((long)plVar2 + ((long)pfVar3 - lVar1),(float)param_1,(float)param_2);
    func_0x000107809d60();
  }
  param_3[1] = (long)pfVar3;
  return;
}



/* Entry: 1077fb664; end: 1077fbb3b;  */

undefined8 *
FUN_1077fb664(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,long param_5,
             long *param_6)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  int extraout_w10;
  ulong uVar7;
  ulong extraout_x11;
  ulong uVar8;
  ulong extraout_x12;
  long lVar9;
  long extraout_x13;
  long extraout_x14;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint6 uVar13;
  undefined8 uVar14;
  undefined1 auStack_168 [24];
  long lStack_150;
  undefined1 uStack_148;
  undefined4 uStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  
  if ((param_5 != 0) && (*(long *)(param_5 + 0x10) != 0)) {
    do {
      func_0x0001078091f4();
    } while (extraout_w10 != 0);
  }
  uVar3 = 0;
  puVar5 = param_3;
  lStack_e0 = param_5;
  func_0x00010726364c();
  param_1 = param_1 + (uVar3 & 7) * 200;
  uStack_148 = 1;
  lVar12 = param_1;
  lStack_150 = param_1;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x000107809e10();
  if (lVar12 == 0) {
    func_0x000107809e24();
    uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
    lVar12 = param_1;
    lStack_c0 = param_1;
    __ZNSt3__119__shared_mutex_base4lockEv();
    func_0x000107809e10();
    if (lVar12 == 0) {
      uVar3 = *(ulong *)(lStack_e0 + 0x20);
      func_0x000108137220(&plStack_d8);
      if (puStack_c8 == (undefined8 *)0x0) {
        func_0x0001078099e4();
        func_0x0001072bb3b4();
        puStack_b0 = param_3;
        puStack_a8 = puVar5;
        func_0x0001003a91d4(&UNK_10f42ad80);
        func_0x0001003a9204(&lStack_150);
        func_0x0001077fe9c8(uVar3,&lStack_150);
        func_0x000107809ff8();
        ___cxa_throw(uVar3);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1077fba80);
        (*pcVar2)();
      }
      Hint_Prefetch(*(undefined8 *)(param_1 + 0xa8),0,2,0);
      func_0x000107809dec(*(undefined8 *)(param_1 + 0xa8));
      lVar12 = 0;
      uVar7 = *(ulong *)(param_1 + 0xa8);
      uVar8 = *(ulong *)(param_1 + 0xb8);
      uVar6 = uVar7 >> 0xc ^ uVar3 >> 7;
      bVar1 = (byte)uVar3;
      uVar13 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1)))))
               & 0x7f7f7f7f7f7f;
      lVar9 = 0;
      while( true ) {
        uVar14 = *(undefined8 *)(uVar7 + (uVar6 & uVar8));
        for (uVar7 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == (bVar1 & 0x7f)),
                              CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == (bVar1 & 0x7f)),
                                       CONCAT15(-((char)((ulong)uVar14 >> 0x28) ==
                                                 (char)(uVar13 >> 0x28)),
                                                CONCAT14(-((char)((ulong)uVar14 >> 0x20) ==
                                                          (char)(uVar13 >> 0x20)),
                                                         CONCAT13(-((char)((ulong)uVar14 >> 0x18) ==
                                                                   (char)(uVar13 >> 0x18)),
                                                                  CONCAT12(-((char)((ulong)uVar14 >>
                                                                                   0x10) ==
                                                                            (char)(uVar13 >> 0x10)),
                                                                           CONCAT11(-((char)((ulong)
                                                  uVar14 >> 8) == (char)(uVar13 >> 8)),
                                                  -((char)uVar14 == (char)uVar13)))))))) &
                     0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
          uVar11 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = (uVar6 & uVar8) + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar8;
          uVar4 = *(long *)(param_1 + 0xb0) + uVar11 * lVar9;
          func_0x000107809e1c();
          if ((uVar4 & 1) != 0) goto LAB_1077fb860;
          lVar9 = 0;
        }
        func_0x000107809b8c();
        if ((extraout_x8 & 1) != 0) break;
        lVar12 = lVar12 + 8;
        uVar6 = lVar12 + extraout_x14;
        uVar7 = extraout_x11;
        uVar8 = extraout_x12;
        lVar9 = extraout_x13;
      }
      uVar11 = param_1 + 0xa8;
      func_0x000107807eb4(uVar11,uVar3);
      lVar12 = *(long *)(param_1 + 0xb0) + uVar11 * 0x50;
      func_0x000104c2fe00(lVar12,param_3);
      *(undefined8 *)(lVar12 + 0x38) = 0;
      *(undefined8 *)(lVar12 + 0x40) = 0;
      *(undefined8 *)(lVar12 + 0x48) = 0;
LAB_1077fb860:
      func_0x000105c3d468(*(long *)(param_1 + 0xb0) + uVar11 * 0x50 + 0x38,&plStack_d8);
    }
    else {
      plVar10 = (long *)puVar5[7];
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      puStack_c8 = (undefined8 *)puVar5[9];
      uStack_d0 = puVar5[8];
      plStack_d8 = plVar10;
    }
    func_0x000104c305a0(&lStack_c0);
  }
  else {
    plVar10 = (long *)puVar5[7];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    puStack_c8 = (undefined8 *)puVar5[9];
    uStack_d0 = puVar5[8];
    plStack_d8 = plVar10;
    func_0x000107809e24();
  }
  func_0x000107807a88(&lStack_e0);
  func_0x0001077fa678(0x3ff0000000000000,&lStack_150,&plStack_d8,*param_2,0x18);
  plVar10 = param_2 + 1;
  func_0x000107807b24(plVar10,&lStack_c0,param_3);
  if (*plVar10 == 0) {
    puVar5 = (undefined8 *)0x80;
    __Znwm();
    puStack_a8 = param_2 + 2;
    uStack_a0 = 0;
    puStack_b0 = puVar5;
    func_0x000104c2fe00(puVar5 + 4,param_3);
    func_0x0001077fa858(puVar5 + 0xb,&lStack_150);
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = lStack_c0;
    *plVar10 = (long)puVar5;
    if (*(long *)param_2[1] != 0) {
      param_2[1] = *(long *)param_2[1];
    }
    func_0x00010002c5b0(param_2[2],puVar5);
    param_2[3] = param_2[3] + 1;
    puStack_b0 = (undefined8 *)0x0;
    func_0x000107807b9c(&puStack_b0);
  }
  FUN_1077fa8c4(&lStack_150);
  param_2 = param_2 + 4;
  func_0x0001077fbb3c(param_2,param_4);
  func_0x0001077fe5d0(param_2 + 2,param_3);
  lStack_150 = CONCAT44(lStack_150._4_4_,0x130);
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  ppuStack_130 = &PTR_DAT_110996720;
  uStack_128 = 0;
  uStack_110 = 0x130;
  uStack_108 = 0;
  uStack_104 = 1;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  func_0x00010724ef84(auStack_168,param_3);
  plVar10 = &lStack_150;
  func_0x00010726e300(plVar10,&UNK_10f42ad41,auStack_168);
  puStack_b0 = puStack_c8;
  puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,3);
  lStack_c0 = *param_6;
  uStack_b8 = 3;
  func_0x00010743fa44(param_6,plVar10,&puStack_b0,&lStack_c0,7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
  func_0x000107262330(&lStack_150);
  puVar5 = puStack_c8;
  func_0x000107809dc0();
  return puVar5;
}



/* Entry: 1077fc198; end: 1077fc1d7;  */

void FUN_1077fc198(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107808f04();
  func_0x0001072ab574(param_1 + 0x7c8);
  *(int *)(unaff_x20 + 0x810) = *(int *)(unaff_x20 + 0x810) + 1;
  *(long *)(unaff_x20 + 0x808) = *(long *)(unaff_x20 + 0x808) + unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x20 + 0x7c8);
  return;
}



/* Entry: 1077fc7a4; end: 1077fd49b;  */

void FUN_1077fc7a4(long *param_1,long *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  char in_NG;
  char cVar6;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  long *plVar8;
  undefined8 *****pppppuVar9;
  ulong uVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 *****extraout_x8_02;
  undefined8 ****extraout_x8_03;
  undefined8 ***pppuVar15;
  undefined8 extraout_x8_04;
  long lVar16;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 uVar17;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *****extraout_x10;
  undefined8 ****extraout_x10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long lVar18;
  undefined8 *****pppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 *****unaff_x26;
  int iVar21;
  undefined8 *****unaff_x27;
  undefined8 ****ppppuStack_3a8;
  long *plStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 ****ppppuStack_338;
  undefined8 ****ppppuStack_330;
  undefined **ppuStack_328;
  undefined8 ***apppuStack_320 [3];
  undefined8 ****ppppuStack_308;
  undefined8 ****ppppuStack_300;
  undefined **ppuStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2d8;
  undefined8 uStack_2d0;
  undefined8 ***pppuStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2a8;
  long lStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined1 auStack_278 [8];
  undefined **appuStack_270 [3];
  undefined ***pppuStack_258;
  undefined8 ****ppppuStack_250;
  undefined8 ****ppppuStack_248;
  undefined **ppuStack_240;
  undefined8 ****ppppuStack_238;
  ulong uStack_230;
  undefined8 ****ppppuStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ****ppppuStack_218;
  undefined1 uStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1d0;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 ***pppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined4 uStack_128;
  long lStack_120;
  undefined1 auStack_118 [144];
  long lStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  func_0x000107808a58();
  uStack_78 = extraout_x8;
  if ((param_4 == 0) ||
     (plVar8 = param_2, (**(code **)(*param_2 + 0x10))(), ((ulong)plVar8 & 1) == 0)) {
    func_0x00010780a114(&ppppuStack_250);
    func_0x0001078a95c8();
    uStack_1f0 = 0;
    plStack_1e8 = (long *)((ulong)plStack_1e8 & 0xffffffffffffff00);
    uStack_1d0 = 0;
    ppppuStack_238 = (undefined8 *****)0x0;
    uStack_230 = 0;
    ppppuStack_228 = (undefined8 ****)((ulong)ppppuStack_228 & 0xffffffffffffff00);
    func_0x000107809998();
    func_0x000107809238();
    goto LAB_1077fd238;
  }
  pppuStack_258 = appuStack_270;
  appuStack_270[0] = &PTR_DAT_1109dfb98;
  func_0x00010780a114(apppuStack_320);
  func_0x00010782871c();
  func_0x000107808180(appuStack_270);
  func_0x000107809fc4();
  uVar17 = extraout_x11;
  pppppuVar9 = extraout_x10;
  if (in_NG == in_OV) {
    uVar17 = extraout_x8_00;
    pppppuVar9 = (undefined8 *****)apppuStack_320;
  }
  func_0x0001078a95c8(&ppppuStack_338,pppppuVar9,uVar17);
  func_0x0001077fbc7c();
  if (*(char *)((long)param_2 + 0x6aa) == '\x01') {
    ppppuStack_3a8 = &ppppuStack_338;
    func_0x000107824434(ppppuStack_3a8,param_5);
    FUN_107824480(&ppppuStack_250,param_2 + 0xd8,&ppppuStack_338,ppppuStack_3a8);
    in_ZR = (char)ppppuStack_238 == '\x01';
    if ((bool)in_ZR) {
      param_1[1] = (long)ppppuStack_248;
      *param_1 = (long)ppppuStack_250;
      param_1[2] = (long)ppuStack_240;
      ppppuStack_248 = (undefined8 *****)0x0;
      ppuStack_240 = (undefined **)0x0;
      ppppuStack_250 = (undefined8 *****)0x0;
      func_0x0001077ff668(&ppppuStack_250);
      goto LAB_1077fd228;
    }
    pppppuVar19 = &ppppuStack_250;
    func_0x0001077ff668();
  }
  else {
    ppppuStack_3a8 = (undefined8 *****)0x0;
    pppppuVar19 = pppppuVar9;
  }
  if ((*(byte *)((long)param_2 + 0x6a9) & 1) == 0) {
    func_0x000107809db4();
    ppppuVar20 = pppppuVar19[1];
    pppuVar15 = ppppuVar20[0xb];
    do {
      ppppuVar1 = (undefined8 ****)0x0;
      if (pppuVar15 != (undefined8 ***)0x0) {
        ppppuVar1 = (undefined8 ****)(pppuVar15 + -10);
      }
      in_ZR = ppppuVar1 == ppppuVar20;
      if ((bool)in_ZR) break;
      func_0x000104c2fe00(&pppuStack_160,ppppuVar1);
      pppppuVar19 = pppppuVar9 + 1;
      func_0x000107807b24(pppppuVar19,&ppppuStack_250,&pppuStack_160);
      if (*pppppuVar19 == (undefined8 ****)0x0) {
        func_0x000104c03f28("map::at:  key not found");
LAB_1077fd474:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1077fd478);
        (*pcVar5)();
      }
      func_0x000107812bb0(&plStack_2a8,(*pppppuVar19)[0xc],&ppppuStack_338);
      ppuVar12 = ppuStack_328;
      if (CONCAT71(uStack_297,uStack_298) != 0) goto LAB_1077fcd08;
      func_0x0001078093e0();
      func_0x0001078093e8();
      pppuVar15 = ppppuVar1[0xb];
    } while( true );
  }
  lStack_340 = param_2[0xc9];
  if ((lStack_340 != 0) && (*(long *)(lStack_340 + 0x10) != 0)) {
    do {
      func_0x000107809e9c();
      lStack_340 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  lStack_280 = 0;
  uVar10 = param_5;
  func_0x000104c2d614();
  if ((uVar10 & 1) == 0) {
    func_0x00010724ef84(&ppppuStack_250,param_5);
    pppppuVar9 = (undefined8 *****)ppppuStack_250;
    if (-1 < (long)ppuStack_240) {
      pppppuVar9 = &ppppuStack_250;
    }
    func_0x0001003a83dc(&lStack_358,pppppuVar9);
    if ((lStack_358 != 0) && (*(int *)(lStack_358 + 0xc) != 0)) {
      pppuStack_160 = (undefined8 ***)0x10f2728fd;
      lStack_158 = 1;
      uVar10 = 0;
      func_0x00010b9a5f80(&lStack_358);
      if ((uVar10 & 1) == 0) {
        func_0x00010b9a67cc(&pppuStack_160,&lStack_358,0x20,1);
        if (8 < (ulong)(lStack_158 - (long)pppuStack_160)) {
          ppppuStack_308 = (undefined8 *****)0x0;
          if (*(long *)((long)pppuStack_160 + ((lStack_158 - (long)pppuStack_160) - 8U)) != 0) {
            do {
              func_0x000107809b2c();
              ppppuStack_308 = extraout_x8_02;
            } while (extraout_w11_00 != 0);
          }
          plStack_2a8 = (long *)&DAT_10f42ad1d;
          lStack_2a0 = 5;
          uVar10 = 0;
          func_0x000107809d6c();
          if ((uVar10 & 1) == 0) {
            pppuStack_2c0 = (undefined8 ***)&DAT_10f42ad23;
            uStack_2b8 = 7;
            pppppuVar9 = &ppppuStack_308;
            func_0x00010b9a5ea8(pppppuVar9,&pppuStack_2c0);
            if (((ulong)pppppuVar9 & 1) != 0) goto LAB_1077fca40;
            pppuStack_2d8 = (undefined8 ***)&DAT_10f42ad2b;
            uStack_2d0 = 6;
            pppppuVar9 = &ppppuStack_308;
            func_0x00010b9a5ea8(pppppuVar9,&pppuStack_2d8);
            if (((ulong)pppppuVar9 & 1) != 0) goto LAB_1077fca40;
            puStack_2f0 = &DAT_10f42ad32;
            uStack_2e8 = 4;
            pppppuVar9 = &ppppuStack_308;
            func_0x00010b9a5ea8(pppppuVar9,&puStack_2f0);
            if (((ulong)pppppuVar9 & 1) != 0) goto LAB_1077fca40;
          }
          else {
LAB_1077fca40:
            func_0x0001077fb610(&pppuStack_160);
            plStack_2a8 = (long *)&DAT_10f42ad32;
            lStack_2a0 = 4;
            iVar21 = (int)&ppppuStack_308;
            func_0x000107809d6c();
            if (iVar21 != 0) {
              ppppuVar20 = (undefined8 ****)0x0;
              if (*(long *)(lStack_158 + -8) != 0) {
                do {
                  func_0x000107809b2c();
                  ppppuVar20 = extraout_x8_03;
                } while (extraout_w11_01 != 0);
              }
              plStack_2a8 = (long *)&UNK_10f42ad37;
              lStack_2a0 = 4;
              uVar10 = 0;
              pppuStack_2d8 = ppppuVar20;
              func_0x000107809d6c();
              if ((uVar10 & 1) == 0) {
                pppuStack_2c0 = (undefined8 ***)&UNK_10f42ad3c;
                uStack_2b8 = 4;
                ppppuVar20 = &pppuStack_2d8;
                func_0x00010b9a5ea8(ppppuVar20,&pppuStack_2c0);
                if (((ulong)ppppuVar20 & 1) != 0) goto LAB_1077fcab4;
              }
              else {
LAB_1077fcab4:
                func_0x0001077fb610(&pppuStack_160);
                func_0x000107809d54(&plStack_2a8);
                func_0x00010090c1cc(&ppppuStack_308,&plStack_2a8);
                func_0x0001003a8c94(&plStack_2a8);
              }
              func_0x000107809930();
            }
            func_0x00010b9a6554(&puStack_2f0,&pppuStack_160," ",1);
            plStack_2a8 = (long *)0x10f2728fd;
            lStack_2a0 = 1;
            func_0x00010b9a63dc(&pppuStack_2d8,&puStack_2f0,&plStack_2a8);
            func_0x000107809d54(&pppuStack_2c0);
            func_0x00010090c1cc(&lStack_358,&pppuStack_2c0);
            func_0x000107809d4c();
            func_0x000107809930();
            func_0x0001003a8c94(&puStack_2f0);
          }
          func_0x0001003a8c94(&ppppuStack_308);
          plStack_368 = param_1;
        }
        func_0x000104bdd014(&pppuStack_160);
      }
    }
    func_0x000107809da0();
    func_0x00010812c0a0(&ppppuStack_250,0x41c00000,0x3ff0000000000000,lStack_340,&lStack_358,0);
    func_0x000107809d40();
    func_0x000107807ab8(&ppppuStack_250);
    func_0x0001003a8c94(&lStack_358);
    if (lStack_280 != 1) goto LAB_1077fcb84;
  }
  else {
LAB_1077fcb84:
    lVar18 = lStack_340;
    func_0x0001003a83dc(&pppuStack_160,"system");
    func_0x00010812c0a0(&ppppuStack_250,0x41c00000,0x3ff0000000000000,lVar18,&pppuStack_160,0);
    func_0x000107809d40();
    func_0x000107807ab8(&ppppuStack_250);
    func_0x0001003a8c94(&pppuStack_160);
  }
  func_0x0001074755f4(&lStack_340);
  in_ZR = lStack_280 == 1;
  if (!(bool)in_ZR) {
    func_0x00010780990c();
    goto LAB_1077fccfc;
  }
  lVar18 = param_2[0xc9];
  cVar7 = '\0';
  cVar6 = '\0';
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
    do {
      func_0x0001078091f4();
    } while (extraout_w10 != 0);
  }
  pppuStack_160 = (undefined8 ****)0x2;
  lStack_158 = 0x461c4000461c4000;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 1;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  lStack_360 = lVar18;
  if (lVar18 == 0) {
    _bzero(&lStack_120,0x98);
    lStack_88 = 0;
  }
  else {
    if (*(long *)(lVar18 + 0x10) != 0) {
      do {
        func_0x0001078091f4();
      } while (extraout_w10_00 != 0);
    }
    lStack_120 = lVar18;
    _bzero(auStack_118,0x90);
    lStack_88 = *(long *)(lVar18 + 0x198);
    if (lStack_88 != 0) {
      plVar8 = (long *)(lStack_88 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  uStack_80 = 0;
  func_0x000107809fc4();
  uStack_2b8 = extraout_x11_00;
  pppuStack_2c0 = extraout_x10_00;
  if (cVar6 == cVar7) {
    uStack_2b8 = extraout_x8_04;
    pppuStack_2c0 = apppuStack_320;
  }
  pppuStack_2d8 = (undefined8 ****)0x0;
  ppppuStack_250 = (undefined8 ****)((ulong)ppppuStack_250 & 0xffffffffffffff00);
  pppuStack_220 = (undefined8 ***)((ulong)pppuStack_220 & 0xffffffffffffff00);
  plStack_2a8 = (long *)((ulong)plStack_2a8 & 0xffffffffffffff00);
  uStack_298 = 0;
  func_0x000108130c50(0,&pppuStack_160,&pppuStack_2c0,auStack_278,0x3f80000000000000,0,
                      &pppuStack_2d8,0,&ppppuStack_250,&plStack_2a8,0,0,0);
  func_0x0001003adc18(&pppuStack_2d8);
  func_0x00010813121c(&ppppuStack_250,&pppuStack_160);
  lVar4 = lStack_170;
  lVar18 = lStack_178;
  lStack_358 = lStack_178;
  uStack_348 = uStack_168;
  lStack_350 = lStack_170;
  uStack_168 = 0;
  lStack_170 = 0;
  lStack_178 = 0;
  func_0x0001077fea78(&ppppuStack_250);
  func_0x0001081300e0(&pppuStack_160);
  plVar8 = &lStack_360;
  func_0x0001074755f4();
  func_0x0001077fbc7c();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; lVar18 != lVar4; lVar18 = lVar18 + 0x38) {
    pppppuVar19 = (undefined8 *****)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18));
    func_0x0001077fc1d8(&ppppuStack_308,&ppppuStack_338,*(long *)(lVar18 + 0x18),pppppuVar19);
    lVar16 = *(long *)(lVar18 + 0x30);
    pppppuVar9 = unaff_x27;
    if (lVar16 == 0) {
LAB_1077fd174:
      func_0x000107407a9c(&ppppuStack_250,&ppppuStack_308);
      uStack_230 = *(ulong *)(lVar18 + 0x20);
      ppppuStack_238 = *(undefined8 *****)(lVar18 + 0x18);
      ppppuStack_228 = (undefined8 ****)((ulong)ppppuStack_228 & 0xffffffffffffff00);
      uStack_1f0 = 0;
      plStack_1e8 = (long *)((ulong)plStack_1e8 & 0xffffffffffffff00);
      uStack_1d0 = 0;
      func_0x000107809d94();
      func_0x000107809238();
    }
    else {
      pppppuVar13 = (undefined8 *****)ppppuStack_330;
      if (-1 < (long)ppuStack_328) {
        pppppuVar13 = (undefined8 *****)((ulong)ppuStack_328 >> 0x38);
      }
      if (pppppuVar19 != pppppuVar13) {
        plVar11 = param_2;
        (**(code **)(*param_2 + 0x18))(param_2,&ppppuStack_308);
        if ((int)plVar11 == 0) goto LAB_1077fd174;
        lVar16 = *(long *)(lVar18 + 0x30);
      }
      if (*(long *)(lVar16 + 0x10) != 0) {
        do {
          func_0x000107809e9c();
          lVar16 = extraout_x8_05;
        } while (extraout_w11_02 != 0);
      }
      plStack_2a8 = *(long **)(lVar16 + 0x20);
      if (plStack_2a8 != (long *)0x0) {
        plVar11 = plStack_2a8 + 1;
        do {
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppppuVar20 = (undefined8 ****)plStack_2a8[0xd];
      lStack_288 = lVar16;
      if (ppppuVar20 != (undefined8 ****)0x0) {
        do {
          func_0x000107809b9c();
        } while (extraout_w10_01 != 0);
      }
      pppuStack_2c0 = ppppuVar20;
      func_0x00010812dc90(&pppuStack_2d8,*(undefined *)((long)plStack_2a8 + 0x71));
      if (ppppuVar20 != (undefined8 ****)0x0) {
        do {
          func_0x000107809b9c();
        } while (extraout_w10_02 != 0);
      }
      uVar17 = 0;
      ppppuStack_250 = ppppuVar20;
      if ((undefined8 ****)pppuStack_2d8 != (undefined8 ****)0x0) {
        do {
          func_0x000107809b2c();
          uVar17 = extraout_x8_06;
        } while (extraout_w11_03 != 0);
      }
      ppppuStack_248 = (undefined8 ****)uVar17;
      func_0x0001077fb660(&puStack_2f0,&ppppuStack_250,2,"-",1);
      lVar16 = 8;
      do {
        func_0x0001003a8c94((long)&ppppuStack_250 + lVar16);
        lVar16 = lVar16 + -8;
      } while (lVar16 != -8);
      func_0x00010b9a5e5c(&ppppuStack_250,&puStack_2f0);
      func_0x0001072625b4(&pppuStack_160,&ppppuStack_250);
      func_0x000107809da0();
      func_0x0001003a8c94(&puStack_2f0);
      func_0x000107809930();
      func_0x000107809d4c();
      func_0x000107807adc(&plStack_2a8);
      func_0x000107807a88(&lStack_288);
      plVar11 = plVar8 + 1;
      func_0x0001077fc110(plVar11,&pppuStack_160);
      if ((int)plVar11 == 0) {
        lVar16 = *(long *)(lVar18 + 0x30);
        if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
          do {
            func_0x0001078091f4();
          } while (extraout_w10_03 != 0);
        }
        plVar11 = param_2 + 1;
        lStack_290 = lVar16;
        FUN_1077fb664(plVar11,plVar8,&pppuStack_160,param_5);
        func_0x000107807a88(&lStack_290);
        FUN_1077fc198(param_2,plVar11);
      }
      else if ((*(byte *)((long)param_2 + 0x6a9) & 1) == 0) {
        func_0x000107809db4();
        func_0x0001077fe5d0(plVar11 + 2,&pppuStack_160);
      }
      plVar11 = plVar8 + 1;
      pppppuVar9 = (undefined8 *****)&pppuStack_160;
      func_0x000107807e3c();
      if (plVar8 + 2 == plVar11) {
        lStack_2a0 = 0;
        uStack_297 = 0;
        uStack_298 = 0;
        plStack_2a8 = &lStack_2a0;
LAB_1077fd0d4:
        func_0x0001078a9674(&pppuStack_2d8,&ppppuStack_308);
        func_0x0001078a9674(&puStack_2f0,&ppppuStack_338);
        unaff_x26 = (undefined8 *****)&pppuStack_2d8;
        func_0x0001005d466c();
        ppuVar12 = &puStack_2f0;
        pppppuVar19 = pppppuVar9;
        func_0x0001005d466c();
        uVar10 = param_5;
        pppppuVar13 = pppppuVar19;
        func_0x0001072bb3b4();
        ppppuVar20 = &pppuStack_160;
        pppppuVar14 = pppppuVar13;
        func_0x0001072bb3b4();
        ppppuStack_250 = unaff_x26;
        ppppuStack_248 = pppppuVar9;
        ppuStack_240 = ppuVar12;
        ppppuStack_238 = pppppuVar19;
        uStack_230 = uVar10;
        ppppuStack_228 = pppppuVar13;
        pppuStack_220 = ppppuVar20;
        ppppuStack_218 = pppppuVar14;
        func_0x0001003a91d4(&UNK_10f42ae0a);
        func_0x0001003a9204(&pppuStack_2c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_2f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_2d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_2c0);
        func_0x0001078093e0();
        func_0x0001078093e8();
        goto LAB_1077fd174;
      }
      pppppuVar9 = &ppppuStack_308;
      func_0x000107812bb0(&plStack_2a8,plVar11[0xc]);
      if (CONCAT71(uStack_297,uStack_298) == 0) goto LAB_1077fd0d4;
      ppppuStack_248 = ppppuStack_300;
      ppppuStack_250 = ppppuStack_308;
      ppuStack_240 = ppuStack_2f8;
      ppppuStack_308 = (undefined8 *****)0x0;
      ppppuStack_300 = (undefined8 *****)0x0;
      ppuStack_2f8 = (undefined **)0x0;
      uStack_230 = *(ulong *)(lVar18 + 0x20);
      ppppuStack_238 = *(undefined8 *****)(lVar18 + 0x18);
      func_0x0001072627ac(&ppppuStack_228,&pppuStack_160);
      plStack_1e8 = plStack_2a8;
      lStack_1e0 = lStack_2a0;
      lStack_1d8 = CONCAT71(uStack_297,uStack_298);
      plVar11 = &lStack_1e0;
      if (lStack_1d8 != 0) {
        *(long **)(lStack_2a0 + 0x10) = &lStack_1e0;
        lStack_2a0 = 0;
        uStack_297 = 0;
        uStack_298 = 0;
        plStack_2a8 = &lStack_2a0;
        plVar11 = plStack_1e8;
      }
      plStack_1e8 = plVar11;
      uStack_1d0 = 1;
      func_0x000107809d94();
      func_0x000107809238();
      func_0x0001078093e0();
      func_0x0001078093e8();
      pppppuVar9 = unaff_x27;
    }
    func_0x00010089ccb4(&ppppuStack_308);
    unaff_x27 = pppppuVar9;
  }
  in_ZR = *(char *)((long)param_2 + 0x6aa) == '\x01';
  if ((bool)in_ZR) {
    func_0x000107824724(param_2 + 0xd8,ppppuStack_3a8,param_1);
  }
  func_0x0001077ff688(&lStack_358);
  func_0x00010780990c();
  plStack_368 = param_1;
LAB_1077fd228:
  do {
    func_0x00010089ccb4(&ppppuStack_338);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_320);
LAB_1077fd238:
    func_0x0001078087c4(uStack_78);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107809070();
    while( true ) {
      func_0x0001078093e8();
      func_0x00010089ccb4(&ppppuStack_308);
      func_0x000107405848(plStack_368);
      func_0x0001077ff688(&lStack_358);
      func_0x00010780990c();
      iVar21 = (int)unaff_x27;
      in_ZR = iVar21 == 3;
      param_1 = plStack_368;
      if ((bool)in_ZR) break;
      if (iVar21 == 2) {
        func_0x000107809a40();
        ___cxa_rethrow();
        goto LAB_1077fd474;
      }
      in_ZR = iVar21 == 1;
      if ((bool)in_ZR) {
        func_0x000107809a40();
        ___cxa_end_catch();
        goto LAB_1077fccfc;
      }
      func_0x00010089ccb4(&ppppuStack_338);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_320);
      __Unwind_Resume(unaff_x26);
      func_0x000107809070();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_2d8);
      func_0x0001078093e0();
    }
    func_0x000107809a40();
    ___cxa_end_catch();
LAB_1077fccfc:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  } while( true );
LAB_1077fcd08:
  ppppuStack_248 = ppppuStack_330;
  ppppuStack_250 = ppppuStack_338;
  ppppuStack_338 = (undefined8 *****)0x0;
  ppppuStack_330 = (undefined8 *****)0x0;
  ppuStack_328 = (undefined **)0x0;
  ppppuStack_238 = (undefined8 *****)0x0;
  uStack_230 = 0;
  ppuStack_240 = ppuVar12;
  func_0x00010729d1b0(&ppppuStack_228,&pppuStack_160);
  func_0x00010002c78c(&plStack_1e8,&plStack_2a8);
  uStack_1d0 = 1;
  func_0x000107809998();
  func_0x000107809238();
  func_0x0001078093e0();
  func_0x0001078093e8();
  goto LAB_1077fd228;
}



/* Entry: 1077fe160; end: 1077fe163;  */

undefined8 * FUN_1077fe160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109df958;
  func_0x000107808050(param_1 + 0x103);
  __ZNSt3__15mutexD1Ev(param_1 + 0xf9);
  func_0x0001077ff34c(param_1 + 0xd8);
  func_0x00010724b8b8(param_1 + 0xd6);
  func_0x000107267ed0(param_1 + 0xcc);
  func_0x0001074755f4(param_1 + 0xc9);
  func_0x0001077ff384(param_1 + 1);
  return param_1;
}



/* Entry: 1077fe47c; end: 1077fe493;  */

void FUN_1077fe47c(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077fe8f0; end: 1077fe9c7;  */

void FUN_1077fe8f0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *puVar1;
  ulong *extraout_x9;
  ulong uVar2;
  ulong extraout_x10;
  ulong uVar3;
  
  puVar1 = *(ulong **)(param_1[2] + 8);
  param_1[2] = (ulong)puVar1;
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = *puVar1 & 1 | (ulong)param_1;
  }
  func_0x00010780a230();
  if ((bool)in_ZR) {
    *extraout_x9 = extraout_x10 & 1 | extraout_x8;
    uVar2 = *param_1;
  }
  else {
    uVar2 = *param_1;
    uVar3 = uVar2 & 0xfffffffffffffffe;
    if (param_1 == *(ulong **)(uVar3 + 8)) {
      *(ulong *)(uVar3 + 8) = extraout_x8;
    }
    else {
      *(ulong *)(uVar3 + 0x10) = extraout_x8;
    }
  }
  *(ulong **)(extraout_x8 + 8) = param_1;
  *param_1 = uVar2 & 1 | extraout_x8;
  return;
}



/* Entry: 1077feb80; end: 1077feb9b;  */

void FUN_1077feb80(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


