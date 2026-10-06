/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077de7d0; end: 1077de82b;  */

void FUN_1077de7d0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x78);
  if (*(int *)(param_1 + 0x78) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x78) != 0xffffffff) {
        func_0x00010747a0e0((&PTR_DAT_1109b2c20)[*(uint *)(param_1 + 0x78)],&uStack_21,param_1,
                            param_2);
      }
      *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_DAT_1109de0a8)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 1077de914; end: 1077de91f;  */

void FUN_1077de914(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001077ef34c(*param_1,param_1[1]);
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000107780f80();
  *(undefined4 *)(unaff_x20 + 0x78) = 1;
  return;
}



/* Entry: 1077de9ec; end: 1077de9f7;  */

void FUN_1077de9ec(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001077ef34c(*param_1,param_1[1]);
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x78) = 3;
  return;
}



/* Entry: 1077dec48; end: 1077dec8f;  */

ulong FUN_1077dec48(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_3[0xe] == 1) {
    return (ulong)*param_3;
  }
  if (param_3[0xe] == 0) {
    return (ulong)*param_4;
  }
  uVar1 = *param_4;
  uVar2 = 0;
  func_0x000107339498(uVar1,param_4[1],param_3,param_1,param_2);
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 1077df000; end: 1077df07f;  */

byte FUN_1077df000(long param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    bVar1 = *(byte *)(param_1 + 0x18) >> 1 & 1;
    if (*(int *)(param_1 + 0x98) == 1) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 1;
}



/* Entry: 1077df334; end: 1077df337;  */

long FUN_1077df334(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de0d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf0);
  func_0x0001077df63c();
  return param_1;
}



/* Entry: 1077df6d0; end: 1077df763;  */

long FUN_1077df6d0(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lStack_98;
  long lStack_90;
  
  func_0x0001077ee374();
  func_0x0001077f1a60();
  func_0x0001077f0410();
  func_0x0001077dde7c();
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  while (uVar1 = lStack_98 == lStack_90, !(bool)uVar1) {
    func_0x0001077f1618();
    func_0x0001077f0c4c();
  }
  func_0x0001077ef650();
  func_0x0001077ee28c();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = param_1;
  do {
    func_0x0001077f00f4();
    func_0x0001077f0960();
  } while (!(bool)uVar1);
  func_0x0001077ef0b0();
  lVar3 = lVar2;
  func_0x0001077ef940(&PTR_DAT_1109de170);
  func_0x000104c2f714(lVar3 + 0x50);
  func_0x000104c2f714(param_1);
  return lVar2;
}



/* Entry: 1077e1240; end: 1077e1243;  */

long FUN_1077e1240(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de208);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x428);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x410);
  func_0x0001077e1c1c();
  return param_1;
}



/* Entry: 1077e1d44; end: 1077e1d53;  */

undefined8 FUN_1077e1d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1077e1f44; end: 1077e1f57;  */

void FUN_1077e1f44(void)

{
  func_0x0001077e2800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e2510; end: 1077e2587;  */

undefined8 * FUN_1077e2510(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8();
  func_0x0001077e2534();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e2718; end: 1077e2733;  */

void FUN_1077e2718(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  *param_2 = 0;
  *puVar1 = uVar2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[1] = uVar2;
  puVar1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1077e2844; end: 1077e2857;  */

void FUN_1077e2844(void)

{
  func_0x0001077e292c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e2a00; end: 1077e2b97;  */

/* WARNING: Possible PIC construction at 0x0001077e2cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077e2a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e2cd4) */
/* WARNING: Removing unreachable block (ram,0x0001077e2d00) */
/* WARNING: Removing unreachable block (ram,0x0001077e2d48) */
/* WARNING: Removing unreachable block (ram,0x0001077e2ce8) */
/* WARNING: Removing unreachable block (ram,0x0001077e2a7c) */
/* WARNING: Removing unreachable block (ram,0x0001077e2a88) */
/* WARNING: Removing unreachable block (ram,0x0001077e2abc) */
/* WARNING: Removing unreachable block (ram,0x0001077e2acc) */
/* WARNING: Removing unreachable block (ram,0x0001077e2a90) */

void FUN_1077e2a00(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int extraout_w8;
  long *extraout_x8;
  undefined1 *unaff_x19;
  undefined4 uStack_23c;
  undefined1 auStack_238 [56];
  undefined1 auStack_200 [56];
  undefined1 auStack_1c8 [104];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  char cStack_e0;
  undefined1 auStack_c8 [120];
  int iStack_50;
  
  puVar3 = auStack_120;
  puVar2 = auStack_120;
  func_0x0001077ee3c0();
  func_0x0001077f1ab4();
  if (extraout_w8 == 0) {
    puVar2 = (undefined1 *)*param_3;
    func_0x0001077ef0b8(auStack_120);
  }
  else {
    func_0x0001077e3fac(auStack_120);
    func_0x0001077ef0b8(auStack_c8,*param_3);
    func_0x000107753050();
    if (iStack_50 == 1) {
      func_0x00010727f7dc(auStack_c8);
      func_0x0001078bf5e8(auStack_100);
    }
    else {
      auStack_100[0] = 0;
      cStack_e0 = '\0';
    }
    func_0x0001077ef1b0(auStack_c8);
    func_0x0001077f17b4();
    uVar1 = cStack_e0 == '\0';
    func_0x0001077e3cf8();
    func_0x0001077e261c(auStack_100);
    func_0x0001077e263c();
    func_0x0001077ee314();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001077ef1b0(auStack_c8);
    func_0x0001077e263c();
    func_0x0001077ef068();
    unaff_x19 = puVar3;
  }
  func_0x0001077efea0();
  func_0x0001077ee3e4();
  func_0x0001077e2e28(auStack_1c8);
  func_0x0001077ee718(auStack_200);
  func_0x0001077e2e90();
  func_0x0001077ee718(auStack_238);
  func_0x0001077e2ee4();
  func_0x0001077ee718();
  func_0x0001077e2f38();
  uStack_23c = param_1;
  func_0x0001077ee718();
  func_0x0001077e2f58();
  func_0x0001077ee718();
  func_0x0001077e2f78();
  func_0x0001077ee718();
  func_0x0001077e2fac();
  func_0x0001077ee718();
  func_0x0001077e2fcc();
  func_0x0001077ee718();
  func_0x0001077e2fec();
  func_0x0001077ee718();
  func_0x0001077e300c();
  func_0x0001077ee718();
  func_0x0001077e3030();
  func_0x0001077ee718();
  func_0x0001077e3054();
  func_0x0001077ee718();
  func_0x0001077e3074();
  func_0x0001077ee718();
  func_0x0001077e3094();
  func_0x0001077ee718();
  func_0x0001077e30c8();
  puVar3 = puVar2 + 0x450;
  func_0x0001077f0f94(unaff_x19,puVar3,puVar2 + 0x468,auStack_1c8,auStack_200,auStack_238,
                      &uStack_23c);
  func_0x0001077f06b8();
  func_0x0001077e30e8();
  *extraout_x8 = (long)puVar3;
  return;
}



/* Entry: 1077e3150; end: 1077e31b7;  */

void FUN_1077e3150(long param_1)

{
  func_0x0001077e33b8(param_1 + 8,param_1 + 0x68,param_1 + 0xa0,param_1 + 0xd8,param_1 + 0xdc,
                      param_1 + 0xe0,param_1 + 0xe8,param_1 + 0xec,param_1 + 0xf0,param_1 + 0xf4,
                      param_1 + 0xf5,param_1 + 0xf8,param_1 + 0xfc,param_1 + 0x100,param_1 + 0x110);
  return;
}



/* Entry: 1077e3548; end: 1077e354f;  */

long FUN_1077e3548(long param_1)

{
  undefined1 in_ZR;
  long unaff_x21;
  undefined1 auStack_c0 [128];
  int iStack_40;
  
  param_1 = param_1 + 8;
  func_0x0001077ee374();
  func_0x0001077f0170();
  func_0x0001077ef8cc();
  func_0x0001077f0360();
  func_0x0001077f02e0();
  if (iStack_40 == 0) {
    func_0x0001077f13c8();
    func_0x000104c2d614();
    if ((int)param_1 != 0) {
      func_0x0001077efcb8();
      goto code_r0x0001077e35cc;
    }
  }
  func_0x0001077f0354(auStack_c0);
  func_0x0001077ef810();
  func_0x0001077eff90();
code_r0x0001077e35cc:
  func_0x0001077eef78();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077eef78();
  func_0x0001077ef068();
  func_0x0001077efa58();
  for (; unaff_x21 != param_1; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e3648();
  }
  return param_1;
}



/* Entry: 1077e3694; end: 1077e36cb;  */

/* WARNING: Possible PIC construction at 0x0001077e36ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e36f0) */
/* WARNING: Removing unreachable block (ram,0x0001077e3710) */
/* WARNING: Removing unreachable block (ram,0x0001077e3720) */
/* WARNING: Removing unreachable block (ram,0x0001077ef1e4) */
/* WARNING: Removing unreachable block (ram,0x0001077e3708) */
/* WARNING: Removing unreachable block (ram,0x0001077ee6ac) */

void FUN_1077e3694(undefined1 *param_1,long param_2,long param_3)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [104];
  
  if ((*(int *)(param_2 + 0x98) != 0) && (*(int *)(param_2 + 0x98) != 1)) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001077ee254(param_3 + 8,param_2 + 8);
    func_0x0001077f0980();
    param_1 = auStack_98;
    unaff_x30 = &UNK_1077e36f0;
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727a484();
  func_0x000104c2fe00();
  param_1[0x38] = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1077e37fc; end: 1077e383b;  */

void FUN_1077e37fc(void)

{
  func_0x0001077ee210();
  func_0x0001077e381c();
  return;
}



/* Entry: 1077e3918; end: 1077e394f;  */

void FUN_1077e3918(void)

{
  func_0x0001077ee210();
  func_0x0001077e3934();
  return;
}



/* Entry: 1077e3b24; end: 1077e3b2f;  */

void FUN_1077e3b24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077eed88();
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077e3b60(param_4);
  }
  func_0x0001077f0f58();
  return;
}



/* Entry: 1077e3cc0; end: 1077e3cc7;  */

void FUN_1077e3cc0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    func_0x0001077e263c();
  }
  return;
}



