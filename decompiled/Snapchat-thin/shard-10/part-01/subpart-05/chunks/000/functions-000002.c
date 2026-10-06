/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107737ad0; end: 107737ad3;  */

undefined8 * FUN_107737ad0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107737da0; end: 107737db3;  */

void FUN_107737da0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107738154; end: 10773815f;  */

/* WARNING: Possible PIC construction at 0x0001077383d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077383d4) */
/* WARNING: Removing unreachable block (ram,0x0001077383ec) */
/* WARNING: Removing unreachable block (ram,0x0001077383dc) */
/* WARNING: Removing unreachable block (ram,0x0001077383f8) */
/* WARNING: Removing unreachable block (ram,0x0001077383c8) */

undefined8 * FUN_107738154(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long *unaff_x21;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_00000100;
  undefined1 auStack_420 [1048];
  undefined8 uStack_8;
  
  func_0x000107742f4c();
  func_0x000107743300();
  lVar9 = 0;
  func_0x00010774205c();
  puVar7 = (undefined8 *)*param_2;
  puVar10 = (undefined8 *)(param_2[1] * 0x70);
  in_stack_000000a0 = extraout_x8;
  do {
    if (puVar10 == (undefined8 *)0x0) {
      in_stack_00000018 = 0;
      in_stack_00000020 = (undefined8 *)0x0;
      in_stack_00000028 = 0;
      puVar10 = &stack0x00000018;
      param_1 = &stack0x00000018;
      func_0x0001074b01dc(param_1,lVar9);
      puVar7 = (undefined8 *)*unaff_x21;
      puVar11 = puVar7 + unaff_x21[1] * 0xe;
      for (; uVar5 = puVar7 == puVar11, !(bool)uVar5; puVar7 = puVar7 + 0xe) {
        param_1 = puVar7;
        func_0x0001075725f8();
        puVar3 = in_stack_00000020;
        lVar9 = *(long *)*param_1;
        lVar2 = ((long *)*param_1)[1];
        lVar12 = lVar2 - lVar9;
        if (0 < lVar12) {
          if (in_stack_00000028 - (long)in_stack_00000020 < lVar12) {
            puVar6 = &stack0x00000018;
            func_0x00010727776c(puVar6,((long)in_stack_00000020 - in_stack_00000018) / 0x70 +
                                       lVar12 / 0x70);
            func_0x000107277858(&stack0x00000030,puVar6,((long)puVar3 - in_stack_00000018) / 0x70,
                                &stack0x00000028);
            lVar1 = (long)in_stack_00000040 + lVar12;
            lVar9 = lVar9 + 8;
            lVar2 = (long)in_stack_00000040;
            for (; lVar12 != 0; lVar12 = lVar12 + -0x70) {
              func_0x0001072786d8(lVar2 + 8,lVar9);
              lVar2 = lVar2 + 0x70;
              lVar9 = lVar9 + 0x70;
            }
            in_stack_00000040 = (undefined8 *)lVar1;
            func_0x00010729546c(&stack0x00000018,&stack0x00000030,puVar3);
            param_1 = (undefined8 *)&stack0x00000030;
            func_0x000107277a38();
          }
          else {
            param_1 = &stack0x00000028;
            FUN_107731bf8(param_1,lVar9,lVar2,in_stack_00000020);
            in_stack_00000020 = param_1;
          }
        }
      }
      func_0x000107743a00();
      in_stack_00000040 = (undefined8 *)in_stack_00000008;
      in_stack_00000038 = in_stack_00000000;
      in_stack_00000098 = 8;
      func_0x000107742ab8();
      func_0x000107742bf8();
      func_0x000107743144();
      func_0x0001077436d8();
code_r0x0001077382f8:
      func_0x000107741c94(in_stack_000000a0);
      if ((bool)uVar5) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001077436d8();
      func_0x000107742904();
      puVar8 = &UNK_10773834c;
      func_0x0001077438e0();
      in_stack_00000040 = &stack0x00000100;
      in_stack_00000048 = puVar8;
      func_0x000107741970();
      func_0x00010774222c();
      func_0x000107742764(0);
      func_0x0001077430c8();
      func_0x000107741c60();
      do {
        puVar7 = (undefined8 *)*puVar10;
        func_0x0001077420ac(auStack_420);
        func_0x000107743260();
        if ((bool)uVar5) {
          func_0x0001077430d0();
          func_0x0001077430c0();
          uVar4 = uVar5;
        }
        else {
          func_0x000107742cac();
          func_0x0001077428fc();
          uVar4 = uVar5;
        }
        func_0x000107742ca4();
        func_0x000107742668();
        uVar5 = 1;
      } while ((bool)uVar4);
      func_0x000107742c5c();
      func_0x000107741c94(uStack_8);
      if ((bool)uVar4) {
        return puVar7;
      }
      ___stack_chk_fail();
      func_0x000107742784();
      func_0x00010727f7f8();
      func_0x000107742c5c();
      func_0x000107742904();
      *puVar7 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar7 + 9);
      func_0x00010772d754(puVar7 + 5);
      func_0x0001072c9884(puVar7 + 2);
      return puVar7;
    }
    uVar5 = *(int *)(puVar7 + 0xd) == 8;
    if (!(bool)uVar5) {
      func_0x00010774238c();
      goto code_r0x0001077382f8;
    }
    param_1 = puVar7;
    func_0x0001075725f8();
    func_0x000107743184(*param_1);
    lVar9 = extraout_x8_00 / 0x70 + lVar9;
    puVar7 = puVar7 + 0xe;
    puVar10 = puVar10 + -0xe;
  } while( true );
}



/* Entry: 1077386b8; end: 107738793;  */

void FUN_1077386b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long *plStack_48;
  
  func_0x000107743b2c();
  plVar1 = param_1 + 1;
  do {
    if (unaff_x20 == unaff_x19) {
      return;
    }
    plVar2 = plVar1;
    if (plVar1 == (long *)*param_1) {
LAB_107738710:
      plVar3 = plVar1;
      plStack_48 = plVar1;
      if (*plVar1 != 0) {
        plVar3 = plVar2 + 1;
        plStack_48 = plVar2;
        goto LAB_107738738;
      }
LAB_10773874c:
      func_0x000107742be0(auStack_60);
      func_0x00010747e4e8();
      func_0x00010747e52c(param_1,plStack_48,plVar3,auStack_60[0]);
      auStack_60[0] = 0;
      func_0x00010747e554(auStack_60);
    }
    else {
      func_0x00010002c810();
      plVar3 = plVar2 + 4;
      func_0x000104c2fc44(plVar3,unaff_x20);
      if ((int)plVar3 != 0) goto LAB_107738710;
      plVar3 = param_1;
      func_0x00010747e480(param_1,&plStack_48,unaff_x20);
LAB_107738738:
      if (*plVar3 == 0) goto LAB_10773874c;
    }
    unaff_x20 = unaff_x20 + 0x38;
  } while( true );
}



/* Entry: 107738a9c; end: 107738b97;  */

void FUN_107738a9c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 *apuStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  func_0x00010774309c();
  func_0x000107741834();
  func_0x0001077421ec();
  do {
    uVar3 = unaff_x24 == 2;
    if ((bool)uVar3) {
      unaff_x20 = *(undefined8 **)(unaff_x22 + 0x80);
      unaff_x21 = (undefined8 *)&stack0x00000028;
      func_0x000107742fc0();
      param_1 = (long *)&stack0x00000008;
      func_0x0001077436c8();
      func_0x00010774256c();
      func_0x000107743244();
      func_0x000107743234();
      func_0x000107742c84();
      if ((bool)uVar3) {
        func_0x000107743120();
        param_2 = param_1;
        func_0x000107742ff4();
      }
      else {
        func_0x000107743128();
        param_2 = param_1;
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto LAB_107738b44;
    }
    func_0x0001077422b8();
    param_1 = (long *)*param_1;
    func_0x000107741f6c();
    func_0x000107742d80();
    if ((bool)uVar3) {
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
  } while ((bool)uVar3);
  uVar3 = 0;
LAB_107738b44:
  func_0x000107742c44();
  func_0x000107741a80();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x000107742128();
    func_0x000107742c44();
    func_0x000107742904();
    func_0x0001077429f8(extraout_x8,param_1,param_2);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    puStack_78 = &uStack_70;
    puStack_60 = &uStack_58;
    FUN_1077386b8(&puStack_60,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
    FUN_1077386b8(&puStack_78,*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    func_0x000107743184(*unaff_x21);
    uVar2 = (((long *)*unaff_x20)[1] - *(long *)*unaff_x20) / 0x38;
    uVar1 = extraout_x8_00 / 0x38;
    if ((ulong)(extraout_x8_00 / 0x38) <= uVar2) {
      uVar1 = uVar2;
    }
    func_0x0001072dd514(&uStack_90,uVar1);
    apuStack_a0[0] = puStack_60;
    puStack_48 = puStack_78;
    while ((puVar5 = puStack_48, puVar7 = apuStack_a0[0], apuStack_a0[0] != &uStack_58 &&
           (puStack_48 != &uStack_70))) {
      puVar4 = apuStack_a0[0] + 4;
      func_0x000104c2fc44(puVar4,puStack_48 + 4);
      if ((int)puVar4 == 0) {
        puVar5 = puVar5 + 4;
        func_0x000104c2fc44(puVar5,puVar7 + 4);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010002c7d4();
          apuStack_a0[0] = puVar7;
        }
        ppuVar6 = &puStack_48;
      }
      else {
        func_0x0001077439a4();
        ppuVar6 = apuStack_a0;
      }
      func_0x000107738794(ppuVar6);
    }
    while (puVar7 != &uStack_58) {
      func_0x0001077439a4();
      func_0x00010002c7d4();
    }
    func_0x00010774339c();
    func_0x0001073fb2d4();
    func_0x0001077423a8();
    func_0x00010726e078(&uStack_90);
    func_0x0001077436e8();
    func_0x0001077437c0();
    return;
  }
  return;
}



/* Entry: 107738f3c; end: 107739097;  */

double * FUN_107738f3c(double *param_1,double *param_2,double *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  double *unaff_x20;
  long unaff_x21;
  double *unaff_x22;
  double dVar4;
  double adStack_188 [17];
  double *pdStack_100;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107741d18();
  uStack_58 = extraout_x8;
  if (param_2 == param_3) {
LAB_107739044:
    uVar2 = 1;
    uStack_c0 = 1;
    param_2 = unaff_x22;
LAB_107739050:
    uStack_60 = 1;
LAB_107739058:
    func_0x00010774257c();
    func_0x000107742bf8();
    func_0x000107741c94(uStack_58);
    if ((bool)uVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    pdStack_100 = param_2;
    func_0x0001077418ec();
    func_0x000107742168();
    param_1 = (double *)*param_1;
    func_0x000107741dcc();
    func_0x000107742de8();
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
    uVar2 = (int)auStack_c8 == 1;
    if ((bool)uVar2) {
      func_0x00010774376c();
      puVar3 = (undefined8 *)*param_1;
      param_1 = adStack_188;
      FUN_107738f3c(param_1,*puVar3,puVar3[1]);
      func_0x000107743ba0();
      if ((bool)uVar2) {
        func_0x0001077429cc();
        func_0x000107742b70();
      }
      else {
        func_0x0001077429c4();
        func_0x0001077428fc();
      }
      func_0x00010774207c();
    }
    func_0x000107742088();
    func_0x0001077419ec();
    if ((bool)uVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x000107741d08();
    func_0x000107742088();
    func_0x000107742904();
    *param_1 = (double)&PTR_DAT_1109d1d80;
    func_0x000104c2f714(param_1 + 9);
    func_0x00010772d754(param_1 + 5);
    func_0x0001072c9884(param_1 + 2);
    return param_1;
  }
  func_0x0001077429f8();
code_r0x000107738f78:
  unaff_x22 = param_2;
  if (param_2 == unaff_x20) goto LAB_107739044;
  uVar2 = *(int *)(unaff_x21 + 0x68) == 7;
  switch(*(int *)(unaff_x21 + 0x68)) {
  case 0:
    if (*(int *)(param_2 + 0xd) != 0) break;
code_r0x00010773903c:
    param_2 = param_2 + 0xe;
    goto code_r0x000107738f78;
  case 1:
    uVar2 = 0;
    if (*(int *)(param_2 + 0xd) == 1) {
      cVar1 = *(char *)(unaff_x21 + 8);
      param_1 = param_2;
      func_0x000107280568();
      uVar2 = 0;
      if (*(char *)param_1 == cVar1) goto code_r0x00010773903c;
    }
    break;
  case 2:
    uVar2 = 0;
    if (*(int *)(param_2 + 0xd) == 2) {
      dVar4 = *(double *)(unaff_x21 + 8);
      param_1 = param_2;
      func_0x0001072cb4bc();
      uVar2 = 0;
      if (*param_1 == dVar4) goto code_r0x00010773903c;
    }
    break;
  case 3:
    uVar2 = *(int *)(param_2 + 0xd) == 3;
    if ((bool)uVar2) {
      param_1 = param_2;
      func_0x00010732393c();
      func_0x000104c32db4();
      if (((ulong)param_1 & 1) != 0) goto code_r0x00010773903c;
    }
    break;
  default:
    uStack_60 = 0;
    goto LAB_107739058;
  case 7:
    uVar2 = *(int *)(param_2 + 0xd) == 7;
    if ((bool)uVar2) {
      param_1 = param_2;
      func_0x0001075b94a8();
      FUN_10775f0dc();
      if ((int)param_1 != 0) goto code_r0x00010773903c;
    }
  }
  uStack_c0 = 0;
  goto LAB_107739050;
}



/* Entry: 1077393f8; end: 1077393fb;  */

undefined8 * FUN_1077393f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739718; end: 107739803;  */

/* WARNING: Possible PIC construction at 0x0001077398c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077398cc) */
/* WARNING: Removing unreachable block (ram,0x0001077398e4) */
/* WARNING: Removing unreachable block (ram,0x0001077398d4) */
/* WARNING: Removing unreachable block (ram,0x0001077398f0) */

undefined8 * FUN_107739718(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 in_stack_00000100;
  
  func_0x000107742f4c();
  puVar4 = &stack0x00000100;
  func_0x000107742774();
  func_0x0001077419ac();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == 0) {
      func_0x000107741e58();
      func_0x000107742b78();
      func_0x000107743c04();
      if ((bool)in_ZR) {
        puVar2 = (undefined8 *)&stack0x00000028;
        func_0x00010772ea78(puVar2);
        func_0x000107743044();
      }
      else {
        puVar2 = (undefined8 *)&stack0x00000028;
        func_0x00010772ea60(puVar2);
        func_0x0001077428fc();
      }
      func_0x000107742bd0(&stack0x00000028);
      break;
    }
    puVar2 = (undefined8 *)*unaff_x24;
    func_0x000107742638(&stack0x00000028,puVar2);
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
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742698();
  func_0x00010772ead4();
  func_0x000107742aa8();
  puVar5 = &UNK_107739804;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  puVar3 = extraout_x8;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar4;
    *(undefined **)(puVar1 + -8) = puVar5;
    func_0x000107741be8(puVar3,puVar2);
    func_0x000107742e7c();
    FUN_1078b699c();
    puVar2 = (undefined8 *)(puVar1 + -0x60);
    func_0x0001072625b4(puVar2,puVar1 + -0x78);
    func_0x0001077432e4();
    func_0x0001077432dc();
    func_0x000107742c9c();
    func_0x000107741a50();
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)(puVar1 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xa8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xa0) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x88) = &UNK_107739864;
    puVar4 = (undefined8 *)(puVar1 + -0x90);
    func_0x0001077418ec();
    func_0x000107742168();
    puVar2 = (undefined8 *)*puVar2;
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
    in_ZR = (int)unaff_x20 == 1;
    if (!(bool)in_ZR) break;
    puVar2 = (undefined8 *)(puVar1 + -0x1a8);
    func_0x000107739a10();
    puVar3 = puVar1 + -0x138;
    puVar5 = &UNK_1077398cc;
    puVar1 = puVar1 + -0x1b0;
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077420f0();
    func_0x00010772ead4();
    func_0x000107742088();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -0x1d0) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x1c8) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x1c0) = puVar4;
    *(undefined **)(puVar1 + -0x1b8) = &DAT_107739930;
    *puVar2 = &PTR_DAT_1109d1d80;
    func_0x000104c2f714(puVar2 + 9);
    func_0x00010772d754(puVar2 + 5);
    func_0x0001072c9884(puVar2 + 2);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 107739a2c; end: 107739a37;  */

/* WARNING: Possible PIC construction at 0x000107739ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739adc) */
/* WARNING: Removing unreachable block (ram,0x000107739afc) */
/* WARNING: Removing unreachable block (ram,0x000107739ae8) */
/* WARNING: Removing unreachable block (ram,0x000107739b0c) */

undefined8 * FUN_107739a2c(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741be8();
    func_0x000107743a20();
    puVar2 = (undefined8 *)(unaff_x19 + 8);
    func_0x000104c318bc(puVar2,puVar1 + -0x60);
    *(undefined4 *)(unaff_x19 + 0x40) = 0;
    func_0x0001077431c4();
    func_0x000107741a50();
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x80) = unaff_x20;
    *(long *)(puVar1 + -0x78) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &UNK_107739a78;
    unaff_x29 = puVar1 + -0x70;
    func_0x000107741910();
    *(undefined4 *)(puVar1 + -0x158) = 0;
    func_0x000107742168();
    puVar2 = (undefined8 *)*puVar2;
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
    in_ZR = (int)unaff_x20 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001077421a8();
    func_0x00010774371c();
    unaff_x30 = &UNK_107739adc;
    puVar1 = puVar1 + -0x1c0;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x000107739c80();
  func_0x0001077420d8();
  func_0x000107742904();
  *(undefined8 *)(puVar1 + -0x1e0) = unaff_x20;
  *(long *)(puVar1 + -0x1d8) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x1d0) = unaff_x29;
  *(undefined **)(puVar1 + -0x1c8) = &DAT_107739b50;
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107739cb8; end: 107739cd3;  */

