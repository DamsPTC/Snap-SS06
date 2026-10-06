/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107739238; end: 107739247;  */

/* WARNING: Possible PIC construction at 0x00010773938c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739390) */
/* WARNING: Removing unreachable block (ram,0x0001077393a8) */
/* WARNING: Removing unreachable block (ram,0x000107739398) */
/* WARNING: Removing unreachable block (ram,0x0001077393b4) */

long * FUN_107739238(long *param_1,long *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x0001077429f8(param_1,param_2,param_3);
    func_0x000107741ca8();
    *(undefined8 *)(puVar2 + -0xb8) = 0;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(undefined8 *)(puVar2 + -0xc0) = 0;
    func_0x000107743110(*param_2);
    func_0x000107742d78();
    unaff_x22 = (undefined8 *)((undefined8 *)*unaff_x21)[1];
    unaff_x19 = param_1;
    for (unaff_x21 = *(undefined8 **)*unaff_x21; uVar3 = unaff_x21 == unaff_x22, !(bool)uVar3;
        unaff_x21 = unaff_x21 + 0xe) {
      puVar1 = unaff_x20;
      if (*(int *)(unaff_x21 + 0xd) != 0) {
        puVar1 = unaff_x21;
      }
      unaff_x19 = (long *)(puVar2 + -0xc0);
      func_0x00010758ee8c(unaff_x19,puVar1);
    }
    func_0x00010774339c();
    func_0x000107277aa4();
    *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -200);
    *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd0);
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -200) = 0;
    *(undefined4 *)(puVar2 + -0x40) = 8;
    func_0x000107742ab8();
    func_0x000107742bf8();
    func_0x000107743144();
    func_0x000107742aa8();
    func_0x0001077419ec();
    if ((bool)uVar3) break;
    ___stack_chk_fail();
    param_2 = unaff_x19;
    func_0x000107742aa8();
    func_0x000107742904();
    *(undefined8 *)(puVar2 + -0x130) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x128) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x120) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x118) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x110) = unaff_x24;
    *(long *)(puVar2 + -0x108) = unaff_x23;
    *(undefined8 **)(puVar2 + -0x100) = unaff_x22;
    *(undefined8 **)(puVar2 + -0xf8) = unaff_x21;
    *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0xa8;
    *(long **)(puVar2 + -0xe8) = unaff_x19;
    *(undefined1 **)(puVar2 + -0xe0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xd8) = &UNK_10773930c;
    unaff_x29 = puVar2 + -0xe0;
    func_0x0001077418c8();
    func_0x000107741f34();
    while (uVar3 = unaff_x23 == 2, !(bool)uVar3) {
      func_0x0001077422ac();
      param_2 = (long *)*param_2;
      func_0x000107741f94();
      func_0x000107742eac();
      if ((bool)uVar3) {
        func_0x0001077429f0();
        func_0x000107742190();
      }
      else {
        func_0x0001077429e8();
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)uVar3) {
        func_0x0001077429e0();
        func_0x000107741a80();
        if ((bool)uVar3) {
          return param_2;
        }
        ___stack_chk_fail();
        func_0x000107742260();
        func_0x00010727f7f8();
        func_0x0001077429e0();
        func_0x000107742904();
        *(undefined1 **)(puVar2 + -0x2c0) = puVar2 + -0xa8;
        *(long **)(puVar2 + -0x2b8) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x2b0) = unaff_x29;
        *(undefined **)(puVar2 + -0x2a8) = &DAT_1077393f8;
        *param_2 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(param_2 + 9);
        FUN_10772d754(param_2 + 5);
        func_0x0001072c9884(param_2 + 2);
        return param_2;
      }
    }
    unaff_x20 = (undefined8 *)(puVar2 + -0x298);
    func_0x00010774376c();
    param_1 = (long *)(puVar2 + -0x1b8);
    param_3 = puVar2 + -0x228;
    unaff_x30 = &UNK_107739390;
    puVar2 = puVar2 + -0x2a0;
  }
  return unaff_x19;
}



/* Entry: 1077395f8; end: 1077396ff;  */

undefined8 * FUN_1077395f8(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long *unaff_x23;
  long unaff_x24;
  undefined8 auStack_420 [8];
  int iStack_3e0;
  undefined8 uStack_8;
  
  func_0x0001077438e0();
  func_0x000107741970();
  func_0x00010774222c();
  func_0x000107742764(0);
  func_0x0001077430c8();
  func_0x000107741c60();
  do {
    if (unaff_x24 == 0) {
      func_0x000107743254();
      func_0x000107743430();
      func_0x000107739508();
      uVar1 = iStack_3e0 == 1;
      if ((bool)uVar1) {
        puVar2 = auStack_420;
        func_0x00010772ea78();
        func_0x000107743044();
      }
      else {
        puVar2 = auStack_420;
        func_0x00010772ea60();
        func_0x0001077428fc();
      }
      func_0x000107742bd0(auStack_420);
      goto LAB_1077396b8;
    }
    puVar2 = (undefined8 *)*unaff_x23;
    func_0x0001077420ac(auStack_420);
    func_0x000107743260();
    if ((bool)in_ZR) {
      func_0x0001077430d0();
      func_0x0001077430c0();
      uVar1 = in_ZR;
    }
    else {
      func_0x000107742cac();
      func_0x0001077428fc();
      uVar1 = in_ZR;
    }
    func_0x000107742ca4();
    func_0x000107742668();
    in_ZR = 1;
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_1077396b8:
  func_0x000107742c5c();
  func_0x000107741c94(uStack_8);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742784();
  func_0x00010772ead4();
  func_0x000107742c5c();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  FUN_10772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107739934; end: 107739947;  */

void FUN_107739934(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107739b68; end: 107739c4b;  */

/* WARNING: Possible PIC construction at 0x000107739be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107739c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107739bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739c28) */
/* WARNING: Removing unreachable block (ram,0x000107739c44) */
/* WARNING: Removing unreachable block (ram,0x000107739be4) */
/* WARNING: Removing unreachable block (ram,0x000107739bf8) */
/* WARNING: Removing unreachable block (ram,0x000107739c00) */

undefined1 * FUN_107739b68(undefined8 *param_1)

{
  undefined8 **ppuVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined4 in_stack_00000068;
  int in_stack_000000e8;
  undefined8 in_stack_00000160;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x000107743c34();
  puVar5 = &stack0x00000160;
  func_0x0001077418a4();
  in_stack_00000068 = 0;
  func_0x00010774215c();
  puVar3 = (undefined1 *)*param_1;
  func_0x000107742138(&stack0x000000a8,puVar3);
  func_0x000107743228();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar2 = unaff_w21 == 1;
  if ((bool)uVar2) {
    unaff_x20 = *(long *)(unaff_x20 + 0x80);
    func_0x0001077421a8();
    func_0x000107743018();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar2) {
      puVar3 = &stack0x000000a8;
      puVar6 = (undefined *)0x107739be4;
      ppuVar1 = (undefined8 **)register0x00000008;
      ppuVar4 = (undefined8 **)puVar5;
    }
    else {
      puVar3 = &stack0x000000a8;
      if (in_stack_000000e8 == 0) {
        return &stack0x000000b0;
      }
      ppuVar1 = &puStack_10;
      ppuVar4 = &puStack_10;
      uStack_8 = 0x107739bf8;
      puVar6 = &SUB_107739c64;
      puStack_10 = puVar5;
      func_0x00010563ab98();
    }
    uVar2 = *(int *)(puVar3 + 0x40) == 1;
    if ((bool)uVar2) {
      return puVar3;
    }
    register0x00000008 = (BADSPACEBASE *)((long)ppuVar1 + -0x10);
    puVar5 = (undefined8 *)((long)ppuVar1 + -0x10);
    *(undefined8 ***)((long)ppuVar1 + -0x10) = ppuVar4;
    *(undefined **)((long)ppuVar1 + -8) = puVar6;
    puVar6 = &SUB_107739c80;
    func_0x00010563ab98();
  }
  else {
    func_0x0001077420d8();
    func_0x000107741a68();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    func_0x000107742174();
    puVar6 = (undefined *)0x107739c28;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 **)((long)register0x00000008 + -0x10) = puVar5;
  *(undefined **)((long)register0x00000008 + -8) = puVar6;
  func_0x000107742a64();
  if (!(bool)uVar2) {
    func_0x000107742644((&PTR_DAT_1109d33e8)[extraout_x8]);
  }
  func_0x00010774352c();
  return puVar3;
}



/* Entry: 107739e64; end: 107739e77;  */

void FUN_107739e64(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773a1ac; end: 10773a1bf;  */

/* WARNING: Possible PIC construction at 0x00010773a2ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a2f0) */
/* WARNING: Removing unreachable block (ram,0x00010773a310) */
/* WARNING: Removing unreachable block (ram,0x00010773a300) */
/* WARNING: Removing unreachable block (ram,0x00010773a31c) */

long * FUN_10773a1ac(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  pfVar4 = *(float **)*param_2;
  lVar5 = ((long *)*param_2)[1];
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741ca8(param_1);
    uVar2 = lVar5 - (long)pfVar4 == 8;
    if ((bool)uVar2) {
      func_0x000107743184(*param_3);
      uVar2 = extraout_x8 == 8;
      unaff_x20 = param_3;
      if (!(bool)uVar2) goto code_r0x00010773a234;
      func_0x00010774320c((double)*pfVar4,(double)pfVar4[1],puVar1 + -0xa8);
      func_0x000107743890();
      func_0x00010774320c(puVar1 + -0x120);
      func_0x0001072e941c(*(undefined8 *)(puVar1 + -0xa8),*(undefined8 *)(puVar1 + -0xa0),
                          *(undefined8 *)(puVar1 + -0x120),*(undefined8 *)(puVar1 + -0x118));
      func_0x0001077423d4();
      unaff_x19 = param_3 + 1;
    }
    else {
code_r0x00010773a234:
      func_0x000107742604();
      func_0x000107742fdc();
      func_0x0001077427b8();
      func_0x000107742e4c();
      unaff_x19 = (long *)((ulong)unaff_x20 | 8);
    }
    func_0x00010726af18();
    func_0x0001077419ec();
    if ((bool)uVar2) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    plVar3 = unaff_x19;
    func_0x000107742904();
    puVar6 = &UNK_10773a270;
    func_0x00010774309c();
    *(undefined1 **)(puVar1 + 0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 200) = puVar6;
    unaff_x29 = puVar1 + 0xc0;
    func_0x0001077418c8();
    func_0x0001077421d0();
    while (uVar2 = unaff_x23 == 2, !(bool)uVar2) {
      func_0x0001077422ac();
      plVar3 = (long *)*plVar3;
      func_0x000107741f94();
      func_0x000107742eac();
      if ((bool)uVar2) {
        func_0x0001077429f0();
        func_0x000107742190();
      }
      else {
        func_0x0001077429e8();
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)uVar2) {
        func_0x000107742c44();
        func_0x000107741a80();
        if ((bool)uVar2) {
          return plVar3;
        }
        ___stack_chk_fail();
        func_0x000107742260();
        func_0x00010727f7f8();
        func_0x000107742c44();
        func_0x000107742904();
        *(undefined8 **)(puVar1 + -0x140) = unaff_x20;
        *(long **)(puVar1 + -0x138) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x130) = unaff_x29;
        *(undefined **)(puVar1 + -0x128) = &DAT_10773a374;
        *plVar3 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar3 + 9);
        FUN_10772d754(plVar3 + 5);
        func_0x0001072c9884(plVar3 + 2);
        return plVar3;
      }
    }
    unaff_x20 = (undefined8 *)(puVar1 + -0xf8);
    func_0x0001077427dc();
    func_0x000107743060();
    pfVar4 = (float *)**(long **)(puVar1 + -0x108);
    lVar5 = (*(long **)(puVar1 + -0x108))[1];
    param_1 = puVar1 + -0x18;
    param_3 = (undefined8 *)(puVar1 + -0x118);
    unaff_x30 = &UNK_10773a2f0;
    puVar1 = puVar1 + -0x120;
  } while( true );
}



/* Entry: 10773a5ec; end: 10773a6ef;  */

undefined8 * FUN_10773a5ec(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined8 *in_stack_00000018;
  
  func_0x00010774309c();
  func_0x0001077418c8();
  func_0x0001077421d0();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077427dc();
      func_0x000107743060();
      param_1 = (undefined8 *)&stack0x00000108;
      func_0x00010773a498(param_1,*in_stack_00000018,in_stack_00000018[1],&stack0x00000008);
      func_0x000107742cbc();
      func_0x000107742dac();
      func_0x00010774326c();
      if ((bool)uVar1) {
        func_0x0001077429f0();
        func_0x000107742b70();
      }
      else {
        func_0x0001077429e8();
        func_0x0001077428fc();
      }
      func_0x0001077425ec();
      goto LAB_10773a69c;
    }
    func_0x0001077422ac();
    param_1 = (undefined8 *)*param_1;
    func_0x000107741f94();
    func_0x000107742eac();
    if ((bool)uVar1) {
      func_0x0001077429f0();
      func_0x000107742190();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_10773a69c:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x000107742c44();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773a9bc; end: 10773a9cf;  */

void FUN_10773a9bc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773adec; end: 10773ae0f;  */

undefined4 FUN_10773adec(undefined4 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107776fc4(param_1,&uStack_11);
  return param_1;
}



/* Entry: 10773b158; end: 10773b1b7;  */

void FUN_10773b158(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  func_0x00010773b1b8();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  func_0x00010773b1f4(param_1);
  return;
}



/* Entry: 10773b3c4; end: 10773b4a3;  */

void FUN_10773b3c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined **ppuVar2;
  undefined8 extraout_x8;
  long *unaff_x20;
  uint uVar3;
  long lVar4;
  long unaff_x25;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107742f4c();
  func_0x000107741930();
  func_0x000107741e70();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == 0) {
      func_0x000107741e58();
      func_0x000107741fd8();
      func_0x00010774333c();
      if ((bool)in_ZR) {
        func_0x0001077431bc();
        func_0x000107742a04();
      }
      else {
        func_0x000107742c64();
        func_0x0001077428fc();
      }
      func_0x00010774270c();
      break;
    }
    func_0x0001077420ac(&stack0x00000028);
    func_0x0001077431d4();
    if ((bool)in_ZR) {
      func_0x000107742e90();
      func_0x000107742e88();
    }
    else {
      func_0x000107742c64();
      func_0x0001077428fc();
    }
    func_0x000107742ac0();
    func_0x000107742688();
  } while ((bool)in_ZR);
  func_0x000107742aa8();
  func_0x000107741a80();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742aa8();
  func_0x000107742904();
  func_0x000107742ea0(extraout_x8);
  puStack_60 = &UNK_10e52b660;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001072962ac(&puStack_60,*(undefined8 *)(param_3 + 8));
  for (uVar3 = 1; (ulong)(uVar3 - 1) < (ulong)unaff_x20[1]; uVar3 = uVar3 + 2) {
    lVar1 = *unaff_x20 + (ulong)(uVar3 - 1) * 0x70;
    if (*(int *)(lVar1 + 0x68) == 3) {
      func_0x00010732393c();
      if ((ulong)unaff_x20[1] <= (ulong)uVar3) break;
      lVar4 = *unaff_x20;
      ppuVar2 = &puStack_60;
      func_0x0001072baf4c(ppuVar2,lVar1);
      func_0x0001072955a4(ppuVar2 + 1,lVar4 + (ulong)uVar3 * 0x70 + 8);
    }
  }
  func_0x00010774339c();
  func_0x000107278fec();
  func_0x000107743374();
  func_0x0001077424ac(9);
  func_0x00010726b264(auStack_70);
  func_0x00010726ae88(&puStack_60);
  return;
}