/* Entry: 1077e3f20; end: 1077e3f33;  */

void FUN_1077e3f20(void)

{
  func_0x0001077e3f34();
  return;
}



/* Entry: 1077e41b8; end: 1077e41ef;  */

/* WARNING: Possible PIC construction at 0x0001077e41d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e41d4) */
/* WARNING: Removing unreachable block (ram,0x0001077ef094) */

void FUN_1077e41b8(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [8];
  
  func_0x0001077ef34c();
  if (((int)param_2[2] == 0) || (*(int *)(unaff_x20 + 0x10) == 0)) {
    FUN_10774a660();
  }
  else if ((int)param_2[2] == 2) {
    if (*(int *)(unaff_x20 + 0x10) == 2) {
      func_0x00010774a6b0();
      plVar2 = param_2;
      func_0x00010774a6b0();
      lVar4 = *(long *)(*plVar2 + 0x18);
      func_0x00010774a6b8();
      lVar4 = *(long *)(*plVar2 + 0x18) + lVar4;
      func_0x00010747b534();
      func_0x00010774a6b0();
      plVar2 = param_2;
      func_0x00010774a6b8();
      func_0x00010746bbb8();
      func_0x00010774a6b8();
      func_0x00010745f964();
      lVar3 = *param_2;
      while (plVar2 != (long *)0x0) {
        func_0x0001072628ec(auStack_68,lVar3,lVar4);
        func_0x000107262260(&stack0xffffffffffffffb0);
      }
      return;
    }
    uVar1 = *(uint *)(param_2 + 2);
    if (*(int *)(unaff_x20 + 0x10) != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        if (*(uint *)(unaff_x20 + 0x10) != 0xffffffff) {
          (*(code *)(&PTR_DAT_1109acee0)[*(uint *)(unaff_x20 + 0x10)])(&stack0xffffffffffffffbf);
        }
        *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
        return;
      }
      (*(code *)(&PTR_DAT_1109b3228)[uVar1])(&stack0xffffffffffffffc8);
    }
    return;
  }
  return;
}



/* Entry: 1077e448c; end: 1077e44bb;  */

void FUN_1077e448c(long param_1)

{
  func_0x0001077e2728();
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1077e4bc4; end: 1077e4c27;  */

void FUN_1077e4bc4(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x20;
  undefined1 auStack_180 [64];
  undefined1 auStack_110 [64];
  undefined1 auStack_98 [104];
  
  func_0x0001077ee2b8();
  func_0x0001077e3670(auStack_98);
  func_0x0001077e5054(param_1 + 8,auStack_98,param_2);
  func_0x0001077ef564();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eedc4();
  func_0x0001077ef068();
  func_0x0001077ef34c();
  func_0x0001077ee374();
  func_0x0001077e3748(auStack_110);
  func_0x0001077efae0(unaff_x20 + 0xa8);
  FUN_1077e50d4();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    func_0x0001077ef34c();
    func_0x0001077ee374();
    func_0x0001077e37f4(auStack_180);
    lVar1 = unaff_x20 + 0x120;
    func_0x0001077efae0(lVar1);
    FUN_1077e50d4();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      func_0x0001077f0070();
      func_0x0001077efda8(lVar1 + 0x198);
      return;
    }
  }
  return;
}



/* Entry: 1077e50d4; end: 1077e50ef;  */

void FUN_1077e50d4(void)

{
  func_0x0001077ef51c();
  func_0x0001077e50f0();
  return;
}



/* Entry: 1077e5220; end: 1077e5253;  */

void FUN_1077e5220(void)

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
  func_0x0001077e5270();
  return;
}



/* Entry: 1077e53bc; end: 1077e5537;  */

void FUN_1077e53bc(long param_1)

{
  undefined8 *in_x6;
  undefined4 *in_x7;
  long unaff_x19;
  undefined4 *unaff_x22;
  undefined4 *unaff_x23;
  undefined4 *in_stack_00000000;
  undefined4 *in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined4 *in_stack_00000020;
  undefined4 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 *in_stack_00000038;
  
  func_0x0001077efb6c();
  func_0x0001077e5538();
  func_0x0001077e5578(param_1 + 0xa0);
  func_0x0001077e55b0(unaff_x19 + 0x118);
  *(undefined4 *)(unaff_x19 + 400) = *unaff_x23;
  *(undefined4 *)(unaff_x19 + 0x1c0) = 1;
  *(undefined4 *)(unaff_x19 + 0x1c8) = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x1f8) = 1;
  *(undefined8 *)(unaff_x19 + 0x200) = *in_x6;
  *(undefined4 *)(unaff_x19 + 0x238) = 1;
  *(undefined4 *)(unaff_x19 + 0x240) = *in_x7;
  *(undefined4 *)(unaff_x19 + 0x270) = 1;
  *(undefined4 *)(unaff_x19 + 0x278) = *in_stack_00000000;
  *(undefined4 *)(unaff_x19 + 0x2a8) = 1;
  *(undefined4 *)(unaff_x19 + 0x2b0) = *in_stack_00000008;
  *(undefined4 *)(unaff_x19 + 0x2e0) = 1;
  *(undefined1 *)(unaff_x19 + 0x2e8) = *in_stack_00000010;
  *(undefined4 *)(unaff_x19 + 0x318) = 1;
  *(undefined1 *)(unaff_x19 + 800) = *in_stack_00000018;
  *(undefined4 *)(unaff_x19 + 0x350) = 1;
  *(undefined4 *)(unaff_x19 + 0x358) = *in_stack_00000020;
  *(undefined4 *)(unaff_x19 + 0x388) = 1;
  *(undefined4 *)(unaff_x19 + 0x390) = *in_stack_00000028;
  *(undefined4 *)(unaff_x19 + 0x3c0) = 1;
  func_0x0001077e55e8(unaff_x19 + 0x3c8,in_stack_00000030);
  *(undefined4 *)(unaff_x19 + 0x410) = *in_stack_00000038;
  *(undefined4 *)(unaff_x19 + 0x440) = 1;
  return;
}



/* Entry: 1077e570c; end: 1077e575f;  */

void FUN_1077e570c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077e5740(param_4);
  }
  func_0x0001077efa00(0x58);
  return;
}



/* Entry: 1077e58b8; end: 1077e58e7;  */

void FUN_1077e58b8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c();
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x58;
    func_0x0001077e24b8();
  }
  return;
}



/* Entry: 1077e5aa8; end: 1077e5abb;  */

void FUN_1077e5aa8(void)

