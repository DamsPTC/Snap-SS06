/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b946588; end: 10b9465cb;  */

void FUN_10b946588(long *param_1)

{
  long *unaff_x20;
  long lVar1;
  
  func_0x00010b94842c();
  lVar1 = *param_1;
  __ZNSt3__15mutex4lockEv(lVar1 + 0x10);
  FUN_10b948114(*unaff_x20 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x10);
  return;
}



/* Entry: 10b9465cc; end: 10b94675f;  */

void FUN_10b9465cc(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    lStack_28 = 0;
    func_0x00010527846c(param_1 + 0x218,&lStack_28);
  }
  else {
    func_0x000105273668(&lStack_28,param_1 + 0x218);
    if ((lStack_28 == 0) || (*(long *)(lStack_28 + 0x18) != *param_2)) {
      func_0x00010b948590();
      if (((*(byte *)(param_1 + 0x238) & 1) == 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)
         ) {
        func_0x000107c28148();
        if ((*(byte *)(param_1 + 0x238) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x238) = 1;
        }
        *(long *)(param_1 + 0x230) = lVar1;
      }
      func_0x00010b948448();
      func_0x00010b946694(&uStack_30,param_2);
      func_0x00010527846c(param_1 + 0x218,&uStack_30);
      func_0x000105275bf4(uStack_30);
      func_0x00010b9466d8(param_1);
    }
  }
  func_0x000105275bf4(lStack_28);
  return;
}



/* Entry: 10b946760; end: 10b9468f7;  */

void FUN_10b946760(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined *unaff_x21;
  long unaff_x22;
  undefined8 uVar8;
  undefined **unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar4 = param_4;
    puVar3 = param_3;
    *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x128) = param_2;
    param_3 = puVar3;
    param_4 = uVar4;
    func_0x00010b94836c(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8;
    func_0x00010b946160((undefined1 *)((long)register0x00000008 + -0xe8));
    plVar5 = *(long **)((long)register0x00000008 + -0xe8);
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)((long)register0x00000008 + -0xe0);
    unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x120);
    unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xa0);
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xd0);
    unaff_x23 = &PTR_DAT_110a21c28;
    unaff_x21 = &UNK_1053a6a3c;
    while (uVar1 = plVar5 == *(long **)((long)register0x00000008 + -0x138), !(bool)uVar1) {
      *(long **)((long)register0x00000008 + -0x130) = plVar5;
      func_0x00010b8d7be0((undefined1 *)((long)register0x00000008 + -0x100),*plVar5 + 0x80);
      unaff_x28 = *(undefined8 **)((long)register0x00000008 + -0xf8);
      for (unaff_x27 = *(undefined8 **)((long)register0x00000008 + -0x100); unaff_x27 != unaff_x28;
          unaff_x27 = unaff_x27 + 1) {
        uVar8 = *unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar8;
        if ((int)uVar4 == 0) {
          uVar6 = 0;
          uVar7 = uVar8;
        }
        else {
          FUN_10b98b344((undefined1 *)((long)register0x00000008 + -0x118),
                        *(undefined8 *)((long)register0x00000008 + -0x128));
          uVar6 = *(undefined8 *)((long)register0x00000008 + -0x118);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x120);
        }
        *(char *)((long)register0x00000008 + -0x108) = (char)uVar4;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x10b947998;
        *(undefined ***)((long)register0x00000008 + -0x98) = &PTR_FUN_110d78438;
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x88) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x110) = puVar3;
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x110);
        *(undefined1 *)((long)register0x00000008 + -0x78) =
             *(undefined1 *)((long)register0x00000008 + -0x108);
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined **)((long)register0x00000008 + -0xd0) = &UNK_1053a6a3c;
        *(undefined ***)((long)register0x00000008 + -200) = &PTR_DAT_110a21c28;
        param_2 = (undefined1 *)((long)register0x00000008 + -0xa0);
        param_3 = (undefined1 *)((long)register0x00000008 + -0xd0);
        FUN_10b8d37cc(uVar8);
        func_0x00010b9485f4(*(undefined8 *)((long)register0x00000008 + -200));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))
                  ((undefined1 *)((long)register0x00000008 + -0x98));
        func_0x00010b8a2000(*(undefined8 *)((long)register0x00000008 + -0x118));
      }
      unaff_x22 = *(long *)((long)register0x00000008 + -0x100);
      if (unaff_x22 != 0) {
        lVar2 = *(long *)((long)register0x00000008 + -0xf8);
        while (lVar2 != unaff_x22) {
          lVar2 = lVar2 + -8;
          func_0x0001081002dc();
        }
        *(long *)((long)register0x00000008 + -0xf8) = unaff_x22;
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x100));
      }
      plVar5 = (long *)(*(long *)((long)register0x00000008 + -0x130) + 8);
    }
    param_1 = (undefined1 *)((long)register0x00000008 + -0xe8);
    func_0x0001080d83b0();
    func_0x00010b94834c(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)uVar1) break;
    unaff_x30 = FUN_10b9468f8;
    ___stack_chk_fail();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    unaff_x19 = uVar4;
    unaff_x20 = puVar3;
  }
  return;
}



