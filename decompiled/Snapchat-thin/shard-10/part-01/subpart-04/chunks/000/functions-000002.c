/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107739704; end: 107739717;  */

void FUN_107739704(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107739a10; end: 107739a2b;  */

/* WARNING: Possible PIC construction at 0x000107739ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739adc) */
/* WARNING: Removing unreachable block (ram,0x000107739afc) */
/* WARNING: Removing unreachable block (ram,0x000107739ae8) */
/* WARNING: Removing unreachable block (ram,0x000107739b0c) */

undefined8 * FUN_107739a10(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar4;
  undefined *puVar5;
  
  uVar2 = *(int *)(param_1 + 0x68) == 5;
  if ((bool)uVar2) {
    return (undefined8 *)(param_1 + 8);
  }
  puVar4 = &stack0xfffffffffffffff0;
  puVar5 = &UNK_107739a2c;
  func_0x00010563ab98();
  puVar1 = &stack0xfffffffffffffff0;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar4;
    *(undefined **)(puVar1 + -8) = puVar5;
    func_0x000107741be8();
    func_0x000107743a20();
    puVar3 = (undefined8 *)(unaff_x19 + 8);
    func_0x000104c318bc(puVar3,puVar1 + -0x60);
    *(undefined4 *)(unaff_x19 + 0x40) = 0;
    func_0x0001077431c4();
    func_0x000107741a50();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x80) = unaff_x20;
    *(long *)(puVar1 + -0x78) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &UNK_107739a78;
    puVar4 = puVar1 + -0x70;
    func_0x000107741910();
    *(undefined4 *)(puVar1 + -0x158) = 0;
    func_0x000107742168();
    puVar3 = (undefined8 *)*puVar3;
    func_0x000107741e48();
    func_0x000107743728();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar2 = (int)unaff_x20 == 1;
    if (!(bool)uVar2) break;
    func_0x0001077421a8();
    func_0x00010774371c();
    puVar5 = &UNK_107739adc;
    puVar1 = puVar1 + -0x1c0;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  FUN_107739c80();
  func_0x0001077420d8();
  func_0x000107742904();
  *(undefined8 *)(puVar1 + -0x1e0) = unaff_x20;
  *(long *)(puVar1 + -0x1d8) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x1d0) = puVar4;
  *(undefined **)(puVar1 + -0x1c8) = &DAT_107739b50;
  *puVar3 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar3 + 9);
  func_0x00010772d754(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 107739c80; end: 107739cb7;  */

void FUN_107739c80(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d33e8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 107739f44; end: 107739f57;  */

/* WARNING: Possible PIC construction at 0x00010773a05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a060) */
/* WARNING: Removing unreachable block (ram,0x00010773a07c) */
/* WARNING: Removing unreachable block (ram,0x00010773a06c) */
/* WARNING: Removing unreachable block (ram,0x00010773a088) */

undefined8 * FUN_107739f44(undefined8 param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    lVar3 = param_2;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    param_2 = lVar3;
    func_0x000107743300();
    func_0x000107741cf4();
    func_0x000107743604();
    func_0x00010757a1b8(lVar3 + 0x40,puVar1 + -200);
    func_0x000107742ac0();
    *(undefined4 *)(puVar1 + -0x60) = 0;
    unaff_x19 = *(undefined8 **)(unaff_x21 + 0xe8);
    if ((unaff_x19 != (undefined8 *)0x0) && (func_0x000107869920(), (param_3 & 1) != 0)) {
      func_0x000107742a84();
      func_0x0001077420a0();
    }
    unaff_x20 = puVar1 + -200;
    func_0x00010774257c();
    func_0x000107742bf8();
    func_0x000107741a68();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    puVar2 = unaff_x19;
    func_0x000107742088();
    func_0x000107742904();
    puVar4 = &UNK_107739ff4;
    func_0x000107743c34();
    *(undefined1 **)(puVar1 + 0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 0x98) = puVar4;
    unaff_x29 = puVar1 + 0x90;
    func_0x000107741970();
    func_0x000107742dfc();
    func_0x000107742168();
    puVar2 = (undefined8 *)*puVar2;
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
    in_ZR = (int)lVar3 == 1;
    if (!(bool)in_ZR) {
      func_0x0001077420d8();
      func_0x000107741a68();
      if ((bool)in_ZR) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x000107742208();
      func_0x0001077420d8();
      func_0x000107742904();
      *(undefined1 **)(puVar1 + -0xf0) = unaff_x20;
      *(undefined8 **)(puVar1 + -0xe8) = unaff_x19;
      *(undefined1 **)(puVar1 + -0xe0) = unaff_x29;
      *(undefined **)(puVar1 + -0xd8) = &DAT_10773a0c8;
      *puVar2 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar2 + 9);
      func_0x00010772d754(puVar2 + 5);
      func_0x0001072c9884(puVar2 + 2);
      return puVar2;
    }
    func_0x0001077421a8();
    param_3 = 0;
    func_0x0001077429d4(puVar1 + -0x28);
    unaff_x30 = &UNK_10773a060;
    puVar1 = puVar1 + -0xd0;
    unaff_x22 = lVar3;
  }
  return unaff_x19;
}



/* Entry: 10773a270; end: 10773a373;  */

undefined8 * FUN_10773a270(undefined8 *param_1)

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
      func_0x00010773a1c0(param_1,*in_stack_00000018,in_stack_00000018[1],&stack0x00000008);
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
      goto LAB_10773a320;
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
LAB_10773a320:
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
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773a6f4; end: 10773a707;  */

void FUN_10773a6f4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773aac8; end: 10773aadb;  */

/* WARNING: Possible PIC construction at 0x00010773abf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773abf4) */
/* WARNING: Removing unreachable block (ram,0x00010773ac14) */
/* WARNING: Removing unreachable block (ram,0x00010773ac04) */
/* WARNING: Removing unreachable block (ram,0x00010773ac20) */

long * FUN_10773aac8(undefined1 *param_1,uint *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong uVar8;
  double dVar9;
  double dVar10;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  uVar8 = (ulong)*param_2;
  pfVar5 = *(float **)*param_3;
  pfVar7 = (float *)((long *)*param_3)[1];
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741ce0(param_1);
    dVar10 = 1.79769313486232e+308;
    while (dVar9 = dVar10, uVar2 = pfVar5 == pfVar7, !(bool)uVar2) {
      pfVar6 = pfVar5 + 1;
      dVar10 = (double)ABS((float)uVar8 - *pfVar5);
      pfVar5 = pfVar6;
      if (dVar9 <= dVar10) {
        dVar10 = dVar9;
      }
    }
    unaff_x19 = puVar1 + -0x98;
    *(double *)(puVar1 + -0x90) = dVar9;
    func_0x000107742f04(2);
    plVar3 = (long *)(puVar1 + -0x90);
    func_0x00010726af18();
    func_0x000107741a50();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    *(undefined8 *)(puVar1 + -0x110) = unaff_d9;
    *(ulong *)(puVar1 + -0x108) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x100) = unaff_x28;
    *(undefined8 *)(puVar1 + -0xf8) = unaff_x27;
    *(undefined8 *)(puVar1 + -0xf0) = unaff_x26;
    *(undefined1 **)(puVar1 + -0xe8) = unaff_x25;
    *(undefined1 **)(puVar1 + -0xe0) = unaff_x24;
    *(long *)(puVar1 + -0xd8) = unaff_x23;
    *(undefined8 *)(puVar1 + -0xd0) = unaff_x22;
    *(undefined8 *)(puVar1 + -200) = unaff_x21;
    *(undefined1 **)(puVar1 + -0xc0) = unaff_x20;
    *(undefined1 **)(puVar1 + -0xb8) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xa8) = &UNK_10773ab44;
    unaff_x29 = puVar1 + -0xb0;
    func_0x0001077418c8();
    *(undefined8 *)(puVar1 + -0x118) = extraout_x8;
    *(undefined4 *)(puVar1 + -0x210) = 0;
    *(undefined4 *)(puVar1 + -0x1a0) = 0;
    unaff_x25 = puVar1 + -0x198;
    unaff_x24 = puVar1 + -0x270;
    while (uVar2 = unaff_x23 == 2, !(bool)uVar2) {
      func_0x0001077422ac();
      plVar3 = (long *)*plVar3;
      func_0x000107742138(puVar1 + -0x198);
      func_0x00010774343c();
      if ((bool)uVar2) {
        func_0x000107742f9c();
        func_0x000107742190();
      }
      else {
        func_0x000107742f94();
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)uVar2) {
        func_0x0001077436d0();
        func_0x000107741c48();
        if ((bool)uVar2) {
          return plVar3;
        }
        ___stack_chk_fail();
        plVar4 = (long *)(puVar1 + -400);
        func_0x00010727f7f8();
        func_0x0001077436d0();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x2b0) = unaff_x20;
        *(long **)(puVar1 + -0x2a8) = plVar3;
        *(undefined1 **)(puVar1 + -0x2a0) = unaff_x29;
        *(undefined **)(puVar1 + -0x298) = &DAT_10773ac8c;
        *plVar4 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar4 + 9);
        func_0x00010772d754(plVar4 + 5);
        func_0x0001072c9884(plVar4 + 2);
        return plVar4;
      }
    }
    unaff_x20 = puVar1 + -0x278;
    func_0x00010773adec(puVar1 + -0x278);
    func_0x000107743060();
    pfVar5 = (float *)**(long **)(puVar1 + -0x288);
    pfVar7 = (float *)(*(long **)(puVar1 + -0x288))[1];
    param_1 = puVar1 + -0x198;
    unaff_x30 = &UNK_10773abf4;
    puVar1 = puVar1 + -0x290;
    unaff_d8 = uVar8;
  }
  return plVar3;
}



/* Entry: 10773ae28; end: 10773aef3;  */

long * FUN_10773ae28(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x20;
  long unaff_x23;
  double dVar5;
  double dVar6;
  float fVar7;
  long alStack_118 [18];
  undefined1 auStack_88 [88];
  
  func_0x000107741ca8();
  dVar5 = 1.79769313486232e+308;
  for (; uVar2 = param_4 == param_5, !(bool)uVar2; param_4 = param_4 + 2) {
    lVar1 = *(long *)*param_4;
    uVar2 = ((long *)*param_4)[1] - lVar1 == param_3 - param_2;
    if (!(bool)uVar2) {
      func_0x000107742604();
      func_0x000107742fdc();
      func_0x0001077427b8();
      func_0x000107742e4c();
      plVar3 = (long *)(unaff_x20 | 8);
      goto LAB_10773aed4;
    }
    dVar6 = 0.0;
    for (uVar4 = 0; uVar4 < (ulong)(param_3 - param_2 >> 2); uVar4 = (ulong)((int)uVar4 + 1)) {
      fVar7 = *(float *)(param_2 + uVar4 * 4) - *(float *)(lVar1 + uVar4 * 4);
      dVar6 = dVar6 + (double)(fVar7 * fVar7);
    }
    if (dVar5 <= dVar6) {
      dVar6 = dVar5;
    }
    dVar5 = dVar6;
  }
  func_0x0001077423d4();
  plVar3 = (long *)(unaff_x20 + 8);
LAB_10773aed4:
  func_0x00010726af18();
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107743090();
  func_0x000107742904();
  func_0x00010774309c();
  func_0x0001077418c8();
  func_0x0001077421d0();
  do {
    uVar2 = unaff_x23 == 2;
    if ((bool)uVar2) {
      func_0x0001077427dc();
      func_0x00010773b120(alStack_118,auStack_88);
      func_0x000107743bc4();
      FUN_10773ae28(&stack0xffffffffffffffe8);
      plVar3 = alStack_118;
      func_0x00010773b158();
      func_0x000107742dac();
      func_0x00010774326c();
      if ((bool)uVar2) {
        func_0x0001077429f0();
        func_0x000107742b70();
      }
      else {
        func_0x0001077429e8();
        func_0x0001077428fc();
      }
      func_0x0001077425ec();
      goto code_r0x00010773afa8;
    }
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
  } while ((bool)uVar2);
  uVar2 = 0;
code_r0x00010773afa8:
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
  *plVar3 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar3 + 9);
  func_0x00010772d754(plVar3 + 5);
  func_0x0001072c9884(plVar3 + 2);
  return plVar3;
}



/* Entry: 10773b1f4; end: 10773b21b;  */

long FUN_10773b1f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10773b4b0; end: 10773b59b;  */

void FUN_10773b4b0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *unaff_x20;
  uint uVar3;
  long lVar4;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107742ea0();
  puStack_60 = &UNK_10e52b660;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001072962ac(&puStack_60,*(undefined8 *)(param_2 + 8));
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



/* Entry: 10773bb0c; end: 10773bb0f;  */

undefined8 * FUN_10773bb0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773bd58; end: 10773bd9b;  */

void FUN_10773bd58(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,&DAT_10f424bab);
  func_0x000107743bec();
  func_0x000107742f68();
  func_0x000107742c9c();
  return;
}



/* Entry: 10773bfec; end: 10773c0c7;  */

undefined8 * FUN_10773bfec(long *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined1 auStack_f0 [168];
  undefined4 uStack_48;
  undefined4 uStack_40;
  
  func_0x000107741b04();
  func_0x000107743190();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
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
    puVar2 = (undefined8 *)(unaff_x20 + 0x108);
    func_0x0001074d2700(puVar2,auStack_f0);
    func_0x000107743b38();
    uStack_48 = 1;
    uStack_40 = 1;
    func_0x000107742994();
    func_0x000107742a0c();
    func_0x000107742a04();
    func_0x0001077420b8();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773c324; end: 10773c337;  */

void FUN_10773c324(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773c7a4; end: 10773c7af;  */

/* WARNING: Possible PIC construction at 0x00010773c9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773c9e8) */
/* WARNING: Removing unreachable block (ram,0x00010773ca00) */
/* WARNING: Removing unreachable block (ram,0x00010773c9f0) */
/* WARNING: Removing unreachable block (ram,0x00010773ca0c) */

long * FUN_10773c7a4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  long lVar13;
  undefined8 *unaff_x29;
  undefined *unaff_x30;
  
  puVar3 = (undefined8 *)register0x00000008;
  do {
    func_0x000107743460();
    puVar3[0x22] = unaff_x29;
    puVar3[0x23] = unaff_x30;
    func_0x000107741d18();
    puVar3[0x17] = extraout_x8;
    uVar9 = param_2[1];
    uVar4 = uVar9 == 1;
    plVar5 = param_1;
    plVar7 = param_2;
    if (uVar9 < 2) {
code_r0x00010773c7d8:
      func_0x00010774238c();
    }
    else {
      uVar11 = 0;
      unaff_x23 = (undefined8 *)0x0;
      plVar10 = (long *)*param_2;
      for (unaff_x24 = uVar9 * 0x70; iVar12 = (int)unaff_x23, unaff_x20 = param_2, unaff_x24 != 0;
          unaff_x24 = unaff_x24 - 0x70) {
        uVar4 = (int)plVar10[0xd] == 8;
        if (!(bool)uVar4) goto code_r0x00010773c7d8;
        plVar5 = plVar10;
        func_0x0001075725f8();
        func_0x000107743184(*plVar5);
        uVar2 = extraout_x8_00 / 0x70;
        uVar9 = uVar2;
        if (uVar11 <= uVar2) {
          uVar9 = uVar11;
        }
        uVar11 = uVar9;
        if (iVar12 == 0) {
          uVar11 = uVar2;
        }
        plVar10 = plVar10 + 0xe;
        unaff_x23 = (undefined8 *)0x1;
      }
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      uVar4 = iVar12 == 0;
      uVar9 = uVar11;
      if ((bool)uVar4) {
        uVar9 = 0;
      }
      func_0x0001074b01dc(puVar3 + 5,uVar9);
      if (iVar12 != 0) {
        unaff_x23 = puVar3 + 8;
        for (unaff_x24 = 0; uVar4 = unaff_x24 == uVar11, !(bool)uVar4; unaff_x24 = unaff_x24 + 1) {
          func_0x000107743000();
          func_0x000107742d78();
          puVar1 = (undefined8 *)*param_2;
          for (lVar13 = param_2[1] * 0x70; lVar13 != 0; lVar13 = lVar13 + -0x70) {
            puVar6 = puVar1;
            func_0x0001075725f8();
            FUN_10758ee8c(puVar3 + 2,*(long *)*puVar6 + unaff_x24 * 0x70);
            puVar1 = puVar1 + 0xe;
          }
          func_0x00010774339c();
          func_0x000107277aa4();
          puVar3[10] = puVar3[1];
          puVar3[9] = *puVar3;
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 0x15) = 8;
          func_0x000107277668(puVar3 + 5,puVar3 + 8);
          func_0x00010726af18(puVar3 + 9);
          func_0x000107743144();
          func_0x000107742aa8();
        }
      }
      plVar7 = puVar3 + 5;
      func_0x000107277aa4(puVar3 + 8);
      lVar13 = puVar3[8];
      unaff_x19[3] = puVar3[9];
      unaff_x19[2] = lVar13;
      puVar3[8] = 0;
      puVar3[9] = 0;
      func_0x0001077424ac(8);
      plVar5 = puVar3 + 8;
      func_0x00010726b188();
      func_0x0001077436f0();
    }
    param_2 = plVar7;
    func_0x000107741a80();
    if ((bool)uVar4) {
      return plVar5;
    }
    ___stack_chk_fail();
    param_1 = plVar5;
    func_0x0001077436f0();
    func_0x000107742904();
    puVar8 = &UNK_10773c960;
    func_0x0001077438e0();
    puVar3[8] = puVar3 + 0x22;
    puVar3[9] = puVar8;
    unaff_x29 = puVar3 + 8;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != 0) {
      param_1 = (long *)*unaff_x23;
      func_0x0001077420ac(puVar3 + -0x84);
      func_0x000107743260();
      if ((bool)uVar4) {
        func_0x0001077430d0();
        param_2 = param_1;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        param_2 = param_1;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)uVar4) {
        func_0x000107742c5c();
        func_0x000107741c94(puVar3[-1]);
        if ((bool)uVar4) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x000107742784();
        func_0x00010727f7f8();
        func_0x000107742c5c();
        func_0x000107742904();
        puVar3[-0x8a] = unaff_x20;
        puVar3[-0x89] = plVar5;
        puVar3[-0x88] = unaff_x29;
        puVar3[-0x87] = &DAT_10773ca5c;
        *param_1 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(param_1 + 9);
        func_0x00010772d754(param_1 + 5);
        func_0x0001072c9884(param_1 + 2);
        return param_1;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    unaff_x30 = &UNK_10773c9e8;
    puVar3 = puVar3 + -0x86;
    unaff_x19 = plVar5;
  } while( true );
}



/* Entry: 10773cd4c; end: 10773ce1f;  */