{
  func_0x0001077e6240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e5f60; end: 1077e5fd7;  */

undefined8 * FUN_1077e5f60(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8();
  func_0x0001077e5f84();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e6168; end: 1077e6183;  */

void FUN_1077e6168(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  *param_2 = 0;
  *puVar1 = uVar2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[1] = uVar2;
  puVar1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1077e6284; end: 1077e6297;  */

void FUN_1077e6284(void)

{
  func_0x0001077e6358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e642c; end: 1077e65c3;  */

/* WARNING: Possible PIC construction at 0x0001077e69b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077e64a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e69b4) */
/* WARNING: Removing unreachable block (ram,0x0001077e69ec) */
/* WARNING: Removing unreachable block (ram,0x0001077e69f8) */
/* WARNING: Removing unreachable block (ram,0x0001077e6a30) */
/* WARNING: Removing unreachable block (ram,0x0001077e6a54) */
/* WARNING: Removing unreachable block (ram,0x0001077e69e0) */
/* WARNING: Removing unreachable block (ram,0x0001077ee7e4) */
/* WARNING: Removing unreachable block (ram,0x0001077e64a8) */
/* WARNING: Removing unreachable block (ram,0x0001077e64b4) */
/* WARNING: Removing unreachable block (ram,0x0001077e64e8) */
/* WARNING: Removing unreachable block (ram,0x0001077e64f8) */
/* WARNING: Removing unreachable block (ram,0x0001077e64bc) */

void FUN_1077e642c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int extraout_w8;
  long *extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_380 [16];
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 auStack_368 [27];
  undefined1 uStack_34d;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined4 uStack_338;
  undefined1 uStack_334;
  undefined3 uStack_333;
  undefined4 uStack_330;
  undefined1 uStack_32c;
  undefined4 uStack_328;
  undefined1 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined4 uStack_318;
  undefined1 uStack_314;
  undefined4 uStack_310;
  undefined1 uStack_30c;
  undefined4 uStack_308;
  undefined1 uStack_304;
  undefined4 uStack_300;
  undefined1 uStack_2fc;
  undefined4 uStack_2f8;
  undefined1 uStack_2f4;
  undefined4 uStack_2f0;
  undefined1 uStack_2ec;
  undefined4 uStack_2e8;
  undefined1 uStack_2e4;
  undefined1 uStack_2e0;
  undefined1 uStack_2df;
  undefined1 uStack_2de;
  undefined1 uStack_2dd;
  undefined1 auStack_2dc [20];
  undefined1 auStack_2c8 [20];
  undefined1 auStack_2b4 [20];
  undefined1 auStack_2a0 [22];
  undefined1 uStack_28a;
  undefined1 uStack_289;
  undefined1 uStack_288;
  undefined1 uStack_287;
  undefined1 uStack_286;
  undefined1 uStack_285;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 uStack_239;
  undefined1 auStack_238 [56];
  undefined1 auStack_200 [56];
  undefined1 auStack_1c8 [104];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  char cStack_e0;
  undefined1 auStack_c8 [120];
  int iStack_50;
  
  puVar3 = auStack_120;
  puVar2 = auStack_120;
  func_0x0001077ee3c0();
  func_0x0001077f1ab4();
  if (extraout_w8 == 0) {
    puVar2 = (undefined1 *)*param_6;
    func_0x0001077ef0b8(auStack_120);
  }
  else {
    func_0x0001077e97a4(auStack_120);
    func_0x0001077ef0b8(auStack_c8,*param_6);
    func_0x000107753050();
    if (iStack_50 == 1) {
      func_0x00010727f7dc(auStack_c8);
      func_0x0001078c6164(auStack_100);
    }
    else {
      auStack_100[0] = 0;
      cStack_e0 = '\0';
    }
    func_0x0001077ef1b0(auStack_c8);
    func_0x0001077f17b4();
    uVar1 = cStack_e0 == '\0';
    func_0x0001077e93cc();
    func_0x0001077e606c(auStack_100);
    func_0x0001077e608c();
    func_0x0001077ee314();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001077ef1b0(auStack_c8);
    func_0x0001077e608c();
    func_0x0001077ef068();
    unaff_x19 = puVar3;
  }
  func_0x0001077efea0();
  puVar3 = puVar2;
  func_0x0001077ee3e4();
  func_0x0001077e6be4();
  uStack_239 = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6c08();
  uStack_24c = param_1;
  uStack_248 = param_2;
  uStack_244 = param_3;
  uStack_240 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6c2c();
  uStack_250 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6c4c();
  uStack_254 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6c6c();
  uStack_264 = param_1;
  uStack_260 = param_2;
  uStack_25c = param_3;
  uStack_258 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6c98();
  uStack_268 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6cb8();
  uStack_270 = param_1;
  uStack_26c = param_2;
  func_0x0001077ee718();
  func_0x0001077e6cf0();
  uStack_274 = param_1;
  func_0x0001077ee718();
  func_0x0001077e6d10();
  uStack_284 = param_1;
  uStack_280 = param_2;
  uStack_27c = param_3;
  uStack_278 = param_4;
  func_0x0001077ee718();
  func_0x0001077e6d34();
  uStack_285 = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6d5c();
  uStack_286 = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6d88();
  uStack_287 = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6dac();
  uStack_288 = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6dd4();
  uStack_289 = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6dfc();
  uStack_28a = SUB81(puVar3,0);
  func_0x0001077ee718(auStack_2a0);
  func_0x0001077e6e24();
  func_0x0001077ee718(auStack_2b4);
  func_0x0001077e6e44();
  func_0x0001077ee718(auStack_2c8);
  func_0x0001077e6e64();
  func_0x0001077ee718(auStack_2dc);
  func_0x0001077e6e84();
  func_0x0001077ee718();
  func_0x0001077e6ea4();
  uStack_2dd = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6ec8();
  uStack_2de = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6eec();
  uStack_2df = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6f10();
  uStack_2e0 = SUB81(puVar3,0);
  func_0x0001077ee718();
  func_0x0001077e6f34();
  uStack_2e8 = SUB84(puVar3,0);
  uStack_2e4 = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6f58();
  uStack_2f0 = SUB84(puVar3,0);
  uStack_2ec = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6f84();
  uStack_2f8 = SUB84(puVar3,0);
  uStack_2f4 = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6fb4();
  uStack_300 = SUB84(puVar3,0);
  uStack_2fc = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6fd8();
  uStack_308 = SUB84(puVar3,0);
  uStack_304 = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e6ffc();
  uStack_310 = SUB84(puVar3,0);
  uStack_30c = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7020();
  uStack_318 = SUB84(puVar3,0);
  uStack_314 = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7044();
  uStack_320 = SUB84(puVar3,0);
  uStack_31c = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e7068();
  uStack_328 = SUB84(puVar3,0);
  uStack_324 = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e708c();
  uStack_330 = SUB84(puVar3,0);
  uStack_32c = (undefined1)((ulong)puVar3 >> 0x20);
  func_0x0001077ee718();
  func_0x0001077e70b0();
  uStack_338 = SUB84(puVar3,0);
  _uStack_334 = CONCAT31(uStack_333,(char)((ulong)puVar3 >> 0x20));
  func_0x0001077ee718(auStack_1c8);
  uStack_339 = SUB81(puVar3,0);
  func_0x0001077e70d4();
  func_0x0001077ee718(auStack_200);
  func_0x0001077e713c();
  func_0x0001077ee718(auStack_238);
  func_0x0001077e7190();
  func_0x0001077ee718();
  func_0x0001077e71e4();
  uStack_33a = uStack_339;
  func_0x0001077ee718();
  func_0x0001077e7208();
  uVar1 = uStack_33a;
  func_0x0001077ee718();
  func_0x0001077e722c();
  uStack_34c = param_1;
  uStack_348 = param_2;
  uStack_344 = param_3;
  uStack_340 = param_4;
  func_0x0001077ee718();
  func_0x0001077e7258();
  stack0xfffffffffffffcb0 = CONCAT13(uVar1,auStack_368._24_3_);
  func_0x0001077ee718(auStack_368);
  FUN_1077e7284();
  func_0x0001077ee718();
  func_0x0001077e72d4();
  uStack_36c = param_1;
  func_0x0001077ee718();
  func_0x0001077e72f4();
  uStack_370 = param_1;
  func_0x0001077ee718(auStack_380);
  func_0x0001077e7314();
  func_0x0001077ee718();
  func_0x0001077e735c();
  puVar3 = puVar2 + 0xc80;
  func_0x0001077f0928(unaff_x19,puVar3,puVar2 + 0xc98,&uStack_239,&uStack_24c,&uStack_250,
                      &uStack_254);
  func_0x0001077f16d0();
  func_0x0001077f1230();
  func_0x0001077e737c();
  *extraout_x8 = (long)puVar3;
  return;
}



/* Entry: 1077e7284; end: 1077e72d3;  */

void FUN_1077e7284(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001077ee9f8();
  func_0x0001077e8f74(auStack_48);
  func_0x0001077ef474(extraout_x8,param_1,param_2,unaff_x21 + 0xb40,auStack_48);
  FUN_1077e8f50();
  func_0x0001077f0368();
  return;
}



/* Entry: 1077e760c; end: 1077e761f;  */

void FUN_1077e760c(void)

{
  func_0x0001077e7cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077e7d04; end: 1077e7d23;  */

undefined8 FUN_1077e7d04(void)

{
  undefined8 uStack_18;
  
  func_0x0001077efa78();
  func_0x0001077e7dc4();
  return uStack_18;
}



/* Entry: 1077e7f14; end: 1077e7f53;  */

void FUN_1077e7f14(void)

{
  func_0x0001077ee210();
  func_0x0001077e7f34();
  return;
}



/* Entry: 1077e8064; end: 1077e80ab;  */

ulong FUN_1077e8064(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x0001077e8084();
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*(uint *)*param_3;
}



/* Entry: 1077e824c; end: 1077e827b;  */

uint FUN_1077e824c(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e827c();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e8474; end: 1077e84a3;  */

uint FUN_1077e8474(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e84a4();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e86ec; end: 1077e872b;  */

uint FUN_1077e86ec(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e875c();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e8914; end: 1077e8953;  */

uint FUN_1077e8914(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e8984();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e8c44; end: 1077e8c4b;  */

ulong FUN_1077e8c44(undefined8 param_1)

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



/* Entry: 1077e8d78; end: 1077e8dc7;  */

/* WARNING: Possible PIC construction at 0x0001077e8d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e8d9c) */
/* WARNING: Removing unreachable block (ram,0x0001077e8dbc) */
/* WARNING: Removing unreachable block (ram,0x0001077ee7f4) */
/* WARNING: Removing unreachable block (ram,0x0001077e8db4) */
/* WARNING: Removing unreachable block (ram,0x0001077ee69c) */

void FUN_1077e8d78(void)

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



/* Entry: 1077e8f50; end: 1077e8f73;  */

void FUN_1077e8f50(void)

{
  undefined8 extraout_x9;
  
  func_0x0001077ee270();
  func_0x0001077e8f7c(extraout_x9);
  return;
}



/* Entry: 1077e90e8; end: 1077e913f;  */

long FUN_1077e90e8(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077efb28();
  if ((bool)in_CY) {
    func_0x0001077e9140();
  }
  else {
    func_0x0001077e911c();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 1077e92cc; end: 1077e92fb;  */

void FUN_1077e92cc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x0001077e608c();
  }
  return;
}



/* Entry: 1077e9448; end: 1077e948b;  */

void FUN_1077e9448(long param_1,long param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001077ef34c();
  func_0x0001077e948c(param_1 + 8,param_2 + 8);
  func_0x0001077f012c();
  *unaff_x20 = extraout_x8;
  unaff_x20[0x45] = *(undefined8 *)(unaff_x19 + 0x228);
  func_0x000104c2fe00(unaff_x20 + 0x46,unaff_x19 + 0x230);
  return;
}



/* Entry: 1077e977c; end: 1077e97d3;  */

void FUN_1077e977c(void)

{
  uint extraout_w8;
  
  func_0x0001077f199c();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077e60d4();
  }
  return;
}



/* Entry: 1077e9b74; end: 1077e9bef;  */

void FUN_1077e9b74(void)

{
  undefined1 auStack_70 [48];
  
  func_0x0001077efea0();
  func_0x0001077f14b0();
  func_0x0001077f1394();
  func_0x0001077eff10(auStack_70);
  func_0x0001077ef464();
  func_0x0001077e9c9c();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077e9d1c; end: 1077ea4cb;  */

void FUN_1077e9d1c(void)

{
  undefined1 auStack_d30 [72];
  undefined1 auStack_ce8 [72];
  undefined1 auStack_ca0 [72];
  undefined1 auStack_c58 [72];
  undefined1 auStack_c10 [72];
  undefined1 auStack_bc8 [72];
  undefined1 auStack_b80 [72];
  undefined1 auStack_b38 [72];
  undefined1 auStack_af0 [72];
  undefined1 auStack_aa8 [72];
  undefined1 auStack_a60 [72];
  undefined1 auStack_a18 [72];
  undefined1 auStack_9d0 [72];
  undefined1 auStack_988 [72];
  undefined1 auStack_940 [72];
  undefined1 auStack_8f8 [72];
  undefined1 auStack_8b0 [72];
  undefined1 auStack_868 [72];
  undefined1 auStack_820 [72];
  undefined1 auStack_7d8 [72];
  undefined1 auStack_790 [72];
  undefined1 auStack_748 [72];
  undefined1 auStack_700 [72];
  undefined1 auStack_6b8 [72];
  undefined1 auStack_670 [72];
  undefined1 auStack_628 [72];
  undefined1 auStack_5e0 [72];
  undefined1 auStack_598 [72];
  undefined1 auStack_550 [72];
  undefined1 auStack_508 [72];
  undefined1 auStack_4c0 [72];
  undefined1 auStack_478 [72];
  undefined1 auStack_430 [72];
  undefined1 auStack_3e8 [72];
  undefined1 auStack_3a0 [72];
  undefined1 auStack_358 [72];
  undefined1 auStack_310 [72];
  undefined1 auStack_2c8 [72];
  undefined1 auStack_280 [72];
  undefined1 auStack_238 [72];
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  func_0x0001077eea7c();
  func_0x0001077eea20(1);
  func_0x0001077eaf48(auStack_88);
  func_0x0001077ef0e0(auStack_d0);
  func_0x0001077eaf6c();
  func_0x0001077ef0e0(auStack_118);
  func_0x0001077eaf90();
  func_0x0001077ef0e0(auStack_160);
  func_0x0001077eafb0();
  func_0x0001077ef0e0(auStack_1a8);
  func_0x0001077eafd0();
  func_0x0001077ef0e0(auStack_1f0);
  func_0x0001077eaffc();
  func_0x0001077ef0e0(auStack_238);
  func_0x0001077eb01c();
  func_0x0001077ef0e0(auStack_280);
  func_0x0001077eb04c();
  func_0x0001077ef0e0(auStack_2c8);
  func_0x0001077eb06c();
  func_0x0001077ef0e0(auStack_310);
  func_0x0001077eb090();
  func_0x0001077ef0e0(auStack_358);
  func_0x0001077eb0b8();
  func_0x0001077ef0e0(auStack_3a0);
  func_0x0001077eb0e4();
  func_0x0001077ef0e0(auStack_3e8);
  func_0x0001077eb108();
  func_0x0001077ef0e0(auStack_430);
  func_0x0001077eb12c();
  func_0x0001077ef0e0(auStack_478);
  func_0x0001077eb150();
  func_0x0001077ef0e0(auStack_4c0);
  func_0x0001077eb174();
  func_0x0001077ef0e0(auStack_508);
  func_0x0001077eb194();
  func_0x0001077ef0e0(auStack_550);
  func_0x0001077eb1b4();
  func_0x0001077ef0e0(auStack_598);
  func_0x0001077eb1d4();
  func_0x0001077ef0e0(auStack_5e0);
  func_0x0001077eb1f4();
  func_0x0001077ef0e0(auStack_628);
  func_0x0001077eb218();
  func_0x0001077ef0e0(auStack_670);
  func_0x0001077eb23c();
  func_0x0001077ef0e0(auStack_6b8);
  func_0x0001077eb260();
  func_0x0001077ef0e0(auStack_700);
  func_0x0001077eb284();
  func_0x0001077ef0e0(auStack_748);
  func_0x0001077eb2a4();
  func_0x0001077ef0e0(auStack_790);
  func_0x0001077eb2cc();
  func_0x0001077ef0e0(auStack_7d8);
  func_0x0001077eb2f8();
  func_0x0001077ef0e0(auStack_820);
  func_0x0001077eb318();
  func_0x0001077ef0e0(auStack_868);
  func_0x0001077eb338();
  func_0x0001077ef0e0(auStack_8b0);
  func_0x0001077eb358();
  func_0x0001077ef0e0(auStack_8f8);
  func_0x0001077eb378();
  func_0x0001077ef0e0(auStack_940);
  func_0x0001077eb398();
  func_0x0001077ef0e0(auStack_988);
  func_0x0001077eb3b8();
  func_0x0001077ef0e0(auStack_9d0);
  func_0x0001077eb3d8();
  func_0x0001077ef0e0(auStack_a18);
  func_0x0001077eb3f8();
  func_0x0001077ef0e0(auStack_a60);
  func_0x0001077eb45c();
  func_0x0001077ef0e0(auStack_aa8);
  func_0x0001077eb4b0();
  func_0x0001077ef0e0(auStack_af0);
  func_0x0001077eb504();
  func_0x0001077ef0e0(auStack_b38);
  func_0x0001077eb528();
  func_0x0001077ef0e0(auStack_b80);
  func_0x0001077eb54c();
  func_0x0001077ef0e0(auStack_bc8);
  func_0x0001077eb578();
  func_0x0001077ef0e0(auStack_c10);
  FUN_1077eb5a4();
  func_0x0001077ef0e0(auStack_c58);
  func_0x0001077eb5f4();
  func_0x0001077ef0e0(auStack_ca0);
  func_0x0001077eb614();
  func_0x0001077ef0e0(auStack_ce8);
  func_0x0001077eb634();
  func_0x0001077ef0e0(auStack_d30);
  func_0x0001077eb67c();
  func_0x0001077eab74();
  func_0x0001073ebef4(auStack_d30);
  func_0x0001073ebef4(auStack_ce8);
  func_0x0001073ebef4(auStack_ca0);
  func_0x0001073ebef4(auStack_c58);
  func_0x0001073ebef4(auStack_c10);
  func_0x0001073ebef4(auStack_bc8);
  func_0x0001073ebef4(auStack_b80);
  func_0x0001073ebef4(auStack_b38);
  func_0x0001073ebef4(auStack_af0);
  func_0x0001073ebef4(auStack_aa8);
  func_0x0001073ebef4(auStack_a60);
  func_0x0001073ebef4(auStack_a18);
  func_0x0001073ebef4(auStack_9d0);
  func_0x0001073ebef4(auStack_988);
  func_0x0001073ebef4(auStack_940);
  func_0x0001073ebef4(auStack_8f8);
  func_0x0001073ebef4(auStack_8b0);
  func_0x0001073ebef4(auStack_868);
  func_0x0001073ebef4(auStack_820);
  func_0x0001073ebef4(auStack_7d8);
  func_0x0001073ebef4(auStack_790);
  func_0x0001073ebef4(auStack_748);
  func_0x0001073ebef4(auStack_700);
  func_0x0001073ebef4(auStack_6b8);
  func_0x0001073ebef4(auStack_670);
  func_0x0001073ebef4(auStack_628);
  func_0x0001073ebef4(auStack_5e0);
  func_0x0001073ebef4(auStack_598);
  func_0x0001073ebef4(auStack_550);
  func_0x0001073ebef4(auStack_508);
  func_0x0001073ebef4(auStack_4c0);
  func_0x0001073ebef4(auStack_478);
  func_0x0001073ebef4(auStack_430);
  func_0x0001073ebef4(auStack_3e8);
  func_0x0001073ebef4(auStack_3a0);
  func_0x0001073ebef4(auStack_358);
  func_0x0001073ebef4(auStack_310);
  func_0x0001073ebef4(auStack_2c8);
  func_0x0001073ebef4(auStack_280);
  func_0x0001073ebef4(auStack_238);
  func_0x0001073ebef4(auStack_1f0);
  func_0x0001073ebef4(auStack_1a8);
  func_0x0001073ebef4(auStack_160);
  func_0x0001073ebef4(auStack_118);
  func_0x0001077f0dd0();
  func_0x0001077f0a88();
  return;
}



/* Entry: 1077eb5a4; end: 1077eb5f3;  */

void FUN_1077eb5a4(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x0001077ef34c();
  func_0x0001077e8f74(auStack_48);
  func_0x0001077ec55c(extraout_x8,unaff_x20 + 0xb40,auStack_48);
  func_0x0001077f0368();
  return;
}



/* Entry: 1077ebcdc; end: 1077ebcf7;  */

void FUN_1077ebcdc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebcf8();
  return;
}



/* Entry: 1077ebe28; end: 1077ebe5b;  */

void FUN_1077ebe28(void)

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
  func_0x0001077ebe78();
  return;
}



/* Entry: 1077ebf78; end: 1077ebfa7;  */

void FUN_1077ebf78(long param_1,long param_2,undefined8 param_3)

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
      func_0x0001077ebff8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec0dc; end: 1077ec0f7;  */

void FUN_1077ec0dc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec0f8();
  return;
}



/* Entry: 1077ec228; end: 1077ec25b;  */

void FUN_1077ec228(void)

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
  func_0x0001077ec278();
  return;
}



/* Entry: 1077ec378; end: 1077ec3a7;  */

void FUN_1077ec378(long param_1,long param_2,undefined8 param_3)

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
      func_0x0001077ec3f8();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec4dc; end: 1077ec4f7;  */

void FUN_1077ec4dc(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec4f8();
  return;
}



/* Entry: 1077ec628; end: 1077ec65b;  */

ulong FUN_1077ec628(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = *(byte *)(param_1 + 0x10) >> 1 & 1;
    if (*(int *)(param_1 + 0x30) == 1) {
      uVar1 = 1;
    }
    return (ulong)uVar1;
  }
  return 1;
}



/* Entry: 1077ecfd8; end: 1077ed043;  */

void FUN_1077ecfd8(void)

{
  func_0x0001077eef14();
  func_0x0001077ed044();
  func_0x0001077ef4c8();
  func_0x0001077ed0a0();
  func_0x0001077f1814();
  func_0x0001077e5e9c();
  func_0x0001077efec4();
  func_0x0001077ed06c();
  func_0x0001077f1000();
  func_0x0001077ed218();
  return;
}



/* Entry: 1077ed1a8; end: 1077ed1d3;  */

void FUN_1077ed1a8(void)

{
  uint extraout_w8;
  
  func_0x0001077f0c60();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077ed1d4();
  }
  return;
}



/* Entry: 1077ed304; end: 1077ed373;  */

long FUN_1077ed304(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x0001077f1450();
  }
  return param_1;
}



/* Entry: 1077eda58; end: 1077eda5b;  */

long FUN_1077eda58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_FUN_1109de540);
  func_0x000104c2f714(lVar1 + 0x78);
  func_0x0001077edb24();
  return param_1;
}



