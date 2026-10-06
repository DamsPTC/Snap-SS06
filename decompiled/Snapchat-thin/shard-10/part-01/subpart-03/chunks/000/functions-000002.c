/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107737920; end: 1077379c3;  */

void FUN_107737920(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *unaff_x21;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107742a34();
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  func_0x000107743184(*param_3);
  puVar2 = &uStack_48;
  func_0x0001072dd514(puVar2,extraout_x8 / 0x38);
  lVar1 = ((long *)*unaff_x21)[1];
  for (lVar3 = *(long *)*unaff_x21; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
    func_0x000107742be0();
    func_0x000107262f24();
    if ((int)puVar2 != 0) {
      puVar2 = &uStack_48;
      func_0x0001072d17f4(puVar2,lVar3);
    }
  }
  func_0x0001073fb2d4(auStack_60,&uStack_48);
  func_0x0001077423a8();
  func_0x00010726e078(&uStack_48);
  return;
}



/* Entry: 107737c74; end: 107737d9b;  */

undefined8 * FUN_107737c74(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined8 *puStack_1b0;
  undefined1 auStack_130 [112];
  undefined1 auStack_c0 [56];
  undefined8 auStack_88 [17];
  
  func_0x000107743290();
  func_0x0001077418c8();
  func_0x000107742d28();
  func_0x000107743820();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x00010774339c();
      func_0x000107737bec();
      func_0x00010772e7e8(auStack_c0,auStack_130);
      func_0x000107737c2c(auStack_88,*puStack_1b0,puStack_1b0[1],auStack_c0);
      func_0x000107742f80();
      func_0x000107742d20();
      func_0x000107742c84();
      if ((bool)uVar1) {
        param_1 = auStack_88;
        func_0x00010772ea78();
        func_0x000107743044();
      }
      else {
        param_1 = auStack_88;
        func_0x00010772ea60();
        func_0x0001077428fc();
      }
      func_0x000107742bd0(auStack_88);
      goto LAB_107737d44;
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
LAB_107737d44:
  func_0x000107742f34();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010772ead4();
  func_0x000107742f34();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773803c; end: 10773804f;  */

void FUN_10773803c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107738544; end: 107738553;  */

void FUN_107738544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *puStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_88 = &uStack_80;
  puStack_70 = &uStack_68;
  func_0x0001077386b8(&puStack_70,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
  func_0x0001077386b8(&puStack_88,*(undefined8 *)*param_2,((undefined8 *)*param_2)[1]);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  func_0x000107743184(*param_1);
  func_0x0001072dd514(&uStack_a0,
                      (((long *)*param_2)[1] - *(long *)*param_2) / 0x38 + extraout_x8 / 0x38);
  puStack_b0 = puStack_70;
  puStack_48 = puStack_88;
  uStack_51 = 0;
  puStack_50 = &uStack_a0;
  while (puStack_48 != &uStack_80) {
    puVar2 = puStack_b0;
    func_0x0001077387b8(puStack_b0,&uStack_68,puStack_48 + 4);
    func_0x0001077434a0(puVar2 == puStack_b0);
    puVar1 = puStack_48;
    if (puVar2 == &uStack_68) break;
    func_0x0001077387b8(puStack_48,&uStack_80,puVar2 + 4);
    func_0x0001077434a0(puStack_48 == puVar1);
    puStack_b0 = puVar2;
  }
  func_0x00010774339c();
  func_0x0001073fb2d4();
  func_0x0001077423a8();
  func_0x00010726e078(&uStack_a0);
  func_0x0001077436e8();
  func_0x0001077437c0();
  return;
}



/* Entry: 107738a84; end: 107738a87;  */

undefined8 * FUN_107738a84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107738e30; end: 107738f2b;  */

/* WARNING: Possible PIC construction at 0x0001077390fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739100) */
/* WARNING: Removing unreachable block (ram,0x000107739118) */
/* WARNING: Removing unreachable block (ram,0x000107739108) */
/* WARNING: Removing unreachable block (ram,0x000107739124) */

double * FUN_107738e30(double *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  double *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 unaff_x19;
  double *unaff_x20;
  undefined1 *unaff_x21;
  double *unaff_x22;
  undefined *unaff_x23;
  ulong unaff_x24;
  undefined8 *puVar9;
  undefined *puVar10;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 in_stack_000001e0;
  
  func_0x00010774309c();
  puVar9 = &stack0x000001e0;
  func_0x000107741834();
  func_0x0001077421ec();
  do {
    uVar3 = unaff_x24 == 2;
    if ((bool)uVar3) {
      unaff_x20 = (double *)unaff_x22[0x10];
      unaff_x21 = &stack0x00000028;
      func_0x000107742fc0();
      param_1 = (double *)&stack0x00000008;
      func_0x0001077436c8();
      func_0x00010774256c();
      func_0x000107743244();
      func_0x000107743234();
      func_0x000107742c84();
      if ((bool)uVar3) {
        func_0x000107743120();
        func_0x000107742ff4();
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto LAB_107738ed8;
    }
    func_0x0001077422b8();
    param_1 = (double *)*param_1;
    func_0x000107741f6c();
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
LAB_107738ed8:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x000107742c44();
  puVar10 = &UNK_107738f2c;
  func_0x000107742904();
  pdVar5 = *(double **)*param_1;
  pdVar6 = (double *)((undefined8 *)*param_1)[1];
  puVar2 = (undefined1 *)register0x00000008;
  pdVar4 = extraout_x8;
  while( true ) {
    *(undefined8 *)(puVar2 + -0x50) = unaff_d9;
    *(double *)(puVar2 + -0x48) = unaff_d8;
    *(ulong *)(puVar2 + -0x40) = unaff_x24;
    *(undefined **)(puVar2 + -0x38) = unaff_x23;
    *(double **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(double **)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar2 + -0x10) = puVar9;
    *(undefined **)(puVar2 + -8) = puVar10;
    func_0x000107741d18();
    *(undefined8 *)(puVar2 + -0x58) = extraout_x8_00;
    uVar3 = pdVar5 == pdVar6;
    if (!(bool)uVar3) break;
code_r0x000107739044:
    uVar7 = 1;
    pdVar5 = unaff_x22;
code_r0x000107739050:
    puVar2[-0xc0] = uVar7;
    uVar8 = 1;
    unaff_x22 = pdVar5;
code_r0x000107739058:
    *(undefined4 *)(puVar2 + -0x60) = uVar8;
    unaff_x20 = (double *)(puVar2 + -200);
    func_0x00010774257c();
    func_0x000107742bf8();
    func_0x000107741c94(*(undefined8 *)(puVar2 + -0x58));
    if ((bool)uVar3) {
      return pdVar4;
    }
    ___stack_chk_fail();
    *(double **)(puVar2 + -0x100) = unaff_x22;
    *(undefined1 **)(puVar2 + -0xf8) = unaff_x21;
    *(double **)(puVar2 + -0xf0) = unaff_x20;
    *(undefined8 *)(puVar2 + -0xe8) = unaff_x19;
    *(undefined1 **)(puVar2 + -0xe0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xd8) = &UNK_107739098;
    puVar9 = (undefined8 *)(puVar2 + -0xe0);
    func_0x0001077418ec();
    func_0x000107742168();
    pdVar4 = (double *)*pdVar4;
    func_0x000107741dcc();
    func_0x000107742de8();
    if ((bool)uVar3) {
      func_0x0001077429cc();
      func_0x000107742a84();
      func_0x0001077420a0();
    }
    else {
      func_0x0001077429c4();
      func_0x0001077428fc();
    }
    func_0x00010774207c();
    uVar3 = (int)unaff_x20 == 1;
    if (!(bool)uVar3) {
      func_0x000107742088();
      func_0x0001077419ec();
      if ((bool)uVar3) {
        return pdVar4;
      }
      ___stack_chk_fail();
      func_0x000107741d08();
      func_0x000107742088();
      func_0x000107742904();
      *(double **)(puVar2 + -0x220) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x218) = unaff_x19;
      *(undefined8 **)(puVar2 + -0x210) = puVar9;
      *(undefined **)(puVar2 + -0x208) = &DAT_107739160;
      *pdVar4 = (double)&PTR_DAT_1109d1d80;
      func_0x000104c2f714(pdVar4 + 9);
      func_0x00010772d754(pdVar4 + 5);
      func_0x0001072c9884(pdVar4 + 2);
      return pdVar4;
    }
    func_0x00010774376c();
    pdVar5 = *(double **)*pdVar4;
    pdVar6 = (double *)((undefined8 *)*pdVar4)[1];
    pdVar4 = (double *)(puVar2 + -0x188);
    puVar10 = &UNK_107739100;
    puVar2 = puVar2 + -0x200;
  }
  func_0x0001077429f8();
  unaff_x23 = &UNK_10de8ee0a;
code_r0x000107738f78:
  uVar3 = true;
  unaff_x22 = pdVar5;
  if (pdVar5 == unaff_x20) goto code_r0x000107739044;
  uVar3 = *(int *)(unaff_x21 + 0x68) == 7;
  switch(*(int *)(unaff_x21 + 0x68)) {
  case 0:
    if (*(int *)(pdVar5 + 0xd) != 0) break;
code_r0x00010773903c:
    pdVar5 = pdVar5 + 0xe;
    goto code_r0x000107738f78;
  case 1:
    uVar3 = 0;
    if (*(int *)(pdVar5 + 0xd) == 1) {
      bVar1 = unaff_x21[8];
      unaff_x24 = (ulong)bVar1;
      pdVar4 = pdVar5;
      func_0x000107280568();
      uVar3 = 0;
      if (*(byte *)pdVar4 == bVar1) goto code_r0x00010773903c;
    }
    break;
  case 2:
    uVar3 = 0;
    if (*(int *)(pdVar5 + 0xd) == 2) {
      unaff_d8 = *(double *)(unaff_x21 + 8);
      pdVar4 = pdVar5;
      func_0x0001072cb4bc();
      uVar3 = 0;
      if (*pdVar4 == unaff_d8) goto code_r0x00010773903c;
    }
    break;
  case 3:
    uVar3 = *(int *)(pdVar5 + 0xd) == 3;
    if ((bool)uVar3) {
      pdVar4 = pdVar5;
      func_0x00010732393c();
      func_0x000104c32db4();
      if (((ulong)pdVar4 & 1) != 0) goto code_r0x00010773903c;
    }
    break;
  default:
    uVar8 = 0;
    goto code_r0x000107739058;
  case 7:
    uVar3 = *(int *)(pdVar5 + 0xd) == 7;
    if ((bool)uVar3) {
      pdVar4 = pdVar5;
      func_0x0001075b94a8();
      func_0x00010775f0dc();
      if ((int)pdVar4 != 0) goto code_r0x00010773903c;
    }
  }
  uVar7 = 0;
  goto code_r0x000107739050;
}



/* Entry: 107739248; end: 10773930b;  */

long * FUN_107739248(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar5;
  long unaff_x23;
  undefined1 auStack_228 [112];
  long alStack_1b8 [17];
  long alStack_c0 [16];
  undefined4 uStack_40;
  
  func_0x0001077429f8();
  func_0x000107741ca8();
  alStack_c0[1] = 0;
  alStack_c0[2] = 0;
  alStack_c0[0] = 0;
  func_0x000107743110(*param_2);
  func_0x000107742d78();
  lVar2 = ((long *)*unaff_x21)[1];
  for (lVar5 = *(long *)*unaff_x21; uVar3 = lVar5 == lVar2, !(bool)uVar3; lVar5 = lVar5 + 0x70) {
    lVar1 = unaff_x20;
    if (*(int *)(lVar5 + 0x68) != 0) {
      lVar1 = lVar5;
    }
    param_1 = alStack_c0;
    func_0x00010758ee8c(param_1,lVar1);
  }
  func_0x00010774339c();
  func_0x000107277aa4();
  uStack_40 = 8;
  func_0x000107742ab8();
  func_0x000107742bf8();
  func_0x000107743144();
  func_0x000107742aa8();
  func_0x0001077419ec();
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742aa8();
  func_0x000107742904();
  func_0x0001077418c8();
  func_0x000107741f34();
  do {
    uVar3 = unaff_x23 == 2;
    if ((bool)uVar3) {
      func_0x00010774376c();
      plVar4 = alStack_1b8;
      FUN_107739248(plVar4,param_1,auStack_228);
      func_0x00010774326c();
      if ((bool)uVar3) {
        func_0x0001077429f0();
        func_0x000107742b70();
        param_1 = plVar4;
      }
      else {
        func_0x0001077429e8();
        func_0x0001077428fc();
        param_1 = plVar4;
      }
      func_0x0001077425ec();
      goto code_r0x0001077393b8;
    }
    func_0x0001077422ac();
    param_1 = (long *)*param_1;
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
  } while ((bool)uVar3);
  uVar3 = 0;
code_r0x0001077393b8:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739700; end: 107739703;  */

undefined8 * FUN_107739700(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739948; end: 107739a0f;  */

/* WARNING: Possible PIC construction at 0x0001077399a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107739ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077399a8) */
/* WARNING: Removing unreachable block (ram,0x0001077399c4) */
/* WARNING: Removing unreachable block (ram,0x0001077399b4) */
/* WARNING: Removing unreachable block (ram,0x0001077399d0) */
/* WARNING: Removing unreachable block (ram,0x000107739adc) */
/* WARNING: Removing unreachable block (ram,0x000107739afc) */
/* WARNING: Removing unreachable block (ram,0x000107739ae8) */
/* WARNING: Removing unreachable block (ram,0x000107739b0c) */

undefined8 * FUN_107739948(undefined8 *param_1)

{
  undefined8 **ppuVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_stack_00000130;
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  param_1 = (undefined8 *)*param_1;
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
  uVar2 = (int)unaff_x21 == 1;
  if ((bool)uVar2) {
    unaff_x20 = *(long *)(unaff_x20 + 0x80);
    param_1 = (undefined8 *)&stack0x00000008;
    puVar5 = (undefined *)0x1077399a8;
  }
  else {
    func_0x000107742088();
    func_0x000107741a68();
    if ((bool)uVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x0001077420f0();
    func_0x00010772ead4();
    func_0x000107742088();
    puVar5 = &SUB_107739a10;
    func_0x000107742904();
  }
  uVar2 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar2) {
    return param_1 + 1;
  }
  ppuVar4 = &puStack_10;
  puVar6 = &UNK_107739a2c;
  puStack_10 = &stack0x00000130;
  puStack_8 = puVar5;
  func_0x00010563ab98();
  ppuVar1 = &puStack_10;
  while( true ) {
    *(long *)((long)ppuVar1 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar1 + -0x18) = unaff_x19;
    *(undefined8 ***)((long)ppuVar1 + -0x10) = ppuVar4;
    *(undefined **)((long)ppuVar1 + -8) = puVar6;
    func_0x000107741be8();
    func_0x000107743a20();
    puVar3 = (undefined8 *)(unaff_x19 + 8);
    func_0x000104c318bc(puVar3,(undefined1 *)((long)ppuVar1 + -0x60));
    *(undefined4 *)(unaff_x19 + 0x40) = 0;
    func_0x0001077431c4();
    func_0x000107741a50();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)ppuVar1 + -0x90) = unaff_x22;
    *(undefined8 *)((long)ppuVar1 + -0x88) = unaff_x21;
    *(long *)((long)ppuVar1 + -0x80) = unaff_x20;
    *(long *)((long)ppuVar1 + -0x78) = unaff_x19;
    *(undefined1 **)((long)ppuVar1 + -0x70) = (undefined1 *)((long)ppuVar1 + -0x10);
    *(undefined **)((long)ppuVar1 + -0x68) = &UNK_107739a78;
    ppuVar4 = (undefined8 **)((long)ppuVar1 + -0x70);
    func_0x000107741910();
    *(undefined4 *)((long)ppuVar1 + -0x158) = 0;
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
    puVar6 = &UNK_107739adc;
    ppuVar1 = (undefined8 **)((long)ppuVar1 + -0x1c0);
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x000107739c80();
  func_0x0001077420d8();
  func_0x000107742904();
  *(long *)((long)ppuVar1 + -0x1e0) = unaff_x20;
  *(long *)((long)ppuVar1 + -0x1d8) = unaff_x19;
  *(undefined8 ***)((long)ppuVar1 + -0x1d0) = ppuVar4;
  *(undefined **)((long)ppuVar1 + -0x1c8) = &DAT_107739b50;
  *puVar3 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar3 + 9);
  func_0x00010772d754(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 107739c4c; end: 107739c7f;  */

long FUN_107739c4c(long param_1)

{
  undefined1 uVar1;
  long extraout_x8;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  uVar1 = *(int *)(param_1 + 0x40) == 1;
  if ((bool)uVar1) {
    return param_1;
  }
  func_0x00010563ab98();
  func_0x000107742a64();
  if (!(bool)uVar1) {
    func_0x000107742644((&PTR_DAT_1109d33e8)[extraout_x8]);
  }
  func_0x00010774352c();
  return param_1;
}



/* Entry: 107739e78; end: 107739f43;  */

/* WARNING: Possible PIC construction at 0x00010773a05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a060) */
/* WARNING: Removing unreachable block (ram,0x00010773a07c) */
/* WARNING: Removing unreachable block (ram,0x00010773a06c) */
/* WARNING: Removing unreachable block (ram,0x00010773a088) */

undefined8 * FUN_107739e78(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 in_stack_00000160;
  
  func_0x000107743a94();
  puVar5 = &stack0x00000160;
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  puVar3 = (undefined8 *)*param_1;
  func_0x000107741e48();
  func_0x00010774319c();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    param_2 = puVar3;
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar2 = (int)unaff_x23 == 1;
  if ((bool)uVar2) {
    unaff_x22 = (undefined8 *)unaff_x22[0x10];
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      param_2 = puVar3;
      func_0x000107742a04();
    }
    else {
      func_0x000107742a14();
      param_2 = puVar3;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  puVar6 = &UNK_107739f44;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar3 = param_2;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 **)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    param_2 = puVar3;
    func_0x000107743300();
    func_0x000107741cf4();
    func_0x000107743604();
    func_0x00010757a1b8(puVar3 + 8,puVar1 + -200);
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
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    puVar4 = unaff_x19;
    func_0x000107742088();
    func_0x000107742904();
    puVar6 = &UNK_107739ff4;
    func_0x000107743c34();
    *(undefined1 **)(puVar1 + 0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 0x98) = puVar6;
    puVar5 = (undefined8 *)(puVar1 + 0x90);
    func_0x000107741970();
    func_0x000107742dfc();
    func_0x000107742168();
    puVar4 = (undefined8 *)*puVar4;
    func_0x000107741e48();
    func_0x000107743b0c();
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
    uVar2 = (int)puVar3 == 1;
    if (!(bool)uVar2) {
      func_0x0001077420d8();
      func_0x000107741a68();
      if ((bool)uVar2) {
        return puVar4;
      }
      ___stack_chk_fail();
      func_0x000107742208();
      func_0x0001077420d8();
      func_0x000107742904();
      *(undefined1 **)(puVar1 + -0xf0) = unaff_x20;
      *(undefined8 **)(puVar1 + -0xe8) = unaff_x19;
      *(undefined8 **)(puVar1 + -0xe0) = puVar5;
      *(undefined **)(puVar1 + -0xd8) = &DAT_10773a0c8;
      *puVar4 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar4 + 9);
      func_0x00010772d754(puVar4 + 5);
      func_0x0001072c9884(puVar4 + 2);
      return puVar4;
    }
    func_0x0001077421a8();
    param_3 = 0;
    func_0x0001077429d4(puVar1 + -0x28);
    puVar6 = &UNK_10773a060;
    puVar1 = puVar1 + -0xd0;
    unaff_x22 = puVar3;
  }
  return unaff_x19;
}



/* Entry: 10773a1c0; end: 10773a26f;  */

long * FUN_10773a1c0(undefined8 param_1,float *param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x23;
  undefined8 uStack_120;
  undefined8 auStack_118 [2];
  undefined8 *puStack_108;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  func_0x000107741ca8();
  uVar1 = false;
  if (param_3 - (long)param_2 == 8) {
    func_0x000107743184(*param_4);
    uVar1 = extraout_x8 == 8;
    unaff_x20 = param_4;
    if ((bool)uVar1) {
      func_0x00010774320c((double)*param_2,(double)param_2[1],&uStack_a8);
      func_0x000107743890();
      func_0x00010774320c(&uStack_120);
      func_0x0001072e941c(uStack_a8,uStack_a0,uStack_120,auStack_118[0]);
      func_0x0001077423d4();
      plVar2 = param_4 + 1;
      goto LAB_10773a248;
    }
  }
  func_0x000107742604();
  func_0x000107742fdc();
  func_0x0001077427b8();
  func_0x000107742e4c();
  plVar2 = (long *)((ulong)unaff_x20 | 8);
LAB_10773a248:
  func_0x00010726af18();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107742904();
  func_0x00010774309c();
  func_0x0001077418c8();
  func_0x0001077421d0();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077427dc();
      func_0x000107743060();
      plVar2 = (long *)&stack0xffffffffffffffe8;
      FUN_10773a1c0(plVar2,*puStack_108,puStack_108[1],auStack_118);
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
      goto code_r0x00010773a320;
    }
    func_0x0001077422ac();
    plVar2 = (long *)*plVar2;
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
code_r0x00010773a320:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x000107742c44();
  func_0x000107742904();
  *plVar2 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar2 + 9);
  func_0x00010772d754(plVar2 + 5);
  func_0x0001072c9884(plVar2 + 2);
  return plVar2;
}