void FUN_107739cb8(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107739f58; end: 107739ff3;  */

long * FUN_107739f58(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long unaff_x21;
  undefined1 auStack_c8 [104];
  undefined4 uStack_60;
  
  func_0x000107743300();
  func_0x000107741cf4();
  func_0x000107743604();
  func_0x00010757a1b8(param_3 + 0x40,auStack_c8);
  func_0x000107742ac0();
  uStack_60 = 0;
  plVar2 = *(long **)(unaff_x21 + 0xe8);
  if ((plVar2 != (long *)0x0) && (func_0x000107869920(), (param_4 & 1) != 0)) {
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  func_0x00010774257c();
  func_0x000107742bf8();
  func_0x000107741a68();
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107742088();
  func_0x000107742904();
  func_0x000107743c34();
  func_0x000107741970();
  func_0x000107742dfc();
  func_0x000107742168();
  plVar2 = (long *)*plVar2;
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
  uVar1 = (int)param_3 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    plVar2 = (long *)&stack0xffffffffffffffd8;
    func_0x0001077429d4();
    FUN_107739f58();
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
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  *plVar2 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar2 + 9);
  func_0x00010772d754(plVar2 + 5);
  func_0x0001072c9884(plVar2 + 2);
  return plVar2;
}



/* Entry: 10773a374; end: 10773a377;  */

undefined8 * FUN_10773a374(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773a708; end: 10773a7ff;  */

/* WARNING: Possible PIC construction at 0x00010773a930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a934) */
/* WARNING: Removing unreachable block (ram,0x00010773a954) */
/* WARNING: Removing unreachable block (ram,0x00010773a944) */
/* WARNING: Removing unreachable block (ram,0x00010773a960) */

long * FUN_10773a708(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *extraout_x8;
  ulong uVar10;
  ulong uVar11;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  undefined8 in_stack_000001e0;
  
  func_0x00010774309c();
  puVar12 = &stack0x000001e0;
  func_0x000107741834();
  func_0x0001077421ec();
  do {
    uVar2 = unaff_x24 == 2;
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
      goto LAB_10773a7ac;
    }
    func_0x0001077422b8();
    param_1 = (long *)*param_1;
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
LAB_10773a7ac:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x000107742c44();
  puVar13 = &UNK_10773a800;
  func_0x000107742904();
  plVar6 = *(long **)*param_1;
  lVar7 = ((long *)*param_1)[1];
  puVar8 = *(undefined **)*param_2;
  lVar9 = ((undefined8 *)*param_2)[1];
  puVar1 = (undefined1 *)register0x00000008;
  puVar5 = extraout_x8;
  while( true ) {
    puVar3 = puVar5;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar12;
    *(undefined **)(puVar1 + -8) = puVar13;
    func_0x000107741ca8();
    uVar2 = lVar7 - (long)plVar6 == lVar9 - (long)puVar8;
    if ((bool)uVar2) {
      uVar10 = lVar7 - (long)plVar6 >> 2;
      dVar14 = 0.0;
      for (uVar11 = 0; uVar2 = uVar10 == uVar11, uVar11 < uVar10; uVar11 = (ulong)((int)uVar11 + 1))
      {
        dVar15 = (double)(*(float *)((long)plVar6 + uVar11 * 4) - *(float *)(puVar8 + uVar11 * 4));
        dVar14 = dVar14 + dVar15 * dVar15;
      }
      func_0x0001077423d4(dVar14);
      plVar4 = (long *)(unaff_x20 + 8);
    }
    else {
      func_0x000107742604();
      func_0x000107742fdc();
      func_0x0001077427b8();
      func_0x000107742e4c();
      plVar4 = (long *)((ulong)unaff_x20 | 8);
    }
    func_0x00010726af18();
    func_0x0001077419ec();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x000107743090();
    func_0x000107742904();
    puVar8 = &UNK_10773a8bc;
    func_0x00010774309c();
    *(undefined1 **)(puVar1 + 0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 200) = puVar8;
    puVar12 = (undefined8 *)(puVar1 + 0xc0);
    func_0x0001077418c8();
    func_0x0001077421d0();
    while (uVar2 = unaff_x23 == 2, !(bool)uVar2) {
      func_0x0001077422ac();
      plVar4 = (long *)*plVar4;
      func_0x000107741f94();
      func_0x000107742eac();
      if ((bool)uVar2) {
        func_0x0001077429f0();
        func_0x000107742190();
      }
      else {
        func_0x0001077429e8();
        plVar6 = plVar4;
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)uVar2) {
        func_0x000107742c44();
        func_0x000107741a80();
        if ((bool)uVar2) {
          return plVar4;
        }
        ___stack_chk_fail();
        func_0x000107742260();
        func_0x00010727f7f8();
        func_0x000107742c44();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x140) = unaff_x20;
        *(undefined1 **)(puVar1 + -0x138) = puVar3;
        *(undefined8 **)(puVar1 + -0x130) = puVar12;
        *(undefined **)(puVar1 + -0x128) = &DAT_10773a9b8;
        *plVar4 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar4 + 9);
        func_0x00010772d754(plVar4 + 5);
        func_0x0001072c9884(plVar4 + 2);
        return plVar4;
      }
    }
    unaff_x20 = puVar1 + -0xf8;
    func_0x0001077427dc();
    func_0x000107743060();
    func_0x000107743bc4();
    puVar5 = puVar1 + -0x18;
    puVar13 = &UNK_10773a934;
    puVar1 = puVar1 + -0x120;
    unaff_x19 = puVar3;
  }
  return plVar4;
}



/* Entry: 10773aadc; end: 10773ab43;  */

double * FUN_10773aadc(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  double *pdVar2;
  float *pfVar3;
  long unaff_x23;
  double dVar4;
  undefined8 *puStack_288;
  undefined1 auStack_278 [104];
  undefined4 uStack_210;
  undefined4 uStack_1a0;
  double dStack_198;
  double adStack_190 [14];
  int iStack_120;
  double adStack_90 [14];
  
  func_0x000107741ce0();
  dVar4 = 1.79769313486232e+308;
  while (adStack_90[0] = dVar4, uVar1 = param_3 == param_4, !(bool)uVar1) {
    pfVar3 = param_3 + 1;
    dVar4 = (double)ABS((float)param_1 - *param_3);
    param_3 = pfVar3;
    if (adStack_90[0] <= dVar4) {
      dVar4 = adStack_90[0];
    }
  }
  func_0x000107742f04(2);
  pdVar2 = adStack_90;
  func_0x00010726af18();
  func_0x000107741a50();
  if ((bool)uVar1) {
    return pdVar2;
  }
  ___stack_chk_fail();
  func_0x0001077418c8();
  uStack_210 = 0;
  uStack_1a0 = 0;
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x00010773adec(auStack_278);
      func_0x000107743060();
      pdVar2 = &dStack_198;
      FUN_10773aadc(param_1,pdVar2,*puStack_288,puStack_288[1]);
      func_0x000107742cbc();
      uVar1 = iStack_120 == 1;
      if ((bool)uVar1) {
        func_0x000107742f9c();
        func_0x000107742b70();
      }
      else {
        func_0x000107742f94();
        func_0x0001077428fc();
      }
      func_0x00010774290c(&dStack_198);
      goto code_r0x00010773ac28;
    }
    func_0x0001077422ac();
    pdVar2 = (double *)*pdVar2;
    func_0x000107742138(&dStack_198);
    func_0x00010774343c();
    if ((bool)uVar1) {
      func_0x000107742f9c();
      func_0x000107742190();
    }
    else {
      func_0x000107742f94();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
code_r0x00010773ac28:
  func_0x0001077436d0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return pdVar2;
  }
  ___stack_chk_fail();
  pdVar2 = adStack_190;
  func_0x00010727f7f8();
  func_0x0001077436d0();
  func_0x000107742904();
  *pdVar2 = (double)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(pdVar2 + 9);
  func_0x00010772d754(pdVar2 + 5);
  func_0x0001072c9884(pdVar2 + 2);
  return pdVar2;
}



/* Entry: 10773aef4; end: 10773afff;  */

long * FUN_10773aef4(long *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  
  func_0x00010774309c();
  func_0x0001077418c8();
  func_0x0001077421d0();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077427dc();
      func_0x00010773b120(&stack0x00000008,&stack0x00000098);
      func_0x000107743bc4();
      func_0x00010773ae28(&stack0x00000108);
      param_1 = (long *)&stack0x00000008;
      func_0x00010773b158();
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
      goto LAB_10773afa8;
    }
    func_0x0001077422ac();
    param_1 = (long *)*param_1;
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
LAB_10773afa8:
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
  *param_1 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773b21c; end: 10773b227;  */

void FUN_10773b21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x21;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107743300(param_1);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001074b01dc(&uStack_48,*(undefined8 *)(param_4 + 8));
  lVar1 = *unaff_x21;
  for (lVar2 = unaff_x21[1] * 0x70; lVar2 != 0; lVar2 = lVar2 + -0x70) {
    func_0x00010758ee8c(&uStack_48,lVar1);
    lVar1 = lVar1 + 0x70;
  }
  func_0x000107743a00();
  func_0x000107743374();
  func_0x0001077424ac(8);
  func_0x000107743144();
  func_0x0001077436d8();
  return;
}



/* Entry: 10773b59c; end: 10773b693;  */

undefined8 * FUN_10773b59c(undefined8 *param_1)

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
      func_0x00010773b4b0();
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



/* Entry: 10773bb10; end: 10773bb23;  */

void FUN_10773bb10(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773bd9c; end: 10773bdc3;  */

void FUN_10773bd9c(undefined8 param_1)

{
  func_0x0001077438a8();
  func_0x0001077434d8(param_1,&PTR_DAT_1109d36e8);
  func_0x0001077430ec();
  return;
}



/* Entry: 10773c0c8; end: 10773c0cb;  */

undefined8 * FUN_10773c0c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773c338; end: 10773c403;  */

/* WARNING: Possible PIC construction at 0x00010773c638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773c63c) */
/* WARNING: Removing unreachable block (ram,0x00010773c654) */
/* WARNING: Removing unreachable block (ram,0x00010773c644) */
/* WARNING: Removing unreachable block (ram,0x00010773c660) */

long * FUN_10773c338(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  double *pdVar6;
  long *plVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint uVar8;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 in_stack_00000160;
  
  func_0x000107743a94();
  puVar9 = &stack0x00000160;
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  plVar4 = (long *)*param_1;
  func_0x000107741e48(plVar4);
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
  uVar3 = (int)unaff_x23 == 1;
  if ((bool)uVar3) {
    unaff_x22 = (long *)unaff_x22[0x10];
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar3) {
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
  if ((bool)uVar3) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  puVar10 = &UNK_10773c404;
  func_0x000107742904();
  puVar2 = (undefined1 *)register0x00000008;
  plVar4 = extraout_x8;
  plVar5 = param_3;
  do {
    plVar7 = plVar5;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar2 + -0x10) = puVar9;
    *(undefined **)(puVar2 + -8) = puVar10;
    unaff_x19 = plVar4;
    func_0x000107741cf4();
    uVar3 = (param_3[1] & 0xfffffffffffffffeU) == 2;
    if ((bool)uVar3) {
      plVar5 = (long *)*param_3;
      uVar3 = (int)plVar5[0xd] == 8;
      unaff_x19 = plVar5;
      unaff_x21 = param_3;
      if (((!(bool)uVar3) || (uVar3 = (int)plVar5[0x1b] == 2, !(bool)uVar3)) ||
         ((2 < (ulong)param_3[1] && (uVar3 = (int)plVar5[0x29] == 2, !(bool)uVar3))))
      goto code_r0x00010773c4d0;
      func_0x000107325cc8();
      pdVar6 = (double *)(*param_3 + 0x70);
      FUN_10757fc08();
      uVar8 = (uint)*pdVar6;
      if ((ulong)param_3[1] < 3) {
        func_0x000107743110(*plVar5);
        unaff_x21 = (long *)0x0;
        if (extraout_x9 != 0) {
          unaff_x21 = (long *)(extraout_x8_00 / extraout_x9);
        }
      }
      else {
        pdVar6 = (double *)(*param_3 + 0xe0);
        FUN_10757fc08();
        uVar1 = (uint)((((long *)*plVar5)[1] - *(long *)*plVar5) / 0x70);
        if ((uint)(int)*pdVar6 <= uVar1) {
          uVar1 = (int)*pdVar6;
        }
        unaff_x21 = (long *)(ulong)uVar1;
      }
      *(undefined8 *)(puVar2 + -0xd8) = 0;
      *(undefined8 *)(puVar2 + -0xd0) = 0;
      *(undefined8 *)(puVar2 + -200) = 0;
      func_0x0001074b01dc(puVar2 + -0xd8,(long)unaff_x21 - (ulong)uVar8);
      unaff_x23 = (long *)(puVar2 + -0xc0);
      unaff_x24 = 0x70;
      for (; uVar3 = unaff_x21 == (long *)(ulong)uVar8, (long *)(ulong)uVar8 < unaff_x21;
          uVar8 = uVar8 + 1) {
        func_0x0001072786d8(puVar2 + -0xb8,*(long *)*plVar5 + (ulong)uVar8 * 0x70 + 8);
        func_0x000107277668(puVar2 + -0xd8,puVar2 + -0xc0);
        func_0x00010726af18(puVar2 + -0xb8);
      }
      param_3 = (long *)(puVar2 + -0xd8);
      func_0x000107277aa4(puVar2 + -0xc0);
      lVar11 = *(long *)(puVar2 + -0xc0);
      plVar4[3] = *(long *)(puVar2 + -0xb8);
      plVar4[2] = lVar11;
      *(undefined8 *)(puVar2 + -0xc0) = 0;
      *(undefined8 *)(puVar2 + -0xb8) = 0;
      func_0x0001077424ac(8);
      func_0x00010726b188(puVar2 + -0xc0);
      unaff_x19 = (long *)(puVar2 + -0xd8);
      func_0x000107277d70();
      unaff_x20 = plVar5;
    }
    else {
code_r0x00010773c4d0:
      func_0x00010774238c();
    }
    func_0x000107741a68();
    if ((bool)uVar3) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    plVar4 = (long *)(puVar2 + -0xd8);
    func_0x000107277d70();
    func_0x000107742904();
    puVar10 = &UNK_10773c5b4;
    func_0x0001077438e0();
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x98) = puVar10;
    puVar9 = (undefined8 *)(puVar2 + -0xa0);
    plVar5 = plVar7;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != 0) {
      plVar4 = (long *)*unaff_x23;
      func_0x0001077420ac(puVar2 + -0x500);
      func_0x000107743260();
      if ((bool)uVar3) {
        func_0x0001077430d0();
        param_3 = plVar4;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        param_3 = plVar4;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)uVar3) {
        func_0x000107742c5c();
        func_0x000107741c94(*(undefined8 *)(puVar2 + -0xe8));
        if ((bool)uVar3) {
          return plVar4;
        }
        ___stack_chk_fail();
        plVar5 = plVar4;
        func_0x000107742c5c();
        func_0x000107742904();
        *(long **)(puVar2 + -0x530) = unaff_x20;
        *(long **)(puVar2 + -0x528) = plVar4;
        *(undefined8 **)(puVar2 + -0x520) = puVar9;
        *(undefined **)(puVar2 + -0x518) = &DAT_10773c6ac;
        *plVar5 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar5 + 9);
        func_0x00010772d754(plVar5 + 5);
        func_0x0001072c9884(plVar5 + 2);
        return plVar5;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    puVar10 = &UNK_10773c63c;
    puVar2 = puVar2 + -0x510;
    unaff_x22 = plVar7;
  } while( true );
}



/* Entry: 10773c7b0; end: 10773c95f;  */

