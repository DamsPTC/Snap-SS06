/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107736384; end: 107736387;  */

undefined8 * FUN_107736384(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077365e4; end: 1077365eb;  */

void FUN_1077365e4(long param_1,double param_2)

{
  *(double *)(param_1 + 8) = ABS(param_2);
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107736838; end: 10773684b;  */

void FUN_107736838(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107736b64; end: 107736b6f;  */

void FUN_107736b64(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107742e7c(param_1,param_2);
  func_0x00010724ef84();
  func_0x000107874628(auStack_38);
  func_0x000107742678();
  func_0x000107742c9c();
  return;
}



/* Entry: 107736de0; end: 107736eb3;  */

undefined8 * FUN_107736de0(undefined8 *param_1)

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
    func_0x000107736d6c();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x0001077433dc();
      func_0x000107743044();
    }
    else {
      func_0x0001077433d4();
      func_0x0001077428fc();
    }
    func_0x000107742598();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077370fc; end: 10773710f;  */

void FUN_1077370fc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077375ac; end: 1077375df;  */

long FUN_1077375ac(long param_1)

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
      func_0x000107775530();
      func_0x00010774257c();
      func_0x000107742bf8();
      func_0x000107741a50();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        __Unwind_Resume();
        func_0x000107742a64();
        if (!(bool)uVar1) {
          func_0x000107742644((&PTR_DAT_1109d30d8)[extraout_x8]);
        }
        func_0x00010774352c();
        return param_1;
      }
      return unaff_x19;
    }
  }
  return param_1 + 8;
}



/* Entry: 107737810; end: 10773790f;  */

void FUN_107737810(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x21;
  long lVar4;
  long unaff_x24;
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 auStack_88 [17];
  
  func_0x000107743290();
  func_0x000107741834();
  func_0x000107741f50();
  do {
    uVar2 = unaff_x24 == 2;
    if ((bool)uVar2) {
      func_0x0001077423c4();
      func_0x00010774282c();
      func_0x000107742f3c();
      func_0x000107742bc8();
      func_0x000107742bd8();
      func_0x000107742c84();
      if ((bool)uVar2) {
        param_1 = auStack_88;
        func_0x00010772d6b8(param_1);
        func_0x0001077420e4();
      }
      else {
        param_1 = auStack_88;
        func_0x00010772d6a0();
        param_2 = param_1;
        func_0x0001077428fc();
      }
      func_0x000107742974(auStack_88);
      goto LAB_1077378bc;
    }
    func_0x0001077422b8();
    param_1 = (undefined8 *)*param_1;
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
LAB_1077378bc:
  func_0x0001077429e0();
  func_0x000107741a80();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107742260();
    func_0x00010772d714();
    func_0x0001077429e0();
    func_0x000107742904();
    func_0x000107742a34(extraout_x8,param_1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_228 = 0;
    func_0x000107743184(*param_2);
    puVar3 = &uStack_228;
    func_0x0001072dd514(puVar3,extraout_x8_00 / 0x38);
    lVar1 = ((long *)*unaff_x21)[1];
    for (lVar4 = *(long *)*unaff_x21; lVar4 != lVar1; lVar4 = lVar4 + 0x38) {
      func_0x000107742be0();
      func_0x000107262f24();
      if ((int)puVar3 != 0) {
        puVar3 = &uStack_228;
        func_0x0001072d17f4(puVar3,lVar4);
      }
    }
    func_0x0001073fb2d4(auStack_240,&uStack_228);
    func_0x0001077423a8();
    func_0x00010726e078(&uStack_228);
    return;
  }
  return;
}



/* Entry: 107737c18; end: 107737c2b;  */

/* WARNING: Possible PIC construction at 0x000107737d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107737d08) */
/* WARNING: Removing unreachable block (ram,0x000107737d2c) */
/* WARNING: Removing unreachable block (ram,0x000107737d18) */
/* WARNING: Removing unreachable block (ram,0x000107737d3c) */

undefined8 * FUN_107737c18(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  uVar2 = *(undefined8 *)*param_2;
  uVar3 = ((undefined8 *)*param_2)[1];
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741be8(param_1,uVar2,uVar3,param_3);
    func_0x0001077433b0();
    func_0x0001074faaa4();
    func_0x0001077432e4();
    func_0x0001077431c4();
    func_0x000107741a50();
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar4 = &UNK_107737c74;
    func_0x000107743290();
    *(undefined1 **)(puVar1 + -0x10) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -8) = puVar4;
    unaff_x29 = puVar1 + -0x10;
    func_0x0001077418c8();
    func_0x000107742d28();
    func_0x000107743820();
    while (in_ZR = unaff_x23 == 2, !(bool)in_ZR) {
      func_0x0001077422ac();
      param_1 = (undefined8 *)*param_1;
      func_0x000107741f94();
      func_0x000107742eac();
      if ((bool)in_ZR) {
        func_0x0001077429f0();
        func_0x000107742190();
      }
      else {
        func_0x0001077429e8();
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)in_ZR) {
        func_0x000107742f34();
        func_0x000107741a80();
        if ((bool)in_ZR) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x000107742260();
        func_0x00010772ead4();
        func_0x000107742f34();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x230) = unaff_x20;
        *(undefined8 *)(puVar1 + -0x228) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x220) = unaff_x29;
        *(undefined **)(puVar1 + -0x218) = &DAT_107737d9c;
        *param_1 = &PTR_DAT_1109d1d80;
        func_0x000104c2f714(param_1 + 9);
        func_0x00010772d754(param_1 + 5);
        func_0x0001072c9884(param_1 + 2);
        return param_1;
      }
    }
    unaff_x20 = puVar1 + -0x200;
    func_0x00010774339c();
    func_0x000107737bec();
    func_0x00010772e7e8(puVar1 + -0x120,puVar1 + -400);
    uVar2 = **(undefined8 **)(puVar1 + -0x210);
    uVar3 = (*(undefined8 **)(puVar1 + -0x210))[1];
    param_1 = (undefined8 *)(puVar1 + -0xe8);
    param_3 = puVar1 + -0x120;
    unaff_x30 = &UNK_107737d08;
    puVar1 = puVar1 + -0x210;
  } while( true );
}



/* Entry: 107737f2c; end: 107738037;  */

undefined8 * FUN_107737f2c(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined1 auStack_1b0 [240];
  undefined1 auStack_c0 [56];
  undefined8 auStack_88 [17];
  
  func_0x000107743290();
  func_0x0001077418c8();
  func_0x000107742d28();
  func_0x000107743820();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x000107742f88();
      func_0x0001077436e0(auStack_1b0);
      param_1 = auStack_88;
      func_0x000107737eec(param_1,auStack_c0,auStack_1b0);
      func_0x000107742d20();
      func_0x000107742f80();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107743120();
        func_0x000107742f74();
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto LAB_107737fe4;
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
LAB_107737fe4:
  func_0x000107742f34();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x000107742f34();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773844c; end: 10773845f;  */

void FUN_10773844c(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107738960; end: 10773897f;  */

void FUN_107738960(void)

{
  func_0x000107743454();
  func_0x0001072d17f4();
  return;
}



/* Entry: 107738e18; end: 107738e1b;  */

undefined8 * FUN_107738e18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739178; end: 107739237;  */

/* WARNING: Possible PIC construction at 0x00010773938c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739390) */
/* WARNING: Removing unreachable block (ram,0x0001077393a8) */
/* WARNING: Removing unreachable block (ram,0x000107739398) */
/* WARNING: Removing unreachable block (ram,0x0001077393b4) */

long * FUN_107739178(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *extraout_x8;
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
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 in_stack_00000130;
  
  func_0x0001077438cc();
  puVar4 = &stack0x00000130;
  func_0x00010774187c();
  func_0x00010774215c();
  param_1 = (long *)*param_1;
  func_0x000107741e20();
  func_0x000107742cc4();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    param_2 = param_1;
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar2 = (int)unaff_x21 == 1;
  if ((bool)uVar2) {
    unaff_x20 = (undefined8 *)unaff_x20[0x10];
    func_0x00010774376c();
    func_0x000107743908();
    func_0x000107743ba0();
    if ((bool)uVar2) {
      func_0x0001077429cc();
      param_2 = param_1;
      func_0x000107742b70();
    }
    else {
      func_0x0001077429c4();
      param_2 = param_1;
      func_0x0001077428fc();
    }
    func_0x00010774207c();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107741d08();
    func_0x000107742088();
    puVar5 = &UNK_107739238;
    func_0x000107742904();
    puVar1 = (undefined1 *)register0x00000008;
    plVar3 = extraout_x8;
    while( true ) {
      *(undefined8 **)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 **)(puVar1 + -0x28) = unaff_x21;
      *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
      *(long **)(puVar1 + -0x18) = unaff_x19;
      *(undefined8 **)(puVar1 + -0x10) = puVar4;
      *(undefined **)(puVar1 + -8) = puVar5;
      func_0x0001077429f8(plVar3,param_1,param_2);
      func_0x000107741ca8();
      *(undefined8 *)(puVar1 + -0xb8) = 0;
      *(undefined8 *)(puVar1 + -0xb0) = 0;
      *(undefined8 *)(puVar1 + -0xc0) = 0;
      func_0x000107743110(*param_1);
      func_0x000107742d78();
      unaff_x22 = (undefined8 *)((undefined8 *)*unaff_x21)[1];
      unaff_x19 = plVar3;
      for (unaff_x21 = *(undefined8 **)*unaff_x21; uVar2 = unaff_x21 == unaff_x22, !(bool)uVar2;
          unaff_x21 = unaff_x21 + 0xe) {
        puVar4 = unaff_x20;
        if (*(int *)(unaff_x21 + 0xd) != 0) {
          puVar4 = unaff_x21;
        }
        unaff_x19 = (long *)(puVar1 + -0xc0);
        func_0x00010758ee8c(unaff_x19,puVar4);
      }
      func_0x00010774339c();
      func_0x000107277aa4();
      *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -200);
      *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd0);
      *(undefined8 *)(puVar1 + -0xd0) = 0;
      *(undefined8 *)(puVar1 + -200) = 0;
      *(undefined4 *)(puVar1 + -0x40) = 8;
      func_0x000107742ab8();
      func_0x000107742bf8();
      func_0x000107743144();
      func_0x000107742aa8();
      func_0x0001077419ec();
      if ((bool)uVar2) break;
      ___stack_chk_fail();
      param_1 = unaff_x19;
      func_0x000107742aa8();
      func_0x000107742904();
      *(undefined8 *)(puVar1 + -0x130) = unaff_x28;
      *(undefined8 *)(puVar1 + -0x128) = unaff_x27;
      *(undefined8 *)(puVar1 + -0x120) = unaff_x26;
      *(undefined8 *)(puVar1 + -0x118) = unaff_x25;
      *(undefined8 *)(puVar1 + -0x110) = unaff_x24;
      *(long *)(puVar1 + -0x108) = unaff_x23;
      *(undefined8 **)(puVar1 + -0x100) = unaff_x22;
      *(undefined8 **)(puVar1 + -0xf8) = unaff_x21;
      *(undefined1 **)(puVar1 + -0xf0) = puVar1 + -0xa8;
      *(long **)(puVar1 + -0xe8) = unaff_x19;
      *(undefined1 **)(puVar1 + -0xe0) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0xd8) = &UNK_10773930c;
      puVar4 = (undefined8 *)(puVar1 + -0xe0);
      func_0x0001077418c8();
      func_0x000107741f34();
      while (uVar2 = unaff_x23 == 2, !(bool)uVar2) {
        func_0x0001077422ac();
        param_1 = (long *)*param_1;
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
          func_0x0001077429e0();
          func_0x000107741a80();
          if ((bool)uVar2) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x000107742260();
          func_0x00010727f7f8();
          func_0x0001077429e0();
          func_0x000107742904();
          *(undefined1 **)(puVar1 + -0x2c0) = puVar1 + -0xa8;
          *(long **)(puVar1 + -0x2b8) = unaff_x19;
          *(undefined8 **)(puVar1 + -0x2b0) = puVar4;
          *(undefined **)(puVar1 + -0x2a8) = &DAT_1077393f8;
          *param_1 = (long)&PTR_DAT_1109d1d80;
          func_0x000104c2f714(param_1 + 9);
          func_0x00010772d754(param_1 + 5);
          func_0x0001072c9884(param_1 + 2);
          return param_1;
        }
      }
      unaff_x20 = (undefined8 *)(puVar1 + -0x298);
      func_0x00010774376c();
      plVar3 = (long *)(puVar1 + -0x1b8);
      param_2 = (long *)(puVar1 + -0x228);
      puVar5 = &UNK_107739390;
      puVar1 = puVar1 + -0x2a0;
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 107739508; end: 1077395f7;  */