/* Entry: 10b9468f8; end: 10b9468ff;  */

void FUN_10b9468f8(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined *unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined **unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar4 = param_4;
    puVar3 = param_3;
    *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x128) = param_2;
    param_3 = puVar3;
    param_4 = uVar4;
    func_0x00010b94836c(param_1 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8;
    func_0x00010b946160((undefined1 *)((long)register0x00000008 + -0xe8));
    plVar5 = *(long **)((long)register0x00000008 + -0xe8);
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)((long)register0x00000008 + -0xe0);
    unaff_x25 = (undefined1 *)((long)register0x00000008 + -0x120);
    unaff_x26 = (undefined1 *)((long)register0x00000008 + -0xa0);
    unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xd0);
    unaff_x23 = &PTR_DAT_110a21c28;
    unaff_x21 = &UNK_1053a6a3c;
    while (uVar1 = plVar5 == *(long **)((long)register0x00000008 + -0x138), !(bool)uVar1) {
      *(long **)((long)register0x00000008 + -0x130) = plVar5;
      func_0x00010b8d7be0((undefined1 *)((long)register0x00000008 + -0x100),*plVar5 + 0x80);
      unaff_x28 = *(undefined8 **)((long)register0x00000008 + -0xf8);
      for (unaff_x27 = *(undefined8 **)((long)register0x00000008 + -0x100); unaff_x27 != unaff_x28;
          unaff_x27 = unaff_x27 + 1) {
        uVar8 = *unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar8;
        if ((int)uVar4 == 0) {
          uVar6 = 0;
          uVar7 = uVar8;
        }
        else {
          FUN_10b98b344((undefined1 *)((long)register0x00000008 + -0x118),
                        *(undefined8 *)((long)register0x00000008 + -0x128));
          uVar6 = *(undefined8 *)((long)register0x00000008 + -0x118);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x120);
        }
        *(char *)((long)register0x00000008 + -0x108) = (char)uVar4;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x10b947998;
        *(undefined ***)((long)register0x00000008 + -0x98) = &PTR_FUN_110d78438;
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x88) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined1 **)((long)register0x00000008 + -0x110) = puVar3;
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x110);
        *(undefined1 *)((long)register0x00000008 + -0x78) =
             *(undefined1 *)((long)register0x00000008 + -0x108);
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined **)((long)register0x00000008 + -0xd0) = &UNK_1053a6a3c;
        *(undefined ***)((long)register0x00000008 + -200) = &PTR_DAT_110a21c28;
        param_2 = (undefined1 *)((long)register0x00000008 + -0xa0);
        param_3 = (undefined1 *)((long)register0x00000008 + -0xd0);
        FUN_10b8d37cc(uVar8);
        func_0x00010b9485f4(*(undefined8 *)((long)register0x00000008 + -200));
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))
                  ((undefined1 *)((long)register0x00000008 + -0x98));
        func_0x00010b8a2000(*(undefined8 *)((long)register0x00000008 + -0x118));
      }
      unaff_x22 = *(long *)((long)register0x00000008 + -0x100);
      if (unaff_x22 != 0) {
        lVar2 = *(long *)((long)register0x00000008 + -0xf8);
        while (lVar2 != unaff_x22) {
          lVar2 = lVar2 + -8;
          func_0x0001081002dc();
        }
        *(long *)((long)register0x00000008 + -0xf8) = unaff_x22;
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x100));
      }
      plVar5 = (long *)(*(long *)((long)register0x00000008 + -0x130) + 8);
    }
    param_1 = (undefined1 *)((long)register0x00000008 + -0xe8);
    func_0x0001080d83b0();
    func_0x00010b94834c(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)uVar1) break;
    unaff_x30 = FUN_10b9468f8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    unaff_x19 = uVar4;
    unaff_x20 = puVar3;
  }
  return;
}



/* Entry: 10b946900; end: 10b94693f;  */

void FUN_10b946900(void)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uStack_30;
  long *plStack_28;
  
  func_0x00010b94842c();
  func_0x00010b948438();
  func_0x00010b8c1ca8(unaff_x20 + 0x228);
  func_0x00010b8e1e54(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x00010b948588();
  plStack_28 = (long *)0x0;
  func_0x00010b948438();
  if ((((*(byte *)(unaff_x20 + 0x240) & 1) == 0) && (*(char *)(unaff_x20 + 0x238) == '\x01')) &&
     (*(long *)(unaff_x20 + 0x228) != 0)) {
    *(undefined1 *)(unaff_x20 + 0x240) = 1;
    func_0x00010b8c1ca8(&plStack_28,unaff_x20 + 0x228);
    uStack_30 = *(undefined8 *)(unaff_x20 + 0x230);
    func_0x00010b948448();
    (**(code **)(*plStack_28 + 0xb8))(plStack_28,&uStack_30);
    plVar1 = plStack_28;
  }
  else {
    func_0x00010b948448();
    plVar1 = (long *)0x0;
  }
  func_0x000104bd474c(plVar1);
  return;
}