undefined8 * FUN_10773c7b0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  long unaff_x19;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  long *unaff_x23;
  ulong unaff_x24;
  long lVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_00000110;
  undefined1 auStack_420 [1048];
  undefined8 uStack_8;
  
  func_0x000107743460();
  func_0x000107741d18();
  uVar5 = param_2[1];
  uVar2 = uVar5 == 1;
  if (uVar5 < 2) {
LAB_10773c7d8:
    func_0x00010774238c();
  }
  else {
    uVar7 = 0;
    unaff_x23 = (long *)0x0;
    puVar6 = (undefined8 *)*param_2;
    for (unaff_x24 = uVar5 * 0x70; iVar8 = (int)unaff_x23, unaff_x24 != 0;
        unaff_x24 = unaff_x24 - 0x70) {
      uVar2 = *(int *)(puVar6 + 0xd) == 8;
      if (!(bool)uVar2) goto LAB_10773c7d8;
      param_1 = puVar6;
      func_0x0001075725f8();
      func_0x000107743184(*param_1);
      uVar1 = extraout_x8 / 0x70;
      uVar5 = uVar1;
      if (uVar7 <= uVar1) {
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
      if (iVar8 == 0) {
        uVar7 = uVar1;
      }
      puVar6 = puVar6 + 0xe;
      unaff_x23 = (long *)0x1;
    }
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    uVar2 = iVar8 == 0;
    uVar5 = uVar7;
    if ((bool)uVar2) {
      uVar5 = 0;
    }
    func_0x0001074b01dc(&stack0x00000028,uVar5);
    if (iVar8 != 0) {
      unaff_x23 = (long *)&stack0x00000040;
      for (unaff_x24 = 0; uVar2 = unaff_x24 == uVar7, !(bool)uVar2; unaff_x24 = unaff_x24 + 1) {
        func_0x000107743000();
        func_0x000107742d78();
        puVar6 = (undefined8 *)*param_2;
        for (lVar9 = param_2[1] * 0x70; lVar9 != 0; lVar9 = lVar9 + -0x70) {
          puVar3 = puVar6;
          func_0x0001075725f8();
          func_0x00010758ee8c(&stack0x00000010,*(long *)*puVar3 + unaff_x24 * 0x70);
          puVar6 = puVar6 + 0xe;
        }
        func_0x00010774339c();
        func_0x000107277aa4();
        in_stack_00000050 = in_stack_00000008;
        in_stack_00000048 = (undefined *)in_stack_00000000;
        in_stack_00000000 = 0;
        in_stack_00000008 = 0;
        in_stack_000000a8 = 8;
        func_0x000107277668(&stack0x00000028,&stack0x00000040);
        func_0x00010726af18(&stack0x00000048);
        func_0x000107743144();
        func_0x000107742aa8();
      }
    }
    func_0x000107277aa4(&stack0x00000040,&stack0x00000028);
    *(undefined **)(unaff_x19 + 0x18) = in_stack_00000048;
    *(undefined8 **)(unaff_x19 + 0x10) = in_stack_00000040;
    in_stack_00000040 = (undefined8 *)0x0;
    in_stack_00000048 = (undefined *)0x0;
    func_0x0001077424ac(8);
    param_1 = &stack0x00000040;
    func_0x00010726b188();
    func_0x0001077436f0();
  }
  func_0x000107741a80();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077436f0();
  func_0x000107742904();
  puVar4 = &UNK_10773c960;
  func_0x0001077438e0();
  in_stack_00000040 = &stack0x00000110;
  in_stack_00000048 = puVar4;
  func_0x000107741970();
  func_0x00010774222c();
  func_0x000107742764(0);
  func_0x0001077430c8();
  func_0x000107741c60();
  do {
    if (unaff_x24 == 0) {
      func_0x000107743254();
      func_0x000107743430();
      FUN_10773c7b0();
      func_0x000107743348();
      if ((bool)uVar2) {
        func_0x000107743220();
        func_0x000107742b70();
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
  } while ((bool)uVar2);
  func_0x000107742c5c();
  func_0x000107741c94(uStack_8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107742784();
    func_0x00010727f7f8();
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



/* Entry: 10773ce20; end: 10773ce23;  */

undefined8 * FUN_10773ce20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773d14c; end: 10773d223;  */

/* WARNING: Possible PIC construction at 0x00010773d324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d328) */
/* WARNING: Removing unreachable block (ram,0x00010773d340) */
/* WARNING: Removing unreachable block (ram,0x00010773d334) */
/* WARNING: Removing unreachable block (ram,0x00010773d34c) */

long * FUN_10773d14c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 in_stack_00000160;
  
  func_0x000107743a94();
  puVar6 = &stack0x00000160;
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  param_1 = (long *)*param_1;
  func_0x000107741e48(param_1);
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
  uVar2 = (int)unaff_x23 == 1;
  if ((bool)uVar2) {
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar2) {
      func_0x0001077433dc();
      plVar3 = (long *)(unaff_x19 + 8);
      func_0x000107739d70(plVar3,param_1);
      param_1 = plVar3;
    }
    else {
      func_0x0001077433d4();
      func_0x0001077428fc();
    }
    func_0x000107742598();
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  puVar7 = &UNK_10773d224;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  puVar5 = extraout_x8;
  while( true ) {
    plVar3 = param_4;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar6;
    *(undefined **)(puVar1 + -8) = puVar7;
    func_0x000107741be8(puVar5,param_1);
    func_0x000107723bd4(puVar1 + -0xa0);
    uVar2 = puVar1[-0x30] == '\x01';
    if ((bool)uVar2) {
      func_0x00010745fc58(plVar3,puVar1 + -0xa0);
    }
    else {
      plVar3 = (long *)0x0;
    }
    func_0x000107742678();
    func_0x0001077433a8();
    func_0x000107741a50();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x000107742d44();
    func_0x000107296ad0();
    func_0x000107742904();
    puVar7 = &UNK_10773d2a0;
    func_0x000107743290();
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = puVar7;
    puVar6 = (undefined8 *)(puVar1 + -0x50);
    func_0x000107742bec();
    plVar4 = plVar3;
    func_0x000107741b9c();
    func_0x0001077437a4();
    while (uVar2 = unaff_x23 == 2, !(bool)uVar2) {
      func_0x000107742700();
      plVar4 = (long *)*plVar4;
      func_0x0001077426e8(puVar1 + -0x128);
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
        func_0x000107742c4c();
        func_0x000107741a80();
        if ((bool)uVar2) {
          return plVar4;
        }
        ___stack_chk_fail();
        func_0x000107741edc();
        func_0x000107742c4c();
        func_0x000107742904();
        *(long **)(puVar1 + -0x260) = plVar3;
        *(long *)(puVar1 + -600) = unaff_x19;
        *(undefined8 **)(puVar1 + -0x250) = puVar6;
        *(undefined **)(puVar1 + -0x248) = &DAT_10773d394;
        *plVar4 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar4 + 9);
        func_0x00010772d754(plVar4 + 5);
        func_0x0001072c9884(plVar4 + 2);
        return plVar4;
      }
    }
    func_0x000107742538();
    puVar5 = puVar1 + -0x128;
    puVar7 = &UNK_10773d328;
    puVar1 = puVar1 + -0x240;
    param_1 = plVar3;
    param_4 = (long *)(unaff_x21 + 0x70);
    unaff_x20 = plVar3;
  }
  return plVar3;
}



/* Entry: 10773d4b8; end: 10773d51b;  */

long * FUN_10773d4b8(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined1 auStack_1d8 [104];
  undefined4 uStack_170;
  long alStack_168 [17];
  long alStack_a8 [15];
  
  func_0x000107741ca8();
  plVar2 = alStack_a8;
  FUN_107723ac8();
  func_0x000107743284();
  func_0x00010745fc58();
  func_0x000107742678();
  func_0x000107742e4c();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107742e4c();
  func_0x000107742904();
  func_0x000107741b04();
  uStack_170 = 0;
  func_0x000107742168();
  plVar2 = (long *)*plVar2;
  func_0x000107742380(alStack_168);
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
  uVar1 = param_2 == 1;
  if ((bool)uVar1) {
    plVar2 = alStack_168;
    FUN_10773d4b8(plVar2,param_3,auStack_1d8);
    func_0x000107742c78();
    if ((bool)uVar1) {
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
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  func_0x000107742904();
  *plVar2 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar2 + 9);
  func_0x00010772d754(plVar2 + 5);
  func_0x0001072c9884(plVar2 + 2);
  return plVar2;
}



/* Entry: 10773d844; end: 10773d847;  */

undefined8 * FUN_10773d844(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773db38; end: 10773db43;  */

void FUN_10773db38(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x000107742718(param_1,param_2);
  func_0x000107743c28();
  if ((bool)in_ZR) {
    func_0x000107742dd4();
    func_0x000107575b20();
  }
  func_0x000107742678();
  func_0x00010774323c();
  return;
}



/* Entry: 10773de90; end: 10773de93;  */

undefined8 * FUN_10773de90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e0c0; end: 10773e18b;  */

void FUN_10773e0c0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 uVar2;
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
  uVar1 = unaff_w23 + -1 < 0;
  uVar2 = unaff_w23 == 1;
  if ((bool)uVar2) {
    func_0x0001077421a8();
    func_0x000107741d60();
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
  func_0x000107741a68();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  func_0x000107742878();
  func_0x0001077430d8();
  func_0x0001077424f8(uVar1);
  return;
}



/* Entry: 10773e400; end: 10773e4f7;  */

undefined8 * FUN_10773e400(undefined8 *param_1)

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
      func_0x00010773e3a8();
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
      goto LAB_10773e4a8;
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
LAB_10773e4a8:
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



/* Entry: 10773e70c; end: 10773e7d3;  */

/* WARNING: Possible PIC construction at 0x00010773e8a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773e8a4) */
/* WARNING: Removing unreachable block (ram,0x00010773e8bc) */
/* WARNING: Removing unreachable block (ram,0x00010773e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010773e8c8) */

undefined8 * FUN_10773e70c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  puVar7 = &UNK_10773e7d4;
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
      func_0x000104c2fc44();
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
    *(undefined **)(puVar1 + -0x78) = &UNK_10773e83c;
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
      *(undefined **)(puVar1 + -0x1d8) = &DAT_10773e90c;
      *puVar3 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar3 + 9);
      func_0x00010772d754(puVar3 + 5);
      func_0x0001072c9884(puVar3 + 2);
      return puVar3;
    }
    func_0x0001077421a8();
    func_0x000107742a54();
    puVar7 = &UNK_10773e8a4;
    puVar1 = puVar1 + -0x1d0;
    unaff_x20 = uVar5;
    unaff_x21 = puVar4;
  }
  return puVar3;
}



/* Entry: 10773ea18; end: 10773eaef;  */