/* Entry: 1077edc04; end: 1077edc17;  */

void FUN_1077edc04(void)

{
  func_0x0001077edffc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077ee104; end: 1077ee13b;  */

long FUN_1077ee104(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef940(&PTR_DAT_1109de670);
  func_0x000104c2f714(lVar1 + 0x58);
  func_0x000104c2f714();
  return param_1;
}



/* Entry: 1077f1c70; end: 1077f1c8b;  */

bool FUN_1077f1c70(long param_1)

{
  func_0x0001077f1c8c();
  return param_1 != 0;
}



/* Entry: 1077f2518; end: 1077f254f;  */

undefined8 FUN_1077f2518(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109deb18;
  do {
    pbVar2 = &UNK_1109deb58;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f27dc; end: 1077f2813;  */

undefined8 FUN_1077f27dc(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x90;
  pbVar1 = &UNK_1109dec48;
  do {
    pbVar2 = &UNK_1109dece8;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2a50; end: 1077f2a87;  */

undefined8 FUN_1077f2a50(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x30;
  pbVar1 = &UNK_1109ded88;
  do {
    pbVar2 = &UNK_1109dedc8;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f2cc0; end: 1077f2cf7;  */

undefined8 FUN_1077f2cc0(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  lVar3 = 0x40;
  pbVar1 = &UNK_1109dee78;
  do {
    pbVar2 = &UNK_1109deec8;
    if (lVar3 == 0) break;
    pbVar2 = pbVar1 + 0x10;
    lVar3 = lVar3 + -0x10;
    pbVar1 = pbVar2;
  } while (param_1 != *pbVar2);
  return *(undefined8 *)(pbVar2 + 8);
}



/* Entry: 1077f3740; end: 1077f378b;  */

void FUN_1077f3740(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)puVar4;
  return;
}



/* Entry: 1077f397c; end: 1077f39af;  */

void FUN_1077f397c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x0001077f3a04();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1077f3bc0; end: 1077f3bd3;  */

void FUN_1077f3bc0(void)

{
  func_0x0001072a8f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f3d6c; end: 1077f3d93;  */

void FUN_1077f3d6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109df680;
  return;
}



/* Entry: 1077f3e84; end: 1077f440f;  */

bool FUN_1077f3e84(float param_1,float param_2,float param_3,long *param_4,undefined8 *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  
  if (*(char *)(param_5 + 3) == '\x01') {
    puStack_150 = (undefined8 *)*param_5;
    uStack_11c = SUB84(&puStack_150,0);
    func_0x0001077f4410();
    uVar16 = 0xbf000000;
    uVar14 = param_5[2] + 2;
    lVar13 = param_5[2] * 4 + 8;
    for (fVar23 = 0.0; fVar20 = (float)uVar16, param_1 * -0.5 < fVar23;
        fVar23 = fVar23 - (float)uVar16) {
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) {
        return false;
      }
      func_0x0001077f4424(*param_4 + lVar13 + -8,&uStack_11c);
      uStack_11c = *(undefined4 *)(*param_4 + lVar13 + -8);
      lVar13 = lVar13 + -4;
    }
    func_0x0001077f4424(*param_4 + lVar13 + -4);
    puStack_138 = (undefined8 *)0x0;
    puStack_140 = (undefined8 *)0x0;
    lStack_128 = 0;
    uStack_130 = 0;
    puStack_148 = (undefined8 *)0x0;
    puStack_150 = (undefined8 *)0x0;
    fVar24 = 0.0;
    dVar21 = 9.42477796076938;
    for (fVar23 = fVar23 + fVar20; bVar7 = param_1 * 0.5 <= fVar23, !bVar7;
        fVar23 = fVar23 + SUB84(dVar21,0)) {
      uVar1 = uVar14 + 1;
      lVar13 = *param_4;
      if ((ulong)(param_4[1] - lVar13 >> 2) <= uVar1) break;
      lVar2 = lVar13 + uVar14 * 4;
      lVar13 = lVar13 + uVar1 * 4;
      func_0x0001077f4454(lVar2 + -4,lVar2);
      lVar10 = lVar13;
      dVar22 = dVar21;
      func_0x0001077f4454(lVar2);
      puVar18 = puStack_140;
      puVar9 = puStack_148;
      uVar14 = (long)puStack_140 - (long)puStack_148;
      dVar21 = (double)(float)(dVar21 - dVar22) + 9.42477796076938;
      lVar12 = 0;
      if (uVar14 != 0) {
        lVar12 = ((long)puStack_140 - (long)puStack_148) * 0x40 + -1;
      }
      _fmod(dVar21,0x401921fb54442d18);
      puVar17 = puStack_138;
      puVar11 = puStack_150;
      if (lVar12 == lStack_128 + uStack_130) {
        if (uStack_130 < 0x200) {
          if (uVar14 < (ulong)((long)puStack_138 - (long)puStack_150)) {
            uVar16 = 0x1000;
            __Znwm();
            if (puVar17 == puVar18) {
              puVar15 = puVar9;
              if (puVar9 == puVar11) {
                lVar12 = (long)puVar17 - (long)puVar9 >> 2;
                if (puVar18 == puVar9) {
                  lVar12 = 1;
                }
                ppuStack_b0 = &puStack_138;
                func_0x0001077f45c0(lVar12);
                func_0x0001077f471c(lVar12 << 1);
                func_0x0001077f4598(&puStack_d0,puStack_148,puStack_140);
                puVar17 = puStack_138;
                puVar11 = puStack_140;
                puVar18 = puStack_148;
                puVar9 = puStack_150;
                puStack_148 = puStack_c8;
                puStack_150 = puStack_d0;
                puStack_138 = puStack_b8;
                puStack_140 = puStack_c0;
                puStack_c8 = puVar18;
                puStack_d0 = puVar9;
                puStack_b8 = puVar17;
                puStack_c0 = puVar11;
                func_0x0001077f4738();
                puVar15 = puStack_148;
              }
              puVar15[-1] = uVar16;
              goto LAB_1077f4048;
            }
            puStack_140 = puVar18 + 1;
            *puVar18 = uVar16;
          }
          else {
            puVar11 = (undefined8 *)((long)puStack_138 - (long)puStack_150 >> 2);
            if (puStack_138 == puStack_150) {
              puVar11 = (undefined8 *)0x1;
            }
            ppuStack_e0 = &puStack_138;
            func_0x0001077f45c0();
            puVar17 = (undefined8 *)((long)puVar11 + uVar14);
            puVar15 = puVar11 + lVar10;
            uVar16 = 0x1000;
            lVar12 = lVar10;
            puStack_100 = puVar11;
            puStack_f8 = puVar17;
            puStack_f0 = puVar17;
            puStack_e8 = puVar15;
            __Znwm();
            uStack_108 = 0x200;
            puVar19 = puVar17;
            plStack_110 = &lStack_128;
            if (uVar14 == lVar10 * 8) {
              if (puVar18 == puVar9) {
                puVar9 = (undefined8 *)0x1;
                uStack_118 = uVar16;
                ppuStack_b0 = &puStack_138;
                func_0x0001077f45c0();
                puStack_b8 = puVar9 + lVar12;
                puStack_d0 = puVar9;
                puStack_c8 = puVar9;
                puStack_c0 = puVar9;
                func_0x0001077f4598(&puStack_d0,puVar17,puVar17);
                puVar3 = puStack_b8;
                puVar19 = puStack_c0;
                puVar18 = puStack_c8;
                puVar9 = puStack_d0;
                puStack_f8 = puStack_c8;
                puStack_100 = puStack_d0;
                puStack_e8 = puStack_b8;
                puStack_d0 = puVar11;
                puStack_c8 = puVar17;
                puStack_c0 = puVar17;
                puStack_b8 = puVar15;
                func_0x0001077f4738();
                puVar11 = puVar9;
                puVar17 = puVar18;
                puVar15 = puVar3;
              }
              else {
                puVar17 = puVar17 + (((long)puVar17 - (long)puVar11 >> 3) + 1) / -2;
                puVar19 = puVar17;
                puStack_f8 = puVar17;
              }
            }
            bVar7 = false;
            puVar18 = puVar19 + 1;
            *puVar19 = uVar16;
            uStack_118 = 0;
            puVar9 = puStack_140;
            puStack_f0 = puVar18;
            while (puVar9 != puStack_148) {
              puVar19 = puVar17;
              if (puVar17 == puVar11) {
                if (puVar18 < puVar15) {
                  lVar12 = (long)puVar18 - (long)puVar11;
                  puVar3 = puVar18 + (((long)puVar15 - (long)puVar18 >> 3) + 1) / 2;
                  puVar19 = (undefined8 *)((long)puVar3 - ((long)puVar18 - (long)puVar11));
                  puVar18 = puVar3;
                  if (lVar12 != 0) {
                    _memmove(puVar19,puVar17,lVar12);
                  }
                }
                else {
                  lVar12 = (long)puVar15 - (long)puVar11 >> 2;
                  if ((long)puVar15 - (long)puVar11 == 0) {
                    lVar12 = 1;
                  }
                  ppuStack_b0 = &puStack_138;
                  func_0x0001077f45c0(lVar12);
                  func_0x0001077f471c(lVar12 << 1);
                  func_0x0001077f4598(&puStack_d0,puVar11,puVar18);
                  puVar6 = puStack_b8;
                  puVar5 = puStack_c0;
                  puVar19 = puStack_c8;
                  puVar3 = puStack_d0;
                  puStack_d0 = puVar11;
                  puStack_c8 = puVar17;
                  puStack_c0 = puVar18;
                  puStack_b8 = puVar15;
                  func_0x0001077f4738();
                  puVar11 = puVar3;
                  puVar18 = puVar5;
                  puVar15 = puVar6;
                }
              }
              puVar9 = puVar9 + -1;
              puVar17 = puVar19 + -1;
              *puVar17 = *puVar9;
            }
            puStack_100 = puStack_150;
            puStack_f8 = puStack_148;
            puStack_e8 = puStack_138;
            puStack_f0 = puStack_140;
            puStack_150 = puVar11;
            puStack_148 = puVar17;
            puStack_140 = puVar18;
            puStack_138 = puVar15;
            func_0x0001077f45f4(&uStack_118);
            func_0x0001077f4624(&puStack_100);
          }
        }
        else {
          puVar15 = puVar9 + 1;
          uVar16 = *puVar9;
          uStack_130 = uStack_130 - 0x200;
LAB_1077f4048:
          puStack_148 = puVar15;
          func_0x0001077f44a8(&puStack_150,uVar16);
        }
      }
      ppuVar8 = &puStack_150;
      func_0x0001077f4478();
      *(float *)ppuVar8 = fVar23;
      *(float *)((long)ppuVar8 + 4) = ABS((float)(dVar21 + -3.141592653589793));
      lStack_128 = lStack_128 + 1;
      fVar24 = fVar24 + ABS((float)(dVar21 + -3.141592653589793));
      while( true ) {
        lVar12 = lStack_128 + -1;
        pfVar4 = (float *)(puStack_148[uStack_130 >> 9] + (uStack_130 & 0x1ff) * 8);
        fVar20 = fVar23 - *pfVar4;
        dVar21 = (double)(ulong)(uint)fVar20;
        if (fVar20 <= param_2) break;
        fVar24 = fVar24 - pfVar4[1];
        uStack_130 = uStack_130 + 1;
        lStack_128 = lVar12;
        if (0x3ff < uStack_130) {
          __ZdlPv(*puStack_148);
          puStack_148 = puStack_148 + 1;
          uStack_130 = uStack_130 - 0x200;
        }
      }
      if (param_3 < fVar24) break;
      func_0x0001077f4424(lVar2,lVar13);
      uVar14 = uVar1;
    }
    func_0x0001077f4668(&puStack_150);
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}



/* Entry: 1077f47c0; end: 1077f47fb;  */

long FUN_1077f47c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001077f4dc0();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    func_0x0001077f4df8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 1077f4fac; end: 1077f501f;  */

long * FUN_1077f4fac(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010740790c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1077f5454; end: 1077f54e3;  */

bool FUN_1077f5454(long param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xe58);
  if (fVar2 <= param_2[2]) {
    bVar1 = true;
    if ((*param_2 < *(float *)(param_1 + 0x10b8)) &&
       (bVar1 = false, !NAN(param_2[3]) && !NAN(fVar2))) {
      bVar1 = param_2[3] < fVar2;
    }
    if (!bVar1) {
      return *(float *)(param_1 + 0x10bc) <= param_2[1];
    }
  }
  return true;
}



/* Entry: 1077f609c; end: 1077f6257;  */

undefined8
FUN_1077f609c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  float fStack_78;
  undefined4 uStack_74;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_7 + 3) == 1) {
    func_0x0001074b5420();
    fVar8 = *(float *)(param_5 + 0xe58);
    uVar7 = NEON_ucvtf(*(undefined8 *)(param_5 + 0x4c),4);
    fVar5 = (float)uVar7 * 0.5;
    uVar10 = NEON_fmov(0x3f800000,4);
    fVar4 = (float)*param_7;
    fVar12 = fVar8 + fVar5 * (fVar4 + (float)uVar10);
    uVar6 = 0x3f800000;
    fStack_78 = (fVar8 + fVar5 * (fVar4 + *(float *)(param_7 + 1) + 1.0)) - fVar12;
    puStack_80 = (undefined8 *)
                 CONCAT44(fVar8 + (float)((ulong)uVar7 >> 0x20) * 0.5 *
                                  ((float)((ulong)*param_7 >> 0x20) + (float)((ulong)uVar10 >> 0x20)
                                  ),fVar12);
    fVar4 = fStack_78;
    func_0x0001077f6258(&puStack_80);
    func_0x0001074b1a8c(param_8,&puStack_80);
    iVar1 = (int)param_8;
    uStack_68 = CONCAT44(fVar5,fVar4);
    uStack_60 = CONCAT44(uVar6,fVar8);
    func_0x0001077f8634();
    if (iVar1 != 0) {
      return 0x100000000;
    }
  }
  else {
    if (*(int *)(param_7 + 3) != 0) {
      return 7;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0001074b5408(param_7);
    func_0x0001072a77dc(&puStack_80,param_7);
    uVar7 = NEON_ucvtf(*(undefined8 *)(param_5 + 0x4c),4);
    uVar10 = 0x3f0000003f000000;
    fVar4 = (float)uVar7;
    uVar2 = (ulong)uVar7 >> 0x20;
    uStack_60 = uStack_68;
    uVar13 = NEON_fmov(0x3f800000,4);
    puVar3 = puStack_80;
    while( true ) {
      uVar11 = (undefined4)param_4;
      uVar9 = (undefined4)uVar10;
      uVar6 = (undefined4)uVar7;
      if (puVar3 == (undefined8 *)CONCAT44(uStack_74,fStack_78)) break;
      fVar5 = (float)*puVar3 + (float)uVar13;
      fVar8 = (float)((ulong)*puVar3 >> 0x20) + (float)((ulong)uVar13 >> 0x20);
      uVar7 = CONCAT44(fVar8,fVar5);
      uVar10 = CONCAT44(*(float *)(param_5 + 0xe58) + (float)uVar2 * 0.5 * fVar8,
                        *(float *)(param_5 + 0xe58) + fVar4 * 0.5 * fVar5);
      uStack_90 = uVar10;
      func_0x0001074b2678(&uStack_68,&uStack_90);
      puVar3 = puVar3 + 1;
    }
    func_0x0001074b2638(param_8,&uStack_68);
    uVar2 = 0;
    func_0x0001072a0e60();
    uStack_90 = CONCAT44(uVar9,uVar6);
    uStack_88 = param_3;
    uStack_84 = uVar11;
    func_0x0001077f8634();
    func_0x0001072a7938(&puStack_80);
    func_0x0001072a7938(&uStack_68);
    if ((uVar2 & 1) != 0) {
      return 0x100000000;
    }
  }
  return 0;
}



/* Entry: 1077f7230; end: 1077f7547;  */

/* WARNING: Possible PIC construction at 0x0001077f734c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077f73dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077f7350) */
/* WARNING: Removing unreachable block (ram,0x0001077f7364) */
/* WARNING: Removing unreachable block (ram,0x0001077f73b4) */
/* WARNING: Removing unreachable block (ram,0x0001077f736c) */
/* WARNING: Removing unreachable block (ram,0x0001077f7384) */
/* WARNING: Removing unreachable block (ram,0x0001077f7388) */
/* WARNING: Removing unreachable block (ram,0x0001077f7390) */
/* WARNING: Removing unreachable block (ram,0x0001077f73e0) */
/* WARNING: Removing unreachable block (ram,0x0001077f73f4) */
/* WARNING: Removing unreachable block (ram,0x0001077f7488) */
/* WARNING: Removing unreachable block (ram,0x0001077f74cc) */
/* WARNING: Removing unreachable block (ram,0x0001077f74e8) */
/* WARNING: Removing unreachable block (ram,0x0001077f7534) */
/* WARNING: Removing unreachable block (ram,0x0001077f74ac) */
/* WARNING: Removing unreachable block (ram,0x0001077f73fc) */
/* WARNING: Removing unreachable block (ram,0x0001077f7414) */
/* WARNING: Removing unreachable block (ram,0x0001077f7418) */
/* WARNING: Removing unreachable block (ram,0x0001077f7420) */
/* WARNING: Removing unreachable block (ram,0x0001077f7448) */
/* WARNING: Removing unreachable block (ram,0x0001077f7460) */
/* WARNING: Removing unreachable block (ram,0x0001077f7478) */

void FUN_1077f7230(undefined8 ***param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined8 **ppuStack_170;
  undefined8 *puStack_168;
  undefined8 **ppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 **ppuStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  byte bStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_70;
  
  lVar1 = param_2;
  func_0x0001077f8548();
  pppuVar7 = param_1 + 6;
  *pppuVar7 = (undefined8 **)&UNK_10e52b660;
  param_1[3] = (undefined8 **)0x0;
  param_1[2] = (undefined8 **)0x0;
  param_1[5] = (undefined8 **)0x0;
  param_1[4] = (undefined8 **)0x0;
  param_1[1] = (undefined8 **)0x0;
  *param_1 = (undefined8 **)0x0;
  param_1[8] = (undefined8 **)0x0;
  param_1[9] = (undefined8 **)0x0;
  param_1[7] = (undefined8 **)0x0;
  puStack_e0 = &UNK_10e52b660;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x0001074f5f74(&puStack_e0,*(undefined8 *)(lVar1 + 0x10b0));
  lVar9 = *(long *)(param_2 + 0x10a0);
  lVar1 = param_2 + 0x10a8;
  while (lVar9 != lVar1) {
    lVar6 = *(long *)(*(long *)(lVar9 + 0x28) + 0x30);
    if (*(char *)(lVar6 + 0x120) == '\x01') {
      lVar6 = lVar6 + 0xe8;
      func_0x00010725ffc4(lVar6);
      func_0x000104c2fe00(&puStack_a8,lVar6);
      uStack_70 = 1;
      func_0x0001074f60fc(auStack_c0,&puStack_e0,&puStack_a8);
      func_0x000104c2f714(&puStack_a8);
      if ((bStack_b0 & 1) == 0) {
        *(int *)(lStack_b8 + 0x38) = *(int *)(lStack_b8 + 0x38) + 1;
      }
    }
    func_0x00010002c7d4();
  }
  puVar5 = &uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  pppuVar2 = *(undefined8 ****)(param_2 + 0x10a0);
  pppuVar3 = *(undefined8 ****)(param_3 + 0x10a0);
  ppuVar4 = &puStack_a8;
  uStack_108 = 0x1077f7350;
  puStack_140 = puVar5;
  lStack_138 = lVar1;
  lStack_130 = param_2;
  lStack_128 = param_3;
  pppuStack_120 = pppuVar7;
  pppuStack_118 = param_1;
  puStack_110 = &stack0xfffffffffffffff0;
  puStack_a8 = puVar5;
  func_0x0001077f8664(pppuVar2,lVar1);
  ppuStack_170 = ppuVar4;
  puStack_168 = puVar5;
  ppuStack_160 = pppuVar3;
  pppuStack_158 = pppuVar2;
  while ((pppuVar7 != param_1 &&
         ((undefined8 ***)ppuStack_160 != (undefined8 ***)(param_3 + 0x10a8)))) {
    if (*(uint *)(pppuVar7 + 4) < *(uint *)(ppuStack_160 + 4)) {
      pppuVar2 = &ppuStack_170;
      func_0x0001077f7bf4();
      ppppuVar8 = &pppuStack_158;
    }
    else {
      if (*(uint *)(pppuVar7 + 4) <= *(uint *)(ppuStack_160 + 4)) {
        func_0x0001077f8700();
        pppuStack_158 = pppuVar2;
      }
      ppppuVar8 = (undefined8 ****)&ppuStack_160;
    }
    func_0x0001077f8700();
    *ppppuVar8 = pppuVar2;
    pppuVar7 = pppuStack_158;
  }
  puStack_148 = puStack_168;
  ppuStack_150 = ppuStack_170;
  while (pppuVar7 != param_1) {
    pppuVar2 = &ppuStack_150;
    func_0x0001077f7bf4(pppuVar2,pppuVar7 + 4);
    func_0x0001077f8700();
    pppuVar7 = pppuVar2;
  }
  return;
}



/* Entry: 1077f795c; end: 1077f79bb;  */

long FUN_1077f795c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1077f7da8; end: 1077f7df3;  */

long * FUN_1077f7da8(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, *(uint *)(plVar2 + 4) <= param_3) {
      if (param_3 <= *(uint *)(plVar2 + 4)) goto LAB_1077f7dec;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_1077f7dec;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_1077f7dec:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 1077f8088; end: 1077f80b7;  */

void FUN_1077f8088(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109df760;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077f828c; end: 1077f82cf;  */

long * FUN_1077f828c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1077f84bc; end: 1077f84d3;  */

void FUN_1077f84bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077f8d64; end: 1077f90b3;  */

/* WARNING: Possible PIC construction at 0x0001077f8da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077f8dac) */
/* WARNING: Removing unreachable block (ram,0x0001077f8dc8) */
/* WARNING: Removing unreachable block (ram,0x0001077f8dd8) */
/* WARNING: Removing unreachable block (ram,0x0001077f8de8) */
/* WARNING: Removing unreachable block (ram,0x0001077f8df8) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e14) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e28) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e48) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f68) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f70) */
/* WARNING: Removing unreachable block (ram,0x0001077f8fb0) */
/* WARNING: Removing unreachable block (ram,0x0001077f903c) */
/* WARNING: Removing unreachable block (ram,0x0001077f9050) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f7c) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f84) */
/* WARNING: Removing unreachable block (ram,0x0001077f8fa8) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e50) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e7c) */
/* WARNING: Removing unreachable block (ram,0x0001077f8ef4) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f0c) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f38) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f40) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f50) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f14) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f28) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f30) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e8c) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e94) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e9c) */
/* WARNING: Removing unreachable block (ram,0x0001077f8eac) */
/* WARNING: Removing unreachable block (ram,0x0001077f8ebc) */
/* WARNING: Removing unreachable block (ram,0x0001077f8ecc) */
/* WARNING: Removing unreachable block (ram,0x0001077f8edc) */
/* WARNING: Removing unreachable block (ram,0x0001077f8ee4) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e54) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e5c) */
/* WARNING: Removing unreachable block (ram,0x0001077f8f58) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e64) */
/* WARNING: Removing unreachable block (ram,0x0001077f8e1c) */
/* WARNING: Removing unreachable block (ram,0x0001077f8de0) */
/* WARNING: Removing unreachable block (ram,0x0001077f905c) */
/* WARNING: Removing unreachable block (ram,0x0001077f9088) */
/* WARNING: Removing unreachable block (ram,0x0001077f90a0) */
/* WARNING: Removing unreachable block (ram,0x0001077f90b0) */
/* WARNING: Removing unreachable block (ram,0x0001077f9068) */

long FUN_1077f8d64(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001077fa5b4(param_1);
  func_0x0001077f99ec();
  return param_1 + 0x28;
}



/* Entry: 1077f9490; end: 1077f94a7;  */

void FUN_1077f9490(void)

{
  func_0x0001077fa074();
  return;
}



/* Entry: 1077f9788; end: 1077f97cf;  */

void FUN_1077f9788(void)

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



/* Entry: 1077f99b4; end: 1077f99eb;  */

void FUN_1077f99b4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077fa4fc();
  if ((bool)in_ZR) {
    func_0x0001074f50e8(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f9c20; end: 1077f9cc7;  */

void FUN_1077f9c20(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077fa4fc();
  if ((bool)in_ZR) {
    func_0x00010002c948(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f9fb4; end: 1077f9fe3;  */

void FUN_1077f9fb4(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x0001077fa480();
  func_0x0001077fa5a4();
  if ((bool)in_ZR) {
    *unaff_x21 = unaff_x20;
  }
  func_0x0001077fa430();
  return;
}



/* Entry: 1077fa200; end: 1077fa20b;  */

void FUN_1077fa200(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_3;
  uStack_20 = *param_4;
  func_0x0001077fa230(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1077fa3a8; end: 1077fa3d7;  */

void FUN_1077fa3a8(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x0001077fa480();
  func_0x0001077fa5a4();
  if ((bool)in_ZR) {
    *unaff_x21 = unaff_x20;
  }
  func_0x0001077fa430();
  return;
}



/* Entry: 1077fa954; end: 1077fa993;  */

void FUN_1077fa954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 1077fb318; end: 1077fb433;  */

undefined8 FUN_1077fb318(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  double dStack_60;
  double dStack_58;
  double dVar6;
  
  if (*(long *)(param_3 + 0x18) != *(long *)(param_3 + 0x20)) {
    *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + -8;
    lVar3 = *param_2;
    lVar1 = param_2[1];
    uStack_90 = 0;
    uStack_70 = 0;
    uStack_68 = 0x40;
    uStack_78 = 0;
    uStack_80 = 0;
    iStack_88 = 0;
    uVar7 = 0x3fd0000000000000;
    uVar5 = 0x3ff0000000000000;
    func_0x000107809ee8();
    dStack_60 = (double)uVar5;
    dStack_58 = (double)uVar7;
    func_0x000107809eb4();
    fVar4 = (float)lVar1 / 64.0;
    dVar6 = (double)(ulong)(uint)fVar4;
    func_0x000107809d28();
    func_0x0001077fa994(auStack_a0,0);
    dStack_60 = (double)((float)lVar3 / 64.0);
    dStack_58 = (double)fVar4;
    func_0x000107809eb4();
    iVar2 = (int)uStack_80;
    lVar3 = 0;
    while (iVar2 != (int)lVar3) {
      func_0x000107809af8();
      dStack_60 = dVar6;
      func_0x000107809e78();
      lVar3 = lVar1;
    }
    iStack_88 = iVar2;
    func_0x0001077fe4e8(&uStack_80);
  }
  return 0;
}



/* Entry: 1077fbc78; end: 1077fbc7b;  */

void FUN_1077fbc78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1077fc204; end: 1077fc367;  */

undefined8 FUN_1077fc204(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  
  if ((*(byte *)(param_1 + 0x6a8) & 1) != 0) {
    return 1;
  }
  func_0x00010780a21c();
  if (*(char *)(param_1 + 0x6a0) == '\x01') {
    func_0x0001077fc368(param_1 + 0x660);
    puVar2 = (undefined8 *)(param_1 + 0x660);
    func_0x0001073982a4();
    for (uVar7 = 0; uVar7 < (ulong)(((long *)*puVar2)[1] - *(long *)*puVar2 >> 6); uVar7 = uVar7 + 1
        ) {
      pbVar8 = param_2;
      if ((uVar7 & 1) != 0) {
        while (pbVar8 < param_2 + param_3) {
          uVar9 = (uint)*pbVar8;
          if ((char)*pbVar8 < '\0') {
            if (uVar9 < 0xe0) {
              uVar9 = pbVar8[1] & 0x3f | (uVar9 & 0x1f) << 6;
              lVar6 = 2;
            }
            else {
              bVar1 = pbVar8[2];
              uVar5 = (uint)pbVar8[1];
              if (uVar9 < 0xf0) {
                uVar9 = bVar1 & 0x3f | (uVar5 & 3) << 6 | (uVar5 & 0x3c) << 6 | (uVar9 & 0xf) << 0xc
                ;
                lVar6 = 3;
              }
              else {
                uVar9 = pbVar8[3] & 0x3f | (bVar1 & 3) << 6 |
                        (bVar1 & 0x3c) << 6 | (uVar5 & 0xf) << 0xc |
                        (uVar5 & 0x30) << 0xc | (uVar9 & 7) << 0x12;
                lVar6 = 4;
              }
            }
          }
          else {
            lVar6 = 1;
          }
          pbVar8 = pbVar8 + lVar6;
          func_0x000107809f6c();
          puVar3 = (uint *)(extraout_x8 + uVar7 * 0x40 + -0x40);
          func_0x0001077fc380();
          func_0x000107809f6c();
          puVar4 = (uint *)(extraout_x8_00 + uVar7 * 0x40);
          func_0x0001077fc380();
          if ((((puVar3 != (uint *)0x0) && (puVar4 != (uint *)0x0)) && (*puVar3 <= uVar9)) &&
             (uVar9 <= *puVar4)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