/* Entry: 10b946940; end: 10b946b33;  */

void FUN_10b946940(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  int extraout_w10;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long alStack_78 [3];
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puStack_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  lStack_60 = 0;
  if (*param_2 != 0) {
    lVar4 = 0x20;
    __Znwm();
    FUN_10b94cffc();
    alStack_78[0] = lVar4;
    FUN_10b8ebae4(&lStack_60,alStack_78);
    func_0x00010b8fb1f8(alStack_78[0]);
  }
  func_0x00010b948590();
  func_0x00010b93d964(param_1 + 0x220,&lStack_60);
  func_0x00010b9483e8();
  func_0x00010b947188(&puStack_58,alStack_78);
  func_0x00010b948440();
  func_0x00010b948448();
  func_0x00010b8e1e14(alStack_78,*(undefined8 *)(param_1 + 0x260));
  lVar4 = alStack_78[0];
  if (alStack_78[0] == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = alStack_78[0];
    ___dynamic_cast(alStack_78[0],&PTR_DAT_110d78600,&PTR_DAT_110d785e8,0);
    if (lVar7 != 0) {
      do {
        func_0x00010b948484();
        lVar4 = alStack_78[0];
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b8e2b74(lVar4);
  if (lVar7 != 0) {
    if (lStack_60 == 0) {
      uVar3 = 0;
    }
    else {
      lVar4 = lStack_60;
      FUN_10b94d2b4();
      uVar3 = (undefined1)lVar4;
    }
    *(undefined1 *)(lVar7 + 0x20) = uVar3;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  if (lStack_60 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lStack_60;
    func_0x00010b94d0cc();
  }
  func_0x00010b8e1e7c(uVar8,lVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  if (lStack_60 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lStack_60;
    func_0x00010b94d6c8();
  }
  uVar3 = 1;
  func_0x00010b95a18c(uVar8,1,lVar4);
  if (lStack_60 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lStack_60;
    func_0x00010b94d2c0();
    if (lStack_60 != 0) {
      lVar5 = lStack_60;
      func_0x00010b94d450();
      uVar3 = (undefined1)lVar5;
    }
  }
  plVar1 = *(long **)(param_1 + 0x1b0);
  for (plVar9 = *(long **)(param_1 + 0x1a8); puVar2 = puStack_50, puVar6 = puStack_58,
      plVar9 != plVar1; plVar9 = plVar9 + 1) {
    (**(code **)(**(long **)(*plVar9 + 0x10) + 0x80))(*(long **)(*plVar9 + 0x10),lVar4);
    *(undefined1 *)(*plVar9 + 0x131) = uVar3;
  }
  for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    FUN_10b942978(*puVar6,&lStack_60);
  }
  FUN_10b947e8c(lVar7);
  func_0x00010b8fb1f8(lStack_60);
  func_0x0001080d83b0(&puStack_58);
  return;
}



/* Entry: 10b946b34; end: 10b946c2b;  */

undefined8 FUN_10b946b34(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b94842c();
  func_0x00010b948438();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xd8) = unaff_x19;
  func_0x00010b948588();
  return uVar1;
}



/* Entry: 10b946c2c; end: 10b946c73;  */

undefined8 * FUN_10b946c2c(undefined8 *param_1,long *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b9484dc();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10b947b28();
  }
  else {
    uVar2 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b948530();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar1 = param_1 + 1;
    *param_1 = uVar2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10b946c74; end: 10b946cdb;  */

undefined1  [16] FUN_10b946c74(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long *plStack_48;
  long *plStack_40;
  
  func_0x00010b946160(&plStack_48);
  lVar2 = 0;
  lVar3 = 0;
  for (plVar4 = plStack_48; plVar4 != plStack_40; plVar4 = plVar4 + 1) {
    lVar1 = *(long *)(*plVar4 + 0x148);
    func_0x00010b8f1d94(lVar1);
    lVar3 = lVar1 + lVar3;
    lVar2 = param_2 + lVar2;
  }
  func_0x00010b948440();
  auVar5._8_8_ = lVar2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Entry: 10b946cdc; end: 10b946e43;  */

long ** FUN_10b946cdc(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long **pplVar7;
  undefined8 extraout_x8;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_58;
  
  func_0x00010b94836c();
  uStack_58 = extraout_x8;
  func_0x00010b946160(&plStack_a0);
  plVar3 = plStack_98;
  plVar8 = plStack_a0;
  uVar4 = plStack_a0 == plStack_98;
  if ((bool)uVar4) {
    puVar5 = (undefined8 *)0x0;
    (*(code *)*param_2)(0,0,param_2);
  }
  else {
    puVar5 = (undefined8 *)0x60;
    __Znwm();
    plVar9 = puVar5 + 1;
    *plVar9 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_SUB_110d786c8;
    puVar10 = puVar5 + 3;
    puVar5[4] = 0;
    *puVar10 = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[10] = 0;
    puVar5[9] = 0;
    puVar5[6] = 0;
    puVar5[5] = 0;
    puVar5[0xb] = 0;
    puVar5[6] = FUN_10b948250;
    puVar5[7] = &PTR_DAT_110a21c28;
    puVar5[5] = (long)plVar3 - (long)plVar8 >> 3;
    puStack_b0 = puVar10;
    puStack_a8 = puVar5;
    FUN_10b946e44();
    for (plVar8 = plStack_a0; uVar4 = plVar8 == plStack_98, !(bool)uVar4; plVar8 = plVar8 + 1) {
      uVar6 = *(undefined8 *)(*plVar8 + 0x148);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uStack_88 = 0x10b948260;
      ppuStack_80 = &PTR_DAT_110d78708;
      uStack_c0 = 0;
      uStack_b8 = 0;
      param_2 = &uStack_88;
      puStack_78 = puVar10;
      puStack_70 = puVar5;
      FUN_10b8f1e2c(uVar6);
      func_0x00010b9485f4(ppuStack_80);
      func_0x00010b946e6c(&uStack_c0);
    }
    func_0x00010b946e6c(&puStack_b0);
    puVar5 = param_2;
  }
  pplVar7 = &plStack_a0;
  func_0x0001080d83b0();
  func_0x00010b94834c(uStack_58);
  if ((bool)uVar4) {
    return pplVar7;
  }
  ___stack_chk_fail();
  *pplVar7 = (long *)*puVar5;
  func_0x0001080f3438(pplVar7 + 1,puVar5 + 1);
  return pplVar7;
}



/* Entry: 10b946e44; end: 10b946e93;  */

undefined8 * FUN_10b946e44(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001080f3438(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10b946e94; end: 10b946f2f;  */

void FUN_10b946e94(long param_1,code *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  long alStack_40 [2];
  
  alStack_40[0] = 0;
  alStack_40[1] = 0;
  lStack_48 = 0;
  func_0x00010b948438();
  FUN_10b946f30(alStack_40,param_1 + 0x20);
  func_0x00010b8c1ca8(&lStack_48,param_1 + 0x228);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x140);
  if ((lStack_48 != 0) && (alStack_40[0] != 0)) {
    plVar1 = (long *)(lStack_48 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(*plVar1 + ((ulong)param_2 & 0xffffffff));
    }
    lVar2 = alStack_40[0];
    func_0x000107c28148();
    lStack_50 = lVar2;
    (*param_2)(plVar1,&lStack_50);
  }
  func_0x000104bd474c(lStack_48);
  FUN_10b947ca0(alStack_40);
  return;
}



/* Entry: 10b946f30; end: 10b946f67;  */

void FUN_10b946f30(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b9485b8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b948464();
  FUN_10b947ca0();
  return;
}



/* Entry: 10b946f68; end: 10b946f7f;  */

void FUN_10b946f68(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lStack_50;
  long *plStack_48;
  long alStack_40 [2];
  
  alStack_40[0] = 0;
  alStack_40[1] = 0;
  plStack_48 = (long *)0x0;
  func_0x00010b948438();
  FUN_10b946f30(alStack_40,param_1 + 0x20);
  func_0x00010b8c1ca8(&plStack_48,param_1 + 0x228);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x140);
  plVar1 = plStack_48;
  if ((plStack_48 != (long *)0x0) && (alStack_40[0] != 0)) {
    pcVar3 = *(code **)(*plStack_48 + 0x88);
    lVar2 = alStack_40[0];
    func_0x000107c28148();
    lStack_50 = lVar2;
    (*pcVar3)(plVar1,&lStack_50);
  }
  func_0x000104bd474c(plStack_48);
  FUN_10b947ca0(alStack_40);
  return;
}



/* Entry: 10b946f80; end: 10b946fd3;  */

void FUN_10b946f80(void)

{
  long unaff_x19;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  func_0x00010b9483f4();
  func_0x0001089af5ac(unaff_x19 + 0x248);
  func_0x00010b9483e8();
  for (; puStack_48 != puStack_40; puStack_48 = puStack_48 + 1) {
    FUN_10b942a00(*puStack_48);
  }
  func_0x00010b948440();
  func_0x00010b948448();
  return;
}



/* Entry: 10b946fd4; end: 10b947063;  */

undefined8 FUN_10b946fd4(void)

{
  int iVar1;
  
  if ((bRam00000001137fd1d8 & 1) == 0) {
    iVar1 = 0x137fd1d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd1d0,&UNK_10f7ce6ee);
      ___cxa_guard_release(0x1137fd1d8);
    }
  }
  return 0x1137fd1d0;
}



/* Entry: 10b947064; end: 10b94706b;  */

void FUN_10b947064(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b94842c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000104bd564c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b94706c; end: 10b947107;  */

void FUN_10b94706c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b94842c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000104bd564c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b947108; end: 10b94710f;  */

void FUN_10b947108(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b94842c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001080d5cb8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b947110; end: 10b947223;  */

void FUN_10b947110(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b94842c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001080d5cb8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b947224; end: 10b947263;  */

void FUN_10b947224(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar2 = param_2[1];
    uVar3 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x00010b94863c();
        puVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10b947264; end: 10b9472a3;  */

ulong FUN_10b947264(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  func_0x000108101490();
  func_0x00010b9484cc();
  while (unaff_x21 != unaff_x20) {
    func_0x00010b948524();
    FUN_10b9472e0();
    func_0x00010b9485a8();
  }
  return unaff_x19;
}



/* Entry: 10b9472a4; end: 10b9472df;  */

void FUN_10b9472a4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b9484cc();
  while (unaff_x21 != unaff_x20) {
    func_0x00010b948524();
    FUN_10b9472e0();
    func_0x00010b9485a8();
  }
  return;
}



/* Entry: 10b9472e0; end: 10b947317;  */

void FUN_10b9472e0(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b9485b8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b948464();
  func_0x0001080d5cb8();
  return;
}



/* Entry: 10b947318; end: 10b947373;  */

void FUN_10b947318(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar5 = *param_2;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar4 = lVar5;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4[1] = lVar5;
    plVar4 = plVar4 + 2;
  }
  *(long **)(param_1 + 8) = plVar4;
  return;
}



/* Entry: 10b947374; end: 10b9473bb;  */

void FUN_10b947374(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b9484cc();
  while (unaff_x21 != unaff_x20) {
    func_0x00010b948524();
    func_0x000107c31068();
    func_0x000107c31068(param_3 + 8,unaff_x21 + 8);
    func_0x00010b9485a8();
  }
  return;
}



/* Entry: 10b9473bc; end: 10b9473f3;  */

void FUN_10b9473bc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar5 = *param_2;
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
    *plVar4 = lVar5;
    plVar4 = plVar4 + 1;
  }
  *(long **)(param_1 + 8) = plVar4;
  return;
}



/* Entry: 10b9473f4; end: 10b94741b;  */

long * FUN_10b9473f4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  undefined1 in_CY;
  long *extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long *extraout_x9;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  if (param_2 >> 0x3d != 0) {
    FUN_10b947478();
    func_0x00010b9484cc();
    for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
      if (unaff_x19 != unaff_x21) {
        lVar2 = 0;
        if (*unaff_x21 != 0) {
          do {
            func_0x00010b948530();
            lVar2 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        *unaff_x19 = lVar2;
        func_0x000104bd5670();
      }
      unaff_x19 = unaff_x19 + 1;
    }
    return unaff_x19;
  }
  func_0x00010b94868c();
  plVar1 = extraout_x9;
  if ((bool)in_CY) {
    plVar1 = extraout_x8;
  }
  return plVar1;
}



/* Entry: 10b94741c; end: 10b947477;  */

long * FUN_10b94741c(void)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  func_0x00010b9484cc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    if (unaff_x19 != unaff_x21) {
      lVar1 = 0;
      if (*unaff_x21 != 0) {
        do {
          func_0x00010b948530();
          lVar1 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      *unaff_x19 = lVar1;
      func_0x000104bd5670();
    }
    unaff_x19 = unaff_x19 + 1;
  }
  return unaff_x19;
}



/* Entry: 10b947478; end: 10b947483;  */

void FUN_10b947478(void)

{
  _abort();
  FUN_10b9474a4();
  return;
}



/* Entry: 10b947484; end: 10b9474a3;  */

void FUN_10b947484(void)

{
  FUN_10b9474a4();
  return;
}



/* Entry: 10b9474a4; end: 10b9474bb;  */

void FUN_10b9474a4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    func_0x00010b9484b8();
    lVar4 = (extraout_x8 >> 3) + 1;
    FUN_10b947530();
    func_0x00010b948660();
    if (lVar4 != 0) {
      FUN_10b947588();
    }
    func_0x00010b948540();
    if (extraout_x9 != 0) {
      plVar1 = (long *)(extraout_x9 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *extraout_x8_00 = extraout_x9;
    func_0x00010b9484a0(extraout_x8_00 + 1);
    FUN_10b947558();
    func_0x00010b9485c8();
    func_0x00010b947610();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 10b9474bc; end: 10b94752f;  */

void FUN_10b9474bc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  
  func_0x00010b9484b8();
  lVar4 = (extraout_x8 >> 3) + 1;
  FUN_10b947530();
  func_0x00010b948660();
  if (lVar4 != 0) {
    FUN_10b947588();
  }
  func_0x00010b948540();
  if (extraout_x9 != 0) {
    plVar1 = (long *)(extraout_x9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8_00 = extraout_x9;
  func_0x00010b9484a0(extraout_x8_00 + 1);
  FUN_10b947558();
  func_0x00010b9485c8();
  func_0x00010b947610();
  return;
}



/* Entry: 10b947530; end: 10b947557;  */

undefined8 FUN_10b947530(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010b94868c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10b94757c();
  func_0x00010b94837c();
  FUN_10b9475c0();
  func_0x00010b948308();
  return param_1;
}



/* Entry: 10b947558; end: 10b94757b;  */

void FUN_10b947558(void)

{
  func_0x00010b94837c();
  FUN_10b9475c0();
  func_0x00010b948308();
  return;
}



/* Entry: 10b94757c; end: 10b947587;  */

void FUN_10b94757c(void)

{
  _abort();
  FUN_10b9475a8();
  return;
}



/* Entry: 10b947588; end: 10b9475a7;  */

void FUN_10b947588(void)

{
  FUN_10b9475a8();
  return;
}



/* Entry: 10b9475a8; end: 10b9475bf;  */

void FUN_10b9475a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4 = param_4 + 1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x0001080d5ce8();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b9475c0; end: 10b9475df;  */

void FUN_10b9475c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x0001080d5ce8();
  }
  return;
}



/* Entry: 10b9475e0; end: 10b94763b;  */

void FUN_10b9475e0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x0001080d5ce8();
  }
  return;
}



/* Entry: 10b94763c; end: 10b947643;  */

void FUN_10b94763c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010b94842c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010b948680(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -8;
    func_0x0001080d5ce8();
  }
  return;
}



/* Entry: 10b947644; end: 10b947673;  */

void FUN_10b947644(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010b94842c();
  while (func_0x00010b948680(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -8;
    func_0x0001080d5ce8();
  }
  return;
}



/* Entry: 10b947674; end: 10b9476a3;  */

void FUN_10b947674(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = param_2[1];
  uVar3 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b94863c();
      puVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return;
}



/* Entry: 10b9476a4; end: 10b94776b;  */

void FUN_10b9476a4(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 *puStack_38;
  
  func_0x00010b9484b8();
  FUN_10b947264();
  func_0x00010b94856c();
  func_0x000104bd4a70();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b9484a0(puStack_38 + 2);
  func_0x000104bd49e8();
  func_0x00010b9485c8();
  func_0x000104bd4af8();
  return;
}



/* Entry: 10b94776c; end: 10b94778b;  */

void FUN_10b94776c(void)

{
  func_0x00010b94864c();
  FUN_10b94778c();
  return;
}



/* Entry: 10b94778c; end: 10b9477db;  */

undefined1  [16] FUN_10b94778c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  while (param_2 != param_3) {
    func_0x00010b948524();
    func_0x0001080d3c18();
    func_0x00010b9485a8();
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10b9477dc; end: 10b9477e7;  */

void FUN_10b9477dc(void)

{
  _abort();
  func_0x00010b94837c();
  FUN_10b947844();
  func_0x00010b948308();
  return;
}



/* Entry: 10b9477e8; end: 10b94780b;  */

void FUN_10b9477e8(void)

{
  func_0x00010b94837c();
  FUN_10b947844();
  func_0x00010b948308();
  return;
}



/* Entry: 10b94780c; end: 10b94782b;  */

void FUN_10b94780c(void)

{
  FUN_10b94782c();
  return;
}



/* Entry: 10b94782c; end: 10b947843;  */

void FUN_10b94782c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4 = param_4 + 1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x000104c62548();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 10b947844; end: 10b947863;  */

void FUN_10b947844(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x000104c62548();
  }
  return;
}



/* Entry: 10b947864; end: 10b9478bf;  */

void FUN_10b947864(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x000104c62548();
  }
  return;
}



/* Entry: 10b9478c0; end: 10b9478c7;  */

void FUN_10b9478c0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010b94842c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010b948680(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -8;
    func_0x000104c62548();
  }
  return;
}