undefined8 * FUN_10773ea18(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  long unaff_x23;
  undefined1 auStack_88 [136];
  
  func_0x0001077431e0();
  func_0x000107742bec();
  func_0x000107741b9c();
  func_0x0001077427f4();
  do {
    cVar1 = SBORROW8(unaff_x23,2);
    cVar2 = unaff_x23 + -2 < 0;
    uVar3 = unaff_x23 == 2;
    if ((bool)uVar3) {
      func_0x000107742538();
      func_0x000107742ce8();
      func_0x000107743030();
      func_0x0001077430d8();
      func_0x000107742400(cVar2 == cVar1);
      func_0x000107743674();
      func_0x000107741e30();
      goto LAB_10773eaac;
    }
    func_0x000107742700();
    param_1 = (undefined8 *)*param_1;
    func_0x0001077426e8(auStack_88);
    func_0x00010774343c();
    if ((bool)uVar3) {
      func_0x000107742f9c();
      func_0x000107742190();
    }
    else {
      func_0x000107742f94();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar3);
  uVar3 = 0;
LAB_10773eaac:
  func_0x000107742c4c();
  func_0x000107741c48();
  if ((bool)uVar3) {
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



/* Entry: 10773ed74; end: 10773ed87;  */

void FUN_10773ed74(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773f058; end: 10773f0b3;  */

undefined8 * FUN_10773f058(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  
  func_0x000107741be8();
  func_0x00010774377c();
  func_0x000107743710();
  if ((bool)in_ZR) {
    func_0x000107743284();
    func_0x000107575ba8();
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
    FUN_10773f058();
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



/* Entry: 10773f36c; end: 10773f37f;  */

void FUN_10773f36c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773f704; end: 10773f72b;  */

void FUN_10773f704(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000107743024();
  func_0x0001077430d8();
  func_0x0001077424f8(!(bool)in_CY || (bool)in_ZR);
  return;
}



/* Entry: 10773f9fc; end: 10773f9ff;  */

undefined8 * FUN_10773f9fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773fc1c; end: 10773fce7;  */

void FUN_10773fc1c(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  int unaff_w23;
  int iStack_b8;
  byte bStack_78;
  undefined1 auStack_70 [64];
  char cStack_30;
  
  func_0x000107743a94();
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  uVar3 = *param_1;
  func_0x000107741e48(uVar3);
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
  uVar2 = unaff_w23 == 1;
  if ((bool)uVar2) {
    func_0x0001077421a8();
    func_0x000107741d60();
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
  func_0x000107741a68();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  func_0x000107741be8(extraout_x8,uVar3);
  func_0x000107751674(auStack_70,uVar3);
  uVar2 = cStack_30 == '\x01';
  if ((bool)uVar2) {
    func_0x000107743c1c();
    func_0x000107751674();
    if ((bStack_78 & 1) == 0) goto code_r0x00010773fd78;
    uVar2 = iStack_b8 == 4;
    func_0x0001077425dc(!(bool)uVar2);
    func_0x000107743518();
  }
  else {
    *(undefined1 *)(unaff_x19 + 8) = 0;
    func_0x000107742a28();
  }
  func_0x00010737c444(auStack_70);
  func_0x000107741a50();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010773fd78:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10773fd80);
  (*pcVar1)();
}



/* Entry: 10773feb4; end: 10773ff93;  */

undefined8 ** FUN_10773feb4(long param_1,undefined8 **param_2,ulong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x9;
  int unaff_w20;
  ulong *unaff_x22;
  undefined8 *puVar13;
  int in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_000000f8;
  undefined1 *in_stack_00000150;
  undefined *in_stack_00000158;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *apuStack_78 [2];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  byte bStack_40;
  
  puVar7 = &uStack_90;
  puVar6 = param_3;
  func_0x000107741ca8();
  func_0x0001077515e0();
  uVar1 = (uint)param_2 & 0xffff;
  uVar3 = uVar1 == 0xff;
  if (uVar1 < 0x100) {
    *(undefined1 *)(param_1 + 8) = 0;
    func_0x000107742a28();
  }
  else {
    func_0x000107723c60(apuStack_78,(uint)param_2 & 0xff);
    if ((bStack_40 & 1) == 0) {
      *(undefined1 *)(param_1 + 8) = 0;
      func_0x000107742a28();
    }
    else {
      uVar10 = *param_3;
      unaff_x22 = (ulong *)param_3[1];
      func_0x00010724ef84(&uStack_90,apuStack_78);
      func_0x000105275210(uVar10,uVar10 + (long)unaff_x22 * 0x18);
      func_0x000107743830(*param_3);
      func_0x0001077425dc();
      func_0x00010774338c();
      puVar6 = puVar7;
    }
    param_2 = apuStack_78;
    func_0x00010724b3d8(param_2);
  }
  func_0x0001077419ec();
  if ((bool)uVar3) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x000107742d44();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  ppuVar4 = apuStack_78;
  func_0x00010724b3d8();
  func_0x000107742904();
  puVar9 = &UNK_10773ff94;
  func_0x00010774309c();
  in_stack_00000150 = &stack0xfffffffffffffff0;
  in_stack_00000158 = puVar9;
  func_0x000107743520();
  func_0x00010774205c();
  in_stack_00000030 = (undefined8 *)0x8;
  in_stack_00000028 = (undefined8 *)0x0;
  uVar10 = *puVar6;
  puVar13 = (undefined8 *)(uVar10 >> 1);
  in_stack_00000020 = (undefined8 *)&stack0x00000038;
  if (0x11 < uVar10) {
    puVar5 = puVar13;
    func_0x000107740378();
    puVar2 = in_stack_00000020;
    lVar11 = 0;
    puStack_80 = &stack0x00000020;
    lVar12 = (long)in_stack_00000028 * 0x18;
    apuStack_78[0] = puVar13;
    puStack_50 = puStack_80;
    while (lVar12 != lVar11) {
      func_0x00010774355c();
      lVar11 = extraout_x8;
      lVar12 = extraout_x9;
    }
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x0001077403d0(&uStack_60);
    puStack_88 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x0001077403a4(puVar2,in_stack_00000028);
      if ((undefined8 *)&stack0x00000038 != in_stack_00000020) {
        __ZdlPv();
      }
    }
    in_stack_00000020 = puVar5;
    in_stack_00000030 = puVar13;
    func_0x00010774040c(&puStack_88);
    uVar10 = *unaff_x22;
    puVar13 = (undefined8 *)(uVar10 >> 1);
  }
  puVar6 = unaff_x22 + 1;
  if ((uVar10 & 1) != 0) {
    puVar6 = (ulong *)unaff_x22[1];
  }
  lVar11 = (long)puVar13 << 4;
  do {
    if (lVar11 == 0) {
      puStack_88 = in_stack_00000020;
      puStack_80 = in_stack_00000028;
      FUN_10773feb4(&uStack_60,ppuVar4,&puStack_88);
      uVar3 = unaff_w20 == 1;
      if ((bool)uVar3) {
        func_0x00010772fe40(&uStack_60);
        func_0x000107741b4c();
      }
      else {
        func_0x00010772fe28(&uStack_60);
        func_0x0001077428fc();
      }
      func_0x00010774294c(&uStack_60);
      goto code_r0x000107740180;
    }
    func_0x000107742380(&uStack_60,*puVar6);
    if (in_stack_00000018 == 1) {
      func_0x0001073405dc(&uStack_60);
      func_0x000107776f6c(&puStack_88);
      plVar8 = in_stack_00000020 + (long)in_stack_00000028 * 3;
      if (in_stack_00000028 == in_stack_00000030) {
        func_0x000107740438(auStack_68,&stack0x00000020,plVar8,&puStack_88);
      }
      else {
        plVar8[2] = (long)apuStack_78[0];
        plVar8[1] = (long)puStack_80;
        *plVar8 = (long)puStack_88;
        puStack_80 = (undefined8 *)0x0;
        apuStack_78[0] = (undefined8 *)0x0;
        puStack_88 = (undefined8 *)0x0;
        in_stack_00000028 = (undefined8 *)((long)in_stack_00000028 + 1);
      }
      func_0x0001001148fc(&puStack_88);
    }
    else {
      func_0x00010756dd74(&uStack_60);
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    puVar6 = puVar6 + 2;
    lVar11 = lVar11 + -0x10;
  } while (in_stack_00000018 == 1);
  uVar3 = 0;
code_r0x000107740180:
  ppuVar4 = &stack0x00000020;
  FUN_1077405a0(ppuVar4);
  func_0x000107741a80();
  if ((bool)uVar3) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x000107742c90();
  func_0x0001001148fc();
  func_0x00010774299c();
  ppuVar4 = &stack0x00000020;
  FUN_1077405a0();
  func_0x000107742904();
  *ppuVar4 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(ppuVar4 + 9);
  func_0x00010772d754(ppuVar4 + 5);
  func_0x0001072c9884(ppuVar4 + 2);
  return ppuVar4;
}



/* Entry: 1077405a0; end: 1077405df;  */

void FUN_1077405a0(void)

{
  long *unaff_x19;
  
  func_0x000107743454();
  func_0x0001077403a4();
  if (unaff_x19[2] != 0) {
    if (unaff_x19 + 3 != (long *)*unaff_x19) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1077408b4; end: 1077408bf;  */

/* WARNING: Possible PIC construction at 0x0001077409fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107740a00) */
/* WARNING: Removing unreachable block (ram,0x000107740a1c) */
/* WARNING: Removing unreachable block (ram,0x000107740a0c) */
/* WARNING: Removing unreachable block (ram,0x000107740a2c) */

undefined8 *
FUN_1077408b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar3 = param_1;
    puVar4 = (undefined8 *)(puVar1 + -0xb0);
    puVar5 = (undefined8 *)(puVar1 + -0xb0);
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    param_1 = puVar3;
    func_0x000107741ca8();
    uVar2 = param_4[1] == 1;
    if ((ulong)param_4[1] < 2) {
      *(undefined1 *)(puVar3 + 1) = 0;
      func_0x000107742a28();
    }
    else {
      func_0x0001077429f8();
      param_4 = (undefined8 *)*param_4;
      func_0x000107573ddc();
      func_0x000107723bd4();
      uVar2 = puVar1[-0x40] == '\x01';
      param_1 = puVar4;
      if ((bool)uVar2) {
        param_1 = (undefined8 *)(*unaff_x20 + 0x70);
        func_0x000107740668(param_1,*unaff_x20 + unaff_x20[1] * 0x70);
        func_0x000107743830(*unaff_x20);
        param_4 = puVar5;
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
    puVar6 = &UNK_107740978;
    func_0x0001077438e0();
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = puVar6;
    unaff_x29 = puVar1 + -0x70;
    func_0x000107743520();
    func_0x000107741b04();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != 0) {
      param_1 = (undefined8 *)*unaff_x23;
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
          FUN_10772fe9c();
          func_0x000107742c5c();
          func_0x000107742904();
          *(long **)(puVar1 + -0x500) = unaff_x20;
          *(undefined8 **)(puVar1 + -0x4f8) = puVar3;
          *(undefined1 **)(puVar1 + -0x4f0) = unaff_x29;
          *(undefined **)(puVar1 + -0x4e8) = &DAT_107740a7c;
          *param_1 = &PTR_DAT_1109d1d80;
          func_0x000104c2f714(param_1 + 9);
          func_0x00010772d754(param_1 + 5);
          func_0x0001072c9884(param_1 + 2);
          return param_1;
        }
        return param_1;
      }
    }
    func_0x000107743254();
    func_0x000107743364();
    unaff_x30 = &UNK_107740a00;
    puVar1 = puVar1 + -0x4e0;
    unaff_x19 = puVar3;
  }
  return param_1;
}



/* Entry: 107740c6c; end: 107740d8f;  */

undefined8 * FUN_107740c6c(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  long *unaff_x23;
  undefined8 auStack_420 [15];
  int iStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_8;
  
  func_0x0001077438e0();
  puVar3 = auStack_420;
  puVar4 = auStack_420;
  func_0x000107741970();
  func_0x000107743b18();
  uStack_390 = 8;
  uStack_398 = 0;
  func_0x000107742ed0();
  func_0x00010772e118(&uStack_3a0);
  func_0x0001077420c4();
  do {
    if ((extraout_x8 & 0x1ffffffffffffffe) == 0) {
      func_0x000107740b88(auStack_420,uStack_3a0,uStack_398);
      func_0x000107743744();
      if ((bool)in_ZR) {
        func_0x00010727f7dc();
        func_0x000107742b70();
        puVar1 = puVar4;
      }
      else {
        func_0x000107743a0c();
        func_0x0001077428fc();
        puVar1 = puVar3;
      }
      func_0x00010774290c(auStack_420);
      break;
    }
    puVar1 = (undefined8 *)*unaff_x23;
    func_0x0001077420ac(auStack_420);
    in_ZR = iStack_3a8 == 1;
    if ((bool)in_ZR) {
      puVar2 = auStack_420;
      func_0x0001073405dc(auStack_420);
      puVar1 = &uStack_3a0;
      func_0x00010772e3a0(puVar1,puVar2);
    }
    else {
      func_0x000107743a0c();
      func_0x0001077428fc();
    }
    func_0x000107742ca4();
    func_0x000107742668();
  } while ((bool)in_ZR);
  func_0x0001077435ec();
  func_0x000107741c94(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077426a8();
    func_0x00010727f7f8();
    func_0x0001077435ec();
    func_0x000107742904();
    *puVar1 = &PTR_DAT_1109d1d80;
    func_0x000104c2f714(puVar1 + 9);
    func_0x00010772d754(puVar1 + 5);
    func_0x0001072c9884(puVar1 + 2);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 107740fdc; end: 107740fef;  */

void FUN_107740fdc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077412c0; end: 1077412cb;  */

void FUN_1077412c0(long param_1,long *param_2)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pdVar1 = (double *)*param_2;
  if ((param_2[1] & 0xfffffffffffffffeU) == 2) {
    dVar6 = (double)(long)*pdVar1;
    dVar5 = (double)(long)pdVar1[1];
    if (param_2[1] == 3) {
      uVar2 = (uint)pdVar1[2];
    }
    else {
      uVar2 = 1;
    }
    if ((dVar6 <= dVar5 && uVar2 != 0) && (dVar5 < dVar6 || -1 < (int)uVar2)) {
      dVar4 = (dVar5 - dVar6) / (double)uVar2;
      func_0x000107743000(dVar4);
      func_0x0001073b504c(&uStack_60,(long)dVar4);
      for (iVar3 = (int)dVar6; (double)iVar3 < dVar5; iVar3 = iVar3 + uVar2) {
        uStack_70 = CONCAT44(uStack_70._4_4_,(float)iVar3);
        func_0x000107743430();
        func_0x0001074c4f8c();
      }
      func_0x00010774339c();
      func_0x000107535bd0();
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
      *(undefined8 *)(param_1 + 8) = uStack_70;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x000107742a28();
      func_0x0001072dbd40(&uStack_70);
      func_0x0001056d1ce4(&uStack_60);
      return;
    }
  }
  func_0x0001072f6da0(&uStack_60);
  *(undefined8 *)(param_1 + 0x10) = uStack_58;
  *(undefined8 *)(param_1 + 8) = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000107742a28();
  func_0x0001072dbd40(&uStack_60);
  return;
}



/* Entry: 107741684; end: 1077416bb;  */

void FUN_107741684(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d3fb8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}



/* Entry: 107741804; end: 107743c47;  */

undefined ** FUN_107741804(void)

{
  return &PTR_DAT_1109d4048;
}



/* Entry: 107745244; end: 10774525b;  */

void FUN_107745244(long *param_1,long param_2)

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



/* Entry: 1077453e8; end: 107745693;  */

/* WARNING: Possible PIC construction at 0x000107745810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077457a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107745814) */
/* WARNING: Removing unreachable block (ram,0x000107745828) */
/* WARNING: Removing unreachable block (ram,0x000107745848) */
/* WARNING: Removing unreachable block (ram,0x000107745850) */
/* WARNING: Removing unreachable block (ram,0x000107745858) */
/* WARNING: Removing unreachable block (ram,0x00010774585c) */
/* WARNING: Removing unreachable block (ram,0x0001077457ac) */
/* WARNING: Removing unreachable block (ram,0x0001077457bc) */
/* WARNING: Removing unreachable block (ram,0x0001077457c4) */
/* WARNING: Removing unreachable block (ram,0x0001077457cc) */
/* WARNING: Removing unreachable block (ram,0x0001077457d0) */

undefined8 *
FUN_1077453e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,ulong param_5
             )

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 *unaff_x29;
  undefined8 *unaff_x30;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_100 [48];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined8 *puStack_78;
  undefined1 *puVar3;
  
  puVar3 = auStack_80;
  puVar2 = auStack_80;
  puVar6 = param_3;
  puVar7 = param_2;
  puVar8 = param_1;
LAB_107745418:
  puVar14 = puVar7 + -2;
  puStack_78 = puVar7 + -4;
LAB_10774542c:
  puVar12 = (undefined8 *)-param_4;
  puVar5 = puVar8;
LAB_107745434:
  puVar8 = puVar5;
  puVar12 = (undefined8 *)((long)puVar12 + 1);
  uVar13 = (long)puVar7 - (long)puVar8 >> 4;
  puVar5 = puVar8;
  switch(uVar13) {
  case 0:
  case 1:
    goto LAB_107745590;
  case 2:
    func_0x000107746354(param_3,puVar14);
    if ((int)param_3 != 0) {
      func_0x00010774656c();
      uVar18 = puVar7[-1];
      uVar17 = *puVar14;
      func_0x000107746554();
      puVar7[-1] = uVar18;
      *puVar14 = uVar17;
    }
    goto LAB_107745590;
  case 3:
    puVar6 = puVar8 + 2;
    puVar4 = puVar14;
    puVar9 = param_3;
    func_0x0001077463b4();
    goto code_r0x0001077456b8;
  case 4:
    puVar6 = puVar8 + 2;
    puVar4 = puVar8 + 4;
    puVar10 = param_3;
    func_0x0001077463b4();
    break;
  case 5:
    puVar6 = puVar8 + 2;
    puVar4 = puVar8 + 4;
    puVar9 = puVar14;
    puVar11 = param_3;
    func_0x0001077463b4();
    puVar3 = auStack_100;
    unaff_x29 = auStack_90;
    puVar10 = puVar11;
    puStack_c0 = puVar12;
    uStack_b8 = param_5;
    puStack_b0 = puVar8;
    puStack_a8 = puVar7;
    puStack_a0 = puVar14;
    puStack_98 = param_3;
    func_0x000107746578();
    unaff_x30 = (undefined8 *)&UNK_107745814;
    puVar7 = puVar11;
    puVar12 = puVar9;
    break;
  default:
    if ((long)uVar13 < 0x18) {
      func_0x000107746448();
      if ((param_5 & 1) == 0) {
        func_0x0001077463b4();
        if (param_1 != param_2) {
          puVar5 = param_1 + -2;
          puVar4 = param_1;
          puStack_c0 = puVar12;
          uStack_b8 = param_5;
          puStack_b0 = puVar8;
          puStack_a8 = puVar7;
          puStack_a0 = puVar14;
          puStack_98 = param_3;
          while (puVar7 = puVar4 + 2, puVar7 != param_2) {
            func_0x000107746500();
            if ((int)param_1 != 0) {
              uStack_c8 = puVar4[3];
              uStack_d0 = *puVar7;
              puVar8 = puVar5;
              do {
                puVar14 = puVar8;
                puVar14[5] = puVar14[3];
                puVar14[4] = puVar14[2];
                param_1 = puVar6;
                func_0x000107746354(puVar6,&uStack_d0);
                puVar8 = puVar14 + -2;
              } while (((ulong)param_1 & 1) != 0);
              puVar14[3] = uStack_c8;
              puVar14[2] = uStack_d0;
            }
            puVar5 = puVar5 + 2;
            puVar4 = puVar7;
          }
        }
        return param_1;
      }
      func_0x0001077463b4();
      if (param_1 == param_2) {
        return param_1;
      }
      puStack_c0 = puVar12;
      uStack_b8 = param_5;
      puStack_b0 = puVar8;
      puStack_a8 = puVar7;
      puStack_a0 = puVar14;
      puStack_98 = param_3;
      func_0x000107746468();
      lVar15 = 0;
      puVar6 = param_1;
      goto code_r0x0001077458a0;
    }
    if (puVar12 == (undefined8 *)0x1) {
      puVar6 = puVar8;
      puVar5 = puVar7;
      puVar4 = puVar7;
      puVar9 = param_3;
      func_0x0001077463b4();
      if (puVar6 != puVar5) {
        if (puVar6 != puVar5) {
          puStack_c0 = puVar12;
          uStack_b8 = param_5;
          puStack_b0 = puVar8;
          puStack_a8 = puVar7;
          puStack_a0 = puVar14;
          puStack_98 = param_3;
          func_0x000107745e0c();
          for (puVar7 = puVar5; puVar7 != puVar4; puVar7 = puVar7 + 2) {
            puVar8 = puVar9;
            func_0x000107746354(puVar9,puVar7);
            if ((int)puVar8 != 0) {
              uVar18 = puVar7[1];
              uVar17 = *puVar7;
              uVar19 = *puVar6;
              puVar7[1] = puVar6[1];
              *puVar7 = uVar19;
              puVar6[1] = uVar18;
              *puVar6 = uVar17;
              FUN_107745e78(puVar6,puVar9,(long)puVar5 - (long)puVar6 >> 4,puVar6);
            }
          }
          func_0x000107745f8c(puVar6,puVar5,puVar9);
          puVar4 = puVar7;
        }
        return puVar4;
      }
      return puVar4;
    }
    puVar5 = puVar8 + (uVar13 & 0xfffffffffffffffe);
    if (uVar13 < 0x81) {
      param_2 = puVar8;
      puVar6 = puVar14;
      func_0x000107746400();
      puVar4 = puVar5;
    }
    else {
      func_0x000107746400(puVar8,puVar5,puVar14);
      puVar4 = puVar5 + -2;
      func_0x000107746400(puVar8 + 2,puVar4,puStack_78);
      func_0x000107746400(puVar8 + 4,puVar5 + 2,puVar7 + -6);
      puVar6 = puVar5 + 2;
      param_2 = puVar5;
      func_0x000107746400();
      func_0x00010774656c();
      uVar18 = puVar5[1];
      uVar17 = *puVar5;
      func_0x000107746554();
      puVar5[1] = uVar18;
      *puVar5 = uVar17;
    }
    if ((param_5 & 1) == 0) {
      param_2 = puVar8 + -2;
      param_1 = param_3;
      func_0x000107746354();
      puVar4 = param_1;
      if (((ulong)param_1 & 1) == 0) {
        func_0x000107746448();
        func_0x0001077459d0();
        puVar8 = param_1;
        goto LAB_10774555c;
      }
    }
    func_0x000107746448();
    func_0x000107745aac();
    if (((ulong)param_2 & 1) != 0) {
      puVar9 = puVar8;
      func_0x000107745ba8(puVar8,puVar4,param_3);
      param_1 = puVar4 + 2;
      param_2 = puVar7;
      puVar6 = param_3;
      func_0x000107745ba8();
      if ((int)param_1 == 0) goto code_r0x000107745528;
      param_4 = -(long)puVar12;
      puVar7 = puVar4;
      if (((ulong)puVar9 & 1) != 0) goto LAB_107745590;
      goto LAB_107745418;
    }
    goto LAB_107745530;
  }
  puVar2 = puVar3 + -0x70;
  *(undefined8 **)(puVar3 + -0x40) = puVar12;
  *(ulong *)(puVar3 + -0x38) = param_5;
  *(undefined8 **)(puVar3 + -0x30) = puVar8;
  *(undefined8 **)(puVar3 + -0x28) = puVar7;
  *(undefined8 **)(puVar3 + -0x20) = puVar14;
  *(undefined8 **)(puVar3 + -0x18) = param_3;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined8 **)(puVar3 + -8) = unaff_x30;
  unaff_x29 = puVar3 + -0x10;
  puVar9 = puVar10;
  func_0x000107746578();
  unaff_x30 = (undefined8 *)&UNK_1077457ac;
  puVar7 = puVar10;
code_r0x0001077456b8:
  *(undefined8 **)(puVar2 + -0x40) = puVar12;
  *(ulong *)(puVar2 + -0x38) = param_5;
  *(undefined8 **)(puVar2 + -0x30) = puVar8;
  *(undefined8 **)(puVar2 + -0x28) = puVar7;
  *(undefined8 **)(puVar2 + -0x20) = puVar14;
  *(undefined8 **)(puVar2 + -0x18) = param_3;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined8 **)(puVar2 + -8) = unaff_x30;
  puVar7 = puVar9;
  func_0x000107745694();
  puVar8 = puVar9;
  func_0x0001077463d0(puVar9,puVar4);
  if (((ulong)puVar7 & 1) == 0) {
    if ((int)puVar8 == 0) {
      return puVar8;
    }
    uVar18 = puVar6[1];
    uVar17 = *puVar6;
    uVar19 = *puVar4;
    puVar6[1] = puVar4[1];
    *puVar6 = uVar19;
    puVar4[1] = uVar18;
    *puVar4 = uVar17;
    func_0x000107745694(puVar9,puVar6,puVar5);
    if ((int)puVar9 != 0) {
      func_0x0001077465a0();
    }
  }
  else {
    if ((int)puVar8 == 0) {
      func_0x0001077465a0();
      func_0x0001077463d0(puVar9,puVar4);
      if ((int)puVar9 == 0) {
        return (undefined8 *)0x1;
      }
      uVar18 = puVar6[1];
      uVar17 = *puVar6;
      uVar19 = *puVar4;
      puVar6[1] = puVar4[1];
      *puVar6 = uVar19;
    }
    else {
      uVar18 = puVar5[1];
      uVar17 = *puVar5;
      uVar19 = *puVar4;
      puVar5[1] = puVar4[1];
      *puVar5 = uVar19;
    }
    puVar4[1] = uVar18;
    *puVar4 = uVar17;
  }
  return (undefined8 *)0x1;
code_r0x0001077458a0:
  puVar8 = puVar6 + 2;
  if (puVar8 == puVar14) {
    return param_1;
  }
  param_1 = param_3;
  func_0x0001077464e4();
  if ((int)param_1 != 0) {
    uStack_c8 = puVar6[3];
    uStack_d0 = *puVar8;
    lVar1 = lVar15;
    do {
      lVar16 = lVar1;
      puVar6 = (undefined8 *)((long)puVar7 + lVar16);
      puVar6[3] = puVar6[1];
      puVar6[2] = *puVar6;
      puVar6 = puVar7;
      if (lVar16 == 0) goto code_r0x0001077458fc;
      param_1 = param_3;
      func_0x000107745694(param_3,&uStack_d0,lVar16 + -0x10 + (long)puVar7);
      lVar1 = lVar16 + -0x10;
    } while (((ulong)param_1 & 1) != 0);
    puVar6 = (undefined8 *)((long)puVar7 + lVar16);
code_r0x0001077458fc:
    func_0x000107746560(puVar6);
  }
  lVar15 = lVar15 + 0x10;
  puVar6 = puVar8;
  goto code_r0x0001077458a0;
code_r0x000107745528:
  puVar5 = puVar4 + 2;
  if (((ulong)puVar9 & 1) == 0) goto LAB_107745530;
  goto LAB_107745434;
LAB_107745530:
  param_2 = puVar4;
  puVar6 = param_3;
  FUN_1077453e8();
  param_1 = puVar8;
  puVar8 = puVar4 + 2;
LAB_10774555c:
  param_5 = 0;
  param_4 = -(long)puVar12;
  goto LAB_10774542c;
LAB_107745590:
  func_0x0001077463b4(unaff_x30);
  return unaff_x30;
}



/* Entry: 107745e78; end: 107745f8b;  */

void FUN_107745e78(ulong param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (1 < param_3) {
    uVar9 = param_3 - 2U >> 1;
    if ((long)((long)param_4 - param_1) >> 4 <= (long)uVar9) {
      lVar6 = (long)((long)param_4 - param_1) >> 3;
      uVar1 = lVar6 + 1;
      puVar7 = (undefined8 *)(param_1 + uVar1 * 0x10);
      uVar2 = lVar6 + 2;
      uVar5 = param_1;
      puVar8 = puVar7;
      uVar10 = uVar1;
      if ((long)uVar2 < param_3) {
        uVar5 = param_2;
        func_0x000107745694(param_2,puVar7,puVar7 + 2);
        puVar8 = puVar7 + 2;
        uVar10 = uVar2;
        if ((int)uVar5 == 0) {
          puVar8 = puVar7;
          uVar10 = uVar1;
        }
      }
      func_0x000107746324();
      if ((uVar5 & 1) == 0) {
        uVar13 = param_4[1];
        uVar11 = *param_4;
        do {
          puVar7 = puVar8;
          iVar4 = (int)uVar5;
          uVar12 = *puVar7;
          param_4[1] = puVar7[1];
          *param_4 = uVar12;
          if ((long)uVar9 < (long)uVar10) break;
          uVar2 = uVar10 << 1 | 1;
          puVar3 = (undefined8 *)(param_1 + uVar2 * 0x10);
          uVar1 = uVar10 * 2 + 2;
          puVar8 = puVar3;
          uVar10 = uVar2;
          if ((long)uVar1 < param_3) {
            func_0x000107746324();
            puVar8 = puVar3 + 2;
            uVar10 = uVar1;
            if (iVar4 == 0) {
              puVar8 = puVar3;
              uVar10 = uVar2;
            }
          }
          uVar5 = param_2;
          func_0x0001077464e4();
          param_4 = puVar7;
        } while ((int)uVar5 == 0);
        puVar7[1] = uVar13;
        *puVar7 = uVar11;
      }
    }
  }
  return;
}



/* Entry: 107746988; end: 107746b37;  */

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
/* WARNING: Removing unreachable block (ram,0x000107747c84) */
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
/* WARNING: Removing unreachable block (ram,0x000107278574) */

void FUN_107746988(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_400 [56];
  undefined1 auStack_3c8 [56];
  undefined1 auStack_390 [168];
  undefined1 auStack_2e8 [672];
  undefined8 uStack_48;
  
  func_0x000107747a88();
  uStack_48 = extraout_x8;
  func_0x000100060964(auStack_3c8,&UNK_10f425099);
  func_0x0001072deec0(auStack_390,auStack_3c8,param_2);
  func_0x000107747c3c();
  func_0x0001072deec0(auStack_2e8,auStack_400,param_2 + 0x70);
  func_0x000107747cd8();
  func_0x000107747d08();
  func_0x000107747c7c(auStack_390);
  func_0x000107747d08();
  func_0x000107747cb0(auStack_390);
  func_0x000107747d08();
  func_0x0001072965a0(param_1,auStack_390,5);
  do {
    func_0x000107747d34();
    func_0x000107747d6c();
  } while (!(bool)in_ZR);
  func_0x000107747c60();
  func_0x000107747c58();
  func_0x000107747c74();
  func_0x000107747c34();
  func_0x000104c2f714();
  func_0x000107747a3c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x00010729651c();
      func_0x000107747dac();
    } while( true );
  }
  return;
}