/* Entry: 10773b798; end: 10773ba13;  */

undefined8 * FUN_10773b798(undefined8 *param_1,undefined1 **param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 auStack_560 [1048];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 *apuStack_90 [7];
  undefined8 uStack_58;
  
  puVar4 = &uStack_140;
  func_0x000107741d18();
  uStack_58 = extraout_x8;
  if (param_2[1] != (undefined1 *)0x0) {
    param_1 = (undefined8 *)*param_2;
    in_ZR = 0;
    if (*(int *)(param_1 + 0xd) == 3) {
      func_0x000107573ddc();
      uStack_110 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      lStack_120 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      puVar1 = (ulong *)(*param_2 + 0x78);
      lVar2 = (long)param_2[1] * 0x70;
      unaff_x23 = (undefined8 *)&UNK_10f417f4d;
      do {
        lVar2 = lVar2 + -0x70;
        if (lVar2 == 0) {
          func_0x000107264c5c(param_1);
          in_ZR = lStack_128 == lStack_120;
          func_0x000107577fd0(apuStack_90);
          func_0x000107277488(&puStack_100,apuStack_90);
          param_2 = &puStack_100;
          func_0x000107742ab8();
          func_0x000107742bf8();
          func_0x000104c2f714(apuStack_90);
          unaff_x24 = 0;
          goto LAB_10773b97c;
        }
        switch((uint)puVar1[0xc]) {
        case 1:
          func_0x0001075780f8(&uStack_140,puVar1);
          break;
        case 2:
          puStack_100 = (undefined1 *)*puVar1;
          func_0x000107578140(&uStack_140,&puStack_100);
          break;
        case 3:
          func_0x000107578184(&uStack_140,puVar1);
          break;
        case 4:
          puStack_100 = (undefined1 *)(ulong)(uint)*puVar1;
          uStack_f0 = (ulong)*(uint *)((long)puVar1 + 4);
          uStack_e0 = (ulong)(uint)puVar1[1];
          uStack_d0 = (ulong)*(uint *)((long)puVar1 + 0xc);
          puStack_f8 = (undefined *)0x0;
          uStack_e8 = 0;
          uStack_d8 = 0;
          uStack_c8 = 0;
          func_0x0001003a91d4(&UNK_10f417f4d);
          func_0x0001003a9204(apuStack_90);
          func_0x00010527b278(&uStack_140,apuStack_90);
          ppuVar3 = apuStack_90;
          goto code_r0x00010773b8e8;
        default:
          func_0x000107578030(&uStack_140,"");
          break;
        case 6:
          func_0x00010775c688(&puStack_100,puVar1);
          func_0x000107578184(&uStack_140,&puStack_100);
          func_0x000104c2f714(&puStack_100);
          break;
        case 7:
          func_0x00010724ef84(&puStack_100,puVar1);
          func_0x00010527b278(&uStack_140,&puStack_100);
          ppuVar3 = &puStack_100;
code_r0x00010773b8e8:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar3);
        }
        puVar1 = puVar1 + 0xe;
      } while( true );
    }
  }
  func_0x00010774238c();
  while( true ) {
    func_0x000107741c94(uStack_58);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    in_ZR = (int)param_2 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch(param_1);
    func_0x00010774238c();
    ___cxa_end_catch();
LAB_10773b97c:
    param_1 = &uStack_140;
    func_0x00010527b690();
  }
  func_0x00010527b690();
  func_0x00010774297c();
  puVar5 = &UNK_10773ba14;
  func_0x0001077438e0();
  puStack_100 = &stack0xfffffffffffffff0;
  puStack_f8 = puVar5;
  func_0x000107741970();
  func_0x00010774222c();
  func_0x000107742764(0);
  func_0x0001077430c8();
  func_0x000107741c60();
  do {
    if (unaff_x24 == 0) {
      func_0x000107743254();
      func_0x000107743430();
      FUN_10773b798();
      func_0x000107743348();
      if ((bool)in_ZR) {
        func_0x000107743220();
        func_0x000107742a04();
      }
      else {
        func_0x000107742cac();
        func_0x0001077428fc();
      }
      func_0x0001077427e8();
      break;
    }
    puVar4 = (undefined8 *)*unaff_x23;
    func_0x0001077420ac(auStack_560);
    func_0x000107743260();
    if ((bool)in_ZR) {
      func_0x0001077430d0();
      func_0x0001077430c0();
    }
    else {
      func_0x000107742cac();
      func_0x0001077428fc();
    }
    func_0x000107742ca4();
    func_0x000107742668();
  } while ((bool)in_ZR);
  func_0x000107742c5c();
  func_0x000107741c94(uStack_148);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742c5c();
    func_0x000107742904();
    *puVar4 = &PTR_DAT_1109d1d80;
    func_0x000104c2f714(puVar4 + 9);
    FUN_10772d754(puVar4 + 5);
    func_0x0001072c9884(puVar4 + 2);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10773bd10; end: 10773bd37;  */

void FUN_10773bd10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107743084();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109d3688;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10773bee0; end: 10773bfbf;  */

void FUN_10773bee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *unaff_x24;
  long unaff_x25;
  
  func_0x000107742f4c();
  func_0x000107741930();
  func_0x000107741e70();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == 0) {
      func_0x000107741e58();
      func_0x000107741fd8();
      func_0x00010774333c();
      if ((bool)in_ZR) {
        func_0x0001077431bc();
        func_0x000107742a04();
      }
      else {
        func_0x000107742c64();
        func_0x0001077428fc();
      }
      func_0x00010774270c();
      break;
    }
    param_1 = *unaff_x24;
    func_0x0001077420ac(&stack0x00000028);
    func_0x0001077431d4();
    if ((bool)in_ZR) {
      func_0x000107742e90();
      func_0x000107742e88();
    }
    else {
      func_0x000107742c64();
      func_0x0001077428fc();
    }
    func_0x000107742ac0();
    func_0x000107742688();
  } while ((bool)in_ZR);
  func_0x000107742aa8();
  func_0x000107741a80();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742aa8();
    func_0x000107742904();
    func_0x0001074d2700(param_1 + 0x108,param_3);
    func_0x000107743b38();
    func_0x000107741da8();
    return;
  }
  return;
}



/* Entry: 10773c254; end: 10773c31f;  */

undefined8 * FUN_10773c254(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w20;
  
  func_0x000107741910();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741e48();
  func_0x000107743728();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x00010774371c();
    func_0x00010773c1b8();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar1) {
      func_0x000107742a0c();
      func_0x000107742a04();
    }
    else {
      func_0x000107742a14();
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773c6b0; end: 10773c6c3;  */

void FUN_10773c6b0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773cb58; end: 10773cb6b;  */

void FUN_10773cb58(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [56];
  undefined1 auStack_198 [56];
  undefined4 auStack_160 [24];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [120];
  undefined1 auStack_80 [64];
  
  func_0x000107741cf4(param_1,param_2,param_3,param_4);
  if (*(long *)(param_2 + 0x100) == 0) {
    auStack_160[0] = 7;
    func_0x0001077765a4(auStack_100,auStack_160,auStack_80);
    func_0x000107742ab8();
    func_0x000107742bf8();
    func_0x000104c3323c(auStack_160);
  }
  else {
    func_0x00010724ef84(auStack_1e8,param_4);
    (**(code **)(**(long **)(param_2 + 0x100) + 0x10))
              (auStack_80,*(long **)(param_2 + 0x100),auStack_1e8,param_2);
    func_0x0001077438f4(auStack_198);
    func_0x00010775f02c(auStack_160,auStack_198);
    func_0x000107572518(auStack_f8,auStack_160);
    func_0x000107570f18(param_3 + 0x40,auStack_100);
    func_0x000107742ca4();
    func_0x00010726b164(auStack_160);
    func_0x000104c2f714(auStack_198);
    lVar1 = *(long *)(param_2 + 0xf0);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x0001073e0a58(lVar1,auStack_80);
    }
    func_0x0001077438f4(auStack_1d0);
    func_0x0001002a82b4(auStack_160,auStack_1e8);
    func_0x00010775ef4c(auStack_100,auStack_1d0,lVar1,auStack_160);
    func_0x000107572518(param_1 + 8,auStack_100);
    func_0x00010726b164(auStack_100);
    func_0x0001001148fc(auStack_160);
    func_0x0001077432dc();
    func_0x00010774358c();
    func_0x000107742c9c();
  }
  func_0x000107741a68();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(auStack_160);
  do {
    func_0x000107742904();
    func_0x000107742c9c();
  } while( true );
}



/* Entry: 10773d054; end: 10773d133;  */

undefined8 * FUN_10773d054(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  int unaff_w22;
  
  func_0x000107743c34();
  func_0x000107741970();
  func_0x000107742dfc();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
  func_0x000107741e48();
  func_0x000107743b0c();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = unaff_w22 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    puVar2 = (undefined8 *)&stack0x000000a8;
    func_0x0001077429d4();
    func_0x00010773cf18();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x0001077433dc();
      puVar3 = (undefined8 *)(unaff_x19 + 8);
      func_0x000107739d70(puVar3,puVar2);
      puVar2 = puVar3;
    }
    else {
      func_0x0001077433d4();
      func_0x0001077428fc();
    }
    func_0x000107742598();
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  FUN_10772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773d398; end: 10773d3ab;  */

void FUN_10773d398(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773d6cc; end: 10773d6d7;  */

/* WARNING: Possible PIC construction at 0x00010773d7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d7dc) */
/* WARNING: Removing unreachable block (ram,0x00010773d7f4) */
/* WARNING: Removing unreachable block (ram,0x00010773d7e8) */
/* WARNING: Removing unreachable block (ram,0x00010773d800) */

long * FUN_10773d6cc(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  do {
    plVar4 = param_1;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x0001077429f8();
    param_1 = plVar4;
    func_0x000107741ca8();
    func_0x0001077432ec();
    plVar5 = param_2;
    if (((ulong)param_1 & 1) == 0) {
code_r0x00010773d714:
      *(undefined1 *)(plVar4 + 1) = 0;
      func_0x000107742a28();
    }
    else {
      param_1 = unaff_x21;
      FUN_1077515e0();
      uVar3 = (uint)param_1;
      uVar1 = uVar3 & 0xffff;
      in_ZR = uVar1 == 0xff;
      plVar5 = param_2;
      if (uVar1 < 0x100) goto code_r0x00010773d714;
      param_1 = (long *)(puVar2 + -0x78);
      plVar5 = (long *)(ulong)(uVar3 & 0xff);
      func_0x000107723c60();
      func_0x000107743710();
      if ((bool)in_ZR) {
        func_0x000107743284();
        func_0x000104c32db4();
      }
      else {
        param_1 = (long *)0x0;
      }
      func_0x000107742458();
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x000107742ba8();
    func_0x000107742904();
    *(undefined8 *)(puVar2 + -0xb0) = unaff_x22;
    *(long **)(puVar2 + -0xa8) = unaff_x21;
    *(undefined8 *)(puVar2 + -0xa0) = unaff_x20;
    *(long **)(puVar2 + -0x98) = plVar4;
    *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x88) = &UNK_10773d774;
    unaff_x29 = puVar2 + -0x90;
    param_2 = plVar5;
    func_0x000107741b04();
    func_0x000107743190();
    func_0x000107742168();
    param_1 = (long *)*param_1;
    func_0x000107742324();
    func_0x000107743228();
    if ((bool)in_ZR) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      param_2 = param_1;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    in_ZR = (int)plVar5 == 1;
    if (!(bool)in_ZR) {
      func_0x0001077420d8();
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x000107741fb4();
      func_0x0001077420d8();
      func_0x000107742904();
      *(undefined8 *)(puVar2 + -0x200) = unaff_x20;
      *(long **)(puVar2 + -0x1f8) = plVar4;
      *(undefined1 **)(puVar2 + -0x1f0) = unaff_x29;
      *(undefined **)(puVar2 + -0x1e8) = &DAT_10773d844;
      *param_1 = (long)&PTR_DAT_1109d1d80;
      func_0x000104c2f714(param_1 + 9);
      FUN_10772d754(param_1 + 5);
      func_0x0001072c9884(param_1 + 2);
      return param_1;
    }
    func_0x0001077421a8();
    func_0x000107742a54();
    unaff_x30 = &UNK_10773d7dc;
    puVar2 = puVar2 + -0x1e0;
    unaff_x19 = plVar4;
    unaff_x21 = plVar5;
  } while( true );
}



/* Entry: 10773da28; end: 10773da2b;  */

undefined8 * FUN_10773da28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773dcac; end: 10773ddaf;  */

void FUN_10773dcac(void)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  long unaff_x24;
  undefined1 auStack_88 [136];
  
  func_0x000107743290();
  func_0x0001077429f8();
  func_0x000107741a34();
  func_0x000107742100();
  do {
    cVar1 = SBORROW8(unaff_x24,2);
    cVar2 = unaff_x24 + -2 < 0;
    uVar3 = unaff_x24 == 2;
    if ((bool)uVar3) {
      func_0x0001077424e0();
      func_0x000107742edc();
      func_0x000107742554();
      func_0x000107742bc8();
      func_0x000107742bd8();
      func_0x000107742c84();
      if ((bool)uVar3) {
        func_0x000107742ce0();
        func_0x000107741b4c();
      }
      else {
        func_0x000107742d60();
        func_0x0001077428fc();
      }
      func_0x000107742220();
      goto LAB_10773dd60;
    }
    func_0x0001077426f4();
    func_0x0001077420ac(auStack_88);
    func_0x000107742d80();
    if ((bool)uVar3) {
      func_0x0001077429f0();
      func_0x000107742184();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar3);
  uVar3 = 0;
LAB_10773dd60:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x0001077429e0();
  func_0x000107742904();
  func_0x000107743024();
  func_0x0001077430d8();
  func_0x0001077424f8(!(bool)uVar3 && cVar2 == cVar1);
  return;
}



/* Entry: 10773dfd8; end: 10773e0a7;  */

undefined8 * FUN_10773dfd8(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  
  func_0x000107741b04();
  func_0x000107743190();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107742324();
  func_0x000107743228();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = param_2 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x000107742a54();
    func_0x00010773df7c();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x000107742e5c();
      func_0x000107741b4c();
    }
    else {
      func_0x000107742e54();
      func_0x0001077428fc();
    }
    func_0x0001077422f0();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e2a4; end: 10773e39b;  */

void FUN_10773e2a4(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long unaff_x24;
  undefined1 auStack_88 [136];
  
  func_0x000107743290();
  func_0x0001077429f8();
  func_0x000107741a34();
  func_0x000107742484();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      func_0x0001077425a4();
      func_0x0001077437c8();
      func_0x000107742750(*param_1);
      func_0x000107742c54();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107742ce0();
        func_0x000107741b4c();
      }
      else {
        func_0x000107742d60();
        func_0x0001077428fc();
      }
      func_0x000107742220();
      goto LAB_10773e358;
    }
    func_0x0001077426f4();
    param_1 = (undefined8 *)*param_1;
    func_0x0001077420ac(auStack_88);
    func_0x000107742d80();
    if ((bool)uVar1) {
      func_0x0001077429f0();
      func_0x000107742184();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_10773e358:
  func_0x000107742c4c();
  func_0x000107741a80();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107741edc();
    func_0x000107742c4c();
    func_0x000107742904();
    func_0x000107742718(extraout_x8,param_1);
    func_0x000107743c28();
    if ((bool)uVar1) {
      func_0x000107742dd4();
      func_0x000104c2fc88();
    }
    func_0x000107742678();
    func_0x00010774323c();
    return;
  }
  return;
}