undefined8 * FUN_10773cd4c(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
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
    func_0x00010773cb6c();
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
  func_0x000107741a68();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773d138; end: 10773d14b;  */

void FUN_10773d138(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773d4ac; end: 10773d4b7;  */

/* WARNING: Possible PIC construction at 0x00010773d58c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d590) */
/* WARNING: Removing unreachable block (ram,0x00010773d5a4) */
/* WARNING: Removing unreachable block (ram,0x00010773d598) */
/* WARNING: Removing unreachable block (ram,0x00010773d5b0) */

undefined8 *
FUN_10773d4ac(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar4 = param_4;
    puVar3 = param_2;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741ca8(param_1);
    unaff_x19 = (undefined8 *)(puVar1 + -0xa8);
    func_0x000107723ac8();
    func_0x000107743284();
    func_0x00010745fc58();
    func_0x000107742678();
    func_0x000107742e4c();
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    puVar2 = unaff_x19;
    func_0x000107742e4c();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -0xe0) = unaff_x22;
    *(undefined1 **)(puVar1 + -0xd8) = puVar1 + -0xa8;
    *(undefined1 **)(puVar1 + -0xd0) = puVar4;
    *(undefined8 **)(puVar1 + -200) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xb8) = &UNK_10773d51c;
    unaff_x29 = puVar1 + -0xc0;
    func_0x000107741b04();
    *(undefined8 *)(puVar1 + -0xe8) = extraout_x8;
    *(undefined4 *)(puVar1 + -0x170) = 0;
    func_0x000107742168();
    puVar2 = (undefined8 *)*puVar2;
    func_0x000107742380(puVar1 + -0x168);
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
    in_ZR = (int)puVar3 == 1;
    if (!(bool)in_ZR) break;
    param_1 = puVar1 + -0x168;
    param_4 = puVar1 + -0x1d8;
    unaff_x30 = &UNK_10773d590;
    puVar1 = puVar1 + -0x1e0;
    param_2 = puVar4;
    unaff_x20 = puVar4;
    unaff_x21 = puVar3;
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  func_0x000107742904();
  *(undefined1 **)(puVar1 + -0x200) = puVar4;
  *(undefined8 **)(puVar1 + -0x1f8) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x1f0) = unaff_x29;
  *(undefined **)(puVar1 + -0x1e8) = &DAT_10773d5ec;
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773d774; end: 10773d843;  */

undefined8 * FUN_10773d774(undefined8 *param_1,int param_2)

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
    func_0x00010773d6d8();
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
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773da40; end: 10773db37;  */

void FUN_10773da40(undefined8 *param_1)

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
      goto LAB_10773daf4;
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
LAB_10773daf4:
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
      func_0x000107575b20();
    }
    func_0x000107742678();
    func_0x00010774323c();
    return;
  }
  return;
}



/* Entry: 10773ddd8; end: 10773de8f;  */