/* Entry: 107747904; end: 107747a0f;  */

/* WARNING: Removing unreachable block (ram,0x0001077479bc) */
/* WARNING: Removing unreachable block (ram,0x0001077479f0) */
/* WARNING: Removing unreachable block (ram,0x0001077479f4) */
/* WARNING: Removing unreachable block (ram,0x0001077479f8) */
/* WARNING: Removing unreachable block (ram,0x000107747a04) */
/* WARNING: Removing unreachable block (ram,0x000107278574) */

void FUN_107747904(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_188 [336];
  undefined8 uStack_38;
  
  func_0x000107747a88();
  uStack_38 = extraout_x8;
  func_0x000107747c7c();
  func_0x000107747d60();
  func_0x0001072964ec();
  func_0x000107747cb0();
  func_0x000107747d08();
  func_0x000107747d10(param_1,auStack_188);
  do {
    func_0x000107747d34();
    func_0x000107747d6c();
  } while (!(bool)in_ZR);
  func_0x000107747c60();
  func_0x000107747c58();
  func_0x000107747a3c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x00010729651c();
      func_0x000107747dac();
    } while( true );
  }
  return;
}



/* Entry: 107748d80; end: 107748de7;  */

void FUN_107748d80(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  uint *puVar10;
  uint *puVar11;
  undefined4 *extraout_x8_02;
  undefined8 extraout_x8_03;
  long *plVar12;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 auStack_558 [64];
  undefined8 uStack_518;
  long lStack_510;
  long *plStack_508;
  undefined1 **ppuStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
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
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [8];
  undefined4 uStack_470;
  undefined1 uStack_468;
  undefined8 auStack_460 [4];
  uint uStack_440;
  uint uStack_43c;
  undefined8 uStack_438;
  byte bStack_430;
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [8];
  undefined4 uStack_400;
  undefined1 uStack_3f8;
  uint uStack_3f0;
  uint uStack_3ec;
  undefined8 uStack_3e8;
  char cStack_3e0;
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [8];
  undefined4 uStack_3b0;
  undefined1 uStack_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  undefined8 uStack_398;
  byte bStack_390;
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [8];
  undefined4 uStack_360;
  undefined1 uStack_358;
  uint uStack_350;
  uint uStack_34c;
  undefined8 uStack_348;
  byte bStack_340;
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [8];
  undefined4 uStack_318;
  undefined1 uStack_310;
  undefined1 auStack_308 [24];
  uint uStack_2f0;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [8];
  int iStack_2b8;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [8];
  undefined4 uStack_290;
  undefined1 uStack_288;
  long alStack_280 [2];
  byte bStack_270;
  undefined1 auStack_268 [24];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint5 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  char cStack_190;
  undefined1 auStack_188 [16];
  char cStack_178;
  undefined1 auStack_170 [16];
  char cStack_160;
  long alStack_158 [2];
  undefined1 auStack_148 [16];
  char cStack_138;
  undefined1 auStack_110 [16];
  char cStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long alStack_a0 [14];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  plVar8 = alStack_a0;
  plVar3 = alStack_a0;
  func_0x00010774a240(param_1);
  alStack_a0[0]._0_1_ = 0;
  uStack_30 = 0;
  lVar9 = 1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x00010774a220(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x00010774a28c();
  puStack_a8 = &DAT_107748de8;
  puVar11 = (uint *)&uStack_4f0;
  plVar4 = plVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010774a240();
  plVar12 = plVar4 + 1;
  plVar5 = plVar12;
  uStack_f8 = extraout_x8_01;
  (**(code **)(*plVar4 + 0x20))();
  uVar2 = plVar5 == (long *)0x3;
  if (!(bool)uVar2) {
    func_0x000107878fec(alStack_280);
    func_0x0001004c3cd0(auStack_148,&UNK_10f4250e7,alStack_280);
    func_0x00010048a6c8(auStack_268,auStack_148,&UNK_10f417b93);
    func_0x00010774a274();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    plVar3 = alStack_280;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010774a2ac();
    goto code_r0x000107749688;
  }
  (**(code **)(*plVar3 + 0x28))(auStack_148,plVar12,1);
  uStack_290 = 1;
  uStack_288 = 1;
  uStack_2f0 = uStack_2f0 & 0xffffff00;
  uStack_2ec = uStack_2ec & 0xffffff00;
  func_0x00010774a1f4(alStack_280);
  func_0x0001072c9854(auStack_298);
  func_0x0001072f5f6c(auStack_148);
  if ((bStack_270 & 1) == 0) {
    func_0x00010002b838(auStack_2b0,&UNK_10f42511d);
    func_0x00010774a274();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b0);
    func_0x00010774a2ac();
  }
  else {
    func_0x0001072c9ff4(auStack_2c0,alStack_280[0] + 0x10);
    uVar2 = iStack_2b8 == 1;
    if ((bool)uVar2) {
      (**(code **)(*plVar3 + 0x28))(alStack_158,plVar12,2);
      uVar6 = 0;
      (**(code **)(alStack_158[0] + 0x30))();
      if ((uVar6 & 1) == 0) {
        func_0x00010002b838(auStack_308,&UNK_10f42517c);
        func_0x00010774a274();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_308);
        func_0x00010774a2ac();
      }
      else {
        func_0x00010774a354();
        func_0x00010774a2d8(auStack_148);
        uStack_2f0 = uStack_2f0 & 0xffffff00;
        bStack_2e0 = 0;
        uVar2 = cStack_138 == '\x01';
        if ((bool)uVar2) {
          uStack_318 = 2;
          uStack_310 = 1;
          uStack_350 = uStack_350 & 0xffffff00;
          uStack_34c = uStack_34c & 0xffffff00;
          func_0x00010774a1f4(auStack_110);
          func_0x0001075530c4(&uStack_2f0,auStack_110);
          func_0x0001072c95d0(auStack_110);
          func_0x0001072c9854(auStack_320);
          if ((bStack_2e0 & 1) != 0) goto code_r0x000107748f54;
          func_0x00010002b838(auStack_338,&UNK_10f4251b1);
          func_0x00010774a274();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
          func_0x00010774a2ac();
        }
        else {
code_r0x000107748f54:
          func_0x00010774a354();
          func_0x00010774a2d8(auStack_110);
          uStack_350 = uStack_350 & 0xffffff00;
          bStack_340 = 0;
          uVar2 = cStack_100 == '\x01';
          if ((bool)uVar2) {
            uStack_360 = 2;
            uStack_358 = 1;
            uStack_3a0 = uStack_3a0 & 0xffffff00;
            uStack_39c = uStack_39c & 0xffffff00;
            func_0x00010774a1f4(auStack_170);
            func_0x0001075530c4(&uStack_350,auStack_170);
            func_0x0001072c95d0(auStack_170);
            func_0x0001072c9854(auStack_368);
            if ((bStack_340 & 1) != 0) goto code_r0x000107748fcc;
            func_0x00010002b838(auStack_380,&UNK_10f4251da);
            func_0x00010774a274();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
            func_0x00010774a2ac();
          }
          else {
code_r0x000107748fcc:
            func_0x00010774a354();
            func_0x00010774a2d8(auStack_170);
            uStack_3a0 = uStack_3a0 & 0xffffff00;
            bStack_390 = 0;
            uVar2 = cStack_160 == '\x01';
            if ((bool)uVar2) {
              uStack_3b0 = 1;
              uStack_3a8 = 1;
              uStack_3f0 = uStack_3f0 & 0xffffff00;
              uStack_3ec = uStack_3ec & 0xffffff00;
              func_0x00010774a1f4(auStack_188);
              func_0x0001075530c4(&uStack_3a0,auStack_188);
              func_0x0001072c95d0(auStack_188);
              func_0x0001072c9854(auStack_3b8);
              if ((bStack_390 & 1) != 0) goto code_r0x000107749040;
              func_0x00010002b838(auStack_3d0,&UNK_10f42520f);
              func_0x00010774a274();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d0);
              func_0x00010774a2ac();
            }
            else {
code_r0x000107749040:
              func_0x00010774a354();
              func_0x00010774a2d8(auStack_188);
              uStack_3f0 = uStack_3f0 & 0xffffff00;
              cStack_3e0 = '\0';
              uVar2 = cStack_178 == '\x01';
              if ((bool)uVar2) {
                uStack_400 = 2;
                uStack_3f8 = 1;
                uStack_440 = uStack_440 & 0xffffff00;
                uStack_43c = uStack_43c & 0xffffff00;
                func_0x00010774a1f4(auStack_1a0);
                func_0x0001075530c4(&uStack_3f0,auStack_1a0);
                func_0x0001072c95d0(auStack_1a0);
                func_0x0001072c9854(auStack_408);
                if ((bStack_390 & 1) != 0) goto code_r0x0001077490b8;
                func_0x00010002b838(auStack_420,&UNK_10f425243);
                func_0x00010774a274();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_420);
                func_0x00010774a2ac();
              }
              else {
code_r0x0001077490b8:
                func_0x00010774a354();
                func_0x00010774a2d8(auStack_1a0);
                uStack_440 = uStack_440 & 0xffffff00;
                bStack_430 = 0;
                uVar2 = cStack_190 == '\x01';
                if ((bool)uVar2) {
                  uStack_470 = 2;
                  uStack_468 = 1;
                  uVar6 = (ulong)_uStack_1b0 >> 0x28;
                  uVar1 = (uint)_uStack_1b0;
                  uStack_1b0 = (uint5)(uVar1 & 0xffffff00);
                  _uStack_1b0 = CONCAT35((int3)uVar6,uStack_1b0);
                  func_0x00010774a1f4(auStack_460);
                  func_0x0001075530c4(&uStack_440,auStack_460);
                  func_0x0001072c95d0(auStack_460);
                  func_0x0001072c9854(auStack_478);
                  if ((bStack_430 & 1) != 0) goto code_r0x000107749130;
                  func_0x00010002b838(auStack_490,&UNK_10f425278);
                  func_0x00010774a274();
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_490);
                  func_0x00010774a2ac();
                }
                else {
code_r0x000107749130:
                  if (*(char *)((long)plVar8 + 0x51) == '\x01') {
                    if (bStack_2e0 == 1) {
                      param_2 = CONCAT44(uStack_2ec,uStack_2f0);
                      uStack_4a8 = uStack_2e8;
                      puVar10 = &uStack_2f0;
                      uStack_4b0 = param_2;
                    }
                    else {
                      puVar10 = (uint *)&uStack_4b0;
                    }
                    puVar10[0] = 0;
                    puVar10[1] = 0;
                    puVar10[2] = 0;
                    puVar10[3] = 0;
                    if (bStack_340 == 1) {
                      param_2 = CONCAT44(uStack_34c,uStack_350);
                      uStack_4b8 = uStack_348;
                      puVar10 = &uStack_350;
                      uStack_4c0 = param_2;
                    }
                    else {
                      puVar10 = (uint *)&uStack_4c0;
                    }
                    puVar10[0] = 0;
                    puVar10[1] = 0;
                    puVar10[2] = 0;
                    puVar10[3] = 0;
                    if (bStack_390 == 1) {
                      param_2 = CONCAT44(uStack_39c,uStack_3a0);
                      uStack_4c8 = uStack_398;
                      puVar10 = &uStack_3a0;
                      uStack_4d0 = param_2;
                    }
                    else {
                      puVar10 = (uint *)&uStack_4d0;
                    }
                    puVar10[0] = 0;
                    puVar10[1] = 0;
                    puVar10[2] = 0;
                    puVar10[3] = 0;
                    uVar2 = cStack_3e0 == '\x01';
                    if ((bool)uVar2) {
                      param_2 = CONCAT44(uStack_3ec,uStack_3f0);
                      uStack_4d8 = uStack_3e8;
                      puVar10 = &uStack_3f0;
                      uStack_4e0 = param_2;
                    }
                    else {
                      puVar10 = (uint *)&uStack_4e0;
                    }
                    puVar10[0] = 0;
                    puVar10[1] = 0;
                    puVar10[2] = 0;
                    puVar10[3] = 0;
                    if (cStack_190 != '\0') {
                      param_2 = CONCAT44(uStack_43c,uStack_440);
                      uStack_4e8 = uStack_438;
                      puVar11 = &uStack_440;
                      uStack_4f0 = param_2;
                    }
                    puVar11[0] = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    __Znwm(0xd8);
                    func_0x00010774a360();
                    uStack_1a8 = uStack_4a8;
                    _uStack_1b0 = uStack_4b0;
                    uStack_1b8 = uStack_4b8;
                    uStack_1c0 = uStack_4c0;
                    uStack_1c8 = uStack_4c8;
                    uStack_1d0 = uStack_4d0;
                    uStack_1d8 = uStack_4d8;
                    uStack_1e0 = uStack_4e0;
                    uStack_1e8 = uStack_4e8;
                    uStack_1f0 = uStack_4f0;
                    alStack_280[0] = 0;
                    alStack_280[1] = 0;
                    uStack_4b0 = 0;
                    uStack_4a8 = 0;
                    uStack_4c0 = 0;
                    uStack_4b8 = 0;
                    uStack_4d0 = 0;
                    uStack_4c8 = 0;
                    uStack_4e0 = 0;
                    uStack_4d8 = 0;
                    uStack_4f0 = 0;
                    uStack_4e8 = 0;
                    uStack_1f8 = 0;
                    uStack_200 = 0;
                    uStack_208 = 0;
                    uStack_210 = 0;
                    uStack_218 = 0;
                    uStack_220 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_238 = 0;
                    uStack_240 = 0;
                    uStack_248 = 0;
                    uStack_250 = 0;
                    auStack_460[0] = param_2;
                    func_0x00010774a250();
                    func_0x00010774a328();
                    func_0x00010774a320();
                    func_0x00010774a318();
                    func_0x00010774a310();
                    func_0x00010774a308();
                    func_0x00010774a330();
                    func_0x0001002a8234((undefined1 *)((long)plVar8 + 0x40),lVar9 + 0x40);
                    func_0x00010774a300();
                    func_0x00010774a2f8();
                    func_0x00010774a2f0();
                    func_0x00010774a2e8();
                    func_0x0001072c9b9c(&uStack_210);
                    func_0x0001072c9b9c(&uStack_200);
                    *extraout_x8_00 = &PTR_DAT_1109d4148;
                    extraout_x8_00[1] = plVar8;
                    uStack_4a0 = 0;
                    uStack_498 = 0;
                    *(undefined1 *)(extraout_x8_00 + 2) = 1;
                    func_0x00010774a1c8(&uStack_4a0);
                    func_0x0001072c9b9c(&uStack_4f0);
                    func_0x0001072c9b9c(&uStack_4e0);
                    func_0x0001072c9b9c(&uStack_4d0);
                    func_0x0001072c9b9c(&uStack_4c0);
                    puVar7 = &uStack_4b0;
                  }
                  else {
                    if (bStack_2e0 == 1) {
                      param_2 = CONCAT44(uStack_2ec,uStack_2f0);
                      uStack_208 = uStack_2e8;
                      puVar11 = &uStack_2f0;
                      uStack_210 = param_2;
                    }
                    else {
                      puVar11 = (uint *)&uStack_210;
                    }
                    puVar11[0] = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    if (bStack_340 == 1) {
                      param_2 = CONCAT44(uStack_34c,uStack_350);
                      uStack_218 = uStack_348;
                      puVar11 = &uStack_350;
                      uStack_220 = param_2;
                    }
                    else {
                      puVar11 = (uint *)&uStack_220;
                    }
                    puVar11[0] = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    if (bStack_390 == 1) {
                      param_2 = CONCAT44(uStack_39c,uStack_3a0);
                      uStack_228 = uStack_398;
                      puVar11 = &uStack_3a0;
                      uStack_230 = param_2;
                    }
                    else {
                      puVar11 = (uint *)&uStack_230;
                    }
                    puVar11[0] = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    uVar2 = cStack_3e0 == '\x01';
                    if ((bool)uVar2) {
                      param_2 = CONCAT44(uStack_3ec,uStack_3f0);
                      uStack_238 = uStack_3e8;
                      puVar11 = &uStack_3f0;
                      uStack_240 = param_2;
                    }
                    else {
                      puVar11 = (uint *)&uStack_240;
                    }
                    puVar11[0] = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    if (cStack_190 == '\0') {
                      puVar11 = (uint *)&uStack_250;
                    }
                    else {
                      param_2 = CONCAT44(uStack_43c,uStack_440);
                      uStack_248 = uStack_438;
                      puVar11 = &uStack_440;
                      uStack_250 = param_2;
                    }
                    puVar11[0] = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    __Znwm(0xd8);
                    func_0x00010774a360();
                    uStack_1b8 = uStack_218;
                    uStack_1c0 = uStack_220;
                    uStack_1d8 = uStack_238;
                    uStack_1e0 = uStack_240;
                    alStack_280[0] = 0;
                    alStack_280[1] = 0;
                    uStack_1a8 = uStack_208;
                    _uStack_1b0 = uStack_210;
                    uStack_210 = 0;
                    uStack_208 = 0;
                    uStack_218 = 0;
                    uStack_220 = 0;
                    uStack_1c8 = uStack_228;
                    uStack_1d0 = uStack_230;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_238 = 0;
                    uStack_240 = 0;
                    uStack_1e8 = uStack_248;
                    uStack_1f0 = uStack_250;
                    uStack_248 = 0;
                    uStack_250 = 0;
                    auStack_460[0] = param_2;
                    func_0x00010774a250();
                    func_0x00010774a328();
                    func_0x00010774a320();
                    func_0x00010774a318();
                    func_0x00010774a310();
                    func_0x00010774a308();
                    func_0x00010774a330();
                    *extraout_x8_00 = &PTR_DAT_1109d4148;
                    extraout_x8_00[1] = plVar8;
                    uStack_1f8 = 0;
                    uStack_200 = 0;
                    *(undefined1 *)(extraout_x8_00 + 2) = 1;
                    func_0x00010774a1c8(&uStack_200);
                    func_0x00010774a300();
                    func_0x00010774a2f8();
                    func_0x00010774a2f0();
                    func_0x00010774a2e8();
                    puVar7 = &uStack_210;
                  }
                  func_0x0001072c9b9c(puVar7);
                }
                func_0x0001072c95d0(&uStack_440);
                func_0x0001072f5f4c(auStack_1a0);
              }
              func_0x0001072c95d0(&uStack_3f0);
              func_0x0001072f5f4c(auStack_188);
            }
            func_0x0001072c95d0(&uStack_3a0);
            func_0x0001072f5f4c(auStack_170);
          }
          func_0x0001072c95d0(&uStack_350);
          func_0x0001072f5f4c(auStack_110);
        }
        func_0x0001072c95d0(&uStack_2f0);
        func_0x0001072f5f4c(auStack_148);
      }
      func_0x0001072f5f6c(alStack_158);
    }
    else {
      func_0x00010756a788(auStack_148,auStack_2c0);
      func_0x00010724ef84(auStack_110,auStack_148);
      func_0x0001004c3cd0(&uStack_2f0,&UNK_10f42513c,auStack_110);
      func_0x00010048a6c8(auStack_2d8,&uStack_2f0,&UNK_10f417b93);
      func_0x00010774a274();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
      func_0x000104c2f714(auStack_148);
      func_0x00010774a2ac();
    }
    func_0x0001072c9884(auStack_2c0);
  }
  plVar3 = alStack_280;
  func_0x0001072c95d0();