/* Entry: 10773e63c; end: 10773e6f3;  */

undefined8 * FUN_10773e63c(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 auStack_c8 [136];
  
  func_0x000107741950();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107742380(auStack_c8);
  func_0x000107742cc4();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = param_2 + -1 < 0;
  uVar2 = param_2 == 1;
  if ((bool)uVar2) {
    func_0x0001077429b4();
    func_0x0001077436ac();
    func_0x0001077430d8();
    func_0x0001077428e4(uVar1);
    func_0x000107742d68();
    func_0x000107741e30();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774265c();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e910; end: 10773e923;  */

void FUN_10773e910(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773ec0c; end: 10773ec77;  */

void FUN_10773ec0c(ulong param_1)

{
  undefined1 in_ZR;
  
  func_0x000107742718();
  func_0x000107743c28();
  if ((bool)in_ZR) {
    func_0x000107742dd4();
    func_0x000107742cf0();
    func_0x000107575b20();
    if ((param_1 & 1) == 0) {
      func_0x000107742cf0();
      func_0x000107278530();
    }
  }
  func_0x000107742678();
  func_0x00010774323c();
  return;
}



/* Entry: 10773ef70; end: 10773ef83;  */

void FUN_10773ef70(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773f268; end: 10773f28f;  */

void FUN_10773f268(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000107742878();
  func_0x0001077430d8();
  func_0x0001077424f8(!(bool)in_CY || (bool)in_ZR);
  return;
}



/* Entry: 10773f5e8; end: 10773f5eb;  */

undefined8 * FUN_10773f5e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773f8c4; end: 10773f8cf;  */

/* WARNING: Possible PIC construction at 0x00010773f990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773f994) */
/* WARNING: Removing unreachable block (ram,0x00010773f9ac) */
/* WARNING: Removing unreachable block (ram,0x00010773f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010773f9b8) */

undefined8 *
FUN_10773f8c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar3 = param_4;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    param_4 = uVar3;
    func_0x000107741be8();
    func_0x00010774377c();
    func_0x000107743710();
    if ((bool)in_ZR) {
      func_0x000107743284();
      func_0x000107575b74();
      puVar2 = param_2;
    }
    else {
      param_1 = (undefined8 *)0x0;
      puVar2 = param_2;
    }
    func_0x000107742458();
    func_0x000107741a50();
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x000107742ba8();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -0xa0) = unaff_x22;
    *(undefined8 **)(puVar1 + -0x98) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x90) = uVar3;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x78) = &UNK_10773f92c;
    unaff_x29 = puVar1 + -0x80;
    param_2 = puVar2;
    func_0x000107741b04();
    func_0x000107743190();
    func_0x000107742168();
    param_1 = (undefined8 *)*param_1;
    func_0x000107742324();
    func_0x000107743228();
    if ((bool)in_ZR) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      param_2 = param_1;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    in_ZR = (int)puVar2 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001077421a8();
    func_0x000107742a54();
    unaff_x30 = &UNK_10773f994;
    puVar1 = puVar1 + -0x1d0;
    unaff_x20 = uVar3;
    unaff_x21 = puVar2;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *(undefined8 *)(puVar1 + -0x1f0) = uVar3;
  *(undefined8 *)(puVar1 + -0x1e8) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x1e0) = unaff_x29;
  *(undefined **)(puVar1 + -0x1d8) = &DAT_10773f9fc;
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773fb34; end: 10773fc03;  */

undefined8 * FUN_10773fb34(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  
  func_0x000107741b04();
  func_0x000107743190();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107742324();
  func_0x000107743228();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = param_2 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x000107742a54();
    func_0x00010773faec();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x000107742e5c();
      func_0x000107741b4c();
    }
    else {
      func_0x000107742e54();
      func_0x0001077428fc();
    }
    func_0x0001077422f0();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773fe20; end: 10773fe33;  */

void FUN_10773fe20(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107740378; end: 1077403a3;  */

void FUN_107740378(ulong param_1,long param_2)

{
  if (0x555555555555555 < param_1) {
    func_0x000107742888();
    for (; param_2 != 0; param_2 = param_2 + -1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_1 * 0x18);
  return;
}



/* Entry: 1077407b4; end: 1077407b7;  */

undefined8 * FUN_1077407b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107740a94; end: 107740b7b;  */

/* WARNING: Possible PIC construction at 0x000107740d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107740d14) */
/* WARNING: Removing unreachable block (ram,0x000107740d30) */
/* WARNING: Removing unreachable block (ram,0x000107740d1c) */
/* WARNING: Removing unreachable block (ram,0x000107740d3c) */

undefined8 * FUN_107740a94(void)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long *in_x3;
  undefined8 *extraout_x8;
  ulong extraout_x8_00;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 in_stack_00000100;
  
  func_0x000107742f4c();
  puVar9 = &stack0x00000100;
  func_0x000107741930();
  func_0x000107741e70();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == 0) {
      func_0x000107741e58();
      func_0x000107741fd8();
      func_0x000107743c04();
      if ((bool)in_ZR) {
        puVar4 = (undefined8 *)&stack0x00000028;
        func_0x00010772fe40();
        func_0x000107741b4c();
      }
      else {
        puVar4 = (undefined8 *)&stack0x00000028;
        func_0x00010772fe28();
        func_0x0001077428fc();
      }
      func_0x00010774294c(&stack0x00000028);
      break;
    }
    puVar4 = (undefined8 *)*unaff_x24;
    func_0x0001077420ac(&stack0x00000028);
    func_0x0001077431d4();
    if ((bool)in_ZR) {
      func_0x000107742e90();
      func_0x000107742e88();
    }
    else {
      func_0x000107742c64();
      func_0x0001077428fc();
    }
    func_0x000107742ac0();
    func_0x000107742688();
  } while ((bool)in_ZR);
  func_0x000107742aa8();
  func_0x000107741a80();
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107742698();
  func_0x00010772fe9c();
  func_0x000107742aa8();
  puVar10 = &UNK_107740b7c;
  func_0x000107742904();
  puVar6 = (undefined8 *)*puVar4;
  lVar8 = puVar4[1];
  puVar1 = (undefined1 *)register0x00000008;
  puVar4 = extraout_x8;
  while( true ) {
    puVar5 = puVar4;
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    func_0x000107741ca8();
    uVar3 = lVar8 == 1;
    if (((bool)uVar3) && (uVar3 = *(int *)(puVar6 + 0xd) == 8, (bool)uVar3)) {
      func_0x000107325cc8();
      puVar5 = puVar6;
      func_0x000107743000();
      func_0x000107743110(*puVar5);
      func_0x000107742d78();
      unaff_x21 = ((long *)*puVar6)[1];
      for (lVar8 = *(long *)*puVar6; uVar3 = lVar8 == unaff_x21, !(bool)uVar3; lVar8 = lVar8 + 0x70)
      {
        if (*(int *)(lVar8 + 0x68) != 0) {
          puVar5 = (undefined8 *)(puVar1 + -0xc0);
          func_0x00010758ee8c(puVar5,lVar8);
        }
      }
      func_0x00010774339c();
      func_0x000107277aa4();
      unaff_x20 = puVar1 + -0xa8;
      *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -200);
      *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd0);
      *(undefined8 *)(puVar1 + -0xd0) = 0;
      *(undefined8 *)(puVar1 + -200) = 0;
      *(undefined4 *)(puVar1 + -0x40) = 8;
      func_0x000107742ab8();
      func_0x000107742bf8();
      func_0x000107743144();
      func_0x000107742aa8();
    }
    else {
      func_0x00010774238c();
    }
    func_0x0001077419ec();
    if ((bool)uVar3) break;
    ___stack_chk_fail();
    func_0x000107742aa8();
    func_0x000107742904();
    puVar10 = &UNK_107740c6c;
    func_0x0001077438e0();
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x88) = puVar10;
    puVar9 = (undefined8 *)(puVar1 + -0x90);
    unaff_x22 = puVar1 + -0x4f0;
    puVar2 = (undefined8 *)(puVar1 + -0x4f0);
    func_0x000107741970();
    func_0x000107743b18();
    *(undefined8 *)(puVar1 + -0x460) = 8;
    *(undefined8 *)(puVar1 + -0x468) = 0;
    func_0x000107742ed0();
    FUN_10772e118(puVar1 + -0x470);
    func_0x0001077420c4();
    while ((extraout_x8_00 & 0x1ffffffffffffffe) != 0) {
      puVar4 = (undefined8 *)*in_x3;
      func_0x0001077420ac(puVar1 + -0x4f0);
      uVar3 = *(int *)(puVar1 + -0x478) == 1;
      if ((bool)uVar3) {
        puVar7 = puVar1 + -0x4f0;
        func_0x0001073405dc(puVar1 + -0x4f0);
        puVar4 = (undefined8 *)(puVar1 + -0x470);
        func_0x00010772e3a0(puVar4,puVar7);
      }
      else {
        func_0x000107743a0c();
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)uVar3) {
        func_0x0001077435ec();
        func_0x000107741c94(*(undefined8 *)(puVar1 + -0xd8));
        if ((bool)uVar3) {
          return puVar4;
        }
        ___stack_chk_fail();
        func_0x0001077426a8();
        func_0x00010727f7f8();
        func_0x0001077435ec();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x510) = unaff_x20;
        *(undefined8 **)(puVar1 + -0x508) = puVar5;
        *(undefined8 **)(puVar1 + -0x500) = puVar9;
        *(undefined **)(puVar1 + -0x4f8) = &DAT_107740d90;
        *puVar4 = &PTR_DAT_1109d1d80;
        func_0x000104c2f714(puVar4 + 9);
        FUN_10772d754(puVar4 + 5);
        func_0x0001072c9884(puVar4 + 2);
        return puVar4;
      }
    }
    puVar6 = *(undefined8 **)(puVar1 + -0x470);
    lVar8 = *(long *)(puVar1 + -0x468);
    puVar10 = &UNK_107740d14;
    puVar1 = puVar1 + -0x4f0;
    puVar4 = puVar2;
    unaff_x19 = puVar5;
  }
  return puVar5;
}



/* Entry: 107740e98; end: 107740f1f;  */

void FUN_107740e98(undefined8 param_1,long param_2)

{
  switch(*(undefined4 *)(param_2 + 0x68)) {
  case 0:
    break;
  case 1:
  case 4:
  case 5:
  case 6:
    break;
  case 2:
    break;
  case 3:
  case 7:
    func_0x000104c2d614(param_2 + 8);
    break;
  default:
  }
  func_0x000107742678();
  return;
}



/* Entry: 1077411f0; end: 1077411f3;  */

undefined8 * FUN_1077411f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  FUN_10772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107741508; end: 10774160b;  */

/* WARNING: Possible PIC construction at 0x000107741594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077415a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107741598) */
/* WARNING: Removing unreachable block (ram,0x0001077415ac) */
/* WARNING: Removing unreachable block (ram,0x0001077415b4) */

undefined1 * FUN_107741508(void)

{
  undefined8 **ppuVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 in_stack_00000110;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x000107743460();
  ppuVar5 = (undefined8 **)&stack0x00000110;
  func_0x000107742eb8();
  func_0x000107741ab4();
  func_0x0001077426d0();
  func_0x0001077434f8();
  func_0x0001077421b4();
  do {
    if (unaff_x25 == 0) {
      func_0x0001077426b8();
      func_0x000107742b10();
      func_0x000107743744();
      if (!(bool)in_ZR) {
        puVar4 = &stack0x00000038;
        puVar6 = (undefined *)0x1077415ac;
        goto code_r0x00010774160c;
      }
      puVar4 = &stack0x00000038;
      puVar7 = (undefined *)0x107741598;
      goto code_r0x000107741624;
    }
    puVar3 = (undefined1 *)*unaff_x23;
    func_0x000107742638(&stack0x00000038);
    func_0x000107743750();
    if ((bool)in_ZR) {
      func_0x0001077434b4();
      func_0x00010774316c();
      func_0x0001077432f4();
      func_0x000107742b64();
      uVar2 = in_ZR;
    }
    else {
      func_0x0001077434bc();
      func_0x0001077428fc();
      uVar2 = in_ZR;
    }
    func_0x00010774303c();
    func_0x000107742cd0();
    in_ZR = 1;
  } while ((bool)uVar2);
  func_0x000107743164();
  func_0x000107741a80();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x0001077435dc(&stack0x00000038);
  func_0x000107743164();
  puVar6 = &SUB_10774160c;
  func_0x000107742904();
  unaff_x19 = puVar3;
code_r0x00010774160c:
  if (*(int *)(puVar4 + 0x40) != 0) {
    ppuVar1 = &puStack_10;
    puVar7 = &SUB_107741624;
    puStack_10 = ppuVar5;
    puStack_8 = puVar6;
    func_0x00010563ab98();
    register0x00000008 = (BADSPACEBASE *)&puStack_10;
    ppuVar5 = ppuVar1;
code_r0x000107741624:
    uVar2 = *(int *)(puVar4 + 0x40) == 1;
    if (!(bool)uVar2) {
      *(undefined8 ***)((long)register0x00000008 + -0x10) = ppuVar5;
      *(undefined **)((long)register0x00000008 + -8) = puVar7;
      func_0x00010563ab98();
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x20) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x18) = &UNK_107741640;
      func_0x000107741be8();
      func_0x0001077425b0();
      func_0x00010777540c();
      func_0x00010774257c();
      func_0x000107742bf8();
      func_0x000107741a50();
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        __Unwind_Resume();
        *(undefined1 **)((long)register0x00000008 + -0xd0) =
             (undefined1 *)((long)register0x00000008 + -0xa8);
        *(undefined1 **)((long)register0x00000008 + -200) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0xc0) =
             (undefined1 *)((long)register0x00000008 + -0x20);
        *(undefined **)((long)register0x00000008 + -0xb8) = &UNK_107741684;
        func_0x000107742a64();
        if (!(bool)uVar2) {
          func_0x000107742644((&PTR_DAT_1109d3fb8)[extraout_x8]);
        }
        func_0x00010774352c();
        return puVar4;
      }
      return unaff_x19;
    }
  }
  return puVar4 + 8;
}