/* Entry: 10b9478c8; end: 10b9478f7;  */

void FUN_10b9478c8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010b94842c();
  while (func_0x00010b948680(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -8;
    func_0x000104c62548();
  }
  return;
}



/* Entry: 10b9478f8; end: 10b947a13;  */

long * FUN_10b9478f8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int extraout_w10;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plVar4 = param_1 + 2;
    uVar5 = *plVar4 - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      FUN_10b94780c();
    }
    puVar2 = (undefined8 *)((long)plVar4 + lVar9);
    uVar7 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    *puVar2 = uVar7;
    func_0x00010b948598(puVar2 + 1);
    func_0x00010b9485c8();
    func_0x00010b947894();
    return param_1;
  }
  FUN_10b9477dc();
  lVar9 = param_1[2];
  lVar8 = *(long *)(lVar9 + 0xa0);
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x10) != 0) {
      do {
        func_0x00010b9483b0();
      } while (extraout_w10 != 0);
      lVar9 = param_1[2];
    }
    lVar3 = param_1[5];
    func_0x00010b8d3398(lVar9);
    if ((char)lVar3 == '\x01') {
      func_0x00010b8c6418(lVar8,lVar9,param_1 + 3);
    }
    else {
      FUN_10b8cb91c(lVar8,lVar9,param_1[4]);
    }
  }
  if (lVar8 == 0) {
    return (long *)0x0;
  }
  plVar4 = (long *)&stack0xffffffffffffff80;
  func_0x0001003a90c4(&stack0xffffffffffffff80);
  return plVar4;
}