undefined8 * FUN_107739508(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *unaff_x21;
  long lVar5;
  long *unaff_x23;
  long unaff_x24;
  undefined8 auStack_4e0 [8];
  int iStack_4a0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [5];
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [64];
  
  func_0x000107743300();
  func_0x000107741ca8();
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  func_0x0001072dd514(&uStack_c0,*(undefined8 *)(param_2 + 8));
  lVar1 = *unaff_x21;
  for (lVar5 = unaff_x21[1] * 0x70; lVar5 != 0; lVar5 = lVar5 + -0x70) {
    func_0x0001077760fc(auStack_70,lVar1);
    func_0x0001072999ec(&uStack_c0,auStack_70);
    func_0x000107743510();
    lVar1 = lVar1 + 0x70;
  }
  func_0x000100060964(auStack_a8,"");
  func_0x0001074faaa4(auStack_70,uStack_c0,uStack_b8,auStack_a8);
  func_0x0001077432e4();
  func_0x000107743510();
  puVar3 = auStack_a8;
  func_0x000104c2f714();
  func_0x000107743708();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_a8);
  func_0x000107743708();
  func_0x000107742904();
  puVar4 = &UNK_1077395f8;
  func_0x0001077438e0();
  puStack_80 = &stack0xfffffffffffffff0;
  puStack_78 = puVar4;
  func_0x000107741970();
  func_0x00010774222c();
  func_0x000107742764(0);
  func_0x0001077430c8();
  func_0x000107741c60();
  do {
    if (unaff_x24 == 0) {
      func_0x000107743254();
      func_0x000107743430();
      FUN_107739508();
      uVar2 = iStack_4a0 == 1;
      if ((bool)uVar2) {
        puVar3 = auStack_4e0;
        func_0x00010772ea78();
        func_0x000107743044();
      }
      else {
        puVar3 = auStack_4e0;
        func_0x00010772ea60();
        func_0x0001077428fc();
      }
      func_0x000107742bd0(auStack_4e0);
      goto code_r0x0001077396b8;
    }
    puVar3 = (undefined8 *)*unaff_x23;
    func_0x0001077420ac(auStack_4e0);
    func_0x000107743260();
    if ((bool)in_ZR) {
      func_0x0001077430d0();
      func_0x0001077430c0();
      uVar2 = in_ZR;
    }
    else {
      func_0x000107742cac();
      func_0x0001077428fc();
      uVar2 = in_ZR;
    }
    func_0x000107742ca4();
    func_0x000107742668();
    in_ZR = 1;
  } while ((bool)uVar2);
  uVar2 = 0;
code_r0x0001077396b8:
  func_0x000107742c5c();
  func_0x000107741c94(uStack_c8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107742784();
    func_0x00010772ead4();
    func_0x000107742c5c();
    func_0x000107742904();
    *puVar3 = &PTR_DAT_1109d1d80;
    func_0x000104c2f714(puVar3 + 9);
    func_0x00010772d754(puVar3 + 5);
    func_0x0001072c9884(puVar3 + 2);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 107739930; end: 107739933;  */

undefined8 * FUN_107739930(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739b54; end: 107739b67;  */

void FUN_107739b54(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107739e60; end: 107739e63;  */

undefined8 * FUN_107739e60(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773a0e0; end: 10773a1ab;  */

/* WARNING: Possible PIC construction at 0x00010773a2ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a2f0) */
/* WARNING: Removing unreachable block (ram,0x00010773a310) */
/* WARNING: Removing unreachable block (ram,0x00010773a300) */
/* WARNING: Removing unreachable block (ram,0x00010773a31c) */

long * FUN_10773a0e0(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  float *pfVar5;
  long lVar6;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 in_stack_00000160;
  
  func_0x000107743a94();
  puVar7 = &stack0x00000160;
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  param_1 = (long *)*param_1;
  func_0x000107741e48();
  func_0x00010774319c();
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
  uVar2 = (int)unaff_x23 == 1;
  if ((bool)uVar2) {
    unaff_x22 = *(long *)(unaff_x22 + 0x80);
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      param_2 = param_1;
      func_0x000107742a04();
    }
    else {
      func_0x000107742a14();
      param_2 = param_1;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  puVar8 = &UNK_10773a1ac;
  func_0x000107742904();
  pfVar5 = *(float **)*param_1;
  lVar6 = ((long *)*param_1)[1];
  puVar1 = (undefined1 *)register0x00000008;
  puVar4 = extraout_x8;
  do {
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    func_0x000107741ca8(puVar4);
    uVar2 = lVar6 - (long)pfVar5 == 8;
    if ((bool)uVar2) {
      func_0x000107743184(*param_2);
      uVar2 = extraout_x8_00 == 8;
      unaff_x20 = param_2;
      if (!(bool)uVar2) goto code_r0x00010773a234;
      func_0x00010774320c((double)*pfVar5,(double)pfVar5[1],puVar1 + -0xa8);
      func_0x000107743890();
      func_0x00010774320c(puVar1 + -0x120);
      func_0x0001072e941c(*(undefined8 *)(puVar1 + -0xa8),*(undefined8 *)(puVar1 + -0xa0),
                          *(undefined8 *)(puVar1 + -0x120),*(undefined8 *)(puVar1 + -0x118));
      func_0x0001077423d4();
      unaff_x19 = param_2 + 1;
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
    puVar8 = &UNK_10773a270;
    func_0x00010774309c();
    *(undefined1 **)(puVar1 + 0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 200) = puVar8;
    puVar7 = (undefined8 *)(puVar1 + 0xc0);
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
        *(long **)(puVar1 + -0x140) = unaff_x20;
        *(long **)(puVar1 + -0x138) = unaff_x19;
        *(undefined8 **)(puVar1 + -0x130) = puVar7;
        *(undefined **)(puVar1 + -0x128) = &DAT_10773a374;
        *plVar3 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar3 + 9);
        func_0x00010772d754(plVar3 + 5);
        func_0x0001072c9884(plVar3 + 2);
        return plVar3;
      }
    }
    unaff_x20 = (long *)(puVar1 + -0xf8);
    func_0x0001077427dc();
    func_0x000107743060();
    pfVar5 = (float *)**(long **)(puVar1 + -0x108);
    lVar6 = (*(long **)(puVar1 + -0x108))[1];
    puVar4 = puVar1 + -0x18;
    param_2 = (long *)(puVar1 + -0x118);
    puVar8 = &UNK_10773a2f0;
    puVar1 = puVar1 + -0x120;
  } while( true );
}



/* Entry: 10773a498; end: 10773a5eb;  */

long * FUN_10773a498(undefined8 param_1,float *param_2,long param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x23;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_150;
  double adStack_148 [2];
  undefined8 *puStack_138;
  double dStack_d8;
  double dStack_d0;
  
  func_0x000107741d18();
  uVar1 = false;
  if (param_3 - (long)param_2 == 8) {
    func_0x000107743184(*param_4);
    uVar1 = extraout_x8 == 8;
    unaff_x20 = param_4;
    if ((bool)uVar1) {
      func_0x00010774320c((double)*param_2,(double)param_2[1],&dStack_d8);
      func_0x000107743890();
      func_0x00010774320c(&dStack_150);
      dVar5 = (dStack_d8 * 3.141592653589793) / 180.0;
      dVar6 = (dStack_150 * 3.141592653589793) / 180.0;
      dVar3 = (((dStack_150 - dStack_d8) * 3.141592653589793) / 180.0) * 0.5;
      _sin(dVar3);
      _cos(dVar5);
      _cos(dVar6);
      dVar4 = (((adStack_148[0] - dStack_d0) * 3.141592653589793) / 180.0) * 0.5;
      _sin(dVar4);
      dVar3 = SQRT(dVar4 * dVar5 * dVar6 * dVar4 + dVar3 * dVar3);
      _asin(dVar3);
      func_0x0001077423d4(dVar3 * 12742017.6);
      plVar2 = param_4 + 1;
      goto LAB_10773a5b0;
    }
  }
  func_0x000107742604();
  func_0x000107742fdc();
  func_0x0001077427b8();
  func_0x000107742e4c();
  plVar2 = (long *)((ulong)unaff_x20 | 8);
LAB_10773a5b0:
  func_0x00010726af18();
  func_0x000107741a80();
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
      plVar2 = (long *)&stack0xffffffffffffffb8;
      FUN_10773a498(plVar2,*puStack_138,puStack_138[1],adStack_148);
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
      goto code_r0x00010773a69c;
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
code_r0x00010773a69c:
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



/* Entry: 10773a9b8; end: 10773a9bb;  */

undefined8 * FUN_10773a9b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773aca4; end: 10773adeb;  */

/* WARNING: Possible PIC construction at 0x00010773ad30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773ad34) */
/* WARNING: Removing unreachable block (ram,0x00010773ad74) */
/* WARNING: Removing unreachable block (ram,0x00010773ad64) */
/* WARNING: Removing unreachable block (ram,0x00010773ad80) */

ulong FUN_10773aca4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x24;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_1c8 [104];
  undefined4 uStack_160;
  undefined4 uStack_f0;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  func_0x000107741834();
  uStack_160 = 0;
  uStack_f0 = 0;
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      uVar2 = (uint)auStack_1c8;
      goto code_r0x00010773adec;
    }
    func_0x0001077422b8();
    param_2 = (undefined8 *)*param_2;
    func_0x000107741f6c();
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
  func_0x0001077436d0();
  uVar2 = (uint)param_2;
  func_0x000107741a80();
  if ((bool)uVar1) {
    return CONCAT44(uVar4,uVar3);
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x0001077436d0();
  func_0x000107742904();
code_r0x00010773adec:
  FUN_107776fc4();
  return (ulong)uVar2;
}



/* Entry: 10773b120; end: 10773b157;  */

void FUN_10773b120(void)

{
  undefined1 auStack_40 [16];
  char cStack_30;
  
  func_0x00010774314c();
  func_0x00010777509c();
  func_0x0001077437d0();
  if (cStack_30 == '\x01') {
    func_0x00010773b158(auStack_40);
  }
  return;
}



/* Entry: 10773b3b0; end: 10773b3c3;  */

void FUN_10773b3b0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773b78c; end: 10773b797;  */

/* WARNING: Possible PIC construction at 0x00010773ba98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773ba9c) */
/* WARNING: Removing unreachable block (ram,0x00010773bab4) */
/* WARNING: Removing unreachable block (ram,0x00010773baa4) */
/* WARNING: Removing unreachable block (ram,0x00010773bac0) */

uint * FUN_10773b78c(uint *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 in_ZR;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined *puVar10;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar6 = (undefined1 *)register0x00000008;
  puVar9 = param_4;
  while( true ) {
    puVar8 = (uint *)(puVar6 + -0x140);
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined **)(puVar6 + -0x48) = unaff_x25;
    *(long *)(puVar6 + -0x40) = unaff_x24;
    *(long **)(puVar6 + -0x38) = unaff_x23;
    *(uint **)(puVar6 + -0x30) = unaff_x22;
    *(uint **)(puVar6 + -0x28) = unaff_x21;
    *(uint **)(puVar6 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
    *(undefined **)(puVar6 + -8) = unaff_x30;
    func_0x000107741d18();
    *(undefined8 *)(puVar6 + -0x58) = extraout_x8;
    unaff_x20 = param_1;
    if (*(long *)(param_4 + 2) == 0) break;
    unaff_x20 = *(uint **)param_4;
    in_ZR = unaff_x20[0x1a] == 3;
    unaff_x21 = param_4;
    if (!(bool)in_ZR) break;
    func_0x000107573ddc();
    *(undefined8 *)(puVar6 + -0x110) = 0;
    *(undefined8 *)(puVar6 + -0x128) = 0;
    *(undefined8 *)(puVar6 + -0x130) = 0;
    *(undefined8 *)(puVar6 + -0x118) = 0;
    *(undefined8 *)(puVar6 + -0x120) = 0;
    *(undefined8 *)(puVar6 + -0x138) = 0;
    *(undefined8 *)(puVar6 + -0x140) = 0;
    unaff_x21 = (uint *)(*(long *)param_4 + 0x78);
    lVar5 = *(long *)(param_4 + 2) * 0x70;
    unaff_x25 = &UNK_10de8ee12;
    unaff_x23 = (long *)&UNK_10f417f4d;
    while (lVar5 = lVar5 + -0x70, lVar5 != 0) {
      switch(unaff_x21[0x18]) {
      case 1:
        func_0x0001075780f8(puVar6 + -0x140,unaff_x21);
        break;
      case 2:
        *(undefined8 *)(puVar6 + -0x100) = *(undefined8 *)unaff_x21;
        func_0x000107578140(puVar6 + -0x140,puVar6 + -0x100);
        break;
      case 3:
        func_0x000107578184(puVar6 + -0x140,unaff_x21);
        break;
      case 4:
        uVar3 = unaff_x21[1];
        uVar2 = unaff_x21[2];
        uVar4 = unaff_x21[3];
        *(ulong *)(puVar6 + -0x100) = (ulong)*unaff_x21;
        *(undefined8 *)(puVar6 + -0xf8) = 0;
        *(ulong *)(puVar6 + -0xf0) = (ulong)uVar3;
        *(undefined8 *)(puVar6 + -0xe8) = 0;
        *(ulong *)(puVar6 + -0xe0) = (ulong)uVar2;
        *(undefined8 *)(puVar6 + -0xd8) = 0;
        *(ulong *)(puVar6 + -0xd0) = (ulong)uVar4;
        *(undefined8 *)(puVar6 + -200) = 0;
        func_0x0001003a91d4(&UNK_10f417f4d);
        func_0x0001003a9204(puVar6 + -0x90);
        func_0x00010527b278(puVar6 + -0x140,puVar6 + -0x90);
        puVar7 = puVar6 + -0x90;
        goto code_r0x00010773b8e8;
      default:
        func_0x000107578030(puVar6 + -0x140,"");
        break;
      case 6:
        func_0x00010775c688(puVar6 + -0x100,unaff_x21);
        func_0x000107578184(puVar6 + -0x140,puVar6 + -0x100);
        func_0x000104c2f714(puVar6 + -0x100);
        break;
      case 7:
        func_0x00010724ef84(puVar6 + -0x100,unaff_x21);
        func_0x00010527b278(puVar6 + -0x140,puVar6 + -0x100);
        puVar7 = puVar6 + -0x100;
code_r0x00010773b8e8:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
      }
      unaff_x21 = unaff_x21 + 0x1c;
    }
    func_0x000107264c5c(unaff_x20);
    in_ZR = *(long *)(puVar6 + -0x128) == *(long *)(puVar6 + -0x120);
    uVar1 = 0;
    if (!(bool)in_ZR) {
      uVar1 = 0x4000000000000000;
    }
    unaff_x22 = (uint *)(uVar1 | *(long *)(puVar6 + -0x138) - *(long *)(puVar6 + -0x140) >> 5 |
                        0x8000000000000000);
    func_0x000107577fd0(puVar6 + -0x90);
    func_0x000107277488(puVar6 + -0x100,puVar6 + -0x90);
    param_4 = (uint *)(puVar6 + -0x100);
    func_0x000107742ab8();
    func_0x000107742bf8();
    func_0x000104c2f714(puVar6 + -0x90);
    unaff_x24 = 0;
    while( true ) {
      unaff_x20 = (uint *)(puVar6 + -0x140);
      func_0x00010527b690();
code_r0x00010773b98c:
      func_0x000107741c94(*(undefined8 *)(puVar6 + -0x58));
      if ((bool)in_ZR) {
        return unaff_x20;
      }
      ___stack_chk_fail();
      in_ZR = (int)param_4 == 1;
      if (!(bool)in_ZR) break;
      ___cxa_begin_catch(unaff_x20);
      func_0x00010774238c();
      ___cxa_end_catch();
    }
    func_0x00010527b690();
    func_0x00010774297c();
    puVar10 = &UNK_10773ba14;
    func_0x0001077438e0();
    *(undefined1 **)(puVar6 + -0x100) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0xf8) = puVar10;
    unaff_x29 = puVar6 + -0x100;
    puVar9 = unaff_x22;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != 0) {
      puVar8 = (uint *)*unaff_x23;
      func_0x0001077420ac(puVar6 + -0x560);
      func_0x000107743260();
      if ((bool)in_ZR) {
        func_0x0001077430d0();
        param_4 = puVar8;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        param_4 = puVar8;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)in_ZR) {
        func_0x000107742c5c();
        func_0x000107741c94(*(undefined8 *)(puVar6 + -0x148));
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          puVar9 = puVar8;
          func_0x000107742c5c();
          func_0x000107742904();
          *(uint **)(puVar6 + -0x590) = unaff_x20;
          *(uint **)(puVar6 + -0x588) = puVar8;
          *(undefined1 **)(puVar6 + -0x580) = unaff_x29;
          *(undefined **)(puVar6 + -0x578) = &DAT_10773bb0c;
          *(undefined ***)puVar9 = &PTR_DAT_1109d1d80;
          func_0x000104c2f714(puVar9 + 0x12);
          func_0x00010772d754(puVar9 + 10);
          func_0x0001072c9884(puVar9 + 4);
          return puVar9;
        }
        return puVar8;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    unaff_x30 = &UNK_10773ba9c;
    puVar6 = puVar6 + -0x570;
    param_1 = puVar8;
  }
  func_0x00010774238c();
  unaff_x22 = puVar9;
  goto code_r0x00010773b98c;
}



/* Entry: 10773bd08; end: 10773bd0f;  */

void FUN_10773bd08(void)

{
  return;
}



/* Entry: 10773becc; end: 10773bedf;  */

void FUN_10773becc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773c1b8; end: 10773c253;  */

undefined8 * FUN_10773c1b8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 auStack_b0 [2];
  undefined8 auStack_a0 [14];
  char cStack_30;
  
  func_0x000107741be8();
  func_0x000107879a74(auStack_b0);
  func_0x000107879bec(auStack_a0,auStack_b0[0],param_2);
  func_0x0001072ae334(auStack_b0);
  uVar1 = cStack_30 == '\x01';
  if ((bool)uVar1) {
    func_0x000107577fa0(unaff_x19 + 8,auStack_a0);
    puVar2 = auStack_a0;
    func_0x000107296ad0();
  }
  else {
    puVar2 = auStack_a0;
    func_0x000107296ad0();
    func_0x00010774238c();
  }
  func_0x000107741a50();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107743418();
  func_0x000107296ad0();
  func_0x000107742904();
  func_0x000107741910();
  func_0x000107742168();
  puVar2 = (undefined8 *)*puVar2;
  func_0x000107741e48();
  func_0x000107743728();
  if ((bool)uVar1) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = (int)param_2 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x00010774371c();
    FUN_10773c1b8();
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



/* Entry: 10773c6ac; end: 10773c6af;  */

undefined8 * FUN_10773c6ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773ca74; end: 10773cb57;  */

void FUN_10773ca74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  long *unaff_x24;
  long unaff_x25;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [56];
  undefined1 auStack_198 [56];
  undefined4 auStack_160 [24];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [120];
  undefined1 auStack_80 [64];
  
  func_0x000107742f4c();
  func_0x000107742774();
  func_0x0001077419ac();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == 0) {
      func_0x000107741e58();
      func_0x000107742b78();
      func_0x00010774333c();
      if ((bool)in_ZR) {
        func_0x0001077431bc();
        lVar1 = param_1;
        func_0x000107742b70();
      }
      else {
        func_0x000107742c64();
        lVar1 = param_1;
        func_0x0001077428fc();
      }
      func_0x00010774270c();
      break;
    }
    param_1 = *unaff_x24;
    func_0x000107742638(&stack0x00000028);
    func_0x0001077431d4();
    if ((bool)in_ZR) {
      func_0x000107742e90();
      lVar1 = param_1;
      func_0x000107742e88();
    }
    else {
      func_0x000107742c64();
      lVar1 = param_1;
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
  func_0x000107742698();
  func_0x00010727f7f8();
  func_0x000107742aa8();
  func_0x000107742904();
  func_0x000107741cf4(extraout_x8,param_1,lVar1,param_3);
  if (*(long *)(param_1 + 0x100) == 0) {
    auStack_160[0] = 7;
    func_0x0001077765a4(auStack_100,auStack_160,auStack_80);
    func_0x000107742ab8();
    func_0x000107742bf8();
    func_0x000104c3323c(auStack_160);
  }
  else {
    func_0x00010724ef84(auStack_1e8,param_3);
    (**(code **)(**(long **)(param_1 + 0x100) + 0x10))
              (auStack_80,*(long **)(param_1 + 0x100),auStack_1e8,param_1);
    func_0x0001077438f4(auStack_198);
    func_0x00010775f02c(auStack_160,auStack_198);
    func_0x000107572518(auStack_f8,auStack_160);
    FUN_107570f18(lVar1 + 0x40,auStack_100);
    func_0x000107742ca4();
    func_0x00010726b164(auStack_160);
    func_0x000104c2f714(auStack_198);
    lVar1 = *(long *)(param_1 + 0xf0);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x0001073e0a58(lVar1,auStack_80);
    }
    func_0x0001077438f4(auStack_1d0);
    func_0x0001002a82b4(auStack_160,auStack_1e8);
    FUN_10775ef4c(auStack_100,auStack_1d0,lVar1,auStack_160);
    func_0x000107572518(extraout_x8 + 8,auStack_100);
    func_0x00010726b164(auStack_100);
    func_0x0001001148fc(auStack_160);
    func_0x0001077432dc();
    func_0x00010774358c();
    func_0x000107742c9c();
  }
  func_0x000107741a68();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c3323c(auStack_160);
    do {
      func_0x000107742904();
      func_0x000107742c9c();
    } while( true );
  }
  return;
}