/* Entry: 107741754; end: 10774178f;  */

void FUN_107741754(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d3fe8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 107744ea0; end: 1077450c7;  */

void FUN_107744ea0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *unaff_x24;
  long *plVar10;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1 + 3;
  func_0x0001077450c8();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar8 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar8) == 0) {
      unaff_x24 = (long *)(uVar8 & (ulong)plVar7);
    }
    else {
      unaff_x24 = plVar7;
      if (plVar9 <= plVar7) {
        uVar2 = 0;
        if (plVar9 != (long *)0x0) {
          uVar2 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar7 - uVar2 * (long)plVar9);
      }
    }
    plVar10 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_107744f64;
          plVar5 = (long *)plVar10[1];
          if (plVar5 != plVar7) break;
          plVar5 = param_1 + 4;
          func_0x00010728905c(plVar5,plVar10 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar9 & uVar8) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar8);
        }
        else if (plVar9 <= plVar5) {
          uVar2 = 0;
          if (plVar9 != (long *)0x0) {
            uVar2 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar9);
        }
      } while (plVar5 == unaff_x24);
    }
  }
LAB_107744f64:
  plVar10 = param_1 + 2;
  plVar5 = (long *)0x30;
  __Znwm();
  uStack_58 = 0;
  *plVar5 = 0;
  plVar5[1] = (long)plVar7;
  lVar6 = *param_2;
  plVar5[3] = param_2[1];
  plVar5[2] = lVar6;
  plStack_68 = plVar5;
  plStack_60 = plVar10;
  func_0x0001072c9ff4(plVar5 + 4,param_2 + 2);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    bVar3 = (long *)0x2 < plVar9;
    bVar4 = plVar9 == (long *)0x3;
    func_0x00010774658c((long)plVar9 << 1);
    uVar1 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar1 = extraout_x9;
    }
    func_0x0001077450cc(param_1,uVar1);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x24 = plVar7;
      if (plVar9 <= plVar7) {
        uVar8 = 0;
        if (plVar9 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar7 - uVar8 * (long)plVar9);
      }
    }
  }
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + (long)unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar5 = *plVar10;
    *plVar10 = (long)plVar5;
    *(long **)(lVar6 + (long)unaff_x24 * 8) = plVar10;
    if (*plVar5 != 0) {
      plVar7 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar8 = 0;
        if (plVar9 != (long *)0x0) {
          uVar8 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar8 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010774525c(&plStack_68);
  return;
}



/* Entry: 107745360; end: 10774539f;  */

long * FUN_107745360(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010774529c(lVar1 + 0x20);
    }
    func_0x000107746430();
  }
  return param_1;
}



/* Entry: 107745aac; end: 107745ba7;  */

void FUN_107745aac(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  do {
    lVar3 = lVar3 + 0x10;
    uVar1 = param_3;
    func_0x000107745694(param_3,lVar3 + (long)param_1,&uStack_60);
  } while ((uVar1 & 1) != 0);
  puVar4 = (undefined8 *)((long)param_1 + lVar3);
  if (lVar3 == 0x10) {
    do {
      if (param_2 <= puVar4) break;
      func_0x0001077463d8();
    } while ((uVar1 & 1) == 0);
  }
  else {
    do {
      func_0x0001077463d8();
    } while ((int)uVar1 == 0);
  }
  while (puVar4 < param_2) {
    func_0x00010774656c();
    uVar6 = param_2[1];
    uVar5 = *param_2;
    func_0x000107746554();
    param_2[1] = uVar6;
    *param_2 = uVar5;
    do {
      puVar4 = puVar4 + 2;
      uVar1 = param_3;
      func_0x0001077464e4();
    } while ((uVar1 & 1) != 0);
    do {
      param_2 = param_2 + -2;
      uVar1 = param_3;
      func_0x000107745694(param_3,param_2,&uStack_60);
    } while ((uVar1 & 1) == 0);
  }
  puVar2 = puVar4 + -2;
  if (param_1 != puVar2) {
    uVar5 = *puVar2;
    param_1[1] = puVar4[-1];
    *param_1 = uVar5;
  }
  puVar4[-1] = uStack_58;
  *puVar2 = uStack_60;
  return;
}



/* Entry: 107746304; end: 1077465b3;  */

void FUN_107746304(void)

{
  return;
}



/* Entry: 107747184; end: 107747403;  */

/* WARNING: Possible PIC construction at 0x000107747204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774723c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077472ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077472c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077472e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077474a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077474bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077474d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077474f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774752c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774773c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107747790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077477ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077477c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077477e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077477cc) */
/* WARNING: Removing unreachable block (ram,0x0001077477b0) */
/* WARNING: Removing unreachable block (ram,0x000107747794) */
/* WARNING: Removing unreachable block (ram,0x000107747778) */
/* WARNING: Removing unreachable block (ram,0x00010774775c) */
/* WARNING: Removing unreachable block (ram,0x000107747740) */
/* WARNING: Removing unreachable block (ram,0x000107747724) */
/* WARNING: Removing unreachable block (ram,0x000107747708) */
/* WARNING: Removing unreachable block (ram,0x000107747568) */
/* WARNING: Removing unreachable block (ram,0x00010774754c) */
/* WARNING: Removing unreachable block (ram,0x000107747530) */
/* WARNING: Removing unreachable block (ram,0x000107747514) */
/* WARNING: Removing unreachable block (ram,0x0001077474f8) */
/* WARNING: Removing unreachable block (ram,0x0001077474dc) */
/* WARNING: Removing unreachable block (ram,0x0001077474c0) */
/* WARNING: Removing unreachable block (ram,0x0001077474a4) */
/* WARNING: Removing unreachable block (ram,0x000107747488) */
/* WARNING: Removing unreachable block (ram,0x0001077472e8) */
/* WARNING: Removing unreachable block (ram,0x0001077472cc) */
/* WARNING: Removing unreachable block (ram,0x0001077472b0) */
/* WARNING: Removing unreachable block (ram,0x000107747294) */
/* WARNING: Removing unreachable block (ram,0x000107747278) */
/* WARNING: Removing unreachable block (ram,0x00010774725c) */
/* WARNING: Removing unreachable block (ram,0x000107747240) */
/* WARNING: Removing unreachable block (ram,0x000107747224) */
/* WARNING: Removing unreachable block (ram,0x000107747208) */
/* WARNING: Removing unreachable block (ram,0x0001077477e8) */
/* WARNING: Removing unreachable block (ram,0x0001077479bc) */
/* WARNING: Removing unreachable block (ram,0x0001077479f0) */
/* WARNING: Removing unreachable block (ram,0x0001077479f4) */
/* WARNING: Removing unreachable block (ram,0x0001077479f8) */
/* WARNING: Removing unreachable block (ram,0x000107747a04) */
/* WARNING: Removing unreachable block (ram,0x000107747a0c) */