/* Entry: 10b947a14; end: 10b947a67;  */

undefined8 * FUN_10b947a14(long param_1)

{
  func_0x00010b8a2000(*(undefined8 *)(param_1 + 0x10));
  return (undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b947a68; end: 10b947adf;  */

void FUN_10b947a68(long param_1)

{
  int iVar1;
  long *plStack_48;
  long *plStack_40;
  long alStack_30 [2];
  
  func_0x00010810171c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    func_0x00010b946160(&plStack_48);
    if (plStack_48 != plStack_40) {
      iVar1 = (int)*(undefined8 *)(*plStack_48 + 0x40);
      func_0x00010b93d8f0();
      if (iVar1 != 0) {
        for (; plStack_48 != plStack_40; plStack_48 = plStack_48 + 1) {
          func_0x00010b8f1d50(*(undefined8 *)(*plStack_48 + 0x148));
        }
      }
    }
    func_0x00010b948440();
  }
  func_0x0001081015dc(alStack_30);
  return;
}



/* Entry: 10b947ae0; end: 10b947b27;  */

long FUN_10b947ae0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 10b947b28; end: 10b947bbf;  */

void FUN_10b947b28(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  
  func_0x00010b9484b8();
  lVar4 = (extraout_x8 >> 3) + 1;
  FUN_10b9473f4();
  func_0x00010b948660();
  if (lVar4 != 0) {
    FUN_10b947484();
  }
  func_0x00010b948540();
  if (extraout_x9 != 0) {
    plVar1 = (long *)(extraout_x9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8_00 = extraout_x9;
  func_0x00010b9484a0(extraout_x8_00 + 1);
  func_0x00010b947b9c();
  func_0x00010b9485c8();
  func_0x00010b947c10();
  return;
}



/* Entry: 10b947bc0; end: 10b947bdf;  */

void FUN_10b947bc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x000104bd564c();
  }
  return;
}



/* Entry: 10b947be0; end: 10b947c3b;  */

void FUN_10b947be0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x000104bd564c();
  }
  return;
}