/* Entry: 10773a6f0; end: 10773a6f3;  */

undefined8 * FUN_10773a6f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773a9d0; end: 10773aac7;  */

/* WARNING: Possible PIC construction at 0x00010773abf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773abf4) */
/* WARNING: Removing unreachable block (ram,0x00010773ac14) */
/* WARNING: Removing unreachable block (ram,0x00010773ac04) */
/* WARNING: Removing unreachable block (ram,0x00010773ac20) */

uint * FUN_10773a9d0(uint *param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined8 in_stack_000001e0;
  
  func_0x00010774309c();
  puVar9 = &stack0x000001e0;
  func_0x000107741834();
  func_0x0001077421ec();
  do {
    uVar2 = unaff_x24 == (undefined1 *)0x2;
    if ((bool)uVar2) {
      unaff_x20 = *(undefined1 **)(unaff_x22 + 0x80);
      unaff_x21 = &stack0x00000028;
      func_0x0001077427dc();
      func_0x000107743400();
      func_0x00010774256c();
      func_0x000107742cbc();
      func_0x000107742dac();
      func_0x00010774326c();
      if ((bool)uVar2) {
        func_0x0001077429f0();
        param_2 = param_1;
        func_0x000107742b70();
      }
      else {
        func_0x0001077429e8();
        param_2 = param_1;
        func_0x0001077428fc();
      }
      func_0x0001077425ec();
      goto LAB_10773aa74;
    }
    func_0x0001077422b8();
    param_1 = *(uint **)param_1;
    func_0x000107741f6c();
    func_0x000107742d80();
    if ((bool)uVar2) {
      func_0x0001077429f0();
      func_0x000107742184();
    }
    else {
      func_0x0001077429e8();
      param_2 = param_1;
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar2);
  uVar2 = 0;
LAB_10773aa74:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x000107742c44();
  puVar10 = &UNK_10773aac8;
  func_0x000107742904();
  uVar11 = (ulong)*param_1;
  pfVar6 = (float *)**(long **)param_2;
  pfVar8 = (float *)(*(long **)param_2)[1];
  puVar1 = (undefined1 *)register0x00000008;
  puVar4 = extraout_x8;
  while( true ) {
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    func_0x000107741ce0(puVar4);
    dVar13 = 1.79769313486232e+308;
    while (dVar12 = dVar13, uVar2 = pfVar6 == pfVar8, !(bool)uVar2) {
      pfVar7 = pfVar6 + 1;
      dVar13 = (double)ABS((float)uVar11 - *pfVar6);
      pfVar6 = pfVar7;
      if (dVar12 <= dVar13) {
        dVar13 = dVar12;
      }
    }
    unaff_x19 = puVar1 + -0x98;
    *(double *)(puVar1 + -0x90) = dVar12;
    func_0x000107742f04(2);
    puVar3 = (uint *)(puVar1 + -0x90);
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
    *(long *)(puVar1 + -0xd0) = unaff_x22;
    *(undefined1 **)(puVar1 + -200) = unaff_x21;
    *(undefined1 **)(puVar1 + -0xc0) = unaff_x20;
    *(undefined1 **)(puVar1 + -0xb8) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xa8) = &UNK_10773ab44;
    puVar9 = (undefined8 *)(puVar1 + -0xb0);
    func_0x0001077418c8();
    *(undefined8 *)(puVar1 + -0x118) = extraout_x8_00;
    *(undefined4 *)(puVar1 + -0x210) = 0;
    *(undefined4 *)(puVar1 + -0x1a0) = 0;
    unaff_x25 = puVar1 + -0x198;
    unaff_x24 = puVar1 + -0x270;
    while (uVar2 = unaff_x23 == 2, !(bool)uVar2) {
      func_0x0001077422ac();
      puVar3 = *(uint **)puVar3;
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
          return puVar3;
        }
        ___stack_chk_fail();
        puVar5 = (uint *)(puVar1 + -400);
        func_0x00010727f7f8();
        func_0x0001077436d0();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x2b0) = unaff_x20;
        *(uint **)(puVar1 + -0x2a8) = puVar3;
        *(undefined8 **)(puVar1 + -0x2a0) = puVar9;
        *(undefined **)(puVar1 + -0x298) = &DAT_10773ac8c;
        *(undefined ***)puVar5 = &PTR_DAT_1109d1d80;
        func_0x000104c2f714(puVar5 + 0x12);
        func_0x00010772d754(puVar5 + 10);
        func_0x0001072c9884(puVar5 + 4);
        return puVar5;
      }
    }
    unaff_x20 = puVar1 + -0x278;
    func_0x00010773adec(puVar1 + -0x278);
    func_0x000107743060();
    pfVar6 = (float *)**(long **)(puVar1 + -0x288);
    pfVar8 = (float *)(*(long **)(puVar1 + -0x288))[1];
    puVar4 = puVar1 + -0x198;
    puVar10 = &UNK_10773abf4;
    puVar1 = puVar1 + -0x290;
    unaff_d8 = uVar11;
  }
  return puVar3;
}



/* Entry: 10773ae10; end: 10773ae27;  */

/* WARNING: Possible PIC construction at 0x00010773af70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773af74) */
/* WARNING: Removing unreachable block (ram,0x00010773af98) */
/* WARNING: Removing unreachable block (ram,0x00010773af88) */
/* WARNING: Removing unreachable block (ram,0x00010773afa4) */

long * FUN_10773ae10(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  double dVar11;
  double dVar12;
  float fVar13;
  
  puVar6 = *(undefined1 **)*param_2;
  lVar7 = ((long *)*param_2)[1];
  puVar8 = *(undefined8 **)*param_3;
  puVar9 = (undefined8 *)((undefined8 *)*param_3)[1];
  puVar2 = (undefined1 *)register0x00000008;
  do {
    puVar4 = param_1;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar2 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x000107741ca8();
    dVar11 = 1.79769313486232e+308;
    for (; uVar3 = puVar8 == puVar9, !(bool)uVar3; puVar8 = puVar8 + 2) {
      lVar1 = *(long *)*puVar8;
      uVar3 = ((long *)*puVar8)[1] - lVar1 == lVar7 - (long)puVar6;
      if (!(bool)uVar3) {
        func_0x000107742604();
        func_0x000107742fdc();
        func_0x0001077427b8();
        func_0x000107742e4c();
        plVar5 = (long *)((ulong)unaff_x20 | 8);
        goto code_r0x00010773aed4;
      }
      dVar12 = 0.0;
      for (uVar10 = 0; uVar10 < (ulong)(lVar7 - (long)puVar6 >> 2);
          uVar10 = (ulong)((int)uVar10 + 1)) {
        fVar13 = *(float *)(puVar6 + uVar10 * 4) - *(float *)(lVar1 + uVar10 * 4);
        dVar12 = dVar12 + (double)(fVar13 * fVar13);
      }
      if (dVar11 <= dVar12) {
        dVar12 = dVar11;
      }
      dVar11 = dVar12;
    }
    func_0x0001077423d4();
    plVar5 = (long *)(unaff_x20 + 8);
code_r0x00010773aed4:
    func_0x00010726af18();
    func_0x0001077419ec();
    if ((bool)uVar3) {
      return plVar5;
    }
    ___stack_chk_fail();
    func_0x000107743090();
    func_0x000107742904();
    puVar8 = (undefined8 *)&UNK_10773aef4;
    func_0x00010774309c();
    *(undefined1 **)(puVar2 + 0xc0) = puVar2 + -0x10;
    *(undefined8 **)(puVar2 + 200) = puVar8;
    unaff_x29 = puVar2 + 0xc0;
    func_0x0001077418c8();
    func_0x0001077421d0();
    while (uVar3 = unaff_x23 == 2, !(bool)uVar3) {
      func_0x0001077422ac();
      plVar5 = (long *)*plVar5;
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
        func_0x000107742c44();
        func_0x000107741a80();
        if ((bool)uVar3) {
          return plVar5;
        }
        ___stack_chk_fail();
        func_0x000107742260();
        func_0x00010727f7f8();
        func_0x000107742c44();
        func_0x000107742904();
        *(undefined1 **)(puVar2 + -0x140) = unaff_x20;
        *(undefined1 **)(puVar2 + -0x138) = puVar4;
        *(undefined1 **)(puVar2 + -0x130) = unaff_x29;
        *(undefined **)(puVar2 + -0x128) = &DAT_10773b000;
        *plVar5 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar5 + 9);
        func_0x00010772d754(plVar5 + 5);
        func_0x0001072c9884(plVar5 + 2);
        return plVar5;
      }
    }
    unaff_x20 = puVar2 + -0xf8;
    func_0x0001077427dc();
    puVar6 = puVar2 + -0x88;
    func_0x00010773b120(puVar2 + -0x118);
    func_0x000107743bc4();
    param_1 = puVar2 + -0x18;
    unaff_x30 = &UNK_10773af74;
    puVar2 = puVar2 + -0x120;
    unaff_x19 = puVar4;
  } while( true );
}



/* Entry: 10773b1b8; end: 10773b1f3;  */

long FUN_10773b1b8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10773b4a4; end: 10773b4af;  */

void FUN_10773b4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  func_0x000107742ea0(param_1);
  puStack_60 = &UNK_10e52b660;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001072962ac(&puStack_60,*(undefined8 *)(param_4 + 8));
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



/* Entry: 10773ba14; end: 10773bb0b;  */

undefined8 * FUN_10773ba14(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 auStack_420 [1048];
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
      func_0x00010773b798();
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
    param_1 = (undefined8 *)*unaff_x23;
    func_0x0001077420ac(auStack_420);
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
  func_0x000107741c94(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742c5c();
    func_0x000107742904();
    *param_1 = &PTR_DAT_1109d1d80;
    func_0x000104c2f714(param_1 + 9);
    func_0x00010772d754(param_1 + 5);
    func_0x0001072c9884(param_1 + 2);
    return param_1;
  }
  return param_1;
}



/* Entry: 10773bd38; end: 10773bd57;  */

void FUN_10773bd38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109d3688;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10773bfc0; end: 10773bfeb;  */

void FUN_10773bfc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001074d2700(param_1 + 0x108,param_3);
  func_0x000107743b38();
  func_0x000107741da8();
  return;
}



/* Entry: 10773c320; end: 10773c323;  */

undefined8 * FUN_10773c320(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773c6c4; end: 10773c7a3;  */

/* WARNING: Possible PIC construction at 0x00010773c9e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773c9e8) */
/* WARNING: Removing unreachable block (ram,0x00010773ca00) */
/* WARNING: Removing unreachable block (ram,0x00010773c9f0) */
/* WARNING: Removing unreachable block (ram,0x00010773ca0c) */

long * FUN_10773c6c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar8;
  long extraout_x8_01;
  long *unaff_x20;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *unaff_x24;
  long unaff_x25;
  long lVar12;
  undefined *puVar13;
  undefined8 in_stack_00000100;
  
  func_0x000107742f4c();
  puVar10 = &stack0x00000100;
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
    param_1 = (long *)*unaff_x24;
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
    return param_1;
  }
  ___stack_chk_fail();
  plVar4 = param_1;
  func_0x000107742aa8();
  puVar13 = &UNK_10773c7a4;
  func_0x000107742904();
  puVar2 = (undefined8 *)register0x00000008;
  plVar7 = extraout_x8;
  do {
    func_0x000107743460();
    puVar2[0x22] = puVar10;
    puVar2[0x23] = puVar13;
    func_0x000107741d18();
    puVar2[0x17] = extraout_x8_00;
    uVar8 = plVar4[1];
    uVar3 = uVar8 == 1;
    plVar5 = plVar7;
    plVar7 = plVar4;
    if (uVar8 < 2) {
code_r0x00010773c7d8:
      func_0x00010774238c();
    }
    else {
      puVar10 = (undefined8 *)0x0;
      param_4 = (undefined8 *)0x0;
      plVar9 = (long *)*plVar4;
      for (unaff_x24 = (undefined8 *)(uVar8 * 0x70); iVar11 = (int)param_4, unaff_x20 = plVar4,
          unaff_x24 != (undefined8 *)0x0; unaff_x24 = unaff_x24 + -0xe) {
        uVar3 = (int)plVar9[0xd] == 8;
        if (!(bool)uVar3) goto code_r0x00010773c7d8;
        plVar5 = plVar9;
        func_0x0001075725f8();
        func_0x000107743184(*plVar5);
        puVar6 = (undefined8 *)(extraout_x8_01 / 0x70);
        puVar1 = puVar6;
        if (puVar10 <= puVar6) {
          puVar1 = puVar10;
        }
        puVar10 = puVar1;
        if (iVar11 == 0) {
          puVar10 = puVar6;
        }
        plVar9 = plVar9 + 0xe;
        param_4 = (undefined8 *)0x1;
      }
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      uVar3 = iVar11 == 0;
      puVar1 = puVar10;
      if ((bool)uVar3) {
        puVar1 = (undefined8 *)0x0;
      }
      func_0x0001074b01dc(puVar2 + 5,puVar1);
      if (iVar11 != 0) {
        param_4 = puVar2 + 8;
        for (unaff_x24 = (undefined8 *)0x0; uVar3 = unaff_x24 == puVar10, !(bool)uVar3;
            unaff_x24 = (undefined8 *)((long)unaff_x24 + 1)) {
          func_0x000107743000();
          func_0x000107742d78();
          puVar1 = (undefined8 *)*plVar4;
          for (lVar12 = plVar4[1] * 0x70; lVar12 != 0; lVar12 = lVar12 + -0x70) {
            puVar6 = puVar1;
            func_0x0001075725f8();
            func_0x00010758ee8c(puVar2 + 2,*(long *)*puVar6 + (long)unaff_x24 * 0x70);
            puVar1 = puVar1 + 0xe;
          }
          func_0x00010774339c();
          func_0x000107277aa4();
          puVar2[10] = puVar2[1];
          puVar2[9] = *puVar2;
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 0x15) = 8;
          func_0x000107277668(puVar2 + 5,puVar2 + 8);
          func_0x00010726af18(puVar2 + 9);
          func_0x000107743144();
          func_0x000107742aa8();
        }
      }
      plVar7 = puVar2 + 5;
      func_0x000107277aa4(puVar2 + 8);
      lVar12 = puVar2[8];
      param_1[3] = puVar2[9];
      param_1[2] = lVar12;
      puVar2[8] = 0;
      puVar2[9] = 0;
      func_0x0001077424ac(8);
      plVar5 = puVar2 + 8;
      func_0x00010726b188();
      func_0x0001077436f0();
    }
    plVar4 = plVar7;
    func_0x000107741a80();
    if ((bool)uVar3) {
      return plVar5;
    }
    ___stack_chk_fail();
    plVar7 = plVar5;
    func_0x0001077436f0();
    func_0x000107742904();
    puVar13 = &UNK_10773c960;
    func_0x0001077438e0();
    puVar2[8] = puVar2 + 0x22;
    puVar2[9] = puVar13;
    puVar10 = puVar2 + 8;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != (undefined8 *)0x0) {
      plVar7 = (long *)*param_4;
      func_0x0001077420ac(puVar2 + -0x84);
      func_0x000107743260();
      if ((bool)uVar3) {
        func_0x0001077430d0();
        plVar4 = plVar7;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        plVar4 = plVar7;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)uVar3) {
        func_0x000107742c5c();
        func_0x000107741c94(puVar2[-1]);
        if (!(bool)uVar3) {
          ___stack_chk_fail();
          func_0x000107742784();
          func_0x00010727f7f8();
          func_0x000107742c5c();
          func_0x000107742904();
          puVar2[-0x8a] = unaff_x20;
          puVar2[-0x89] = plVar5;
          puVar2[-0x88] = puVar10;
          puVar2[-0x87] = &DAT_10773ca5c;
          *plVar7 = (long)&PTR_DAT_1109d1d80;
          func_0x000104c2f714(plVar7 + 9);
          func_0x00010772d754(plVar7 + 5);
          func_0x0001072c9884(plVar7 + 2);
          return plVar7;
        }
        return plVar7;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    puVar13 = &UNK_10773c9e8;
    puVar2 = puVar2 + -0x86;
    param_1 = plVar5;
  } while( true );
}