void FUN_107747184(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *******pppppppuVar2;
  undefined *puVar3;
  undefined1 auStack_cf8 [336];
  undefined8 uStack_ba8;
  undefined1 auStack_b70 [904];
  undefined8 uStack_7e8;
  undefined8 ******ppppppuStack_7b0;
  undefined *puStack_7a8;
  undefined1 auStack_7a0 [904];
  undefined8 uStack_418;
  undefined8 ******ppppppuStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [904];
  undefined8 uStack_48;
  
  func_0x000107747a20();
  func_0x000107747b38();
  func_0x000107747a74();
  func_0x000107747b28();
  func_0x000107747b08();
  func_0x000107747d48();
  func_0x000107747b18();
  func_0x000107747ad8();
  func_0x000107747d54();
  func_0x000107747af8();
  func_0x000107747aa8();
  func_0x000107747a60();
  do {
    func_0x000107747d00();
    func_0x000107747d3c();
  } while (!(bool)in_ZR);
  func_0x000107747c60();
  func_0x000107747c58();
  func_0x000107747c74();
  func_0x000107747c34();
  func_0x000107747ce0();
  func_0x000107747cf0();
  pppppppuVar2 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bool)in_ZR) {
    func_0x000107747ae8();
    func_0x000107747b98();
    puVar3 = (undefined *)0x107747208;
    puVar1 = auStack_3d0;
  }
  else {
    func_0x000107747da0();
    if ((bool)in_ZR) {
      func_0x000107747ac8();
      func_0x000107747ba8();
      puVar3 = (undefined *)0x107747224;
      puVar1 = auStack_3d0;
    }
    else {
      func_0x000107747d94();
      if ((bool)in_ZR) {
        func_0x000107747ab8();
        func_0x000107747b68();
        puVar3 = (undefined *)0x107747240;
        puVar1 = auStack_3d0;
      }
      else {
        func_0x000107747d88();
        if ((bool)in_ZR) {
          func_0x000107747a98();
          func_0x000107747b48();
          puVar3 = (undefined *)0x10774725c;
          puVar1 = auStack_3d0;
        }
        else {
          func_0x000107747df4();
          if ((bool)in_ZR) {
            func_0x000107747c24();
            func_0x000107747bb8();
            puVar3 = (undefined *)0x107747278;
            puVar1 = auStack_3d0;
          }
          else {
            func_0x000107747de8();
            if ((bool)in_ZR) {
              func_0x000107747c08();
              func_0x000107747b78();
              puVar3 = (undefined *)0x107747294;
              puVar1 = auStack_3d0;
            }
            else {
              func_0x000107747ddc();
              if ((bool)in_ZR) {
                func_0x000107747bf8();
                func_0x000107747b58();
                puVar3 = (undefined *)0x1077472b0;
                puVar1 = auStack_3d0;
              }
              else {
                func_0x000107747dd0();
                if ((bool)in_ZR) {
                  func_0x000107747be8();
                  func_0x000107747bc8();
                  puVar3 = (undefined *)0x1077472cc;
                  puVar1 = auStack_3d0;
                }
                else {
                  func_0x000107747dc4();
                  if ((bool)in_ZR) {
                    func_0x000107747bd8();
                    func_0x000107747b88();
                    puVar3 = (undefined *)0x1077472e8;
                    puVar1 = auStack_3d0;
                  }
                  else {
                    func_0x000107747a3c(uStack_48);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000107747c44();
                    func_0x000107747c34();
                    func_0x000107747ce8();
                    func_0x000107747ca8();
                    puStack_3d8 = &UNK_107747404;
                    ppppppuStack_3e0 = (undefined8 ******)&stack0xfffffffffffffff0;
                    func_0x000107747a20();
                    func_0x000107747b38();
                    func_0x000107747a74();
                    func_0x000107747b28();
                    func_0x000107747b08();
                    func_0x000107747d48();
                    func_0x000107747b18();
                    func_0x000107747ad8();
                    func_0x000107747d54();
                    func_0x000107747af8();
                    func_0x000107747aa8();
                    func_0x000107747a60();
                    do {
                      func_0x000107747d00();
                      func_0x000107747d3c();
                    } while (!(bool)in_ZR);
                    func_0x000107747c60();
                    func_0x000107747c58();
                    func_0x000107747c74();
                    func_0x000107747c34();
                    func_0x000107747ce0();
                    func_0x000107747cf0();
                    pppppppuVar2 = &ppppppuStack_3e0;
                    if ((bool)in_ZR) {
                      func_0x000107747ae8();
                      func_0x000107747b98();
                      puVar3 = &UNK_107747488;
                      puVar1 = auStack_7a0;
                    }
                    else {
                      func_0x000107747da0();
                      if ((bool)in_ZR) {
                        func_0x000107747ac8();
                        func_0x000107747ba8();
                        puVar3 = &UNK_1077474a4;
                        puVar1 = auStack_7a0;
                      }
                      else {
                        func_0x000107747d94();
                        if ((bool)in_ZR) {
                          func_0x000107747ab8();
                          func_0x000107747b68();
                          puVar3 = &UNK_1077474c0;
                          puVar1 = auStack_7a0;
                        }
                        else {
                          func_0x000107747d88();
                          if ((bool)in_ZR) {
                            func_0x000107747a98();
                            func_0x000107747b48();
                            puVar3 = &UNK_1077474dc;
                            puVar1 = auStack_7a0;
                          }
                          else {
                            func_0x000107747df4();
                            if ((bool)in_ZR) {
                              func_0x000107747c24();
                              func_0x000107747bb8();
                              puVar3 = &UNK_1077474f8;
                              puVar1 = auStack_7a0;
                            }
                            else {
                              func_0x000107747de8();
                              if ((bool)in_ZR) {
                                func_0x000107747c08();
                                func_0x000107747b78();
                                puVar3 = &UNK_107747514;
                                puVar1 = auStack_7a0;
                              }
                              else {
                                func_0x000107747ddc();
                                if ((bool)in_ZR) {
                                  func_0x000107747bf8();
                                  func_0x000107747b58();
                                  puVar3 = &UNK_107747530;
                                  puVar1 = auStack_7a0;
                                }
                                else {
                                  func_0x000107747dd0();
                                  if ((bool)in_ZR) {
                                    func_0x000107747be8();
                                    func_0x000107747bc8();
                                    puVar3 = &UNK_10774754c;
                                    puVar1 = auStack_7a0;
                                  }
                                  else {
                                    func_0x000107747dc4();
                                    if ((bool)in_ZR) {
                                      func_0x000107747bd8();
                                      func_0x000107747b88();
                                      puVar3 = &UNK_107747568;
                                      puVar1 = auStack_7a0;
                                    }
                                    else {
                                      func_0x000107747a3c(uStack_418);
                                      if ((bool)in_ZR) {
                                        return;
                                      }
                                      ___stack_chk_fail();
                                      func_0x000107747c44();
                                      func_0x000107747c34();
                                      func_0x000107747ce8();
                                      func_0x000107747ca8();
                                      puStack_7a8 = &UNK_107747684;
                                      pppppppuVar2 = &ppppppuStack_7b0;
                                      puVar1 = auStack_b70;
                                      ppppppuStack_7b0 = &ppppppuStack_3e0;
                                      func_0x000107747a20();
                                      func_0x000107747b38();
                                      func_0x000107747a74();
                                      func_0x000107747b28();
                                      func_0x000107747b08();
                                      func_0x000107747d48();
                                      func_0x000107747b18();
                                      func_0x000107747ad8();
                                      func_0x000107747d54();
                                      func_0x000107747af8();
                                      func_0x000107747aa8();
                                      func_0x000107747a60();
                                      do {
                                        func_0x000107747d00();
                                        func_0x000107747d3c();
                                      } while (!(bool)in_ZR);
                                      func_0x000107747c60();
                                      func_0x000107747c58();
                                      func_0x000107747c74();
                                      func_0x000107747c34();
                                      func_0x000107747ce0();
                                      func_0x000107747cf0();
                                      if ((bool)in_ZR) {
                                        func_0x000107747ae8();
                                        func_0x000107747b98();
                                        puVar3 = &UNK_107747708;
                                        puVar1 = auStack_b70;
                                      }
                                      else {
                                        func_0x000107747da0();
                                        if ((bool)in_ZR) {
                                          func_0x000107747ac8();
                                          func_0x000107747ba8();
                                          puVar3 = &UNK_107747724;
                                          puVar1 = auStack_b70;
                                        }
                                        else {
                                          func_0x000107747d94();
                                          if ((bool)in_ZR) {
                                            func_0x000107747ab8();
                                            func_0x000107747b68();
                                            puVar3 = &UNK_107747740;
                                            puVar1 = auStack_b70;
                                          }
                                          else {
                                            func_0x000107747d88();
                                            if ((bool)in_ZR) {
                                              func_0x000107747a98();
                                              func_0x000107747b48();
                                              puVar3 = &UNK_10774775c;
                                              puVar1 = auStack_b70;
                                            }
                                            else {
                                              func_0x000107747df4();
                                              if ((bool)in_ZR) {
                                                func_0x000107747c24();
                                                func_0x000107747bb8();
                                                puVar3 = &UNK_107747778;
                                                puVar1 = auStack_b70;
                                              }
                                              else {
                                                func_0x000107747de8();
                                                if ((bool)in_ZR) {
                                                  func_0x000107747c08();
                                                  func_0x000107747b78();
                                                  puVar3 = &UNK_107747794;
                                                  puVar1 = auStack_b70;
                                                }
                                                else {
                                                  func_0x000107747ddc();
                                                  if ((bool)in_ZR) {
                                                    func_0x000107747bf8();
                                                    func_0x000107747b58();
                                                    puVar3 = &UNK_1077477b0;
                                                    puVar1 = auStack_b70;
                                                  }
                                                  else {
                                                    func_0x000107747dd0();
                                                    if ((bool)in_ZR) {
                                                      func_0x000107747be8();
                                                      func_0x000107747bc8();
                                                      puVar3 = &UNK_1077477cc;
                                                      puVar1 = auStack_b70;
                                                    }
                                                    else {
                                                      func_0x000107747dc4();
                                                      if (!(bool)in_ZR) {
                                                        func_0x000107747a3c(uStack_7e8);
                                                        if ((bool)in_ZR) {
                                                          return;
                                                        }
                                                        ___stack_chk_fail();
                                                        func_0x000107747c44();
                                                        func_0x000107747c34();
                                                        func_0x000107747ce8();
                                                        func_0x000107747ca8();
                                                        func_0x000107747a88();
                                                        uStack_ba8 = extraout_x8_00;
                                                        func_0x000107747c7c();
                                                        func_0x000107747d60();
                                                        func_0x0001072964ec();
                                                        func_0x000107747cb0();
                                                        func_0x000107747d08();
                                                        func_0x000107747d10(extraout_x8,auStack_cf8)
                                                        ;
                                                        do {
                                                          func_0x000107747d34();
                                                          func_0x000107747d6c();
                                                        } while (!(bool)in_ZR);
                                                        func_0x000107747c60();
                                                        func_0x000107747c58();
                                                        func_0x000107747a3c(uStack_ba8);
                                                        if (!(bool)in_ZR) {
                                                          ___stack_chk_fail();
                                                          do {
                                                            func_0x00010729651c();
                                                            func_0x000107747dac();
                                                          } while( true );
                                                        }
                                                        return;
                                                      }
                                                      func_0x000107747bd8();
                                                      func_0x000107747b88();
                                                      puVar3 = &UNK_1077477e8;
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
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar2;
  *(undefined **)(puVar1 + -8) = puVar3;
  *(undefined8 *)(puVar1 + -0x18) = 0x1f8;
  func_0x000107278594(puVar1 + 0x78,puVar1 + -0x18,puVar1 + 0xe8);
  return;
}



/* Entry: 107748244; end: 107748257;  */

void FUN_107748244(void)

{
  func_0x0001077481e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107749c80; end: 107749cd3;  */

undefined8 FUN_107749c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001073f26dc(&uStack_28,param_1);
  func_0x00010756af98(&uStack_28,param_2);
  func_0x00010756af98(&uStack_28,param_3);
  return uStack_28;
}



/* Entry: 10774a1c8; end: 10774a1f3;  */

long FUN_10774a1c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10774a688; end: 10774a693;  */

void FUN_10774a688(long param_1,undefined8 param_2)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_2;
    func_0x0001073ebd20(&lStack_20,param_1);
  }
  return;
}



/* Entry: 10774aae4; end: 10774aec3;  */

/* WARNING: Possible PIC construction at 0x00010774af34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774b06c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774af38) */
/* WARNING: Removing unreachable block (ram,0x00010774b070) */

void FUN_10774aae4(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 **param_4,
                  undefined8 **param_5)

{
  ulong uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  int iVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_250 [8];
  undefined8 *apuStack_248 [3];
  undefined1 auStack_230 [24];
  undefined8 *puStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  uint auStack_200 [2];
  undefined8 *apuStack_1f8 [14];
  byte bStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  char cStack_f8;
  undefined8 *apuStack_80 [4];
  char cStack_60;
  undefined8 uStack_58;
  
  puVar13 = &stack0xfffffffffffffff0;
  plVar5 = param_3;
  func_0x00010774e8bc();
  ppuVar12 = (undefined8 **)(plVar5 + 1);
  ppuVar6 = ppuVar12;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar5 + 0x18))();
  if ((int)ppuVar6 == 0) {
LAB_10774abd8:
    func_0x00010002b838(apuStack_248,&UNK_10f425389);
    ppuVar11 = apuStack_248;
    func_0x00010774ec3c();
    ppuVar6 = apuStack_248;
LAB_10774ac4c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar6);
    auStack_200[0] = auStack_200[0] & 0xffffff00;
    bStack_188 = 0;
LAB_10774ac58:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    func_0x00010774ec18();
    in_ZR = ppuVar6 == (undefined8 **)0x2;
    if (!(bool)in_ZR) {
      func_0x00010774ec18();
      func_0x000107878fec(&puStack_218,(long)ppuVar6 + -1);
      func_0x0001004c3cd0(&puStack_170,&UNK_10f425351,&puStack_218);
      func_0x00010048a6c8(apuStack_80,&puStack_170,&UNK_10f417b93);
      ppuVar11 = apuStack_80;
      func_0x00010774ec3c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_170);
      ppuVar6 = &puStack_218;
      goto LAB_10774ac4c;
    }
    (**(code **)(*param_3 + 0x28))(&lStack_180,ppuVar12,1);
    iVar4 = (int)auStack_178;
    (**(code **)(lStack_180 + 0x30))();
    if (iVar4 == 0) {
LAB_10774abd4:
      func_0x00010774edec();
      goto LAB_10774abd8;
    }
    puStack_218 = (undefined8 *)0x0;
    uStack_210 = 0;
    uStack_208 = 0;
    (**(code **)(lStack_180 + 0x78))(&puStack_170,auStack_178,&puStack_218);
    in_ZR = cStack_f8 == '\x01';
    if (!(bool)in_ZR) {
LAB_10774abb0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_230,&puStack_218);
      func_0x00010774ec3c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
      func_0x00010774ed40();
      func_0x00010774edf4();
      goto LAB_10774abd4;
    }
    in_ZR = uStack_208._7_1_ == 0;
    uVar1 = uStack_210;
    if (-1 < uStack_208) {
      uVar1 = (ulong)uStack_208._7_1_;
    }
    if (uVar1 != 0) goto LAB_10774abb0;
    ppuVar11 = &puStack_170;
    func_0x000107325ef8(auStack_200);
    func_0x00010774ed40();
    func_0x00010774edf4();
    func_0x00010774edec();
    if ((bStack_188 & 1) == 0) goto LAB_10774ac58;
    if (auStack_200[0] != 2) {
      if (auStack_200[0] == 1) {
        ppuVar11 = apuStack_1f8;
        func_0x0001072692d4(&puStack_170);
        func_0x00010774e9ec();
        func_0x00010774ebe0();
        in_ZR = false;
        if (cStack_60 == '\x01') {
          in_ZR = *(char *)((long)param_4 + 0x51) == '\x01';
          if (!(bool)in_ZR) {
            func_0x00010774e9a8();
            func_0x00010774e09c();
            goto LAB_10774adc4;
          }
          func_0x00010774e974();
          func_0x00010774eb28();
          goto LAB_10774ada4;
        }
        goto LAB_10774ad40;
      }
      ppuVar6 = (undefined8 **)apuStack_1f8[0][1];
      for (ppuVar12 = (undefined8 **)*apuStack_1f8[0]; in_ZR = ppuVar12 == ppuVar6, !(bool)in_ZR;
          ppuVar12 = ppuVar12 + 0xe) {
        ppuVar11 = ppuVar12;
        func_0x0001072692d4(&puStack_170);
        func_0x00010774e9ec();
        func_0x00010774ebe0();
        if (cStack_60 == '\x01') {
          in_ZR = *(char *)((long)param_4 + 0x51) == '\x01';
          if (!(bool)in_ZR) {
            func_0x00010774e9a8();
            func_0x00010774e09c();
            goto LAB_10774adc4;
          }
          func_0x00010774e974();
          func_0x00010774eb28();
          goto LAB_10774ada4;
        }
        func_0x00010774ec68();
      }
      goto LAB_10774ac58;
    }
    ppuVar11 = apuStack_1f8;
    func_0x00010774dd9c(&puStack_170);
    func_0x00010774e9ec();
    func_0x00010774ebe0();
    in_ZR = cStack_60 == '\x01';
    if (!(bool)in_ZR) {
LAB_10774ad40:
      func_0x00010774ec68();
      goto LAB_10774ac58;
    }
    in_ZR = *(char *)((long)param_4 + 0x51) == '\x01';
    if ((bool)in_ZR) {
      func_0x00010774e974();
      func_0x00010774eb28();
LAB_10774ada4:
      func_0x00010774e070(&puStack_170);
    }
    else {
      func_0x00010774e9a8();
      func_0x00010774e09c();
LAB_10774adc4:
      param_2 = puStack_170;
      param_1[1] = uStack_168;
      *param_1 = puStack_170;
      puStack_170 = (undefined8 *)0x0;
      uStack_168 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      func_0x00010774e18c(&puStack_170);
    }
    func_0x00010774ec68();
  }
  puVar7 = auStack_200;
  func_0x000107362064();
  func_0x00010774e8a8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010774e070(&puStack_170);
  func_0x00010774ec68();
  func_0x000107362064(auStack_200);
  puVar14 = &UNK_10774aec4;
  func_0x00010774e9a0();
  puVar3 = auStack_250;
  while( true ) {
    *(undefined8 ***)(puVar3 + -0x30) = ppuVar12;
    *(undefined8 ***)(puVar3 + -0x28) = param_5;
    *(undefined8 ***)(puVar3 + -0x20) = param_4;
    *(uint **)(puVar3 + -0x18) = puVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    puVar13 = puVar3 + -0x10;
    func_0x00010774eb88();
    func_0x00010774e8bc();
    *(undefined8 *)(puVar3 + -0x38) = extraout_x8_00;
    uVar2 = *(ushort *)((long)ppuVar11 + 0x16);
    if ((uVar2 >> 4 & 1) != 0) break;
    if ((uVar2 >> 3 & 1) != 0) {
      in_ZR = uVar2 == 10;
      *puVar7 = 6;
      *(undefined1 *)(puVar7 + 2) = in_ZR;
      goto code_r0x00010774b004;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      in_ZR = (uVar2 & 0x1000) == 0;
      ppuVar12 = (undefined8 **)param_4[1];
      if (!(bool)in_ZR) {
        ppuVar12 = param_4;
      }
      func_0x00010002b838(puVar3 + -0x90,ppuVar12);
      func_0x000107268798(puVar7,puVar3 + -0x90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + -0x90);
      goto code_r0x00010774b004;
    }
    in_ZR = uVar2 == 3;
    if ((bool)in_ZR) {
      *(undefined **)(puVar3 + -0xc0) = &UNK_10e52b660;
      *(undefined8 *)(puVar3 + -0xb8) = 0;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      *(undefined8 *)(puVar3 + -0xa8) = 0;
      puVar9 = param_4[1];
      ppuVar11 = (undefined8 **)(puVar9 + 3);
      param_5 = (undefined8 **)((ulong)*(uint *)param_4 * 0x30);
      if ((ulong)*(uint *)param_4 * 3 == 0) {
        func_0x000104c33260(puVar3 + -0xf0,puVar3 + -0xc0);
        *puVar7 = 1;
        uVar15 = *(undefined8 *)(puVar3 + -0xf0);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar3 + -0xe8);
        *(undefined8 *)(puVar7 + 2) = uVar15;
        *(undefined8 *)(puVar3 + -0xf0) = 0;
        *(undefined8 *)(puVar3 + -0xe8) = 0;
        func_0x00010774ed64();
        func_0x000104c33548(puVar3 + -0xc0);
        goto code_r0x00010774b004;
      }
      if ((*(ushort *)((long)puVar9 + 0x16) >> 0xc & 1) == 0) {
        puVar9 = (undefined8 *)puVar9[1];
      }
      *(undefined8 **)(puVar3 + -200) = puVar9;
      puVar14 = &UNK_10774b070;
      puVar3 = puVar3 + -0xf0;
      param_4 = ppuVar11;
    }
    else {
      in_ZR = uVar2 == 4;
      if (!(bool)in_ZR) {
        *puVar7 = 7;
        goto code_r0x00010774b004;
      }
      *(undefined8 *)(puVar3 + -0xc0) = 0;
      *(undefined8 *)(puVar3 + -0xb8) = 0;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      func_0x0001072ac134(puVar3 + -0xc0,*(uint *)param_4);
      ppuVar11 = (undefined8 **)param_4[1];
      if ((ulong)*(uint *)param_4 * 3 == 0) {
        func_0x000107327958(puVar3 + -0xa0,puVar3 + -0xc0);
        *puVar7 = 0;
        uVar15 = *(undefined8 *)(puVar3 + -0xa0);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar3 + -0x98);
        *(undefined8 *)(puVar7 + 2) = uVar15;
        *(undefined8 *)(puVar3 + -0xa0) = 0;
        *(undefined8 *)(puVar3 + -0x98) = 0;
        func_0x000104c33108(puVar3 + -0xa0);
        func_0x000107269124(puVar3 + -0xc0);
        goto code_r0x00010774b004;
      }
      puVar14 = &UNK_10774af38;
      puVar3 = puVar3 + -0xf0;
      param_4 = (undefined8 **)((ulong)*(uint *)param_4 * 0x18);
      param_5 = ppuVar11;
    }
  }
  if ((uVar2 >> 7 & 1) == 0) {
    if ((uVar2 >> 8 & 1) == 0) {
      func_0x0001073274d0(param_4);
      *puVar7 = 3;
      *(undefined8 **)(puVar7 + 2) = param_2;
      goto code_r0x00010774b004;
    }
    puVar9 = *param_4;
    uVar10 = 5;
  }
  else {
    puVar9 = *param_4;
    uVar10 = 4;
  }
  *puVar7 = uVar10;
  *(undefined8 **)(puVar7 + 2) = puVar9;
code_r0x00010774b004:
  func_0x00010774e8a8(*(undefined8 *)(puVar3 + -0x38));
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar8 = puVar3 + -0xc0;
    func_0x000107269124();
    func_0x00010774e9a0();
    *(undefined1 **)(puVar3 + -0x100) = puVar13;
    *(undefined **)(puVar3 + -0xf8) = &UNK_10774b118;
    *(undefined1 **)(puVar3 + -0x108) = puVar8;
    func_0x00010774e1b4(puVar3 + -0x108);
    return;
  }
  return;
}



/* Entry: 10774b3f4; end: 10774b453;  */

int * FUN_10774b3f4(int *param_1,int *param_2)

{
  if (*param_2 == *param_1) {
    func_0x00010774edfc();
    func_0x00010774e40c();
    return param_1;
  }
  return (int *)0x0;
}



/* Entry: 10774ba6c; end: 10774bdcf;  */

void FUN_10774ba6c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  func_0x00010774eb88();
  func_0x00010774c0d0();
  if (param_1 != 0) goto LAB_10774bc70;
  if ((ulong)unaff_x19[4] < 0x66) {
    puVar14 = (undefined8 *)unaff_x19[1];
    puVar13 = (undefined8 *)unaff_x19[2];
    puVar10 = (undefined8 *)*unaff_x19;
    uVar11 = (long)puVar13 - (long)puVar14;
    plVar12 = unaff_x19 + 3;
    puVar9 = (undefined8 *)*plVar12;
    if ((ulong)((long)puVar9 - (long)puVar10) <= uVar11) {
      puVar4 = (undefined8 *)((long)puVar9 - (long)puVar10 >> 2);
      if (puVar9 == puVar10) {
        puVar4 = (undefined8 *)0x1;
      }
      plStack_98 = plVar12;
      func_0x00010774c214();
      puVar9 = (undefined8 *)((long)puVar4 + uVar11);
      puVar10 = puVar4 + (long)param_2;
      uVar6 = 0xff0;
      puVar3 = param_2;
      puStack_b8 = puVar4;
      puStack_b0 = puVar9;
      puStack_a8 = puVar9;
      puStack_a0 = puVar10;
      __Znwm();
      plStack_c8 = unaff_x19 + 5;
      uVar8 = (long)param_2 * 8;
      uStack_c0 = 0x66;
      param_2 = puVar3;
      puVar5 = puVar9;
      if (uVar11 == uVar8) {
        if (puVar13 == puVar14) {
          puVar14 = (undefined8 *)0x1;
          uStack_d0 = uVar6;
          plStack_70 = plVar12;
          func_0x00010774c214();
          puStack_78 = puVar14 + (long)puVar3;
          param_2 = puVar9;
          puStack_90 = puVar14;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          func_0x00010774c1ec(&puStack_90,puVar9,puVar9);
          puVar3 = puStack_78;
          puVar5 = puStack_80;
          puVar13 = puStack_88;
          puVar14 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar4;
          puStack_88 = puVar9;
          puStack_80 = puVar9;
          puStack_78 = puVar10;
          func_0x00010774eda0();
          puVar4 = puVar14;
          puVar9 = puVar13;
          puVar10 = puVar3;
        }
        else {
          puVar9 = puVar9 + (((long)puVar9 - (long)puVar4 >> 3) + 1) / -2;
          puVar5 = puVar9;
          puStack_b0 = puVar9;
        }
      }
      puVar14 = puVar5 + 1;
      *puVar5 = uVar6;
      uStack_d0 = 0;
      puVar13 = (undefined8 *)unaff_x19[2];
      puStack_a8 = puVar14;
      while (puVar5 = (undefined8 *)unaff_x19[1], puVar13 != puVar5) {
        puVar5 = puVar9;
        if (puVar9 == puVar4) {
          if (puVar14 < puVar10) {
            lVar7 = (long)puVar14 - (long)puVar4;
            puVar3 = puVar14 + (((long)puVar10 - (long)puVar14 >> 3) + 1) / 2;
            puVar5 = (undefined8 *)((long)puVar3 - ((long)puVar14 - (long)puVar4));
            puVar14 = puVar3;
            if (lVar7 != 0) {
              _memmove(puVar5,puVar9,lVar7);
              param_2 = puVar9;
            }
          }
          else {
            lVar7 = (long)puVar10 - (long)puVar4 >> 2;
            if ((long)puVar10 - (long)puVar4 == 0) {
              lVar7 = 1;
            }
            plStack_70 = plVar12;
            func_0x00010774c214(lVar7);
            func_0x00010774ed04(lVar7 * 2 + 6);
            param_2 = puVar4;
            func_0x00010774c1ec(&puStack_90,puVar4,puVar14);
            puVar2 = puStack_78;
            puVar1 = puStack_80;
            puVar5 = puStack_88;
            puVar3 = puStack_90;
            puStack_90 = puVar4;
            puStack_88 = puVar9;
            puStack_80 = puVar14;
            puStack_78 = puVar10;
            func_0x00010774eda0();
            puVar4 = puVar3;
            puVar14 = puVar1;
            puVar10 = puVar2;
          }
        }
        puVar13 = puVar13 + -1;
        puVar9 = puVar5 + -1;
        *puVar9 = *puVar13;
      }
      puStack_b8 = (undefined8 *)*unaff_x19;
      *unaff_x19 = (long)puVar4;
      unaff_x19[1] = (long)puVar9;
      puStack_a0 = (undefined8 *)unaff_x19[3];
      puStack_a8 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = (long)puVar14;
      unaff_x19[3] = (long)puVar10;
      puStack_b0 = puVar5;
      func_0x00010774c248(&uStack_d0);
      func_0x00010774c274(&puStack_b8);
      goto LAB_10774bc70;
    }
    uVar6 = 0xff0;
    __Znwm();
    if (puVar9 != puVar13) {
      *puVar13 = uVar6;
      unaff_x19[2] = (long)(puVar13 + 1);
      goto LAB_10774bc70;
    }
    if (puVar14 == puVar10) {
      lVar7 = (long)puVar9 - (long)puVar14 >> 2;
      if (puVar13 == puVar14) {
        lVar7 = 1;
      }
      plStack_70 = plVar12;
      func_0x00010774c214();
      func_0x00010774ed04(lVar7 * 2 + 6);
      param_2 = (undefined8 *)unaff_x19[1];
      func_0x00010774c1ec(&puStack_90,param_2,unaff_x19[2]);
      puVar13 = (undefined8 *)unaff_x19[1];
      puVar14 = (undefined8 *)*unaff_x19;
      puVar10 = (undefined8 *)unaff_x19[3];
      puVar9 = (undefined8 *)unaff_x19[2];
      unaff_x19[1] = (long)puStack_88;
      *unaff_x19 = (long)puStack_90;
      unaff_x19[3] = (long)puStack_78;
      unaff_x19[2] = (long)puStack_80;
      puStack_90 = puVar14;
      puStack_88 = puVar13;
      puStack_80 = puVar9;
      puStack_78 = puVar10;
      func_0x00010774eda0();
      puVar14 = (undefined8 *)unaff_x19[1];
    }
    puVar14[-1] = uVar6;
    unaff_x19[1] = (long)puVar14;
    func_0x00010774eb7c();
  }
  else {
    unaff_x19[4] = unaff_x19[4] - 0x66;
    param_2 = *(undefined8 **)unaff_x19[1];
    unaff_x19[1] = (long)((long *)unaff_x19[1] + 1);
  }
  func_0x00010774c100();
LAB_10774bc70:
  func_0x00010774c0a4();
  uVar6 = unaff_x20[4];
  uVar17 = *unaff_x20;
  uVar16 = unaff_x20[3];
  uVar15 = unaff_x20[2];
  param_2[1] = unaff_x20[1];
  *param_2 = uVar17;
  param_2[3] = uVar16;
  param_2[2] = uVar15;
  param_2[4] = uVar6;
  unaff_x19[5] = unaff_x19[5] + 1;
  func_0x00010774c07c();
  func_0x00010774ebe8();
  func_0x00010774eb0c();
  func_0x00010774c2fc();
  return;
}



/* Entry: 10774c2b4; end: 10774c2fb;  */

long FUN_10774c2b4(long *param_1,long param_2,long *param_3,long param_4)

{
  if (param_2 == param_4) {
    return 0;
  }
  return (param_2 - *param_1) / 0x28 + ((long)param_1 - (long)param_3 >> 3) * 0x66 +
         (param_4 - *param_3) / -0x28;
}



/* Entry: 10774c5e8; end: 10774c687;  */

long * FUN_10774c5e8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[5] = 0;
  puVar3 = (undefined8 *)param_1[1];
  while( true ) {
    puVar4 = (undefined8 *)param_1[2];
    uVar1 = (long)puVar4 - (long)puVar3 >> 3;
    if (uVar1 < 3) break;
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
  }
  if (uVar1 == 1) {
    lVar2 = 0x33;
  }
  else {
    if (uVar1 != 2) goto LAB_10774c65c;
    lVar2 = 0x66;
  }
  param_1[4] = lVar2;
LAB_10774c65c:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  func_0x00010774c47c(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10774cea0; end: 10774cf07;  */

undefined8 FUN_10774cea0(void)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010774ebd4();
  uStack_48 = 0x7ff0000000000000;
  uStack_50 = 0x7ff0000000000000;
  uStack_38 = 0xfff0000000000000;
  uStack_40 = 0xfff0000000000000;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 3) {
    lVar1 = unaff_x20[1];
    for (lVar2 = *unaff_x20; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
      func_0x0001078719f0(&uStack_50,lVar2);
    }
  }
  return uStack_50;
}



/* Entry: 10774d974; end: 10774d9c3;  */

void FUN_10774d974(double param_1,long param_2,long param_3)

{
  long unaff_x20;
  
  if (*(char *)(param_3 + 0x10) == '\x01') {
    func_0x00010774ebd4();
    func_0x00010774cbf4(*(undefined8 *)(param_2 + 0x18));
    func_0x00010774eae0();
    if (param_1 < **(double **)(unaff_x20 + 8)) {
      func_0x00010774eab0();
    }
  }
  return;
}



/* Entry: 10774dffc; end: 10774dfff;  */

void FUN_10774dffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10774e158; end: 10774e15b;  */

void FUN_10774e158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10774e388; end: 10774e3af;  */

void FUN_10774e388(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  func_0x00010774e3d4(*(long *)(param_1 + 8) + param_2 * 0x78,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10774e544; end: 10774e5ef;  */

ulong FUN_10774e544(int *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  if (*param_1 == 7) {
    return 1;
  }
  if (*param_1 == 6) {
    uVar3 = 0;
    if (*(double *)(*param_2 + 0x10) == *(double *)(param_1 + 4)) {
      uVar3 = (uint)(*(double *)(*param_2 + 8) == *(double *)(param_1 + 2));
    }
    return (ulong)uVar3;
  }
  bVar1 = *param_1 == 5;
  if (!bVar1) {
    bVar1 = *param_1 == 4;
    if (bVar1) {
      uVar2 = *param_2 + 8;
      func_0x00010774eb94(uVar2,param_1 + 2);
      if (bVar1) {
        func_0x00010774e6a0();
        return uVar2;
      }
      return 0;
    }
    bVar1 = *param_1 == 3;
    if (!bVar1) {
      bVar1 = *param_1 == 2;
      if (bVar1) {
        uVar2 = *param_2 + 8;
        func_0x00010774eb94(uVar2,param_1 + 2);
        if (bVar1) {
          func_0x00010774e768();
          return uVar2;
        }
        return 0;
      }
      bVar1 = *param_1 == 1;
      if (!bVar1) {
        uVar2 = *param_2 + 8;
        func_0x00010774eb94(uVar2,param_1 + 2);
        if (bVar1) {
          func_0x00010774e868();
          return uVar2;
        }
        return 0;
      }
      uVar2 = *param_2 + 8;
      func_0x00010774eb94(uVar2,param_1 + 2);
      if (!bVar1) {
        return 0;
      }
      func_0x00010774e7e8();
      return uVar2;
    }
  }
  uVar2 = *param_2 + 8;
  func_0x00010774eb94(uVar2,param_1 + 2);
  if (bVar1) {
    func_0x00010774e60c();
    return uVar2;
  }
  return 0;
}



/* Entry: 10774e7a8; end: 10774e7cb;  */

long FUN_10774e7a8(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  
  lVar1 = *param_1 + 8;
  func_0x00010774eb94(lVar1);
  if ((bool)in_ZR) {
    func_0x00010774e7e8();
    return lVar1;
  }
  return 0;
}



/* Entry: 10774ef14; end: 10774efe7;  */

void FUN_10774ef14(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_120 [24];
  undefined1 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [144];
  
  uStack_d0 = 0;
  uStack_c8 = 0;
  auStack_e8[0] = 0;
  uStack_d8 = 0;
  auStack_100[0] = 0;
  uStack_f0 = 0;
  auStack_120[0] = 0;
  uStack_108 = 0;
  func_0x0001075375e8(auStack_c0,&uStack_d0,auStack_e8,auStack_100,auStack_120);
  func_0x00010774efe8(param_1,param_2,auStack_c0);
  func_0x000107324968(auStack_c0);
  func_0x0001001148fc(auStack_120);
  func_0x000107323f70(auStack_100);
  func_0x000107323ef8(auStack_e8);
  func_0x000107323f90(&uStack_d0);
  return;
}



/* Entry: 10774f448; end: 10774f497;  */

void FUN_10774f448(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xb8;
  __Znwm();
  func_0x000107539b24();
  *param_1 = uVar1;
  return;
}



/* Entry: 10774f778; end: 10774f7b7;  */

void FUN_10774f778(void)

{
  func_0x00010775007c();
  func_0x0001077500f8();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774f9a4; end: 10774fa33;  */

void FUN_10774f9a4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  __Znwm();
  *param_3 = 0;
  param_3[1] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_107574144();
  *param_1 = uVar1;
  func_0x000107750128();
  func_0x000107750120();
  return;
}



/* Entry: 10774fc00; end: 10774fc87;  */

undefined8 * FUN_10774fc00(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 *unaff_x19;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x0001077500ac();
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60,extraout_x9 + 0x48);
  func_0x00010756c0ec();
  func_0x00010775023c();
  func_0x000107750098(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  *unaff_x19 = &PTR_DAT_1109d42d0;
  func_0x000104c2f714(unaff_x19 + 9);
  *unaff_x19 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(unaff_x19 + 5);
  func_0x0001072c9884(unaff_x19 + 2);
  return unaff_x19;
}



/* Entry: 10774fda8; end: 10774fdeb;  */

undefined8 * FUN_10774fda8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109be080;
  param_1[1] = 0;
  func_0x00010774fdec(param_1 + 3);
  return param_1;
}



/* Entry: 10774ff0c; end: 10774ff47;  */

void FUN_10774ff0c(void)

{
  long unaff_x21;
  
  func_0x000107750130();
  if (unaff_x21 != 0) {
    func_0x0001077501e8();
    func_0x00010775025c(&PTR_DAT_1109d4418);
  }
  func_0x000107750170();
  return;
}



/* Entry: 10774ffd8; end: 10774fff3;  */

void FUN_10774ffd8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107547c54(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107750330; end: 1077503af;  */

/* WARNING: Possible PIC construction at 0x000107750344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107750348) */

void FUN_107750330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(uint *)(param_1 + 0x10) < 2) {
    return;
  }
  uStack_28 = 0x107750348;
  uVar1 = param_2;
  lStack_40 = param_1;
  uStack_38 = param_2;
  func_0x00010746bbb8();
  lStack_50 = param_1;
  uStack_48 = uVar1;
  while (lStack_50 != 0) {
    func_0x000107750910(auStack_68,param_2,uStack_48);
    func_0x000107262260(&lStack_50);
  }
  return;
}



/* Entry: 1077507a0; end: 10775080f;  */

undefined1 ***
FUN_1077507a0(undefined8 param_1,undefined8 **param_2,long param_3,undefined8 **param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 ***pppuVar2;
  undefined8 *puVar3;
  undefined1 ***pppuVar4;
  undefined1 ***pppuVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined1 uVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  long unaff_x20;
  undefined1 auStack_f8 [24];
  undefined1 **ppuStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 uStack_a9;
  undefined1 *apuStack_a8 [3];
  undefined8 *puStack_90;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 uStack_49;
  undefined8 *apuStack_48 [5];
  
  func_0x000107750fc0();
  uVar1 = 0;
  if (param_2[3] != (undefined8 *)0x0) {
    uStack_49 = 0;
    func_0x000107750ffc(&PTR_DAT_1109d46e8);
    param_2 = apuStack_48;
    func_0x000107869c04();
    func_0x00010750b370();
    uVar1 = uStack_49;
  }
  func_0x000107750fa0(uVar1);
  if ((bool)in_ZR) {
    return (undefined1 ***)(ulong)(extraout_w8 & 1);
  }
  ___stack_chk_fail();
  pppuVar2 = (undefined1 ***)apuStack_48;
  func_0x00010750b370();
  func_0x000107751024();
  puStack_58 = &UNK_107750810;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107750fc0();
  uVar1 = *(int *)(param_3 + 0x10) == 1;
  lVar6 = param_3;
  ppuVar7 = param_4;
  if ((bool)uVar1) {
    param_3 = unaff_x20;
    uVar8 = 0;
  }
  else {
    uStack_a9 = 0;
    puVar3 = (undefined8 *)0x28;
    __Znwm();
    *puVar3 = &PTR_DAT_1109d47e8;
    puVar3[1] = param_2;
    puVar3[2] = &uStack_a9;
    puVar3[3] = param_4;
    puVar3[4] = param_3;
    param_2 = (undefined8 **)apuStack_a8;
    puStack_90 = puVar3;
    FUN_107869d34();
    func_0x00010775102c();
    uVar8 = uStack_a9;
  }
  func_0x000107750fa0(uVar8);
  if ((bool)uVar1) {
    return (undefined1 ***)(ulong)(extraout_w8_00 & 1);
  }
  ___stack_chk_fail();
  pppuVar4 = pppuVar2;
  func_0x00010775102c();
  func_0x000107751024();
  puStack_b8 = &LAB_1077508c0;
  pppuVar5 = pppuVar4;
  ppuStack_e0 = (undefined1 **)param_2;
  lStack_d8 = lVar6;
  lStack_d0 = param_3;
  ppuStack_c8 = pppuVar2;
  ppuStack_c0 = &puStack_60;
  while ((undefined8 **)ppuStack_e0 != ppuVar7) {
    func_0x000107750910(auStack_f8,pppuVar4,lStack_d8);
    pppuVar5 = &ppuStack_e0;
    func_0x000107262260(pppuVar5);
  }
  return pppuVar5;
}



/* Entry: 107750a04; end: 107750a0b;  */

void FUN_107750a04(void)

{
  return;
}



/* Entry: 107750b88; end: 107750b93;  */

undefined ** FUN_107750b88(void)

{
  return &PTR_DAT_1109d4648;
}



/* Entry: 107750cd8; end: 107750cf3;  */

void FUN_107750cd8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d46e8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107750e54; end: 107750e87;  */

void FUN_107750e54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x28;
  __Znwm();
  func_0x000107750fdc(&PTR_DAT_1109d47e8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 1077512dc; end: 107751333;  */

void FUN_1077512dc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 1) = 1;
  puVar1 = param_2;
  func_0x000107752dfc();
  func_0x00010726acf0(puVar1 + 0x42);
  *(undefined1 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x46) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined1 *)(param_2 + 0x5a) = 1;
  func_0x000107753030();
  return;
}



/* Entry: 1077515e0; end: 1077516ef;  */

uint FUN_1077515e0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  long extraout_x8;
  
  lVar2 = param_1;
  func_0x0001077515a0();
  if ((int)lVar2 == 0) {
LAB_107751650:
    uVar1 = 0;
    iVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x188) == 1) {
      puVar3 = (undefined8 *)(param_1 + 0x178);
      func_0x0001077522cc();
      if (*(uint *)*puVar3 < 7) {
        uVar1 = (uint)(0x1020300000000 >> ((ulong)(*(uint *)*puVar3 << 3) & 0x3f));
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x188) != 0) goto LAB_107751650;
      param_1 = param_1 + 0x178;
      func_0x0001077522b4(param_1);
      uVar1 = (uint)param_1;
      func_0x000107752f84();
      (**(code **)(extraout_x8 + 0x10))();
    }
    iVar4 = 1;
  }
  return uVar1 & 0xff | iVar4 << 8;
}



/* Entry: 107751edc; end: 107751f5f;  */

undefined1  [16] FUN_107751edc(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  ulong uStack_20;
  uint uStack_18;
  char cStack_14;
  
  puVar3 = (ulong *)param_1[0x1f];
  if (puVar3 == (ulong *)0x0) {
    if (*(int *)(param_1 + 0x31) == 0) {
      func_0x000107752eec();
      func_0x000107752f14(*param_1);
      uVar2 = uStack_20 & 0xffffffffffffff00;
      uVar1 = (ulong)uStack_18 | 0x100000000;
      if (cStack_14 == '\0') {
        uVar2 = 0;
        uStack_20 = 0;
        uVar1 = 0;
      }
    }
    else {
      uVar2 = 0;
      uStack_20 = 0;
      uVar1 = 0;
    }
  }
  else {
    uStack_20 = *puVar3;
    uVar2 = uStack_20 & 0xffffffffffffff00;
    uVar1 = (ulong)(uint)puVar3[1] | 0x100000000;
  }
  auVar4._0_8_ = uStack_20 & 0xff | uVar2;
  auVar4._8_8_ = uVar1;
  return auVar4;
}



/* Entry: 107752170; end: 10775219b;  */

void FUN_107752170(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107752eb0();
  func_0x000107262f3c();
  func_0x000107262f3c(unaff_x20 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 107752370; end: 1077523ab;  */

void FUN_107752370(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)*param_1;
  lVar1 = param_2[1];
  uVar3 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x000107752dd4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10775248c; end: 1077524c7;  */

void FUN_10775248c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lStack_20;
  undefined8 *puStack_18;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    *param_2 = *param_3;
    return;
  }
  lStack_20 = param_1;
  puStack_18 = param_3;
  func_0x0001077524c8(&lStack_20);
  return;
}



/* Entry: 107752814; end: 107752847;  */

void FUN_107752814(void)

{
  func_0x00010775282c();
  return;
}



/* Entry: 107752da8; end: 10775304f;  */

void FUN_107752da8(void)

{
  return;
}



/* Entry: 107753570; end: 10775359f;  */

undefined ** FUN_107753570(void)

{
  return &PTR_DAT_1109d4968;
}



/* Entry: 107753a80; end: 107753a9b;  */

void FUN_107753a80(long param_1)

{
  func_0x000107269bac();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10775415c; end: 1077541a7;  */

long FUN_10775415c(long *param_1,long param_2,undefined8 param_3)

{
  for (; param_1 != (long *)param_2; param_1 = (long *)*param_1) {
    func_0x0001077541a8(param_3,param_1 + 2);
  }
  return param_2;
}



/* Entry: 107754a1c; end: 107754b17;  */

/* WARNING: Possible PIC construction at 0x000107754bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107754bdc) */
/* WARNING: Removing unreachable block (ram,0x000107754be0) */
/* WARNING: Removing unreachable block (ram,0x000107754bf8) */
/* WARNING: Removing unreachable block (ram,0x000107754c1c) */
/* WARNING: Removing unreachable block (ram,0x000107754c24) */
/* WARNING: Removing unreachable block (ram,0x000107754c2c) */
/* WARNING: Removing unreachable block (ram,0x000107754c34) */
/* WARNING: Removing unreachable block (ram,0x000107754c3c) */
/* WARNING: Removing unreachable block (ram,0x000107754c44) */
/* WARNING: Removing unreachable block (ram,0x000107754c84) */
/* WARNING: Removing unreachable block (ram,0x000107754ccc) */
/* WARNING: Removing unreachable block (ram,0x000107754cf0) */
/* WARNING: Removing unreachable block (ram,0x000107754d30) */
/* WARNING: Removing unreachable block (ram,0x000107754d40) */
/* WARNING: Removing unreachable block (ram,0x000107754d50) */
/* WARNING: Removing unreachable block (ram,0x000107754c90) */
/* WARNING: Removing unreachable block (ram,0x000107754ca0) */
/* WARNING: Removing unreachable block (ram,0x000107754d88) */
/* WARNING: Removing unreachable block (ram,0x000107754ca8) */
/* WARNING: Removing unreachable block (ram,0x000107754cb8) */
/* WARNING: Removing unreachable block (ram,0x000107754cc4) */
/* WARNING: Removing unreachable block (ram,0x000107754c4c) */
/* WARNING: Removing unreachable block (ram,0x000107754c00) */
/* WARNING: Removing unreachable block (ram,0x000107754c54) */

undefined8 * FUN_107754a1c(undefined4 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long alStack_2a0 [6];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [112];
  int iStack_1f8;
  undefined8 uStack_138;
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x000107755288();
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_28 = extraout_x8;
  func_0x0001077552f0();
  func_0x0001074d2254(&uStack_80,auStack_68);
  func_0x000104c2f714(auStack_68);
  func_0x0001077552f0();
  func_0x0001077552e4();
  func_0x0001077552c8();
  func_0x0001077552f0();
  func_0x0001077552e4();
  func_0x0001077552c8();
  func_0x000107327958(&uStack_90,&uStack_80);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_88;
  *(undefined8 *)(param_1 + 2) = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000104c33108(&uStack_90);
  puVar2 = &uStack_80;
  func_0x000107269124();
  func_0x000107755274(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077552c8();
  puVar3 = &uStack_80;
  func_0x000107269124();
  func_0x000107755298();
  puVar4 = auStack_f0;
  puStack_98 = &DAT_107754b18;
  uStack_b0 = param_2;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107755288();
  uStack_b8 = extraout_x8_00;
  func_0x0001077552dc();
  puVar2 = puVar3 + 9;
  FUN_107749c80(auStack_f0,puVar2,puVar3 + 0x12);
  func_0x0001077552d0();
  func_0x000107755274(uStack_b8);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001077552d0();
  func_0x000107755298();
  func_0x000107755288();
  uStack_138 = extraout_x8_02;
  func_0x000107753050(auStack_270,*(undefined8 *)(puVar4 + 0x48));
  uVar1 = iStack_1f8 == 1;
  if ((bool)uVar1) {
    plVar5 = puVar2 + 0x21;
  }
  else {
    puVar2 = (undefined8 *)(extraout_x8_01 + 8);
    func_0x00010756c040(puVar2,auStack_268);
    func_0x0001077552a8(auStack_270);
    func_0x000107755274(uStack_138);
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    plVar5 = alStack_2a0;
    func_0x00010726ae88();
    func_0x0001077552a8(auStack_270);
    func_0x000107755298();
  }
  lVar6 = *plVar5;
  func_0x000107755060(lVar6);
  return (undefined8 *)(ulong)(lVar6 != 0);
}



/* Entry: 107754ef8; end: 107754efb;  */

void FUN_107754ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107755098; end: 1077551c7;  */

/* WARNING: Possible PIC construction at 0x000107755170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107755174) */

bool FUN_107755098(byte *param_1,long *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  pbVar4 = param_1;
  func_0x000107755288();
  lVar5 = *(long *)(pbVar4 + 8);
  lVar3 = *(long *)pbVar4 + 0x108;
  uStack_38 = extraout_x8;
  func_0x0001072ba99c(lVar3);
  func_0x0001072baf4c();
  func_0x0001072955a4(lVar3 + 8,param_2 + 1);
  pbVar4 = *(byte **)(lVar5 + 0x90);
  func_0x000107753050(auStack_b8,pbVar4,*(long *)param_1,*(long *)(param_1 + 0x10));
  if (iStack_40 == 1) {
    func_0x0001077552c0();
    uVar2 = *(int *)(pbVar4 + 0x68) == 1;
    if ((bool)uVar2) {
      func_0x0001077552c0();
      func_0x00010756e584();
      bVar1 = *pbVar4;
      func_0x0001077552a8(auStack_b8);
      func_0x000107755274(uStack_38);
      if ((bool)uVar2) {
        return (bool)(bVar1 & 1);
      }
      ___stack_chk_fail();
      func_0x0001077552a8(auStack_b8);
      func_0x000107755298();
      param_1 = pbVar4;
      goto code_r0x0001077551c8;
    }
    if (iStack_40 != 1) goto LAB_10775514c;
    func_0x0001077552c0();
    if (*(int *)(pbVar4 + 0x68) == 1) goto code_r0x0001077551c8;
    func_0x0001077552dc();
  }
  else {
LAB_10775514c:
    func_0x0001077552dc();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
code_r0x0001077551c8:
  func_0x00010775532c();
  func_0x00010729604c();
  lVar5 = *param_2;
  lVar3 = lVar5;
  func_0x0001074d2750(lVar5,param_1);
  if (lVar3 != 0) {
    func_0x00010775522c(lVar5,lVar3,param_1);
  }
  return lVar3 != 0;
}



/* Entry: 107755c6c; end: 107755d8b;  */

/* WARNING: Possible PIC construction at 0x000107755dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107755dcc) */
/* WARNING: Removing unreachable block (ram,0x000107755dec) */
/* WARNING: Removing unreachable block (ram,0x000107755e00) */
/* WARNING: Removing unreachable block (ram,0x000107755de0) */
/* WARNING: Removing unreachable block (ram,0x0001077563c8) */

long * FUN_107755c6c(undefined4 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long *plStack_128;
  undefined1 auStack_f0 [64];
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [3];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x0001077562f4();
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  uStack_28 = extraout_x8;
  func_0x0001077563ac();
  func_0x0001074d2254(alStack_80,auStack_68);
  func_0x000104c2f714(auStack_68);
  func_0x0001077563ac();
  func_0x000107756378();
  func_0x00010775639c();
  uVar1 = *(char *)(param_2 + 0x90) == '\x01';
  if ((bool)uVar1) {
    lVar2 = param_2 + 0x58;
    func_0x00010725ffc4(lVar2);
    func_0x0001077560f4(alStack_80,lVar2);
  }
  func_0x0001077563ac();
  func_0x000107756378();
  func_0x00010775639c();
  func_0x000107327958(&uStack_90,alStack_80);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_88;
  *(undefined8 *)(param_1 + 2) = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000104c33108(&uStack_90);
  plVar3 = alStack_80;
  func_0x000107269124();
  func_0x0001077562e0(uStack_28);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010775639c();
  plVar4 = alStack_80;
  func_0x000107269124();
  func_0x000107756310();
  puStack_98 = &DAT_107755d8c;
  plVar5 = plVar4;
  lStack_b0 = param_2;
  plStack_a8 = plVar3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001077562f4();
  (**(code **)(*plVar5 + 0x40))(auStack_f0);
  plStack_128 = (long *)0x0;
  func_0x0001073f26dc(&plStack_128,auStack_f0);
  func_0x00010756af98(&plStack_128,plVar4 + 9);
  func_0x000107756258(&plStack_128,plVar4 + 0xb);
  func_0x00010756af98(&plStack_128,plVar4 + 0x13);
  return plStack_128;
}



/* Entry: 107755f54; end: 107755f7b;  */

bool FUN_107755f54(long param_1,long param_2)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38) || cVar1 == '\0') {
    return cVar1 == *(char *)(param_2 + 0x38);
  }
  func_0x000104c2fe38();
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_1;
}



/* Entry: 107756208; end: 1077562ab;  */

ulong * FUN_107756208(ulong *param_1)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong *puVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x0001077562f4();
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60);
  puVar1 = param_1;
  func_0x000104c33004(param_1,auStack_60);
  func_0x0001077563c0();
  func_0x0001077562e0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = (ulong *)&stack0xffffffffffffff7f;
  func_0x0001077562ac();
  uVar3 = *puVar1;
  *puVar1 = (ulong)((long)puVar2 + (uVar3 >> 4) + uVar3 * 0x1000 + -0x61c8864680b583eb) ^ uVar3;
  return puVar2;
}



/* Entry: 107756df0; end: 107756e67;  */

long * FUN_107756df0(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long alStack_60 [7];
  undefined8 uStack_28;
  
  plVar2 = alStack_60;
  plVar1 = param_1;
  func_0x0001077570b8();
  uStack_28 = extraout_x8;
  (**(code **)(*plVar1 + 0x40))(alStack_60);
  func_0x000107755e04(alStack_60,param_1 + 9,param_1 + 0xb,param_1 + 0x13);
  func_0x00010775716c();
  func_0x000107757098(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010775716c();
  func_0x0001077570d4();
  *plVar2 = (long)&PTR_DAT_1109d4b38;
  func_0x0001072c9b9c(plVar2 + 0x13);
  func_0x00010724b3d8(plVar2 + 0xb);
  func_0x0001072c9b9c(plVar2 + 9);
  *plVar2 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar2 + 5);
  func_0x0001072c9884(plVar2 + 2);
  return plVar2;
}



/* Entry: 107756f64; end: 107756f73;  */

void FUN_107756f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107756f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077572e8; end: 10775731b;  */

void FUN_1077572e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d4c10;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1077576c4; end: 107757707;  */

long FUN_1077576c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 107757aa4; end: 107757f67;  */

/* WARNING: Possible PIC construction at 0x000107757f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107757f88) */

long * FUN_107757aa4(long param_1,long param_2,long *param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 extraout_x8;
  code *extraout_x9;
  uint uVar11;
  undefined1 uStack_409;
  undefined1 auStack_408 [24];
  long alStack_3f0 [15];
  int iStack_378;
  long *aplStack_370 [15];
  int iStack_2f8;
  long *plStack_2f0;
  long *aplStack_2e8 [13];
  undefined1 auStack_280 [64];
  long lStack_240;
  undefined1 auStack_238 [104];
  long lStack_1d0;
  long *aplStack_1c8 [13];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [104];
  undefined1 auStack_f0 [8];
  double adStack_e8 [12];
  undefined4 uStack_88;
  int iStack_78;
  undefined8 uStack_70;
  
  lVar10 = param_2;
  plVar4 = param_3;
  uVar9 = param_4;
  func_0x00010775931c();
  plVar5 = *(long **)(lVar10 + 0x58);
  uStack_70 = extraout_x8;
  func_0x000107753050(aplStack_370,plVar5,plVar4,uVar9);
  uVar3 = iStack_2f8 == 1;
  if (!(bool)uVar3) {
    func_0x00010775943c(aplStack_370);
    goto LAB_107757be4;
  }
  plVar5 = *(long **)(param_2 + 0x48);
  plVar4 = param_3;
  func_0x000107753050(alStack_3f0,plVar5,param_3,param_4);
  uVar3 = iStack_378 == 1;
  if ((bool)uVar3) {
    plVar5 = param_3 + 0x21;
    plVar4 = (long *)(param_2 + 0x68);
    func_0x000107754e20();
    if ((int)plVar5 == 0) {
      plVar6 = param_3 + 0x21;
      plVar4 = (long *)(param_2 + 0xa0);
      func_0x000107754e20();
      plVar5 = plVar6;
      if ((int)plVar6 != 0) goto LAB_107757bd0;
      func_0x000107759400();
      if ((bool)uVar3) {
        func_0x0001077593a4();
        plVar5 = param_3 + 0x21;
        func_0x000107754e20();
        plVar4 = plVar6;
        if ((int)plVar5 != 0) goto LAB_107757bd0;
      }
      plVar5 = alStack_3f0;
      func_0x0001073405dc();
      iVar2 = (int)plVar5[0xd];
      if (iVar2 == 0) goto LAB_107757bd0;
      if (iVar2 != 1) {
        uVar3 = iVar2 == 2;
        if ((((!(bool)uVar3) && (uVar3 = iVar2 == 3, !(bool)uVar3)) &&
            (uVar3 = iVar2 == 4, !(bool)uVar3)) &&
           ((uVar3 = iVar2 == 5, !(bool)uVar3 && (uVar3 = iVar2 == 6, !(bool)uVar3)))) {
          if (iVar2 == 8) {
            lVar10 = *(long *)plVar5[1];
            lVar1 = ((long *)plVar5[1])[1];
            pplVar7 = aplStack_370;
            func_0x0001073405dc(pplVar7);
            func_0x0001077594c0();
            uVar11 = 0;
            for (; uVar3 = lVar10 == lVar1, !(bool)uVar3; lVar10 = lVar10 + 0x70) {
              plVar5 = param_3 + 0x21;
              func_0x0001072ba99c(plVar5);
              plVar4 = plVar5;
              func_0x0001072baf4c();
              func_0x0001072955a4(plVar4 + 1,lVar10 + 8);
              plVar4 = plVar5;
              func_0x0001072baf4c(plVar5,param_2 + 0x68);
              func_0x000107759498();
              func_0x000107759400();
              if ((bool)uVar3) {
                adStack_e8[0] = (double)uVar11;
                uStack_88 = 2;
                func_0x0001077593a4();
                func_0x0001072baf4c(plVar5,plVar4);
                func_0x00010726cda0(plVar5 + 1,adStack_e8);
                func_0x00010726af18(adStack_e8);
              }
              func_0x00010775946c();
              if (iStack_78 == 1) {
                puVar8 = auStack_f0;
                func_0x0001073405dc(puVar8);
                func_0x0001072786d8(aplStack_1c8,puVar8 + 8);
              }
              else {
                func_0x0001077594d8(*(undefined8 *)(param_2 + 0x118));
                (*extraout_x9)(auStack_280);
                func_0x0001077765a4(auStack_160,auStack_280,&uStack_409);
                func_0x000107776500(auStack_408,auStack_160);
                func_0x000107759418();
                func_0x000104c3323c(auStack_280);
                func_0x0001072786d8(aplStack_1c8,aplStack_2e8);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_408);
              }
              uVar11 = uVar11 + 1;
              func_0x00010775939c(auStack_f0);
              func_0x00010775940c();
              pplVar7 = aplStack_1c8;
              func_0x00010726af18();
            }
            func_0x0001077593d8(&lStack_240);
            func_0x0001077594b8();
            func_0x000107759484();
            func_0x000107759478();
            func_0x000107759400();
            if ((bool)uVar3) {
              func_0x0001077593a4();
              func_0x0001077551c8(param_3 + 0x21,pplVar7);
            }
            plVar4 = &lStack_240;
          }
          else {
            uVar3 = iVar2 == 7;
            if ((bool)uVar3) goto LAB_107757bd0;
            plVar5 = plVar5 + 1;
            func_0x000107348ee8();
            pplVar7 = aplStack_370;
            func_0x0001073405dc(pplVar7);
            func_0x0001077594c0();
            plStack_2f0 = plVar5;
            while (aplStack_2e8[0] = plVar4, plStack_2f0 != (long *)0x0) {
              plVar5 = param_3 + 0x21;
              func_0x0001072ba99c(plVar5);
              plVar6 = plVar5;
              func_0x0001072baf4c();
              func_0x0001072955a4(plVar6 + 1,plVar4 + 8);
              func_0x0001072baf4c(plVar5,param_2 + 0x68);
              func_0x000107759498();
              func_0x000107759400();
              if ((bool)uVar3) {
                puVar8 = auStack_f0;
                func_0x0001072ddd58(puVar8,plVar4);
                func_0x0001077593a4();
                func_0x0001072baf4c(plVar5,puVar8);
                func_0x00010726cda0(plVar5 + 1,adStack_e8);
                func_0x00010726af18(adStack_e8);
              }
              func_0x00010775946c();
              uVar3 = iStack_78 == 1;
              puVar8 = auStack_238;
              if ((bool)uVar3) {
                puVar8 = auStack_f0;
                func_0x0001073405dc(puVar8,auStack_238);
                puVar8 = puVar8 + 8;
              }
              func_0x0001072786d8(auStack_158,puVar8);
              func_0x00010727f7f8(adStack_e8);
              func_0x00010775940c();
              func_0x00010726af18(auStack_158);
              pplVar7 = &plStack_2f0;
              func_0x0001072963cc(pplVar7);
              plVar4 = aplStack_2e8[0];
            }
            func_0x0001077593d8(&lStack_1d0);
            func_0x0001077594b8();
            func_0x000107759484();
            func_0x000107759478();
            func_0x000107759400();
            if ((bool)uVar3) {
              func_0x0001077593a4();
              func_0x0001077551c8(param_3 + 0x21,pplVar7);
            }
            plVar4 = &lStack_1d0;
          }
          func_0x0001074b0ce4(param_1);
          func_0x00010726af18();
          plVar5 = param_5;
          goto LAB_107757bdc;
        }
        goto LAB_107757bd0;
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      uVar3 = 1;
    }
    else {
LAB_107757bd0:
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  else {
    func_0x00010775943c(alStack_3f0);
  }
LAB_107757bdc:
  func_0x00010775939c(alStack_3f0);
LAB_107757be4:
  func_0x00010775939c(aplStack_370);
  func_0x000107759308(uStack_70);
  if ((bool)uVar3) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x0001077594b8();
  func_0x00010775939c(alStack_3f0);
  func_0x00010775939c(aplStack_370);
  func_0x000107759334();
  plVar4 = (long *)plVar4[3];
  if (plVar4 == (long *)0x0) {
    func_0x000104bfeb48(0,plVar5[9]);
    plVar5 = (long *)plVar4[3];
    if (plVar5 == plVar4) {
      lVar10 = 0x20;
    }
    else {
      if (plVar5 == (long *)0x0) {
        return plVar4;
      }
      lVar10 = 0x28;
    }
    (**(code **)(*plVar5 + lVar10))();
    return plVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))();
  return plVar4;
}



/* Entry: 107758d5c; end: 107758d6f;  */

void FUN_107758d5c(void)

{
  func_0x000107758e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107758f3c; end: 107758f47;  */

undefined ** FUN_107758f3c(void)

{
  return &PTR_DAT_1109d4de8;
}



/* Entry: 107759130; end: 107759137;  */

void FUN_107759130(void)

{
  return;
}