undefined8 * FUN_10773ddd8(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
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
  cVar1 = SBORROW4(param_2,1);
  cVar2 = param_2 + -1 < 0;
  uVar3 = param_2 == 1;
  if ((bool)uVar3) {
    func_0x0001077429b4();
    func_0x0001077436ac();
    func_0x0001077430d8();
    func_0x0001077428e4(!(bool)uVar3 && cVar2 == cVar1);
    func_0x000107742d68();
    func_0x000107741e30();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774265c();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e0ac; end: 10773e0bf;  */

void FUN_10773e0ac(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773e3a8; end: 10773e3ff;  */

void FUN_10773e3a8(void)

{
  undefined1 in_ZR;
  
  func_0x000107742718();
  func_0x000107743c28();
  if ((bool)in_ZR) {
    func_0x000107742dd4();
    func_0x000104c2fc88();
  }
  func_0x000107742678();
  func_0x00010774323c();
  return;
}



/* Entry: 10773e6f8; end: 10773e70b;  */

void FUN_10773e6f8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773e9f0; end: 10773ea17;  */

void FUN_10773e9f0(void)

{
  char in_NG;
  char in_OV;
  
  func_0x000107742878();
  func_0x0001077430d8();
  func_0x0001077424f8(in_NG == in_OV);
  return;
}



/* Entry: 10773ed70; end: 10773ed73;  */

undefined8 * FUN_10773ed70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773f04c; end: 10773f057;  */

/* WARNING: Possible PIC construction at 0x00010773f118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773f11c) */
/* WARNING: Removing unreachable block (ram,0x00010773f134) */
/* WARNING: Removing unreachable block (ram,0x00010773f128) */
/* WARNING: Removing unreachable block (ram,0x00010773f140) */

undefined8 *
FUN_10773f04c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
      func_0x000107575ba8();
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
    *(undefined **)(puVar1 + -0x78) = &UNK_10773f0b4;
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
    unaff_x30 = &UNK_10773f11c;
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
  *(undefined **)(puVar1 + -0x1d8) = &DAT_10773f184;
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773f368; end: 10773f36b;  */

undefined8 * FUN_10773f368(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773f600; end: 10773f703;  */

void FUN_10773f600(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong unaff_x24;
  undefined1 auStack_88 [136];
  
  func_0x000107743290();
  func_0x0001077429f8();
  func_0x000107741a34();
  func_0x000107742100();
  do {
    uVar1 = 1 < unaff_x24;
    uVar2 = unaff_x24 == 2;
    if ((bool)uVar2) {
      func_0x0001077424e0();
      func_0x000107742edc();
      func_0x000107742554();
      func_0x000107742bc8();
      func_0x000107742bd8();
      func_0x000107742c84();
      if ((bool)uVar2) {
        func_0x000107742ce0();
        func_0x000107741b4c();
      }
      else {
        func_0x000107742d60();
        func_0x0001077428fc();
      }
      func_0x000107742220();
      goto LAB_10773f6b4;
    }
    func_0x0001077426f4();
    func_0x0001077420ac(auStack_88);
    func_0x000107742d80();
    if ((bool)uVar2) {
      func_0x0001077429f0();
      func_0x000107742184();
    }
    else {
      func_0x0001077429e8();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar2);
  uVar2 = 0;
LAB_10773f6b4:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x0001077429e0();
  func_0x000107742904();
  func_0x000107743024();
  func_0x0001077430d8();
  func_0x0001077424f8(!(bool)uVar1 || (bool)uVar2);
  return;
}



/* Entry: 10773f92c; end: 10773f9fb;  */

undefined8 * FUN_10773f92c(undefined8 *param_1,int param_2)

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
    func_0x00010773f8d0();
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
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773fc08; end: 10773fc1b;  */

void FUN_10773fc08(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773fea8; end: 10773feb3;  */

/* WARNING: Possible PIC construction at 0x000107740148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774014c) */
/* WARNING: Removing unreachable block (ram,0x000107740168) */
/* WARNING: Removing unreachable block (ram,0x000107740158) */
/* WARNING: Removing unreachable block (ram,0x000107740178) */

undefined8 *
FUN_10773fea8(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long extraout_x8_01;
  long lVar11;
  long extraout_x9;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong *unaff_x22;
  ulong uVar12;
  long lVar13;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar3 = (undefined1 *)register0x00000008;
  do {
    puVar6 = (ulong *)(puVar3 + -0x90);
    *(ulong **)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    puVar5 = param_4;
    func_0x000107741ca8();
    func_0x0001077515e0();
    uVar1 = (uint)param_2 & 0xffff;
    uVar4 = uVar1 == 0xff;
    if (uVar1 < 0x100) {
      param_1[8] = 0;
      func_0x000107742a28();
    }
    else {
      func_0x000107723c60(puVar3 + -0x78,(uint)param_2 & 0xff);
      if ((puVar3[-0x40] & 1) == 0) {
        param_1[8] = 0;
        func_0x000107742a28();
      }
      else {
        unaff_x21 = *param_4;
        unaff_x22 = (ulong *)param_4[1];
        func_0x00010724ef84(puVar3 + -0x90,puVar3 + -0x78);
        func_0x000105275210(unaff_x21,unaff_x21 + (long)unaff_x22 * 0x18);
        func_0x000107743830(*param_4);
        func_0x0001077425dc();
        func_0x00010774338c();
        puVar5 = puVar6;
      }
      param_2 = (undefined8 *)(puVar3 + -0x78);
      func_0x00010724b3d8(param_2);
    }
    func_0x0001077419ec();
    if ((bool)uVar4) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x000107742d44();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    param_2 = (undefined8 *)(puVar3 + -0x78);
    func_0x00010724b3d8();
    func_0x000107742904();
    puVar8 = &UNK_10773ff94;
    func_0x00010774309c();
    *(undefined1 **)(puVar3 + 0x150) = puVar3 + -0x10;
    *(undefined **)(puVar3 + 0x158) = puVar8;
    unaff_x29 = puVar3 + 0x150;
    func_0x000107743520();
    func_0x00010774205c();
    *(undefined8 *)(puVar3 + 0xf8) = extraout_x8_00;
    *(undefined1 **)(puVar3 + 0x20) = puVar3 + 0x38;
    *(undefined8 *)(puVar3 + 0x30) = 8;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    uVar9 = *puVar5;
    uVar12 = uVar9 >> 1;
    if (0x11 < uVar9) {
      uVar9 = uVar12;
      func_0x000107740378();
      lVar10 = 0;
      lVar13 = *(long *)(puVar3 + 0x20);
      *(undefined1 **)(puVar3 + -0x80) = puVar3 + 0x20;
      *(ulong *)(puVar3 + -0x78) = uVar12;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + 0x20;
      lVar11 = *(long *)(puVar3 + 0x28) * 0x18;
      while (lVar11 != lVar10) {
        func_0x00010774355c();
        lVar10 = extraout_x8_01;
        lVar11 = extraout_x9;
      }
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      func_0x0001077403d0(puVar3 + -0x60);
      *(undefined8 *)(puVar3 + -0x88) = 0;
      if (lVar13 != 0) {
        func_0x0001077403a4(lVar13,*(undefined8 *)(puVar3 + 0x28));
        if (puVar3 + 0x38 != *(undefined1 **)(puVar3 + 0x20)) {
          __ZdlPv();
        }
      }
      *(ulong *)(puVar3 + 0x20) = uVar9;
      *(ulong *)(puVar3 + 0x30) = uVar12;
      func_0x00010774040c(puVar3 + -0x88);
      uVar9 = *unaff_x22;
      uVar12 = uVar9 >> 1;
    }
    unaff_x22 = unaff_x22 + 1;
    if ((uVar9 & 1) != 0) {
      unaff_x22 = (ulong *)*unaff_x22;
    }
    lVar13 = uVar12 << 4;
    while (lVar13 != 0) {
      func_0x000107742380(puVar3 + -0x60,*unaff_x22);
      iVar2 = *(int *)(puVar3 + 0x18);
      if (iVar2 == 1) {
        func_0x0001073405dc(puVar3 + -0x60);
        func_0x000107776f6c(puVar3 + -0x88);
        puVar7 = (undefined8 *)(*(long *)(puVar3 + 0x20) + *(long *)(puVar3 + 0x28) * 0x18);
        if (*(long *)(puVar3 + 0x28) == *(long *)(puVar3 + 0x30)) {
          FUN_107740438(puVar3 + -0x68,puVar3 + 0x20,puVar7,puVar3 + -0x88);
        }
        else {
          uVar15 = *(undefined8 *)(puVar3 + -0x80);
          uVar14 = *(undefined8 *)(puVar3 + -0x88);
          puVar7[2] = *(undefined8 *)(puVar3 + -0x78);
          puVar7[1] = uVar15;
          *puVar7 = uVar14;
          *(undefined8 *)(puVar3 + -0x80) = 0;
          *(undefined8 *)(puVar3 + -0x78) = 0;
          *(undefined8 *)(puVar3 + -0x88) = 0;
          *(long *)(puVar3 + 0x28) = *(long *)(puVar3 + 0x28) + 1;
        }
        func_0x0001001148fc(puVar3 + -0x88);
      }
      else {
        func_0x00010756dd74(puVar3 + -0x60);
        func_0x0001077428fc();
      }
      func_0x00010774299c();
      unaff_x22 = unaff_x22 + 2;
      lVar13 = lVar13 + -0x10;
      uVar4 = iVar2 == 1;
      if (!(bool)uVar4) {
        puVar7 = (undefined8 *)(puVar3 + 0x20);
        func_0x0001077405a0(puVar7);
        func_0x000107741a80();
        if ((bool)uVar4) {
          return puVar7;
        }
        ___stack_chk_fail();
        func_0x000107742c90();
        func_0x0001001148fc();
        func_0x00010774299c();
        puVar7 = (undefined8 *)(puVar3 + 0x20);
        func_0x0001077405a0();
        func_0x000107742904();
        *(undefined8 **)(puVar3 + -0xb0) = param_2;
        *(undefined8 *)(puVar3 + -0xa8) = extraout_x8;
        *(undefined1 **)(puVar3 + -0xa0) = unaff_x29;
        *(undefined **)(puVar3 + -0x98) = &DAT_1077401e4;
        *puVar7 = &PTR_DAT_1109d1d80;
        func_0x000104c2f714(puVar7 + 9);
        func_0x00010772d754(puVar7 + 5);
        func_0x0001072c9884(puVar7 + 2);
        return puVar7;
      }
    }
    *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + 0x28);
    param_1 = puVar3 + -0x60;
    param_4 = (ulong *)(puVar3 + -0x88);
    unaff_x30 = &UNK_10774014c;
    puVar3 = puVar3 + -0x90;
    unaff_x19 = extraout_x8;
    unaff_x20 = param_2;
  } while( true );
}



/* Entry: 107740438; end: 10774059f;  */

void FUN_107740438(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar6;
  long lVar7;
  long extraout_x9_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((ulong)((*(long *)(param_2 + 8) + 1) - *(long *)(param_2 + 0x10)) <=
      0x555555555555555U - *(long *)(param_2 + 0x10)) {
    func_0x000107742a34();
    if (extraout_x9 >> 0x3d == 0) {
      uVar6 = (extraout_x9 << 3) / 5;
    }
    else {
      uVar6 = extraout_x9 << 3;
      if (4 < extraout_x9 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    if (0x555555555555554 < uVar6) {
      uVar6 = 0x555555555555555;
    }
    uVar4 = extraout_x8;
    if (extraout_x8 <= uVar6) {
      uVar4 = uVar6;
    }
    func_0x000107740378();
    lVar5 = 0;
    lVar2 = *unaff_x20;
    lVar7 = unaff_x20[1];
    while (puVar1 = (undefined8 *)(uVar4 + lVar5), (undefined8 *)(lVar2 + lVar5) != unaff_x21) {
      func_0x00010774355c();
      lVar5 = extraout_x8_00;
      lVar7 = extraout_x9_00;
    }
    uVar8 = *param_4;
    puVar1[1] = param_4[1];
    *puVar1 = uVar8;
    puVar1[2] = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    while( true ) {
      lVar5 = lVar5 + 0x18;
      uVar3 = unaff_x21 == (undefined8 *)(lVar2 + lVar7 * 0x18);
      if ((bool)uVar3) break;
      puVar1 = (undefined8 *)(uVar4 + lVar5);
      uVar8 = *unaff_x21;
      puVar1[1] = unaff_x21[1];
      *puVar1 = uVar8;
      puVar1[2] = unaff_x21[2];
      unaff_x21[1] = 0;
      unaff_x21[2] = 0;
      *unaff_x21 = 0;
      unaff_x21 = unaff_x21 + 3;
    }
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x0001077403d0(&uStack_68);
    uStack_80 = 0;
    if (lVar2 != 0) {
      func_0x0001077403a4(lVar2,unaff_x20[1]);
      func_0x000107743840();
      if (!(bool)uVar3) {
        __ZdlPv();
      }
    }
    func_0x0001077433e4();
    func_0x00010774040c(&uStack_80);
    func_0x0001077437f0();
    return;
  }
  func_0x000107742888();
  func_0x000107743454();
  func_0x0001077403a4();
  if ((unaff_x19[2] != 0) && (unaff_x19 + 3 != (long *)*unaff_x19)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1077407cc; end: 1077408b3;  */

/* WARNING: Possible PIC construction at 0x0001077409fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107740a00) */
/* WARNING: Removing unreachable block (ram,0x000107740a1c) */
/* WARNING: Removing unreachable block (ram,0x000107740a0c) */
/* WARNING: Removing unreachable block (ram,0x000107740a2c) */

undefined8 * FUN_1077407cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 in_stack_00000100;
  
  func_0x000107742f4c();
  puVar7 = &stack0x00000100;
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
        puVar3 = (undefined8 *)&stack0x00000028;
        func_0x00010772fe40(puVar3);
        func_0x000107741b4c();
      }
      else {
        puVar3 = (undefined8 *)&stack0x00000028;
        func_0x00010772fe28(puVar3);
        func_0x0001077428fc();
      }
      func_0x00010774294c(&stack0x00000028);
      break;
    }
    puVar3 = (undefined8 *)*unaff_x24;
    func_0x0001077420ac(&stack0x00000028,puVar3);
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
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742698();
  func_0x00010772fe9c();
  func_0x000107742aa8();
  puVar8 = &UNK_1077408b4;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  puVar3 = extraout_x8;
  while( true ) {
    puVar4 = puVar3;
    puVar5 = (undefined8 *)(puVar1 + -0xb0);
    puVar6 = (undefined8 *)(puVar1 + -0xb0);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    puVar3 = puVar4;
    func_0x000107741ca8();
    uVar2 = param_3[1] == 1;
    if ((ulong)param_3[1] < 2) {
      *(undefined1 *)(puVar4 + 1) = 0;
      func_0x000107742a28();
    }
    else {
      func_0x0001077429f8();
      param_3 = (undefined8 *)*param_3;
      func_0x000107573ddc();
      func_0x000107723bd4();
      uVar2 = puVar1[-0x40] == '\x01';
      puVar3 = puVar5;
      if ((bool)uVar2) {
        puVar3 = (undefined8 *)(*unaff_x20 + 0x70);
        func_0x000107740668(puVar3,*unaff_x20 + unaff_x20[1] * 0x70);
        func_0x000107743830(*unaff_x20);
        param_3 = puVar6;
      }
      func_0x0001077425dc();
      func_0x0001077433a8();
    }
    func_0x0001077419ec();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x000107742d44();
    func_0x000107296ad0();
    func_0x000107742904();
    puVar8 = &UNK_107740978;
    func_0x0001077438e0();
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = puVar8;
    puVar7 = (undefined8 *)(puVar1 + -0x70);
    func_0x000107743520();
    func_0x000107741b04();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != (long *)0x0) {
      puVar3 = (undefined8 *)*param_4;
      func_0x000107742380(puVar1 + -0x4d0);
      func_0x000107743260();
      if ((bool)uVar2) {
        func_0x0001077430d0();
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)uVar2) {
        func_0x000107742c5c();
        func_0x000107741c94(*(undefined8 *)(puVar1 + -0xb8));
        if (!(bool)uVar2) {
          ___stack_chk_fail();
          func_0x000107742784();
          func_0x00010772fe9c();
          func_0x000107742c5c();
          func_0x000107742904();
          *(long **)(puVar1 + -0x500) = unaff_x20;
          *(undefined8 **)(puVar1 + -0x4f8) = puVar4;
          *(undefined8 **)(puVar1 + -0x4f0) = puVar7;
          *(undefined **)(puVar1 + -0x4e8) = &DAT_107740a7c;
          *puVar3 = &PTR_DAT_1109d1d80;
          func_0x000104c2f714(puVar3 + 9);
          func_0x00010772d754(puVar3 + 5);
          func_0x0001072c9884(puVar3 + 2);
          return puVar3;
        }
        return puVar3;
      }
    }
    func_0x000107743254();
    func_0x000107743364();
    puVar8 = &UNK_107740a00;
    puVar1 = puVar1 + -0x4e0;
    unaff_x19 = puVar4;
  }
  return puVar3;
}



/* Entry: 107740b88; end: 107740c6b;  */

undefined8 * FUN_107740b88(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong extraout_x8;
  long lVar8;
  long *unaff_x23;
  undefined8 auStack_4f0 [15];
  int iStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined4 uStack_40;
  
  func_0x000107741ca8();
  if ((param_3 == 1) && (*(int *)(param_2 + 0xd) == 8)) {
    func_0x000107325cc8();
    param_1 = param_2;
    func_0x000107743000();
    func_0x000107743110(*param_1);
    func_0x000107742d78();
    lVar1 = ((long *)*param_2)[1];
    for (lVar8 = *(long *)*param_2; uVar2 = lVar8 == lVar1, !(bool)uVar2; lVar8 = lVar8 + 0x70) {
      if (*(int *)(lVar8 + 0x68) != 0) {
        param_1 = auStack_c0;
        FUN_10758ee8c(param_1,lVar8);
      }
    }
    func_0x00010774339c();
    func_0x000107277aa4();
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_40 = 8;
    func_0x000107742ab8();
    func_0x000107742bf8();
    func_0x000107743144();
    func_0x000107742aa8();
  }
  else {
    uVar2 = 0;
    func_0x00010774238c();
  }
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742aa8();
  func_0x000107742904();
  puVar7 = &UNK_107740c6c;
  func_0x0001077438e0();
  puVar5 = auStack_4f0;
  puVar6 = auStack_4f0;
  puStack_90 = &stack0xfffffffffffffff0;
  puStack_88 = puVar7;
  func_0x000107741970();
  func_0x000107743b18();
  uStack_460 = 8;
  uStack_468 = 0;
  func_0x000107742ed0();
  func_0x00010772e118(&uStack_470);
  func_0x0001077420c4();
  do {
    if ((extraout_x8 & 0x1ffffffffffffffe) == 0) {
      FUN_107740b88(auStack_4f0,uStack_470,uStack_468);
      func_0x000107743744();
      if ((bool)uVar2) {
        func_0x00010727f7dc();
        func_0x000107742b70();
        puVar3 = puVar6;
      }
      else {
        func_0x000107743a0c();
        func_0x0001077428fc();
        puVar3 = puVar5;
      }
      func_0x00010774290c(auStack_4f0);
      break;
    }
    puVar3 = (undefined8 *)*unaff_x23;
    func_0x0001077420ac(auStack_4f0);
    uVar2 = iStack_478 == 1;
    if ((bool)uVar2) {
      puVar4 = auStack_4f0;
      func_0x0001073405dc(auStack_4f0);
      puVar3 = &uStack_470;
      func_0x00010772e3a0(puVar3,puVar4);
    }
    else {
      func_0x000107743a0c();
      func_0x0001077428fc();
    }
    func_0x000107742ca4();
    func_0x000107742668();
  } while ((bool)uVar2);
  func_0x0001077435ec();
  func_0x000107741c94(uStack_d8);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001077426a8();
  func_0x00010727f7f8();
  func_0x0001077435ec();
  func_0x000107742904();
  *puVar3 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar3 + 9);
  func_0x00010772d754(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 107740fd8; end: 107740fdb;  */

undefined8 * FUN_107740fd8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107741208; end: 1077412bf;  */

void FUN_107741208(undefined8 *param_1)

{
  double *pdVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long extraout_x8;
  uint uVar4;
  int unaff_w21;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  plVar3 = (long *)*param_1;
  func_0x000107741e20();
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
  uVar2 = unaff_w21 == 1;
  if ((bool)uVar2) {
    func_0x000107742aec();
    func_0x000107742c78();
    if ((bool)uVar2) {
      func_0x000107742d68();
      func_0x000107742548();
    }
    else {
      func_0x0001077430b8();
      func_0x0001077428fc();
    }
    func_0x000107742344();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010774206c();
    func_0x000107742088();
    func_0x000107742904();
    pdVar1 = (double *)*plVar3;
    if ((plVar3[1] & 0xfffffffffffffffeU) == 2) {
      dVar8 = (double)(long)*pdVar1;
      dVar7 = (double)(long)pdVar1[1];
      if (plVar3[1] == 3) {
        uVar4 = (uint)pdVar1[2];
      }
      else {
        uVar4 = 1;
      }
      if ((dVar8 <= dVar7 && uVar4 != 0) && (dVar7 < dVar8 || -1 < (int)uVar4)) {
        dVar6 = (dVar7 - dVar8) / (double)uVar4;
        func_0x000107743000(dVar6);
        func_0x0001073b504c(&uStack_60,(long)dVar6);
        for (iVar5 = (int)dVar8; (double)iVar5 < dVar7; iVar5 = iVar5 + uVar4) {
          uStack_70 = CONCAT44(uStack_70._4_4_,(float)iVar5);
          func_0x000107743430();
          func_0x0001074c4f8c();
        }
        func_0x00010774339c();
        func_0x000107535bd0();
        *(undefined8 *)(extraout_x8 + 0x10) = uStack_68;
        *(undefined8 *)(extraout_x8 + 8) = uStack_70;
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x000107742a28();
        func_0x0001072dbd40(&uStack_70);
        func_0x0001056d1ce4(&uStack_60);
        return;
      }
    }
    func_0x0001072f6da0(&uStack_60);
    *(undefined8 *)(extraout_x8 + 0x10) = uStack_58;
    *(undefined8 *)(extraout_x8 + 8) = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x000107742a28();
    func_0x0001072dbd40(&uStack_60);
    return;
  }
  return;
}



/* Entry: 107741640; end: 107741683;  */

void FUN_107741640(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107741be8();
  func_0x0001077425b0();
  func_0x00010777540c();
  func_0x00010774257c();
  func_0x000107742bf8();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d3fb8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 1077417dc; end: 107741803;  */

void FUN_1077417dc(undefined8 param_1)

{
  func_0x0001077438a8();
  func_0x0001077434d8(param_1,&PTR_DAT_1109d4048);
  func_0x0001077430ec();
  return;
}



/* Entry: 1077450cc; end: 107745243;  */

/* WARNING: Possible PIC construction at 0x00010774512c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107745230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107745130) */
/* WARNING: Removing unreachable block (ram,0x00010774513c) */
/* WARNING: Removing unreachable block (ram,0x000107745150) */
/* WARNING: Removing unreachable block (ram,0x000107745158) */
/* WARNING: Removing unreachable block (ram,0x000107745164) */
/* WARNING: Removing unreachable block (ram,0x00010774516c) */
/* WARNING: Removing unreachable block (ram,0x000107745178) */
/* WARNING: Removing unreachable block (ram,0x000107745180) */
/* WARNING: Removing unreachable block (ram,0x000107745188) */
/* WARNING: Removing unreachable block (ram,0x0001077451a8) */
/* WARNING: Removing unreachable block (ram,0x000107745194) */
/* WARNING: Removing unreachable block (ram,0x00010774519c) */
/* WARNING: Removing unreachable block (ram,0x0001077451ac) */
/* WARNING: Removing unreachable block (ram,0x0001077451b4) */
/* WARNING: Removing unreachable block (ram,0x0001077451cc) */
/* WARNING: Removing unreachable block (ram,0x0001077451d4) */
/* WARNING: Removing unreachable block (ram,0x0001077451bc) */
/* WARNING: Removing unreachable block (ram,0x000107745144) */
/* WARNING: Removing unreachable block (ram,0x000107745234) */

void FUN_1077450cc(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = param_1;
  plVar1 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 > param_2 || param_2 == plVar4) {
    if (plVar4 <= param_2) {
      return;
    }
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar4 < (long *)0x3) || (((ulong)plVar4 & (long)plVar4 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107746408();
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (plVar4 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto code_r0x000107745244;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)((long)param_2 << 3);
    __Znwm();
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x000107745244:
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077453c0; end: 1077453e7;  */

/* WARNING: Possible PIC construction at 0x000107745544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107745810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077457a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107745814) */
/* WARNING: Removing unreachable block (ram,0x000107745828) */
/* WARNING: Removing unreachable block (ram,0x000107745848) */
/* WARNING: Removing unreachable block (ram,0x000107745850) */
/* WARNING: Removing unreachable block (ram,0x000107745858) */
/* WARNING: Removing unreachable block (ram,0x00010774585c) */
/* WARNING: Removing unreachable block (ram,0x000107745548) */
/* WARNING: Removing unreachable block (ram,0x0001077457ac) */
/* WARNING: Removing unreachable block (ram,0x0001077457bc) */
/* WARNING: Removing unreachable block (ram,0x0001077457c4) */
/* WARNING: Removing unreachable block (ram,0x0001077457cc) */
/* WARNING: Removing unreachable block (ram,0x0001077457d0) */

undefined8 * FUN_1077453c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 *unaff_x24;
  long lVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar16;
  undefined *unaff_x30;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar11 = LZCOUNT((long)param_2 - (long)param_1 >> 4) << 1 ^ 0x7e;
  uVar12 = 1;
  puVar2 = (undefined1 *)register0x00000008;
code_r0x0001077453e8:
  puVar4 = puVar2 + -0x80;
  puVar3 = puVar2 + -0x80;
  *(undefined8 **)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 **)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 **)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 **)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  unaff_x29 = puVar2 + -0x10;
  puVar9 = param_1;
  puVar10 = param_2;
  puVar6 = param_3;
  unaff_x21 = param_2;
code_r0x000107745418:
  unaff_x20 = unaff_x21 + -2;
  *(undefined8 **)(puVar2 + -0x78) = unaff_x21 + -4;
  unaff_x25 = unaff_x21 + -6;
code_r0x00010774542c:
  unaff_x24 = (undefined8 *)-uVar11;
  unaff_x27 = param_1;
code_r0x000107745434:
  param_1 = unaff_x27;
  unaff_x24 = (undefined8 *)((long)unaff_x24 + 1);
  uVar11 = (long)unaff_x21 - (long)param_1 >> 4;
  puVar5 = param_1;
  switch(uVar11) {
  case 0:
  case 1:
    goto code_r0x000107745590;
  case 2:
    func_0x000107746354(param_3,unaff_x20);
    if ((int)param_3 != 0) {
      func_0x00010774656c();
      uVar18 = unaff_x21[-1];
      uVar12 = *unaff_x20;
      func_0x000107746554();
      unaff_x21[-1] = uVar18;
      *unaff_x20 = uVar12;
    }
    goto code_r0x000107745590;
  case 3:
    puVar6 = param_1 + 2;
    puVar16 = *(undefined1 **)(puVar2 + -0x10);
    puVar17 = *(undefined **)(puVar2 + -8);
    puVar10 = unaff_x20;
    puVar9 = param_3;
    func_0x0001077463b4();
    goto code_r0x0001077456b8;
  case 4:
    puVar6 = param_1 + 2;
    puVar10 = param_1 + 4;
    puVar16 = *(undefined1 **)(puVar2 + -0x10);
    puVar17 = *(undefined **)(puVar2 + -8);
    puVar7 = param_3;
    func_0x0001077463b4();
    break;
  case 5:
    puVar6 = param_1 + 2;
    puVar10 = param_1 + 4;
    uVar18 = *(undefined8 *)(puVar2 + -0x10);
    uVar19 = *(undefined8 *)(puVar2 + -8);
    puVar9 = unaff_x20;
    puVar8 = param_3;
    func_0x0001077463b4();
    puVar4 = puVar2 + -0x100;
    *(undefined8 **)(puVar2 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0xb8) = uVar12;
    *(undefined8 **)(puVar2 + -0xb0) = param_1;
    *(undefined8 **)(puVar2 + -0xa8) = unaff_x21;
    *(undefined8 **)(puVar2 + -0xa0) = unaff_x20;
    *(undefined8 **)(puVar2 + -0x98) = param_3;
    *(undefined8 *)(puVar2 + -0x90) = uVar18;
    *(undefined8 *)(puVar2 + -0x88) = uVar19;
    puVar16 = puVar2 + -0x90;
    puVar7 = puVar8;
    func_0x000107746578();
    puVar17 = &UNK_107745814;
    unaff_x21 = puVar8;
    unaff_x24 = puVar9;
    break;
  default:
    if ((long)uVar11 < 0x18) {
      func_0x000107746448();
      if ((int)uVar12 == 0) {
        uVar18 = *(undefined8 *)(puVar2 + -0x10);
        uVar19 = *(undefined8 *)(puVar2 + -8);
        func_0x0001077463b4();
        if (puVar9 != puVar10) {
          *(undefined8 **)(puVar2 + -0xc0) = unaff_x24;
          *(undefined8 *)(puVar2 + -0xb8) = uVar12;
          *(undefined8 **)(puVar2 + -0xb0) = param_1;
          *(undefined8 **)(puVar2 + -0xa8) = unaff_x21;
          *(undefined8 **)(puVar2 + -0xa0) = unaff_x20;
          *(undefined8 **)(puVar2 + -0x98) = param_3;
          *(undefined8 *)(puVar2 + -0x90) = uVar18;
          *(undefined8 *)(puVar2 + -0x88) = uVar19;
          puVar5 = puVar9 + -2;
          puVar7 = puVar9;
          while (puVar8 = puVar7 + 2, puVar8 != puVar10) {
            func_0x000107746500();
            if ((int)puVar9 != 0) {
              uVar12 = *puVar8;
              *(undefined8 *)(puVar2 + -200) = puVar7[3];
              *(undefined8 *)(puVar2 + -0xd0) = uVar12;
              puVar7 = puVar5;
              do {
                puVar13 = puVar7;
                puVar13[5] = puVar13[3];
                puVar13[4] = puVar13[2];
                puVar9 = puVar6;
                func_0x000107746354(puVar6,puVar2 + -0xd0);
                puVar7 = puVar13 + -2;
              } while (((ulong)puVar9 & 1) != 0);
              uVar12 = *(undefined8 *)(puVar2 + -0xd0);
              puVar13[3] = *(undefined8 *)(puVar2 + -200);
              puVar13[2] = uVar12;
            }
            puVar5 = puVar5 + 2;
            puVar7 = puVar8;
          }
        }
        return puVar9;
      }
      uVar18 = *(undefined8 *)(puVar2 + -0x10);
      uVar19 = *(undefined8 *)(puVar2 + -8);
      func_0x0001077463b4();
      if (puVar9 == puVar10) {
        return puVar9;
      }
      *(undefined8 **)(puVar2 + -0xc0) = unaff_x24;
      *(undefined8 *)(puVar2 + -0xb8) = uVar12;
      *(undefined8 **)(puVar2 + -0xb0) = param_1;
      *(undefined8 **)(puVar2 + -0xa8) = unaff_x21;
      *(undefined8 **)(puVar2 + -0xa0) = unaff_x20;
      *(undefined8 **)(puVar2 + -0x98) = param_3;
      *(undefined8 *)(puVar2 + -0x90) = uVar18;
      *(undefined8 *)(puVar2 + -0x88) = uVar19;
      func_0x000107746468();
      lVar14 = 0;
      puVar6 = puVar9;
      goto code_r0x0001077458a0;
    }
    if (unaff_x24 == (undefined8 *)0x1) {
      uVar18 = *(undefined8 *)(puVar2 + -0x10);
      uVar19 = *(undefined8 *)(puVar2 + -8);
      puVar6 = param_1;
      puVar10 = unaff_x21;
      puVar9 = unaff_x21;
      puVar5 = param_3;
      func_0x0001077463b4();
      if (puVar6 != puVar10) {
        *(undefined8 *)(puVar2 + -0xc0) = 1;
        *(undefined8 *)(puVar2 + -0xb8) = uVar12;
        *(undefined8 **)(puVar2 + -0xb0) = param_1;
        *(undefined8 **)(puVar2 + -0xa8) = unaff_x21;
        *(undefined8 **)(puVar2 + -0xa0) = unaff_x20;
        *(undefined8 **)(puVar2 + -0x98) = param_3;
        *(undefined8 *)(puVar2 + -0x90) = uVar18;
        *(undefined8 *)(puVar2 + -0x88) = uVar19;
        if (puVar6 != puVar10) {
          func_0x000107745e0c();
          for (puVar7 = puVar10; puVar7 != puVar9; puVar7 = puVar7 + 2) {
            puVar8 = puVar5;
            func_0x000107746354(puVar5,puVar7);
            if ((int)puVar8 != 0) {
              uVar18 = puVar7[1];
              uVar12 = *puVar7;
              uVar19 = *puVar6;
              puVar7[1] = puVar6[1];
              *puVar7 = uVar19;
              puVar6[1] = uVar18;
              *puVar6 = uVar12;
              func_0x000107745e78(puVar6,puVar5,(long)puVar10 - (long)puVar6 >> 4,puVar6);
            }
          }
          func_0x000107745f8c(puVar6,puVar10,puVar5);
          puVar9 = puVar7;
        }
        return puVar9;
      }
      return puVar9;
    }
    puVar9 = param_1 + (uVar11 & 0xfffffffffffffffe);
    if (uVar11 < 0x81) {
      puVar10 = param_1;
      puVar6 = unaff_x20;
      func_0x000107746400();
      param_2 = puVar9;
      unaff_x27 = param_1;
    }
    else {
      func_0x000107746400(param_1,puVar9,unaff_x20);
      unaff_x27 = puVar9 + -2;
      func_0x000107746400(param_1 + 2,unaff_x27,*(undefined8 *)(puVar2 + -0x78));
      func_0x000107746400(param_1 + 4,puVar9 + 2,unaff_x25);
      puVar6 = puVar9 + 2;
      param_2 = unaff_x27;
      puVar10 = puVar9;
      func_0x000107746400();
      func_0x00010774656c();
      uVar19 = puVar9[1];
      uVar18 = *puVar9;
      func_0x000107746554();
      puVar9[1] = uVar19;
      *puVar9 = uVar18;
    }
    if ((int)uVar12 == 0) {
      puVar10 = param_1 + -2;
      puVar9 = param_3;
      func_0x000107746354();
      param_2 = puVar9;
      if (((ulong)puVar9 & 1) == 0) goto code_r0x000107745550;
    }
    func_0x000107746448();
    func_0x000107745aac();
    if (((ulong)puVar10 & 1) == 0) goto code_r0x000107745530;
    unaff_x28 = param_1;
    func_0x000107745ba8(param_1,param_2,param_3);
    unaff_x27 = param_2 + 2;
    puVar9 = unaff_x27;
    puVar10 = unaff_x21;
    puVar6 = param_3;
    func_0x000107745ba8();
    if ((int)puVar9 == 0) goto code_r0x000107745528;
    uVar11 = -(long)unaff_x24;
    unaff_x21 = param_2;
    if (((ulong)unaff_x28 & 1) != 0) goto code_r0x000107745590;
    goto code_r0x000107745418;
  }
  puVar3 = puVar4 + -0x70;
  *(undefined8 **)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = uVar12;
  *(undefined8 **)(puVar4 + -0x30) = param_1;
  *(undefined8 **)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar4 + -0x18) = param_3;
  *(undefined1 **)(puVar4 + -0x10) = puVar16;
  *(undefined **)(puVar4 + -8) = puVar17;
  puVar16 = puVar4 + -0x10;
  puVar9 = puVar7;
  func_0x000107746578();
  puVar17 = &UNK_1077457ac;
  unaff_x21 = puVar7;
code_r0x0001077456b8:
  *(undefined8 **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = uVar12;
  *(undefined8 **)(puVar3 + -0x30) = param_1;
  *(undefined8 **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar3 + -0x18) = param_3;
  *(undefined1 **)(puVar3 + -0x10) = puVar16;
  *(undefined **)(puVar3 + -8) = puVar17;
  puVar7 = puVar9;
  func_0x000107745694();
  puVar8 = puVar9;
  func_0x0001077463d0(puVar9,puVar10);
  if (((ulong)puVar7 & 1) == 0) {
    if ((int)puVar8 == 0) {
      return puVar8;
    }
    uVar18 = puVar6[1];
    uVar12 = *puVar6;
    uVar19 = *puVar10;
    puVar6[1] = puVar10[1];
    *puVar6 = uVar19;
    puVar10[1] = uVar18;
    *puVar10 = uVar12;
    func_0x000107745694(puVar9,puVar6,puVar5);
    if ((int)puVar9 != 0) {
      func_0x0001077465a0();
    }
  }
  else {
    if ((int)puVar8 == 0) {
      func_0x0001077465a0();
      func_0x0001077463d0(puVar9,puVar10);
      if ((int)puVar9 == 0) {
        return (undefined8 *)0x1;
      }
      uVar18 = puVar6[1];
      uVar12 = *puVar6;
      uVar19 = *puVar10;
      puVar6[1] = puVar10[1];
      *puVar6 = uVar19;
    }
    else {
      uVar18 = puVar5[1];
      uVar12 = *puVar5;
      uVar19 = *puVar10;
      puVar5[1] = puVar10[1];
      *puVar5 = uVar19;
    }
    puVar10[1] = uVar18;
    *puVar10 = uVar12;
  }
  return (undefined8 *)0x1;
code_r0x0001077458a0:
  puVar10 = puVar6 + 2;
  if (puVar10 == unaff_x20) {
    return puVar9;
  }
  puVar9 = param_3;
  func_0x0001077464e4();
  if ((int)puVar9 != 0) {
    uVar12 = *puVar10;
    *(undefined8 *)(puVar2 + -200) = puVar6[3];
    *(undefined8 *)(puVar2 + -0xd0) = uVar12;
    lVar1 = lVar14;
    do {
      lVar15 = lVar1;
      puVar6 = (undefined8 *)((long)unaff_x21 + lVar15);
      puVar6[3] = puVar6[1];
      puVar6[2] = *puVar6;
      puVar6 = unaff_x21;
      if (lVar15 == 0) goto code_r0x0001077458fc;
      puVar9 = param_3;
      func_0x000107745694(param_3,puVar2 + -0xd0,lVar15 + -0x10 + (long)unaff_x21);
      lVar1 = lVar15 + -0x10;
    } while (((ulong)puVar9 & 1) != 0);
    puVar6 = (undefined8 *)((long)unaff_x21 + lVar15);
code_r0x0001077458fc:
    func_0x000107746560(puVar6);
  }
  lVar14 = lVar14 + 0x10;
  puVar6 = puVar10;
  goto code_r0x0001077458a0;
code_r0x000107745550:
  func_0x000107746448();
  func_0x0001077459d0();
  uVar12 = 0;
  uVar11 = -(long)unaff_x24;
  param_1 = puVar9;
  goto code_r0x00010774542c;
code_r0x000107745528:
  if (((ulong)unaff_x28 & 1) == 0) {
code_r0x000107745530:
    uVar11 = -(long)unaff_x24;
    unaff_x30 = &UNK_107745548;
    puVar2 = puVar2 + -0x80;
    unaff_x19 = param_3;
    unaff_x22 = param_1;
    unaff_x23 = uVar12;
    unaff_x26 = param_2;
    goto code_r0x0001077453e8;
  }
  goto code_r0x000107745434;
code_r0x000107745590:
  puVar6 = *(undefined8 **)(puVar2 + -8);
  func_0x0001077463b4(puVar6);
  return puVar6;
}



/* Entry: 107745d50; end: 107745e77;  */

undefined8 *
FUN_107745d50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    func_0x000107745e0c(param_1,param_2,param_4);
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 2) {
      uVar2 = param_4;
      func_0x000107746354(param_4,puVar1);
      if ((int)uVar2 != 0) {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        uVar4 = *param_1;
        puVar1[1] = param_1[1];
        *puVar1 = uVar4;
        param_1[1] = uVar3;
        *param_1 = uVar2;
        func_0x000107745e78(param_1,param_4,(long)param_2 - (long)param_1 >> 4,param_1);
      }
    }
    func_0x000107745f8c(param_1,param_2,param_4);
    param_3 = puVar1;
  }
  return param_3;
}



/* Entry: 107746810; end: 107746987;  */

/* WARNING: Possible PIC construction at 0x000107746ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746e14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107746ebc: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x000107746ec0) */
/* WARNING: Removing unreachable block (ram,0x000107746ea4) */
/* WARNING: Removing unreachable block (ram,0x000107746e88) */
/* WARNING: Removing unreachable block (ram,0x000107746e6c) */
/* WARNING: Removing unreachable block (ram,0x000107746e50) */
/* WARNING: Removing unreachable block (ram,0x000107746e34) */
/* WARNING: Removing unreachable block (ram,0x000107746e18) */
/* WARNING: Removing unreachable block (ram,0x000107746dfc) */
/* WARNING: Removing unreachable block (ram,0x000107746de0) */
/* WARNING: Removing unreachable block (ram,0x0001077477e8) */
/* WARNING: Removing unreachable block (ram,0x0001077479bc) */
/* WARNING: Removing unreachable block (ram,0x000107746d00) */
/* WARNING: Removing unreachable block (ram,0x000107746b08) */
/* WARNING: Removing unreachable block (ram,0x000107746b0c) */
/* WARNING: Removing unreachable block (ram,0x000107746b10) */
/* WARNING: Removing unreachable block (ram,0x000107746b1c) */
/* WARNING: Removing unreachable block (ram,0x000107746954) */
/* WARNING: Removing unreachable block (ram,0x000107746958) */
/* WARNING: Removing unreachable block (ram,0x00010774695c) */
/* WARNING: Removing unreachable block (ram,0x000107746968) */
/* WARNING: Removing unreachable block (ram,0x000107746918) */
/* WARNING: Removing unreachable block (ram,0x000107746984) */
/* WARNING: Removing unreachable block (ram,0x000107746a68) */
/* WARNING: Removing unreachable block (ram,0x000107746a74) */
/* WARNING: Removing unreachable block (ram,0x000107746a98) */
/* WARNING: Removing unreachable block (ram,0x000107746aa4) */
/* WARNING: Removing unreachable block (ram,0x000107746ab4) */
/* WARNING: Removing unreachable block (ram,0x000107746ac0) */
/* WARNING: Removing unreachable block (ram,0x000107746b34) */
/* WARNING: Removing unreachable block (ram,0x000107746ba8) */
/* WARNING: Removing unreachable block (ram,0x000107746bb8) */
/* WARNING: Removing unreachable block (ram,0x000107746bd8) */
/* WARNING: Removing unreachable block (ram,0x000107746bec) */
/* WARNING: Removing unreachable block (ram,0x000107746bfc) */
/* WARNING: Removing unreachable block (ram,0x000107746bcc) */
/* WARNING: Removing unreachable block (ram,0x000107746c18) */
/* WARNING: Removing unreachable block (ram,0x000107746c28) */
/* WARNING: Removing unreachable block (ram,0x000107746cb0) */
/* WARNING: Removing unreachable block (ram,0x000107746cbc) */
/* WARNING: Removing unreachable block (ram,0x000107746ce4) */
/* WARNING: Removing unreachable block (ram,0x000107746cf4) */
/* WARNING: Removing unreachable block (ram,0x000107746cd8) */
/* WARNING: Removing unreachable block (ram,0x000107746d3c) */
/* WARNING: Removing unreachable block (ram,0x000107746d40) */
/* WARNING: Removing unreachable block (ram,0x000107746d44) */
/* WARNING: Removing unreachable block (ram,0x000107746d50) */
/* WARNING: Removing unreachable block (ram,0x000107746d58) */
/* WARNING: Removing unreachable block (ram,0x000107746dac) */
/* WARNING: Removing unreachable block (ram,0x000107746db8) */
/* WARNING: Removing unreachable block (ram,0x000107746de8) */
/* WARNING: Removing unreachable block (ram,0x000107746e04) */
/* WARNING: Removing unreachable block (ram,0x000107746e20) */
/* WARNING: Removing unreachable block (ram,0x000107746e3c) */
/* WARNING: Removing unreachable block (ram,0x000107746e58) */
/* WARNING: Removing unreachable block (ram,0x000107746e74) */
/* WARNING: Removing unreachable block (ram,0x000107746e90) */
/* WARNING: Removing unreachable block (ram,0x000107746eac) */
/* WARNING: Removing unreachable block (ram,0x000107746ec8) */
/* WARNING: Removing unreachable block (ram,0x000107746ee0) */
/* WARNING: Removing unreachable block (ram,0x000107747048) */
/* WARNING: Removing unreachable block (ram,0x000107747054) */
/* WARNING: Removing unreachable block (ram,0x000107747070) */
/* WARNING: Removing unreachable block (ram,0x000107747094) */
/* WARNING: Removing unreachable block (ram,0x0001077470a0) */
/* WARNING: Removing unreachable block (ram,0x0001077470c4) */
/* WARNING: Removing unreachable block (ram,0x0001077470dc) */
/* WARNING: Removing unreachable block (ram,0x0001077471d4) */
/* WARNING: Removing unreachable block (ram,0x0001077471e0) */
/* WARNING: Removing unreachable block (ram,0x000107747210) */
/* WARNING: Removing unreachable block (ram,0x00010774722c) */
/* WARNING: Removing unreachable block (ram,0x000107747248) */
/* WARNING: Removing unreachable block (ram,0x000107747264) */
/* WARNING: Removing unreachable block (ram,0x000107747280) */
/* WARNING: Removing unreachable block (ram,0x00010774729c) */
/* WARNING: Removing unreachable block (ram,0x0001077472b8) */
/* WARNING: Removing unreachable block (ram,0x0001077472d4) */
/* WARNING: Removing unreachable block (ram,0x0001077472f0) */
/* WARNING: Removing unreachable block (ram,0x0001077472fc) */
/* WARNING: Removing unreachable block (ram,0x000107747308) */
/* WARNING: Removing unreachable block (ram,0x000107747454) */
/* WARNING: Removing unreachable block (ram,0x000107747460) */
/* WARNING: Removing unreachable block (ram,0x000107747490) */
/* WARNING: Removing unreachable block (ram,0x0001077474ac) */
/* WARNING: Removing unreachable block (ram,0x0001077474c8) */
/* WARNING: Removing unreachable block (ram,0x0001077474e4) */
/* WARNING: Removing unreachable block (ram,0x000107747500) */
/* WARNING: Removing unreachable block (ram,0x00010774751c) */
/* WARNING: Removing unreachable block (ram,0x000107747538) */
/* WARNING: Removing unreachable block (ram,0x000107747554) */
/* WARNING: Removing unreachable block (ram,0x000107747570) */
/* WARNING: Removing unreachable block (ram,0x00010774757c) */
/* WARNING: Removing unreachable block (ram,0x000107747588) */
/* WARNING: Removing unreachable block (ram,0x0001077476d4) */
/* WARNING: Removing unreachable block (ram,0x0001077476e0) */
/* WARNING: Removing unreachable block (ram,0x000107747710) */
/* WARNING: Removing unreachable block (ram,0x00010774772c) */
/* WARNING: Removing unreachable block (ram,0x000107747748) */
/* WARNING: Removing unreachable block (ram,0x000107747764) */
/* WARNING: Removing unreachable block (ram,0x000107747780) */
/* WARNING: Removing unreachable block (ram,0x00010774779c) */
/* WARNING: Removing unreachable block (ram,0x0001077477b8) */
/* WARNING: Removing unreachable block (ram,0x0001077477d4) */
/* WARNING: Removing unreachable block (ram,0x0001077477f0) */
/* WARNING: Removing unreachable block (ram,0x0001077477fc) */
/* WARNING: Removing unreachable block (ram,0x000107747808) */
/* WARNING: Removing unreachable block (ram,0x000107747974) */
/* WARNING: Removing unreachable block (ram,0x000107747980) */
/* WARNING: Removing unreachable block (ram,0x000107747994) */
/* WARNING: Removing unreachable block (ram,0x0001077479a0) */
/* WARNING: Removing unreachable block (ram,0x0001077479b0) */
/* WARNING: Removing unreachable block (ram,0x0001077477dc) */
/* WARNING: Removing unreachable block (ram,0x0001077477c0) */
/* WARNING: Removing unreachable block (ram,0x0001077477a4) */
/* WARNING: Removing unreachable block (ram,0x000107747788) */
/* WARNING: Removing unreachable block (ram,0x00010774776c) */
/* WARNING: Removing unreachable block (ram,0x000107747750) */
/* WARNING: Removing unreachable block (ram,0x000107747734) */
/* WARNING: Removing unreachable block (ram,0x000107747718) */
/* WARNING: Removing unreachable block (ram,0x0001077476fc) */
/* WARNING: Removing unreachable block (ram,0x00010774755c) */
/* WARNING: Removing unreachable block (ram,0x000107747540) */
/* WARNING: Removing unreachable block (ram,0x000107747524) */
/* WARNING: Removing unreachable block (ram,0x000107747508) */
/* WARNING: Removing unreachable block (ram,0x0001077474ec) */
/* WARNING: Removing unreachable block (ram,0x0001077474d0) */
/* WARNING: Removing unreachable block (ram,0x0001077474b4) */
/* WARNING: Removing unreachable block (ram,0x000107747498) */
/* WARNING: Removing unreachable block (ram,0x00010774747c) */
/* WARNING: Removing unreachable block (ram,0x0001077472dc) */
/* WARNING: Removing unreachable block (ram,0x0001077472c0) */
/* WARNING: Removing unreachable block (ram,0x0001077472a4) */
/* WARNING: Removing unreachable block (ram,0x000107747288) */
/* WARNING: Removing unreachable block (ram,0x00010774726c) */
/* WARNING: Removing unreachable block (ram,0x000107747250) */
/* WARNING: Removing unreachable block (ram,0x000107747234) */
/* WARNING: Removing unreachable block (ram,0x000107747218) */
/* WARNING: Removing unreachable block (ram,0x0001077471fc) */
/* WARNING: Removing unreachable block (ram,0x0001077470d0) */
/* WARNING: Removing unreachable block (ram,0x000107746ed4) */
/* WARNING: Removing unreachable block (ram,0x000107747a50) */
/* WARNING: Removing unreachable block (ram,0x000107746eb4) */
/* WARNING: Removing unreachable block (ram,0x000107746e98) */
/* WARNING: Removing unreachable block (ram,0x000107746e7c) */
/* WARNING: Removing unreachable block (ram,0x000107746e60) */
/* WARNING: Removing unreachable block (ram,0x000107746e44) */
/* WARNING: Removing unreachable block (ram,0x000107746e28) */
/* WARNING: Removing unreachable block (ram,0x000107746e0c) */
/* WARNING: Removing unreachable block (ram,0x000107746df0) */
/* WARNING: Removing unreachable block (ram,0x000107746dd4) */
/* WARNING: Removing unreachable block (ram,0x0001077479f0) */
/* WARNING: Removing unreachable block (ram,0x0001077479f4) */
/* WARNING: Removing unreachable block (ram,0x0001077479f8) */
/* WARNING: Removing unreachable block (ram,0x000107747a04) */
/* WARNING: Removing unreachable block (ram,0x000107747a0c) */
/* WARNING: Removing unreachable block (ram,0x000107278574) */

void FUN_107746810(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_348 [112];
  undefined1 auStack_2d8 [168];
  undefined1 auStack_230 [504];
  undefined8 uStack_38;
  
  func_0x000107747a88();
  uStack_38 = extraout_x8;
  func_0x000107747c3c();
  func_0x000107747c4c();
  func_0x0001072964ec();
  func_0x000107747cd8();
  func_0x0001072deec0(auStack_230,auStack_348,param_2 + 0x38);
  func_0x000107747c7c(auStack_2d8);
  func_0x000107747d78();
  func_0x000107747cb0(auStack_2d8);
  func_0x000107747d78();
  func_0x0001072965a0(param_1,auStack_2d8,4);
  do {
    func_0x000107747d34();
    func_0x000107747d6c();
  } while (!(bool)in_ZR);
  func_0x000107747c60();
  func_0x000107747c58();
  func_0x000107747c74();
  func_0x000107747c34();
  func_0x000107747a3c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  do {
    func_0x00010729651c();
    func_0x000107747dac();
  } while( true );
}



/* Entry: 107747684; end: 107747903;  */

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
/* WARNING: Removing unreachable block (ram,0x0001077477e8) */
/* WARNING: Removing unreachable block (ram,0x0001077479bc) */
/* WARNING: Removing unreachable block (ram,0x0001077479f0) */
/* WARNING: Removing unreachable block (ram,0x0001077479f4) */
/* WARNING: Removing unreachable block (ram,0x0001077479f8) */
/* WARNING: Removing unreachable block (ram,0x000107747a04) */
/* WARNING: Removing unreachable block (ram,0x000107747a0c) */

void FUN_107747684(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_558 [336];
  undefined8 uStack_408;
  undefined1 auStack_358 [112];
  undefined1 auStack_2e8 [672];
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
  if ((bool)in_ZR) {
    func_0x000107747ae8();
    func_0x000107747b98();
  }
  else {
    func_0x000107747da0();
    if ((bool)in_ZR) {
      func_0x000107747ac8();
      func_0x000107747ba8();
    }
    else {
      func_0x000107747d94();
      if ((bool)in_ZR) {
        func_0x000107747ab8();
        func_0x000107747b68();
      }
      else {
        func_0x000107747d88();
        if ((bool)in_ZR) {
          func_0x000107747a98();
          func_0x000107747b48();
        }
        else {
          func_0x000107747df4();
          if ((bool)in_ZR) {
            func_0x000107747c24();
            func_0x000107747bb8();
          }
          else {
            func_0x000107747de8();
            if ((bool)in_ZR) {
              func_0x000107747c08();
              func_0x000107747b78();
            }
            else {
              func_0x000107747ddc();
              if ((bool)in_ZR) {
                func_0x000107747bf8();
                func_0x000107747b58();
              }
              else {
                func_0x000107747dd0();
                if ((bool)in_ZR) {
                  func_0x000107747be8();
                  func_0x000107747bc8();
                }
                else {
                  func_0x000107747dc4();
                  if (!(bool)in_ZR) {
                    func_0x000107747a3c(uStack_48);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000107747c44();
                    func_0x000107747c34();
                    func_0x000107747ce8();
                    func_0x000107747ca8();
                    func_0x000107747a88();
                    uStack_408 = extraout_x8_00;
                    func_0x000107747c7c();
                    func_0x000107747d60();
                    func_0x0001072964ec();
                    func_0x000107747cb0();
                    func_0x000107747d08();
                    func_0x000107747d10(extraout_x8,auStack_558);
                    do {
                      func_0x000107747d34();
                      func_0x000107747d6c();
                    } while (!(bool)in_ZR);
                    func_0x000107747c60();
                    func_0x000107747c58();
                    func_0x000107747a3c(uStack_408);
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
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x000107278594(auStack_358,&stack0xfffffffffffffc18,auStack_2e8);
  return;
}



/* Entry: 107748c90; end: 107748d7f;  */

/* WARNING: Possible PIC construction at 0x000107748cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107748cb0) */
/* WARNING: Removing unreachable block (ram,0x000107748cb8) */
/* WARNING: Removing unreachable block (ram,0x000107748cc0) */
/* WARNING: Removing unreachable block (ram,0x000107748cd8) */
/* WARNING: Removing unreachable block (ram,0x000107748cc8) */

long * FUN_107748c90(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x48));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 107749e8c; end: 107749f53;  */

void FUN_107749e8c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lRam0000000113725bd0;
  lRam0000000113725bd0 = param_1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10774a39c; end: 10774a47f;  */

void FUN_10774a39c(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  if (((int)param_1[2] == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    func_0x00010774a660(param_2,&stack0xffffffffffffffcf);
  }
  else if ((int)param_1[2] == 2) {
    if (*(int *)(param_2 + 0x10) == 2) {
      FUN_10774a6b0();
      plVar2 = param_1;
      FUN_10774a6b0();
      lVar4 = *(long *)(*plVar2 + 0x18);
      func_0x00010774a6b8();
      lVar4 = *(long *)(*plVar2 + 0x18) + lVar4;
      func_0x00010747b534();
      FUN_10774a6b0();
      plVar2 = param_1;
      func_0x00010774a6b8();
      func_0x00010746bbb8();
      func_0x00010774a6b8();
      func_0x00010745f964();
      lVar3 = *param_1;
      while (plVar2 != (long *)0x0) {
        func_0x0001072628ec(auStack_48,lVar3,lVar4);
        func_0x000107262260(&stack0xffffffffffffffd0);
      }
      return;
    }
    uVar1 = *(uint *)(param_1 + 2);
    if (*(int *)(param_2 + 0x10) != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        if (*(uint *)(param_2 + 0x10) != 0xffffffff) {
          (*(code *)(&PTR_DAT_1109acee0)[*(uint *)(param_2 + 0x10)])
                    (&stack0xffffffffffffffdf,param_2,param_1);
        }
        *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
        return;
      }
      (*(code *)(&PTR_DAT_1109b3228)[uVar1])(&stack0xffffffffffffffe8);
    }
    return;
  }
  return;
}



/* Entry: 10774a6b0; end: 10774a6bf;  */

void FUN_10774a6b0(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while (*(int *)(unaff_x20 + 0x10) != 2) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x30 = FUN_10774a6b0;
    func_0x00010563ab98();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  }
  return;
}



/* Entry: 10774b118; end: 10774b13b;  */

void FUN_10774b118(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010774e1b4(&uStack_18);
  return;
}



/* Entry: 10774b4bc; end: 10774b4bf;  */

void FUN_10774b4bc(void)

{
  return;
}



/* Entry: 10774bfbc; end: 10774c01b;  */

void FUN_10774bfbc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 < uVar4) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    if (uVar2 - uVar4 != 0) {
      uVar1 = uVar4 + ((uVar2 - uVar4) + 1 >> 1);
      *param_1 = uVar4;
      param_1[1] = uVar1 - 1;
      uVar3 = 1;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[3] = uVar1;
      param_1[4] = uVar2;
      goto LAB_10774c014;
    }
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  uVar3 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_10774c014:
  *(undefined1 *)(param_1 + 5) = uVar3;
  return;
}



/* Entry: 10774c3b0; end: 10774c3d7;  */

undefined8 FUN_10774c3b0(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010774c3d8(&uStack_20);
  return uStack_18;
}



/* Entry: 10774c98c; end: 10774c9d3;  */

double FUN_10774c98c(double *param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010774ca34(*param_1,param_1[1],&uStack_40,param_3,param_2);
  dVar1 = *param_1;
  func_0x00010739c1b8(dVar1,param_1[1],uStack_40,uStack_38,param_3);
  return SQRT(dVar1);
}



/* Entry: 10774d048; end: 10774d093;  */

void FUN_10774d048(double param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  if (*(char *)(param_3 + 0x10) == '\x01') {
    func_0x00010774ebd4();
    func_0x00010774ed50();
    func_0x00010774eae0();
    if (param_1 < **(double **)(unaff_x20 + 8)) {
      func_0x00010774eab0();
    }
  }
  return;
}



/* Entry: 10774db3c; end: 10774dd17;  */

double FUN_10774db3c(double param_1,double param_2,double param_3,double param_4,undefined8 *param_5
                    )

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *extraout_x9;
  long *extraout_x10;
  long *plVar9;
  long lVar10;
  ulong *unaff_x20;
  ulong *unaff_x21;
  long *plVar11;
  double dVar12;
  double dVar13;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  dVar12 = param_1;
  func_0x00010774e944();
  func_0x00010774cea0(*param_5,unaff_x21[1]);
  dVar13 = dVar12;
  dStack_90 = dVar12;
  dStack_88 = param_2;
  dStack_80 = param_3;
  dStack_78 = param_4;
  func_0x00010774cea0(*unaff_x20,unaff_x20[1]);
  dStack_b0 = dVar13;
  dStack_a8 = param_2;
  dStack_a0 = param_3;
  dStack_98 = param_4;
  if ((param_1 == INFINITY) ||
     (func_0x00010774c498(&dStack_90,&dStack_b0), dVar12 = dStack_90, dVar13 < param_1)) {
    if ((dVar12 <= dStack_b0) ||
       (((dStack_a0 <= dStack_80 || (dStack_88 <= dStack_a8)) || (dStack_98 <= dStack_78)))) {
      uVar6 = *unaff_x20;
      uVar7 = unaff_x20[1];
    }
    else {
      uVar6 = *unaff_x21;
      uVar7 = unaff_x21[1];
    }
    func_0x00010774dd18(uVar6,uVar7);
    param_1 = 0.0;
    if ((uVar6 & 1) == 0) {
      func_0x00010774ea40();
      for (plVar9 = extraout_x10; plVar9 != extraout_x9; plVar9 = plVar9 + 3) {
        lVar1 = *plVar9;
        lVar3 = plVar9[1];
        for (lVar10 = 0; lVar10 != lVar3 - lVar1 >> 4; lVar10 = lVar10 + 1) {
          plVar4 = (long *)unaff_x20[1];
          for (plVar11 = (long *)*unaff_x20; plVar11 != plVar4; plVar11 = plVar11 + 3) {
            lVar2 = *plVar11;
            lVar5 = plVar11[1];
            for (lVar8 = 0; lVar5 - lVar2 >> 4 != lVar8; lVar8 = lVar8 + 1) {
              func_0x00010774ee10();
              func_0x000107871a3c();
              if ((uVar6 & 1) != 0) {
                return 0.0;
              }
              func_0x00010774ee10();
              func_0x00010774d544();
              func_0x00010774ea2c();
            }
          }
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10774e014; end: 10774e01b;  */

void FUN_10774e014(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010774a748();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774e170; end: 10774e18b;  */

undefined8 * FUN_10774e170(long param_1)

{
  func_0x000104c3365c(param_1 + 0xd8);
  func_0x000107327aec(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 0x40);
  func_0x0001072c9884(param_1 + 0x28);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10774e3d4; end: 10774e40b;  */

long FUN_10774e3d4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100060964(param_1,*(undefined8 *)*param_2);
  func_0x000104c32a18(lVar1 + 0x38,*param_3);
  return param_1;
}



/* Entry: 10774e60c; end: 10774e683;  */

bool FUN_10774e60c(double *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    bVar1 = false;
    if ((*param_1 == *param_3) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_3[1]))) {
      bVar1 = param_1[1] == param_3[1];
    }
    if (!bVar1) break;
    param_3 = param_3 + 2;
  }
  return param_1 == param_2;
}



/* Entry: 10774e7e8; end: 10774e827;  */

void FUN_10774e7e8(int param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010774e9b8();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x00010774ed1c();
    func_0x00010774e66c();
    if (param_1 == 0) break;
  }
  func_0x00010774ecc8();
  return;
}



/* Entry: 10774f10c; end: 10774f237;  */

void FUN_10774f10c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_190 [16];
  undefined1 uStack_180;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  char cStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [144];
  undefined1 auStack_88 [88];
  
  func_0x000107750234(auStack_88);
  uStack_128 = 0;
  uStack_120 = 0;
  auStack_190[0] = 0;
  uStack_180 = 0;
  uStack_140 = 0;
  cStack_130 = '\0';
  auStack_160[0] = 0;
  uStack_148 = 0;
  func_0x0001075375e8(auStack_118,&uStack_128,auStack_190,&uStack_140,auStack_160);
  func_0x0001001148fc(auStack_160);
  func_0x000107323f70(&uStack_140);
  func_0x000107323ef8(auStack_190);
  func_0x000107323f90(&uStack_128);
  func_0x000107750268();
  func_0x000107771274(&uStack_140,auStack_88,param_2,auStack_118,auStack_168,auStack_190);
  func_0x0001072c94e0(auStack_190);
  if (cStack_130 == '\x01') {
    param_1[1] = uStack_138;
    *param_1 = CONCAT71(uStack_13f,uStack_140);
    param_1 = (undefined8 *)&uStack_140;
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072c95d0(&uStack_140);
  func_0x000107324968(auStack_118);
  func_0x0001072ca718(auStack_88);
  return;
}



/* Entry: 10774f52c; end: 10774f553;  */

void FUN_10774f52c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010774fd18(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10774f7f8; end: 10774f837;  */

void FUN_10774f7f8(void)

{
  func_0x00010775007c();
  func_0x0001077500f8();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774fa54; end: 10774fab7;  */

void FUN_10774fa54(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_98 [8];
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  func_0x0001077500ac(param_1,param_1);
  uStack_28 = extraout_x8;
  func_0x0001072c9bc0(auStack_70);
  func_0x00010774ee44(&UNK_10f425455,auStack_70);
  func_0x0001072c9c34(auStack_70);
  func_0x000107750098(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107750158();
  func_0x0001072c9c34();
  func_0x000107750118();
  func_0x00010774fafc(auStack_98);
  func_0x000107750250();
  func_0x00010774fff4();
  func_0x00010774ff9c(auStack_98);
  return;
}



/* Entry: 10774fcc4; end: 10774fcc7;  */

void FUN_10774fcc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10774fe7c; end: 10774feb7;  */

void FUN_10774fe7c(void)

{
  long unaff_x21;
  
  func_0x000107750130();
  if (unaff_x21 != 0) {
    func_0x0001077501e8();
    func_0x00010775025c(&PTR_DAT_1109d43b8);
  }
  func_0x000107750170();
  return;
}



/* Entry: 10774ff4c; end: 10774ff5f;  */

void FUN_10774ff4c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107750030; end: 107750033;  */

void FUN_107750030(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107750418; end: 10775047f;  */

void FUN_107750418(void)

{
  long *unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x000107751088();
  func_0x00010002b838(auStack_48,&UNK_10f4256f3);
  func_0x000107751050(*(undefined8 *)(*unaff_x21 + 0x48));
  func_0x000107751074();
  return;
}



/* Entry: 1077508c0; end: 10775090f;  */

void FUN_1077508c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = param_2;
  uStack_28 = param_3;
  while (lStack_30 != param_4) {
    func_0x000107750910(auStack_48,param_1,uStack_28);
    func_0x000107262260(&lStack_30);
  }
  return;
}



/* Entry: 107750a30; end: 107750a4b;  */

void FUN_107750a30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d4568;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107750bdc; end: 107750beb;  */

bool FUN_107750bdc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001072a0454(lVar1);
  return lVar1 != 0;
}



/* Entry: 107750d60; end: 107750d87;  */

void FUN_107750d60(undefined8 param_1)

{
  func_0x00010775107c();
  func_0x000107751048(param_1,&PTR_DAT_1109d47c8);
  func_0x000107750fec();
  return;
}



/* Entry: 107750eb8; end: 107750f5b;  */

void FUN_107750eb8(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(*(long *)(param_1 + 8) + 0x38) != '\x01') ||
     (func_0x000107262f24(param_2,*(long *)(param_1 + 8)), (param_2 & 1) == 0)) {
    if ((*(char *)(param_3 + 0x38) == '\x01') && ((*(byte *)(param_4 + 0x38) & 1) != 0)) {
      if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010737d9a4(uVar2,param_3);
        uVar1 = 0;
        if ((int)uVar2 != 0) {
          func_0x000107750b94(param_4,*(undefined8 *)(param_1 + 0x20));
          uVar1 = (undefined1)param_4;
        }
      }
      else {
        uVar1 = 1;
      }
      **(undefined1 **)(param_1 + 0x10) = uVar1;
    }
    else {
      **(byte **)(param_1 + 0x10) = 1;
    }
  }
  return;
}



/* Entry: 107751444; end: 10775147b;  */

long FUN_107751444(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001077523ac(param_1 + 0x178);
  func_0x000107752148(param_1 + 0x60,param_3);
  return param_1;
}



/* Entry: 107751714; end: 107751787;  */

void FUN_107751714(undefined1 *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar3 = auStack_60;
  uVar1 = 0;
  func_0x000107752dbc();
  uStack_28 = extraout_x8;
  if ((*(byte *)(param_2 + 0xd0) & 1) == 0) {
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  else {
    func_0x000104c2fe00(auStack_60,param_2 + 0x98);
    func_0x0001072627ac(param_1,auStack_60);
    func_0x000104c2f714();
    param_2 = uVar1;
    param_3 = puVar3;
  }
  func_0x000107752da8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107752ebc();
  if ((param_2 & 1) != 0) {
    if (*(int *)(unaff_x21 + 0x188) == 1) {
      lVar2 = unaff_x21 + 0x178;
      func_0x0001077522cc();
      func_0x000107752f04();
      if (lVar2 != 0) {
        func_0x000107268350(param_1,param_3 + 0x38);
        param_1[0x40] = 1;
        return;
      }
    }
    else if (*(int *)(unaff_x21 + 0x188) == 0) {
      func_0x0001077522b4(unaff_x21 + 0x178);
      func_0x000107752f84();
                    /* WARNING: Could not recover jumptable at 0x0001077517d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x18))(param_1);
      return;
    }
  }
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 107752018; end: 107752093;  */

void FUN_107752018(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x20;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107752eb0();
  param_1 = param_1 + 0x40;
  func_0x0001072621e0();
  lStack_40 = param_1;
  uStack_38 = param_2;
  while (lStack_40 != 0) {
    iVar1 = unaff_w19;
    func_0x00010737d9a4();
    if (iVar1 == 0) {
      func_0x000107262260(&lStack_40);
    }
    else {
      lVar2 = lStack_40;
      uVar3 = uStack_38;
      func_0x00010735d2b8(lStack_40,uStack_38,1);
      func_0x00010735af54(unaff_x20 + 0x40,lStack_40,uStack_38);
      lStack_40 = lVar2;
      uStack_38 = uVar3;
    }
  }
  return;
}



/* Entry: 1077521c0; end: 1077521eb;  */

void FUN_1077521c0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107752eb0();
  func_0x000104c2f1f0();
  func_0x000104c2f1f0(unaff_x20 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1077523d0; end: 1077523db;  */

void FUN_1077523d0(long param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    func_0x000107479e30(param_1,param_2);
    if (extraout_x8 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    func_0x00010747a0f8();
    func_0x000107267e44();
    return;
  }
  func_0x000107752414(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1077524d4; end: 1077524f7;  */

void FUN_1077524d4(void)

{
  func_0x000107752eb0();
  func_0x000107267df4();
  func_0x000107753008();
  return;
}



/* Entry: 1077529d8; end: 107752ae3;  */

void FUN_1077529d8(long param_1,undefined8 *param_2,undefined **param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined *puVar10;
  undefined8 *puStack_3e8;
  undefined1 ***pppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [8];
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_298;
  undefined1 **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [112];
  undefined8 uStack_198;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [56];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_38;
  
  func_0x000107752dbc();
  puStack_138 = &UNK_10e52b660;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_38 = extraout_x8;
  func_0x000100060964(auStack_118,&DAT_10f62b0e2);
  uStack_140 = *param_2;
  func_0x000107752ecc();
  func_0x000107752ef4();
  func_0x000107752f9c();
  func_0x000107752fc8();
  func_0x000100060964(auStack_118,"y");
  uStack_140 = param_2[1];
  func_0x000107752ecc();
  func_0x000107752ef4();
  func_0x000107752f9c();
  func_0x000107752fc8();
  ppuVar7 = &puStack_138;
  func_0x000107278fec(&uStack_e0);
  *(undefined8 *)(param_1 + 0x10) = uStack_d8;
  *(undefined8 *)(param_1 + 8) = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  *(undefined4 *)(param_1 + 0x68) = 9;
  func_0x00010726b264(&uStack_e0);
  func_0x00010726ae88();
  func_0x000107752da8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107752f9c();
  func_0x000107752fc8();
  func_0x00010726ae88(&puStack_138);
  func_0x000107752df4();
  puStack_168 = &UNK_107752ae4;
  ppuVar9 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x000107752dbc();
  puStack_228 = (undefined *)0x0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_198 = extraout_x8_00;
  for (; uVar3 = ppuVar7 == param_3, !(bool)uVar3; ppuVar7 = ppuVar7 + 2) {
    FUN_1077529d8(auStack_210,ppuVar7);
    func_0x000107277668(&puStack_228,auStack_210);
    func_0x00010726af18(auStack_208);
  }
  puVar4 = auStack_210;
  ppuVar7 = &puStack_228;
  func_0x000107277aa4();
  func_0x000107752e38();
  func_0x000107752ee4();
  func_0x000107752da8(uStack_198);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107752ee4();
  func_0x000107752df4();
  puStack_238 = &UNK_107752b9c;
  ppuStack_240 = &puStack_170;
  func_0x000107752dbc();
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_298 = extraout_x8_01;
  for (; uVar3 = ppuVar7 == ppuVar9, !(bool)uVar3; ppuVar7 = ppuVar7 + 3) {
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    puVar1 = ppuVar7[1];
    for (puVar10 = *ppuVar7; puVar10 != puVar1; puVar10 = puVar10 + 0x10) {
      FUN_1077529d8(&uStack_310,puVar10);
      func_0x000107277668(&uStack_398,&uStack_310);
      func_0x000107752edc();
    }
    func_0x000107277aa4(&uStack_3b0,&uStack_398);
    func_0x000107277d70(&uStack_398);
    uStack_370 = uStack_3a8;
    uStack_378 = uStack_3b0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_318 = 8;
    func_0x000107277668(&uStack_3c8,auStack_380);
    func_0x00010726af18(&uStack_378);
    func_0x00010726b188(&uStack_3b0);
  }
  puVar8 = &uStack_3c8;
  func_0x000107277aa4(&uStack_310);
  *(undefined8 *)(puVar4 + 0x10) = uStack_308;
  *(undefined8 *)(puVar4 + 8) = uStack_310;
  uStack_310 = 0;
  uStack_308 = 0;
  *(undefined4 *)(puVar4 + 0x68) = 8;
  puVar5 = &uStack_310;
  func_0x00010726b188();
  func_0x000107752ee4();
  func_0x000107752da8(uStack_298);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(&uStack_378);
  puVar6 = &uStack_3b0;
  func_0x00010726b188();
  func_0x000107752ee4();
  func_0x000107752df4();
  uVar2 = *(uint *)(puVar8 + 2);
  if (*(int *)(puVar6 + 2) != -1 || uVar2 != 0xffffffff) {
    pppuStack_3e0 = &ppuStack_240;
    if (uVar2 == 0xffffffff) {
      puStack_3d8 = &UNK_107752d00;
      if (*(uint *)(puVar6 + 2) != 0xffffffff) {
        puStack_3e8 = puVar5;
        func_0x0001072745a8((&PTR_DAT_110995e78)[*(uint *)(puVar6 + 2)],puVar6,puVar6,puVar8);
      }
      *(undefined4 *)(puVar6 + 2) = 0xffffffff;
      return;
    }
    puStack_3d8 = &UNK_107752d00;
    puStack_3e8 = puVar6;
    (*(code *)(&PTR_DAT_1109d4868)[uVar2])(&puStack_3e8);
  }
  return;
}



/* Entry: 10775334c; end: 1077533f3;  */

void FUN_10775334c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_d9;
  long alStack_d8 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [104];
  undefined8 uStack_28;
  
  func_0x000107753590();
  uStack_28 = extraout_x8;
  (**(code **)(*param_2 + 0x28))(alStack_d8);
  puVar4 = &uStack_d9;
  func_0x0001077765a4(auStack_98,alStack_d8);
  func_0x000107776500(param_1,auStack_98);
  func_0x00010726af18(auStack_90);
  plVar2 = alStack_d8;
  func_0x000104c3323c();
  func_0x00010775357c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(auStack_90);
  func_0x000104c3323c(alStack_d8);
  __Unwind_Resume();
  func_0x000107753590();
  puVar3 = (undefined8 *)0x20;
  uStack_118 = extraout_x8_00;
  __Znwm();
  *puVar3 = &PTR_DAT_1109d4908;
  puVar3[1] = puVar4;
  puVar3[2] = param_4;
  puVar3[3] = param_5;
  puStack_120 = puVar3;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_138);
  puVar4 = auStack_138;
  func_0x00010745df78(puVar4);
  func_0x00010775357c(uStack_118);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010745df78(auStack_138);
  __Unwind_Resume(puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107753494);
  (*pcVar1)();
}



/* Entry: 107753714; end: 10775382f;  */

undefined8 * FUN_107753714(void)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dba0;
  (*(code *)PTR___tlv_bootstrap_11340dba0)();
  puVar3 = (undefined8 *)*ppuVar1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x10;
    __Znwm();
    *puVar3 = 0;
    puVar3[1] = 0;
    func_0x0001077542dc();
    func_0x0001077539dc();
    puVar2 = puRam0000000113822cc8;
    if (puRam0000000113822cc8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x113822cc8;
      puVar5 = (undefined8 *)0x113822cc8;
    }
    else {
      do {
        while (puVar4 = puVar2, (undefined8 *)puVar4[4] <= puVar3) {
          if (puVar3 <= (undefined8 *)puVar4[4]) goto LAB_1077537f0;
          puVar2 = (undefined8 *)puVar4[1];
          if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
            puVar5 = puVar4 + 1;
            goto LAB_1077537ac;
          }
        }
        puVar2 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
      } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
    }
LAB_1077537ac:
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    puVar2[4] = puVar3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar4;
    *puVar5 = puVar2;
    if ((long *)*plRam0000000113822cc0 != (long *)0x0) {
      plRam0000000113822cc0 = (long *)*plRam0000000113822cc0;
    }
    func_0x00010002c5b0(puRam0000000113822cc8);
    lRam0000000113822cd0 = lRam0000000113822cd0 + 1;
LAB_1077537f0:
    func_0x000107754210();
    *ppuVar1 = (undefined *)puVar3;
  }
  return puVar3;
}



/* Entry: 107753b08; end: 107753b8f;  */

void FUN_107753b08(void)

{
  undefined1 auStack_b8 [136];
  
  func_0x0001077541d8(0x82);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8);
  func_0x000107754264();
  func_0x000107754294();
  func_0x000107754234();
  func_0x000107754278();
  func_0x000107754300();
  func_0x00010743fa9c();
  func_0x0001077542a4();
  func_0x0001077542bc();
  func_0x0001077542ac();
  return;
}



/* Entry: 1077541b8; end: 1077541d7;  */

void FUN_1077541b8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001077541c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 107754b88; end: 107754e1f;  */

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

ulong FUN_107754b88(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  long alStack_1b0 [6];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [112];
  int iStack_108;
  undefined8 uStack_48;
  
  func_0x000107755288();
  uStack_48 = extraout_x8;
  func_0x000107753050(auStack_180,*(undefined8 *)(param_2 + 0x48));
  uVar1 = iStack_108 == 1;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_3 + 0x108);
  }
  else {
    uVar2 = param_1 + 8;
    func_0x00010756c040(uVar2,auStack_178);
    func_0x0001077552a8(auStack_180);
    func_0x000107755274(uStack_48);
    if ((bool)uVar1) {
      return uVar2;
    }
    ___stack_chk_fail();
    plVar3 = alStack_1b0;
    func_0x00010726ae88();
    func_0x0001077552a8(auStack_180);
    func_0x000107755298();
  }
  lVar4 = *plVar3;
  func_0x000107755060(lVar4);
  return (ulong)(lVar4 != 0);
}



/* Entry: 107754f10; end: 107754f1f;  */

void FUN_107754f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107754f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10775522c; end: 10775526b;  */

void FUN_10775522c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010726aef4(param_3);
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 107755e04; end: 107755e6f;  */

undefined8
FUN_107755e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  uStack_38 = 0;
  func_0x0001073f26dc(&uStack_38,param_1);
  func_0x00010756af98(&uStack_38,param_2);
  func_0x000107756258(&uStack_38,param_3);
  func_0x00010756af98(&uStack_38,param_4);
  return uStack_38;
}



/* Entry: 107755f90; end: 107755f9f;  */

void FUN_107755f90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107755f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077562e0; end: 1077563eb;  */

void FUN_1077562e0(void)

{
  return;
}



/* Entry: 107756e6c; end: 107756e7f;  */

void FUN_107756e6c(void)

{
  func_0x000107756f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10775705c; end: 10775706b;  */

void FUN_10775705c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10775734c; end: 107757577;  */

void FUN_10775734c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined1 *apuStack_c0 [9];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [48];
  uint uStack_30;
  char cStack_28;
  
  func_0x00010775719c(auStack_60,param_2);
  if (cStack_28 == '\x01') {
    puVar3 = *(undefined1 **)(param_1 + 8);
    if (uStack_30 == 2) {
      if (puVar3[0x38] == 0) {
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 0x30) = 0xffffffff;
        func_0x0001077579f0();
        if (uStack_30 != 0xffffffff) {
          apuStack_c0[0] = puVar3;
          (*(code *)(&PTR_DAT_1109d4c70)[uStack_30])(apuStack_c0,auStack_60);
          *(uint *)(puVar3 + 0x30) = uStack_30;
        }
        puVar3[0x38] = 1;
      }
      else {
        apuStack_c0[0] = puVar3;
        func_0x0001077575ec(apuStack_c0,puVar3,auStack_60);
      }
    }
    else if ((puVar3[0x38] & 1) == 0) {
      (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x30))(apuStack_c0);
      ppuVar2 = apuStack_c0;
      func_0x0001005d466c();
      ppuStack_f0 = ppuVar2;
      uStack_e8 = param_2;
      func_0x0001003a91d4(&UNK_10f42598d);
      func_0x0001003a9204(auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_f0,auStack_78);
      func_0x0001077579e0();
      func_0x000107757980();
      FUN_107757718();
      func_0x0001077579d8();
      func_0x0001077579c8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    }
    else {
      uVar1 = *(uint *)(puVar3 + 0x30);
      if (uVar1 == 0xffffffff || uStack_30 != uVar1) {
        if (uStack_30 == uVar1) goto LAB_1077574e0;
      }
      else {
        ppuVar2 = apuStack_c0;
        apuStack_c0[0] = (undefined1 *)&ppuStack_f0;
        (*(code *)(&PTR_DAT_1109d4cb8)[uStack_30])(ppuVar2,puVar3,auStack_60);
        if (((ulong)ppuVar2 & 1) != 0) goto LAB_1077574e0;
      }
      func_0x00010002b838(&ppuStack_f0,&UNK_10f4259fb);
      func_0x0001077579e0();
      func_0x000107757980();
      FUN_107757718();
      func_0x0001077579d8();
      func_0x0001077579c8();
    }
  }
LAB_1077574e0:
  func_0x00010756c434(auStack_60);
  return;
}



/* Entry: 107757718; end: 10775781f;  */

/* WARNING: Possible PIC construction at 0x0001077575d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077575dc) */

void FUN_107757718(undefined1 *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 *puStack_38;
  
  cVar2 = param_1[0x38];
  puStack_38 = param_1;
  if (cVar2 == *(char *)(param_2 + 0x38)) {
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_2 + 0x30);
      if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
        if (uVar1 == 0xffffffff) goto code_r0x00010756c464;
        (*(code *)(&PTR_DAT_1109d4c88)[uVar1])(&puStack_38,param_1,param_2);
      }
    }
  }
  else {
    if (cVar2 != '\0') {
      if (param_1[0x38] != '\x01') {
        return;
      }
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x30 = &UNK_1077575dc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = param_1;
code_r0x00010756c464:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        (*(code *)(&PTR_DAT_1109bdff8)[*(uint *)(param_1 + 0x30)])
                  ((undefined1 *)((long)register0x00000008 + -0x21),param_1);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    func_0x00010756c464(param_1);
    uVar1 = *(uint *)(param_2 + 0x30);
    if (uVar1 != 0xffffffff) {
      (*(code *)(&PTR_DAT_1109d4ca0)[uVar1])(&puStack_38,param_2);
      *(uint *)(param_1 + 0x30) = uVar1;
    }
    param_1[0x38] = 1;
  }
  return;
}