code_r0x000107749688:
  func_0x00010774a220(uStack_f8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_490);
  func_0x0001072c95d0(&uStack_440);
  func_0x0001072f5f4c(auStack_1a0);
  func_0x0001072c95d0(&uStack_3f0);
  func_0x0001072f5f4c(auStack_188);
  func_0x0001072c95d0(&uStack_3a0);
  func_0x0001072f5f4c(auStack_170);
  func_0x0001072c95d0(&uStack_350);
  func_0x0001072f5f4c(auStack_110);
  func_0x0001072c95d0(&uStack_2f0);
  func_0x0001072f5f4c(auStack_148);
  func_0x0001072f5f6c(alStack_158);
  func_0x0001072c9884(auStack_2c0);
  plVar8 = alStack_280;
  func_0x0001072c95d0();
  func_0x00010774a28c();
  puStack_4f8 = &DAT_10774999c;
  lStack_510 = lVar9;
  plStack_508 = plVar3;
  ppuStack_500 = &puStack_b0;
  func_0x00010774a240();
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  uStack_518 = extraout_x8_03;
  func_0x000100060964(auStack_558,&UNK_10f4252a2);
  func_0x0001074d2254(&uStack_5a8,auStack_558);
  func_0x000104c2f714(auStack_558);
  func_0x00010774a338(plVar8[9]);
  func_0x00010774a2b8();
  func_0x0001072aad1c(&uStack_5a8,auStack_558);
  func_0x00010774a27c();
  puStack_5c8 = &UNK_10e52b660;
  uStack_5c0 = 0;
  uStack_5b8 = 0;
  uStack_5b0 = 0;
  if (plVar8[0xb] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar8[0xd] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar8[0xf] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar8[0x11] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar8[0x13] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  func_0x000104c33260(auStack_558,&puStack_5c8);
  func_0x0001075726d4(&uStack_5a8,auStack_558);
  func_0x000104c335c0(auStack_558);
  func_0x000107327958(&uStack_5e0,&uStack_5a8);
  *extraout_x8_02 = 0;
  *(undefined8 *)(extraout_x8_02 + 4) = uStack_5d8;
  *(undefined8 *)(extraout_x8_02 + 2) = uStack_5e0;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  func_0x000104c33108(&uStack_5e0);
  func_0x000104c33548(&puStack_5c8);
  func_0x000107269124(&uStack_5a8);
  func_0x00010774a220(uStack_518);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010774a2a4();
    func_0x00010774a27c();
    func_0x000104c33548(&puStack_5c8);
    do {
      func_0x000107269124(&uStack_5a8);
      func_0x00010774a28c();
      func_0x00010774a27c();
    } while( true );
  }
  return;
}



/* Entry: 107749f54; end: 10774a14b;  */

void FUN_107749f54(void)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  uStack_48 = 0x113725cd0;
  uStack_40 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar5 = puRam0000000113725cc0;
  if (puRam0000000113725cc0 == (undefined8 *)0x113725ca0) goto LAB_10774a120;
  lVar1 = puRam0000000113725cc0[1];
  lVar8 = puRam0000000113725cc0[2];
  *(long *)(lVar1 + 0x10) = lVar8;
  *(long *)(lVar8 + 8) = lVar1;
  puVar5[1] = 0xffffffffffffffff;
  func_0x00010054bf64(&uStack_48);
  uStack_58 = 0x113725bf8;
  uStack_50 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  plVar7 = (long *)*puVar5;
  func_0x000107749ea8();
  uVar4 = uRam0000000113725bd8;
  lVar1 = lRam0000000113725bd0;
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar9 = plVar7[1];
    uVar11 = uRam0000000113725bd8 - 1;
    if ((uRam0000000113725bd8 & uVar11) == 0) {
      uVar9 = uVar11 & uVar9;
    }
    else if (uRam0000000113725bd8 <= uVar9) {
      uVar12 = 0;
      if (uRam0000000113725bd8 != 0) {
        uVar12 = uVar9 / uRam0000000113725bd8;
      }
      uVar9 = uVar9 - uVar12 * uRam0000000113725bd8;
    }
    plVar6 = *(long **)(lRam0000000113725bd0 + uVar9 * 8);
    do {
      plVar10 = plVar6;
      plVar6 = (long *)*plVar10;
    } while ((long *)*plVar10 != plVar7);
    if (plVar10 == (long *)0x113725be0) {
LAB_10774a054:
      if (lVar8 == 0) {
LAB_10774a088:
        *(undefined8 *)(lRam0000000113725bd0 + uVar9 * 8) = 0;
        lVar8 = *plVar7;
        goto LAB_10774a090;
      }
      uVar12 = *(ulong *)(lVar8 + 8);
      if ((uRam0000000113725bd8 & uVar11) == 0) {
        uVar13 = uVar12 & uVar11;
      }
      else {
        uVar13 = uVar12;
        if (uRam0000000113725bd8 <= uVar12) {
          uVar13 = 0;
          if (uRam0000000113725bd8 != 0) {
            uVar13 = uVar12 / uRam0000000113725bd8;
          }
          uVar13 = uVar12 - uVar13 * uRam0000000113725bd8;
        }
      }
      if (uVar13 != uVar9) goto LAB_10774a088;
LAB_10774a098:
      if ((uVar4 & uVar11) == 0) {
        uVar12 = uVar12 & uVar11;
      }
      else if (uVar4 <= uVar12) {
        uVar11 = 0;
        if (uVar4 != 0) {
          uVar11 = uVar12 / uVar4;
        }
        uVar12 = uVar12 - uVar11 * uVar4;
      }
      if (uVar12 != uVar9) {
        *(long **)(lVar1 + uVar12 * 8) = plVar10;
        lVar8 = *plVar7;
      }
    }
    else {
      uVar12 = plVar10[1];
      if ((uRam0000000113725bd8 & uVar11) == 0) {
        uVar12 = uVar12 & uVar11;
      }
      else if (uRam0000000113725bd8 <= uVar12) {
        uVar13 = 0;
        if (uRam0000000113725bd8 != 0) {
          uVar13 = uVar12 / uRam0000000113725bd8;
        }
        uVar12 = uVar12 - uVar13 * uRam0000000113725bd8;
      }
      if (uVar12 != uVar9) goto LAB_10774a054;
LAB_10774a090:
      if (lVar8 != 0) {
        uVar12 = *(ulong *)(lVar8 + 8);
        goto LAB_10774a098;
      }
    }
    *plVar10 = lVar8;
    *plVar7 = 0;
    lRam0000000113725be8 = lRam0000000113725be8 + -1;
    uStack_30 = 0x113725be0;
    uStack_28 = 1;
    uStack_27 = 0;
    uStack_23 = 0;
    plStack_38 = plVar7;
    func_0x00010774a14c(&plStack_38);
    __ZdlPv(puVar5);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x113725bc8,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam0000000113725bc8 = lRam0000000113725bc8 + 1;
      }
    } while (cVar2 != '\0');
  }
  func_0x000104c305a0(&uStack_58);
LAB_10774a120:
  func_0x0001000df5a0(&uStack_48);
  return;
}



/* Entry: 10774a480; end: 10774a4d3;  */

void FUN_10774a480(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  func_0x00010745f964();
  uVar1 = *param_1;
  while (param_2 != param_4) {
    func_0x0001072628ec(auStack_48,uVar1,param_3);
    func_0x000107262260(&stack0xffffffffffffffd0);
  }
  return;
}



/* Entry: 10774a6c0; end: 10774a747;  */

void FUN_10774a6c0(void)

{
  undefined8 *unaff_x21;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  func_0x00010774e944();
  uStack_38 = 1;
  func_0x0001072c9f9c();
  func_0x0001072c9884(auStack_40);
  *unaff_x21 = &PTR_DAT_1109d4198;
  func_0x000107327a90(unaff_x21 + 9);
  func_0x00010726928c(unaff_x21 + 0x18);
  return;
}



/* Entry: 10774b13c; end: 10774b30b;  */

/* WARNING: Possible PIC construction at 0x00010774b1f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774b1fc) */
/* WARNING: Removing unreachable block (ram,0x00010774b258) */
/* WARNING: Removing unreachable block (ram,0x00010774b26c) */
/* WARNING: Removing unreachable block (ram,0x00010774b2a8) */
/* WARNING: Removing unreachable block (ram,0x00010774b2b8) */
/* WARNING: Removing unreachable block (ram,0x00010774b2c8) */
/* WARNING: Removing unreachable block (ram,0x00010774b2f8) */
/* WARNING: Removing unreachable block (ram,0x00010774b294) */

undefined1 * FUN_10774b13c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_150 [24];
  long lStack_138;
  undefined1 uStack_129;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [128];
  uint auStack_50 [2];
  long lStack_48;
  short sStack_3a;
  
  func_0x00010774e8bc();
  puStack_128 = &UNK_10e52b660;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  func_0x00010787075c(auStack_50,param_1 + 0x48,&uStack_129);
  if (sStack_3a == 3) {
    lVar1 = lStack_48 + 0x18;
    lVar3 = (ulong)auStack_50[0] * 0x30;
    lVar2 = (ulong)auStack_50[0] * 3;
    while (lVar2 != 0) {
      if ((*(ushort *)(lVar1 + -2) >> 0xc & 1) == 0) {
        lStack_138 = *(long *)(lVar1 + -0x10);
      }
      else {
        lStack_138 = lVar1 + -0x18;
      }
      func_0x00010774aec4(auStack_d0,lVar1);
      func_0x00010774b118(auStack_150,&puStack_128,&lStack_138,auStack_d0);
      func_0x000104c3323c(auStack_d0);
      lVar1 = lVar1 + 0x30;
      lVar3 = lVar3 + -0x30;
      lVar2 = lVar3;
    }
  }
  func_0x000100060934(auStack_108,&DAT_10f3e1a8f);
  return auStack_108;
}



/* Entry: 10774b4c0; end: 10774b4eb;  */

long FUN_10774b4c0(long param_1)

{
  func_0x000107267da8(param_1 + 0x1a0);
  func_0x000107267da8(param_1 + 8);
  return param_1;
}



/* Entry: 10774c01c; end: 10774c07b;  */

void FUN_10774c01c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = (int)(*(byte *)(param_2 + 0x10) - 1) < 0;
  if ((*(byte *)(param_2 + 0x10) == 1) && ((*(byte *)(param_3 + 0x10) & 1) != 0)) {
    func_0x00010774ea9c();
    func_0x00010774ed50();
    func_0x00010774eacc();
    func_0x00010774c534();
    func_0x00010774e8fc();
    func_0x00010774ecb8();
    if ((bool)uVar1) {
      func_0x00010774e8e0();
    }
  }
  return;
}



/* Entry: 10774c3d8; end: 10774c497;  */

void FUN_10774c3d8(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 != 0) {
    plVar3 = (long *)*param_1;
    uVar1 = (param_1[1] - *plVar3) / 0x28 + param_2;
    if ((long)uVar1 < 1) {
      uVar2 = (0x65 - uVar1) / 0x66;
      plVar3 = plVar3 + -uVar2;
      lVar4 = *plVar3 + (uVar2 * 0x66 - (0x65 - uVar1)) * 0x28 + 0xfc8;
    }
    else {
      plVar3 = plVar3 + uVar1 / 0x66;
      lVar4 = *plVar3 + (uVar1 % 0x66) * 0x28;
    }
    *param_1 = (long)plVar3;
    param_1[1] = lVar4;
  }
  return;
}



/* Entry: 10774c9d4; end: 10774ca33;  */

void FUN_10774c9d4(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = (int)(*(byte *)(param_2 + 0x10) - 1) < 0;
  if ((*(byte *)(param_2 + 0x10) == 1) && ((*(byte *)(param_3 + 0x10) & 1) != 0)) {
    func_0x00010774ea9c();
    func_0x00010774ed50();
    func_0x00010774eacc();
    func_0x00010774cbf4();
    func_0x00010774e8fc();
    func_0x00010774ecb8();
    if ((bool)uVar1) {
      func_0x00010774e8e0();
    }
  }
  return;
}



/* Entry: 10774d094; end: 10774d207;  */

/* WARNING: Possible PIC construction at 0x00010774d454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774d474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774d458) */
/* WARNING: Removing unreachable block (ram,0x00010774d478) */