/* Entry: 10773cf18; end: 10773d053;  */

undefined8 * FUN_10773cf18(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar5;
  undefined1 auStack_198 [56];
  long alStack_160 [12];
  undefined8 uStack_100;
  undefined8 auStack_f8 [15];
  undefined1 auStack_80 [64];
  
  func_0x000107741cf4();
  plVar5 = *(long **)(param_2 + 0x100);
  if (plVar5 == (long *)0x0) {
    puVar2 = (undefined8 *)(param_1 + 8);
    func_0x000104c2fe00(puVar2,0x1138369c0);
    func_0x000107742a28();
  }
  else {
    func_0x0001077429f8();
    func_0x00010724ef84(&uStack_100,param_4);
    (**(code **)(*plVar5 + 0x18))(auStack_80,plVar5,&uStack_100);
    unaff_x21 = &uStack_100;
    func_0x000107743594();
    func_0x0001077438f4(auStack_198);
    func_0x00010775f02c(alStack_160,auStack_198);
    func_0x000107572518(auStack_f8,alStack_160);
    FUN_107570f18(unaff_x20 + 0x40,&uStack_100);
    func_0x00010727f7f8(auStack_f8);
    func_0x00010726b164(alStack_160);
    func_0x000107743a50();
    func_0x000104c318bc(&uStack_100,auStack_80);
    func_0x0001077432e4();
    puVar2 = &uStack_100;
    func_0x000104c2f714();
    func_0x00010774358c();
  }
  func_0x000107741a68();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010727f7f8(unaff_x21 + 1);
  plVar3 = alStack_160;
  func_0x00010726b164();
  func_0x000107743a50();
  func_0x00010774358c();
  func_0x000107742904();
  func_0x000107743c34();
  func_0x000107741970();
  func_0x000107742dfc();
  func_0x000107742168();
  puVar4 = (undefined8 *)*plVar3;
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
  uVar1 = (int)plVar5 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    puVar4 = auStack_f8;
    func_0x0001077429d4();
    FUN_10773cf18();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x0001077433dc();
      puVar2 = puVar2 + 1;
      func_0x000107739d70(puVar2,puVar4);
      puVar4 = puVar2;
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
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar4 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar4 + 9);
  func_0x00010772d754(puVar4 + 5);
  func_0x0001072c9884(puVar4 + 2);
  return puVar4;
}



/* Entry: 10773d394; end: 10773d397;  */