/* Entry: 10773cb6c; end: 10773cd4b;  */

void FUN_10773cb6c(long param_1,long param_2,long param_3,undefined8 param_4)

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
  
  func_0x000107741cf4();
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
    FUN_10775f02c(auStack_160,auStack_198);
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



/* Entry: 10773d134; end: 10773d137;  */

undefined8 * FUN_10773d134(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773d3ac; end: 10773d4ab;  */

/* WARNING: Possible PIC construction at 0x00010773d58c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d590) */
/* WARNING: Removing unreachable block (ram,0x00010773d5a4) */
/* WARNING: Removing unreachable block (ram,0x00010773d598) */
/* WARNING: Removing unreachable block (ram,0x00010773d5b0) */

long * FUN_10773d3ac(long *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 in_stack_00000050;
  undefined1 auStack_1a0 [224];
  long alStack_c0 [7];
  undefined1 auStack_88 [136];
  
  func_0x000107743290();
  puVar7 = &stack0x00000050;
  func_0x0001077429f8();
  plVar3 = param_1;
  func_0x000107741a34();
  func_0x000107742484();
  do {
    uVar2 = unaff_x24 == 2;
    if ((bool)uVar2) {
      param_4 = (code *)param_1[0x10];
      func_0x0001077425a4();
      param_3 = alStack_c0;
      func_0x000107742be0(auStack_88);
      (*param_4)();
      func_0x000107742c54();
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
      goto LAB_10773d468;
    }
    func_0x0001077426f4();
    plVar3 = (long *)*plVar3;
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
LAB_10773d468:
  func_0x000107742c4c();
  func_0x000107741a80();
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x000107742c4c();
  puVar8 = &UNK_10773d4ac;
  func_0x000107742904();
  puVar1 = auStack_1a0;
  puVar4 = extraout_x8;
  while( true ) {
    plVar6 = param_3;
    plVar5 = plVar3;
    *(code **)(puVar1 + -0x30) = param_4;
    *(long **)(puVar1 + -0x28) = unaff_x21;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    func_0x000107741ca8(puVar4);
    unaff_x19 = (long *)(puVar1 + -0xa8);
    func_0x000107723ac8();
    func_0x000107743284();
    func_0x00010745fc58();
    func_0x000107742678();
    func_0x000107742e4c();
    func_0x0001077419ec();
    if ((bool)uVar2) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    plVar3 = unaff_x19;
    func_0x000107742e4c();
    func_0x000107742904();
    *(code **)(puVar1 + -0xe0) = param_4;
    *(undefined1 **)(puVar1 + -0xd8) = puVar1 + -0xa8;
    *(long **)(puVar1 + -0xd0) = plVar6;
    *(long **)(puVar1 + -200) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xb8) = &UNK_10773d51c;
    puVar7 = (undefined8 *)(puVar1 + -0xc0);
    func_0x000107741b04();
    *(undefined8 *)(puVar1 + -0xe8) = extraout_x8_00;
    *(undefined4 *)(puVar1 + -0x170) = 0;
    func_0x000107742168();
    plVar3 = (long *)*plVar3;
    func_0x000107742380(puVar1 + -0x168);
    func_0x000107742cc4();
    if ((bool)uVar2) {
      func_0x0001077429cc();
      func_0x000107742a84();
      func_0x0001077420a0();
    }
    else {
      func_0x0001077429c4();
      func_0x0001077428fc();
    }
    func_0x00010774207c();
    uVar2 = (int)plVar5 == 1;
    if (!(bool)uVar2) break;
    puVar4 = puVar1 + -0x168;
    param_3 = (long *)(puVar1 + -0x1d8);
    puVar8 = &UNK_10773d590;
    puVar1 = puVar1 + -0x1e0;
    plVar3 = plVar6;
    unaff_x20 = plVar6;
    unaff_x21 = plVar5;
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  func_0x000107742904();
  *(long **)(puVar1 + -0x200) = plVar6;
  *(long **)(puVar1 + -0x1f8) = unaff_x19;
  *(undefined8 **)(puVar1 + -0x1f0) = puVar7;
  *(undefined **)(puVar1 + -0x1e8) = &DAT_10773d5ec;
  *plVar3 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar3 + 9);
  func_0x00010772d754(plVar3 + 5);
  func_0x0001072c9884(plVar3 + 2);
  return plVar3;
}



/* Entry: 10773d6d8; end: 10773d773;  */

undefined8 * FUN_10773d6d8(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x21;
  undefined8 auStack_78 [9];
  
  func_0x0001077429f8();
  puVar3 = param_1;
  func_0x000107741ca8();
  func_0x0001077432ec();
  if (((ulong)puVar3 & 1) != 0) {
    func_0x0001077515e0();
    uVar1 = (uint)unaff_x21 & 0xffff;
    in_ZR = uVar1 == 0xff;
    puVar3 = unaff_x21;
    if (0xff < uVar1) {
      puVar3 = auStack_78;
      param_2 = (uint)unaff_x21 & 0xff;
      func_0x000107723c60();
      func_0x000107743710();
      if ((bool)in_ZR) {
        func_0x000107743284();
        func_0x000104c32db4();
      }
      else {
        puVar3 = (undefined8 *)0x0;
      }
      func_0x000107742458();
      goto LAB_10773d748;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  func_0x000107742a28();
LAB_10773d748:
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742ba8();
  func_0x000107742904();
  func_0x000107741b04();
  func_0x000107743190();
  func_0x000107742168();
  puVar3 = (undefined8 *)*puVar3;
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
  uVar2 = param_2 == 1;
  if ((bool)uVar2) {
    func_0x0001077421a8();
    func_0x000107742a54();
    FUN_10773d6d8();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar2) {
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
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar3 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar3 + 9);
  func_0x00010772d754(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 10773da2c; end: 10773da3f;  */

void FUN_10773da2c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773ddb0; end: 10773ddd7;  */

void FUN_10773ddb0(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107743024();
  func_0x0001077430d8();
  func_0x0001077424f8(!(bool)in_ZR && in_NG == in_OV);
  return;
}



/* Entry: 10773e0a8; end: 10773e0ab;  */

undefined8 * FUN_10773e0a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e39c; end: 10773e3a7;  */

void FUN_10773e39c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x000107742718(param_1,param_2);
  func_0x000107743c28();
  if ((bool)in_ZR) {
    func_0x000107742dd4();
    func_0x000104c2fc88();
  }
  func_0x000107742678();
  func_0x00010774323c();
  return;
}



/* Entry: 10773e6f4; end: 10773e6f7;  */

undefined8 * FUN_10773e6f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e924; end: 10773e9ef;  */

void FUN_10773e924(undefined8 *param_1)

{
  undefined1 in_ZR;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int unaff_w23;
  
  func_0x000107743a94();
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  func_0x000107741e48(*param_1);
  func_0x00010774319c();
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
  cVar1 = SBORROW4(unaff_w23,1);
  cVar2 = unaff_w23 + -1 < 0;
  uVar3 = unaff_w23 == 1;
  if ((bool)uVar3) {
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar3) {
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
  func_0x000107741a68();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  func_0x000107742878();
  func_0x0001077430d8();
  func_0x0001077424f8(cVar2 == cVar1);
  return;
}



/* Entry: 10773ec78; end: 10773ed6f;  */

undefined8 * FUN_10773ec78(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined1 auStack_88 [136];
  
  func_0x000107743290();
  func_0x000107742bec();
  func_0x000107741b1c();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077423c4();
      func_0x00010774282c();
      func_0x000107742d8c();
      func_0x00010773ec0c();
      func_0x000107742bc8();
      func_0x000107742bd8();
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
      goto LAB_10773ed20;
    }
    func_0x000107742700();
    param_1 = (undefined8 *)*param_1;
    func_0x0001077426e8(auStack_88);
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
LAB_10773ed20:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773ef84; end: 10773f04b;  */

/* WARNING: Possible PIC construction at 0x00010773f118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773f11c) */
/* WARNING: Removing unreachable block (ram,0x00010773f134) */
/* WARNING: Removing unreachable block (ram,0x00010773f128) */
/* WARNING: Removing unreachable block (ram,0x00010773f140) */

undefined8 * FUN_10773ef84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auStack_140 [256];
  
  puVar6 = &stack0xfffffffffffffff0;
  func_0x000107741930();
  func_0x000107742c6c();
  func_0x00010774215c();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741dcc();
  func_0x000107743860();
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
  uVar2 = unaff_w23 == 1;
  if ((bool)uVar2) {
    unaff_x22 = *(long *)(unaff_x22 + 0x80);
    func_0x0001077429b4();
    func_0x000107742844(*param_1);
    func_0x000107742c78();
    if ((bool)uVar2) {
      func_0x000107742d68();
      func_0x000107741b4c();
    }
    else {
      func_0x0001077430b8();
      func_0x0001077428fc();
    }
    func_0x000107742344();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  puVar7 = &UNK_10773f04c;
  func_0x000107742904();
  puVar1 = auStack_140;
  puVar3 = extraout_x8;
  while( true ) {
    uVar5 = param_3;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar6;
    *(undefined **)(puVar1 + -8) = puVar7;
    param_3 = uVar5;
    func_0x000107741be8();
    func_0x00010774377c();
    func_0x000107743710();
    if ((bool)uVar2) {
      func_0x000107743284();
      func_0x000107575ba8();
      puVar4 = param_1;
    }
    else {
      puVar3 = (undefined8 *)0x0;
      puVar4 = param_1;
    }
    func_0x000107742458();
    func_0x000107741a50();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x000107742ba8();
    func_0x000107742904();
    *(long *)(puVar1 + -0xa0) = unaff_x22;
    *(undefined8 **)(puVar1 + -0x98) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x90) = uVar5;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x78) = &UNK_10773f0b4;
    puVar6 = puVar1 + -0x80;
    param_1 = puVar4;
    func_0x000107741b04();
    func_0x000107743190();
    func_0x000107742168();
    puVar3 = (undefined8 *)*puVar3;
    func_0x000107742324();
    func_0x000107743228();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      param_1 = puVar3;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar2 = (int)puVar4 == 1;
    if (!(bool)uVar2) {
      func_0x0001077420d8();
      func_0x0001077419ec();
      if ((bool)uVar2) {
        return puVar3;
      }
      ___stack_chk_fail();
      func_0x000107741fb4();
      func_0x0001077420d8();
      func_0x000107742904();
      *(undefined8 *)(puVar1 + -0x1f0) = uVar5;
      *(undefined8 *)(puVar1 + -0x1e8) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x1e0) = puVar6;
      *(undefined **)(puVar1 + -0x1d8) = &DAT_10773f184;
      *puVar3 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar3 + 9);
      func_0x00010772d754(puVar3 + 5);
      func_0x0001072c9884(puVar3 + 2);
      return puVar3;
    }
    func_0x0001077421a8();
    func_0x000107742a54();
    puVar7 = &UNK_10773f11c;
    puVar1 = puVar1 + -0x1d0;
    unaff_x20 = uVar5;
    unaff_x21 = puVar4;
  }
  return puVar3;
}



/* Entry: 10773f290; end: 10773f367;  */

undefined8 * FUN_10773f290(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong unaff_x23;
  undefined1 auStack_88 [136];
  
  func_0x0001077431e0();
  func_0x000107742bec();
  func_0x000107741b9c();
  func_0x0001077427f4();
  do {
    uVar1 = 1 < unaff_x23;
    uVar2 = unaff_x23 == 2;
    if ((bool)uVar2) {
      func_0x000107742538();
      func_0x000107742ce8();
      func_0x000107743030();
      func_0x0001077430d8();
      func_0x000107742400(!(bool)uVar1 || (bool)uVar2);
      func_0x000107743674();
      func_0x000107741e30();
      goto LAB_10773f324;
    }
    func_0x000107742700();
    param_1 = (undefined8 *)*param_1;
    func_0x0001077426e8(auStack_88);
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
  } while ((bool)uVar2);
  uVar2 = 0;
LAB_10773f324:
  func_0x000107742c4c();
  func_0x000107741c48();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774265c();
  func_0x000107742c4c();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773f5ec; end: 10773f5ff;  */

void FUN_10773f5ec(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773f8d0; end: 10773f92b;  */

undefined8 * FUN_10773f8d0(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  
  func_0x000107741be8();
  func_0x00010774377c();
  func_0x000107743710();
  if ((bool)in_ZR) {
    func_0x000107743284();
    func_0x000107575b74();
  }
  else {
    param_1 = (undefined8 *)0x0;
  }
  func_0x000107742458();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742ba8();
  func_0x000107742904();
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
    FUN_10773f8d0();
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



/* Entry: 10773fc04; end: 10773fc07;  */

undefined8 * FUN_10773fc04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773fe34; end: 10773fea7;  */

/* WARNING: Possible PIC construction at 0x000107740148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774014c) */
/* WARNING: Removing unreachable block (ram,0x000107740168) */
/* WARNING: Removing unreachable block (ram,0x000107740158) */
/* WARNING: Removing unreachable block (ram,0x000107740178) */

undefined8 * FUN_10773fe34(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar10;
  long lVar11;
  long extraout_x8_02;
  long lVar12;
  long extraout_x9;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong *unaff_x22;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_70 [10];
  
  puVar3 = auStack_70;
  puVar5 = auStack_70;
  puVar15 = &stack0xfffffffffffffff0;
  func_0x000107741acc();
  func_0x00010774239c(auStack_70);
  func_0x000107743214();
  if ((bool)in_ZR) {
    func_0x00010772fe40();
    func_0x000107741b4c();
    puVar5 = puVar3;
  }
  else {
    func_0x00010772fe28();
    func_0x0001077428fc();
  }
  func_0x00010774294c(auStack_70);
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001077426a8();
  func_0x00010772fe9c();
  puVar16 = &UNK_10773fea8;
  func_0x000107742904();
  puVar3 = auStack_70;
  puVar6 = extraout_x8;
  do {
    puVar8 = (ulong *)((long)puVar3 + -0x90);
    *(ulong **)((long)puVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)((long)puVar3 + -0x20) = unaff_x20;
    *(undefined8 *)((long)puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar3 + -0x10) = puVar15;
    *(undefined **)((long)puVar3 + -8) = puVar16;
    puVar7 = param_3;
    func_0x000107741ca8();
    func_0x0001077515e0();
    uVar1 = (uint)puVar5 & 0xffff;
    uVar4 = uVar1 == 0xff;
    if (uVar1 < 0x100) {
      puVar6[8] = 0;
      func_0x000107742a28();
    }
    else {
      func_0x000107723c60((undefined1 *)((long)puVar3 + -0x78),(uint)puVar5 & 0xff);
      if ((*(byte *)((long)puVar3 + -0x40) & 1) == 0) {
        puVar6[8] = 0;
        func_0x000107742a28();
      }
      else {
        unaff_x21 = *param_3;
        unaff_x22 = (ulong *)param_3[1];
        func_0x00010724ef84((undefined1 *)((long)puVar3 + -0x90),
                            (undefined1 *)((long)puVar3 + -0x78));
        func_0x000105275210(unaff_x21,unaff_x21 + (long)unaff_x22 * 0x18);
        func_0x000107743830(*param_3);
        func_0x0001077425dc();
        func_0x00010774338c();
        puVar7 = puVar8;
      }
      puVar5 = (undefined8 *)((long)puVar3 + -0x78);
      func_0x00010724b3d8(puVar5);
    }
    func_0x0001077419ec();
    if ((bool)uVar4) {
      return puVar5;
    }
    ___stack_chk_fail();
    func_0x000107742d44();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar5 = (undefined8 *)((long)puVar3 + -0x78);
    func_0x00010724b3d8();
    func_0x000107742904();
    puVar16 = &UNK_10773ff94;
    func_0x00010774309c();
    *(undefined1 **)((long)puVar3 + 0x150) = (undefined1 *)((long)puVar3 + -0x10);
    *(undefined **)((long)puVar3 + 0x158) = puVar16;
    puVar15 = (undefined1 *)((long)puVar3 + 0x150);
    func_0x000107743520();
    func_0x00010774205c();
    *(undefined8 *)((long)puVar3 + 0xf8) = extraout_x8_01;
    *(undefined1 **)((long)puVar3 + 0x20) = (undefined1 *)((long)puVar3 + 0x38);
    *(undefined8 *)((long)puVar3 + 0x30) = 8;
    *(undefined8 *)((long)puVar3 + 0x28) = 0;
    uVar10 = *puVar7;
    uVar13 = uVar10 >> 1;
    if (0x11 < uVar10) {
      uVar10 = uVar13;
      func_0x000107740378();
      lVar11 = 0;
      lVar14 = *(long *)((long)puVar3 + 0x20);
      *(undefined1 **)((long)puVar3 + -0x80) = (undefined1 *)((long)puVar3 + 0x20);
      *(ulong *)((long)puVar3 + -0x78) = uVar13;
      *(undefined1 **)((long)puVar3 + -0x50) = (undefined1 *)((long)puVar3 + 0x20);
      lVar12 = *(long *)((long)puVar3 + 0x28) * 0x18;
      while (lVar12 != lVar11) {
        func_0x00010774355c();
        lVar11 = extraout_x8_02;
        lVar12 = extraout_x9;
      }
      *(undefined8 *)((long)puVar3 + -0x60) = 0;
      *(undefined8 *)((long)puVar3 + -0x58) = 0;
      func_0x0001077403d0((undefined1 *)((long)puVar3 + -0x60));
      *(undefined8 *)((long)puVar3 + -0x88) = 0;
      if (lVar14 != 0) {
        func_0x0001077403a4(lVar14,*(undefined8 *)((long)puVar3 + 0x28));
        if ((undefined1 *)((long)puVar3 + 0x38) != *(undefined1 **)((long)puVar3 + 0x20)) {
          __ZdlPv();
        }
      }
      *(ulong *)((long)puVar3 + 0x20) = uVar10;
      *(ulong *)((long)puVar3 + 0x30) = uVar13;
      func_0x00010774040c((undefined1 *)((long)puVar3 + -0x88));
      uVar10 = *unaff_x22;
      uVar13 = uVar10 >> 1;
    }
    unaff_x22 = unaff_x22 + 1;
    if ((uVar10 & 1) != 0) {
      unaff_x22 = (ulong *)*unaff_x22;
    }
    lVar14 = uVar13 << 4;
    while (lVar14 != 0) {
      func_0x000107742380((undefined1 *)((long)puVar3 + -0x60),*unaff_x22);
      iVar2 = *(int *)((long)puVar3 + 0x18);
      if (iVar2 == 1) {
        func_0x0001073405dc((undefined1 *)((long)puVar3 + -0x60));
        func_0x000107776f6c((undefined1 *)((long)puVar3 + -0x88));
        puVar9 = (undefined8 *)
                 (*(long *)((long)puVar3 + 0x20) + *(long *)((long)puVar3 + 0x28) * 0x18);
        if (*(long *)((long)puVar3 + 0x28) == *(long *)((long)puVar3 + 0x30)) {
          func_0x000107740438((undefined1 *)((long)puVar3 + -0x68),
                              (undefined1 *)((long)puVar3 + 0x20),puVar9,
                              (undefined1 *)((long)puVar3 + -0x88));
        }
        else {
          uVar18 = *(undefined8 *)((long)puVar3 + -0x80);
          uVar17 = *(undefined8 *)((long)puVar3 + -0x88);
          puVar9[2] = *(undefined8 *)((long)puVar3 + -0x78);
          puVar9[1] = uVar18;
          *puVar9 = uVar17;
          *(undefined8 *)((long)puVar3 + -0x80) = 0;
          *(undefined8 *)((long)puVar3 + -0x78) = 0;
          *(undefined8 *)((long)puVar3 + -0x88) = 0;
          *(long *)((long)puVar3 + 0x28) = *(long *)((long)puVar3 + 0x28) + 1;
        }
        func_0x0001001148fc((undefined1 *)((long)puVar3 + -0x88));
      }
      else {
        func_0x00010756dd74((undefined1 *)((long)puVar3 + -0x60));
        func_0x0001077428fc();
      }
      func_0x00010774299c();
      unaff_x22 = unaff_x22 + 2;
      lVar14 = lVar14 + -0x10;
      uVar4 = iVar2 == 1;
      if (!(bool)uVar4) {
        puVar9 = (undefined8 *)((long)puVar3 + 0x20);
        func_0x0001077405a0(puVar9);
        func_0x000107741a80();
        if ((bool)uVar4) {
          return puVar9;
        }
        ___stack_chk_fail();
        func_0x000107742c90();
        func_0x0001001148fc();
        func_0x00010774299c();
        puVar9 = (undefined8 *)((long)puVar3 + 0x20);
        func_0x0001077405a0();
        func_0x000107742904();
        *(undefined8 **)((long)puVar3 + -0xb0) = puVar5;
        *(undefined8 *)((long)puVar3 + -0xa8) = extraout_x8_00;
        *(undefined1 **)((long)puVar3 + -0xa0) = puVar15;
        *(undefined **)((long)puVar3 + -0x98) = &DAT_1077401e4;
        *puVar9 = &PTR_DAT_1109d1d80;
        func_0x000104c2f714(puVar9 + 9);
        func_0x00010772d754(puVar9 + 5);
        func_0x0001072c9884(puVar9 + 2);
        return puVar9;
      }
    }
    *(undefined8 *)((long)puVar3 + -0x88) = *(undefined8 *)((long)puVar3 + 0x20);
    *(undefined8 *)((long)puVar3 + -0x80) = *(undefined8 *)((long)puVar3 + 0x28);
    puVar6 = (undefined1 *)((long)puVar3 + -0x60);
    param_3 = (ulong *)((long)puVar3 + -0x88);
    puVar16 = &UNK_10774014c;
    puVar3 = (undefined8 *)((long)puVar3 + -0x90);
    unaff_x19 = extraout_x8_00;
    unaff_x20 = puVar5;
  } while( true );
}



/* Entry: 1077403a4; end: 107740437;  */

void FUN_1077403a4(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



/* Entry: 1077407b8; end: 1077407cb;  */

void FUN_1077407b8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107740b7c; end: 107740b87;  */

/* WARNING: Possible PIC construction at 0x000107740d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107740d14) */
/* WARNING: Removing unreachable block (ram,0x000107740d30) */
/* WARNING: Removing unreachable block (ram,0x000107740d1c) */
/* WARNING: Removing unreachable block (ram,0x000107740d3c) */

undefined8 * FUN_107740b7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  long *unaff_x23;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar5 = (undefined8 *)*param_2;
  lVar7 = param_2[1];
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar4 = param_1;
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741ca8();
    uVar3 = lVar7 == 1;
    if (((bool)uVar3) && (uVar3 = *(int *)(puVar5 + 0xd) == 8, (bool)uVar3)) {
      func_0x000107325cc8();
      puVar4 = puVar5;
      func_0x000107743000();
      func_0x000107743110(*puVar4);
      func_0x000107742d78();
      unaff_x21 = ((long *)*puVar5)[1];
      for (lVar7 = *(long *)*puVar5; uVar3 = lVar7 == unaff_x21, !(bool)uVar3; lVar7 = lVar7 + 0x70)
      {
        if (*(int *)(lVar7 + 0x68) != 0) {
          puVar4 = (undefined8 *)(puVar1 + -0xc0);
          func_0x00010758ee8c(puVar4,lVar7);
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
    puVar8 = &UNK_107740c6c;
    func_0x0001077438e0();
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x88) = puVar8;
    unaff_x29 = puVar1 + -0x90;
    unaff_x22 = puVar1 + -0x4f0;
    puVar2 = (undefined8 *)(puVar1 + -0x4f0);
    func_0x000107741970();
    func_0x000107743b18();
    *(undefined8 *)(puVar1 + -0x460) = 8;
    *(undefined8 *)(puVar1 + -0x468) = 0;
    func_0x000107742ed0();
    func_0x00010772e118(puVar1 + -0x470);
    func_0x0001077420c4();
    while ((extraout_x8 & 0x1ffffffffffffffe) != 0) {
      puVar5 = (undefined8 *)*unaff_x23;
      func_0x0001077420ac(puVar1 + -0x4f0);
      uVar3 = *(int *)(puVar1 + -0x478) == 1;
      if ((bool)uVar3) {
        puVar6 = puVar1 + -0x4f0;
        func_0x0001073405dc(puVar1 + -0x4f0);
        puVar5 = (undefined8 *)(puVar1 + -0x470);
        func_0x00010772e3a0(puVar5,puVar6);
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
          return puVar5;
        }
        ___stack_chk_fail();
        func_0x0001077426a8();
        func_0x00010727f7f8();
        func_0x0001077435ec();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x510) = unaff_x20;
        *(undefined8 **)(puVar1 + -0x508) = puVar4;
        *(undefined1 **)(puVar1 + -0x500) = unaff_x29;
        *(undefined **)(puVar1 + -0x4f8) = &DAT_107740d90;
        *puVar5 = &PTR_DAT_1109d1d80;
        func_0x000104c2f714(puVar5 + 9);
        func_0x00010772d754(puVar5 + 5);
        func_0x0001072c9884(puVar5 + 2);
        return puVar5;
      }
    }
    puVar5 = *(undefined8 **)(puVar1 + -0x470);
    lVar7 = *(long *)(puVar1 + -0x468);
    unaff_x30 = &UNK_107740d14;
    puVar1 = puVar1 + -0x4f0;
    param_1 = puVar2;
    unaff_x19 = puVar4;
  }
  return puVar4;
}



/* Entry: 107740f20; end: 107740fd7;  */

undefined8 * FUN_107740f20(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w20;
  
  func_0x0001077418ec();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741dcc();
  func_0x000107742de8();
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
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x00010774386c();
    func_0x000107740e98();
    func_0x000107742c78();
    if ((bool)uVar1) {
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
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077411f4; end: 107741207;  */

void FUN_1077411f4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774160c; end: 10774163f;  */

long FUN_10774160c(long param_1)

{
  undefined1 uVar1;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010563ab98();
    uVar1 = *(int *)(param_1 + 0x40) == 1;
    if (!(bool)uVar1) {
      func_0x00010563ab98();
      func_0x000107741be8();
      func_0x0001077425b0();
      func_0x00010777540c();
      func_0x00010774257c();
      func_0x000107742bf8();
      func_0x000107741a50();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        __Unwind_Resume();
        func_0x000107742a64();
        if (!(bool)uVar1) {
          func_0x000107742644((&PTR_DAT_1109d3fb8)[extraout_x8]);
        }
        func_0x00010774352c();
        return param_1;
      }
      return unaff_x19;
    }
  }
  return param_1 + 8;
}



/* Entry: 107741790; end: 1077417db;  */

void FUN_107741790(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d3fe8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077450c8; end: 1077450cb;  */

void FUN_1077450c8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  func_0x0001000df1ac(&uStack_11,*param_2,param_2[1]);
  return;
}



/* Entry: 1077453a0; end: 1077453bf;  */

void FUN_1077453a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077453c0(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 107745ba8; end: 107745d4f;  */

bool FUN_107745ba8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    puVar4 = param_2 + -2;
    func_0x0001077463d0(param_3,puVar4);
    if ((int)param_3 != 0) {
      uVar10 = param_1[1];
      uVar9 = *param_1;
      uVar11 = *puVar4;
      param_1[1] = param_2[-1];
      *param_1 = uVar11;
      param_2[-1] = uVar10;
      *puVar4 = uVar9;
    }
    break;
  case 3:
    func_0x0001077456b8(param_1,param_1 + 2,param_2 + -2,param_3);
    break;
  case 4:
    func_0x000107745784(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
    break;
  case 5:
    func_0x0001077457e8(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
    break;
  default:
    func_0x0001077456b8(param_1,param_1 + 2,param_1 + 4,param_3);
    lVar7 = 0;
    iVar8 = 0;
    puVar4 = param_1 + 6;
    puVar5 = param_1 + 4;
    while (puVar3 = puVar4, puVar3 != param_2) {
      uVar2 = param_3;
      func_0x000107745694(param_3,puVar3,puVar5);
      if ((int)uVar2 != 0) {
        uStack_68 = puVar3[1];
        uStack_70 = *puVar3;
        lVar1 = lVar7;
        do {
          lVar6 = lVar1;
          *(undefined8 *)((long)param_1 + lVar6 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x28);
          *(undefined8 *)((long)param_1 + lVar6 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar6 + 0x20);
          puVar4 = param_1;
          if (lVar6 == -0x20) goto LAB_107745ce8;
          uVar2 = param_3;
          func_0x000107745694(param_3,&uStack_70,(long)param_1 + lVar6 + 0x10);
          lVar1 = lVar6 + -0x10;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar6 + 0x20);
LAB_107745ce8:
        func_0x000107746560(puVar4);
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar3 + 2 == param_2;
        }
      }
      lVar7 = lVar7 + 0x10;
      puVar5 = puVar3;
      puVar4 = puVar3 + 2;
    }
  }
  return true;
}



/* Entry: 1077465b4; end: 10774680f;  */

/* WARNING: Possible PIC construction at 0x00010774669c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077466cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077466fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774672c: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x000107746730) */
/* WARNING: Removing unreachable block (ram,0x000107746700) */
/* WARNING: Removing unreachable block (ram,0x0001077466d0) */
/* WARNING: Removing unreachable block (ram,0x0001077466a0) */
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

void FUN_1077465b4(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_718 [112];
  undefined1 auStack_6a8 [168];
  undefined1 auStack_600 [504];
  undefined8 uStack_408;
  undefined1 auStack_3c8 [56];
  undefined1 auStack_390 [56];
  undefined1 auStack_358 [112];
  undefined1 auStack_2e8 [168];
  undefined1 auStack_240 [504];
  undefined8 uStack_48;
  
  func_0x000107747a20();
  func_0x000107747c3c();
  func_0x000107747c4c();
  func_0x0001072964ec();
  puVar2 = auStack_240;
  func_0x000107747cd8();
  func_0x0001072deec0(puVar2,auStack_358,unaff_x20 + 0x38);
  func_0x000107747d48();
  func_0x000107747c7c();
  func_0x0001072ddad8(puVar2,auStack_390,unaff_x20 + 0xa8);
  func_0x000107747d54();
  func_0x000107747cb0();
  func_0x0001072ddad8(puVar2,auStack_3c8,unaff_x20 + 0xb0);
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
  if (*(char *)(unaff_x20 + 0x128) == '\x01') {
    func_0x000107747c3c();
    func_0x000107747c4c();
    func_0x000107277ec4();
  }
  else if (*(char *)(unaff_x20 + 0x1a0) == '\x01') {
    func_0x000107747c3c();
    func_0x000107747c4c();
    func_0x000107277ec4();
  }
  else if (*(char *)(unaff_x20 + 0x1e0) == '\x01') {
    func_0x000107747c3c();
    func_0x000107747c4c();
    func_0x000107277460();
  }
  else {
    uVar1 = *(char *)(unaff_x20 + 600) == '\x01';
    if (!(bool)uVar1) {
      func_0x000107747a3c(uStack_48);
      if ((bool)uVar1) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107747c44();
      func_0x000107747c34();
      func_0x000107747ce8();
      func_0x000107747ca8();
      func_0x000107747a88();
      uStack_408 = extraout_x8_00;
      func_0x000107747c3c();
      func_0x000107747c4c();
      func_0x0001072964ec();
      func_0x000107747cd8();
      func_0x0001072deec0(auStack_600,auStack_718,puVar2 + 0x38);
      func_0x000107747c7c(auStack_6a8);
      func_0x000107747d78();
      func_0x000107747cb0(auStack_6a8);
      func_0x000107747d78();
      func_0x0001072965a0(extraout_x8,auStack_6a8,4);
      do {
        func_0x000107747d34();
        func_0x000107747d6c();
      } while (!(bool)uVar1);
      func_0x000107747c60();
      func_0x000107747c58();
      func_0x000107747c74();
      func_0x000107747c34();
      func_0x000107747a3c(uStack_408);
      if ((bool)uVar1) {
        return;
      }
      ___stack_chk_fail();
      do {
        func_0x00010729651c();
        func_0x000107747dac();
      } while( true );
    }
    func_0x000107747c3c();
    func_0x000107747c4c();
    func_0x000107277ec4();
  }
  func_0x000107278594(auStack_358,&stack0xfffffffffffffc18,auStack_2e8);
  return;
}



/* Entry: 107747404; end: 107747683;  */

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
/* WARNING: Removing unreachable block (ram,0x0001077477e8) */
/* WARNING: Removing unreachable block (ram,0x0001077479bc) */
/* WARNING: Removing unreachable block (ram,0x0001077479f0) */
/* WARNING: Removing unreachable block (ram,0x0001077479f4) */
/* WARNING: Removing unreachable block (ram,0x0001077479f8) */
/* WARNING: Removing unreachable block (ram,0x000107747a04) */
/* WARNING: Removing unreachable block (ram,0x000107747a0c) */

void FUN_107747404(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *******pppppppuVar2;
  undefined *puVar3;
  undefined1 auStack_928 [336];
  undefined8 uStack_7d8;
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
    puVar3 = (undefined *)0x107747488;
    puVar1 = auStack_3d0;
  }
  else {
    func_0x000107747da0();
    if ((bool)in_ZR) {
      func_0x000107747ac8();
      func_0x000107747ba8();
      puVar3 = (undefined *)0x1077474a4;
      puVar1 = auStack_3d0;
    }
    else {
      func_0x000107747d94();
      if ((bool)in_ZR) {
        func_0x000107747ab8();
        func_0x000107747b68();
        puVar3 = (undefined *)0x1077474c0;
        puVar1 = auStack_3d0;
      }
      else {
        func_0x000107747d88();
        if ((bool)in_ZR) {
          func_0x000107747a98();
          func_0x000107747b48();
          puVar3 = (undefined *)0x1077474dc;
          puVar1 = auStack_3d0;
        }
        else {
          func_0x000107747df4();
          if ((bool)in_ZR) {
            func_0x000107747c24();
            func_0x000107747bb8();
            puVar3 = (undefined *)0x1077474f8;
            puVar1 = auStack_3d0;
          }
          else {
            func_0x000107747de8();
            if ((bool)in_ZR) {
              func_0x000107747c08();
              func_0x000107747b78();
              puVar3 = (undefined *)0x107747514;
              puVar1 = auStack_3d0;
            }
            else {
              func_0x000107747ddc();
              if ((bool)in_ZR) {
                func_0x000107747bf8();
                func_0x000107747b58();
                puVar3 = (undefined *)0x107747530;
                puVar1 = auStack_3d0;
              }
              else {
                func_0x000107747dd0();
                if ((bool)in_ZR) {
                  func_0x000107747be8();
                  func_0x000107747bc8();
                  puVar3 = (undefined *)0x10774754c;
                  puVar1 = auStack_3d0;
                }
                else {
                  func_0x000107747dc4();
                  if ((bool)in_ZR) {
                    func_0x000107747bd8();
                    func_0x000107747b88();
                    puVar3 = (undefined *)0x107747568;
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
                    puStack_3d8 = &UNK_107747684;
                    pppppppuVar2 = &ppppppuStack_3e0;
                    puVar1 = auStack_7a0;
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
                    if ((bool)in_ZR) {
                      func_0x000107747ae8();
                      func_0x000107747b98();
                      puVar3 = &UNK_107747708;
                      puVar1 = auStack_7a0;
                    }
                    else {
                      func_0x000107747da0();
                      if ((bool)in_ZR) {
                        func_0x000107747ac8();
                        func_0x000107747ba8();
                        puVar3 = &UNK_107747724;
                        puVar1 = auStack_7a0;
                      }
                      else {
                        func_0x000107747d94();
                        if ((bool)in_ZR) {
                          func_0x000107747ab8();
                          func_0x000107747b68();
                          puVar3 = &UNK_107747740;
                          puVar1 = auStack_7a0;
                        }
                        else {
                          func_0x000107747d88();
                          if ((bool)in_ZR) {
                            func_0x000107747a98();
                            func_0x000107747b48();
                            puVar3 = &UNK_10774775c;
                            puVar1 = auStack_7a0;
                          }
                          else {
                            func_0x000107747df4();
                            if ((bool)in_ZR) {
                              func_0x000107747c24();
                              func_0x000107747bb8();
                              puVar3 = &UNK_107747778;
                              puVar1 = auStack_7a0;
                            }
                            else {
                              func_0x000107747de8();
                              if ((bool)in_ZR) {
                                func_0x000107747c08();
                                func_0x000107747b78();
                                puVar3 = &UNK_107747794;
                                puVar1 = auStack_7a0;
                              }
                              else {
                                func_0x000107747ddc();
                                if ((bool)in_ZR) {
                                  func_0x000107747bf8();
                                  func_0x000107747b58();
                                  puVar3 = &UNK_1077477b0;
                                  puVar1 = auStack_7a0;
                                }
                                else {
                                  func_0x000107747dd0();
                                  if ((bool)in_ZR) {
                                    func_0x000107747be8();
                                    func_0x000107747bc8();
                                    puVar3 = &UNK_1077477cc;
                                    puVar1 = auStack_7a0;
                                  }
                                  else {
                                    func_0x000107747dc4();
                                    if (!(bool)in_ZR) {
                                      func_0x000107747a3c(uStack_418);
                                      if ((bool)in_ZR) {
                                        return;
                                      }
                                      ___stack_chk_fail();
                                      func_0x000107747c44();
                                      func_0x000107747c34();
                                      func_0x000107747ce8();
                                      func_0x000107747ca8();
                                      func_0x000107747a88();
                                      uStack_7d8 = extraout_x8_00;
                                      func_0x000107747c7c();
                                      func_0x000107747d60();
                                      func_0x0001072964ec();
                                      func_0x000107747cb0();
                                      func_0x000107747d08();
                                      func_0x000107747d10(extraout_x8,auStack_928);
                                      do {
                                        func_0x000107747d34();
                                        func_0x000107747d6c();
                                      } while (!(bool)in_ZR);
                                      func_0x000107747c60();
                                      func_0x000107747c58();
                                      func_0x000107747a3c(uStack_7d8);
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
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar2;
  *(undefined **)(puVar1 + -8) = puVar3;
  *(undefined8 *)(puVar1 + -0x18) = 0x1f8;
  func_0x000107278594(puVar1 + 0x78,puVar1 + -0x18,puVar1 + 0xe8);
  return;
}



/* Entry: 107748258; end: 107748c8f;  */

void FUN_107748258(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  double *pdVar8;
  byte *pbVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong *puVar10;
  long extraout_x9;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  byte bVar22;
  ulong uVar23;
  double dVar24;
  undefined1 auStack_240 [24];
  undefined **ppuStack_228;
  undefined8 uStack_220;
  long lStack_218;
  uint uStack_210;
  byte bStack_20c;
  byte bStack_20b;
  byte bStack_20a;
  byte bStack_209;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  char cStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  ulong uStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  ulong *puStack_160;
  int iStack_108;
  double adStack_100 [15];
  int iStack_88;
  undefined8 uStack_80;
  
  lVar6 = param_2;
  func_0x00010774a240();
  uStack_80 = extraout_x8;
  FUN_107753050(adStack_100,*(undefined8 *)(lVar6 + 0x48));
  uVar4 = iStack_88 == 1;
  if (!(bool)uVar4) {
    func_0x00010756dd74(adStack_100);
    func_0x00010774a284();
    goto LAB_107748a28;
  }
  pdVar8 = adStack_100;
  func_0x0001073405dc();
  func_0x00010757fc08();
  dVar24 = *pdVar8;
  pbVar7 = *(byte **)(param_2 + 0x58);
  if (pbVar7 == (byte *)0x0) {
    bVar17 = 1;
  }
  else {
    func_0x00010774a204();
    iVar5 = iStack_108;
    if (iStack_108 == 1) {
      func_0x00010774a2c0();
      func_0x00010756e584();
      bVar17 = *pbVar7;
    }
    else {
      func_0x00010774a2c8();
      func_0x00010774a284();
      bVar17 = 1;
    }
    func_0x00010774a214();
    uVar4 = iVar5 == 1;
    if (!(bool)uVar4) goto LAB_107748a28;
  }
  pbVar7 = *(byte **)(param_2 + 0x68);
  if (pbVar7 == (byte *)0x0) {
    bVar18 = 0;
  }
  else {
    func_0x00010774a204();
    iVar5 = iStack_108;
    if (iStack_108 == 1) {
      func_0x00010774a2c0();
      func_0x00010756e584();
      bVar18 = *pbVar7;
    }
    else {
      func_0x00010774a2c8();
      func_0x00010774a284();
      bVar18 = 0;
    }
    func_0x00010774a214();
    uVar4 = iVar5 == 1;
    if (!(bool)uVar4) goto LAB_107748a28;
  }
  pdVar8 = *(double **)(param_2 + 0x78);
  if (pdVar8 == (double *)0x0) {
    uVar21 = 10;
  }
  else {
    func_0x00010774a204();
    iVar5 = iStack_108;
    if (iStack_108 == 1) {
      func_0x00010774a2c0();
      func_0x00010757fc08();
      uVar21 = (uint)*pdVar8;
    }
    else {
      func_0x00010774a2c8();
      func_0x00010774a284();
      uVar21 = 10;
    }
    func_0x00010774a214();
    uVar4 = iVar5 == 1;
    if (!(bool)uVar4) goto LAB_107748a28;
  }
  pbVar7 = *(byte **)(param_2 + 0x88);
  if (pbVar7 == (byte *)0x0) {
    bVar22 = 0;
  }
  else {
    func_0x00010774a204();
    iVar5 = iStack_108;
    if (iStack_108 == 1) {
      func_0x00010774a2c0();
      func_0x00010756e584();
      bVar22 = *pbVar7;
    }
    else {
      func_0x00010774a2c8();
      func_0x00010774a284();
      bVar22 = 0;
    }
    func_0x00010774a214();
    uVar4 = iVar5 == 1;
    if (!(bool)uVar4) goto LAB_107748a28;
  }
  pbVar7 = *(byte **)(param_2 + 0x98);
  if (pbVar7 == (byte *)0x0) {
    bVar16 = 0;
  }
  else {
    func_0x00010774a204();
    if (iStack_108 == 1) {
      func_0x00010774a2c0();
      func_0x00010756e584();
      bVar16 = *pbVar7;
    }
    else {
      func_0x00010774a2c8();
      func_0x00010774a284();
      bVar16 = 0;
    }
    func_0x00010774a214();
    uVar4 = iStack_108 == 1;
    if (!(bool)uVar4) goto LAB_107748a28;
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uVar4 = *(char *)(param_2 + 0xb8) == '\x01';
  if (!(bool)uVar4) goto LAB_107748a00;
  ppuStack_228 = &PTR_DAT_1109ec4c0;
  uStack_220 = 0;
  uStack_208 = 0;
  lStack_218 = (long)dVar24;
  bStack_20c = bVar17 & 1;
  bStack_20b = bVar18 & 1;
  bStack_20a = bVar22 & 1;
  bStack_209 = bVar16 & 1;
  uVar4 = cRam0000000113822cba == '\x01';
  uStack_210 = uVar21;
  if (!(bool)uVar4) {
    func_0x00010774a344();
    goto LAB_1077489e4;
  }
  if ((bRam0000000113725bb0 & 1) == 0) goto LAB_107748a60;
  do {
    lVar6 = lStack_218;
    __ZNSt3__16chrono12system_clock3nowEv();
    uVar20 = (long)pbVar7 / 1000 - lVar6;
    uVar12 = -uVar20;
    if (-1 < (long)uVar20) {
      uVar12 = uVar20;
    }
    uVar15 = (uint)uVar12;
    uVar21 = (uVar15 & 0xffff) % 1000;
    if (0x752 < uVar12 >> 5) {
      uVar21 = uVar15 % 60000;
    }
    if (299999 < uVar12) {
      uVar21 = uVar15 % 300000;
    }
    uVar20 = (ulong)uVar21;
    if (899999 < uVar12) {
      uVar20 = uVar12 % 900000;
    }
    uVar23 = (ulong)uStack_210;
    uVar19 = (ulong)bStack_209;
    uStack_180 = 0x113725d10;
    plStack_178 = (long *)CONCAT71(plStack_178._1_7_,1);
    __ZNSt3__119__shared_mutex_base11lock_sharedEv();
    plStack_1c0 = (long *)0x113725bf8;
    lStack_1b8 = CONCAT71(lStack_1b8._1_7_,1);
    __ZNSt3__119__shared_mutex_base11lock_sharedEv(0x113725bf8);
    func_0x00010774a294((uVar12 - uVar20) + -0x61c8864680b583eb);
    func_0x00010774a294();
    func_0x00010774a294();
    func_0x00010774a294();
    uVar20 = (uVar19 | extraout_x8_00 << 0xc) + (extraout_x8_00 >> 4) + extraout_x9 ^ extraout_x8_00
    ;
    uVar12 = uVar20;
    func_0x000107749ea8();
    iVar5 = 0x13725cd0;
    if (uVar12 == 0) {
      auStack_1e8[0] = 0;
      cStack_1d0 = '\0';
    }
    else {
      uStack_190 = 0x113725cd0;
      __ZNSt3__15mutex8try_lockEv();
      uStack_188 = (undefined1)iVar5;
      if (iVar5 != 0) {
        puVar10 = *(ulong **)(uVar12 + 0x30);
        uVar19 = puVar10[1];
        if (uVar19 != 0xffffffffffffffff) {
          uVar14 = puVar10[2];
          *(ulong *)(uVar19 + 0x10) = uVar14;
          *(ulong *)(uVar14 + 8) = uVar19;
          puVar10[1] = 0x113725ca0;
          puVar10[2] = (ulong)puRam0000000113725cb0;
          puRam0000000113725cb0[1] = (ulong)puVar10;
          puRam0000000113725cb0 = puVar10;
        }
        func_0x00010054bf64(&uStack_190);
      }
      func_0x0001002a82b4(auStack_1e8,uVar12 + 0x18);
      func_0x0001000df5a0(&uStack_190);
    }
    func_0x000100100f40(&plStack_1c0);
    func_0x000100100f40(&uStack_180);
    uVar4 = cStack_1d0 == '\x01';
    if ((bool)uVar4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_240,auStack_1e8);
    }
    else {
      func_0x00010774a344();
      uStack_190 = 0x113725d10;
      uStack_188 = 1;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv();
      puVar10 = (ulong *)0x18;
      __Znwm();
      *puVar10 = uVar20;
      puVar10[1] = 0xffffffffffffffff;
      puVar10[2] = 0;
      uStack_1a0 = 0x113725bf8;
      uStack_198 = 1;
      __ZNSt3__119__shared_mutex_base4lockEv(0x113725bf8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&plStack_1c0,auStack_240);
      lStack_168 = lStack_1b0;
      lStack_170 = lStack_1b8;
      plStack_178 = plStack_1c0;
      plStack_1c0 = (long *)0x0;
      lStack_1b8 = 0;
      lStack_1b0 = 0;
      puStack_1a8 = puVar10;
      uStack_180 = uVar20;
      puStack_160 = puVar10;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_1c0);
      uVar20 = uStack_180;
      uVar12 = uRam0000000113725bd8;
      if (uRam0000000113725bd8 != 0) {
        uVar19 = uRam0000000113725bd8 - 1;
        if ((uRam0000000113725bd8 & uVar19) == 0) {
          uVar23 = uVar19 & uStack_180;
        }
        else {
          uVar23 = uStack_180;
          if (uRam0000000113725bd8 <= uStack_180) {
            uVar23 = 0;
            if (uRam0000000113725bd8 != 0) {
              uVar23 = uStack_180 / uRam0000000113725bd8;
            }
            uVar23 = uStack_180 - uVar23 * uRam0000000113725bd8;
          }
        }
        plVar11 = *(long **)(lRam0000000113725bd0 + uVar23 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_1077487a8;
              uVar14 = plVar11[1];
              if (uVar14 != uStack_180) break;
              uVar4 = plVar11[2] == uStack_180;
              if ((bool)uVar4) {
                __ZdlPv(puVar10);
                goto LAB_1077489c4;
              }
            }
            if ((uRam0000000113725bd8 & uVar19) == 0) {
              uVar14 = uVar14 & uVar19;
            }
            else if (uRam0000000113725bd8 <= uVar14) {
              uVar3 = 0;
              if (uRam0000000113725bd8 != 0) {
                uVar3 = uVar14 / uRam0000000113725bd8;
              }
              uVar14 = uVar14 - uVar3 * uRam0000000113725bd8;
            }
          } while (uVar14 == uVar23);
        }
      }
LAB_1077487a8:
      plVar11 = (long *)0x38;
      __Znwm();
      lVar6 = lStack_168;
      lStack_1b8 = 0x113725be0;
      lStack_1b0 = 1;
      *plVar11 = 0;
      plVar11[1] = uVar20;
      plVar11[2] = uVar20;
      plVar11[4] = lStack_170;
      plVar11[3] = (long)plStack_178;
      plStack_178 = (long *)0x0;
      lStack_170 = 0;
      lStack_168 = 0;
      plVar11[5] = lVar6;
      plVar11[6] = (long)puStack_160;
      if ((uVar12 == 0) ||
         (fRam0000000113725bf0 * (float)uVar12 < (float)(lRam0000000113725be8 + 1))) {
        uVar23 = 1;
        if (2 < uVar12) {
          uVar23 = (ulong)((uVar12 & uVar12 - 1) != 0);
        }
        uVar23 = uVar23 | uVar12 << 1;
        uVar12 = (ulong)((float)(lRam0000000113725be8 + 1) / fRam0000000113725bf0);
        if (uVar23 <= uVar12) {
          uVar23 = uVar12;
        }
        plStack_1c0 = plVar11;
        FUN_107749cd4(uVar23);
        uVar12 = uRam0000000113725bd8;
        if ((uRam0000000113725bd8 & uRam0000000113725bd8 - 1) == 0) {
          uVar23 = uRam0000000113725bd8 - 1 & uVar20;
        }
        else {
          uVar23 = uVar20;
          if (uRam0000000113725bd8 <= uVar20) {
            uVar23 = 0;
            if (uRam0000000113725bd8 != 0) {
              uVar23 = uVar20 / uRam0000000113725bd8;
            }
            uVar23 = uVar20 - uVar23 * uRam0000000113725bd8;
          }
        }
      }
      lVar6 = lRam0000000113725bd0;
      plVar13 = *(long **)(lRam0000000113725bd0 + uVar23 * 8);
      if (plVar13 == (long *)0x0) {
        *plVar11 = (long)plRam0000000113725be0;
        plRam0000000113725be0 = plVar11;
        *(undefined8 *)(lVar6 + uVar23 * 8) = 0x113725be0;
        if (*plVar11 != 0) {
          uVar20 = *(ulong *)(*plVar11 + 8);
          if ((uVar12 & uVar12 - 1) == 0) {
            uVar20 = uVar20 & uVar12 - 1;
          }
          else if (uVar12 <= uVar20) {
            uVar23 = 0;
            if (uVar12 != 0) {
              uVar23 = uVar20 / uVar12;
            }
            uVar20 = uVar20 - uVar23 * uVar12;
          }
          *(long **)(lVar6 + uVar20 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar13;
        *plVar13 = (long)plVar11;
      }
      plStack_1c0 = (long *)0x0;
      lRam0000000113725be8 = lRam0000000113725be8 + 1;
      func_0x00010774a14c(&plStack_1c0);
      func_0x000107276998(&uStack_1a0);
      uVar20 = uRam0000000113725bc0;
      uVar12 = uRam0000000113725bb8;
      uStack_1c8 = uRam0000000113725bc0;
      if (uRam0000000113725bb8 <= uRam0000000113725bc0) {
        func_0x000107749f54();
      }
      plStack_1c0 = (long *)0x113725cd0;
      lStack_1b8 = CONCAT71(lStack_1b8._1_7_,1);
      __ZNSt3__15mutex4lockEv(0x113725cd0);
      puVar10[1] = 0x113725ca0;
      puVar10[2] = (ulong)puRam0000000113725cb0;
      puRam0000000113725cb0[1] = (ulong)puVar10;
      puRam0000000113725cb0 = puVar10;
      func_0x00010054bf64(&plStack_1c0);
      if (uVar20 < uVar12) {
        do {
          uVar20 = uRam0000000113725bc0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x113725bc0,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            uRam0000000113725bc0 = uRam0000000113725bc0 + 1;
          }
        } while (cVar1 != '\0');
        uStack_1c8 = uVar20;
      }
      uVar4 = uVar20 == uRam0000000113725bb8;
      if (uRam0000000113725bb8 < uVar20) {
        iVar5 = 0x13725bc0;
        func_0x00010740db34(0x113725bc0,&uStack_1c8,uVar20 - 1,5);
        if (iVar5 != 0) {
          func_0x000107749f54();
        }
      }
      func_0x0001000df5a0(&plStack_1c0);
LAB_1077489c4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_178);
      func_0x000104c305a0(&uStack_1a0);
      func_0x000100100f40(&uStack_190);
    }
    func_0x0001001148fc(auStack_1e8);
LAB_1077489e4:
    func_0x000100066230(&uStack_200,auStack_240);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_240);
    FUN_10793f7d8(&ppuStack_228);
LAB_107748a00:
    func_0x0001072625b4(&uStack_180,&uStack_200);
    func_0x00010756de48(param_1 + 8,&uStack_180);
    func_0x000104c2f714(&uStack_180);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_200);
LAB_107748a28:
    func_0x00010774a378();
    func_0x00010774a220(uStack_80);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
LAB_107748a60:
    pbVar9 = (byte *)0x113725bb0;
    pbVar7 = pbVar9;
    ___cxa_guard_acquire();
    if ((int)pbVar7 != 0) {
      uRam0000000113725bc0 = 0;
      uRam0000000113725bc8 = 0;
      uRam0000000113725bb8 = 10000;
      __ZNSt3__16thread20hardware_concurrencyEv();
      uRam0000000113725bd8 = 0;
      lRam0000000113725bd0 = 0;
      lRam0000000113725be8 = 0;
      plRam0000000113725be0 = (long *)0x0;
      fRam0000000113725bf0 = 1.0;
      FUN_107749cd4((int)pbVar7 << 2);
      __ZNSt3__119__shared_mutex_baseC1Ev(0x113725bf8);
      uRam0000000113725ca8 = 0xffffffffffffffff;
      puRam0000000113725cb0 = (ulong *)0x0;
      uRam0000000113725cc0 = 0xffffffffffffffff;
      uRam0000000113725cc8 = 0;
      uRam0000000113725cd0 = 0x32aaaba7;
      uRam0000000113725ce0 = 0;
      uRam0000000113725cd8 = 0;
      uRam0000000113725cf0 = 0;
      uRam0000000113725ce8 = 0;
      uRam0000000113725d00 = 0;
      uRam0000000113725cf8 = 0;
      uRam0000000113725d08 = 0;
      __ZNSt3__119__shared_mutex_baseC1Ev(0x113725d10);
      uRam0000000113725ca8 = 0;
      puRam0000000113725cb0 = (ulong *)0x113725cb8;
      uRam0000000113725cc0 = 0x113725ca0;
      ___cxa_guard_release();
      pbVar7 = pbVar9;
    }
  } while( true );
}



/* Entry: 107749cd4; end: 107749e8b;  */

/* WARNING: Possible PIC construction at 0x000107749d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107749e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107749d30) */
/* WARNING: Removing unreachable block (ram,0x000107749d44) */
/* WARNING: Removing unreachable block (ram,0x000107749d58) */
/* WARNING: Removing unreachable block (ram,0x000107749d64) */
/* WARNING: Removing unreachable block (ram,0x000107749d70) */
/* WARNING: Removing unreachable block (ram,0x000107749d78) */
/* WARNING: Removing unreachable block (ram,0x000107749d84) */
/* WARNING: Removing unreachable block (ram,0x000107749d94) */
/* WARNING: Removing unreachable block (ram,0x000107749d9c) */
/* WARNING: Removing unreachable block (ram,0x000107749dbc) */
/* WARNING: Removing unreachable block (ram,0x000107749da8) */
/* WARNING: Removing unreachable block (ram,0x000107749db0) */
/* WARNING: Removing unreachable block (ram,0x000107749dc0) */
/* WARNING: Removing unreachable block (ram,0x000107749dc8) */
/* WARNING: Removing unreachable block (ram,0x000107749df0) */
/* WARNING: Removing unreachable block (ram,0x000107749df8) */
/* WARNING: Removing unreachable block (ram,0x000107749dd0) */
/* WARNING: Removing unreachable block (ram,0x000107749d4c) */
/* WARNING: Removing unreachable block (ram,0x000107749e74) */

void FUN_107749cd4(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 - 1 == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = param_1;
    if ((param_1 & param_1 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar3 = param_1;
    }
  }
  uVar2 = uRam0000000113725bd8;
  if (uRam0000000113725bd8 > uVar3 || uVar3 == uRam0000000113725bd8) {
    if (uRam0000000113725bd8 <= uVar3) {
      return;
    }
    param_1 = (ulong)((float)uRam0000000113725be8 / fRam0000000113725bf0);
    if ((uRam0000000113725bd8 < 3) || ((uRam0000000113725bd8 & uRam0000000113725bd8 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < param_1) {
      param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
    }
    if (uVar3 <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 <= uVar3) {
      return;
    }
    if (uVar3 == 0) {
      param_1 = 0;
      goto code_r0x000107749e8c;
    }
  }
  if (uVar3 >> 0x3d == 0) {
    param_1 = uVar3 << 3;
    __Znwm();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x000107749e8c:
  lVar1 = uRam0000000113725bd0;
  uRam0000000113725bd0 = param_1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10774a1f4; end: 10774a39b;  */

void FUN_10774a1f4(void)

{
  undefined8 in_x4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [81];
  undefined1 uStack_57;
  
  func_0x000100456794(auStack_f0);
  func_0x000107878fec(auStack_108,1);
  func_0x00010533a9c0(auStack_d8,auStack_f0,auStack_108);
  func_0x00010048a6c8(auStack_c0,auStack_d8,&UNK_10f426c9a);
  uStack_118 = *(undefined8 *)(unaff_x21 + 0x48);
  uStack_120 = *(undefined8 *)(unaff_x21 + 0x40);
  if (*(long *)(unaff_x21 + 0x48) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_138,in_x4);
  uStack_148 = *(undefined8 *)(unaff_x21 + 0x38);
  uStack_150 = *(undefined8 *)(unaff_x21 + 0x30);
  if (*(long *)(unaff_x21 + 0x38) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107771c28(auStack_a8,auStack_c0,&uStack_120,auStack_138,&uStack_150);
  func_0x0001072c9830(&uStack_150);
  func_0x000107771c44();
  func_0x000107771c14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  uStack_57 = 0;
  func_0x000107771b68(auStack_a8);
  func_0x000107771bbc();
  return;
}



/* Entry: 10774a694; end: 10774a6af;  */

void FUN_10774a694(long param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  while (*(int *)(param_1 + 0x10) != 2) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x30 = &UNK_10774a6b0;
    func_0x00010563ab98();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    param_1 = unaff_x20;
    unaff_x29 = puVar1;
  }
  return;
}



/* Entry: 10774aec4; end: 10774b117;  */

/* WARNING: Possible PIC construction at 0x00010774b080: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774b084) */

void FUN_10774aec4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 *unaff_x19;
  uint *unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x00010774eb88();
  func_0x00010774e8bc();
  uVar2 = *(ushort *)(param_3 + 0x16);
  uStack_38 = extraout_x8;
  if ((uVar2 >> 4 & 1) == 0) {
    if ((uVar2 >> 3 & 1) == 0) {
      if ((uVar2 >> 10 & 1) == 0) {
        in_ZR = uVar2 == 3;
        if ((bool)in_ZR) {
          puStack_c0 = &UNK_10e52b660;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          lVar7 = *(long *)(unaff_x20 + 2);
          lVar8 = lVar7 + 0x18;
          if ((ulong)*unaff_x20 * 3 != 0) {
            if ((*(ushort *)(lVar7 + 0x16) >> 0xc & 1) == 0) {
              lVar7 = *(long *)(lVar7 + 8);
            }
            lStack_c8 = lVar7;
            FUN_10774aec4(auStack_78,lVar8);
            ppuVar4 = &puStack_c0;
            puVar9 = (undefined *)0x10774b084;
            goto code_r0x00010774b118;
          }
          func_0x000104c33260(&uStack_f0,&puStack_c0);
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 4) = uStack_e8;
          *(undefined8 *)(unaff_x19 + 2) = uStack_f0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          func_0x00010774ed64();
          func_0x000104c33548(&puStack_c0);
        }
        else {
          in_ZR = uVar2 == 4;
          if ((bool)in_ZR) {
            puStack_c0 = (undefined *)0x0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            func_0x0001072ac134(&puStack_c0,*unaff_x20);
            lVar8 = *(long *)(unaff_x20 + 2);
            lVar7 = (ulong)*unaff_x20 * 0x18;
            lVar3 = (ulong)*unaff_x20 * 3;
            while (lVar3 != 0) {
              FUN_10774aec4(auStack_78,lVar8);
              func_0x0001072aad1c(&puStack_c0,auStack_78);
              func_0x00010774ec28();
              lVar8 = lVar8 + 0x18;
              lVar7 = lVar7 + -0x18;
              lVar3 = lVar7;
            }
            func_0x000107327958(&uStack_a0,&puStack_c0);
            *unaff_x19 = 0;
            *(undefined8 *)(unaff_x19 + 4) = uStack_98;
            *(undefined8 *)(unaff_x19 + 2) = uStack_a0;
            uStack_a0 = 0;
            uStack_98 = 0;
            func_0x000104c33108(&uStack_a0);
            func_0x000107269124(&puStack_c0);
          }
          else {
            *unaff_x19 = 7;
          }
        }
      }
      else {
        in_ZR = (uVar2 & 0x1000) == 0;
        puVar1 = *(uint **)(unaff_x20 + 2);
        if (!(bool)in_ZR) {
          puVar1 = unaff_x20;
        }
        func_0x00010002b838(auStack_90,puVar1);
        func_0x000107268798();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
      }
    }
    else {
      in_ZR = uVar2 == 10;
      *unaff_x19 = 6;
      *(undefined1 *)(unaff_x19 + 2) = in_ZR;
    }
  }
  else {
    if ((uVar2 >> 7 & 1) == 0) {
      if ((uVar2 >> 8 & 1) == 0) {
        func_0x0001073274d0();
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 2) = param_1;
        goto LAB_10774b004;
      }
      uVar5 = *(undefined8 *)unaff_x20;
      uVar6 = 5;
    }
    else {
      uVar5 = *(undefined8 *)unaff_x20;
      uVar6 = 4;
    }
    *unaff_x19 = uVar6;
    *(undefined8 *)(unaff_x19 + 2) = uVar5;
  }
LAB_10774b004:
  func_0x00010774e8a8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_c0;
  func_0x000107269124();
  puVar9 = &SUB_10774b118;
  func_0x00010774e9a0();
code_r0x00010774b118:
  ppuStack_108 = ppuVar4;
  puStack_100 = &stack0xfffffffffffffff0;
  puStack_f8 = puVar9;
  func_0x00010774e1b4(&ppuStack_108);
  return;
}



/* Entry: 10774b454; end: 10774b4bb;  */

void FUN_10774b454(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010774e8bc(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0(auStack_a0);
  func_0x00010774e8a8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107296ad0(auStack_a0);
  func_0x00010774e9a0();
  return;
}



/* Entry: 10774bdd0; end: 10774bfbb;  */

void FUN_10774bdd0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long *plVar7;
  long *plVar8;
  double *pdVar9;
  long *unaff_x20;
  double *unaff_x21;
  long *plVar10;
  double *pdVar11;
  ulong uVar12;
  double dVar13;
  
  plVar7 = param_1;
  func_0x00010774c07c();
  func_0x00010774ebe8();
  plVar8 = plVar7;
  func_0x00010774eb0c();
  if (1 < (long)plVar8) {
    uVar12 = 0;
    dVar13 = *unaff_x21;
    dVar3 = unaff_x21[1];
    dVar5 = unaff_x21[2];
    dVar4 = unaff_x21[3];
    dVar6 = unaff_x21[4];
    plVar10 = unaff_x20;
    do {
      func_0x00010774c3d8(&stack0xffffffffffffff80,uVar12 + 1);
      uVar2 = uVar12 << 1 | 1;
      uVar1 = uVar12 * 2 + 2;
      uVar12 = uVar2;
      pdVar11 = unaff_x21;
      if ((long)uVar1 < (long)plVar8) {
        pdVar9 = (double *)&stack0xffffffffffffff80;
        func_0x00010774c3b0(pdVar9,1);
        if ((*unaff_x21 < *pdVar9) &&
           (pdVar11 = unaff_x21 + 5, uVar12 = uVar1, (long)pdVar11 - *plVar10 == 0xff0)) {
          plVar10 = plVar10 + 1;
          pdVar11 = (double *)*plVar10;
        }
      }
      func_0x00010774c450(unaff_x21,pdVar11);
      unaff_x21 = pdVar11;
    } while ((long)uVar12 <= (long)((long)plVar8 - 2U >> 1));
    if (*plVar7 == param_2) {
      param_2 = plVar7[-1] + 0xff0;
    }
    if (pdVar11 == (double *)(param_2 + -0x28)) {
      *pdVar11 = dVar13;
      pdVar11[1] = dVar3;
      pdVar11[2] = dVar5;
      pdVar11[3] = dVar4;
      pdVar11[4] = dVar6;
    }
    else {
      func_0x00010774c450(pdVar11);
      pdVar11 = pdVar11 + 5;
      if ((long)pdVar11 - *plVar10 == 0xff0) {
        plVar10 = plVar10 + 1;
        pdVar11 = (double *)*plVar10;
      }
      *(double *)(param_2 + -0x28) = dVar13;
      *(double *)(param_2 + -0x20) = dVar3;
      *(double *)(param_2 + -0x18) = dVar5;
      *(double *)(param_2 + -0x10) = dVar4;
      *(double *)(param_2 + -8) = dVar6;
      func_0x00010774eb0c(plVar10,pdVar11);
      FUN_10774c2fc(unaff_x20);
    }
  }
  param_1[5] = param_1[5] + -1;
  plVar7 = param_1;
  func_0x00010774c0d0();
  if ((long *)0xcb < plVar7) {
    __ZdlPv(*(undefined8 *)(param_1[2] + -8));
    func_0x00010774c47c(param_1,param_1[2] + -8);
  }
  return;
}



/* Entry: 10774c2fc; end: 10774c3af;  */

void FUN_10774c2fc(double *param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  double *pdVar1;
  double *pdVar2;
  long unaff_x19;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (1 < param_5) {
    func_0x00010774ebf8(param_5 + -2);
    if (param_4 == *param_3) {
      param_4 = param_3[-1] + 0xff0;
    }
    dVar8 = *(double *)(param_4 + -0x28);
    if (*param_1 < dVar8) {
      dVar5 = *(double *)(param_4 + -0x18);
      dVar3 = *(double *)(param_4 + -0x20);
      dVar7 = *(double *)(param_4 + -8);
      dVar6 = *(double *)(param_4 + -0x10);
      pdVar2 = (double *)(param_4 + -0x28);
      do {
        pdVar1 = param_1;
        func_0x00010774c450(pdVar2,pdVar1);
        if (unaff_x19 == 0) break;
        func_0x00010774ebf8(unaff_x19 + -1);
        dVar4 = *pdVar2;
        param_1 = pdVar2;
        pdVar2 = pdVar1;
      } while (dVar4 < dVar8);
      *pdVar1 = dVar8;
      pdVar1[2] = dVar5;
      pdVar1[1] = dVar3;
      pdVar1[4] = dVar7;
      pdVar1[3] = dVar6;
    }
  }
  return;
}



/* Entry: 10774c688; end: 10774c98b;  */

double FUN_10774c688(double param_1,double **param_2,double **param_3,double **param_4)

{
  ulong uVar1;
  double *pdVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  double *pdVar4;
  long *unaff_x20;
  long *unaff_x21;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double *pdVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double *pdStack_178;
  double *pdStack_170;
  double *pdStack_150;
  double *pdStack_148;
  undefined1 uStack_140;
  double *pdStack_138;
  double *pdStack_130;
  undefined1 uStack_128;
  double dStack_120;
  double *pdStack_118;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [3];
  double dStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  double *pdStack_d8;
  double *pdStack_d0;
  double adStack_c8 [6];
  long lStack_98;
  undefined8 uStack_88;
  
  func_0x00010774e944();
  func_0x00010774e8bc();
  uStack_88 = extraout_x8;
  func_0x00010774e914();
  func_0x00010774ea2c();
  uVar3 = param_1 == 0.0;
  dVar8 = param_1;
  adStack_c8[0] = param_1;
  if ((bool)uVar3) {
LAB_10774c920:
    func_0x00010774e8a8(uStack_88);
    if ((bool)uVar3) {
      return dVar8;
    }
    ___stack_chk_fail();
    if ((int)param_3 == 0) {
      func_0x00010774e9a0();
    }
    else {
      param_2 = &pdStack_150;
      func_0x0001072694f8();
    }
    func_0x00010774ed98();
    func_0x00010774ca34(*param_2,param_2[1],&uStack_1c0,param_4,param_3);
    pdVar9 = *param_2;
    func_0x00010739c1b8(pdVar9,param_2[1],uStack_1c0,uStack_1b8,param_4);
    return SQRT((double)pdVar9);
  }
  adStack_c8[4] = 0.0;
  adStack_c8[3] = 0.0;
  lStack_98 = 0;
  adStack_c8[5] = 0.0;
  adStack_c8[2] = 0.0;
  adStack_c8[1] = 0.0;
  func_0x00010774e954(unaff_x21[1]);
  dStack_120 = 0.0;
  pdStack_118 = (double *)0x0;
  apuStack_108[0] = (double *)0x0;
  uStack_110 = extraout_x8_00;
  func_0x00010774edc8();
  while( true ) {
    while( true ) {
      do {
        dVar8 = adStack_c8[0];
        if (lStack_98 == 0) goto LAB_10774c91c;
        func_0x00010774e9fc();
        pdVar2 = pdStack_d0;
        pdVar9 = pdStack_d8;
        uVar1 = uStack_e0;
        uVar6 = uStack_e8;
        uVar3 = dStack_f0 == adStack_c8[0];
      } while (adStack_c8[0] <= dStack_f0);
      if (((uStack_e0 - uStack_e8) + 1 < 0x65) &&
         ((ulong)((long)pdStack_d0 + (1 - (long)pdStack_d8)) < 0x33)) break;
      func_0x00010774bfbc(&dStack_120,&uStack_e8);
      uVar3 = (long)pdVar2 - (long)pdVar9 == 0;
      if (pdVar2 < pdVar9) {
        uStack_128 = 0;
        pdStack_150 = (double *)((ulong)pdStack_150 & 0xffffffffffffff00);
        uStack_140 = 0;
        pdStack_138 = (double *)((ulong)pdStack_138._1_7_ << 8);
      }
      else {
        uVar6 = ((long)pdVar2 - (long)pdVar9) + 1;
        uVar3 = uVar6 == 2;
        if ((bool)uVar3) {
          uStack_128 = 0;
          pdStack_148 = pdStack_d0;
          pdStack_150 = pdStack_d8;
          uStack_140 = 1;
          pdStack_138 = (double *)((ulong)pdStack_138._1_7_ << 8);
        }
        else {
          pdStack_148 = (double *)((long)pdVar9 + (uVar6 >> 1));
          pdStack_150 = pdVar9;
          uStack_128 = 1;
          uStack_140 = 1;
          pdStack_130 = pdVar2;
          pdStack_138 = pdStack_148;
        }
      }
      pdStack_170 = adStack_c8;
      pdStack_178 = adStack_c8 + 1;
      func_0x00010774ee38();
      func_0x00010774c9d4();
      func_0x00010774ee38();
      func_0x00010774ede0();
      param_4 = &pdStack_150;
      func_0x00010774c9d4(&pdStack_178,apuStack_108);
      param_2 = &pdStack_178;
      param_3 = (double **)apuStack_108;
      func_0x00010774ede0();
    }
    dVar8 = dStack_f0;
    func_0x00010774eb70(unaff_x21[1]);
    uVar3 = uVar1 >= uVar6 && uVar1 == extraout_x8_01;
    if (uVar1 < uVar6 || extraout_x8_01 <= uVar1) break;
    lVar5 = *unaff_x20;
    pdVar4 = (double *)(unaff_x20[1] - lVar5 >> 4);
    uVar3 = pdVar2 >= pdVar9 && pdVar2 == pdVar4;
    if (pdVar2 < pdVar9 || pdVar4 <= pdVar2) break;
    lVar7 = (long)pdVar2 * 0x10 + 0x10;
    dStack_120 = 0.0;
    pdStack_118 = (double *)0x0;
    uStack_110 = 0;
    pdStack_150 = &dStack_120;
    pdStack_148 = (double *)((ulong)pdStack_148 & 0xffffffffffffff00);
    if (lVar7 != (long)pdVar9 * 0x10) {
      param_3 = (double **)(lVar7 + (long)pdVar9 * -0x10 >> 4);
      func_0x0001072694c4(&dStack_120);
      for (pdVar9 = (double *)(lVar5 + (long)pdVar9 * 0x10); pdVar9 != (double *)(lVar5 + lVar7);
          pdVar9 = pdVar9 + 2) {
        dVar8 = *pdVar9;
        pdStack_118[1] = pdVar9[1];
        *pdStack_118 = dVar8;
        pdStack_118 = pdStack_118 + 2;
      }
    }
    pdStack_148 = (double *)CONCAT71(pdStack_148._1_7_,1);
    param_2 = &pdStack_150;
    func_0x0001072694f8();
    lVar5 = uVar6 << 4;
    uVar6 = uVar6 - 1;
    while( true ) {
      uVar6 = uVar6 + 1;
      uVar3 = uVar6 == uVar1;
      if (uVar1 <= uVar6 && !(bool)uVar3) break;
      lVar7 = *unaff_x21;
      func_0x000107269434(&pdStack_150,&dStack_120);
      param_3 = &pdStack_150;
      func_0x00010774eaf8(lVar7 + lVar5);
      lVar5 = lVar5 + 0x10;
      if (adStack_c8[0] <= dVar8) {
        dVar8 = adStack_c8[0];
      }
      param_2 = &pdStack_150;
      adStack_c8[0] = dVar8;
      func_0x000104c31c5c();
      uVar3 = adStack_c8[0] == 0.0;
      dVar8 = adStack_c8[0];
      if ((bool)uVar3) {
        func_0x00010774ed48();
        dVar8 = 0.0;
        goto LAB_10774c91c;
      }
    }
    func_0x00010774ed48();
  }
  func_0x00010774eb00();
  dVar8 = param_1;
LAB_10774c91c:
  func_0x00010774ec70();
  goto LAB_10774c920;
}



/* Entry: 10774cf08; end: 10774d047;  */

double FUN_10774cf08(double param_1,double *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  double *pdVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long alStack_a8 [3];
  double dStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  undefined8 uStack_68;
  
  pdVar6 = param_2;
  plVar7 = param_3;
  func_0x00010774e8bc();
  uStack_68 = extraout_x8;
  func_0x00010774ed74();
  if (((ulong)pdVar6 & 1) == 0) {
    plVar1 = (long *)*param_3;
    plVar2 = (long *)param_3[1];
    func_0x00010774ea40();
    do {
      in_ZR = 1;
      if (plVar1 == plVar2) break;
      pdVar6 = (double *)*plVar1;
      lVar3 = plVar1[1];
      in_ZR = false;
      if ((*pdVar6 == *(double *)(lVar3 + -0x10)) &&
         (in_ZR = false, !NAN(pdVar6[1]) && !NAN(*(double *)(lVar3 + -8)))) {
        in_ZR = pdVar6[1] == *(double *)(lVar3 + -8);
      }
      if (!(bool)in_ZR) {
        uStack_88 = *(undefined8 *)(lVar3 + -8);
        dStack_90 = *(double *)(lVar3 + -0x10);
        dStack_78 = pdVar6[1];
        param_1 = *pdVar6;
        dStack_80 = param_1;
        func_0x00010774ebc4(alStack_a8,&dStack_90);
        plVar7 = alStack_a8;
        func_0x00010774eaf8();
        func_0x00010774ea2c();
        func_0x00010774ebcc();
        in_ZR = 1;
        break;
      }
      func_0x000107269434(alStack_a8,plVar1);
      plVar7 = param_4;
      func_0x00010774ca34(*param_2,param_2[1],&dStack_90,param_4,alStack_a8);
      uVar5 = uStack_88;
      dVar4 = dStack_90;
      func_0x00010774ebcc();
      param_1 = *param_2;
      func_0x00010774ba54(param_1,param_2[1],dVar4,uVar5);
      func_0x00010774e8cc();
    } while (!(bool)in_ZR);
  }
  func_0x00010774e8a8(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010774ebcc();
    func_0x00010774e9a0();
    if ((char)plVar7[2] == '\x01') {
      func_0x00010774ebd4();
      func_0x00010774ed50();
      func_0x00010774eae0();
      if (param_1 < *(double *)param_2[1]) {
        func_0x00010774eab0();
      }
    }
    return param_1;
  }
  return 0.0;
}



/* Entry: 10774d9c4; end: 10774db3b;  */

void FUN_10774d9c4(undefined8 *param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar2;
  long extraout_x8;
  undefined1 auStack_50 [16];
  
  func_0x00010774eb88();
  plVar1 = (long *)*param_1;
  plVar2 = plVar1;
  func_0x00010774cc50(plVar1,param_1[1]);
  if ((int)plVar2 != 0) {
    func_0x00010739c204(*(undefined8 *)(*plVar1 + 8),auStack_50,3);
    func_0x00010774ec98();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010774da20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de94532)[extraout_x8] * 4 + 0x10774da24))();
      return;
    }
  }
  func_0x00010774eb00();
  return;
}



/* Entry: 10774e000; end: 10774e013;  */

void FUN_10774e000(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774e15c; end: 10774e16f;  */

void FUN_10774e15c(void)

{
  func_0x00010774e17c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774e3b0; end: 10774e3d3;  */

void FUN_10774e3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x00010774e3d4(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10774e5f0; end: 10774e60b;  */

void FUN_10774e5f0(void)

{
  func_0x00010774e60c();
  return;
}



/* Entry: 10774e7cc; end: 10774e7e7;  */

void FUN_10774e7cc(void)

{
  func_0x00010774e7e8();
  return;
}



/* Entry: 10774efe8; end: 10774f10b;  */

void FUN_10774efe8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 *puVar2;
  undefined1 auStack_2e0 [16];
  undefined1 uStack_2d0;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [24];
  undefined1 uStack_298;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined8 uStack_288;
  char cStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [144];
  undefined1 auStack_1d8 [88];
  undefined1 auStack_150 [40];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte bStack_110;
  undefined1 auStack_108 [88];
  undefined **ppuStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [88];
  int iStack_48;
  undefined8 uStack_38;
  
  func_0x0001077500ac();
  uStack_38 = extraout_x8;
  func_0x000107326d6c(auStack_a0,0,0x400,0);
  func_0x0001075222a8();
  if (iStack_48 == 0) {
    func_0x000107750234(auStack_108);
    puStack_a8 = auStack_a0;
    ppuStack_b0 = &PTR_DAT_1131ad2e8;
    func_0x000107750268();
    func_0x000107771274(&uStack_120,auStack_108,&ppuStack_b0,param_2,auStack_128,auStack_150);
    func_0x0001072c94e0(auStack_150);
    func_0x0001072f5f6c(&ppuStack_b0);
    if ((bStack_110 & 1) != 0) {
      unaff_x19[1] = uStack_118;
      *unaff_x19 = uStack_120;
      unaff_x19 = &uStack_120;
    }
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    func_0x0001072c95d0(&uStack_120);
    func_0x0001072ca718(auStack_108);
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  func_0x000107326ea8(auStack_a0);
  func_0x000107750098(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107750158();
  func_0x0001072c94e0();
  func_0x0001072f5f6c(&ppuStack_b0);
  func_0x0001072ca718(auStack_108);
  puVar1 = auStack_a0;
  func_0x000107326ea8(puVar1);
  func_0x000107750118();
  func_0x000107750234(auStack_1d8);
  uStack_278 = 0;
  uStack_270 = 0;
  auStack_2e0[0] = 0;
  uStack_2d0 = 0;
  uStack_290 = 0;
  cStack_280 = '\0';
  auStack_2b0[0] = 0;
  uStack_298 = 0;
  func_0x0001075375e8(auStack_268,&uStack_278,auStack_2e0,&uStack_290,auStack_2b0);
  func_0x0001001148fc(auStack_2b0);
  func_0x000107323f70(&uStack_290);
  func_0x000107323ef8(auStack_2e0);
  func_0x000107323f90(&uStack_278);
  func_0x000107750268();
  func_0x000107771274(&uStack_290,auStack_1d8,puVar1,auStack_268,auStack_2b8,auStack_2e0);
  func_0x0001072c94e0(auStack_2e0);
  puVar2 = extraout_x8_00;
  if (cStack_280 == '\x01') {
    extraout_x8_00[1] = uStack_288;
    *extraout_x8_00 = CONCAT71(uStack_28f,uStack_290);
    puVar2 = (undefined8 *)&uStack_290;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x0001072c95d0(&uStack_290);
  func_0x000107324968(auStack_268);
  func_0x0001072ca718(auStack_1d8);
  return;
}



/* Entry: 10774f498; end: 10774f52b;  */

/* WARNING: Possible PIC construction at 0x00010774f4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774f4e0) */
/* WARNING: Removing unreachable block (ram,0x00010774f50c) */
/* WARNING: Removing unreachable block (ram,0x00010774f514) */
/* WARNING: Removing unreachable block (ram,0x00010774f528) */
/* WARNING: Removing unreachable block (ram,0x00010774f504) */
/* WARNING: Removing unreachable block (ram,0x000107750210) */

void FUN_10774f498(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 uStack_b1;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [80];
  
  func_0x0001077500ac();
  func_0x00010775027c();
  func_0x0001077501b0();
  func_0x000107750120();
  if (*param_3 != 0) {
    func_0x000107750228();
  }
  uStack_a8 = 0x10774f4e0;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010774fd18(auStack_90,&uStack_b1,param_1,auStack_80);
  return;
}



/* Entry: 10774f7b8; end: 10774f7f7;  */

void FUN_10774f7b8(void)

{
  func_0x00010775007c();
  func_0x0001077500f8();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774fa34; end: 10774fa53;  */

void FUN_10774fa34(long param_1)

{
  func_0x00010725aa9c();
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10774fc88; end: 10774fcc3;  */

void FUN_10774fc88(void)

{
  long unaff_x21;
  
  func_0x000107750130();
  if (unaff_x21 != 0) {
    func_0x0001077501e8();
    func_0x00010775025c(&PTR_DAT_1109d4358);
  }
  func_0x000107750170();
  return;
}



/* Entry: 10774fdec; end: 10774fe7b;  */

undefined8 FUN_10774fdec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long unaff_x21;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001072c9ff4(auStack_80);
  func_0x0001072c9bc0(auStack_70,param_3);
  uVar1 = param_1;
  func_0x000107569ca0(param_1,auStack_80,auStack_70);
  func_0x0001077501d0();
  func_0x000107750200();
  func_0x000107750098(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077501d0();
  func_0x000107750200();
  func_0x000107750118();
  func_0x000107750130();
  if (unaff_x21 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001077501e8();
    func_0x00010775025c(&PTR_DAT_1109d43b8);
  }
  func_0x000107750170();
  return uVar1;
}



/* Entry: 10774ff48; end: 10774ff4b;  */

void FUN_10774ff48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10774fff4; end: 10775002f;  */

void FUN_10774fff4(void)

{
  long unaff_x21;
  
  func_0x000107750130();
  if (unaff_x21 != 0) {
    func_0x0001077501e8();
    func_0x00010775025c(&PTR_DAT_1109d4478);
  }
  func_0x000107750170();
  return;
}



/* Entry: 1077503b0; end: 107750417;  */

void FUN_1077503b0(void)

{
  long *unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x000107751088();
  func_0x00010002b838(auStack_48,&UNK_10f4256e5);
  func_0x000107751050(*(undefined8 *)(*unaff_x21 + 0x48));
  func_0x000107751074();
  return;
}



/* Entry: 107750810; end: 1077508bf;  */

undefined1 **
FUN_107750810(undefined1 **param_1,undefined1 *param_2,long param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint extraout_w8;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 uStack_59;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  
  func_0x000107750fc0();
  uVar1 = *(int *)(param_3 + 0x10) == 1;
  lVar5 = param_3;
  puVar6 = param_4;
  if ((bool)uVar1) {
    param_3 = unaff_x20;
    uVar7 = 0;
  }
  else {
    uStack_59 = 0;
    puVar2 = (undefined8 *)0x28;
    __Znwm();
    *puVar2 = &PTR_DAT_1109d47e8;
    puVar2[1] = param_2;
    puVar2[2] = &uStack_59;
    puVar2[3] = param_4;
    puVar2[4] = param_3;
    param_2 = auStack_58;
    puStack_40 = puVar2;
    func_0x000107869d34();
    func_0x00010775102c();
    uVar7 = uStack_59;
  }
  func_0x000107750fa0(uVar7);
  if ((bool)uVar1) {
    return (undefined1 **)(ulong)(extraout_w8 & 1);
  }
  ___stack_chk_fail();
  ppuVar3 = param_1;
  func_0x00010775102c();
  func_0x000107751024();
  puStack_68 = &UNK_1077508c0;
  ppuVar4 = ppuVar3;
  puStack_90 = param_2;
  lStack_88 = lVar5;
  lStack_80 = param_3;
  ppuStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  while (puStack_90 != puVar6) {
    func_0x000107750910(auStack_a8,ppuVar3,lStack_88);
    ppuVar4 = &puStack_90;
    func_0x000107262260(ppuVar4);
  }
  return ppuVar4;
}



/* Entry: 107750a0c; end: 107750a2f;  */

void FUN_107750a0c(void)

{
  func_0x000107750fd0();
  func_0x000107750fdc(&PTR_DAT_1109d4568);
  return;
}



/* Entry: 107750b94; end: 107750bdb;  */

bool FUN_107750b94(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) == 0) {
    return true;
  }
  if (*(int *)(param_2 + 0x10) == 1) {
    return false;
  }
  func_0x000107750bdc(param_2,param_1);
  return param_2 != 0;
}



/* Entry: 107750cf4; end: 107750d5f;  */

void FUN_107750cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107750fc0();
  ppuStack_48 = &PTR_DAT_1109d4758;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  pppuStack_30 = &ppuStack_48;
  uStack_28 = extraout_x8;
  FUN_107869948(param_3,&ppuStack_48);
  func_0x00010775106c();
  func_0x000107751034(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010775106c();
  func_0x000107751024();
  func_0x00010775107c();
  func_0x000107751048();
  func_0x000107750fec();
  return;
}



/* Entry: 107750e88; end: 107750eb7;  */

void FUN_107750e88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_1109d47e8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107751334; end: 107751443;  */

undefined8 * FUN_107751334(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x00010729963c(param_1 + 1,param_2 + 1);
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    func_0x000107752100(param_1 + 0xc,param_2 + 0xc);
  }
  uVar2 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar2;
  uVar2 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar2;
  uVar2 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  func_0x000107277f30(param_1 + 0x21,param_2 + 0x21);
  lVar1 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107752dd4();
    } while (extraout_w10 != 0);
  }
  func_0x000107263b58(param_1 + 0x25,param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  param_1[0x2e] = param_2[0x2e];
  func_0x0001077522e8(param_1 + 0x2f,param_2 + 0x2f);
  return param_1;
}



/* Entry: 1077516f0; end: 107751713;  */

void FUN_1077516f0(undefined1 *param_1,long param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    func_0x000104c2fe00(param_1,param_2 + 0x60);
    param_1[0x38] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x38] = 0;
  return;
}



/* Entry: 107751f60; end: 107752017;  */

undefined4 * FUN_107751f60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_1 = uVar1;
    func_0x000107338cd4(param_1 + 2,param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
    func_0x000107752148(param_1 + 0x18,param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x36) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x3e);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x3e) = uVar2;
    func_0x000107295f10(param_1 + 0x42,param_2 + 0x42);
    func_0x000107751230(param_1 + 0x46,param_2 + 0x46);
    func_0x00010726594c(param_1 + 0x4a,param_2 + 0x4a);
    *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
    func_0x000107752d00(param_1 + 0x5e,param_2 + 0x5e);
  }
  return param_1;
}



/* Entry: 10775219c; end: 1077521bf;  */

void FUN_10775219c(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x000107267eac();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 1077523ac; end: 1077523cf;  */

undefined8 FUN_1077523ac(undefined8 param_1)

{
  func_0x0001077523d0();
  return param_1;
}



/* Entry: 1077524c8; end: 1077524d3;  */

void FUN_1077524c8(undefined8 *param_1)

{
  func_0x000107752eb0(*param_1,param_1[1]);
  func_0x000107267df4();
  func_0x000107753008();
  return;
}



/* Entry: 107752848; end: 1077529d7;  */

undefined1  [16] FUN_107752848(float param_1,float param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  long *unaff_x19;
  undefined8 *puVar5;
  ulong uVar6;
  ulong unaff_x25;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 *puStack_68;
  
  func_0x000107752e9c();
  uVar6 = unaff_x19[1];
  uVar4 = param_3;
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x25 = uVar7 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        func_0x000107753044();
      }
    }
    puVar5 = *(undefined8 **)(*unaff_x19 + unaff_x25 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar5 = (undefined8 *)*puVar5;
          if (puVar5 == (undefined8 *)0x0) goto LAB_1077528f0;
          uVar3 = puVar5[1];
          if (uVar3 != param_3) break;
          func_0x000107752fbc();
          if ((uVar4 & 1) != 0) {
            uVar2 = 0;
            puStack_68 = puVar5;
            goto LAB_1077529c4;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar3 = uVar3 & uVar7;
        }
        else if (uVar6 <= uVar3) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar1 * uVar6;
        }
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1077528f0:
  func_0x000107752fd8();
  func_0x000107752f6c();
  func_0x000104c318bc();
  *(undefined4 *)(uVar4 + 0xb0) = 0;
  func_0x00010775301c();
  if ((uVar6 == 0) || (uVar4 = unaff_x25, param_2 * (float)uVar6 < param_1)) {
    func_0x000107752f54();
    func_0x000107752f3c();
    func_0x000107406200();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar6 <= param_3) {
        func_0x000107753044();
        uVar4 = unaff_x25;
      }
    }
  }
  puVar5 = *(undefined8 **)(*unaff_x19 + uVar4 * 8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x000107752f24();
    if (extraout_x9 != 0) {
      uVar4 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar7 * uVar6;
      }
      *(undefined8 **)(extraout_x8 + uVar4 * 8) = puStack_68;
    }
  }
  else {
    *puStack_68 = *puVar5;
    *puVar5 = puStack_68;
  }
  func_0x000107752e84();
  uVar2 = 1;
LAB_1077529c4:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = puStack_68;
  return auVar8;
}



/* Entry: 107753050; end: 10775334b;  */

void FUN_107753050(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 auStack_188 [2];
  undefined4 uStack_180;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined4 auStack_140 [6];
  undefined4 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [64];
  long alStack_90 [9];
  undefined8 uStack_48;
  
  plVar4 = param_3;
  func_0x000107753590();
  if ((char)plVar4[0x2d] == '\x01') {
    param_3[0x2e] = (long)param_2;
  }
  uStack_48 = extraout_x8;
  func_0x000107572618(alStack_90,param_4);
  lVar5 = param_3[0x2d];
  func_0x000107263b58(auStack_d0,param_3 + 0x25);
  func_0x00010726594c(param_3 + 0x25,alStack_90);
  *(undefined1 *)(param_3 + 0x2d) = 0;
  func_0x000107265974(alStack_90);
  if ((int)param_2[1] == 1) {
    plVar4 = param_2 + 10;
    plVar8 = param_2 + 0xb;
    plVar3 = param_3;
    plVar7 = alStack_90;
  }
  else {
    plVar4 = (long *)(*param_2 + 0x58);
    plVar8 = alStack_90;
    plVar3 = param_2;
    plVar7 = param_3;
  }
  (*(code *)*plVar4)(param_1,plVar3,plVar7,plVar8);
  plVar4 = param_3 + 0x25;
  func_0x00010726594c(plVar4,auStack_d0);
  *(char *)(param_3 + 0x2d) = (char)lVar5;
  func_0x0001077f3c4c();
  FUN_1077f3790();
  func_0x000107751674(auStack_140,param_3);
  FUN_1077535a0(plVar4 + 0x1b,param_4,auStack_140,param_2,param_1);
  func_0x00010737c444(auStack_140);
  bVar1 = true;
  if (*(int *)(param_1 + 0x78) != 1) {
    (**(code **)(*param_2 + 0x30))(auStack_158,param_2);
    lVar5 = param_1;
    func_0x00010756dd74(param_1);
    (**(code **)(*(long *)param_3[0x2e] + 0x30))(auStack_188);
    func_0x0001072bb35c(auStack_140,auStack_158,lVar5,auStack_188);
    func_0x0001003a91d4(&UNK_10f4256fd);
    func_0x0001003a9204(auStack_170);
    puVar6 = auStack_188;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001077f3c4c();
    FUN_1077f3790();
    auStack_140[0] = 0x85;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    ppuStack_120 = &PTR_DAT_110996720;
    uStack_118 = 0;
    uStack_100 = 0x85;
    uStack_f8 = 0;
    uStack_f4 = 1;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    auStack_188[0] = 1;
    uStack_180 = 0;
    uStack_198 = *(undefined8 *)(puVar6 + 2);
    uStack_190 = 3;
    func_0x00010743fa9c(puVar6 + 2,auStack_140,auStack_188,&uStack_198,7);
    func_0x000107262330(auStack_140);
    func_0x00010786df04(9,auStack_170,0,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
    bVar1 = *(int *)(param_1 + 0x78) == 1;
  }
  uVar2 = (char)param_3[0x2d] == '\x01';
  if (((bool)uVar2) && (bVar1)) {
    param_3[0x2e] = 0;
  }
  func_0x00010724b3d8(auStack_d0);
  plVar4 = alStack_90;
  func_0x00010724b3d8(plVar4);
  func_0x00010775357c(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107262330(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  func_0x00010727f7f8(param_1 + 8);
  do {
    func_0x00010724b3d8(auStack_d0);
    func_0x00010724b3d8(alStack_90);
    __Unwind_Resume(plVar4);
  } while( true );
}



/* Entry: 1077535a0; end: 107753713;  */

/* WARNING: Possible PIC construction at 0x0001077535f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077535fc) */
/* WARNING: Removing unreachable block (ram,0x000107753604) */
/* WARNING: Removing unreachable block (ram,0x00010775360c) */
/* WARNING: Removing unreachable block (ram,0x000107753614) */

undefined8 *
FUN_1077535a0(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_168 [7];
  undefined1 auStack_130 [72];
  undefined1 auStack_e8 [112];
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_5 + 0x78) == 1) {
    func_0x00010727f7dc();
  }
  else {
    if (*(char *)(param_2 + 0x38) == '\x01') {
      func_0x000104c2fe00(auStack_168,param_2);
      func_0x000107753a30(auStack_130,param_3);
      if (*(int *)(param_5 + 0x78) == 1) {
        func_0x00010727f7dc(param_5);
        FUN_107753a9c(auStack_e8,param_5);
      }
      else {
        auStack_e8[0] = 0;
        uStack_78 = 0;
      }
      (**(code **)(*param_4 + 0x30))(auStack_70,param_4);
      func_0x000107753830(param_1,auStack_168);
      param_1 = auStack_168;
      func_0x000107753acc();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x000107753acc(auStack_168);
    func_0x00010775421c();
  }
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
          if (puVar3 <= (undefined8 *)puVar4[4]) goto code_r0x0001077537f0;
          puVar2 = (undefined8 *)puVar4[1];
          if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
            puVar5 = puVar4 + 1;
            goto code_r0x0001077537ac;
          }
        }
        puVar2 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
      } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
    }
code_r0x0001077537ac:
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
code_r0x0001077537f0:
    func_0x000107754210();
    *ppuVar1 = (undefined *)puVar3;
  }
  return puVar3;
}



/* Entry: 107753a9c; end: 107753b07;  */

long FUN_107753a9c(long param_1,long param_2)

{
  func_0x0001072786d8(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x70) = 1;
  return param_1;
}



/* Entry: 1077541a8; end: 1077541b7;  */

void FUN_1077541a8(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001077541c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
    return;
  }
  func_0x000104bfeb48(0,*param_1);
  return;
}



/* Entry: 107754b18; end: 107754b87;  */

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

ulong FUN_107754b18(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long alStack_210 [6];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [112];
  int iStack_168;
  undefined8 uStack_a8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar2 = auStack_60;
  func_0x000107755288();
  uStack_28 = extraout_x8;
  func_0x0001077552dc();
  lVar5 = param_1 + 0x48;
  func_0x000107749c80(auStack_60,lVar5,param_1 + 0x90);
  func_0x0001077552d0();
  func_0x000107755274(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077552d0();
  func_0x000107755298();
  func_0x000107755288();
  uStack_a8 = extraout_x8_01;
  FUN_107753050(auStack_1e0,*(undefined8 *)(puVar2 + 0x48));
  uVar1 = iStack_168 == 1;
  if ((bool)uVar1) {
    plVar4 = (long *)(lVar5 + 0x108);
  }
  else {
    uVar3 = extraout_x8_00 + 8;
    func_0x00010756c040(uVar3,auStack_1d8);
    func_0x0001077552a8(auStack_1e0);
    func_0x000107755274(uStack_a8);
    if ((bool)uVar1) {
      return uVar3;
    }
    ___stack_chk_fail();
    plVar4 = alStack_210;
    func_0x00010726ae88();
    func_0x0001077552a8(auStack_1e0);
    func_0x000107755298();
  }
  lVar5 = *plVar4;
  func_0x000107755060(lVar5);
  return (ulong)(lVar5 != 0);
}



/* Entry: 107754efc; end: 107754f0f;  */

void FUN_107754efc(void)

{
  func_0x000107755008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077551c8; end: 10775522b;  */

void FUN_1077551c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  func_0x00010775532c();
  func_0x00010729604c();
  lVar1 = *unaff_x20;
  lVar2 = lVar1;
  func_0x0001074d2750();
  if (lVar2 != 0) {
    func_0x00010775522c(lVar1,lVar2,unaff_x19);
  }
  return;
}



/* Entry: 107755d8c; end: 107755e03;  */

/* WARNING: Possible PIC construction at 0x000107755dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107755dcc) */
/* WARNING: Removing unreachable block (ram,0x000107755dec) */
/* WARNING: Removing unreachable block (ram,0x000107755e00) */
/* WARNING: Removing unreachable block (ram,0x000107755de0) */
/* WARNING: Removing unreachable block (ram,0x0001077563c8) */

undefined8 FUN_107755d8c(long *param_1)

{
  long *plVar1;
  undefined8 uStack_98;
  undefined1 auStack_60 [64];
  
  plVar1 = param_1;
  func_0x0001077562f4();
  (**(code **)(*plVar1 + 0x40))(auStack_60);
  uStack_98 = 0;
  func_0x0001073f26dc(&uStack_98,auStack_60);
  func_0x00010756af98(&uStack_98,param_1 + 9);
  func_0x000107756258(&uStack_98,param_1 + 0xb);
  func_0x00010756af98(&uStack_98,param_1 + 0x13);
  return uStack_98;
}



/* Entry: 107755f7c; end: 107755f8f;  */

void FUN_107755f7c(void)

{
  func_0x0001077560b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077562ac; end: 1077562df;  */

undefined1 * FUN_1077562ac(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uStack_11;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    puVar1 = &uStack_11;
    func_0x00010726364c(puVar1);
    return puVar1;
  }
  return (undefined1 *)0x0;
}



/* Entry: 107756e68; end: 107756e6b;  */

undefined8 * FUN_107756e68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4b38;
  func_0x0001072c9b9c(param_1 + 0x13);
  func_0x00010724b3d8(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107756f74; end: 10775705b;  */

undefined8 * FUN_107756f74(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 auStack_40 [16];
  
  func_0x0001072c9ff4(auStack_40,*param_4 + 0x10);
  uStack_50 = *(undefined4 *)(*param_2 + 0x20);
  uStack_4c = *(undefined2 *)(*param_2 + 0x24);
  uStack_58 = *(undefined4 *)(*param_4 + 0x20);
  uStack_54 = *(undefined2 *)(*param_4 + 0x24);
  puVar1 = &uStack_50;
  func_0x0001075457c8(puVar1,&uStack_58);
  uStack_48 = SUB84(puVar1,0);
  uStack_44 = (undefined2)((ulong)puVar1 >> 0x20);
  func_0x0001072c9f9c(param_1,0x1f,auStack_40,&uStack_48);
  func_0x0001072c9884(auStack_40);
  *param_1 = &PTR_FUN_1109d4b38;
  lVar2 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001072649c8(param_1 + 0xb,param_3);
  lVar2 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = lVar2;
  *param_4 = 0;
  param_4[1] = 0;
  return param_1;
}