double FUN_10774d094(double param_1,undefined8 ***param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 ***pppuVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  double *pdVar8;
  double extraout_x8_03;
  double extraout_x8_04;
  double extraout_x9;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  double dVar10;
  double dVar11;
  double unaff_d8;
  undefined8 **ppuStack_1e0;
  double *pdStack_1d8;
  long **pplStack_1d0;
  double dStack_1b8;
  double dStack_1b0;
  undefined1 uStack_1a8;
  double dStack_1a0;
  double dStack_198;
  undefined1 uStack_190;
  double dStack_188;
  double dStack_180;
  ulong uStack_178;
  double dStack_170;
  double dStack_168;
  undefined1 uStack_160;
  double dStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_110;
  
  func_0x00010774e8bc();
  uVar5 = 0x10 < (ulong)((long)param_2[1] - (long)*param_2);
  uVar6 = (long)param_2[1] - (long)*param_2 == 0x11;
  if ((bool)uVar5) {
    func_0x00010774eb58();
    func_0x00010774ec98();
    if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010774d0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de9452c)[extraout_x8_00] * 4 + 0x10774d0e8))();
      return param_1;
    }
  }
  func_0x00010774eb00();
  func_0x00010774e8a8(extraout_x8);
  if ((bool)uVar6) {
    return unaff_d8;
  }
  ___stack_chk_fail();
  pppuVar7 = param_2;
  func_0x00010774eaa8();
  func_0x00010774e9a0();
  dVar11 = param_1;
  func_0x00010774e944();
  func_0x00010774e8bc();
  uStack_110 = extraout_x8_01;
  func_0x00010774e914();
  func_0x00010774ee24();
  if (!(bool)uVar6) {
    dVar11 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    lStack_148 = 0;
    plStack_150 = (long *)0x0;
    func_0x00010774e954(*(undefined8 *)(unaff_x21 + 8));
    dStack_188 = 0.0;
    dStack_180 = 0.0;
    dStack_170 = 0.0;
    pppuVar7 = (undefined8 ***)&plStack_150;
    param_3 = &dStack_188;
    uStack_178 = extraout_x8_02;
    dStack_168 = extraout_x9;
    func_0x00010774ba6c();
    do {
      do {
        param_1 = dStack_158;
        if (lStack_128 == 0) goto code_r0x00010774d49c;
        pdVar8 = (double *)
                 (*(long *)(lStack_148 + (uStack_130 / 0x66) * 8) + (uStack_130 % 0x66) * 0x28);
        param_1 = *pdVar8;
        dVar10 = pdVar8[1];
        dVar3 = pdVar8[2];
        dVar2 = pdVar8[3];
        dVar4 = pdVar8[4];
        pppuVar7 = (undefined8 ***)&plStack_150;
        func_0x00010774bdd0();
        uVar6 = param_1 == dStack_158;
        dVar11 = dStack_158;
      } while (dStack_158 <= param_1);
      uVar1 = ((long)dVar3 - (long)dVar10) + 1;
      if ((0x32 < uVar1) || (0x32 < ((long)dVar4 - (long)dVar2) + 1U)) {
        if ((ulong)dVar3 < (ulong)dVar10) {
          dStack_188 = (double)((ulong)dStack_188 & 0xffffffffffffff00);
          uStack_178 = uStack_178 & 0xffffffffffffff00;
code_r0x00010774d3ac:
          uStack_160 = 0;
          dStack_170 = (double)((ulong)dStack_170 & 0xffffffffffffff00);
        }
        else {
          if (uVar1 == 2) {
            dStack_188 = dVar10;
            dStack_180 = dVar3;
            uStack_178 = CONCAT71(uStack_178._1_7_,1);
            goto code_r0x00010774d3ac;
          }
          dStack_180 = (double)((long)dVar10 + (uVar1 >> 1));
          dStack_188 = dVar10;
          uStack_160 = 1;
          uStack_178 = CONCAT71(uStack_178._1_7_,1);
          dStack_170 = dStack_180;
          dStack_168 = dVar3;
        }
        if ((ulong)dVar4 < (ulong)dVar2) {
          dStack_1b8 = (double)((ulong)dStack_1b8 & 0xffffffffffffff00);
          uStack_1a8 = 0;
code_r0x00010774d414:
          uStack_190 = 0;
          dStack_1a0 = (double)((ulong)dStack_1a0 & 0xffffffffffffff00);
        }
        else {
          uVar1 = ((long)dVar4 - (long)dVar2) + 1;
          dStack_1b8 = dVar2;
          if (uVar1 == 2) {
            uStack_1a8 = 1;
            dStack_1b0 = dVar4;
            goto code_r0x00010774d414;
          }
          dStack_1b0 = (double)((long)dVar2 + (uVar1 >> 1));
          uStack_190 = 1;
          uStack_1a8 = 1;
          dStack_1a0 = dStack_1b0;
          dStack_198 = dVar4;
        }
        ppuStack_1e0 = &plStack_150;
        pdStack_1d8 = &dStack_158;
        pppuVar7 = &ppuStack_1e0;
        param_3 = &dStack_188;
        param_4 = &dStack_1b8;
        pplStack_1d0 = (long **)param_2;
        goto code_r0x00010774d4e0;
      }
      func_0x00010774eb70(*(undefined8 *)(unaff_x21 + 8));
      uVar6 = (ulong)dVar3 >= (ulong)dVar10 && dVar3 == extraout_x8_03;
      if ((ulong)dVar3 < (ulong)dVar10 || (ulong)extraout_x8_03 <= (ulong)dVar3) {
code_r0x00010774d4b8:
        func_0x00010774eb00();
        goto code_r0x00010774d49c;
      }
      func_0x00010774eb70(*(undefined8 *)(unaff_x20 + 8));
      uVar6 = (ulong)dVar4 >= (ulong)dVar2 && dVar4 == extraout_x8_04;
      if ((ulong)dVar4 < (ulong)dVar2 || (ulong)extraout_x8_04 <= (ulong)dVar4)
      goto code_r0x00010774d4b8;
      func_0x00010774ea40();
      while (uVar6 = dVar10 == dVar3, !(bool)uVar6) {
        dVar10 = (double)((long)dVar10 + 1);
        for (lVar9 = (long)dVar4 - (long)dVar2; lVar9 != 0; lVar9 = lVar9 + -1) {
          func_0x00010774eb18();
          func_0x000107871a3c();
          if (((ulong)pppuVar7 & 1) != 0) goto code_r0x00010774d3b8;
          func_0x00010774eb18();
          func_0x00010774d544();
          func_0x00010774ea2c();
        }
      }
      uVar6 = !NAN(param_1);
      if (NAN(param_1)) goto code_r0x00010774d49c;
code_r0x00010774d3b8:
      func_0x00010774ed28();
    } while (!(bool)uVar6);
    param_1 = 0.0;
code_r0x00010774d49c:
    func_0x00010774ec44();
  }
  func_0x00010774e8a8(uStack_110);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774ec44();
  func_0x00010774e9a0();
code_r0x00010774d4e0:
  uVar6 = (int)(*(byte *)(param_3 + 2) - 1) < 0;
  if ((*(byte *)(param_3 + 2) == 1) && (((ulong)param_4[2] & 1) != 0)) {
    func_0x00010774ea9c();
    func_0x00010774cbf4(pppuVar7[3]);
    func_0x00010774eacc();
    func_0x00010774cbf4();
    func_0x00010774e8fc();
    func_0x00010774ecb8();
    if ((bool)uVar6) {
      func_0x00010774e8e0();
    }
  }
  return dVar11;
}



/* Entry: 10774dd18; end: 10774dd9b;  */

bool FUN_10774dd18(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong *unaff_x21;
  ulong uVar2;
  
  func_0x00010774e9b8();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 3) {
    uVar2 = 0xffffffffffffffff;
    while( true ) {
      uVar1 = *unaff_x21;
      uVar2 = uVar2 + 1;
      if (((long)(unaff_x21[1] - uVar1) >> 4) - 1U < uVar2) break;
      func_0x00010774ed74();
      if ((uVar1 & 1) != 0) goto LAB_10774dd80;
    }
  }
LAB_10774dd80:
  return unaff_x21 != unaff_x19;
}



/* Entry: 10774e01c; end: 10774e053;  */

long FUN_10774e01c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d4260);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10774e18c; end: 10774e1b3;  */

long FUN_10774e18c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10774e40c; end: 10774e467;  */

/* WARNING: Possible PIC construction at 0x00010774e48c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774e490) */
/* WARNING: Removing unreachable block (ram,0x00010774e494) */
/* WARNING: Removing unreachable block (ram,0x00010737d770) */
/* WARNING: Removing unreachable block (ram,0x00010737d77c) */
/* WARNING: Removing unreachable block (ram,0x00010737d7e4) */
/* WARNING: Removing unreachable block (ram,0x00010737d79c) */
/* WARNING: Removing unreachable block (ram,0x00010737d7a8) */
/* WARNING: Removing unreachable block (ram,0x00010737d7ac) */
/* WARNING: Removing unreachable block (ram,0x00010737d7b8) */
/* WARNING: Removing unreachable block (ram,0x00010737d7c4) */
/* WARNING: Removing unreachable block (ram,0x00010737d7e8) */
/* WARNING: Removing unreachable block (ram,0x00010737d7d4) */

int * FUN_10774e40c(int *param_1,long *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  if (*param_1 == 2) {
    param_1 = param_1 + 2;
    piVar4 = (int *)(*param_2 + 8);
    puVar1 = (undefined1 *)register0x00000008;
  }
  else {
    piVar5 = param_1 + 2;
    bVar2 = *param_1 == 1;
    if (!bVar2) {
      piVar4 = *(int **)(*param_2 + 8);
      func_0x00010774eb94(piVar4,*(undefined8 *)piVar5);
      if (bVar2) {
        func_0x00010774e504();
        return piVar4;
      }
      return (int *)0x0;
    }
    lVar3 = *param_2 + 8;
    puVar1 = &stack0xffffffffffffffe0;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010774ebd4();
    piVar4 = (int *)(lVar3 + 0x30);
    param_1 = piVar5 + 0xc;
    func_0x00010735c498();
    if ((int)piVar4 == 0) {
      return (int *)0x0;
    }
    func_0x00010774ec30();
    unaff_x30 = &UNK_10774e490;
  }
  if (*param_1 == *piVar4) {
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x00010774edfc();
    func_0x00010774e544();
    return piVar4;
  }
  return (int *)0x0;
}



/* Entry: 10774e684; end: 10774e69f;  */

void FUN_10774e684(void)

{
  func_0x00010774e6a0();
  return;
}



/* Entry: 10774e828; end: 10774e84b;  */

long FUN_10774e828(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  
  lVar1 = *param_1 + 8;
  func_0x00010774eb94(lVar1);
  if ((bool)in_ZR) {
    func_0x00010774e868();
    return lVar1;
  }
  return 0;
}



/* Entry: 10774f238; end: 10774f25b;  */

undefined * FUN_10774f238(uint param_1)

{
  if (param_1 < 0x12) {
    return (&PTR_DAT_1109d44c8)[param_1];
  }
  return &UNK_10f4256d6;
}



/* Entry: 10774f554; end: 10774f597;  */

void FUN_10774f554(void)