undefined8 * FUN_10773d394(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773d604; end: 10773d6cb;  */

/* WARNING: Possible PIC construction at 0x00010773d7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d7dc) */
/* WARNING: Removing unreachable block (ram,0x00010773d7f4) */
/* WARNING: Removing unreachable block (ram,0x00010773d7e8) */
/* WARNING: Removing unreachable block (ram,0x00010773d800) */

long * FUN_10773d604(long *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *extraout_x8;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  int unaff_w23;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 auStack_140 [120];
  undefined1 auStack_c8 [136];
  
  puVar8 = &stack0xfffffffffffffff0;
  func_0x000107741930();
  func_0x000107742c6c();
  func_0x00010774215c();
  param_1 = (long *)*param_1;
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
  uVar3 = unaff_w23 == 1;
  if ((bool)uVar3) {
    func_0x000107742650(auStack_c8);
    func_0x000107742c78();
    if ((bool)uVar3) {
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
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  puVar9 = &UNK_10773d6cc;
  func_0x000107742904();
  puVar2 = auStack_140;
  plVar6 = extraout_x8;
  do {
    plVar5 = plVar6;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar8;
    *(undefined **)(puVar2 + -8) = puVar9;
    func_0x0001077429f8();
    plVar6 = plVar5;
    func_0x000107741ca8();
    func_0x0001077432ec();
    plVar7 = param_1;
    if (((ulong)plVar6 & 1) == 0) {
code_r0x00010773d714:
      *(undefined1 *)(plVar5 + 1) = 0;
      func_0x000107742a28();
    }
    else {
      plVar6 = unaff_x21;
      func_0x0001077515e0();
      uVar4 = (uint)plVar6;
      uVar1 = uVar4 & 0xffff;
      uVar3 = uVar1 == 0xff;
      plVar7 = param_1;
      if (uVar1 < 0x100) goto code_r0x00010773d714;
      plVar6 = (long *)(puVar2 + -0x78);
      plVar7 = (long *)(ulong)(uVar4 & 0xff);
      func_0x000107723c60();
      func_0x000107743710();
      if ((bool)uVar3) {
        func_0x000107743284();
        func_0x000104c32db4();
      }
      else {
        plVar6 = (long *)0x0;
      }
      func_0x000107742458();
    }
    func_0x0001077419ec();
    if ((bool)uVar3) {
      return plVar6;
    }
    ___stack_chk_fail();
    func_0x000107742ba8();
    func_0x000107742904();
    *(undefined8 *)(puVar2 + -0xb0) = unaff_x22;
    *(long **)(puVar2 + -0xa8) = unaff_x21;
    *(undefined8 *)(puVar2 + -0xa0) = unaff_x20;
    *(long **)(puVar2 + -0x98) = plVar5;
    *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x88) = &UNK_10773d774;
    puVar8 = puVar2 + -0x90;
    param_1 = plVar7;
    func_0x000107741b04();
    func_0x000107743190();
    func_0x000107742168();
    plVar6 = (long *)*plVar6;
    func_0x000107742324();
    func_0x000107743228();
    if ((bool)uVar3) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      param_1 = plVar6;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar3 = (int)plVar7 == 1;
    if (!(bool)uVar3) {
      func_0x0001077420d8();
      func_0x0001077419ec();
      if ((bool)uVar3) {
        return plVar6;
      }
      ___stack_chk_fail();
      func_0x000107741fb4();
      func_0x0001077420d8();
      func_0x000107742904();
      *(undefined8 *)(puVar2 + -0x200) = unaff_x20;
      *(long **)(puVar2 + -0x1f8) = plVar5;
      *(undefined1 **)(puVar2 + -0x1f0) = puVar8;
      *(undefined **)(puVar2 + -0x1e8) = &DAT_10773d844;
      *plVar6 = (long)&PTR_DAT_1109d1d80;
      func_0x000104c2f714(plVar6 + 9);
      func_0x00010772d754(plVar6 + 5);
      func_0x0001072c9884(plVar6 + 2);
      return plVar6;
    }
    func_0x0001077421a8();
    func_0x000107742a54();
    puVar9 = &UNK_10773d7dc;
    puVar2 = puVar2 + -0x1e0;
    unaff_x19 = plVar5;
    unaff_x21 = plVar7;
  } while( true );
}



/* Entry: 10773d950; end: 10773da27;  */

undefined8 * FUN_10773d950(undefined8 *param_1)

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
      func_0x000107742400(!(bool)uVar3 && cVar2 == cVar1);
      func_0x000107743674();
      func_0x000107741e30();
      goto LAB_10773d9e4;
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
LAB_10773d9e4:
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



/* Entry: 10773dc98; end: 10773dcab;  */

void FUN_10773dc98(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773df7c; end: 10773dfd7;  */

undefined8 * FUN_10773df7c(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  
  func_0x000107741be8();
  func_0x00010774377c();
  func_0x000107743710();
  if ((bool)in_ZR) {
    func_0x000107743284();
    func_0x000107575adc();
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
    FUN_10773df7c();
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



/* Entry: 10773e290; end: 10773e2a3;  */

void FUN_10773e290(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773e614; end: 10773e63b;  */

void FUN_10773e614(void)

{
  undefined1 in_NG;
  
  func_0x000107743024();
  func_0x0001077430d8();
  func_0x0001077424f8(in_NG);
  return;
}



/* Entry: 10773e90c; end: 10773e90f;  */

undefined8 * FUN_10773e90c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773ec00; end: 10773ec0b;  */

void FUN_10773ec00(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x000107742718(param_1,param_2);
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



/* Entry: 10773ef6c; end: 10773ef6f;  */

undefined8 * FUN_10773ef6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773f19c; end: 10773f267;  */

void FUN_10773f19c(undefined8 *param_1)

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
  uVar1 = unaff_w23 != 0;
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
  func_0x0001077424f8(!(bool)uVar1 || (bool)uVar2);
  return;
}



/* Entry: 10773f4f0; end: 10773f5e7;  */

undefined8 * FUN_10773f4f0(undefined8 *param_1)

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
      func_0x00010773f484();
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
      goto LAB_10773f598;
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
LAB_10773f598:
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



/* Entry: 10773f7fc; end: 10773f8c3;  */

/* WARNING: Possible PIC construction at 0x00010773f990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773f994) */
/* WARNING: Removing unreachable block (ram,0x00010773f9ac) */
/* WARNING: Removing unreachable block (ram,0x00010773f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010773f9b8) */

undefined8 * FUN_10773f7fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  puVar7 = &UNK_10773f8c4;
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
      FUN_107575b74();
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
    *(undefined **)(puVar1 + -0x78) = &UNK_10773f92c;
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
      *(undefined **)(puVar1 + -0x1d8) = &DAT_10773f9fc;
      *puVar3 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar3 + 9);
      func_0x00010772d754(puVar3 + 5);
      func_0x0001072c9884(puVar3 + 2);
      return puVar3;
    }
    func_0x0001077421a8();
    func_0x000107742a54();
    puVar7 = &UNK_10773f994;
    puVar1 = puVar1 + -0x1d0;
    unaff_x20 = uVar5;
    unaff_x21 = puVar4;
  }
  return puVar3;
}



/* Entry: 10773faec; end: 10773fb33;  */

undefined8 * FUN_10773faec(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 auStack_70 [8];
  undefined1 uStack_30;
  
  puVar2 = auStack_70;
  func_0x000107741be8();
  func_0x0001077433b0();
  func_0x000107751788();
  func_0x0001077425dc(uStack_30);
  func_0x000107267ed0();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107741b04();
  func_0x000107743190();
  func_0x000107742168();
  puVar2 = (undefined8 *)*puVar2;
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
  uVar1 = param_3 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x000107742a54();
    FUN_10773faec();
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
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773fe1c; end: 10773fe1f;  */

undefined8 * FUN_10773fe1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077401fc; end: 107740377;  */

void FUN_1077401fc(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  ulong *in_x3;
  ulong *puVar3;
  long unaff_x25;
  long lStack_120;
  long lStack_118;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [17];
  
  puVar3 = in_x3;
  func_0x000107741930();
  lStack_100 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  plVar2 = (long *)(*puVar3 >> 1);
  func_0x0001000fc044(&lStack_100);
  func_0x0001077421b4();
  do {
    if (unaff_x25 == 0) {
      lStack_118 = (lStack_f8 - lStack_100) / 0x18;
      lStack_120 = lStack_100;
      func_0x000107742650(alStack_e8);
      func_0x000107743348();
      if ((bool)in_ZR) {
        func_0x00010772fe40(alStack_e8);
        func_0x000107741b4c();
      }
      else {
        plVar2 = alStack_e8;
        func_0x00010772fe28();
        func_0x0001077428fc();
      }
      func_0x00010774294c(alStack_e8);
      break;
    }
    func_0x0001077420ac(alStack_e8,*in_x3);
    func_0x000107743750();
    if ((bool)in_ZR) {
      func_0x0001073405dc(alStack_e8);
      func_0x000107776f6c(&lStack_120);
      plVar2 = &lStack_120;
      func_0x0001000fecf4(&lStack_100);
      func_0x0001001148fc(&lStack_120);
    }
    else {
      plVar2 = alStack_e8;
      func_0x00010756dd74();
      func_0x0001077428fc();
    }
    func_0x00010774303c();
    func_0x000107742cd0();
  } while ((bool)in_ZR);
  func_0x0001000e30f4();
  func_0x000107741a80();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010774294c(alStack_e8);
  plVar1 = &lStack_100;
  func_0x0001000e30f4();
  func_0x000107742904();
  if ((long *)0x555555555555555 < plVar1) {
    func_0x000107742888();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)((long)plVar2 + -1)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)plVar1 * 0x18);
  return;
}



/* Entry: 1077406b0; end: 1077407b3;  */

undefined8 * FUN_1077406b0(void)

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
  func_0x000107743520();
  func_0x000107741b04();
  func_0x00010774222c();
  func_0x000107742764(0);
  func_0x0001077430c8();
  func_0x000107741c60();
  do {
    if (unaff_x24 == 0) {
      func_0x000107743254();
      func_0x000107743364();
      func_0x0001077405ec();
      uVar1 = iStack_3e0 == 1;
      if ((bool)uVar1) {
        puVar2 = auStack_420;
        func_0x00010772fe40();
        func_0x000107741b4c();
      }
      else {
        puVar2 = auStack_420;
        func_0x00010772fe28();
        func_0x0001077428fc();
      }
      func_0x00010774294c(auStack_420);
      goto LAB_10774076c;
    }
    puVar2 = (undefined8 *)*unaff_x23;
    func_0x000107742380(auStack_420);
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
LAB_10774076c:
  func_0x000107742c5c();
  func_0x000107741c94(uStack_8);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742784();
  func_0x00010772fe9c();
  func_0x000107742c5c();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107740a80; end: 107740a93;  */

void FUN_107740a80(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107740e8c; end: 107740e97;  */

void FUN_107740e8c(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x68)) {
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
    func_0x000104c2d614(param_1 + 8);
    break;
  default:
  }
  func_0x000107742678();
  return;
}



/* Entry: 107741138; end: 1077411ef;  */

undefined8 * FUN_107741138(undefined8 *param_1)

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
    func_0x0001077410b4();
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



/* Entry: 1077414f4; end: 107741507;  */

void FUN_1077414f4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107741740; end: 107741753;  */

void FUN_107741740(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff && *(uint *)(param_3 + 8) == uVar1) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_DAT_1109b23a0)[uVar1])(&puStack_18,param_2);
  }
  return;
}



/* Entry: 107744e50; end: 107744e9f;  */

void FUN_107744e50(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010774652c();
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  for (param_3 = param_3 << 5; param_3 != 0; param_3 = param_3 + -0x20) {
    func_0x000107744ea0();
  }
  return;
}



/* Entry: 107745340; end: 10774535f;  */

void FUN_107745340(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uStack_11;
  
  func_0x0001000df1ac(&uStack_11,*param_2,param_2[1]);
  return;
}



/* Entry: 1077459d0; end: 107745aab;  */

undefined8 * FUN_1077459d0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  func_0x000107745694(param_3,&uStack_50,param_2 + -2);
  puVar1 = param_1;
  if ((param_3 & 1) == 0) {
    do {
      puVar1 = puVar1 + 2;
      if (param_2 <= puVar1) break;
      func_0x000107746334();
    } while ((int)param_3 == 0);
  }
  else {
    do {
      puVar1 = puVar1 + 2;
      func_0x000107746334();
    } while ((param_3 & 1) == 0);
  }
  if (puVar1 < param_2) {
    do {
      func_0x0001077463ec();
    } while ((param_3 & 1) != 0);
  }
  while (puVar1 < param_2) {
    func_0x00010774656c();
    uVar3 = param_2[1];
    uVar2 = *param_2;
    func_0x000107746554();
    param_2[1] = uVar3;
    *param_2 = uVar2;
    do {
      puVar1 = puVar1 + 2;
      func_0x000107746334();
    } while ((int)param_3 == 0);
    do {
      func_0x0001077463ec();
    } while ((param_3 & 1) != 0);
  }
  if (param_1 != puVar1 + -2) {
    uVar2 = puVar1[-2];
    param_1[1] = puVar1[-1];
    *param_1 = uVar2;
  }
  func_0x000107746560();
  return puVar1;
}



/* Entry: 10774617c; end: 107746303;  */

long FUN_10774617c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_107745340();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        func_0x000107746438();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 107746fdc; end: 107747183;  */

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