/* Entry: 107757fa8; end: 10775800b;  */

void FUN_107757fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [16];
  undefined1 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  byte bStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [16];
  undefined1 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  byte bStack_430;
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [16];
  undefined1 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  byte bStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 auStack_320 [7];
  undefined1 uStack_2e8;
  long lStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [120];
  char cStack_250;
  undefined1 auStack_248 [56];
  byte bStack_210;
  undefined1 auStack_208 [56];
  byte bStack_1d0;
  undefined1 auStack_1c8 [56];
  byte bStack_190;
  undefined1 auStack_188 [4];
  undefined1 uStack_184;
  undefined1 uStack_150;
  uint uStack_148;
  uint uStack_144;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  long alStack_a0 [14];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  plVar12 = alStack_a0;
  plVar9 = alStack_a0;
  func_0x00010775931c(param_1);
  alStack_a0[0]._0_1_ = 0;
  uStack_30 = 0;
  plVar13 = (long *)0x1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x000107759308(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077594cc();
  func_0x000107296ad0();
  func_0x000107759334();
  func_0x00010775931c();
  plVar14 = plVar9 + 1;
  plVar10 = plVar14;
  uStack_108 = extraout_x8_01;
  (**(code **)(*plVar9 + 0x20))();
  uVar8 = plVar10 + -1 == (long *)0xfffffffffffffffd;
  if (plVar10 + -1 < (long *)0xfffffffffffffffe) {
    func_0x000107878fec(&lStack_2e0,(undefined1 *)((long)plVar10 + -1));
    func_0x0001004c3cd0(auStack_3d8,&UNK_10f425a53,&lStack_2e0);
    func_0x00010756a668(plVar12,auStack_3d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
    func_0x00010775932c();
    func_0x0001077593ac();
code_r0x0001077586ec:
    func_0x000107759308(uStack_108);
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010775937c();
    (*extraout_x9)(&lStack_2e0,plVar14,1);
    auStack_408[0] = 0;
    uStack_3f8 = 0;
    uStack_148 = uStack_148 & 0xffffff00;
    uStack_144 = uStack_144 & 0xffffff00;
    FUN_10777067c(&uStack_3f0,plVar12,&lStack_2e0,1,plVar13,auStack_408,&uStack_148);
    func_0x0001072c9854(auStack_408);
    func_0x00010775933c();
    if ((bStack_3e0 & 1) == 0) {
      func_0x00010002b838(auStack_420,&UNK_10f4257b4);
      func_0x00010756a69c(plVar12,auStack_420,1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_420);
      func_0x0001077593ac();
code_r0x0001077586e4:
      func_0x0001072c95d0(&uStack_3f0);
      goto code_r0x0001077586ec;
    }
    func_0x00010775937c();
    (*extraout_x9_00)(&lStack_2e0,plVar14,2);
    auStack_458[0] = 0;
    uStack_448 = 0;
    uStack_148 = uStack_148 & 0xffffff00;
    uStack_144 = uStack_144 & 0xffffff00;
    FUN_10777067c(&uStack_440,plVar12,&lStack_2e0,2,plVar13,auStack_458,&uStack_148);
    func_0x0001072c9854(auStack_458);
    func_0x00010775933c();
    if ((bStack_430 & 1) == 0) {
      func_0x0001077593ac();
code_r0x0001077586dc:
      func_0x0001072c95d0(&uStack_440);
      goto code_r0x0001077586e4;
    }
    func_0x00010775937c();
    func_0x000107759448(&lStack_2e0);
    (**(code **)(lStack_2e0 + 0x68))(auStack_1c8,auStack_2d8);
    func_0x00010775933c();
    if ((bStack_190 & 1) == 0) {
      func_0x00010775937c();
      func_0x000107759448(auStack_188);
      func_0x000107759344();
      func_0x000107759390(&UNK_10f425afc);
      func_0x000107759490(auStack_470);
      func_0x00010756a69c(plVar12,auStack_470,3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_470);
      func_0x00010775932c();
      func_0x000107759388();
      func_0x0001077593d0();
      func_0x0001077593ac();
code_r0x0001077586d4:
      func_0x00010724b3d8(auStack_1c8);
      goto code_r0x0001077586dc;
    }
    func_0x00010775937c();
    func_0x000107759454(&lStack_2e0);
    (**(code **)(lStack_2e0 + 0x68))(auStack_208,auStack_2d8);
    func_0x00010775933c();
    if ((bStack_1d0 & 1) == 0) {
      func_0x00010775937c();
      func_0x000107759454(auStack_188);
      func_0x000107759344();
      func_0x000107759390(&UNK_10f425b3b);
      func_0x000107759490(auStack_488);
      func_0x00010756a69c(plVar12,auStack_488,4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_488);
      func_0x00010775932c();
      func_0x000107759388();
      func_0x0001077593d0();
      func_0x0001077593ac();
code_r0x0001077586cc:
      func_0x00010724b3d8(auStack_208);
      goto code_r0x0001077586d4;
    }
    auStack_248[0] = 0;
    bStack_210 = 0;
    uVar8 = plVar10 == (long *)0x7;
    if ((bool)uVar8) {
      func_0x00010775937c();
      func_0x000107759460(&uStack_148);
      (**(code **)(CONCAT44(uStack_144,uStack_148) + 0x68))(&lStack_2e0,auStack_140);
      func_0x0001072e948c(auStack_248,&lStack_2e0);
      func_0x00010724b3d8(&lStack_2e0);
      func_0x0001077594a4();
      if ((bStack_210 & 1) != 0) {
        uVar15 = 6;
        goto code_r0x000107758300;
      }
      func_0x00010775937c();
      func_0x000107759460(auStack_188);
      func_0x000107759344();
      func_0x000107759390(&UNK_10f425b76);
      func_0x000107759490(auStack_4a0);
      func_0x00010756a69c(plVar12,auStack_4a0,5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4a0);
      func_0x00010775932c();
      func_0x000107759388();
      func_0x0001077593d0();
      func_0x0001077593ac();
code_r0x0001077586c4:
      func_0x00010724b3d8(auStack_248);
      goto code_r0x0001077586cc;
    }
    uVar15 = 5;
code_r0x000107758300:
    func_0x00010724ef84(&lStack_2e0,auStack_1c8);
    func_0x00010724ef84(auStack_2c8,auStack_208);
    func_0x0001000e3098(&uStack_4c0,&lStack_2e0,2);
    lVar16 = 0x18;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                (auStack_2d8 + lVar16 + -8);
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x18);
    if (bStack_210 == 1) {
      func_0x00010724ef84(&lStack_2e0,auStack_248);
      func_0x0001000fecf4(&uStack_4c0,&lStack_2e0);
      func_0x00010775932c();
    }
    uStack_4d8 = uStack_4b8;
    uStack_4e0 = uStack_4c0;
    uStack_4d0 = uStack_4b0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x000107754984(&lStack_2e0,plVar13,&uStack_4e0);
    func_0x0001000e30f4(&uStack_4e0);
    func_0x00010775937c();
    (*extraout_x9_01)(&uStack_148,plVar14,uVar15);
    uVar8 = cStack_250 == '\0';
    plVar9 = &lStack_2e0;
    if ((bool)uVar8) {
      plVar9 = plVar13;
    }
    auStack_518[0] = 0;
    uStack_508 = 0;
    auStack_188[0] = 0;
    uStack_184 = 0;
    FUN_10777067c(&uStack_500,plVar12,&uStack_148,uVar15,plVar9,auStack_518,auStack_188);
    func_0x0001072c9854(auStack_518);
    func_0x0001077594a4();
    bVar6 = bStack_210;
    if ((bStack_4f0 & 1) == 0) {
      func_0x00010002b838(auStack_530,&UNK_10f42580c);
      func_0x00010756a69c(plVar12,auStack_530,uVar15);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_530);
      func_0x0001077593ac();
code_r0x0001077586ac:
      func_0x0001072c95d0(&uStack_500);
      func_0x00010752b5b8(&lStack_2e0);
      func_0x0001000e30f4(&uStack_4c0);
      goto code_r0x0001077586c4;
    }
    if (*(char *)((long)plVar12 + 0x51) != '\x01') {
      if ((bStack_190 != 1) || ((bStack_1d0 & 1) == 0)) {
        func_0x000104bdc2c8();
        goto code_r0x000107758714;
      }
      uVar8 = bStack_210 == 1;
      if ((bool)uVar8) {
        func_0x000104c318bc(auStack_320,auStack_248);
        func_0x0001072627ac(auStack_188,auStack_320);
      }
      else {
        auStack_188[0] = 0;
        uStack_150 = 0;
      }
      puVar11 = (undefined8 *)0x140;
      __Znwm();
      uStack_358 = uStack_3e8;
      uStack_360 = uStack_3f0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_1109d4e08;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      uStack_368 = uStack_438;
      uStack_370 = uStack_440;
      uStack_440 = 0;
      uStack_438 = 0;
      func_0x0001077594ac();
      uStack_378 = uStack_4f8;
      uStack_380 = uStack_500;
      uStack_500 = 0;
      uStack_4f8 = 0;
      func_0x000107758fb4(puVar11 + 3,&uStack_360,&uStack_370,auStack_1c8,auStack_208,&uStack_148,
                          &uStack_380);
      func_0x0001077593f0();
      func_0x0001077593f8();
      func_0x0001077593e8();
      func_0x0001072c9b9c(&uStack_360);
      *extraout_x8_00 = (long)(puVar11 + 3);
      extraout_x8_00[1] = (long)puVar11;
      uStack_390 = 0;
      uStack_388 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 1;
      func_0x000107759108(&uStack_390);
      func_0x0001077593c8();
      if (bVar6 != 0) {
        puVar11 = auStack_320;
        goto code_r0x0001077586a8;
      }
      goto code_r0x0001077586ac;
    }
    if ((bStack_190 == 1) && ((bStack_1d0 & 1) != 0)) {
      uVar8 = bStack_210 == 1;
      if ((bool)uVar8) {
        func_0x000104c318bc(&uStack_360,auStack_248);
        func_0x0001072627ac(auStack_320,&uStack_360);
      }
      else {
        auStack_320[0]._0_1_ = 0;
        uStack_2e8 = 0;
      }
      puVar11 = (undefined8 *)0x140;
      __Znwm();
      uVar5 = uStack_3e8;
      uVar4 = uStack_3f0;
      uVar3 = uStack_438;
      uVar2 = uStack_440;
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_1109d4e08;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      uStack_440 = 0;
      uStack_438 = 0;
      func_0x0001072649c8(auStack_188,auStack_320);
      uVar1 = uStack_4f8;
      uVar15 = uStack_500;
      uStack_500 = 0;
      uStack_4f8 = 0;
      uStack_378 = uVar3;
      uStack_380 = uVar2;
      uStack_368 = uVar5;
      uStack_370 = uVar4;
      uStack_3a0 = 0;
      uStack_398 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      func_0x0001077594ac();
      uStack_388 = uVar1;
      uStack_390 = uVar15;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      func_0x000107758fb4(puVar11 + 3,&uStack_370,&uStack_380,auStack_1c8,auStack_208,&uStack_148,
                          &uStack_390);
      func_0x0001072c9b9c(&uStack_390);
      func_0x0001077593f8();
      func_0x0001077593f0();
      func_0x0001077593e8();
      func_0x0001002a8234(puVar11 + 8,plVar13 + 8);
      func_0x0001072c9b9c(&uStack_3c0);
      func_0x0001077593c8();
      func_0x0001072c9b9c(&uStack_3b0);
      func_0x0001072c9b9c(&uStack_3a0);
      *extraout_x8_00 = (long)(puVar11 + 3);
      extraout_x8_00[1] = (long)puVar11;
      uStack_540 = 0;
      uStack_538 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 1;
      func_0x000107759108(&uStack_540);
      func_0x00010724b3d8(auStack_320);
      if (bVar6 != 0) {
        puVar11 = &uStack_360;
code_r0x0001077586a8:
        func_0x000104c2f714(puVar11);
      }
      goto code_r0x0001077586ac;
    }
  }
  func_0x000104bdc2c8();