{
  func_0x00010775007c();
  func_0x000107750108();
  func_0x00010774f498();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774f838; end: 10774f877;  */

void FUN_10774f838(void)

{
  func_0x00010775007c();
  func_0x0001077500f8();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774fab8; end: 10774fafb;  */

void FUN_10774fab8(void)

{
  undefined1 auStack_28 [8];
  
  func_0x00010774fafc(auStack_28);
  func_0x000107750250();
  func_0x00010774fff4();
  func_0x00010774ff9c(auStack_28);
  return;
}



/* Entry: 10774fcc8; end: 10774fcdb;  */

void FUN_10774fcc8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774feb8; end: 10774febb;  */

void FUN_10774feb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10774ff60; end: 10774ff6f;  */

void FUN_10774ff60(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010775016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 107750034; end: 107750047;  */

void FUN_107750034(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107750480; end: 1077505ab;  */

/* WARNING: Possible PIC construction at 0x0001077504c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107750530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077504cc) */
/* WARNING: Removing unreachable block (ram,0x000107750534) */

undefined8 ***
FUN_107750480(undefined8 ***param_1,undefined8 ***param_2,undefined8 ***param_3,
             undefined8 ***param_4,undefined8 ***param_5)

{
  undefined1 uVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined1 uVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  undefined8 extraout_x8;
  undefined8 ***extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined *puVar12;
  undefined1 auStack_358 [24];
  undefined8 **ppuStack_340;
  undefined8 **ppuStack_338;
  undefined8 **ppuStack_330;
  undefined8 **ppuStack_328;
  undefined8 **ppuStack_320;
  undefined *puStack_318;
  undefined1 uStack_309;
  undefined8 *apuStack_308 [3];
  undefined8 *puStack_2f0;
  undefined8 **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined1 uStack_2a9;
  undefined8 *apuStack_2a8 [5];
  undefined8 **ppuStack_280;
  undefined8 *puStack_278;
  undefined8 **ppuStack_270;
  undefined *puStack_268;
  undefined1 uStack_259;
  undefined8 *apuStack_258 [5];
  undefined8 **ppuStack_230;
  undefined8 *puStack_228;
  undefined8 **ppuStack_220;
  undefined *puStack_218;
  undefined1 uStack_209;
  undefined8 *apuStack_208 [5];
  undefined8 **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 uStack_1b9;
  undefined8 *apuStack_1b8 [5];
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *apuStack_160 [7];
  undefined8 uStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [56];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [14];
  int iStack_40;
  undefined8 uStack_38;
  
  pppuVar9 = (undefined8 ***)auStack_100;
  pppuVar4 = param_2;
  func_0x000107750fc0();
  ppuStack_118 = param_1;
  if (*(int *)(pppuVar4 + 1) == 2) {
    param_3 = param_2 + 10;
    func_0x0001072786d8(apuStack_b0);
    pppuVar2 = (undefined8 ***)&puStack_b8;
    puVar12 = (undefined *)0x1077504cc;
    pppuVar9 = param_4;
  }
  else {
    uVar1 = *(char *)(param_3 + 0x32) == '\x01';
    uStack_38 = extraout_x8;
    if ((bool)uVar1) {
      func_0x00010756ec34();
      auStack_100[0] = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      func_0x000107753050(&puStack_b8,param_2);
      func_0x00010724b3d8(auStack_100);
      uVar1 = iStack_40 == 1;
      if ((bool)uVar1) {
        param_2 = (undefined8 ***)&puStack_b8;
        pppuVar2 = (undefined8 ***)&puStack_b8;
        func_0x0001073405dc();
        puVar12 = (undefined *)0x107750534;
        goto code_r0x0001077505ac;
      }
      *(undefined4 *)(param_1 + 2) = 0;
      pppuVar4 = (undefined8 ***)apuStack_b0;
      func_0x00010727f7f8();
    }
    else {
      *(undefined4 *)(param_1 + 2) = 0;
      pppuVar9 = param_4;
    }
    func_0x000107751034(uStack_38);
    if ((bool)uVar1) {
      return pppuVar4;
    }
    ___stack_chk_fail();
    pppuVar2 = param_2 + 1;
    func_0x00010727f7f8();
    puVar12 = &SUB_1077505ac;
    func_0x000107751024();
    param_1 = extraout_x8_00;
    ppuStack_118 = pppuVar4;
  }
code_r0x0001077505ac:
  ppuStack_120 = param_2;
  puStack_110 = &stack0xfffffffffffffff0;
  puStack_108 = puVar12;
  func_0x000107750fc0();
  uStack_128 = extraout_x8_01;
  uVar1 = *(int *)(pppuVar2 + 0xd) == 3;
  if ((bool)uVar1) {
    func_0x00010732393c();
    func_0x000104c2fe00(apuStack_160,pppuVar2);
    param_3 = (undefined8 ***)apuStack_160;
    pppuVar9 = (undefined8 ***)0x1;
    func_0x0001077509b8(&puStack_170);
    param_1[1] = (undefined8 **)puStack_168;
    *param_1 = (undefined8 **)puStack_170;
    puStack_170 = (undefined8 **)0x0;
    puStack_168 = (undefined8 **)0x0;
    *(undefined4 *)(param_1 + 2) = 2;
    func_0x0001073e0028(&puStack_170);
    pppuVar2 = (undefined8 ***)apuStack_160;
    func_0x000104c2f714();
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  func_0x000107751034(uStack_128);
  if ((bool)uVar1) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = apuStack_160;
  func_0x000104c2f714();
  func_0x000107751024();
  puStack_178 = &UNK_107750650;
  ppuStack_190 = param_2;
  ppuStack_188 = pppuVar2;
  ppuStack_180 = &puStack_110;
  func_0x000107750fc0();
  uVar11 = 0;
  if (param_3[3] != (undefined8 **)0x0) {
    uStack_1b9 = 0;
    func_0x000107750ffc(&PTR_DAT_1109d4568);
    param_3 = (undefined8 ***)apuStack_1b8;
    func_0x000107869d34();
    func_0x00010775102c();
    uVar11 = uStack_1b9;
  }
  func_0x000107750fa0(uVar11);
  if ((bool)uVar1) {
    pppuVar4 = (undefined8 ***)(ulong)(extraout_w8 & 1);
  }
  else {
    ___stack_chk_fail();
    ppuVar5 = ppuVar3;
    func_0x00010775102c();
    func_0x000107751024();
    puStack_1c8 = &UNK_1077506b8;
    ppuStack_1e0 = param_2;
    puStack_1d8 = ppuVar3;
    ppuStack_1d0 = &ppuStack_180;
    func_0x000107750fc0();
    uVar1 = *(int *)(param_3 + 2) == 1;
    if ((bool)uVar1) {
      uVar11 = 0;
    }
    else {
      uStack_209 = 0;
      func_0x000107750ffc(&PTR_DAT_1109d45e8);
      param_3 = (undefined8 ***)apuStack_208;
      func_0x000107869948();
      func_0x00010775106c();
      uVar11 = uStack_209;
    }
    func_0x000107750fa0(uVar11);
    if ((bool)uVar1) {
      pppuVar4 = (undefined8 ***)(ulong)(extraout_w8_00 & 1);
    }
    else {
      ___stack_chk_fail();
      ppuVar3 = ppuVar5;
      func_0x00010775106c();
      func_0x000107751024();
      puStack_218 = &UNK_10775072c;
      ppuStack_230 = param_2;
      puStack_228 = ppuVar5;
      ppuStack_220 = &ppuStack_1d0;
      func_0x000107750fc0();
      uVar1 = *(int *)(param_3 + 2) == 1;
      if ((bool)uVar1) {
        uVar11 = 0;
      }
      else {
        uStack_259 = 0;
        func_0x000107750ffc(&PTR_DAT_1109d4668);
        param_3 = (undefined8 ***)apuStack_258;
        func_0x000107869d34();
        func_0x00010775102c();
        uVar11 = uStack_259;
      }
      func_0x000107750fa0(uVar11);
      if ((bool)uVar1) {
        pppuVar4 = (undefined8 ***)(ulong)(extraout_w8_01 & 1);
      }
      else {
        ___stack_chk_fail();
        func_0x00010775102c();
        func_0x000107751024();
        puStack_268 = &UNK_1077507a0;
        ppuStack_280 = param_2;
        puStack_278 = ppuVar3;
        ppuStack_270 = &ppuStack_220;
        func_0x000107750fc0();
        uVar11 = 0;
        if (param_3[3] != (undefined8 **)0x0) {
          uStack_2a9 = 0;
          func_0x000107750ffc(&PTR_DAT_1109d46e8);
          param_3 = (undefined8 ***)apuStack_2a8;
          func_0x000107869c04();
          func_0x00010750b370();
          uVar11 = uStack_2a9;
        }
        func_0x000107750fa0(uVar11);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          pppuVar4 = (undefined8 ***)apuStack_2a8;
          func_0x00010750b370();
          func_0x000107751024();
          puStack_2b8 = &UNK_107750810;
          ppuStack_2c0 = &ppuStack_270;
          func_0x000107750fc0();
          uVar1 = *(int *)(pppuVar9 + 2) == 1;
          pppuVar2 = pppuVar9;
          pppuVar10 = param_5;
          if ((bool)uVar1) {
            pppuVar9 = param_2;
            uVar11 = 0;
          }
          else {
            uStack_309 = 0;
            puVar6 = (undefined8 *)0x28;
            __Znwm();
            *puVar6 = &PTR_DAT_1109d47e8;
            puVar6[1] = param_3;
            puVar6[2] = &uStack_309;
            puVar6[3] = param_5;
            puVar6[4] = pppuVar9;
            param_3 = (undefined8 ***)apuStack_308;
            puStack_2f0 = puVar6;
            func_0x000107869d34();
            func_0x00010775102c();
            uVar11 = uStack_309;
          }
          func_0x000107750fa0(uVar11);
          if ((bool)uVar1) {
            return (undefined8 ***)(ulong)(extraout_w8_03 & 1);
          }
          ___stack_chk_fail();
          pppuVar7 = pppuVar4;
          func_0x00010775102c();
          func_0x000107751024();
          puStack_318 = &UNK_1077508c0;
          pppuVar8 = pppuVar7;
          ppuStack_340 = param_3;
          ppuStack_338 = pppuVar2;
          ppuStack_330 = pppuVar9;
          ppuStack_328 = pppuVar4;
          ppuStack_320 = &ppuStack_2c0;
          while ((undefined8 ***)ppuStack_340 != pppuVar10) {
            FUN_107750910(auStack_358,pppuVar7,ppuStack_338);
            pppuVar8 = &ppuStack_340;
            func_0x000107262260(pppuVar8);
          }
          return pppuVar8;
        }
        pppuVar4 = (undefined8 ***)(ulong)(extraout_w8_02 & 1);
      }
    }
  }
  return pppuVar4;
}



/* Entry: 107750910; end: 107750933;  */

void FUN_107750910(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107750934(&uStack_18);
  return;
}



/* Entry: 107750a4c; end: 107750ac7;  */

void FUN_107750a4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  ulong extraout_x9;
  
  if (*(char *)(param_4 + 0x38) == '\x01') {
    func_0x0001077510a0();
    if ((extraout_x9 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x0001074f1964(lVar2,param_4);
      bVar1 = lVar2 != 0;
      uVar3 = *(undefined8 *)(param_1 + 8);
    }
    else {
      bVar1 = true;
      uVar3 = extraout_x8;
    }
    *(bool *)uVar3 = bVar1;
  }
  return;
}



/* Entry: 107750bec; end: 107750c0f;  */

void FUN_107750bec(void)

{
  func_0x000107750fd0();
  func_0x000107750fdc(&PTR_DAT_1109d4668);
  return;
}



/* Entry: 107750d88; end: 107750d9b;  */

undefined ** FUN_107750d88(void)

{
  return &PTR_DAT_1109d47c8;
}



/* Entry: 107750f5c; end: 107750f83;  */

void FUN_107750f5c(undefined8 param_1)

{
  func_0x00010775107c();
  func_0x000107751048(param_1,&PTR_DAT_1109d4848);
  func_0x000107750fec();
  return;
}



/* Entry: 10775147c; end: 1077514a3;  */

long FUN_10775147c(long param_1)

{
  func_0x0001077514a4(param_1 + 0x60);
  return param_1;
}



/* Entry: 107751788; end: 10775189b;  */

void FUN_107751788(ulong param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *unaff_x19;
  long unaff_x21;
  
  func_0x000107752ebc();
  if ((param_1 & 1) != 0) {
    if (*(int *)(unaff_x21 + 0x188) == 1) {
      lVar1 = unaff_x21 + 0x178;
      func_0x0001077522cc();
      func_0x000107752f04();
      if (lVar1 != 0) {
        func_0x000107268350();
        unaff_x19[0x40] = 1;
        return;
      }
    }
    else if (*(int *)(unaff_x21 + 0x188) == 0) {
      func_0x0001077522b4(unaff_x21 + 0x178);
      func_0x000107752f84();
                    /* WARNING: Could not recover jumptable at 0x0001077517d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8 + 0x18))();
      return;
    }
  }
  *unaff_x19 = 0;
  unaff_x19[0x40] = 0;
  return;
}



/* Entry: 107752094; end: 1077520bf;  */

/* WARNING: Possible PIC construction at 0x0001077520a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077520a8) */

void FUN_107752094(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    func_0x000107261ddc();
    param_1[3] = 0;
    if (uVar1 < 0x80) {
      lVar3 = param_1[2];
      lVar2 = *param_1;
      _memset(lVar2,0x80,lVar3 + 8);
      *(undefined1 *)(lVar2 + lVar3) = 0xff;
      uVar1 = param_1[2];
      lVar2 = 6;
      if (uVar1 != 7) {
        lVar2 = uVar1 - (uVar1 >> 3);
      }
      *(long *)(*param_1 + -8) = lVar2 - param_1[3];
    }
    else {
      (*(code *)&DAT_104c32e5c)(param_1);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (long)&UNK_10e52b660;
    }
    return;
  }
  return;
}



/* Entry: 1077521ec; end: 107752223;  */

void FUN_1077521ec(long param_1)

{
  func_0x0001073c4f90();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 1077523dc; end: 107752413;  */

void FUN_1077523dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w10;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    func_0x000107479e30(param_2,param_3);
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



/* Entry: 1077524f8; end: 107752527;  */

void FUN_1077524f8(void)

{
  func_0x0001077525fc();
  return;
}



/* Entry: 107752ae4; end: 107752b9b;  */

void FUN_107752ae4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar10;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_138;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  long alStack_c8 [3];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  plVar9 = param_3;
  func_0x000107752dbc();
  alStack_c8[0] = 0;
  alStack_c8[1] = 0;
  alStack_c8[2] = 0;
  uStack_38 = extraout_x8;
  for (; uVar3 = param_2 == param_3, !(bool)uVar3; param_2 = param_2 + 2) {
    func_0x0001077529d8(auStack_b0,param_2);
    func_0x000107277668(alStack_c8,auStack_b0);
    func_0x00010726af18(auStack_a8);
  }
  puVar4 = auStack_b0;
  plVar7 = alStack_c8;
  func_0x000107277aa4();
  func_0x000107752e38();
  func_0x000107752ee4();
  func_0x000107752da8(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107752ee4();
  func_0x000107752df4();
  puStack_d8 = &UNK_107752b9c;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000107752dbc();
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_138 = extraout_x8_00;
  for (; uVar3 = plVar7 == plVar9, !(bool)uVar3; plVar7 = plVar7 + 3) {
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    lVar1 = plVar7[1];
    for (lVar10 = *plVar7; lVar10 != lVar1; lVar10 = lVar10 + 0x10) {
      func_0x0001077529d8(&uStack_1b0,lVar10);
      func_0x000107277668(&uStack_238,&uStack_1b0);
      func_0x000107752edc();
    }
    func_0x000107277aa4(&uStack_250,&uStack_238);
    func_0x000107277d70(&uStack_238);
    uStack_210 = uStack_248;
    uStack_218 = uStack_250;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_1b8 = 8;
    func_0x000107277668(&uStack_268,auStack_220);
    func_0x00010726af18(&uStack_218);
    func_0x00010726b188(&uStack_250);
  }
  puVar8 = &uStack_268;
  func_0x000107277aa4(&uStack_1b0);
  *(undefined8 *)(puVar4 + 0x10) = uStack_1a8;
  *(undefined8 *)(puVar4 + 8) = uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  *(undefined4 *)(puVar4 + 0x68) = 8;
  puVar5 = &uStack_1b0;
  func_0x00010726b188();
  func_0x000107752ee4();
  func_0x000107752da8(uStack_138);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(&uStack_218);
  puVar6 = &uStack_250;
  func_0x00010726b188();
  func_0x000107752ee4();
  func_0x000107752df4();
  uVar2 = *(uint *)(puVar8 + 2);
  if (*(int *)(puVar6 + 2) != -1 || uVar2 != 0xffffffff) {
    ppuStack_280 = &puStack_e0;
    if (uVar2 == 0xffffffff) {
      puStack_278 = &UNK_107752d00;
      if (*(uint *)(puVar6 + 2) != 0xffffffff) {
        puStack_288 = puVar5;
        func_0x0001072745a8((&PTR_DAT_110995e78)[*(uint *)(puVar6 + 2)],puVar6,puVar6,puVar8);
      }
      *(undefined4 *)(puVar6 + 2) = 0xffffffff;
      return;
    }
    puStack_278 = &UNK_107752d00;
    puStack_288 = puVar6;
    (*(code *)(&PTR_DAT_1109d4868)[uVar2])(&puStack_288);
  }
  return;
}



/* Entry: 1077533f4; end: 10775348f;  */

void FUN_1077533f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107753590();
  puVar2 = (undefined8 *)0x20;
  uStack_38 = extraout_x8;
  __Znwm();
  *puVar2 = &PTR_DAT_1109d4908;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  puStack_40 = puVar2;
  (**(code **)(*param_1 + 0x10))(param_1,auStack_58);
  puVar3 = auStack_58;
  func_0x00010745df78(puVar3);
  func_0x00010775357c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010745df78(auStack_58);
  __Unwind_Resume(puVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107753494);
  (*pcVar1)();
}



/* Entry: 107753830; end: 1077538cb;  */

void FUN_107753830(long param_1,undefined8 param_2)

{
  long lStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  lStack_60 = param_1 + 8;
  uStack_58 = 1;
  func_0x00010724e404();
  func_0x000107753c44(&uStack_50,param_1 + 0xb0);
  func_0x00010724e49c(&lStack_60);
  func_0x000107753c18(uStack_40,0,param_2);
  func_0x0001072a9040(&uStack_50);
  return;
}



/* Entry: 107753b90; end: 107753c17;  */

void FUN_107753b90(void)

{
  undefined1 auStack_b8 [136];
  
  FUN_1077541d8(0x86);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8);
  func_0x000107754264();
  func_0x000107754294();
  func_0x000107754234();
  func_0x000107754278();
  func_0x000107754300();
  func_0x00010743fa44();
  func_0x0001077542a4();
  func_0x0001077542bc();
  func_0x0001077542ac();
  return;
}



/* Entry: 1077541d8; end: 107754313;  */

void FUN_1077541d8(void)

{
  return;
}



/* Entry: 107754e20; end: 107754e2b;  */

bool FUN_107754e20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107755060(lVar1);
  return lVar1 != 0;
}



/* Entry: 107754f20; end: 107755007;  */

undefined8 * FUN_107754f20(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

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
  
  func_0x0001072c9ff4(auStack_40,*param_2 + 0x10);
  uStack_50 = *(undefined4 *)(*param_2 + 0x20);
  uStack_4c = *(undefined2 *)(*param_2 + 0x24);
  uStack_58 = *(undefined4 *)(*param_4 + 0x20);
  uStack_54 = *(undefined2 *)(*param_4 + 0x24);
  puVar1 = &uStack_50;
  func_0x0001075457c8(puVar1,&uStack_58);
  uStack_48 = SUB84(puVar1,0);
  uStack_44 = (undefined2)((ulong)puVar1 >> 0x20);
  func_0x0001072c9f9c(param_1,0x1d,auStack_40,&uStack_48);
  func_0x0001072c9884(auStack_40);
  *param_1 = &PTR_DAT_1109d4988;
  lVar2 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000104c2fe00(param_1 + 0xb,param_3);
  lVar2 = *param_4;
  param_1[0x13] = param_4[1];
  param_1[0x12] = lVar2;
  *param_4 = 0;
  param_4[1] = 0;
  return param_1;
}



/* Entry: 10775526c; end: 107755337;  */

void FUN_10775526c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
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



/* Entry: 107755e70; end: 107755e73;  */

undefined8 * FUN_107755e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4a60;
  func_0x0001072c9b9c(param_1 + 0x13);
  func_0x00010724b3d8(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107755fa0; end: 1077560b7;  */

undefined8 * FUN_107755fa0(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  lVar2 = *param_2;
  switch(*(undefined4 *)(lVar2 + 0x18)) {
  default:
    uStack_38 = 6;
    break;
  case 7:
    func_0x0001072c9ff4(auStack_40,*(undefined8 *)(lVar2 + 0x10));
    lVar2 = *param_2;
  }
  uStack_50 = *(undefined4 *)(lVar2 + 0x20);
  uStack_4c = *(undefined2 *)(lVar2 + 0x24);
  uStack_58 = *(undefined4 *)(*param_4 + 0x20);
  uStack_54 = *(undefined2 *)(*param_4 + 0x24);
  puVar1 = &uStack_50;
  func_0x0001075457c8(puVar1,&uStack_58);
  uStack_48 = SUB84(puVar1,0);
  uStack_44 = (undefined2)((ulong)puVar1 >> 0x20);
  func_0x0001072c9f9c(param_1,0x1e,auStack_40,&uStack_48);
  func_0x0001072c9884(auStack_40);
  *param_1 = &PTR_FUN_1109d4a60;
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



/* Entry: 1077563ec; end: 107756697;  */

/* WARNING: Possible PIC construction at 0x0001077566b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077566b8) */

long * FUN_1077563ec(long param_1,long param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lStack_218;
  char acStack_210 [112];
  int iStack_1a0;
  char acStack_198 [136];
  char acStack_110 [96];
  int iStack_b0;
  long alStack_a8 [7];
  undefined8 uStack_70;
  
  lVar9 = param_2;
  pcVar7 = param_3;
  func_0x0001077570b8();
  uStack_70 = extraout_x8;
  func_0x000107753050(&lStack_218,*(undefined8 *)(lVar9 + 0x48));
  uVar4 = iStack_1a0 == 1;
  if (!(bool)uVar4) {
    plVar5 = (long *)(param_1 + 8);
    pcVar7 = acStack_210;
    func_0x00010756c040();
    goto LAB_107756500;
  }
  plVar5 = &lStack_218;
  func_0x0001073405dc();
  iVar2 = (int)plVar5[0xd];
  if (iVar2 == 0) {
LAB_1077564f4:
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    if (iVar2 != 1) {
      uVar4 = iVar2 == 2;
      if (((((!(bool)uVar4) && (uVar4 = iVar2 == 3, !(bool)uVar4)) &&
           (uVar4 = iVar2 == 4, !(bool)uVar4)) &&
          ((uVar4 = iVar2 == 5, !(bool)uVar4 && (uVar4 = iVar2 == 6, !(bool)uVar4)))) &&
         ((uVar4 = iVar2 == 7, !(bool)uVar4 &&
          ((uVar4 = 0, iVar2 == 8 &&
           (uVar4 = *(long *)plVar5[1] == ((long *)plVar5[1])[1], !(bool)uVar4)))))) {
        func_0x0001072ba99c(param_3 + 0x108);
        func_0x000104c2f64c(alStack_a8);
        if (*(char *)(param_2 + 0x90) == '\x01') {
          lVar9 = param_2 + 0x58;
          func_0x00010725ffc4(lVar9);
          func_0x000104c2fe00(acStack_198,lVar9);
        }
        else {
          func_0x000100060964(acStack_198,&DAT_10f2f5ad9);
        }
        func_0x000104c2f1f0(alStack_a8,acStack_198);
        pcVar7 = acStack_198;
        func_0x000104c2f714();
        func_0x0001077570ac();
        pcVar8 = acStack_110;
        pcVar7 = pcVar7 + 8;
        func_0x0001072786d8(pcVar8);
        uVar10 = 0;
        lVar9 = 8;
        while( true ) {
          lVar1 = *(long *)plVar5[1];
          uVar3 = (((long *)plVar5[1])[1] - lVar1) / 0x70;
          uVar4 = uVar10 == uVar3;
          if (uVar3 <= uVar10) break;
          func_0x0001077570ac();
          func_0x0001072955a4(pcVar8 + 8,lVar1 + lVar9);
          pcVar7 = param_3;
          func_0x000107753050(acStack_198,*(undefined8 *)(param_2 + 0x98),param_3,param_4);
          pcVar8 = acStack_198;
          func_0x0001073405dc();
          func_0x00010756e584();
          uVar4 = *pcVar8 == '\x01';
          if ((bool)uVar4) {
            func_0x000107757130();
            if (iStack_b0 != 0) {
              func_0x0001077570ac();
              func_0x0001077570dc();
            }
            *(double *)(param_1 + 0x10) = (double)uVar10;
            *(undefined4 *)(param_1 + 0x70) = 2;
            *(undefined4 *)(param_1 + 0x78) = 1;
            func_0x0001077570c8();
            goto LAB_107756630;
          }
          func_0x0001077570c8();
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x70;
        }
        func_0x000107757130();
        if (iStack_b0 != 0) {
          func_0x0001077570ac();
          func_0x0001077570dc();
        }
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 1;
LAB_107756630:
        func_0x000107757124();
        plVar5 = alStack_a8;
        func_0x000104c2f714();
        goto LAB_107756500;
      }
      goto LAB_1077564f4;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x78) = 1;
LAB_107756500:
  func_0x000107757178();
  func_0x000107757098(uStack_70);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = alStack_a8;
  func_0x000104c2f714();
  func_0x000107757178();
  func_0x0001077570d4();
  plVar5 = *(long **)(pcVar7 + 0x18);
  if (plVar5 == (long *)0x0) {
    func_0x000104bfeb48(0,plVar6[9]);
    plVar6 = (long *)plVar5[3];
    if (plVar6 == plVar5) {
      lVar9 = 0x20;
    }
    else {
      if (plVar6 == (long *)0x0) {
        return plVar5;
      }
      lVar9 = 0x28;
    }
    (**(code **)(*plVar6 + lVar9))();
    return plVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x30))();
  return plVar5;
}



/* Entry: 107756e80; end: 107756ef3;  */

long * FUN_107756e80(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 8) == 0x1f) {
    plVar1 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar1 != 0) {
      lVar2 = param_1 + 0x58;
      func_0x000107755f54(lVar2,param_2 + 0x58);
      if ((int)lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x000107756ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x98));
        return plVar1;
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 10775706c; end: 107757097;  */

long FUN_10775706c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}