void FUN_107746fdc(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined8 *******pppppppuVar3;
  undefined *puVar4;
  undefined1 auStack_f08 [336];
  undefined8 uStack_db8;
  undefined1 *puStack_db0;
  undefined8 uStack_da8;
  undefined1 auStack_d80 [904];
  undefined8 uStack_9f8;
  undefined8 ******ppppppuStack_9c0;
  undefined *puStack_9b8;
  undefined1 auStack_9b0 [904];
  undefined8 uStack_628;
  undefined8 ******ppppppuStack_5f0;
  undefined *puStack_5e8;
  undefined1 auStack_5e0 [904];
  undefined8 uStack_258;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined1 auStack_208 [112];
  undefined1 auStack_198 [168];
  undefined1 auStack_f0 [168];
  undefined8 uStack_48;
  
  func_0x000107747a20();
  func_0x000107747c7c();
  func_0x000107747d60();
  func_0x0001072964ec();
  func_0x000107747cb0();
  func_0x0001072964ec(auStack_f0,auStack_208,unaff_x20 + 0x38);
  func_0x000107747d10();
  do {
    func_0x000107747d00();
    func_0x000107747d3c();
  } while (!(bool)in_ZR);
  func_0x000107747c60();
  func_0x000107747c58();
  func_0x000107747ce0();
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x000107747c7c();
    func_0x000107747d60();
    func_0x00010726cd78();
    func_0x000107747d24();
    func_0x000107747d80();
    func_0x000107747c58();
  }
  uVar2 = *(char *)(unaff_x20 + 0x88) == '\x01';
  if ((bool)uVar2) {
    func_0x000107747c7c();
    func_0x000107747d60();
    func_0x00010726cd78();
    func_0x000107747d24();
    func_0x000107747d80();
    func_0x000107747c58();
  }
  func_0x000107747a3c(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107747d80();
  func_0x000107747c58();
  func_0x000107747ce8();
  func_0x000107747ca8();
  puStack_218 = &UNK_107747184;
  pppppuStack_220 = (undefined8 *****)&stack0xfffffffffffffff0;
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
  } while (!(bool)uVar2);
  func_0x000107747c60();
  func_0x000107747c58();
  func_0x000107747c74();
  func_0x000107747c34();
  func_0x000107747ce0();
  func_0x000107747cf0();
  pppppppuVar3 = (undefined8 *******)&pppppuStack_220;
  if ((bool)uVar2) {
    func_0x000107747ae8();
    func_0x000107747b98();
    puVar4 = &UNK_107747208;
    puVar1 = auStack_5e0;
  }
  else {
    func_0x000107747da0();
    if ((bool)uVar2) {
      func_0x000107747ac8();
      func_0x000107747ba8();
      puVar4 = &UNK_107747224;
      puVar1 = auStack_5e0;
    }
    else {
      func_0x000107747d94();
      if ((bool)uVar2) {
        func_0x000107747ab8();
        func_0x000107747b68();
        puVar4 = &UNK_107747240;
        puVar1 = auStack_5e0;
      }
      else {
        func_0x000107747d88();
        if ((bool)uVar2) {
          func_0x000107747a98();
          func_0x000107747b48();
          puVar4 = &UNK_10774725c;
          puVar1 = auStack_5e0;
        }
        else {
          func_0x000107747df4();
          if ((bool)uVar2) {
            func_0x000107747c24();
            func_0x000107747bb8();
            puVar4 = &UNK_107747278;
            puVar1 = auStack_5e0;
          }
          else {
            func_0x000107747de8();
            if ((bool)uVar2) {
              func_0x000107747c08();
              func_0x000107747b78();
              puVar4 = &UNK_107747294;
              puVar1 = auStack_5e0;
            }
            else {
              func_0x000107747ddc();
              if ((bool)uVar2) {
                func_0x000107747bf8();
                func_0x000107747b58();
                puVar4 = &UNK_1077472b0;
                puVar1 = auStack_5e0;
              }
              else {
                func_0x000107747dd0();
                if ((bool)uVar2) {
                  func_0x000107747be8();
                  func_0x000107747bc8();
                  puVar4 = &UNK_1077472cc;
                  puVar1 = auStack_5e0;
                }
                else {
                  func_0x000107747dc4();
                  if ((bool)uVar2) {
                    func_0x000107747bd8();
                    func_0x000107747b88();
                    puVar4 = &UNK_1077472e8;
                    puVar1 = auStack_5e0;
                  }
                  else {
                    func_0x000107747a3c(uStack_258);
                    if ((bool)uVar2) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000107747c44();
                    func_0x000107747c34();
                    func_0x000107747ce8();
                    func_0x000107747ca8();
                    puStack_5e8 = &UNK_107747404;
                    ppppppuStack_5f0 = &pppppuStack_220;
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
                    } while (!(bool)uVar2);
                    func_0x000107747c60();
                    func_0x000107747c58();
                    func_0x000107747c74();
                    func_0x000107747c34();
                    func_0x000107747ce0();
                    func_0x000107747cf0();
                    pppppppuVar3 = &ppppppuStack_5f0;
                    if ((bool)uVar2) {
                      func_0x000107747ae8();
                      func_0x000107747b98();
                      puVar4 = &UNK_107747488;
                      puVar1 = auStack_9b0;
                    }
                    else {
                      func_0x000107747da0();
                      if ((bool)uVar2) {
                        func_0x000107747ac8();
                        func_0x000107747ba8();
                        puVar4 = &UNK_1077474a4;
                        puVar1 = auStack_9b0;
                      }
                      else {
                        func_0x000107747d94();
                        if ((bool)uVar2) {
                          func_0x000107747ab8();
                          func_0x000107747b68();
                          puVar4 = &UNK_1077474c0;
                          puVar1 = auStack_9b0;
                        }
                        else {
                          func_0x000107747d88();
                          if ((bool)uVar2) {
                            func_0x000107747a98();
                            func_0x000107747b48();
                            puVar4 = &UNK_1077474dc;
                            puVar1 = auStack_9b0;
                          }
                          else {
                            func_0x000107747df4();
                            if ((bool)uVar2) {
                              func_0x000107747c24();
                              func_0x000107747bb8();
                              puVar4 = &UNK_1077474f8;
                              puVar1 = auStack_9b0;
                            }
                            else {
                              func_0x000107747de8();
                              if ((bool)uVar2) {
                                func_0x000107747c08();
                                func_0x000107747b78();
                                puVar4 = &UNK_107747514;
                                puVar1 = auStack_9b0;
                              }
                              else {
                                func_0x000107747ddc();
                                if ((bool)uVar2) {
                                  func_0x000107747bf8();
                                  func_0x000107747b58();
                                  puVar4 = &UNK_107747530;
                                  puVar1 = auStack_9b0;
                                }
                                else {
                                  func_0x000107747dd0();
                                  if ((bool)uVar2) {
                                    func_0x000107747be8();
                                    func_0x000107747bc8();
                                    puVar4 = &UNK_10774754c;
                                    puVar1 = auStack_9b0;
                                  }
                                  else {
                                    func_0x000107747dc4();
                                    if ((bool)uVar2) {
                                      func_0x000107747bd8();
                                      func_0x000107747b88();
                                      puVar4 = &UNK_107747568;
                                      puVar1 = auStack_9b0;
                                    }
                                    else {
                                      func_0x000107747a3c(uStack_628);
                                      if ((bool)uVar2) {
                                        return;
                                      }
                                      ___stack_chk_fail();
                                      func_0x000107747c44();
                                      func_0x000107747c34();
                                      func_0x000107747ce8();
                                      func_0x000107747ca8();
                                      puStack_9b8 = &UNK_107747684;
                                      pppppppuVar3 = &ppppppuStack_9c0;
                                      puVar1 = auStack_d80;
                                      ppppppuStack_9c0 = &ppppppuStack_5f0;
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
                                      } while (!(bool)uVar2);
                                      func_0x000107747c60();
                                      func_0x000107747c58();
                                      func_0x000107747c74();
                                      func_0x000107747c34();
                                      func_0x000107747ce0();
                                      func_0x000107747cf0();
                                      if ((bool)uVar2) {
                                        func_0x000107747ae8();
                                        func_0x000107747b98();
                                        puVar4 = &UNK_107747708;
                                        puVar1 = auStack_d80;
                                      }
                                      else {
                                        func_0x000107747da0();
                                        if ((bool)uVar2) {
                                          func_0x000107747ac8();
                                          func_0x000107747ba8();
                                          puVar4 = &UNK_107747724;
                                          puVar1 = auStack_d80;
                                        }
                                        else {
                                          func_0x000107747d94();
                                          if ((bool)uVar2) {
                                            func_0x000107747ab8();
                                            func_0x000107747b68();
                                            puVar4 = &UNK_107747740;
                                            puVar1 = auStack_d80;
                                          }
                                          else {
                                            func_0x000107747d88();
                                            if ((bool)uVar2) {
                                              func_0x000107747a98();
                                              func_0x000107747b48();
                                              puVar4 = &UNK_10774775c;
                                              puVar1 = auStack_d80;
                                            }
                                            else {
                                              func_0x000107747df4();
                                              if ((bool)uVar2) {
                                                func_0x000107747c24();
                                                func_0x000107747bb8();
                                                puVar4 = &UNK_107747778;
                                                puVar1 = auStack_d80;
                                              }
                                              else {
                                                func_0x000107747de8();
                                                if ((bool)uVar2) {
                                                  func_0x000107747c08();
                                                  func_0x000107747b78();
                                                  puVar4 = &UNK_107747794;
                                                  puVar1 = auStack_d80;
                                                }
                                                else {
                                                  func_0x000107747ddc();
                                                  if ((bool)uVar2) {
                                                    func_0x000107747bf8();
                                                    func_0x000107747b58();
                                                    puVar4 = &UNK_1077477b0;
                                                    puVar1 = auStack_d80;
                                                  }
                                                  else {
                                                    func_0x000107747dd0();
                                                    if ((bool)uVar2) {
                                                      func_0x000107747be8();
                                                      func_0x000107747bc8();
                                                      puVar4 = &UNK_1077477cc;
                                                      puVar1 = auStack_d80;
                                                    }
                                                    else {
                                                      func_0x000107747dc4();
                                                      if (!(bool)uVar2) {
                                                        func_0x000107747a3c(uStack_9f8);
                                                        if ((bool)uVar2) {
                                                          return;
                                                        }
                                                        ___stack_chk_fail();
                                                        func_0x000107747c44();
                                                        func_0x000107747c34();
                                                        func_0x000107747ce8();
                                                        func_0x000107747ca8();
                                                        uStack_da8 = 0x1f8;
                                                        puStack_db0 = auStack_198;
                                                        func_0x000107747a88();
                                                        uStack_db8 = extraout_x8_00;
                                                        func_0x000107747c7c();
                                                        func_0x000107747d60();
                                                        func_0x0001072964ec();
                                                        func_0x000107747cb0();
                                                        func_0x000107747d08();
                                                        func_0x000107747d10(extraout_x8,auStack_f08)
                                                        ;
                                                        do {
                                                          func_0x000107747d34();
                                                          func_0x000107747d6c();
                                                        } while (!(bool)uVar2);
                                                        func_0x000107747c60();
                                                        func_0x000107747c58();
                                                        func_0x000107747a3c(uStack_db8);
                                                        if (!(bool)uVar2) {
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
                                                      puVar4 = &UNK_1077477e8;
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
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar3;
  *(undefined **)(puVar1 + -8) = puVar4;
  *(undefined8 *)(puVar1 + -0x18) = 0x1f8;
  func_0x000107278594(puVar1 + 0x78,puVar1 + -0x18,puVar1 + 0xe8);
  return;
}



/* Entry: 107748240; end: 107748243;  */

undefined8 * FUN_107748240(undefined8 *param_1)

{
  func_0x000107323ef8(param_1 + 0x15);
  func_0x0001072c9b9c(param_1 + 0x13);
  func_0x0001072c9b9c(param_1 + 0x11);
  func_0x0001072c9b9c(param_1 + 0xf);
  func_0x0001072c9b9c(param_1 + 0xd);
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107749c0c; end: 107749c7f;  */

/* WARNING: Possible PIC construction at 0x000107749c44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107749c48) */
/* WARNING: Removing unreachable block (ram,0x000107749c6c) */
/* WARNING: Removing unreachable block (ram,0x000107749c7c) */
/* WARNING: Removing unreachable block (ram,0x000107749c58) */

undefined8 FUN_107749c0c(long param_1)

{
  undefined8 uStack_88;
  undefined1 auStack_60 [64];
  
  func_0x00010774a240();
  func_0x000100060964(auStack_60,&UNK_10f4252a2);
  uStack_88 = 0;
  func_0x0001073f26dc(&uStack_88,auStack_60);
  func_0x00010756af98(&uStack_88,param_1 + 0x48);
  func_0x00010756af98(&uStack_88,param_1 + 0x58);
  return uStack_88;
}



/* Entry: 10774a1ac; end: 10774a1c7;  */

undefined8 * FUN_10774a1ac(long param_1)

{
  func_0x000107323ef8(param_1 + 0xc0);
  func_0x0001072c9b9c(param_1 + 0xb0);
  func_0x0001072c9b9c(param_1 + 0xa0);
  func_0x0001072c9b9c(param_1 + 0x90);
  func_0x0001072c9b9c(param_1 + 0x80);
  func_0x0001072c9b9c(param_1 + 0x70);
  func_0x0001072c9b9c(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 0x40);
  func_0x0001072c9884(param_1 + 0x28);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10774a660; end: 10774a687;  */

undefined8 FUN_10774a660(undefined8 param_1)

{
  func_0x00010774a688();
  return param_1;
}



/* Entry: 10774a790; end: 10774aae3;  */

void FUN_10774a790(double param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  long *aplStack_7f0 [2];
  int iStack_7e0;
  undefined1 auStack_7d0 [400];
  undefined1 auStack_638 [400];
  long lStack_4a8;
  undefined1 auStack_4a0 [248];
  undefined8 uStack_3a8;
  long lStack_310;
  undefined1 auStack_308 [400];
  undefined1 auStack_178 [240];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  func_0x00010774ea9c();
  func_0x00010774e8bc();
  uStack_68 = extraout_x8_00;
  FUN_1077515a0();
  if ((param_3 == 0) || (*(long *)(unaff_x20 + 0xf8) == 0)) {
    if ((bRam0000000113725db8 & 1) == 0) goto LAB_10774a9b0;
    goto LAB_10774a814;
  }
  lVar3 = unaff_x20;
  func_0x0001077515e0();
  uVar1 = (uint)lVar3 & 0xffff;
  in_ZR = uVar1 == 0xff;
  if (uVar1 < 0x100) {
    if ((bRam0000000113725dc0 & 1) == 0) {
      iVar2 = 0x13725dc0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010774ed8c(0x113725e08);
        ___cxa_guard_release(0x113725dc0);
      }
    }
    uVar5 = 0x113725e08;
  }
  else {
    uVar1 = ((uint)lVar3 & 0xff) - 1;
    in_ZR = uVar1 == 2;
    if (uVar1 < 3) {
      func_0x0001077522e8(aplStack_7f0,unaff_x20 + 0x178);
      func_0x000107751334(auStack_638);
      func_0x000107751334(auStack_7d0);
      lStack_4a8 = unaff_x21;
      func_0x000107751334(auStack_4a0,auStack_638);
      lStack_310 = unaff_x21;
      func_0x000107751334(auStack_308,auStack_7d0);
      if (iStack_7e0 == 0) {
        plVar4 = aplStack_7f0[0];
        (**(code **)(*aplStack_7f0[0] + 0x48))(aplStack_7f0[0]);
        func_0x000107833d7c(auStack_88,aplStack_7f0[0],uStack_3a8,plVar4);
        func_0x00010774dd9c(auStack_178,auStack_88);
        func_0x00010774b4ec(auStack_178,lStack_4a8 + 0xc0);
        func_0x000107269e60(auStack_178);
        func_0x000104c3365c(auStack_88);
      }
      else {
        func_0x00010774b4ec(aplStack_7f0[0],lStack_310 + 0xc0);
      }
      func_0x00010774b4c0(&lStack_4a8);
      func_0x000107267da8(auStack_7d0);
      func_0x000107267da8(auStack_638);
      func_0x000107267df4(aplStack_7f0);
      in_ZR = !NAN(param_1);
      if (!NAN(param_1)) {
        *(double *)(extraout_x8 + 0x10) = param_1;
        *(undefined4 *)(extraout_x8 + 0x70) = 2;
        *(undefined4 *)(extraout_x8 + 0x78) = 1;
        goto LAB_10774a980;
      }
    }
    if ((bRam0000000113725dc8 & 1) == 0) {
      iVar2 = 0x13725dc8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000100060964(0x113725e40,&UNK_10f4252f9);
        ___cxa_guard_release(0x113725dc8);
      }
    }
    uVar5 = 0x113725e40;
  }
  while( true ) {
    func_0x000104c2fe00(&lStack_4a8,uVar5);
    func_0x00010756c0ec(extraout_x8,&lStack_4a8);
    func_0x000104c2f714(&lStack_4a8);
LAB_10774a980:
    func_0x00010774e8a8(uStack_68);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10774a9b0:
    iVar2 = 0x13725db8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010774ed8c(0x113725dd0);
      ___cxa_guard_release(0x113725db8);
    }
LAB_10774a814:
    uVar5 = 0x113725dd0;
  }
  return;
}



/* Entry: 10774b3a4; end: 10774b3f3;  */

int * FUN_10774b3a4(long param_1,long param_2)

{
  int *piVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_2 + 8) == 0x18) {
    func_0x00010774ebd4();
    param_1 = param_1 + 0x48;
    func_0x00010774b3f4(param_1,param_2 + 0x48);
    if ((int)param_1 != 0) {
      piVar1 = (int *)(unaff_x20 + 0xc0);
      if (*(int *)(unaff_x19 + 0xc0) == *piVar1) {
        func_0x00010774edfc();
        func_0x00010774e544();
        return piVar1;
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



/* Entry: 10774ba54; end: 10774ba6b;  */

double FUN_10774ba54(double param_1)

{
  func_0x00010739c1b8();
  return SQRT(param_1);
}



/* Entry: 10774c214; end: 10774c2b3;  */

undefined1  [16] FUN_10774c214(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10774c5bc; end: 10774c5e7;  */

bool FUN_10774c5bc(double *param_1,double *param_2,double *param_3)

{
  for (; (param_1 != param_2 && (*param_1 == *param_3)); param_1 = param_1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_1 == param_2;
}



/* Entry: 10774cc84; end: 10774ce9f;  */

/* WARNING: Possible PIC construction at 0x00010774cd18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774cd1c) */
/* WARNING: Removing unreachable block (ram,0x00010774cd34) */
/* WARNING: Removing unreachable block (ram,0x00010774ce38) */
/* WARNING: Removing unreachable block (ram,0x00010774cd3c) */
/* WARNING: Removing unreachable block (ram,0x00010774cd44) */
/* WARNING: Removing unreachable block (ram,0x00010774cd74) */
/* WARNING: Removing unreachable block (ram,0x00010774cd78) */
/* WARNING: Removing unreachable block (ram,0x00010774cd7c) */
/* WARNING: Removing unreachable block (ram,0x00010774cdf0) */
/* WARNING: Removing unreachable block (ram,0x00010774cd90) */
/* WARNING: Removing unreachable block (ram,0x00010774cda0) */
/* WARNING: Removing unreachable block (ram,0x00010774cda4) */
/* WARNING: Removing unreachable block (ram,0x00010774ce78) */
/* WARNING: Removing unreachable block (ram,0x00010774cda8) */
/* WARNING: Removing unreachable block (ram,0x00010774cdb0) */
/* WARNING: Removing unreachable block (ram,0x00010774cdbc) */
/* WARNING: Removing unreachable block (ram,0x00010774cdd8) */
/* WARNING: Removing unreachable block (ram,0x00010774cddc) */
/* WARNING: Removing unreachable block (ram,0x00010774cde0) */
/* WARNING: Removing unreachable block (ram,0x00010774cde4) */
/* WARNING: Removing unreachable block (ram,0x00010774cde8) */
/* WARNING: Removing unreachable block (ram,0x00010774cdec) */
/* WARNING: Removing unreachable block (ram,0x00010774ce30) */
/* WARNING: Removing unreachable block (ram,0x00010774ce3c) */

double FUN_10774cc84(double param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  double dVar4;
  double adStack_1c0 [4];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  
  func_0x00010774e944();
  func_0x00010774e8bc();
  dVar4 = *(double *)*param_2;
  uStack_88 = extraout_x8;
  func_0x00010774e988(*(undefined8 *)*param_3,dVar4,((double *)*param_2)[1]);
  if (dVar4 <= param_1) {
    param_1 = dVar4;
  }
  bVar2 = param_1 == 0.0;
  dStack_c8 = param_1;
  if (bVar2) {
    func_0x00010774e8a8(uStack_88);
    if (bVar2) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010774c5e8(&uStack_c0);
    func_0x00010774e9a0();
  }
  else {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x00010774eb70(*(undefined8 *)(unaff_x21 + 8));
    lStack_130 = extraout_x8_00 + -1;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x00010774ba6c(&uStack_c0,&uStack_140);
    param_2 = unaff_x19;
  }
  func_0x00010774ebd4();
  adStack_1c0[1] = INFINITY;
  adStack_1c0[0] = INFINITY;
  adStack_1c0[3] = -INFINITY;
  adStack_1c0[2] = -INFINITY;
  for (; unaff_x20 != param_2; unaff_x20 = unaff_x20 + 3) {
    lVar1 = unaff_x20[1];
    for (lVar3 = *unaff_x20; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
      func_0x0001078719f0(adStack_1c0,lVar3);
    }
  }
  return adStack_1c0[0];
}



/* Entry: 10774d6a4; end: 10774d973;  */

/* WARNING: Possible PIC construction at 0x00010774d830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774d834) */

double FUN_10774d6a4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long *param_5,double *param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  undefined1 in_ZR;
  long *plVar5;
  double *pdVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  double *pdVar7;
  double extraout_x8_01;
  long lVar8;
  double unaff_x20;
  double dVar9;
  double dVar10;
  ulong unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  double dVar11;
  double dVar12;
  long lStack_140;
  double *pdStack_138;
  long lStack_130;
  long *plStack_128;
  double *pdStack_120;
  double dStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  double dStack_f8;
  bool bStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_80;
  
  plVar5 = param_5;
  pdVar6 = param_6;
  func_0x00010774e8bc();
  dVar11 = *(double *)*plVar5;
  dVar12 = ((double *)*plVar5)[1];
  uStack_80 = extraout_x8;
  func_0x00010774e988(*(undefined8 *)*pdVar6);
  func_0x00010774ee24();
  if (!(bool)in_ZR) {
    dVar11 = 0.0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    lStack_b8 = 0;
    lStack_c0 = 0;
    func_0x00010774eb70(param_5[1]);
    lStack_108 = extraout_x8_00 + -1;
    dStack_118 = 0.0;
    uStack_110 = 0;
    uStack_100 = 0;
    dStack_f8 = 0.0;
    func_0x00010774ba6c(&lStack_c0,&dStack_118);
    plVar5 = (long *)*param_6;
    pdVar6 = (double *)param_6[1];
    func_0x00010774cea0();
    dStack_e8 = dVar11;
    dStack_e0 = dVar12;
    func_0x00010774eca8();
    uStack_d8 = param_3;
    uStack_d0 = param_4;
    while (param_1 = dStack_c8, lStack_98 != 0) {
      uVar3 = 0;
      if (unaff_x26 != 0) {
        uVar3 = uStack_a0 / unaff_x26;
      }
      pdVar7 = (double *)
               (*(long *)(lStack_b8 + uVar3 * 8) + (uStack_a0 - uVar3 * unaff_x26) * (long)unaff_x27
               );
      param_1 = *pdVar7;
      unaff_x20 = pdVar7[1];
      dVar12 = pdVar7[2];
      plVar5 = &lStack_c0;
      func_0x00010774bdd0();
      in_ZR = param_1 == dStack_c8;
      dVar11 = dStack_c8;
      if (param_1 < dStack_c8) {
        uVar3 = ((long)dVar12 - (long)unaff_x20) + 1;
        if (0x32 < uVar3) {
          bStack_f0 = (ulong)unaff_x20 <= (ulong)dVar12;
          if (bStack_f0) {
            uStack_110 = (long)unaff_x20 + (uVar3 >> 1);
            uStack_100 = uStack_110;
            dStack_f8 = dVar12;
            dStack_118 = unaff_x20;
          }
          else {
            dStack_118 = (double)((ulong)dStack_118 & 0xffffffffffffff00);
            uStack_100 = uStack_100 & 0xffffffffffffff00;
          }
          lStack_108 = CONCAT71(lStack_108._1_7_,bStack_f0);
          pdStack_138 = &dStack_c8;
          pdStack_120 = &dStack_e8;
          plVar5 = &lStack_140;
          pdVar6 = &dStack_118;
          lStack_140 = unaff_x28;
          lStack_130 = param_7;
          plStack_128 = param_5;
          goto code_r0x00010774d974;
        }
        func_0x00010774eb70(param_5[1]);
        in_ZR = (ulong)unaff_x20 <= (ulong)dVar12 && dVar12 == extraout_x8_01;
        if ((ulong)unaff_x20 > (ulong)dVar12 || (ulong)extraout_x8_01 <= (ulong)dVar12) {
          func_0x00010774eb00();
          break;
        }
        lVar8 = (long)unaff_x20 << 4;
        dVar9 = (double)((long)unaff_x20 - 1);
LAB_10774d7b4:
        dVar9 = (double)((long)dVar9 + 1);
        in_ZR = dVar9 == dVar12;
        if ((ulong)dVar9 <= (ulong)dVar12) goto code_r0x00010774d7c0;
        func_0x00010774ea40();
        while (unaff_x20 != dVar12) {
          unaff_x20 = (double)((long)unaff_x20 + 1);
          plVar1 = (long *)param_6[1];
          dVar10 = dVar9;
          for (unaff_x27 = (long *)*param_6; unaff_x28 = param_7, unaff_x27 != plVar1;
              unaff_x27 = unaff_x27 + 3) {
            unaff_x26 = 0;
            lVar8 = *unaff_x27;
            lVar2 = unaff_x27[1];
            dVar4 = 0.0;
            while (dVar9 = dVar4, in_ZR = (double)(lVar2 - lVar8 >> 4) == dVar9, !(bool)in_ZR) {
              func_0x00010774eb18();
              func_0x000107871a3c();
              if (((ulong)plVar5 & 1) != 0) {
                func_0x00010774eca8();
                goto LAB_10774d908;
              }
              func_0x00010774eb18();
              func_0x00010774d544();
              func_0x00010774ea2c();
              unaff_x26 = unaff_x26 + 0x10;
              dVar10 = dVar9;
              dVar4 = (double)((long)dVar9 + 1);
            }
          }
          func_0x00010774eca8();
          dVar9 = dVar10;
        }
        in_ZR = !NAN(param_1);
        unaff_x20 = dVar9;
        if (NAN(param_1)) break;
LAB_10774d908:
        func_0x00010774ed28();
        unaff_x20 = dVar9;
        if ((bool)in_ZR) {
          param_1 = 0.0;
          break;
        }
      }
    }
    func_0x00010774ec44();
  }
  func_0x00010774e8a8(uStack_80);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774ec44();
  func_0x00010774e9a0();
code_r0x00010774d974:
  if (*(char *)(pdVar6 + 2) == '\x01') {
    func_0x00010774ebd4();
    func_0x00010774cbf4(plVar5[3]);
    func_0x00010774eae0();
    if (dVar11 < **(double **)((long)unaff_x20 + 8)) {
      func_0x00010774eab0();
    }
  }
  return dVar11;
code_r0x00010774d7c0:
  plVar5 = (long *)(*param_5 + lVar8);
  pdVar6 = param_6;
  func_0x00010774ed74();
  lVar8 = lVar8 + 0x10;
  if (((ulong)plVar5 & 1) != 0) goto LAB_10774d908;
  goto LAB_10774d7b4;
}



/* Entry: 10774dfa0; end: 10774dffb;  */

void FUN_10774dfa0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010774eb88();
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_DAT_1109d4220;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return;
}



/* Entry: 10774e09c; end: 10774e157;  */

void FUN_10774e09c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [120];
  undefined8 uStack_38;
  
  func_0x00010774e8bc();
  puVar1 = (undefined8 *)0xf8;
  uStack_38 = extraout_x8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109d4280;
  func_0x000107325f14(auStack_b0,param_2);
  func_0x00010726928c(auStack_d0,param_3);
  func_0x00010774a6c0(puVar1 + 3,auStack_b0,auStack_d0);
  func_0x000104c3365c(auStack_d0);
  func_0x000107327aec(auStack_b0);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x00010774e8a8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev();
  __ZdlPv();
  func_0x00010774e9a0();
  *puVar1 = &PTR_DAT_1109d4280;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10774e278; end: 10774e387;  */

undefined1  [16] FUN_10774e278(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x00010774eb88();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x0001072cb490(*param_1);
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar4 = uVar6 >> 0xc ^ (ulong)param_1 >> 7;
  bVar2 = (byte)param_1;
  uVar10 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar4);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_1 = (undefined8 *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar7)
      ;
      puVar3 = (undefined8 *)&stack0xffffffffffffff70;
      func_0x0001073eae38(&stack0xffffffffffffff70,unaff_x19[1] + (long)param_1 * 0x78);
      if (((ulong)puVar3 & 1) != 0) {
        uVar11 = 0;
        goto LAB_10774e348;
      }
      param_1 = puVar3;
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar4 = lVar5 + uVar4;
  }
  func_0x00010774eb7c();
  func_0x000104c32d08();
  uVar11 = 1;
LAB_10774e348:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = param_1;
  return auVar18;
}



/* Entry: 10774e504; end: 10774e543;  */

void FUN_10774e504(int param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010774e9b8();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x70) {
    func_0x00010774ed1c();
    func_0x00010774e468();
    if (param_1 == 0) break;
  }
  func_0x00010774ecc8();
  return;
}



/* Entry: 10774e768; end: 10774e7a7;  */

void FUN_10774e768(int param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010774e9b8();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x00010774ed1c();
    func_0x00010774e5d8();
    if (param_1 == 0) break;
  }
  func_0x00010774ecc8();
  return;
}



/* Entry: 10774ee44; end: 10774ef13;  */

void FUN_10774ee44(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined1 auStack_230 [24];
  undefined1 uStack_218;
  undefined1 auStack_210 [16];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [144];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [88];
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x0001077500ac();
  uStack_38 = extraout_x8;
  func_0x000107750234(auStack_d8);
  func_0x00010002b838(auStack_108,param_1);
  func_0x0001072c9bc0(auStack_80,param_2);
  func_0x00010772cc04(&uStack_f0,auStack_108,auStack_80,auStack_d8);
  func_0x0001072c9c34(auStack_80);
  func_0x0001077501f8();
  unaff_x19[1] = uStack_e8;
  *unaff_x19 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x0001072c95d0(&uStack_f0);
  func_0x0001072ca718();
  func_0x000107750098(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c9c34(auStack_80);
  func_0x0001077501f8();
  puVar1 = auStack_d8;
  func_0x0001072ca718(puVar1);
  func_0x000107750118();
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  auStack_1f8[0] = 0;
  uStack_1e8 = 0;
  auStack_210[0] = 0;
  uStack_200 = 0;
  auStack_230[0] = 0;
  uStack_218 = 0;
  func_0x0001075375e8(auStack_1d0,&uStack_1e0,auStack_1f8,auStack_210,auStack_230);
  func_0x00010774efe8(extraout_x8_00,puVar1,auStack_1d0);
  func_0x000107324968(auStack_1d0);
  func_0x0001001148fc(auStack_230);
  func_0x000107323f70(auStack_210);
  func_0x000107323ef8(auStack_1f8);
  func_0x000107323f90(&uStack_1e0);
  return;
}



/* Entry: 10774f3fc; end: 10774f447;  */

void FUN_10774f3fc(long param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x00010774f448(auStack_28);
  func_0x000107750250();
  func_0x0001075393d4();
  func_0x0001077501c4();
  if (param_1 != 0) {
    func_0x0001077500d4();
  }
  return;
}



/* Entry: 10774f6d4; end: 10774f777;  */

void FUN_10774f6d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x0001077500c0();
  uVar1 = 0x98;
  __Znwm();
  func_0x0001072c9ff4(auStack_90,param_2);
  func_0x0001072c9bc0(auStack_80,param_3);
  func_0x000107570fb0(uVar1,auStack_90,auStack_80);
  *param_1 = uVar1;
  func_0x0001077501d0();
  func_0x000107750200();
  func_0x000107750098(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077501d0();
  func_0x000107750200();
  func_0x000107750220();
  func_0x000107750208();
  func_0x00010775007c();
  func_0x0001077500f8();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774f8f8; end: 10774f9a3;  */

/* WARNING: Possible PIC construction at 0x00010774f93c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774f940) */
/* WARNING: Removing unreachable block (ram,0x00010774f950) */
/* WARNING: Removing unreachable block (ram,0x00010774f954) */
/* WARNING: Removing unreachable block (ram,0x00010774f978) */
/* WARNING: Removing unreachable block (ram,0x00010774f988) */
/* WARNING: Removing unreachable block (ram,0x00010774f994) */
/* WARNING: Removing unreachable block (ram,0x00010774f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010774f964) */

void FUN_10774f8f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_70 [64];
  
  func_0x0001077500ac();
  func_0x000100060964(auStack_70,&UNK_10f425452);
  __Znwm();
  *param_1 = 0;
  param_1[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107574144();
  func_0x000107750128();
  func_0x000107750120();
  return;
}



/* Entry: 10774fbcc; end: 10774fbff;  */

void FUN_10774fbcc(void)

{
  return;
}



/* Entry: 10774fd18; end: 10774fda7;  */

/* WARNING: Possible PIC construction at 0x00010774fd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774fd58) */
/* WARNING: Removing unreachable block (ram,0x00010774fd90) */
/* WARNING: Removing unreachable block (ram,0x00010774fda4) */
/* WARNING: Removing unreachable block (ram,0x00010774fd7c) */

undefined8 * FUN_10774fd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  
  func_0x0001077500ac();
  func_0x00010756d054(auStack_50,1);
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109be080;
  puStack_40[1] = 0;
  func_0x00010774fdec(puStack_40 + 3,param_2,param_3);
  return puStack_40;
}



/* Entry: 10774ff08; end: 10774ff0b;  */

void FUN_10774ff08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774ffc0; end: 10774ffd7;  */

void FUN_10774ffc0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107547c54(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107750290; end: 10775032f;  */

void FUN_107750290(undefined8 *param_1,long param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1077509dc(&uStack_40,param_2);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  FUN_1077509dc(&uStack_50,param_2 + 0x20);
  param_1[4] = uStack_48;
  param_1[3] = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  FUN_1077509dc(&uStack_60,param_2 + 0x40);
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  func_0x0001073e0028(&uStack_60);
  func_0x0001073e0028(&uStack_50);
  func_0x0001073e0028(&uStack_40);
  return;
}



/* Entry: 10775072c; end: 10775079f;  */

undefined1 ***
FUN_10775072c(undefined8 param_1,undefined8 **param_2,long param_3,undefined8 **param_4)

{
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
  uint extraout_w8_01;
  uint uVar9;
  long unaff_x20;
  undefined1 auStack_148 [24];
  undefined1 **ppuStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 **ppuStack_118;
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined1 uStack_f9;
  undefined1 *apuStack_f8 [3];
  undefined8 *puStack_e0;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_99;
  undefined8 *apuStack_98 [5];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 uStack_49;
  undefined1 *apuStack_48 [5];
  
  func_0x000107750fc0();
  uVar1 = *(int *)(param_2 + 2) == 1;
  if ((bool)uVar1) {
    uVar8 = 0;
  }
  else {
    uStack_49 = 0;
    func_0x000107750ffc(&PTR_DAT_1109d4668);
    param_2 = (undefined8 **)apuStack_48;
    func_0x000107869d34();
    func_0x00010775102c();
    uVar8 = uStack_49;
  }
  func_0x000107750fa0(uVar8);
  uVar9 = extraout_w8;
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010775102c();
    func_0x000107751024();
    puStack_58 = &UNK_1077507a0;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107750fc0();
    uVar8 = 0;
    if (param_2[3] != (undefined8 *)0x0) {
      uStack_99 = 0;
      func_0x000107750ffc(&PTR_DAT_1109d46e8);
      param_2 = apuStack_98;
      func_0x000107869c04();
      func_0x00010750b370();
      uVar8 = uStack_99;
    }
    func_0x000107750fa0(uVar8);
    uVar9 = extraout_w8_00;
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      pppuVar2 = (undefined1 ***)apuStack_98;
      func_0x00010750b370();
      func_0x000107751024();
      puStack_a8 = &UNK_107750810;
      ppuStack_b0 = &puStack_60;
      func_0x000107750fc0();
      uVar1 = *(int *)(param_3 + 0x10) == 1;
      lVar6 = param_3;
      ppuVar7 = param_4;
      if ((bool)uVar1) {
        param_3 = unaff_x20;
        uVar8 = 0;
      }
      else {
        uStack_f9 = 0;
        puVar3 = (undefined8 *)0x28;
        __Znwm();
        *puVar3 = &PTR_DAT_1109d47e8;
        puVar3[1] = param_2;
        puVar3[2] = &uStack_f9;
        puVar3[3] = param_4;
        puVar3[4] = param_3;
        param_2 = (undefined8 **)apuStack_f8;
        puStack_e0 = puVar3;
        func_0x000107869d34();
        func_0x00010775102c();
        uVar8 = uStack_f9;
      }
      func_0x000107750fa0(uVar8);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        pppuVar4 = pppuVar2;
        func_0x00010775102c();
        func_0x000107751024();
        puStack_108 = &UNK_1077508c0;
        pppuVar5 = pppuVar4;
        ppuStack_130 = (undefined1 **)param_2;
        lStack_128 = lVar6;
        lStack_120 = param_3;
        ppuStack_118 = pppuVar2;
        pppuStack_110 = &ppuStack_b0;
        while ((undefined8 **)ppuStack_130 != ppuVar7) {
          func_0x000107750910(auStack_148,pppuVar4,lStack_128);
          pppuVar5 = &ppuStack_130;
          func_0x000107262260(pppuVar5);
        }
        return pppuVar5;
      }
      return (undefined1 ***)(ulong)(extraout_w8_01 & 1);
    }
  }
  return (undefined1 ***)(ulong)(uVar9 & 1);
}



/* Entry: 1077509dc; end: 107750a03;  */

undefined8 FUN_1077509dc(undefined8 param_1)

{
  func_0x0001074602e4(param_1);
  return param_1;
}



/* Entry: 107750b1c; end: 107750b87;  */

void FUN_107750b1c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *extraout_x8;
  undefined1 *puVar2;
  uint extraout_w9;
  
  func_0x0001077510a0();
  if ((extraout_w9 & 1) == 0) {
    func_0x000107750b94(param_2,*(undefined8 *)(param_1 + 0x10));
    uVar1 = (undefined1)param_2;
    puVar2 = *(undefined1 **)(param_1 + 8);
  }
  else {
    uVar1 = 1;
    puVar2 = extraout_x8;
  }
  *puVar2 = uVar1;
  return;
}



/* Entry: 107750cb4; end: 107750cd7;  */

void FUN_107750cb4(void)

{
  func_0x000107750fd0();
  func_0x000107750fdc(&PTR_DAT_1109d46e8);
  return;
}



/* Entry: 107750e40; end: 107750e53;  */

undefined ** FUN_107750e40(void)

{
  return &PTR_DAT_1109d47b8;
}



/* Entry: 107751284; end: 1077512db;  */

void FUN_107751284(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  param_1[4] = 0;
  puVar1 = param_1;
  func_0x000107752dfc();
  func_0x00010726acf0(puVar1 + 0x108);
  param_1[0x160] = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  param_1[0x128] = 0;
  param_1[0x168] = 1;
  func_0x000107753030();
  return;
}



/* Entry: 1077515a0; end: 1077515df;  */

bool FUN_1077515a0(long *param_1)

{
  if ((int)param_1[0x31] == 1) {
    func_0x000107752fec();
  }
  else {
    if ((int)param_1[0x31] != 0) {
      return false;
    }
    func_0x000107752eec();
  }
  return *param_1 != 0;
}



/* Entry: 107751cd8; end: 107751edb;  */

undefined1  [16] FUN_107751cd8(long param_1,long param_2,long param_3,long **param_4,long **param_5)

{
  int iVar1;
  undefined1 in_ZR;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int extraout_w10;
  ulong *puVar9;
  long **pplVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_d9;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uStack_180;
  uint uStack_178;
  char cStack_174;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 auStack_140 [2];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined4 uStack_c8;
  long lStack_b8;
  undefined4 uStack_58;
  undefined8 uStack_48;
  
  pplVar4 = &plStack_160;
  pplVar3 = &plStack_160;
  func_0x000107752dbc();
  uStack_48 = extraout_x8;
  if (*(int *)(param_4 + 0x31) == 0) {
    pplVar10 = (long **)param_4[0x1f];
    func_0x000107752eec();
    plVar6 = *param_4;
    plStack_128 = param_4[1];
    plStack_130 = plVar6;
    if (plStack_128 != (long *)0x0) {
      do {
        func_0x000107752dd4();
      } while (extraout_w10 != 0);
    }
    plVar2 = plVar6;
    func_0x000107752224();
    plStack_158._0_5_ = SUB85(pplVar10,0);
    plStack_160 = plVar2;
    if (((ulong)pplVar10 >> 0x20 & 1) == 0) {
      param_3 = 0;
      param_5 = pplVar10;
      param_2 = unaff_d9;
    }
    else {
      (**(code **)(*plVar6 + 0x38))(auStack_140,plVar6);
      puVar7 = auStack_140;
      func_0x000107330078();
      uVar11 = *(undefined8 *)*puVar7;
      plVar6 = plStack_130;
      (**(code **)(*plStack_130 + 0x48))();
      func_0x000107833d38(uVar11,&plStack_160,plVar6);
      param_5 = pplVar4;
    }
    param_4 = &plStack_130;
    func_0x000107267e44(param_4);
    if (((ulong)pplVar10 >> 0x20 & 1) == 0) goto LAB_107751de0;
  }
  else {
    func_0x000107752fec();
    plVar6 = *param_4;
    iVar1 = (int)*plVar6 + -1;
    in_ZR = iVar1 == 5;
    switch(iVar1) {
    case 0:
      puVar7 = *(undefined8 **)plVar6[1];
      break;
    case 1:
    case 3:
      puVar7 = (undefined8 *)plVar6[1];
      break;
    case 2:
    case 4:
      plVar6 = (long *)plVar6[1];
      goto code_r0x000107751dfc;
    case 5:
      param_2 = plVar6[1];
      param_3 = plVar6[2];
      goto LAB_107751e00;
    default:
LAB_107751de0:
      pplVar3 = param_4;
      *(undefined4 *)(param_1 + 0x68) = 0;
      goto LAB_107751e78;
    }
    plVar6 = (long *)*puVar7;
code_r0x000107751dfc:
    param_2 = *plVar6;
    param_3 = plVar6[1];
  }
LAB_107751e00:
  uStack_c8 = 2;
  uStack_58 = 2;
  plStack_128 = (long *)param_3;
  lStack_b8 = param_2;
  FUN_107731b14(&plStack_160,&plStack_130,2);
  lVar12 = 0x78;
  do {
    func_0x00010726af18((long)&plStack_130 + lVar12);
    lVar12 = lVar12 + -0x70;
    in_ZR = lVar12 == -0x68;
  } while (!(bool)in_ZR);
  plStack_128 = plStack_158;
  plStack_130 = plStack_160;
  uStack_120 = uStack_150;
  plStack_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  uStack_150 = 0;
  param_5 = &plStack_130;
  func_0x000107277aa4(auStack_140,param_5);
  func_0x000107752e38();
  func_0x000107277d70(&plStack_130);
  func_0x000107277d70(&plStack_160);
LAB_107751e78:
  func_0x000107752da8(uStack_48);
  if ((bool)in_ZR) {
    auVar13._8_8_ = param_5;
    auVar13._0_8_ = pplVar3;
    return auVar13;
  }
  ___stack_chk_fail();
  pplVar3 = &plStack_130;
  func_0x000107267e44();
  func_0x000107752df4();
  puVar9 = (ulong *)pplVar3[0x1f];
  if (puVar9 == (ulong *)0x0) {
    if (*(int *)(pplVar3 + 0x31) == 0) {
      func_0x000107752eec();
      func_0x000107752f14(*pplVar3);
      uVar8 = uStack_180 & 0xffffffffffffff00;
      uVar5 = (ulong)uStack_178 | 0x100000000;
      if (cStack_174 == '\0') {
        uVar8 = 0;
        uStack_180 = 0;
        uVar5 = 0;
      }
    }
    else {
      uVar8 = 0;
      uStack_180 = 0;
      uVar5 = 0;
    }
  }
  else {
    uStack_180 = *puVar9;
    uVar8 = uStack_180 & 0xffffffffffffff00;
    uVar5 = (ulong)(uint)puVar9[1] | 0x100000000;
  }
  auVar14._0_8_ = uStack_180 & 0xff | uVar8;
  auVar14._8_8_ = uVar5;
  return auVar14;
}



/* Entry: 107752148; end: 10775216f;  */

void FUN_107752148(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 != *(char *)(param_2 + 0x70)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x70) == '\x01') {
        func_0x000107267eac();
        *(undefined1 *)(param_1 + 0x70) = 0;
      }
      return;
    }
    func_0x00010775211c();
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107752eb0();
    func_0x000107262f3c();
    func_0x000107262f3c(unaff_x20 + 0x38,unaff_x19 + 0x38);
    return;
  }
  return;
}



/* Entry: 107752324; end: 10775236f;  */

void FUN_107752324(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107752f90();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109d4858)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 107752480; end: 10775248b;  */

void FUN_107752480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  
  if (*(int *)(param_1 + 2) == 1) {
    *param_1 = *param_2;
    return;
  }
  puStack_20 = param_1;
  puStack_18 = param_2;
  func_0x0001077524c8(&puStack_20);
  return;
}



/* Entry: 1077527b8; end: 107752813;  */

void FUN_1077527b8(long param_1)

{
  long unaff_x19;
  
  func_0x000107752eb0();
  func_0x000104c318bc();
  func_0x00010726cc04(param_1 + 0x40,unaff_x19 + 0x40);
  return;
}



/* Entry: 107752d64; end: 107752da7;  */

void FUN_107752d64(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(*param_1 + 0x10) == 1) {
    *param_2 = *param_3;
  }
  else {
    func_0x000107267df4(*param_1);
    func_0x000107753008();
  }
  return;
}



/* Entry: 107753534; end: 10775356f;  */

long FUN_107753534(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d4968);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107753a6c; end: 107753a7f;  */

void FUN_107753a6c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x000107269bac();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 107753da0; end: 10775415b;  */

void FUN_107753da0(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar1 = *(uint *)(param_2 + 2);
  uVar17 = (ulong)uVar1;
  puVar6 = (ulong *)(param_1 + 1);
  uVar18 = *puVar6;
  param_2[1] = uVar17;
  if ((uVar18 == 0) || (*(float *)(param_1 + 4) * (float)uVar18 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar18) {
      uVar7 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar7 = uVar7 | uVar18 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar18 = *puVar6;
    }
    if (uVar18 < uVar7) {
LAB_107753e50:
      func_0x0001072a9470(puVar6,uVar7);
      func_0x0001072a9458(param_1,puVar6);
      param_1[1] = uVar7;
      lVar8 = *param_1;
      for (uVar18 = 0; uVar7 != uVar18; uVar18 = uVar18 + 1) {
        *(undefined8 *)(lVar8 + uVar18 * 8) = 0;
      }
      plVar11 = (long *)param_1[2];
      uVar18 = uVar7;
      if (plVar11 != (long *)0x0) {
        uVar9 = plVar11[1];
        uVar10 = uVar7 - 1;
        if ((uVar7 & uVar10) == 0) {
          uVar9 = uVar9 & uVar10;
        }
        else if (uVar7 <= uVar9) {
          uVar14 = 0;
          if (uVar7 != 0) {
            uVar14 = uVar9 / uVar7;
          }
          uVar9 = uVar9 - uVar14 * uVar7;
        }
        *(long **)(lVar8 + uVar9 * 8) = param_1 + 2;
        while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
          uVar14 = plVar11[1];
          if ((uVar7 & uVar10) == 0) {
            uVar14 = uVar14 & uVar10;
          }
          else if (uVar7 <= uVar14) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar2 * uVar7;
          }
          if (uVar14 != uVar9) {
            plVar16 = plVar11;
            if (*(long *)(lVar8 + uVar14 * 8) == 0) {
              *(long **)(lVar8 + uVar14 * 8) = plVar12;
              uVar9 = uVar14;
            }
            else {
              do {
                plVar15 = plVar16;
                plVar16 = (long *)*plVar15;
                if (plVar16 == (long *)0x0) break;
              } while (*(int *)(plVar11 + 2) == *(int *)(plVar16 + 2));
              *plVar12 = (long)plVar16;
              *plVar15 = **(long **)(lVar8 + uVar14 * 8);
              **(long **)(lVar8 + uVar14 * 8) = (long)plVar11;
              plVar11 = plVar12;
            }
          }
        }
      }
    }
    else if (uVar7 < uVar18) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar7 < uVar18) {
        if (uVar7 != 0) goto LAB_107753e50;
        func_0x0001072a9458(param_1,0);
        param_1[1] = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar6;
      }
    }
  }
  uVar7 = uVar18 - 1;
  if ((uVar18 & uVar7) == 0) {
    uVar9 = (ulong)((int)uVar18 - 1U & uVar1);
  }
  else {
    uVar9 = uVar17;
    if (uVar18 <= uVar17) {
      uVar9 = 0;
      if (uVar18 != 0) {
        uVar9 = uVar17 / uVar18;
      }
      uVar9 = uVar17 - uVar9 * uVar18;
    }
  }
  lVar8 = *param_1;
  plVar11 = *(long **)(lVar8 + uVar9 * 8);
  if (plVar11 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    bVar13 = false;
    bVar3 = 0;
    do {
      plVar12 = plVar11;
      plVar11 = (long *)*plVar12;
      if (plVar11 == (long *)0x0) break;
      uVar10 = plVar11[1];
      if ((uVar18 & uVar7) == 0) {
        uVar14 = uVar10 & uVar7;
      }
      else {
        uVar14 = uVar10;
        if (uVar18 <= uVar10) {
          uVar14 = 0;
          if (uVar18 != 0) {
            uVar14 = uVar10 / uVar18;
          }
          uVar14 = uVar10 - uVar14 * uVar18;
        }
      }
      if (uVar14 != uVar9) break;
      if (uVar10 == uVar17) {
        bVar4 = (int)plVar11[2] == (int)param_2[2];
      }
      else {
        bVar4 = false;
      }
      bVar5 = bVar4 != bVar13;
      bVar4 = (bool)(bVar3 & bVar5);
      bVar13 = (bool)(bVar13 | bVar5);
      bVar3 = bVar3 | bVar5;
    } while (!bVar4);
  }
  uVar17 = param_2[1];
  if ((uVar18 & uVar7) == 0) {
    uVar17 = uVar7 & uVar17;
    if (plVar12 == (long *)0x0) goto LAB_1077540b0;
LAB_107754074:
    *param_2 = *plVar12;
    *plVar12 = (long)param_2;
    if (*param_2 == 0) goto LAB_107754104;
    uVar9 = *(ulong *)(*param_2 + 8);
    if ((uVar18 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar18 <= uVar9) {
      uVar7 = 0;
      if (uVar18 != 0) {
        uVar7 = uVar9 / uVar18;
      }
      uVar9 = uVar9 - uVar7 * uVar18;
    }
    if (uVar9 == uVar17) goto LAB_107754104;
  }
  else {
    if (uVar18 <= uVar17) {
      uVar9 = 0;
      if (uVar18 != 0) {
        uVar9 = uVar17 / uVar18;
      }
      uVar17 = uVar17 - uVar9 * uVar18;
    }
    if (plVar12 != (long *)0x0) goto LAB_107754074;
LAB_1077540b0:
    plVar11 = param_1 + 2;
    *param_2 = *plVar11;
    *plVar11 = (long)param_2;
    *(long **)(lVar8 + uVar17 * 8) = plVar11;
    if (*param_2 == 0) goto LAB_107754104;
    uVar9 = *(ulong *)(*param_2 + 8);
    if ((uVar18 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar18 <= uVar9) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = uVar9 / uVar18;
      }
      uVar9 = uVar9 - uVar17 * uVar18;
    }
  }
  *(long **)(lVar8 + uVar9 * 8) = param_2;
LAB_107754104:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 107754984; end: 107754a1b;  */

void FUN_107754984(undefined1 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_c0 [120];
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_2 + 0x70) & 1) == 0) {
    *param_1 = 0;
    param_1[0x90] = 0;
  }
  else {
    func_0x000107323dd0(auStack_c0,param_2);
    lVar1 = param_3[1];
    for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x0001000fecf4(auStack_48,lVar2);
    }
    func_0x00010752b4a4(param_1,auStack_c0);
    func_0x000107324968(auStack_c0);
  }
  return;
}