/* Entry: 10b947c3c; end: 10b947c43;  */

void FUN_10b947c3c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010b94842c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x00010b948680(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -8;
    func_0x000104bd564c();
  }
  return;
}



/* Entry: 10b947c44; end: 10b947c73;  */

void FUN_10b947c44(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010b94842c();
  while (func_0x00010b948680(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -8;
    func_0x000104bd564c();
  }
  return;
}



/* Entry: 10b947c74; end: 10b947c77;  */

void FUN_10b947c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78488;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b947c78; end: 10b947c8b;  */

void FUN_10b947c78(void)

{
  func_0x00010b947c94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b947c8c; end: 10b947c9f;  */

void FUN_10b947c8c(void)

{
  return;
}



/* Entry: 10b947ca0; end: 10b947cc7;  */

long FUN_10b947ca0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b947cc8; end: 10b947ccb;  */

void FUN_10b947cc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d784d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b947ccc; end: 10b947cdf;  */

void FUN_10b947ccc(void)

{
  func_0x00010b947ce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b947ce0; end: 10b947cf7;  */

void FUN_10b947ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b948480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b947cf8; end: 10b947d0b;  */

void FUN_10b947cf8(void)

{
  FUN_10b947d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b947d0c; end: 10b947d47;  */

undefined8 * FUN_10b947d0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d78528;
  func_0x0001080d87c4(param_1 + 0xb);
  FUN_10b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 10b947d48; end: 10b947d57;  */

void FUN_10b947d48(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b947d58; end: 10b947d6b;  */

void FUN_10b947d58(void)

{
  func_0x00010b947d74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b947d6c; end: 10b947d83;  */

void FUN_10b947d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b948480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b947d84; end: 10b947d97;  */

void FUN_10b947d84(void)

{
  FUN_10b947e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b947d98; end: 10b947e5f;  */

undefined8 FUN_10b947d98(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 auStack_48 [24];
  
  plVar4 = (long *)(param_2 + 0x18);
  if (*plVar4 == *(long *)(param_2 + 0x20)) {
    plVar1 = *(long **)(param_1 + 0x10);
    func_0x0001080e3e74(auStack_48,"");
    pcVar3 = *(code **)(*plVar1 + 0x18);
  }
  else {
    FUN_10b9a5e5c(auStack_48,*plVar4 + 8);
    plVar1 = *(long **)(param_1 + 0x10);
    pcVar3 = *(code **)(*plVar1 + 0x18);
  }
  (*pcVar3)(plVar1,param_2 + 0x30,param_2,auStack_48,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  if ((*(char *)(param_1 + 0x20) == '\x01') && (func_0x00010b8e1860(), (int)plVar4 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b947e60; end: 10b947e8b;  */

undefined8 * FUN_10b947e60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d785c0;
  func_0x0001080d8600(param_1 + 2);
  return param_1;
}



/* Entry: 10b947e8c; end: 10b947eb7;  */

void FUN_10b947e8c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b947eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b947eb8; end: 10b947ee7;  */

undefined8 * FUN_10b947eb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar1 = param_1, FUN_10b9a5818(), ((ulong)puVar1 & 1) == 0)) {
    FUN_10b9a5890();
    *puVar1 = &PTR_FUN_110d78628;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return puVar1;
  }
  return param_1;
}



/* Entry: 10b947ee8; end: 10b947eeb;  */

void FUN_10b947ee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78628;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b947eec; end: 10b947eff;  */

void FUN_10b947eec(void)

{
  func_0x00010b947f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b947f00; end: 10b947f17;  */

long FUN_10b947f00(long param_1)

{
  func_0x00010b94123c();
  func_0x0001080d5b74(param_1 + 0x1a8);
  func_0x000108129394(param_1 + 400);
  func_0x0001080d8600(param_1 + 0x180);
  func_0x000104bd5214(param_1 + 0x178);
  func_0x00010b8c5888(param_1 + 0x168);
  FUN_10b8fb21c(param_1 + 0x160);
  func_0x0001080d8598(param_1 + 0x150);
  func_0x00010b935dd4(param_1 + 0x148);
  func_0x0001052750b0(param_1 + 0x140);
  func_0x0001080e6aa4(param_1 + 0x138);
  FUN_10b8a6380(param_1 + 0x130);
  func_0x000104bd56f4(param_1 + 0x128);
  func_0x00010b942e54(param_1 + 0x98);
  FUN_10b8fb028(param_1 + 0x90);
  func_0x00010b942ef4(param_1 + 0x60);
  FUN_10b93dcc0(param_1 + 0x58);
  FUN_10b94457c(param_1 + 0x40);
  func_0x000107c278e8(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10b947f18; end: 10b947f37;  */

void FUN_10b947f18(void)

{
  func_0x00010b94864c();
  FUN_10b947f38();
  return;
}



/* Entry: 10b947f38; end: 10b947fd3;  */

void FUN_10b947f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined1 *puVar3;
  int extraout_w11;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_60;
  func_0x00010b94836c();
  uStack_48 = extraout_x8;
  FUN_10b947ff0(auStack_60,1);
  FUN_10b948048(lStack_50,param_3,param_4,param_5,param_6);
  lVar2 = lStack_50;
  lStack_50 = 0;
  FUN_10b947fd4(param_1,lVar2 + 0x18);
  FUN_10b948104();
  func_0x00010b94834c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  puVar3 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1 + 8;
  }
  if ((puVar3 != (undefined1 *)0x0) &&
     ((*(long *)(puVar3 + 8) == 0 || (*(long *)(*(long *)(puVar3 + 8) + 8) == -1)))) {
    pcStack_68 = FUN_10b947fd4;
    lStack_78 = extraout_x8_00[1];
    puStack_80 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    if (lStack_78 != 0) {
      do {
        func_0x00010b94863c();
        puVar3 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(puVar3,&puStack_80);
    func_0x000107c284e8(&puStack_80);
    return;
  }
  return;
}



/* Entry: 10b947fd4; end: 10b947fef;  */

void FUN_10b947fd4(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x00010b94863c();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(lVar1,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b947ff0; end: 10b948017;  */

long FUN_10b947ff0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b948018();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b948018; end: 10b948047;  */

undefined8 * FUN_10b948018(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    puVar1 = (undefined8 *)(param_2 * 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d78678;
  FUN_10b92fe74(param_1 + 3);
  return param_1;
}



/* Entry: 10b948048; end: 10b948077;  */

undefined8 * FUN_10b948048(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d78678;
  FUN_10b92fe74(param_1 + 3);
  return param_1;
}



/* Entry: 10b948078; end: 10b94807b;  */

void FUN_10b948078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d78678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b94807c; end: 10b94808f;  */

void FUN_10b94807c(void)

{
  func_0x00010b948098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b948090; end: 10b9480a3;  */

void FUN_10b948090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b948480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9480a4; end: 10b948103;  */

void FUN_10b9480a4(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b94863c();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b948104; end: 10b948113;  */

void FUN_10b948104(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b948114; end: 10b94814b;  */

void FUN_10b948114(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b9485b8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b9483b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b948464();
  func_0x0001080d87c4();
  return;
}



/* Entry: 10b94814c; end: 10b94816b;  */

void FUN_10b94814c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b94816c(&uStack_11,param_1);
  return;
}



/* Entry: 10b94816c; end: 10b9481d7;  */

void FUN_10b94816c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 auStack_40 [2];
  long *plStack_30;
  undefined8 uStack_28;
  
  puVar4 = auStack_40;
  func_0x00010b94836c();
  uStack_28 = extraout_x8;
  FUN_10b916004(auStack_40,1);
  FUN_10b9481d8(plStack_30,param_3);
  plVar5 = plStack_30;
  plStack_30 = (long *)0x0;
  FUN_10b915fe8(param_1,plVar5 + 3);
  FUN_10b9160c8();
  func_0x00010b94834c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *puVar4 = &PTR_DAT_1108733f0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = &PTR_FUN_110d77f38;
  lVar6 = *plVar5;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[6] = lVar6;
  return;
}



/* Entry: 10b9481d8; end: 10b94822b;  */

void FUN_10b9481d8(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_1108733f0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110d77f38;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[6] = lVar4;
  return;
}



/* Entry: 10b94822c; end: 10b94823f;  */

void FUN_10b94822c(void)

{
  func_0x00010b948220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b948240; end: 10b94824f;  */

void FUN_10b948240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b948248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x38))();
  return;
}