code_r0x000107758714:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x107758718);
  (*pcVar7)();
}



/* Entry: 107758e0c; end: 107758e1b;  */

long FUN_107758e0c(long param_1)

{
  func_0x000100060934(param_1,&UNK_10f425bb3);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107758f8c; end: 107758f8f;  */

void FUN_107758f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4e08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107759174; end: 1077591a3;  */

void FUN_107759174(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_1109d4e58;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107759748; end: 10775a803;  */

void FUN_107759748(long *param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 ******ppppppuVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 uVar12;
  int iVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  code *extraout_x9_05;
  code *extraout_x9_06;
  code *extraout_x9_07;
  code *extraout_x9_08;
  bool bVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  long *plVar24;
  undefined8 ******ppppppuVar25;
  ulong uStack_578;
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [8];
  undefined4 uStack_540;
  undefined1 uStack_538;
  undefined8 ******ppppppuStack_530;
  undefined8 uStack_528;
  char cStack_520;
  undefined8 ******ppppppuStack_510;
  undefined8 uStack_508;
  char cStack_500;
  undefined8 ******ppppppuStack_4f0;
  undefined8 uStack_4e8;
  char cStack_4e0;
  undefined8 ******ppppppuStack_4d0;
  undefined8 uStack_4c8;
  char cStack_4c0;
  undefined8 ******ppppppuStack_4b0;
  undefined8 uStack_4a8;
  char cStack_4a0;
  undefined8 ******ppppppuStack_490;
  undefined8 uStack_488;
  char cStack_480;
  undefined8 ******ppppppuStack_470;
  undefined8 uStack_468;
  char cStack_460;
  undefined8 ******ppppppuStack_450;
  undefined8 uStack_448;
  char cStack_440;
  undefined8 ******ppppppuStack_430;
  undefined8 uStack_428;
  byte bStack_420;
  undefined8 ******ppppppuStack_410;
  undefined8 uStack_408;
  undefined1 uStack_400;
  undefined1 uStack_3f0;
  undefined1 uStack_3ec;
  undefined1 auStack_3e8 [8];
  undefined4 uStack_3e0;
  undefined1 uStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 ******ppppppuStack_3b0;
  undefined8 uStack_3a8;
  byte bStack_3a0;
  undefined1 auStack_398 [8];
  undefined4 uStack_390;
  undefined1 uStack_388;
  undefined8 ******ppppppuStack_380;
  undefined8 uStack_378;
  byte bStack_370;
  undefined1 auStack_368 [8];
  undefined4 uStack_360;
  undefined1 uStack_358;
  undefined8 ******ppppppuStack_350;
  undefined8 uStack_348;
  byte bStack_340;
  undefined1 auStack_338 [8];
  undefined4 uStack_330;
  undefined1 uStack_328;
  undefined8 ******ppppppuStack_320;
  undefined8 uStack_318;
  byte bStack_310;
  undefined1 auStack_308 [8];
  undefined4 uStack_300;
  undefined1 uStack_2f8;
  undefined8 ******ppppppuStack_2f0;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined4 uStack_2d0;
  undefined1 uStack_2c8;
  undefined8 ******ppppppuStack_2c0;
  undefined8 uStack_2b8;
  byte bStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined4 uStack_2a0;
  undefined1 uStack_298;
  undefined8 ******ppppppuStack_290;
  undefined8 uStack_288;
  byte bStack_280;
  undefined1 auStack_270 [8];
  undefined4 uStack_268;
  undefined1 uStack_260;
  undefined1 auStack_258 [8];
  undefined4 uStack_250;
  undefined1 auStack_248 [24];
  undefined8 ******ppppppuStack_230;
  undefined8 uStack_228;
  byte bStack_220;
  undefined8 ******ppppppuStack_210;
  undefined8 uStack_208;
  byte bStack_200;
  undefined1 auStack_1f8 [8];
  undefined4 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 ******ppppppuStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  undefined8 ******appppppuStack_1d0 [2];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [16];
  char cStack_180;
  undefined1 auStack_178 [16];
  char cStack_168;
  undefined1 auStack_160 [16];
  char cStack_150;
  undefined1 auStack_148 [16];
  char cStack_138;
  undefined1 auStack_130 [16];
  char cStack_120;
  undefined1 auStack_118 [16];
  char cStack_108;
  undefined1 auStack_100 [4];
  undefined1 uStack_fc;
  char cStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined1 uStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  plVar24 = param_2;
  func_0x00010775c2a0();
  plVar20 = plVar24 + 1;
  plVar14 = plVar20;
  uStack_70 = extraout_x8;
  (**(code **)(*plVar24 + 0x20))();
  uVar12 = plVar14 == (long *)0x1;
  if (plVar14 < (long *)0x2) {
    func_0x00010002b838(auStack_1a8,&UNK_10f417abc);
    func_0x00010775c47c();
    puVar15 = auStack_1a8;
  }
  else {
    (**(code **)(*param_2 + 0x28))(&ppppppuStack_c0,plVar20,1);
    pppppppuVar19 = &ppppppuStack_b8;
    (*(code *)ppppppuStack_c0[6])();
    func_0x0001072f5f6c(&ppppppuStack_c0);
    if ((int)pppppppuVar19 == 0) {
      ppppppuStack_1d8 = (undefined8 *******)0x0;
      ppppppuStack_1e0 = (undefined8 *******)0x0;
      appppppuStack_1d0[0] = (undefined8 *******)0x0;
      plVar24 = (long *)0x1;
      do {
        uVar12 = plVar24 == plVar14;
        if ((bool)uVar12) {
          uVar12 = *(char *)(param_3 + 0x51) == '\x01';
          if ((bool)uVar12) {
            func_0x00010754797c(&ppppppuStack_a0,1);
            puVar8 = puStack_90;
            ppppppuStack_b0 = appppppuStack_1d0[0];
            ppppppuStack_b8 = ppppppuStack_1d8;
            ppppppuStack_c0 = ppppppuStack_1e0;
            puStack_90[2] = 0;
            *puStack_90 = &PTR_DAT_1109ba7e0;
            puStack_90[1] = 0;
            ppppppuStack_1d8 = (undefined8 *******)0x0;
            ppppppuStack_1e0 = (undefined8 *******)0x0;
            appppppuStack_1d0[0] = (undefined8 *******)0x0;
            uStack_80 = 0;
            uStack_78 = 0;
            uStack_88 = 0;
            func_0x000107759544(puStack_90 + 3,&ppppppuStack_c0);
            func_0x000107543b48(&ppppppuStack_c0);
            func_0x0001002a8234(puVar8 + 8,param_4 + 0x40);
            func_0x000107543b48(&uStack_88);
            puVar8 = puStack_90;
            puStack_90 = (undefined8 *)0x0;
            func_0x000107547aac(&ppppppuStack_a0);
            *param_1 = (long)(puVar8 + 3);
            param_1[1] = (long)puVar8;
            ppppppuStack_e8 = (undefined8 *******)0x0;
            uStack_e0 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
            lVar17 = -0xd8;
          }
          else {
            func_0x0001075478f4(&ppppppuStack_c0,&ppppppuStack_1e0);
            param_1[1] = (long)ppppppuStack_b8;
            *param_1 = (long)ppppppuStack_c0;
            ppppppuStack_c0 = (undefined8 *******)0x0;
            ppppppuStack_b8 = (undefined8 *******)0x0;
            *(undefined1 *)(param_1 + 2) = 1;
            lVar17 = -0xb0;
          }
          func_0x000107547abc(&stack0xfffffffffffffff0 + lVar17);
          break;
        }
        (**(code **)(*param_2 + 0x28))(&lStack_d0,plVar20,plVar24);
        if (((ulong)pppppppuVar19 & 1) == 0) {
LAB_107759f44:
          uStack_540 = 6;
          uStack_538 = 1;
          uVar5 = (ulong)ppppppuStack_c0 >> 0x28;
          uVar3 = (uint)ppppppuStack_c0;
          ppppppuStack_c0._0_5_ = (uint5)(uVar3 & 0xffffff00);
          ppppppuStack_c0 = (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_c0);
          func_0x00010775c23c(&uStack_88);
          func_0x0001072c9854(auStack_548);
          uVar5 = uStack_78;
          if ((uStack_78 & 1) == 0) {
            func_0x00010002b838(auStack_560,&UNK_10f425be9);
            func_0x00010775c47c();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_560);
            func_0x00010775c378();
          }
          else {
            uVar12 = ppppppuStack_1d8 == appppppuStack_1d0[0];
            if (ppppppuStack_1d8 < appppppuStack_1d0[0]) {
              func_0x00010775bfc4(ppppppuStack_1d8,&uStack_88);
              pppppppuVar18 = (undefined8 *******)(ppppppuStack_1d8 + 0x20);
            }
            else {
              lVar17 = (long)ppppppuStack_1d8 - (long)ppppppuStack_1e0;
              uVar1 = (lVar17 >> 8) + 1;
              if (uVar1 >> 0x38 != 0) goto LAB_10775a524;
              uStack_578 = (long)appppppuStack_1d0[0] - (long)ppppppuStack_1e0 >> 7;
              if (uStack_578 <= uVar1) {
                uStack_578 = uVar1;
              }
              if (0x7ffffffffffffeff < (ulong)((long)appppppuStack_1d0[0] - (long)ppppppuStack_1e0))
              {
                uStack_578 = 0xffffffffffffff;
              }
              if (uStack_578 == 0) {
                pppppppuVar19 = (undefined8 *******)0x0;
                uStack_578 = 0;
              }
              else {
                pppppppuVar19 = appppppuStack_1d0;
                func_0x000107543730();
              }
              lVar17 = (long)pppppppuVar19 + lVar17;
              func_0x00010775bfc4(lVar17,&uStack_88);
              ppppppuVar6 = ppppppuStack_1d8;
              pppppppuVar22 = (undefined8 *******)ppppppuStack_1e0;
              pppppppuVar2 = (undefined8 *******)
                             ((long)ppppppuStack_1e0 + (lVar17 - (long)ppppppuStack_1d8));
              ppppppuStack_b8 = &ppppppuStack_e8;
              ppppppuStack_b0 = &ppppppuStack_a0;
              pppppppuVar23 = pppppppuVar2;
              ppppppuStack_e8 = pppppppuVar2;
              ppppppuStack_c0 = appppppuStack_1d0;
              for (pppppppuVar18 = (undefined8 *******)ppppppuStack_1e0;
                  ppppppuStack_a0 = pppppppuVar23, pppppppuVar18 != (undefined8 *******)ppppppuVar6;
                  pppppppuVar18 = pppppppuVar18 + 0x20) {
                ppppppuVar25 = *pppppppuVar18;
                pppppppuVar23[1] = pppppppuVar18[1];
                *pppppppuVar23 = ppppppuVar25;
                *pppppppuVar18 = (undefined8 ******)0x0;
                pppppppuVar18[1] = (undefined8 ******)0x0;
                func_0x000107553224(pppppppuVar23 + 2,pppppppuVar18 + 2);
                func_0x000107553224(pppppppuVar23 + 5,pppppppuVar18 + 5);
                func_0x000107553224(pppppppuVar23 + 8,pppppppuVar18 + 8);
                func_0x000107553224(pppppppuVar23 + 0xb,pppppppuVar18 + 0xb);
                func_0x000107553224(pppppppuVar23 + 0xe,pppppppuVar18 + 0xe);
                func_0x000107553224(pppppppuVar23 + 0x11,pppppppuVar18 + 0x11);
                func_0x000107553224(pppppppuVar23 + 0x14,pppppppuVar18 + 0x14);
                func_0x000107553224(pppppppuVar23 + 0x17,pppppppuVar18 + 0x17);
                func_0x000107553224(pppppppuVar23 + 0x1a,pppppppuVar18 + 0x1a);
                func_0x000107553224(pppppppuVar23 + 0x1d,pppppppuVar18 + 0x1d);
                pppppppuVar23 = (undefined8 *******)(ppppppuStack_a0 + 0x20);
              }
              uStack_a8 = 1;
              for (; uVar12 = pppppppuVar22 == (undefined8 *******)ppppppuVar6, !(bool)uVar12;
                  pppppppuVar22 = pppppppuVar22 + 0x20) {
                func_0x000107543ad8(pppppppuVar22);
              }
              pppppppuVar18 = (undefined8 *******)(lVar17 + 0x100);
              func_0x0001075439bc(&ppppppuStack_c0);
              bVar16 = (undefined8 *******)ppppppuStack_1e0 != (undefined8 *******)0x0;
              ppppppuStack_1e0 = pppppppuVar2;
              appppppuStack_1d0[0] = pppppppuVar19 + uStack_578 * 0x20;
              if (bVar16) {
                ppppppuStack_1d8 = pppppppuVar18;
                __ZdlPv();
              }
            }
            pppppppuVar19 = (undefined8 *******)0x1;
            ppppppuStack_1d8 = pppppppuVar18;
          }
          func_0x0001072c95d0(&uStack_88);
          if ((uVar5 & 1) == 0) {
            bVar16 = false;
          }
          else {
LAB_10775a178:
            bVar16 = true;
          }
        }
        else {
          iVar13 = (int)auStack_c8;
          (**(code **)(lStack_d0 + 0x30))();
          if (iVar13 == 0) goto LAB_107759f44;
          func_0x00010775c390();
          (*extraout_x9)(&uStack_88,auStack_c8,&DAT_10f425e2a);
          ppppppuStack_a0 = (undefined8 ******)((ulong)ppppppuStack_a0 & 0xffffffffffffff00);
          puStack_90 = (undefined8 *)((ulong)puStack_90 & 0xffffffffffffff00);
          func_0x00010775c430();
          if (!(bool)uVar12) {
LAB_107759900:
            func_0x00010775c390();
            (*extraout_x9_00)(&ppppppuStack_e8,auStack_c8,&DAT_10f425e35);
            ppppppuStack_210 = (undefined8 ******)((ulong)ppppppuStack_210 & 0xffffffffffffff00);
            bStack_200 = 0;
            uVar12 = cStack_d8 == '\x01';
            if ((bool)uVar12) {
              uStack_250 = 3;
              func_0x0001072f5dec(&ppppppuStack_c0,auStack_258);
              func_0x00010775bfa8(auStack_248,&ppppppuStack_c0);
              auStack_100[0] = 0;
              uStack_fc = 0;
              func_0x00010775c23c(&ppppppuStack_230);
              func_0x0001075530c4(&ppppppuStack_210,&ppppppuStack_230);
              func_0x00010775c48c();
              func_0x0001072c9854(auStack_248);
              func_0x0001072c9884(&ppppppuStack_c0);
              func_0x0001072c9884(auStack_258);
              if ((bStack_200 & 1) == 0) {
                func_0x00010775c378();
                func_0x00010775c494();
                func_0x00010775c43c();
                goto LAB_10775a19c;
              }
            }
            func_0x00010775c390();
            (*extraout_x9_01)(&ppppppuStack_c0,auStack_c8,&DAT_10f425e3f);
            ppppppuStack_230 = (undefined8 ******)((ulong)ppppppuStack_230 & 0xffffffffffffff00);
            bStack_220 = 0;
            uVar12 = (char)ppppppuStack_b0 == '\x01';
            plVar21 = plVar20;
            if ((bool)uVar12) {
              uStack_268 = 4;
              uStack_260 = 1;
              uVar5 = (ulong)ppppppuStack_290 >> 0x28;
              uVar3 = (uint)ppppppuStack_290;
              ppppppuStack_290._0_5_ = (uint5)(uVar3 & 0xffffff00);
              ppppppuStack_290 = (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_290);
              func_0x00010775c23c(auStack_100);
              func_0x0001075530c4(&ppppppuStack_230,auStack_100);
              func_0x0001072c95d0(auStack_100);
              func_0x0001072c9854(auStack_270);
              if ((bStack_220 & 1) != 0) goto LAB_107759a14;
              func_0x00010775c2c8();
            }
            else {
LAB_107759a14:
              func_0x00010775c390();
              (*extraout_x9_02)(auStack_100,auStack_c8,&DAT_10f425e4a);
              ppppppuStack_290 = (undefined8 ******)((ulong)ppppppuStack_290 & 0xffffffffffffff00);
              bStack_280 = 0;
              uVar12 = cStack_f0 == '\x01';
              if ((bool)uVar12) {
                uStack_2a0 = 1;
                uStack_298 = 1;
                uVar5 = (ulong)ppppppuStack_2c0 >> 0x28;
                uVar3 = (uint)ppppppuStack_2c0;
                ppppppuStack_2c0._0_5_ = (uint5)(uVar3 & 0xffffff00);
                ppppppuStack_2c0 = (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_2c0);
                func_0x00010775c23c(auStack_118);
                func_0x0001075530c4(&ppppppuStack_290,auStack_118);
                func_0x0001072c95d0(auStack_118);
                func_0x0001072c9854(auStack_2a8);
                if ((bStack_280 & 1) != 0) goto LAB_107759a8c;
                func_0x00010775c2c8();
              }
              else {
LAB_107759a8c:
                func_0x00010775c390();
                (*extraout_x9_03)(auStack_118,auStack_c8,&DAT_10f425e54);
                ppppppuStack_2c0 = (undefined8 ******)((ulong)ppppppuStack_2c0 & 0xffffffffffffff00)
                ;
                bStack_2b0 = 0;
                uVar12 = cStack_108 == '\x01';
                if ((bool)uVar12) {
                  uStack_2d0 = 3;
                  uStack_2c8 = 1;
                  uVar5 = (ulong)ppppppuStack_2f0 >> 0x28;
                  uVar3 = (uint)ppppppuStack_2f0;
                  ppppppuStack_2f0._0_5_ = (uint5)(uVar3 & 0xffffff00);
                  ppppppuStack_2f0 =
                       (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_2f0);
                  func_0x00010775c23c(auStack_130);
                  func_0x0001075530c4(&ppppppuStack_2c0,auStack_130);
                  func_0x0001072c95d0(auStack_130);
                  func_0x0001072c9854(auStack_2d8);
                  if ((bStack_2b0 & 1) != 0) goto LAB_107759b08;
                  func_0x00010775c2c8();
                }
                else {
LAB_107759b08:
                  func_0x00010775c390();
                  (*extraout_x9_04)(auStack_130,auStack_c8,&DAT_10f425e5f);
                  ppppppuStack_2f0 =
                       (undefined8 ******)((ulong)ppppppuStack_2f0 & 0xffffffffffffff00);
                  bStack_2e0 = 0;
                  uVar12 = cStack_120 == '\x01';
                  if ((bool)uVar12) {
                    uStack_300 = 3;
                    uStack_2f8 = 1;
                    uVar5 = (ulong)ppppppuStack_320 >> 0x28;
                    uVar3 = (uint)ppppppuStack_320;
                    ppppppuStack_320._0_5_ = (uint5)(uVar3 & 0xffffff00);
                    ppppppuStack_320 =
                         (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_320);
                    func_0x00010775c23c(auStack_148);
                    func_0x0001075530c4(&ppppppuStack_2f0,auStack_148);
                    func_0x0001072c95d0(auStack_148);
                    func_0x0001072c9854(auStack_308);
                    if ((bStack_2e0 & 1) != 0) goto LAB_107759b84;
                    func_0x00010775c2c8();
                  }
                  else {
LAB_107759b84:
                    func_0x00010775c390();
                    (*extraout_x9_05)(auStack_148,auStack_c8,&DAT_10f425e6b);
                    ppppppuStack_320 =
                         (undefined8 ******)((ulong)ppppppuStack_320 & 0xffffffffffffff00);
                    bStack_310 = 0;
                    uVar12 = cStack_138 == '\x01';
                    if ((bool)uVar12) {
                      uStack_330 = 3;
                      uStack_328 = 1;
                      uVar5 = (ulong)ppppppuStack_350 >> 0x28;
                      uVar3 = (uint)ppppppuStack_350;
                      ppppppuStack_350._0_5_ = (uint5)(uVar3 & 0xffffff00);
                      ppppppuStack_350 =
                           (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_350);
                      func_0x00010775c23c(auStack_160);
                      func_0x0001075530c4(&ppppppuStack_320,auStack_160);
                      func_0x0001072c95d0(auStack_160);
                      func_0x0001072c9854(auStack_338);
                      if ((bStack_310 & 1) != 0) goto LAB_107759c00;
                      func_0x00010775c2c8();
                    }
                    else {
LAB_107759c00:
                      func_0x00010775c390();
                      (*extraout_x9_06)(auStack_160,auStack_c8,&DAT_10f425e76);
                      ppppppuStack_350 =
                           (undefined8 ******)((ulong)ppppppuStack_350 & 0xffffffffffffff00);
                      bStack_340 = 0;
                      uVar12 = cStack_150 == '\x01';
                      if ((bool)uVar12) {
                        uStack_360 = 3;
                        uStack_358 = 1;
                        uVar5 = (ulong)ppppppuStack_380 >> 0x28;
                        uVar3 = (uint)ppppppuStack_380;
                        ppppppuStack_380._0_5_ = (uint5)(uVar3 & 0xffffff00);
                        ppppppuStack_380 =
                             (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_380);
                        func_0x00010775c23c(auStack_178);
                        func_0x0001075530c4(&ppppppuStack_350,auStack_178);
                        func_0x0001072c95d0(auStack_178);
                        func_0x0001072c9854(auStack_368);
                        if ((bStack_340 & 1) != 0) goto LAB_107759c7c;
                        func_0x00010775c2c8();
                      }
                      else {
LAB_107759c7c:
                        func_0x00010775c390();
                        (*extraout_x9_07)(auStack_178,auStack_c8,&DAT_10f425e86);
                        ppppppuStack_380 =
                             (undefined8 ******)((ulong)ppppppuStack_380 & 0xffffffffffffff00);
                        bStack_370 = 0;
                        uVar12 = cStack_168 == '\x01';
                        if ((bool)uVar12) {
                          uStack_390 = 4;
                          uStack_388 = 1;
                          uVar5 = (ulong)ppppppuStack_3b0 >> 0x28;
                          uVar3 = (uint)ppppppuStack_3b0;
                          ppppppuStack_3b0._0_5_ = (uint5)(uVar3 & 0xffffff00);
                          ppppppuStack_3b0 =
                               (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_3b0);
                          func_0x00010775c23c(auStack_190);
                          func_0x0001075530c4(&ppppppuStack_380,auStack_190);
                          func_0x0001072c95d0(auStack_190);
                          func_0x0001072c9854(auStack_398);
                          if ((bStack_370 & 1) != 0) goto LAB_107759cf8;
                          func_0x00010775c2c8();
                        }
                        else {
LAB_107759cf8:
                          func_0x00010775c390();
                          (*extraout_x9_08)(auStack_190,auStack_c8,&DAT_10f425e96);
                          cVar7 = cStack_180;
                          ppppppuStack_3b0 =
                               (undefined8 ******)((ulong)ppppppuStack_3b0 & 0xffffffffffffff00);
                          bStack_3a0 = 0;
                          uVar12 = cStack_180 == '\x01';
                          if ((bool)uVar12) {
                            uStack_3e0 = 1;
                            uStack_3d8 = 1;
                            uStack_3f0 = 0;
                            uStack_3ec = 0;
                            func_0x00010775c23c(&ppppppuStack_3d0);
                            func_0x0001075530c4(&ppppppuStack_3b0,&ppppppuStack_3d0);
                            func_0x0001072c95d0(&ppppppuStack_3d0);
                            func_0x0001072c9854(auStack_3e8);
                            if ((bStack_3a0 & 1) != 0) goto LAB_107759d70;
                            func_0x00010775c2c8();
                          }
                          else {
LAB_107759d70:
                            ppppppuVar6 = ppppppuStack_1d8;
                            ppppppuStack_410 =
                                 (undefined8 ******)((ulong)ppppppuStack_410 & 0xffffffffffffff00);
                            uStack_400 = (char)puStack_90 == '\x01';
                            if ((bool)uStack_400) {
                              uStack_408 = uStack_98;
                              ppppppuStack_410 = ppppppuStack_a0;
                              ppppppuStack_a0 = (undefined8 *******)0x0;
                              uStack_98 = 0;
                            }
                            ppppppuStack_430 =
                                 (undefined8 ******)((ulong)ppppppuStack_430 & 0xffffffffffffff00);
                            bStack_420 = bStack_200 == 1;
                            if ((bool)bStack_420) {
                              uStack_428 = uStack_208;
                              ppppppuStack_430 = ppppppuStack_210;
                              uStack_208 = 0;
                              ppppppuStack_210 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_450 =
                                 (undefined8 ******)((ulong)ppppppuStack_450 & 0xffffffffffffff00);
                            cStack_440 = bStack_220 == 1;
                            if ((bool)cStack_440) {
                              uStack_448 = uStack_228;
                              ppppppuStack_450 = ppppppuStack_230;
                              uStack_228 = 0;
                              ppppppuStack_230 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_470 =
                                 (undefined8 ******)((ulong)ppppppuStack_470 & 0xffffffffffffff00);
                            cStack_460 = bStack_280 == 1;
                            if ((bool)cStack_460) {
                              uStack_468 = uStack_288;
                              ppppppuStack_470 = ppppppuStack_290;
                              uStack_288 = 0;
                              ppppppuStack_290 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_490 =
                                 (undefined8 ******)((ulong)ppppppuStack_490 & 0xffffffffffffff00);
                            cStack_480 = bStack_2b0 == 1;
                            if ((bool)cStack_480) {
                              uStack_488 = uStack_2b8;
                              ppppppuStack_490 = ppppppuStack_2c0;
                              uStack_2b8 = 0;
                              ppppppuStack_2c0 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_4b0 =
                                 (undefined8 ******)((ulong)ppppppuStack_4b0 & 0xffffffffffffff00);
                            cStack_4a0 = bStack_2e0 == 1;
                            if ((bool)cStack_4a0) {
                              uStack_4a8 = uStack_2e8;
                              ppppppuStack_4b0 = ppppppuStack_2f0;
                              uStack_2e8 = 0;
                              ppppppuStack_2f0 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_4d0 =
                                 (undefined8 ******)((ulong)ppppppuStack_4d0 & 0xffffffffffffff00);
                            cStack_4c0 = bStack_310 == 1;
                            if ((bool)cStack_4c0) {
                              uStack_4c8 = uStack_318;
                              ppppppuStack_4d0 = ppppppuStack_320;
                              uStack_318 = 0;
                              ppppppuStack_320 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_4f0 =
                                 (undefined8 ******)((ulong)ppppppuStack_4f0 & 0xffffffffffffff00);
                            cStack_4e0 = bStack_340 == 1;
                            if ((bool)cStack_4e0) {
                              uStack_4e8 = uStack_348;
                              ppppppuStack_4f0 = ppppppuStack_350;
                              uStack_348 = 0;
                              ppppppuStack_350 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_510 =
                                 (undefined8 ******)((ulong)ppppppuStack_510 & 0xffffffffffffff00);
                            cStack_500 = bStack_370 == 1;
                            if ((bool)cStack_500) {
                              uStack_508 = uStack_378;
                              ppppppuStack_510 = ppppppuStack_380;
                              uStack_378 = 0;
                              ppppppuStack_380 = (undefined8 *******)0x0;
                            }
                            ppppppuStack_530 =
                                 (undefined8 ******)((ulong)ppppppuStack_530 & 0xffffffffffffff00);
                            cStack_520 = cVar7 != '\0';
                            if ((bool)cStack_520) {
                              uStack_528 = uStack_3a8;
                              ppppppuStack_530 = ppppppuStack_3b0;
                              ppppppuStack_3b0 = (undefined8 *******)0x0;
                              uStack_3a8 = 0;
                            }
                            pppppppuVar18 = (undefined8 *******)ppppppuStack_430;
                            uVar10 = uStack_428;
                            pppppppuVar19 = (undefined8 *******)ppppppuStack_3d0;
                            uVar9 = uStack_3c8;
                            bVar4 = bStack_200;
                            if ((char)puStack_90 != '\0') {
                              uStack_3c8 = uStack_408;
                              ppppppuStack_3d0 = ppppppuStack_410;
                              ppppppuStack_410 = (undefined8 *******)0x0;
                              uStack_408 = 0;
                              func_0x00010775c328(ppppppuStack_1d8 + -0x1e);
                              func_0x00010775c308();
                              pppppppuVar18 = (undefined8 *******)ppppppuStack_430;
                              uVar10 = uStack_428;
                              pppppppuVar19 = (undefined8 *******)ppppppuStack_3d0;
                              uVar9 = uStack_3c8;
                              bVar4 = bStack_420 & 1;
                            }
                            uStack_3c8 = uVar10;
                            ppppppuStack_3d0 = pppppppuVar18;
                            ppppppuStack_430 = ppppppuStack_3d0;
                            uStack_428 = uStack_3c8;
                            if (bVar4 != 0) {
                              ppppppuStack_430 = (undefined8 *******)0x0;
                              uStack_428 = 0;
                              func_0x00010775c328(ppppppuVar6 + -0x1b);
                              func_0x00010775c308();
                              pppppppuVar19 = (undefined8 *******)ppppppuStack_3d0;
                              uVar9 = uStack_3c8;
                            }
                            uStack_3c8 = uVar9;
                            ppppppuStack_3d0 = pppppppuVar19;
                            if (cStack_440 == '\x01') {
                              uStack_3c8 = uStack_448;
                              ppppppuStack_3d0 = ppppppuStack_450;
                              ppppppuStack_450 = (undefined8 *******)0x0;
                              uStack_448 = 0;
                              func_0x00010775c328(ppppppuVar6 + -0x18);
                              func_0x00010775c308();
                            }
                            if (cStack_460 == '\x01') {
                              uStack_3c8 = uStack_468;
                              ppppppuStack_3d0 = ppppppuStack_470;
                              ppppppuStack_470 = (undefined8 *******)0x0;
                              uStack_468 = 0;
                              func_0x00010775c328(ppppppuVar6 + -0x15);
                              func_0x00010775c308();
                            }
                            if (cStack_480 == '\x01') {
                              uStack_3c8 = uStack_488;
                              ppppppuStack_3d0 = ppppppuStack_490;
                              ppppppuStack_490 = (undefined8 *******)0x0;
                              uStack_488 = 0;
                              func_0x00010775c328(ppppppuVar6 + -0x12);
                              func_0x00010775c308();
                            }
                            if (cStack_4a0 == '\x01') {
                              uStack_3c8 = uStack_4a8;
                              ppppppuStack_3d0 = ppppppuStack_4b0;
                              ppppppuStack_4b0 = (undefined8 *******)0x0;
                              uStack_4a8 = 0;
                              func_0x00010775c328(ppppppuVar6 + -0xf);
                              func_0x00010775c308();
                            }
                            if (cStack_4c0 == '\x01') {
                              uStack_3c8 = uStack_4c8;
                              ppppppuStack_3d0 = ppppppuStack_4d0;
                              ppppppuStack_4d0 = (undefined8 *******)0x0;
                              uStack_4c8 = 0;
                              func_0x00010775c328(ppppppuVar6 + -0xc);
                              func_0x00010775c308();
                            }
                            if (cStack_4e0 == '\x01') {
                              uStack_3c8 = uStack_4e8;
                              ppppppuStack_3d0 = ppppppuStack_4f0;
                              ppppppuStack_4f0 = (undefined8 *******)0x0;
                              uStack_4e8 = 0;
                              func_0x00010775c328(ppppppuVar6 + -9);
                              func_0x00010775c308();
                            }
                            if (cStack_500 == '\x01') {
                              uStack_3c8 = uStack_508;
                              ppppppuStack_3d0 = ppppppuStack_510;
                              ppppppuStack_510 = (undefined8 *******)0x0;
                              uStack_508 = 0;
                              func_0x00010775c328(ppppppuVar6 + -6);
                              func_0x00010775c308();
                            }
                            uVar12 = cStack_520 == '\x01';
                            if ((bool)uVar12) {
                              uStack_3c8 = uStack_528;
                              ppppppuStack_3d0 = ppppppuStack_530;
                              ppppppuStack_530 = (undefined8 *******)0x0;
                              uStack_528 = 0;
                              func_0x00010775c328(ppppppuVar6 + -3);
                              func_0x00010775c308();
                            }
                            func_0x0001072c95d0(&ppppppuStack_530);
                            func_0x0001072c95d0(&ppppppuStack_510);
                            func_0x0001072c95d0(&ppppppuStack_4f0);
                            func_0x0001072c95d0(&ppppppuStack_4d0);
                            func_0x0001072c95d0(&ppppppuStack_4b0);
                            func_0x0001072c95d0(&ppppppuStack_490);
                            func_0x0001072c95d0(&ppppppuStack_470);
                            func_0x0001072c95d0(&ppppppuStack_450);
                            func_0x0001072c95d0(&ppppppuStack_430);
                            func_0x0001072c95d0(&ppppppuStack_410);
                          }
                          func_0x0001072c95d0(&ppppppuStack_3b0);
                          func_0x0001072f5f4c(auStack_190);
                          plVar21 = (long *)0x1;
                        }
                        func_0x0001072c95d0(&ppppppuStack_380);
                        func_0x0001072f5f4c(auStack_178);
                      }
                      func_0x0001072c95d0(&ppppppuStack_350);
                      func_0x0001072f5f4c(auStack_160);
                    }
                    func_0x0001072c95d0(&ppppppuStack_320);
                    func_0x0001072f5f4c(auStack_148);
                  }
                  func_0x0001072c95d0(&ppppppuStack_2f0);
                  func_0x0001072f5f4c(auStack_130);
                }
                func_0x0001072c95d0(&ppppppuStack_2c0);
                func_0x0001072f5f4c(auStack_118);
              }
              func_0x0001072c95d0(&ppppppuStack_290);
              func_0x0001072f5f4c(auStack_100);
            }
            func_0x00010775c48c();
            func_0x0001072f5f4c(&ppppppuStack_c0);
            func_0x00010775c494();
            func_0x00010775c43c();
            func_0x00010775c44c();
            func_0x00010775c444();
            pppppppuVar19 = (undefined8 *******)0x0;
            bVar16 = false;
            if (((ulong)plVar21 & 1) == 0) goto LAB_10775a418;
            goto LAB_10775a178;
          }
          uStack_1f0 = 1;
          uStack_1e8 = 1;
          uVar5 = (ulong)ppppppuStack_e8 >> 0x28;
          uVar3 = (uint)ppppppuStack_e8;
          ppppppuStack_e8._0_5_ = (uint5)(uVar3 & 0xffffff00);
          ppppppuStack_e8 = (undefined8 ******)CONCAT35((int3)uVar5,(uint5)ppppppuStack_e8);
          func_0x00010775c23c(&ppppppuStack_c0);
          func_0x0001075530c4(&ppppppuStack_a0,&ppppppuStack_c0);
          func_0x0001072c95d0(&ppppppuStack_c0);
          func_0x0001072c9854(auStack_1f8);
          if (((ulong)puStack_90 & 1) != 0) goto LAB_107759900;
          func_0x00010775c378();
LAB_10775a19c:
          func_0x00010775c44c();
          func_0x00010775c444();
          bVar16 = false;
          pppppppuVar19 = (undefined8 *******)0x0;
        }
LAB_10775a418:
        func_0x0001072f5f6c(&lStack_d0);
        plVar24 = (long *)((long)plVar24 + 1);
      } while (bVar16);
      func_0x000107543b48(&ppppppuStack_1e0);
      goto LAB_10775a508;
    }
    func_0x00010002b838(auStack_1c0,&UNK_10f425bb8);
    func_0x00010775c47c();
    puVar15 = auStack_1c0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar15);
  func_0x00010775c378();
LAB_10775a508:
  func_0x00010775c25c(uStack_70);
  if ((bool)uVar12) {
    return;
  }
  ___stack_chk_fail();
LAB_10775a524:
  func_0x000107543724();
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10775a52c);
  (*pcVar11)();
}


