/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107735d84; end: 107735df3;  */

void FUN_107735d84(undefined8 param_1,long param_2)

{
  long *aplStack_30 [2];
  
  if (*(int *)(param_2 + 0x68) == 8) {
    func_0x0001075725f8(param_2);
    func_0x000107278c90(aplStack_30,param_2);
    if (*aplStack_30[0] == aplStack_30[0][1]) {
      func_0x00010774238c();
    }
    else {
      func_0x000107742a04();
    }
    func_0x000107743144();
  }
  else {
    func_0x00010774238c();
  }
  return;
}



/* Entry: 107736038; end: 10773604b;  */

void FUN_107736038(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077362dc; end: 107736383;  */

double * FUN_1077362dc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  double *pdVar2;
  int unaff_w20;
  
  func_0x0001077418ec();
  func_0x000107742168();
  pdVar2 = (double *)*param_1;
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
    func_0x0001077429b4();
    func_0x000107741ffc((long)*pdVar2);
    func_0x000107742ab0();
    func_0x0001077420e4();
    func_0x0001077429bc();
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return pdVar2;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x000107742088();
  func_0x000107742904();
  *pdVar2 = (double)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(pdVar2 + 9);
  func_0x00010772d754(pdVar2 + 5);
  func_0x0001072c9884(pdVar2 + 2);
  return pdVar2;
}



/* Entry: 107736524; end: 1077365e3;  */

void FUN_107736524(double param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  double *pdVar2;
  long extraout_x8;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  pdVar2 = (double *)*param_2;
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
  uVar1 = unaff_w21 == 1;
  if ((bool)uVar1) {
    func_0x0001077429b4();
    param_1 = *pdVar2;
    func_0x000107742df4();
    func_0x000107742c78();
    if ((bool)uVar1) {
      func_0x000107742ab0();
      func_0x0001077420e4();
    }
    else {
      func_0x000107742d50();
      func_0x0001077428fc();
    }
    func_0x000107742214();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741eec();
  func_0x000107742088();
  func_0x000107742904();
  *(double *)(extraout_x8 + 8) = ABS(param_1);
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 107736834; end: 107736837;  */

undefined8 * FUN_107736834(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107736a74; end: 107736b63;  */

void FUN_107736a74(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  long unaff_x22;
  long unaff_x24;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  
  func_0x000107743290();
  func_0x000107741834();
  func_0x000107741f50();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x80);
      func_0x0001077423c4();
      func_0x00010774282c();
      func_0x000107742f3c();
      func_0x000107742bc8();
      func_0x000107742bd8();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107742ce0();
        func_0x000107742548();
      }
      else {
        func_0x000107742d60();
        func_0x0001077428fc();
      }
      func_0x000107742220();
      goto LAB_107736b14;
    }
    func_0x0001077422b8();
    param_1 = (undefined8 *)*param_1;
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
  uVar1 = 0;
LAB_107736b14:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x0001077429e0();
  func_0x000107742904();
  uStack_200 = unaff_x20;
  func_0x000107742e7c(extraout_x8,param_1);
  func_0x00010724ef84();
  func_0x000107874628(auStack_218);
  func_0x000107742678();
  func_0x000107742c9c();
  return;
}



/* Entry: 107736d6c; end: 107736ddf;  */

undefined8 * FUN_107736d6c(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  int unaff_w20;
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  undefined1 auStack_60 [64];
  
  func_0x000107741be8();
  func_0x0001077433b0();
  func_0x00010724ef84();
  func_0x0001078bbe34(auStack_78,auStack_90);
  func_0x0001077439b8();
  func_0x0001077432e4();
  func_0x000104c2f714(auStack_60);
  puVar2 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010774338c();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742d44();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000107742904();
  func_0x000107741910();
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
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x00010774371c();
    FUN_107736d6c();
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
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  FUN_10772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 1077370f8; end: 1077370fb;  */

undefined8 * FUN_1077370f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077374b4; end: 1077375ab;  */

undefined8 * FUN_1077374b4(undefined8 *param_1)

{
  undefined1 uVar1;
  long extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x24;
  
  func_0x000107743290();
  func_0x000107741834();
  func_0x000107741f50();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      func_0x0001077423c4();
      func_0x00010774282c();
      func_0x000107742f3c();
      func_0x000107742bc8();
      func_0x000107742bd8();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107743120();
        func_0x0001077439c4();
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto LAB_107737558;
    }
    func_0x0001077422b8();
    param_1 = (undefined8 *)*param_1;
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
  uVar1 = 0;
LAB_107737558:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x0001077429e0();
  func_0x000107742904();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010563ab98();
    uVar1 = *(int *)(param_1 + 8) == 1;
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
  return param_1 + 1;
}



/* Entry: 1077377fc; end: 10773780f;  */

void FUN_1077377fc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107737bec; end: 107737c17;  */

void FUN_107737bec(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010774314c();
  func_0x0001077755e0();
  func_0x0001077437d0();
  func_0x00010726b07c(auStack_40);
  return;
}



/* Entry: 107737eec; end: 107737f2b;  */

void FUN_107737eec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x000107742d44();
  func_0x000107278b70();
  func_0x0001072d1220(auStack_30,param_2);
  func_0x0001077423a8();
  return;
}



/* Entry: 107738448; end: 10773844b;  */

undefined8 * FUN_107738448(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773890c; end: 10773895f;  */

void FUN_10773890c(int param_1,long *param_2,undefined8 param_3,undefined8 param_4,byte *param_5)

{
  if ((param_1 != 0) && ((*param_5 & 1) != 0)) {
    func_0x0001077429f8();
    func_0x000107738960(param_4,*param_2 + 0x20);
    func_0x000107738794();
    func_0x000107738794();
    param_1 = 0;
  }
  *param_5 = (byte)param_1;
  return;
}



/* Entry: 107738d14; end: 107738e17;  */

undefined8 * FUN_107738d14(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  
  func_0x00010774309c();
  func_0x0001077418c8();
  func_0x0001077421d0();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x000107742fc0();
      func_0x0001077436e0(&stack0x00000008);
      param_1 = (undefined8 *)&stack0x00000108;
      func_0x000107738ba8(param_1,&stack0x00000018,&stack0x00000008);
      func_0x000107743244();
      func_0x000107743234();
      func_0x000107742c84();
      if ((bool)uVar1) {
        func_0x000107743120();
        func_0x000107742ff4();
      }
      else {
        func_0x000107743128();
        func_0x0001077428fc();
      }
      func_0x000107742368();
      goto LAB_107738dc4;
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
LAB_107738dc4:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x000107742c44();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739164; end: 107739177;  */

void FUN_107739164(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077394fc; end: 107739507;  */

/* WARNING: Possible PIC construction at 0x00010773967c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739680) */
/* WARNING: Removing unreachable block (ram,0x0001077396a0) */
/* WARNING: Removing unreachable block (ram,0x00010773968c) */
/* WARNING: Removing unreachable block (ram,0x0001077396b0) */

undefined8 * FUN_1077394fc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar4;
  undefined1 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(long **)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107743300();
    func_0x000107741ca8();
    *(undefined8 *)(puVar1 + -0xc0) = 0;
    *(undefined8 *)(puVar1 + -0xb8) = 0;
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    func_0x0001072dd514(puVar1 + -0xc0,param_1[1]);
    unaff_x20 = *unaff_x21;
    for (lVar4 = unaff_x21[1] * 0x70; lVar4 != 0; lVar4 = lVar4 + -0x70) {
      func_0x0001077760fc(puVar1 + -0x70,unaff_x20);
      func_0x0001072999ec(puVar1 + -0xc0,puVar1 + -0x70);
      func_0x000107743510();
      unaff_x20 = unaff_x20 + 0x70;
    }
    func_0x000100060964(puVar1 + -0xa8,"");
    unaff_x22 = puVar1 + -0xa8;
    func_0x0001074faaa4(puVar1 + -0x70,*(undefined8 *)(puVar1 + -0xc0),
                        *(undefined8 *)(puVar1 + -0xb8));
    param_1 = (undefined8 *)(puVar1 + -0x70);
    func_0x0001077432e4();
    func_0x000107743510();
    unaff_x19 = (undefined8 *)(puVar1 + -0xa8);
    func_0x000104c2f714();
    func_0x000107743708();
    func_0x0001077419ec();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000104c2f714(puVar1 + -0xa8);
    func_0x000107743708();
    func_0x000107742904();
    puVar3 = &UNK_1077395f8;
    func_0x0001077438e0();
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x78) = puVar3;
    unaff_x29 = puVar1 + -0x80;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != 0) {
      puVar2 = (undefined8 *)*unaff_x23;
      func_0x0001077420ac(puVar1 + -0x4e0);
      func_0x000107743260();
      if ((bool)in_ZR) {
        func_0x0001077430d0();
        param_1 = puVar2;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        param_1 = puVar2;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)in_ZR) {
        func_0x000107742c5c();
        func_0x000107741c94(*(undefined8 *)(puVar1 + -200));
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742784();
          FUN_10772ead4();
          func_0x000107742c5c();
          func_0x000107742904();
          *(long *)(puVar1 + -0x510) = unaff_x20;
          *(undefined8 **)(puVar1 + -0x508) = unaff_x19;
          *(undefined1 **)(puVar1 + -0x500) = unaff_x29;
          *(undefined **)(puVar1 + -0x4f8) = &DAT_107739700;
          *puVar2 = &PTR_DAT_1109d1d80;
          func_0x000104c2f714(puVar2 + 9);
          func_0x00010772d754(puVar2 + 5);
          func_0x0001072c9884(puVar2 + 2);
          return puVar2;
        }
        return puVar2;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    unaff_x30 = &UNK_107739680;
    unaff_x21 = (long *)0x0;
    puVar1 = puVar1 + -0x4f0;
  }
  return unaff_x19;
}



/* Entry: 107739864; end: 10773992f;  */

undefined8 * FUN_107739864(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int unaff_w20;
  undefined1 auStack_128 [112];
  undefined8 auStack_b8 [17];
  
  func_0x0001077418ec();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
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
    puVar3 = auStack_128;
    func_0x000107739a10(puVar3);
    puVar2 = auStack_b8;
    func_0x000107739810(puVar2,puVar3);
    func_0x000107742c78();
    if ((bool)uVar1) {
      func_0x0001077435a4();
      func_0x000107743044();
    }
    else {
      func_0x00010774359c();
      func_0x0001077428fc();
    }
    func_0x000107742794();
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077420f0();
  FUN_10772ead4();
  func_0x000107742088();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107739b50; end: 107739b53;  */

undefined8 * FUN_107739b50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739d8c; end: 107739e5f;  */

undefined8 * FUN_107739d8c(long *param_1)

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
    func_0x000107739cd4();
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



/* Entry: 10773a0cc; end: 10773a0df;  */

void FUN_10773a0cc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773a484; end: 10773a497;  */

/* WARNING: Possible PIC construction at 0x00010773a668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a66c) */
/* WARNING: Removing unreachable block (ram,0x00010773a68c) */
/* WARNING: Removing unreachable block (ram,0x00010773a67c) */
/* WARNING: Removing unreachable block (ram,0x00010773a698) */

long * FUN_10773a484(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  double dVar7;
  double unaff_d8;
  double dVar8;
  double unaff_d9;
  double unaff_d10;
  undefined8 unaff_d11;
  double unaff_d12;
  undefined8 unaff_d13;
  
  pfVar4 = *(float **)*param_2;
  lVar5 = ((long *)*param_2)[1];
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x60) = unaff_d13;
    *(double *)(puVar1 + -0x58) = unaff_d12;
    *(undefined8 *)(puVar1 + -0x50) = unaff_d11;
    *(double *)(puVar1 + -0x48) = unaff_d10;
    *(double *)(puVar1 + -0x40) = unaff_d9;
    *(double *)(puVar1 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741d18(param_1);
    *(undefined8 *)(puVar1 + -0x68) = extraout_x8;
    uVar2 = lVar5 - (long)pfVar4 == 8;
    if ((bool)uVar2) {
      func_0x000107743184(*param_3);
      uVar2 = extraout_x8_00 == 8;
      unaff_x20 = param_3;
      if (!(bool)uVar2) goto code_r0x00010773a59c;
      func_0x00010774320c((double)*pfVar4,(double)pfVar4[1],puVar1 + -0xd8);
      func_0x000107743890();
      func_0x00010774320c(puVar1 + -0x150);
      dVar8 = (*(double *)(puVar1 + -0xd8) * 3.141592653589793) / 180.0;
      unaff_d9 = (*(double *)(puVar1 + -0x150) * 3.141592653589793) / 180.0;
      unaff_d11 = 0x3fe0000000000000;
      unaff_d10 = (((*(double *)(puVar1 + -0x150) - *(double *)(puVar1 + -0xd8)) * 3.141592653589793
                   ) / 180.0) * 0.5;
      unaff_d12 = ((*(double *)(puVar1 + -0x148) - *(double *)(puVar1 + -0xd0)) * 3.141592653589793)
                  / 180.0;
      _sin();
      _cos();
      dVar7 = unaff_d9;
      _cos();
      unaff_d8 = dVar8 * dVar7;
      dVar7 = unaff_d12 * 0.5;
      _sin(dVar7);
      dVar7 = SQRT(dVar7 * unaff_d8 * dVar7 + unaff_d10 * unaff_d10);
      _asin(dVar7);
      func_0x0001077423d4(dVar7 * 12742017.6);
      unaff_x19 = param_3 + 1;
    }
    else {
code_r0x00010773a59c:
      func_0x000107742604();
      func_0x000107742fdc();
      func_0x0001077427b8();
      func_0x000107742e4c();
      unaff_x19 = (long *)((ulong)unaff_x20 | 8);
    }
    func_0x00010726af18();
    func_0x000107741a80();
    if ((bool)uVar2) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    plVar3 = unaff_x19;
    func_0x000107742904();
    puVar6 = &UNK_10773a5ec;
    func_0x00010774309c();
    *(undefined1 **)(puVar1 + 0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 0x98) = puVar6;
    unaff_x29 = puVar1 + 0x90;
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
        *(undefined8 **)(puVar1 + -0x170) = unaff_x20;
        *(long **)(puVar1 + -0x168) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x160) = unaff_x29;
        *(undefined **)(puVar1 + -0x158) = &DAT_10773a6f0;
        *plVar3 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar3 + 9);
        func_0x00010772d754(plVar3 + 5);
        func_0x0001072c9884(plVar3 + 2);
        return plVar3;
      }
    }
    unaff_x20 = (undefined8 *)(puVar1 + -0x128);
    func_0x0001077427dc();
    func_0x000107743060();
    pfVar4 = (float *)**(long **)(puVar1 + -0x138);
    lVar5 = (*(long **)(puVar1 + -0x138))[1];
    param_1 = puVar1 + -0x48;
    param_3 = (undefined8 *)(puVar1 + -0x148);
    unaff_x30 = &UNK_10773a66c;
    puVar1 = puVar1 + -0x150;
  } while( true );
}



/* Entry: 10773a8bc; end: 10773a9b7;  */

undefined8 * FUN_10773a8bc(undefined8 *param_1)

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
      func_0x000107743060();
      func_0x000107743bc4();
      param_1 = (undefined8 *)&stack0x00000108;
      func_0x00010773a818();
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
      goto LAB_10773a964;
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
LAB_10773a964:
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



/* Entry: 10773ac90; end: 10773aca3;  */

void FUN_10773ac90(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773b018; end: 10773b11f;  */

/* WARNING: Possible PIC construction at 0x00010773b08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773b090) */
/* WARNING: Removing unreachable block (ram,0x00010773b0b8) */
/* WARNING: Removing unreachable block (ram,0x00010773b0a8) */
/* WARNING: Removing unreachable block (ram,0x00010773b0c4) */

void FUN_10773b018(void)

{
  undefined1 uVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  long unaff_x24;
  undefined1 auStack_40 [16];
  char cStack_30;
  undefined8 uStack_20;
  
  func_0x00010774309c();
  func_0x000107741834();
  func_0x0001077421ec();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x80);
      func_0x0001077427dc();
      goto code_r0x00010773b120;
    }
    func_0x0001077422b8();
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
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x000107742c44();
  func_0x000107742904();
code_r0x00010773b120:
  uStack_20 = unaff_x20;
  func_0x00010774314c();
  func_0x00010777509c();
  func_0x0001077437d0();
  if (cStack_30 == '\x01') {
    func_0x00010773b158(auStack_40);
  }
  return;
}



/* Entry: 10773b3ac; end: 10773b3af;  */

undefined8 * FUN_10773b3ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773b6ac; end: 10773b78b;  */

/* WARNING: Possible PIC construction at 0x00010773ba98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773ba9c) */
/* WARNING: Removing unreachable block (ram,0x00010773bab4) */
/* WARNING: Removing unreachable block (ram,0x00010773baa4) */
/* WARNING: Removing unreachable block (ram,0x00010773bac0) */

uint * FUN_10773b6ac(uint *param_1,undefined8 param_2,uint *param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 in_ZR;
  uint *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *extraout_x8;
  undefined8 extraout_x8_00;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *unaff_x22;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 in_stack_00000100;
  
  func_0x000107742f4c();
  puVar11 = &stack0x00000100;
  func_0x000107741930();
  func_0x000107741e70();
  func_0x000107742d78();
  func_0x000107741b7c();
  do {
    if (unaff_x25 == (undefined *)0x0) {
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
    param_1 = (uint *)*unaff_x24;
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
  func_0x000107742aa8();
  puVar12 = &UNK_10773b78c;
  func_0x000107742904();
  puVar6 = (undefined1 *)register0x00000008;
  puVar7 = extraout_x8;
  puVar10 = param_3;
  while( true ) {
    puVar9 = (uint *)(puVar6 + -0x140);
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined **)(puVar6 + -0x48) = unaff_x25;
    *(undefined8 **)(puVar6 + -0x40) = unaff_x24;
    *(long **)(puVar6 + -0x38) = param_4;
    *(uint **)(puVar6 + -0x30) = unaff_x22;
    *(uint **)(puVar6 + -0x28) = unaff_x21;
    *(uint **)(puVar6 + -0x20) = unaff_x20;
    *(uint **)(puVar6 + -0x18) = param_1;
    *(undefined8 **)(puVar6 + -0x10) = puVar11;
    *(undefined **)(puVar6 + -8) = puVar12;
    func_0x000107741d18();
    *(undefined8 *)(puVar6 + -0x58) = extraout_x8_00;
    unaff_x20 = puVar7;
    if (*(long *)(param_3 + 2) == 0) break;
    unaff_x20 = *(uint **)param_3;
    in_ZR = unaff_x20[0x1a] == 3;
    unaff_x21 = param_3;
    if (!(bool)in_ZR) break;
    func_0x000107573ddc();
    *(undefined8 *)(puVar6 + -0x110) = 0;
    *(undefined8 *)(puVar6 + -0x128) = 0;
    *(undefined8 *)(puVar6 + -0x130) = 0;
    *(undefined8 *)(puVar6 + -0x118) = 0;
    *(undefined8 *)(puVar6 + -0x120) = 0;
    *(undefined8 *)(puVar6 + -0x138) = 0;
    *(undefined8 *)(puVar6 + -0x140) = 0;
    unaff_x21 = (uint *)(*(long *)param_3 + 0x78);
    lVar5 = *(long *)(param_3 + 2) * 0x70;
    unaff_x25 = &UNK_10de8ee12;
    param_4 = (long *)&UNK_10f417f4d;
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
        puVar8 = puVar6 + -0x90;
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
        puVar8 = puVar6 + -0x100;
code_r0x00010773b8e8:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
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
    param_3 = (uint *)(puVar6 + -0x100);
    func_0x000107742ab8();
    func_0x000107742bf8();
    func_0x000104c2f714(puVar6 + -0x90);
    unaff_x24 = (undefined8 *)0x0;
    while( true ) {
      unaff_x20 = (uint *)(puVar6 + -0x140);
      func_0x00010527b690();
code_r0x00010773b98c:
      func_0x000107741c94(*(undefined8 *)(puVar6 + -0x58));
      if ((bool)in_ZR) {
        return unaff_x20;
      }
      ___stack_chk_fail();
      in_ZR = (int)param_3 == 1;
      if (!(bool)in_ZR) break;
      ___cxa_begin_catch(unaff_x20);
      func_0x00010774238c();
      ___cxa_end_catch();
    }
    func_0x00010527b690();
    func_0x00010774297c();
    puVar12 = &UNK_10773ba14;
    func_0x0001077438e0();
    *(undefined1 **)(puVar6 + -0x100) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0xf8) = puVar12;
    puVar11 = (undefined8 *)(puVar6 + -0x100);
    puVar10 = unaff_x22;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != (undefined8 *)0x0) {
      puVar9 = (uint *)*param_4;
      func_0x0001077420ac(puVar6 + -0x560);
      func_0x000107743260();
      if ((bool)in_ZR) {
        func_0x0001077430d0();
        param_3 = puVar9;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        param_3 = puVar9;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)in_ZR) {
        func_0x000107742c5c();
        func_0x000107741c94(*(undefined8 *)(puVar6 + -0x148));
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          puVar7 = puVar9;
          func_0x000107742c5c();
          func_0x000107742904();
          *(uint **)(puVar6 + -0x590) = unaff_x20;
          *(uint **)(puVar6 + -0x588) = puVar9;
          *(undefined8 **)(puVar6 + -0x580) = puVar11;
          *(undefined **)(puVar6 + -0x578) = &DAT_10773bb0c;
          *(undefined ***)puVar7 = &PTR_DAT_1109d1d80;
          func_0x000104c2f714(puVar7 + 0x12);
          func_0x00010772d754(puVar7 + 10);
          func_0x0001072c9884(puVar7 + 4);
          return puVar7;
        }
        return puVar9;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    puVar12 = &UNK_10773ba9c;
    puVar6 = puVar6 + -0x570;
    puVar7 = puVar9;
  }
  func_0x00010774238c();
  unaff_x22 = puVar10;
  goto code_r0x00010773b98c;
}



/* Entry: 10773bc10; end: 10773bd07;  */

void FUN_10773bc10(undefined8 param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 uStack_149;
  undefined **ppuStack_148;
  long *plStack_140;
  undefined ***pppuStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [120];
  
  func_0x000107741ca8();
  if (param_3[1] != 0) {
    lVar1 = *param_3;
    in_ZR = *(int *)(lVar1 + 0x68) == 3;
    if ((bool)in_ZR) {
      func_0x000107573ddc();
      param_2 = param_2 + 0x108;
      func_0x0001074d2700(param_2,lVar1);
      if (param_2 != 0) {
        ppuStack_148 = &PTR_DAT_1109d3688;
        pppuStack_130 = &ppuStack_148;
        plStack_140 = param_3;
        func_0x00010773021c(auStack_128,lVar1 + 0x38,*param_3 + 0x70,*param_3 + param_3[1] * 0x70,
                            &ppuStack_148,&uStack_149);
        func_0x0001077301bc(auStack_a8,auStack_128);
        func_0x000107742ab8();
        func_0x000107742e4c();
        func_0x0001077309b4(auStack_120);
        func_0x000107730a04(&ppuStack_148);
        goto LAB_10773bcd0;
      }
    }
  }
  func_0x00010774238c();
LAB_10773bcd0:
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742ac8();
  func_0x0001077309b4();
  func_0x000107730a04(&ppuStack_148);
  func_0x000107742904();
  return;
}



/* Entry: 10773bec8; end: 10773becb;  */

undefined8 * FUN_10773bec8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773c1ac; end: 10773c1b7;  */

/* WARNING: Possible PIC construction at 0x00010773c2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773c2b8) */
/* WARNING: Removing unreachable block (ram,0x00010773c2d4) */
/* WARNING: Removing unreachable block (ram,0x00010773c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010773c2e0) */

long * FUN_10773c1ac(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar4 = param_3;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741be8();
    func_0x000107879a74(puVar1 + -0xb0);
    param_3 = plVar4;
    func_0x000107879bec(puVar1 + -0xa0,*(undefined8 *)(puVar1 + -0xb0));
    func_0x0001072ae334(puVar1 + -0xb0);
    uVar2 = puVar1[-0x30] == '\x01';
    if ((bool)uVar2) {
      param_3 = (long *)(puVar1 + -0xa0);
      func_0x000107577fa0(unaff_x19 + 8);
      plVar3 = (long *)(puVar1 + -0xa0);
      func_0x000107296ad0();
    }
    else {
      plVar3 = (long *)(puVar1 + -0xa0);
      func_0x000107296ad0();
      func_0x00010774238c();
    }
    func_0x000107741a50();
    if ((bool)uVar2) {
      return plVar3;
    }
    ___stack_chk_fail();
    func_0x000107743418();
    func_0x000107296ad0();
    func_0x000107742904();
    *(undefined8 *)(puVar1 + -0xe0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xd8) = unaff_x21;
    *(long **)(puVar1 + -0xd0) = plVar4;
    *(long *)(puVar1 + -200) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xb8) = &UNK_10773c254;
    unaff_x29 = puVar1 + -0xc0;
    func_0x000107741910();
    *(undefined4 *)(puVar1 + -0x1a8) = 0;
    func_0x000107742168();
    plVar3 = (long *)*plVar3;
    func_0x000107741e48();
    func_0x000107743728();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      param_3 = plVar3;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar2 = (int)plVar4 == 1;
    if (!(bool)uVar2) break;
    func_0x0001077421a8();
    func_0x00010774371c();
    unaff_x30 = &UNK_10773c2b8;
    puVar1 = puVar1 + -0x210;
    unaff_x20 = plVar4;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  func_0x000107742904();
  *(long **)(puVar1 + -0x230) = plVar4;
  *(long *)(puVar1 + -0x228) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x220) = unaff_x29;
  *(undefined **)(puVar1 + -0x218) = &DAT_10773c320;
  *plVar3 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar3 + 9);
  func_0x00010772d754(plVar3 + 5);
  func_0x0001072c9884(plVar3 + 2);
  return plVar3;
}



/* Entry: 10773c5b4; end: 10773c6ab;  */

undefined8 * FUN_10773c5b4(undefined8 *param_1)

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
      func_0x00010773c410();
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



/* Entry: 10773ca60; end: 10773ca73;  */

void FUN_10773ca60(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773cf04; end: 10773cf17;  */

/* WARNING: Possible PIC construction at 0x00010773d0bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d0c0) */
/* WARNING: Removing unreachable block (ram,0x00010773d0e0) */
/* WARNING: Removing unreachable block (ram,0x00010773d0cc) */
/* WARNING: Removing unreachable block (ram,0x00010773d0ec) */

undefined8 *
FUN_10773cf04(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x40) = unaff_x28;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x27;
    *(long **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741cf4();
    unaff_x22 = (long *)param_2[0x20];
    if (unaff_x22 == (long *)0x0) {
      param_2 = (undefined8 *)0x1138369c0;
      unaff_x19 = (undefined8 *)(param_1 + 8);
      func_0x000104c2fe00();
      func_0x000107742a28();
    }
    else {
      func_0x0001077429f8();
      func_0x00010724ef84(puVar1 + -0x100,param_4);
      (**(code **)(*unaff_x22 + 0x18))(puVar1 + -0x80,unaff_x22,puVar1 + -0x100,unaff_x21);
      unaff_x21 = puVar1 + -0x100;
      func_0x000107743594();
      func_0x0001077438f4(puVar1 + -0x198);
      func_0x00010775f02c(puVar1 + -0x160,puVar1 + -0x198);
      func_0x000107572518(puVar1 + -0xf8,puVar1 + -0x160);
      func_0x000107570f18(unaff_x20 + 0x40,puVar1 + -0x100);
      func_0x00010727f7f8(puVar1 + -0xf8);
      func_0x00010726b164(puVar1 + -0x160);
      func_0x000107743a50();
      func_0x000104c318bc(puVar1 + -0x100,puVar1 + -0x80);
      param_2 = (undefined8 *)(puVar1 + -0x100);
      func_0x0001077432e4();
      unaff_x19 = (undefined8 *)(puVar1 + -0x100);
      func_0x000104c2f714();
      func_0x00010774358c();
    }
    func_0x000107741a68();
    if ((bool)in_ZR) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x00010727f7f8(unaff_x21 + 8);
    plVar2 = (long *)(puVar1 + -0x160);
    func_0x00010726b164();
    func_0x000107743a50();
    func_0x00010774358c();
    func_0x000107742904();
    puVar4 = &UNK_10773d054;
    func_0x000107743c34();
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = puVar4;
    unaff_x29 = puVar1 + -0x40;
    func_0x000107741970();
    func_0x000107742dfc();
    func_0x000107742168();
    puVar3 = (undefined8 *)*plVar2;
    func_0x000107741e48();
    func_0x000107743b0c();
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
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001077421a8();
    param_1 = puVar1 + -0xf8;
    param_4 = puVar1 + -0x130;
    func_0x0001077429d4();
    unaff_x30 = &UNK_10773d0c0;
    puVar1 = puVar1 + -0x1a0;
  }
  func_0x0001077420d8();
  func_0x000107741a68();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  FUN_10772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *(long *)(puVar1 + -0x1c0) = unaff_x20;
  *(undefined8 **)(puVar1 + -0x1b8) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x1b0) = unaff_x29;
  *(undefined **)(puVar1 + -0x1a8) = &DAT_10773d134;
  *puVar3 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar3 + 9);
  func_0x00010772d754(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 10773d2a0; end: 10773d393;  */

undefined8 * FUN_10773d2a0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x23;
  undefined1 auStack_c0 [56];
  undefined8 auStack_88 [17];
  
  func_0x000107743290();
  func_0x000107742bec();
  puVar2 = param_1;
  func_0x000107741b9c();
  func_0x0001077437a4();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x000107742538();
      puVar2 = auStack_88;
      func_0x00010773d230(puVar2,param_1,auStack_c0,unaff_x21 + 0x70);
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
      goto LAB_10773d350;
    }
    func_0x000107742700();
    puVar2 = (undefined8 *)*puVar2;
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
LAB_10773d350:
  func_0x000107742c4c();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107741edc();
  func_0x000107742c4c();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773d5f0; end: 10773d603;  */

void FUN_10773d5f0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773d928; end: 10773d94f;  */

void FUN_10773d928(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x000107742878();
  func_0x0001077430d8();
  func_0x0001077424f8(!(bool)in_ZR && in_NG == in_OV);
  return;
}



/* Entry: 10773dc94; end: 10773dc97;  */

undefined8 * FUN_10773dc94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773df70; end: 10773df7b;  */

/* WARNING: Possible PIC construction at 0x00010773e03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773e040) */
/* WARNING: Removing unreachable block (ram,0x00010773e058) */
/* WARNING: Removing unreachable block (ram,0x00010773e04c) */
/* WARNING: Removing unreachable block (ram,0x00010773e064) */

undefined8 *
FUN_10773df70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_107575adc();
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
    *(undefined **)(puVar1 + -0x78) = &UNK_10773dfd8;
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
    unaff_x30 = &UNK_10773e040;
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
  *(undefined **)(puVar1 + -0x1d8) = &DAT_10773e0a8;
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e28c; end: 10773e28f;  */

undefined8 * FUN_10773e28c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e510; end: 10773e613;  */

void FUN_10773e510(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long unaff_x24;
  undefined1 auStack_88 [136];
  
  func_0x000107743290();
  func_0x0001077429f8();
  func_0x000107741a34();
  func_0x000107742100();
  do {
    uVar1 = unaff_x24 + -2 < 0;
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
      goto LAB_10773e5c4;
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
LAB_10773e5c4:
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
  func_0x0001077424f8(uVar1);
  return;
}



/* Entry: 10773e83c; end: 10773e90b;  */

undefined8 * FUN_10773e83c(undefined8 *param_1,int param_2)

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
    func_0x00010773e7e0();
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



/* Entry: 10773eb08; end: 10773ebff;  */

void FUN_10773eb08(undefined8 *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong extraout_x8;
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
      goto LAB_10773ebbc;
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
LAB_10773ebbc:
  func_0x000107742c4c();
  func_0x000107741a80();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107741edc();
    func_0x000107742c4c();
    func_0x000107742904();
    uVar2 = extraout_x8;
    func_0x000107742718(extraout_x8,param_1);
    func_0x000107743c28();
    if ((bool)uVar1) {
      func_0x000107742dd4();
      func_0x000107742cf0();
      func_0x000107575b20();
      if ((uVar2 & 1) == 0) {
        func_0x000107742cf0();
        func_0x000107278530();
      }
    }
    func_0x000107742678();
    func_0x00010774323c();
    return;
  }
  return;
}



/* Entry: 10773eeb4; end: 10773ef6b;  */

undefined8 * FUN_10773eeb4(undefined8 *param_1,int param_2)

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
    func_0x0001077428e4(cVar2 == cVar1);
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



/* Entry: 10773f188; end: 10773f19b;  */

void FUN_10773f188(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773f484; end: 10773f4ef;  */

void FUN_10773f484(ulong param_1)

{
  undefined1 in_ZR;
  
  func_0x000107742718();
  func_0x000107743c28();
  if ((bool)in_ZR) {
    func_0x000107742dd4();
    func_0x000107742cf0();
    func_0x000104c2fc88();
    if ((param_1 & 1) == 0) {
      func_0x000107742cf0();
      func_0x000107278530();
    }
  }
  func_0x000107742678();
  func_0x00010774323c();
  return;
}



/* Entry: 10773f7e8; end: 10773f7fb;  */

void FUN_10773f7e8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773fae0; end: 10773faeb;  */

/* WARNING: Possible PIC construction at 0x00010773fb98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773fb9c) */
/* WARNING: Removing unreachable block (ram,0x00010773fbb4) */
/* WARNING: Removing unreachable block (ram,0x00010773fba8) */
/* WARNING: Removing unreachable block (ram,0x00010773fbc0) */

undefined8 * FUN_10773fae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar3 = param_3;
    puVar1 = (undefined8 *)(puVar2 + -0x70);
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x000107741be8();
    func_0x0001077433b0();
    param_3 = uVar3;
    func_0x000107751788();
    func_0x0001077425dc(puVar2[-0x30]);
    func_0x000107267ed0();
    func_0x000107741a50();
    if ((bool)in_ZR) {
      return puVar1;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + -0xa0) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x98) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x90) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x88) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x78) = &UNK_10773fb34;
    unaff_x29 = puVar2 + -0x80;
    func_0x000107741b04();
    func_0x000107743190();
    func_0x000107742168();
    puVar1 = (undefined8 *)*puVar1;
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
    in_ZR = (int)uVar3 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001077421a8();
    func_0x000107742a54();
    unaff_x30 = &UNK_10773fb9c;
    puVar2 = puVar2 + -0x1d0;
    unaff_x21 = uVar3;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *(undefined8 *)(puVar2 + -0x1f0) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x1e8) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x1e0) = unaff_x29;
  *(undefined **)(puVar2 + -0x1d8) = &DAT_10773fc04;
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  func_0x00010772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 10773fda4; end: 10773fe1b;  */

undefined8 * FUN_10773fda4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_70 [10];
  
  puVar1 = auStack_70;
  puVar2 = auStack_70;
  func_0x000107741b64(param_1,param_1);
  func_0x00010773fcf4(auStack_70);
  func_0x000107743214();
  if ((bool)in_ZR) {
    func_0x00010772fe40();
    func_0x000107741b4c();
    puVar2 = puVar1;
  }
  else {
    func_0x00010772fe28();
    func_0x0001077428fc();
  }
  func_0x00010774294c(auStack_70);
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077426a8();
  func_0x00010772fe9c();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 1077401e8; end: 1077401fb;  */

void FUN_1077401e8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107740668; end: 1077406af;  */

ulong FUN_107740668(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  while( true ) {
    if (uVar1 == param_2) {
      return param_2;
    }
    func_0x000107742be0();
    func_0x00010745fc58();
    if ((param_1 & 1) != 0) break;
    uVar1 = uVar1 + 0x70;
  }
  return uVar1;
}



/* Entry: 107740a7c; end: 107740a7f;  */

undefined8 * FUN_107740a7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107740da8; end: 107740e8b;  */

void FUN_107740da8(long param_1)

{
  undefined1 in_ZR;
  long *unaff_x24;
  long unaff_x25;
  
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
        func_0x000107742b70();
      }
      else {
        func_0x000107742c64();
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
    func_0x000107742698();
    func_0x00010727f7f8();
    func_0x000107742aa8();
    func_0x000107742904();
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
  return;
}



/* Entry: 1077410b4; end: 107741137;  */

void FUN_1077410b4(undefined8 param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = 0;
  switch(*(int *)(param_2 + 0x68)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
    goto code_r0x00010774112c;
  case 2:
    bVar1 = *(double *)(param_2 + 8) == 0.0;
    break;
  case 3:
  case 7:
    param_2 = param_2 + 8;
    func_0x000104c2d614(0,param_2);
    uVar2 = (uint)param_2 ^ 1;
    goto code_r0x00010774112c;
  default:
    plVar3 = *(long **)(param_2 + 8);
    if (*(int *)(param_2 + 0x68) == 8) {
      bVar1 = *plVar3 == plVar3[1];
    }
    else {
      bVar1 = plVar3[3] == 0;
    }
  }
  uVar2 = (uint)!bVar1;
code_r0x00010774112c:
  func_0x0001077425dc(uVar2);
  return;
}



/* Entry: 1077414f0; end: 1077414f3;  */

undefined8 * FUN_1077414f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077416e0; end: 10774173f;  */

bool FUN_1077416e0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_2;
  lVar1 = param_2[1];
  lVar5 = *param_3;
  if (lVar1 - lVar4 == param_3[1] - lVar5) {
    while ((bVar2 = lVar4 == lVar1, !bVar2 &&
           (lVar3 = lVar4, func_0x00010745de74(lVar4,lVar5), (int)lVar3 != 0))) {
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + 0x10;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 107744d3c; end: 107744e4f;  */

void FUN_107744d3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107743cb0();
  lVar3 = 0x113822c90;
  func_0x00010774617c(0x113822c90,&uStack_40);
  func_0x000107743cb0();
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lStack_58 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    func_0x00010741b144(&lStack_58,*(undefined8 *)(lVar3 + 0x38));
    plVar4 = (long *)(lVar3 + 0x30);
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      func_0x000107721028(&lStack_58,plVar4 + 2);
    }
    func_0x0001077453a0(lStack_58,lStack_50);
    lVar2 = lStack_50;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    for (lVar3 = lStack_58; lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
      uVar1 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (uVar1 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (param_1,&UNK_10f424fb2);
      }
      func_0x0001073727b8(param_1,lVar3);
    }
    func_0x000107264ef0(&lStack_58);
  }
  return;
}



/* Entry: 1077452ec; end: 10774533f;  */

void FUN_1077452ec(long param_1,long param_2)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010774652c();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  func_0x0001077450cc();
  plVar1 = (long *)(unaff_x20 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    func_0x000107744ea0();
  }
  return;
}



/* Entry: 1077459bc; end: 1077459cf;  */

undefined8 *
FUN_1077459bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return param_3;
  }
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



/* Entry: 1077460e4; end: 10774617b;  */

void FUN_1077460e4(long param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (1 < param_4) {
    uVar4 = param_4 - 2U >> 1;
    puVar1 = (undefined8 *)(param_1 + uVar4 * 0x10);
    func_0x000107746354(param_3,puVar1);
    if ((int)param_3 != 0) {
      uVar7 = *(undefined8 *)(param_2 + -8);
      uVar5 = *(undefined8 *)(param_2 + -0x10);
      puVar3 = (undefined8 *)(param_2 + -0x10);
      do {
        puVar2 = puVar1;
        uVar6 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1 >> 1;
        func_0x000107746500();
        puVar1 = (undefined8 *)(param_1 + uVar4 * 0x10);
        puVar3 = puVar2;
      } while ((param_3 & 1) != 0);
      puVar2[1] = uVar7;
      *puVar2 = uVar5;
    }
  }
  return;
}



/* Entry: 107746d5c; end: 107746fdb;  */

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
/* WARNING: Removing unreachable block (ram,0x0001077479f0) */
/* WARNING: Removing unreachable block (ram,0x0001077479f4) */
/* WARNING: Removing unreachable block (ram,0x0001077479f8) */
/* WARNING: Removing unreachable block (ram,0x000107747a04) */
/* WARNING: Removing unreachable block (ram,0x000107747a0c) */

void FUN_107746d5c(long param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *******pppppppuVar3;
  undefined *puVar4;
  undefined1 auStack_12d8 [336];
  undefined8 uStack_1188;
  undefined1 *puStack_1180;
  undefined8 uStack_1178;
  undefined1 auStack_1150 [904];
  undefined8 uStack_dc8;
  undefined8 ******ppppppuStack_d90;
  undefined *puStack_d88;
  undefined1 auStack_d80 [904];
  undefined8 uStack_9f8;
  undefined8 ******ppppppuStack_9c0;
  undefined *puStack_9b8;
  undefined1 auStack_9b0 [904];
  undefined8 uStack_628;
  undefined8 ******ppppppuStack_5f0;
  undefined *puStack_5e8;
  undefined1 auStack_5d8 [112];
  undefined1 auStack_568 [168];
  undefined1 auStack_4c0 [168];
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
  pppppppuVar3 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bool)in_ZR) {
    func_0x000107747ae8();
    func_0x000107747b98();
    puVar4 = (undefined *)0x107746de0;
    puVar1 = auStack_3d0;
  }
  else {
    func_0x000107747da0();
    if ((bool)in_ZR) {
      func_0x000107747ac8();
      func_0x000107747ba8();
      puVar4 = (undefined *)0x107746dfc;
      puVar1 = auStack_3d0;
    }
    else {
      func_0x000107747d94();
      if ((bool)in_ZR) {
        func_0x000107747ab8();
        func_0x000107747b68();
        puVar4 = (undefined *)0x107746e18;
        puVar1 = auStack_3d0;
      }
      else {
        func_0x000107747d88();
        if ((bool)in_ZR) {
          func_0x000107747a98();
          func_0x000107747b48();
          puVar4 = (undefined *)0x107746e34;
          puVar1 = auStack_3d0;
        }
        else {
          func_0x000107747df4();
          if ((bool)in_ZR) {
            func_0x000107747c24();
            func_0x000107747bb8();
            puVar4 = (undefined *)0x107746e50;
            puVar1 = auStack_3d0;
          }
          else {
            func_0x000107747de8();
            if ((bool)in_ZR) {
              func_0x000107747c08();
              func_0x000107747b78();
              puVar4 = (undefined *)0x107746e6c;
              puVar1 = auStack_3d0;
            }
            else {
              func_0x000107747ddc();
              if ((bool)in_ZR) {
                func_0x000107747bf8();
                func_0x000107747b58();
                puVar4 = (undefined *)0x107746e88;
                puVar1 = auStack_3d0;
              }
              else {
                func_0x000107747dd0();
                if ((bool)in_ZR) {
                  func_0x000107747be8();
                  func_0x000107747bc8();
                  puVar4 = (undefined *)0x107746ea4;
                  puVar1 = auStack_3d0;
                }
                else {
                  func_0x000107747dc4();
                  if (!(bool)in_ZR) {
                    func_0x000107747a3c(uStack_48);
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x000107747c44();
                      func_0x000107747c34();
                      func_0x000107747ce8();
                      func_0x000107747ca8();
                      puStack_3d8 = &UNK_107746fdc;
                      ppppppuStack_3e0 = (undefined8 ******)&stack0xfffffffffffffff0;
                      func_0x000107747a20();
                      func_0x000107747c7c();
                      func_0x000107747d60();
                      func_0x0001072964ec();
                      func_0x000107747cb0();
                      func_0x0001072964ec(auStack_4c0,auStack_5d8,param_1 + 0x38);
                      func_0x000107747d10();
                      do {
                        func_0x000107747d00();
                        func_0x000107747d3c();
                      } while (!(bool)in_ZR);
                      func_0x000107747c60();
                      func_0x000107747c58();
                      func_0x000107747ce0();
                      if (*(char *)(param_1 + 0x78) == '\x01') {
                        func_0x000107747c7c();
                        func_0x000107747d60();
                        func_0x00010726cd78();
                        func_0x000107747d24();
                        func_0x000107747d80();
                        func_0x000107747c58();
                      }
                      uVar2 = *(char *)(param_1 + 0x88) == '\x01';
                      if ((bool)uVar2) {
                        func_0x000107747c7c();
                        func_0x000107747d60();
                        func_0x00010726cd78();
                        func_0x000107747d24();
                        func_0x000107747d80();
                        func_0x000107747c58();
                      }
                      func_0x000107747a3c(uStack_418);
                      if (!(bool)uVar2) {
                        ___stack_chk_fail();
                        func_0x000107747d80();
                        func_0x000107747c58();
                        func_0x000107747ce8();
                        func_0x000107747ca8();
                        puStack_5e8 = &UNK_107747184;
                        ppppppuStack_5f0 = &ppppppuStack_3e0;
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
                          puVar4 = &UNK_107747208;
                          puVar1 = auStack_9b0;
                        }
                        else {
                          func_0x000107747da0();
                          if ((bool)uVar2) {
                            func_0x000107747ac8();
                            func_0x000107747ba8();
                            puVar4 = &UNK_107747224;
                            puVar1 = auStack_9b0;
                          }
                          else {
                            func_0x000107747d94();
                            if ((bool)uVar2) {
                              func_0x000107747ab8();
                              func_0x000107747b68();
                              puVar4 = &UNK_107747240;
                              puVar1 = auStack_9b0;
                            }
                            else {
                              func_0x000107747d88();
                              if ((bool)uVar2) {
                                func_0x000107747a98();
                                func_0x000107747b48();
                                puVar4 = &UNK_10774725c;
                                puVar1 = auStack_9b0;
                              }
                              else {
                                func_0x000107747df4();
                                if ((bool)uVar2) {
                                  func_0x000107747c24();
                                  func_0x000107747bb8();
                                  puVar4 = &UNK_107747278;
                                  puVar1 = auStack_9b0;
                                }
                                else {
                                  func_0x000107747de8();
                                  if ((bool)uVar2) {
                                    func_0x000107747c08();
                                    func_0x000107747b78();
                                    puVar4 = &UNK_107747294;
                                    puVar1 = auStack_9b0;
                                  }
                                  else {
                                    func_0x000107747ddc();
                                    if ((bool)uVar2) {
                                      func_0x000107747bf8();
                                      func_0x000107747b58();
                                      puVar4 = &UNK_1077472b0;
                                      puVar1 = auStack_9b0;
                                    }
                                    else {
                                      func_0x000107747dd0();
                                      if ((bool)uVar2) {
                                        func_0x000107747be8();
                                        func_0x000107747bc8();
                                        puVar4 = &UNK_1077472cc;
                                        puVar1 = auStack_9b0;
                                      }
                                      else {
                                        func_0x000107747dc4();
                                        if ((bool)uVar2) {
                                          func_0x000107747bd8();
                                          func_0x000107747b88();
                                          puVar4 = &UNK_1077472e8;
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
                                          puStack_9b8 = &UNK_107747404;
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
                                          pppppppuVar3 = &ppppppuStack_9c0;
                                          if ((bool)uVar2) {
                                            func_0x000107747ae8();
                                            func_0x000107747b98();
                                            puVar4 = &UNK_107747488;
                                            puVar1 = auStack_d80;
                                          }
                                          else {
                                            func_0x000107747da0();
                                            if ((bool)uVar2) {
                                              func_0x000107747ac8();
                                              func_0x000107747ba8();
                                              puVar4 = &UNK_1077474a4;
                                              puVar1 = auStack_d80;
                                            }
                                            else {
                                              func_0x000107747d94();
                                              if ((bool)uVar2) {
                                                func_0x000107747ab8();
                                                func_0x000107747b68();
                                                puVar4 = &UNK_1077474c0;
                                                puVar1 = auStack_d80;
                                              }
                                              else {
                                                func_0x000107747d88();
                                                if ((bool)uVar2) {
                                                  func_0x000107747a98();
                                                  func_0x000107747b48();
                                                  puVar4 = &UNK_1077474dc;
                                                  puVar1 = auStack_d80;
                                                }
                                                else {
                                                  func_0x000107747df4();
                                                  if ((bool)uVar2) {
                                                    func_0x000107747c24();
                                                    func_0x000107747bb8();
                                                    puVar4 = &UNK_1077474f8;
                                                    puVar1 = auStack_d80;
                                                  }
                                                  else {
                                                    func_0x000107747de8();
                                                    if ((bool)uVar2) {
                                                      func_0x000107747c08();
                                                      func_0x000107747b78();
                                                      puVar4 = &UNK_107747514;
                                                      puVar1 = auStack_d80;
                                                    }
                                                    else {
                                                      func_0x000107747ddc();
                                                      if ((bool)uVar2) {
                                                        func_0x000107747bf8();
                                                        func_0x000107747b58();
                                                        puVar4 = &UNK_107747530;
                                                        puVar1 = auStack_d80;
                                                      }
                                                      else {
                                                        func_0x000107747dd0();
                                                        if ((bool)uVar2) {
                                                          func_0x000107747be8();
                                                          func_0x000107747bc8();
                                                          puVar4 = &UNK_10774754c;
                                                          puVar1 = auStack_d80;
                                                        }
                                                        else {
                                                          func_0x000107747dc4();
                                                          if ((bool)uVar2) {
                                                            func_0x000107747bd8();
                                                            func_0x000107747b88();
                                                            puVar4 = &UNK_107747568;
                                                            puVar1 = auStack_d80;
                                                          }
                                                          else {
                                                            func_0x000107747a3c(uStack_9f8);
                                                            if ((bool)uVar2) {
                                                              return;
                                                            }
                                                            ___stack_chk_fail();
                                                            func_0x000107747c44();
                                                            func_0x000107747c34();
                                                            func_0x000107747ce8();
                                                            func_0x000107747ca8();
                                                            puStack_d88 = &UNK_107747684;
                                                            pppppppuVar3 = &ppppppuStack_d90;
                                                            puVar1 = auStack_1150;
                                                            ppppppuStack_d90 = &ppppppuStack_9c0;
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
                                                              puVar1 = auStack_1150;
                                                            }
                                                            else {
                                                              func_0x000107747da0();
                                                              if ((bool)uVar2) {
                                                                func_0x000107747ac8();
                                                                func_0x000107747ba8();
                                                                puVar4 = &UNK_107747724;
                                                                puVar1 = auStack_1150;
                                                              }
                                                              else {
                                                                func_0x000107747d94();
                                                                if ((bool)uVar2) {
                                                                  func_0x000107747ab8();
                                                                  func_0x000107747b68();
                                                                  puVar4 = &UNK_107747740;
                                                                  puVar1 = auStack_1150;
                                                                }
                                                                else {
                                                                  func_0x000107747d88();
                                                                  if ((bool)uVar2) {
                                                                    func_0x000107747a98();
                                                                    func_0x000107747b48();
                                                                    puVar4 = &UNK_10774775c;
                                                                    puVar1 = auStack_1150;
                                                                  }
                                                                  else {
                                                                    func_0x000107747df4();
                                                                    if ((bool)uVar2) {
                                                                      func_0x000107747c24();
                                                                      func_0x000107747bb8();
                                                                      puVar4 = &UNK_107747778;
                                                                      puVar1 = auStack_1150;
                                                                    }
                                                                    else {
                                                                      func_0x000107747de8();
                                                                      if ((bool)uVar2) {
                                                                        func_0x000107747c08();
                                                                        func_0x000107747b78();
                                                                        puVar4 = &UNK_107747794;
                                                                        puVar1 = auStack_1150;
                                                                      }
                                                                      else {
                                                                        func_0x000107747ddc();
                                                                        if ((bool)uVar2) {
                                                                          func_0x000107747bf8();
                                                                          func_0x000107747b58();
                                                                          puVar4 = &UNK_1077477b0;
                                                                          puVar1 = auStack_1150;
                                                                        }
                                                                        else {
                                                                          func_0x000107747dd0();
                                                                          if ((bool)uVar2) {
                                                                            func_0x000107747be8();
                                                                            func_0x000107747bc8();
                                                                            puVar4 = &UNK_1077477cc;
                                                                            puVar1 = auStack_1150;
                                                                          }
                                                                          else {
                                                                            func_0x000107747dc4();
                                                                            if (!(bool)uVar2) {
                                                                              func_0x000107747a3c(
                                                  uStack_dc8);
                                                  if ((bool)uVar2) {
                                                    return;
                                                  }
                                                  ___stack_chk_fail();
                                                  func_0x000107747c44();
                                                  func_0x000107747c34();
                                                  func_0x000107747ce8();
                                                  func_0x000107747ca8();
                                                  uStack_1178 = 0x1f8;
                                                  puStack_1180 = auStack_568;
                                                  func_0x000107747a88();
                                                  uStack_1188 = extraout_x8_00;
                                                  func_0x000107747c7c();
                                                  func_0x000107747d60();
                                                  func_0x0001072964ec();
                                                  func_0x000107747cb0();
                                                  func_0x000107747d08();
                                                  func_0x000107747d10(extraout_x8,auStack_12d8);
                                                  do {
                                                    func_0x000107747d34();
                                                    func_0x000107747d6c();
                                                  } while (!(bool)uVar2);
                                                  func_0x000107747c60();
                                                  func_0x000107747c58();
                                                  func_0x000107747a3c(uStack_1188);
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
                        goto code_r0x000107278574;
                      }
                    }
                    return;
                  }
                  func_0x000107747bd8();
                  func_0x000107747b88();
                  puVar4 = (undefined *)0x107746ec0;
                  puVar1 = auStack_3d0;
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000107278574:
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar3;
  *(undefined **)(puVar1 + -8) = puVar4;
  *(undefined8 *)(puVar1 + -0x18) = 0x1f8;
  func_0x000107278594(puVar1 + 0x78,puVar1 + -0x18,puVar1 + 0xe8);
  return;
}



/* Entry: 1077481e8; end: 10774823f;  */

undefined8 * FUN_1077481e8(undefined8 *param_1)

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



/* Entry: 107749bfc; end: 107749c0b;  */

long FUN_107749bfc(long param_1)

{
  func_0x000100060934(param_1,&UNK_10f4252a2);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 10774a198; end: 10774a1ab;  */

void FUN_10774a198(void)

{
  func_0x00010774a1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774a60c; end: 10774a65f;  */

void FUN_10774a60c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = param_2;
  uStack_28 = param_3;
  while (lStack_30 != param_4) {
    func_0x0001072628ec(auStack_48,param_1,uStack_28);
    func_0x000107262260(&lStack_30);
  }
  return;
}



/* Entry: 10774a77c; end: 10774a78f;  */

void FUN_10774a77c(void)

{
  func_0x00010774a748();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774b37c; end: 10774b3a3;  */

undefined8 FUN_10774b37c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x000107460d64(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10774b80c; end: 10774ba53;  */

/* WARNING: Possible PIC construction at 0x00010774b940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774b944) */
/* WARNING: Removing unreachable block (ram,0x00010774b94c) */
/* WARNING: Removing unreachable block (ram,0x00010774b950) */
/* WARNING: Removing unreachable block (ram,0x00010774b954) */

double FUN_10774b80c(double param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double *pdStack_178;
  double *pdStack_170;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_108 [3];
  double dStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  double adStack_c8 [6];
  long lStack_98;
  undefined8 uStack_88;
  
  func_0x00010774e944();
  func_0x00010774e8bc();
  uStack_88 = extraout_x8;
  func_0x00010774e914();
  uVar4 = param_1 == 0.0;
  dVar7 = param_1;
  dVar8 = param_1;
  adStack_c8[0] = param_1;
  if (!(bool)uVar4) {
    dVar7 = 0.0;
    adStack_c8[4] = 0.0;
    adStack_c8[3] = 0.0;
    lStack_98 = 0;
    adStack_c8[5] = 0.0;
    adStack_c8[2] = 0.0;
    adStack_c8[1] = 0.0;
    func_0x00010774e954(unaff_x21[1]);
    uStack_120 = 0;
    uStack_118 = 0;
    auStack_108[0] = 0;
    func_0x00010774edc8();
    do {
      while( true ) {
        do {
          dVar8 = adStack_c8[0];
          if (lStack_98 == 0) goto LAB_10774ba10;
          func_0x00010774e9fc();
          uVar3 = uStack_d0;
          uVar2 = uStack_d8;
          uVar1 = uStack_e0;
          uVar6 = uStack_e8;
          uVar4 = dStack_f0 == adStack_c8[0];
          dVar7 = dStack_f0;
        } while (adStack_c8[0] <= dStack_f0);
        uVar5 = (uStack_e0 - uStack_e8) + 1;
        if ((uVar5 < 0x65) && (uVar5 = (uStack_d0 - uStack_d8) + 1, uVar5 < 0x65)) break;
        uVar4 = uVar5 == 100;
        func_0x00010774bfbc(&uStack_120,&uStack_e8);
        func_0x00010774bfbc(auStack_150,&uStack_d8);
        pdStack_178 = adStack_c8 + 1;
        pdStack_170 = adStack_c8;
        func_0x00010774ee38();
        func_0x00010774c01c();
        func_0x00010774ee38();
        func_0x00010774c01c();
        func_0x00010774c01c(&pdStack_178,auStack_108,auStack_150);
        func_0x00010774c01c(&pdStack_178,auStack_108,auStack_138);
      }
      uVar5 = unaff_x21[1] - *unaff_x21 >> 4;
      uVar4 = uStack_e8 <= uStack_e0 && uStack_e0 == uVar5;
      if ((uStack_e8 > uStack_e0 || uVar5 <= uStack_e0) ||
         (uVar5 = unaff_x20[1] - *unaff_x20 >> 4,
         uVar4 = uStack_d8 <= uStack_d0 && uStack_d0 == uVar5,
         uStack_d8 > uStack_d0 || uVar5 <= uStack_d0)) {
        func_0x00010774eb00();
        dVar7 = dStack_f0;
        dVar8 = param_1;
        goto LAB_10774ba10;
      }
      func_0x00010774ea40();
      for (; uVar6 <= uVar1; uVar6 = uVar6 + 1) {
        if (uVar2 <= uVar3) {
          dVar7 = *(double *)(*unaff_x21 + uVar6 * 0x10);
          goto code_r0x00010774ba54;
        }
      }
      uVar4 = !NAN(param_1);
      dVar8 = param_1;
      if (NAN(param_1)) goto LAB_10774ba10;
      dVar7 = param_1;
      if (adStack_c8[0] <= param_1) {
        dVar7 = adStack_c8[0];
      }
      uVar4 = dVar7 == 0.0;
      adStack_c8[0] = dVar7;
    } while (!(bool)uVar4);
    dVar8 = 0.0;
LAB_10774ba10:
    func_0x00010774ec70();
  }
  func_0x00010774e8a8(uStack_88);
  if ((bool)uVar4) {
    return dVar8;
  }
  ___stack_chk_fail();
  func_0x00010774ec70();
  func_0x00010774e9a0();
code_r0x00010774ba54:
  func_0x00010739c1b8();
  return SQRT(dVar7);
}



/* Entry: 10774c1ec; end: 10774c213;  */

void FUN_10774c1ec(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10774c5a0; end: 10774c5bb;  */

void FUN_10774c5a0(void)

{
  func_0x00010774c5bc();
  return;
}



/* Entry: 10774cc50; end: 10774cc83;  */

undefined1 FUN_10774cc50(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 != param_2) {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      lVar1 = *param_1;
      plVar2 = param_1 + 1;
      param_1 = param_1 + 3;
    } while (0x20 < (ulong)(*plVar2 - lVar1));
  }
  return 0;
}



/* Entry: 10774d544; end: 10774d6a3;  */

/* WARNING: Possible PIC construction at 0x00010774d830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774d834) */

double FUN_10774d544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double *param_5,undefined8 *param_6,double *param_7,double **param_8)

{
  double **ppdVar1;
  double **ppdVar2;
  double *pdVar3;
  ulong uVar4;
  double **ppdVar5;
  undefined1 uVar6;
  double **ppdVar7;
  double **ppdVar8;
  double ***pppdVar9;
  double ***pppdVar10;
  double *pdVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  double *pdVar12;
  double **extraout_x8_02;
  long lVar13;
  double **ppdVar14;
  double **ppdVar15;
  ulong unaff_x26;
  double **unaff_x27;
  double *unaff_x28;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double *pdStack_220;
  double *pdStack_218;
  double *pdStack_210;
  double **ppdStack_208;
  double *pdStack_200;
  double **ppdStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  double **ppdStack_1d8;
  undefined1 uStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a8;
  double *pdStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_160;
  double dStack_150;
  double dStack_148;
  double **appdStack_e0 [3];
  undefined1 auStack_c8 [24];
  double dStack_b0;
  double dStack_a8;
  double *pdStack_a0;
  double *pdStack_98;
  double dStack_90;
  double dStack_88;
  double *pdStack_80;
  double *pdStack_78;
  undefined8 uStack_68;
  
  pppdVar9 = appdStack_e0;
  pdVar11 = param_7;
  ppdVar7 = param_8;
  func_0x00010774e8bc();
  dStack_88 = pdVar11[1];
  dVar19 = *pdVar11;
  pdStack_78 = ppdVar7[1];
  pdStack_80 = *ppdVar7;
  dStack_90 = dVar19;
  uStack_68 = extraout_x8;
  func_0x00010774ebc4(auStack_c8,&dStack_90);
  func_0x00010774eaf8(param_5,auStack_c8);
  dStack_a8 = param_7[1];
  dVar17 = *param_7;
  pdStack_98 = param_8[1];
  pdStack_a0 = *param_8;
  dStack_b0 = dVar17;
  func_0x00010774ebc4(appdStack_e0,&dStack_b0);
  func_0x00010774eaf8(param_6,appdStack_e0);
  func_0x00010774ed6c();
  func_0x00010774eaa8();
  dStack_88 = param_5[1];
  dVar16 = *param_5;
  pdStack_78 = (double *)param_6[1];
  pdStack_80 = (double *)*param_6;
  dStack_90 = dVar16;
  func_0x00010774ebc4(auStack_c8,&dStack_90);
  func_0x00010774eaf8(param_7,auStack_c8);
  dStack_a8 = param_5[1];
  dVar18 = *param_5;
  pdStack_98 = (double *)param_6[1];
  pdStack_a0 = (double *)*param_6;
  dStack_b0 = dVar18;
  func_0x00010774ebc4(appdStack_e0,&dStack_b0);
  ppdVar7 = param_8;
  func_0x00010774eaf8();
  if (dVar19 <= dVar17) {
    dVar17 = dVar19;
  }
  if (dVar16 <= dVar18) {
    dVar18 = dVar16;
  }
  func_0x00010774ed6c();
  func_0x00010774eaa8();
  uVar6 = dVar18 == dVar17;
  dVar19 = dVar18;
  if (dVar17 <= dVar18) {
    dVar19 = dVar17;
  }
  func_0x00010774e8a8(uStack_68,dVar19);
  if ((bool)uVar6) {
    return dVar19;
  }
  ___stack_chk_fail();
  func_0x00010774ed6c();
  func_0x00010774eaa8();
  func_0x00010774e9a0();
  ppdVar8 = ppdVar7;
  pppdVar10 = pppdVar9;
  dStack_150 = dVar18;
  dStack_148 = dVar17;
  func_0x00010774e8bc();
  dVar17 = **ppdVar8;
  dVar18 = (*ppdVar8)[1];
  uStack_160 = extraout_x8_00;
  func_0x00010774e988(**pppdVar10);
  func_0x00010774ee24();
  if (!(bool)uVar6) {
    dVar17 = 0.0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    lStack_198 = 0;
    pdStack_1a0 = (double *)0x0;
    func_0x00010774eb70(ppdVar7[1]);
    lStack_1e8 = extraout_x8_01 + -1;
    ppdStack_1f8 = (double **)0x0;
    uStack_1f0 = 0;
    uStack_1e0 = 0;
    ppdStack_1d8 = (double **)0x0;
    func_0x00010774ba6c(&pdStack_1a0,&ppdStack_1f8);
    ppdVar8 = *pppdVar9;
    pppdVar10 = (double ***)pppdVar9[1];
    func_0x00010774cea0();
    dStack_1c8 = dVar17;
    dStack_1c0 = dVar18;
    func_0x00010774eca8();
    uStack_1b8 = param_3;
    uStack_1b0 = param_4;
    while (dVar19 = dStack_1a8, lStack_178 != 0) {
      uVar4 = 0;
      if (unaff_x26 != 0) {
        uVar4 = uStack_180 / unaff_x26;
      }
      pdVar12 = (double *)
                (*(long *)(lStack_198 + uVar4 * 8) +
                (uStack_180 - uVar4 * unaff_x26) * (long)unaff_x27);
      dVar19 = *pdVar12;
      param_8 = (double **)pdVar12[1];
      ppdVar1 = (double **)pdVar12[2];
      ppdVar8 = &pdStack_1a0;
      func_0x00010774bdd0();
      uVar6 = dVar19 == dStack_1a8;
      dVar17 = dStack_1a8;
      if (dVar19 < dStack_1a8) {
        uVar4 = (long)ppdVar1 + (1 - (long)param_8);
        if (0x32 < uVar4) {
          uStack_1d0 = param_8 <= ppdVar1;
          if ((bool)uStack_1d0) {
            uStack_1f0 = (long)param_8 + (uVar4 >> 1);
            ppdStack_1f8 = param_8;
            uStack_1e0 = uStack_1f0;
            ppdStack_1d8 = ppdVar1;
          }
          else {
            ppdStack_1f8 = (double **)((ulong)ppdStack_1f8 & 0xffffffffffffff00);
            uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
          }
          lStack_1e8 = CONCAT71(lStack_1e8._1_7_,uStack_1d0);
          pdStack_218 = &dStack_1a8;
          pdStack_200 = &dStack_1c8;
          ppdVar8 = &pdStack_220;
          pppdVar10 = &ppdStack_1f8;
          pdStack_220 = unaff_x28;
          pdStack_210 = pdVar11;
          ppdStack_208 = ppdVar7;
          goto code_r0x00010774d974;
        }
        func_0x00010774eb70(ppdVar7[1]);
        uVar6 = param_8 <= ppdVar1 && ppdVar1 == extraout_x8_02;
        if (param_8 > ppdVar1 || extraout_x8_02 <= ppdVar1) {
          func_0x00010774eb00();
          break;
        }
        lVar13 = (long)param_8 << 4;
        ppdVar14 = (double **)((long)param_8 - 1);
code_r0x00010774d7b4:
        ppdVar14 = (double **)((long)ppdVar14 + 1);
        uVar6 = ppdVar14 == ppdVar1;
        if (ppdVar14 <= ppdVar1) goto code_r0x00010774d7c0;
        func_0x00010774ea40();
        while (param_8 != ppdVar1) {
          param_8 = (double **)((long)param_8 + 1);
          ppdVar2 = pppdVar9[1];
          ppdVar15 = ppdVar14;
          for (unaff_x27 = *pppdVar9; unaff_x28 = pdVar11, unaff_x27 != ppdVar2;
              unaff_x27 = unaff_x27 + 3) {
            unaff_x26 = 0;
            pdVar12 = *unaff_x27;
            pdVar3 = unaff_x27[1];
            ppdVar5 = (double **)0x0;
            while (ppdVar14 = ppdVar5,
                  uVar6 = (double **)((long)pdVar3 - (long)pdVar12 >> 4) == ppdVar14, !(bool)uVar6)
            {
              func_0x00010774eb18();
              func_0x000107871a3c();
              if (((ulong)ppdVar8 & 1) != 0) {
                func_0x00010774eca8();
                goto code_r0x00010774d908;
              }
              func_0x00010774eb18();
              FUN_10774d544();
              func_0x00010774ea2c();
              unaff_x26 = unaff_x26 + 0x10;
              ppdVar15 = ppdVar14;
              ppdVar5 = (double **)((long)ppdVar14 + 1);
            }
          }
          func_0x00010774eca8();
          ppdVar14 = ppdVar15;
        }
        uVar6 = !NAN(dVar19);
        param_8 = ppdVar14;
        if (NAN(dVar19)) break;
code_r0x00010774d908:
        func_0x00010774ed28();
        param_8 = ppdVar14;
        if ((bool)uVar6) {
          dVar19 = 0.0;
          break;
        }
      }
    }
    func_0x00010774ec44();
  }
  func_0x00010774e8a8(uStack_160);
  if ((bool)uVar6) {
    return dVar19;
  }
  ___stack_chk_fail();
  func_0x00010774ec44();
  func_0x00010774e9a0();
code_r0x00010774d974:
  if (*(char *)(pppdVar10 + 2) == '\x01') {
    func_0x00010774ebd4();
    func_0x00010774cbf4(ppdVar8[3]);
    func_0x00010774eae0();
    if (dVar17 < *param_8[1]) {
      func_0x00010774eab0();
    }
  }
  return dVar17;
code_r0x00010774d7c0:
  ppdVar8 = (double **)((long)*ppdVar7 + lVar13);
  pppdVar10 = pppdVar9;
  func_0x00010774ed74();
  lVar13 = lVar13 + 0x10;
  if (((ulong)ppdVar8 & 1) != 0) goto code_r0x00010774d908;
  goto code_r0x00010774d7b4;
}



/* Entry: 10774de98; end: 10774df9f;  */

long * FUN_10774de98(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_178 [32];
  long alStack_158 [15];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [120];
  undefined8 uStack_48;
  
  func_0x00010774e8bc();
  plVar1 = (long *)0xe0;
  uStack_48 = extraout_x8;
  __Znwm();
  func_0x000107325f14(alStack_158,param_2);
  func_0x00010726928c(auStack_178,param_3);
  func_0x000107327a90(auStack_c0,alStack_158);
  func_0x00010726928c(auStack_e0,auStack_178);
  func_0x00010774a6c0(plVar1,auStack_c0,auStack_e0);
  func_0x000104c3365c(auStack_e0);
  func_0x000107327aec(auStack_c0);
  func_0x0001002a8234(plVar1 + 5);
  *param_1 = (long)plVar1;
  func_0x000104c3365c(auStack_178);
  plVar2 = alStack_158;
  func_0x000107327aec();
  func_0x00010774e8a8(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010774a748(plVar1);
  func_0x000104c3365c(auStack_178);
  func_0x000107327aec(alStack_158);
  __ZdlPv(plVar1);
  plVar3 = plVar2;
  __Unwind_Resume();
  func_0x00010774eb88();
  lVar5 = *param_4;
  *plVar3 = lVar5;
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_DAT_1109d4220;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar5;
  }
  plVar1[1] = (long)puVar4;
  *plVar2 = 0;
  *(undefined1 *)(plVar1 + 2) = 1;
  return plVar1;
}



/* Entry: 10774e070; end: 10774e09b;  */

long * FUN_10774e070(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010774e058();
  }
  return param_1;
}



/* Entry: 10774e1ec; end: 10774e277;  */

void FUN_10774e1ec(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x00010774e278();
  if ((param_3 & 1) != 0) {
    func_0x00010774e388(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x78;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10774e4e8; end: 10774e503;  */

void FUN_10774e4e8(void)

{
  func_0x00010774e504();
  return;
}



/* Entry: 10774e74c; end: 10774e767;  */

void FUN_10774e74c(void)

{
  func_0x00010774e768();
  return;
}



/* Entry: 10774e8a8; end: 10774ee43;  */

void FUN_10774e8a8(void)

{
  return;
}



/* Entry: 10774f358; end: 10774f3fb;  */

/* WARNING: Possible PIC construction at 0x00010774f3a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774f3a4) */
/* WARNING: Removing unreachable block (ram,0x00010774f3d4) */
/* WARNING: Removing unreachable block (ram,0x00010774f3f8) */
/* WARNING: Removing unreachable block (ram,0x00010774f3c4) */

void FUN_10774f358(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_118 [8];
  undefined1 *puStack_110;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [56];
  undefined1 auStack_98 [120];
  
  func_0x0001077500ac(param_1,param_1);
  func_0x00010002b838(auStack_e8);
  func_0x0001072625b4(auStack_d0,auStack_e8);
  func_0x000107277488(auStack_98,auStack_d0);
  puVar1 = auStack_98;
  puStack_110 = auStack_98;
  func_0x00010774f448(auStack_118);
  func_0x000107750250();
  func_0x0001075393d4();
  func_0x0001077501c4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001077500d4();
  }
  return;
}



/* Entry: 10774f620; end: 10774f6d3;  */

/* WARNING: Possible PIC construction at 0x00010774f664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774f668) */
/* WARNING: Removing unreachable block (ram,0x00010774f680) */
/* WARNING: Removing unreachable block (ram,0x00010774f684) */
/* WARNING: Removing unreachable block (ram,0x00010774f69c) */
/* WARNING: Removing unreachable block (ram,0x00010774f6bc) */
/* WARNING: Removing unreachable block (ram,0x00010774f6d0) */
/* WARNING: Removing unreachable block (ram,0x00010774f694) */
/* WARNING: Removing unreachable block (ram,0x000107750210) */

void FUN_10774f620(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [72];
  undefined8 uStack_d8;
  undefined1 auStack_80 [80];
  
  func_0x0001077500ac();
  func_0x00010775027c();
  func_0x0001077501b0();
  func_0x000107750120();
  if (*param_3 != 0) {
    func_0x000107750228();
  }
  func_0x0001077500c0();
  uVar1 = 0x98;
  __Znwm();
  func_0x0001072c9ff4(auStack_130,param_1);
  func_0x0001072c9bc0(auStack_120,auStack_80);
  func_0x000107570fb0(uVar1,auStack_130,auStack_120);
  func_0x0001077501d0();
  func_0x000107750200();
  func_0x000107750098(uStack_d8);
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



/* Entry: 10774f8ec; end: 10774f8f7;  */

void FUN_10774f8ec(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    func_0x00010774ee44(&UNK_10f42544d,(undefined1 *)((long)register0x00000008 + -0x70));
    func_0x0001072c9c34((undefined1 *)((long)register0x00000008 + -0x70));
    func_0x000107750098(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107750158();
    func_0x0001072c9c34();
    unaff_x30 = FUN_10774f8ec;
    func_0x000107750118();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10774fbb8; end: 10774fbcb;  */

void FUN_10774fbb8(void)

{
  func_0x00010774fc58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774fd14; end: 10774fd17;  */

void FUN_10774fd14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774fee0; end: 10774ff07;  */

void FUN_10774fee0(undefined8 param_1)

{
  func_0x000107750244();
  func_0x0001077501e0(param_1,&PTR_DAT_1109d43f8);
  func_0x000107750194();
  return;
}



/* Entry: 10774ff9c; end: 10774ffbf;  */

undefined8 FUN_10774ff9c(undefined8 param_1)

{
  func_0x00010774ffc0(param_1,0);
  return param_1;
}



/* Entry: 107750078; end: 10775028f;  */

void FUN_107750078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077506b8; end: 10775072b;  */

undefined1 ***
FUN_1077506b8(undefined8 param_1,undefined8 **param_2,long param_3,undefined8 **param_4)

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
  uint extraout_w8_02;
  long unaff_x20;
  undefined1 auStack_198 [24];
  undefined1 **ppuStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 **ppuStack_168;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined1 uStack_149;
  undefined1 *apuStack_148 [3];
  undefined8 *puStack_130;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 uStack_e9;
  undefined8 *apuStack_e8 [5];
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_99;
  undefined1 *apuStack_98 [5];
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
    func_0x000107750ffc(&PTR_DAT_1109d45e8);
    param_2 = (undefined8 **)apuStack_48;
    func_0x000107869948();
    func_0x00010775106c();
    uVar8 = uStack_49;
  }
  func_0x000107750fa0(uVar8);
  if ((bool)uVar1) {
    pppuVar2 = (undefined1 ***)(ulong)(extraout_w8 & 1);
  }
  else {
    ___stack_chk_fail();
    func_0x00010775106c();
    func_0x000107751024();
    puStack_58 = &UNK_10775072c;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107750fc0();
    uVar1 = *(int *)(param_2 + 2) == 1;
    if ((bool)uVar1) {
      uVar8 = 0;
    }
    else {
      uStack_99 = 0;
      func_0x000107750ffc(&PTR_DAT_1109d4668);
      param_2 = (undefined8 **)apuStack_98;
      func_0x000107869d34();
      func_0x00010775102c();
      uVar8 = uStack_99;
    }
    func_0x000107750fa0(uVar8);
    if ((bool)uVar1) {
      pppuVar2 = (undefined1 ***)(ulong)(extraout_w8_00 & 1);
    }
    else {
      ___stack_chk_fail();
      func_0x00010775102c();
      func_0x000107751024();
      puStack_a8 = &UNK_1077507a0;
      ppuStack_b0 = &puStack_60;
      func_0x000107750fc0();
      uVar8 = 0;
      if (param_2[3] != (undefined8 *)0x0) {
        uStack_e9 = 0;
        func_0x000107750ffc(&PTR_DAT_1109d46e8);
        param_2 = apuStack_e8;
        func_0x000107869c04();
        func_0x00010750b370();
        uVar8 = uStack_e9;
      }
      func_0x000107750fa0(uVar8);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        pppuVar2 = (undefined1 ***)apuStack_e8;
        func_0x00010750b370();
        func_0x000107751024();
        puStack_f8 = &UNK_107750810;
        pppuStack_100 = &ppuStack_b0;
        func_0x000107750fc0();
        uVar1 = *(int *)(param_3 + 0x10) == 1;
        lVar6 = param_3;
        ppuVar7 = param_4;
        if ((bool)uVar1) {
          param_3 = unaff_x20;
          uVar8 = 0;
        }
        else {
          uStack_149 = 0;
          puVar3 = (undefined8 *)0x28;
          __Znwm();
          *puVar3 = &PTR_DAT_1109d47e8;
          puVar3[1] = param_2;
          puVar3[2] = &uStack_149;
          puVar3[3] = param_4;
          puVar3[4] = param_3;
          param_2 = (undefined8 **)apuStack_148;
          puStack_130 = puVar3;
          func_0x000107869d34();
          func_0x00010775102c();
          uVar8 = uStack_149;
        }
        func_0x000107750fa0(uVar8);
        if ((bool)uVar1) {
          return (undefined1 ***)(ulong)(extraout_w8_02 & 1);
        }
        ___stack_chk_fail();
        pppuVar4 = pppuVar2;
        func_0x00010775102c();
        func_0x000107751024();
        puStack_158 = &UNK_1077508c0;
        pppuVar5 = pppuVar4;
        ppuStack_180 = (undefined1 **)param_2;
        lStack_178 = lVar6;
        lStack_170 = param_3;
        ppuStack_168 = pppuVar2;
        pppuStack_160 = &pppuStack_100;
        while ((undefined8 **)ppuStack_180 != ppuVar7) {
          func_0x000107750910(auStack_198,pppuVar4,lStack_178);
          pppuVar5 = &ppuStack_180;
          func_0x000107262260(pppuVar5);
        }
        return pppuVar5;
      }
      pppuVar2 = (undefined1 ***)(ulong)(extraout_w8_01 & 1);
    }
  }
  return pppuVar2;
}



/* Entry: 1077509b8; end: 1077509db;  */

undefined8 FUN_1077509b8(undefined8 param_1)

{
  func_0x00010746027c(param_1);
  return param_1;
}



/* Entry: 107750b00; end: 107750b1b;  */

void FUN_107750b00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d45e8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107750ca0; end: 107750cb3;  */

undefined ** FUN_107750ca0(void)

{
  return &PTR_DAT_1109d46c8;
}



/* Entry: 107750ddc; end: 107750e3f;  */

void FUN_107750ddc(long param_1)

{
  undefined1 uVar1;
  undefined1 *extraout_x8;
  undefined1 *puVar2;
  uint extraout_w9;
  
  func_0x0001077510a0();
  if ((extraout_w9 & 1) == 0) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x10);
    func_0x0001072a02dc();
    puVar2 = *(undefined1 **)(param_1 + 8);
  }
  else {
    uVar1 = 1;
    puVar2 = extraout_x8;
  }
  *puVar2 = uVar1;
  return;
}



/* Entry: 107751230; end: 107751283;  */

undefined8 * FUN_107751230(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107752dd4();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107267e68(&uStack_30);
  return param_1;
}



/* Entry: 10775156c; end: 10775159f;  */

long FUN_10775156c(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001077521c0();
  }
  else {
    func_0x0001077521ec();
  }
  return param_1;
}



/* Entry: 107751a40; end: 107751cd7;  */

undefined1  [16] FUN_107751a40(long param_1,long ****param_2,long **param_3,long *param_4)

{
  long ****pppplVar1;
  undefined1 in_ZR;
  long ****pppplVar2;
  undefined8 *puVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long ***ppplVar8;
  long **pplVar9;
  ulong uVar10;
  int extraout_w10;
  int extraout_w10_00;
  long ****unaff_x20;
  long *****ppppplVar11;
  long *****unaff_x21;
  undefined8 uVar12;
  long lVar13;
  long *****unaff_x22;
  long ****unaff_d9;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plStack_290;
  uint uStack_288;
  char cStack_284;
  long ***ppplStack_270;
  long **pplStack_268;
  undefined8 uStack_260;
  undefined8 auStack_250 [2];
  long ***ppplStack_240;
  long **pplStack_238;
  undefined8 uStack_230;
  undefined4 uStack_1d8;
  long ***ppplStack_1c8;
  undefined4 uStack_168;
  undefined8 uStack_158;
  long ***ppplStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  long ***ppplStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long **pplStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  byte bStack_c8;
  long ***ppplStack_c0;
  undefined8 auStack_b8 [14];
  undefined8 uStack_48;
  
  func_0x000107752dbc();
  uStack_48 = extraout_x8;
  if ((int)param_4[0x31] == 0) {
    unaff_x21 = (long *****)param_4[0x1f];
    func_0x000107752eec();
    unaff_x20 = (long ****)*param_4;
    lStack_f8 = param_4[1];
    ppplStack_100 = (long ***)unaff_x20;
    if (lStack_f8 != 0) {
      do {
        func_0x000107752dd4();
      } while (extraout_w10 != 0);
    }
    pppplVar2 = unaff_x20;
    ppppplVar5 = unaff_x21;
    func_0x000107752224();
    uStack_108 = SUB84(ppppplVar5,0);
    uStack_104 = (undefined1)((ulong)ppppplVar5 >> 0x20);
    ppplStack_110 = (long ***)pppplVar2;
    if (((ulong)ppppplVar5 >> 0x20 & 1) == 0) {
      pplStack_e8._0_4_ = (uint)pplStack_e8 & 0xffffff00;
      bStack_c8 = 0;
    }
    else {
      pppplVar2 = unaff_x20;
      (*(code *)(*unaff_x20)[9])(unaff_x20);
      func_0x000107833d7c(&ppplStack_c0,unaff_x20,&ppplStack_110,pppplVar2);
      ppppplVar5 = (long *****)&ppplStack_c0;
      func_0x000107470b64(&pplStack_e8,ppppplVar5);
      func_0x000104c3365c(&ppplStack_c0);
    }
    func_0x000107267e44(&ppplStack_100);
  }
  else {
    func_0x000107752fec();
    ppppplVar5 = (long *****)*param_4;
    func_0x000107470b80(&pplStack_e8,ppppplVar5);
  }
  if (((bStack_c8 & 1) == 0) || (in_ZR = 1, (uint)pplStack_e8 == 7)) {
LAB_107751b20:
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    in_ZR = (uint)pplStack_e8 == 6;
    if ((bool)in_ZR) {
      ppppplVar5 = &pppplStack_e0;
      func_0x0001077529d8(param_1,ppppplVar5);
    }
    else {
      in_ZR = (uint)pplStack_e8 == 5;
      if ((bool)in_ZR) {
        func_0x000107752ae4(param_1,pppplStack_e0,pppplStack_d8);
        ppppplVar5 = (long *****)pppplStack_e0;
      }
      else {
        in_ZR = (uint)pplStack_e8 == 4;
        if ((bool)in_ZR) {
          func_0x000107752b9c(param_1,pppplStack_e0,pppplStack_d8);
          ppppplVar5 = (long *****)pppplStack_e0;
        }
        else {
          if ((uint)pplStack_e8 == 3) {
            ppplStack_100 = (long ***)0x0;
            lStack_f8 = 0;
            uStack_f0 = 0;
            for (ppppplVar5 = (long *****)pppplStack_e0;
                in_ZR = ppppplVar5 == (long *****)pppplStack_d8, !(bool)in_ZR;
                ppppplVar5 = ppppplVar5 + 2) {
              func_0x0001077529d8(&ppplStack_c0,ppppplVar5);
              func_0x000107752e60();
              func_0x00010726af18(auStack_b8);
            }
          }
          else if ((uint)pplStack_e8 == 2) {
            func_0x000107752ff4();
            for (; in_ZR = unaff_x21 == unaff_x22, !(bool)in_ZR; unaff_x21 = unaff_x21 + 3) {
              func_0x000107752ae4(&ppplStack_c0,*unaff_x21,unaff_x21[1]);
              func_0x000107752e60();
              func_0x00010726af18(unaff_x20 + 1);
            }
          }
          else {
            in_ZR = (uint)pplStack_e8 == 1;
            if (!(bool)in_ZR) goto LAB_107751b20;
            func_0x000107752ff4();
            for (; in_ZR = unaff_x21 == unaff_x22, !(bool)in_ZR; unaff_x21 = unaff_x21 + 3) {
              func_0x000107752b9c(&ppplStack_c0,*unaff_x21,unaff_x21[1]);
              func_0x000107752e60();
              func_0x00010726af18(unaff_x20 + 1);
            }
          }
          ppppplVar5 = (long *****)&ppplStack_100;
          func_0x000107277aa4(&ppplStack_c0,ppppplVar5);
          func_0x000107277d70(&ppplStack_100);
          param_2 = (long ****)ppplStack_c0;
          *(undefined8 *)(param_1 + 0x10) = auStack_b8[0];
          *(long ****)(param_1 + 8) = ppplStack_c0;
          ppplStack_c0 = (long ***)0x0;
          auStack_b8[0] = 0;
          *(undefined4 *)(param_1 + 0x68) = 8;
          func_0x00010726b188(&ppplStack_c0);
        }
      }
    }
  }
  ppplVar8 = &pplStack_e8;
  func_0x000107470b9c();
  func_0x000107752da8(uStack_48);
  if ((bool)in_ZR) {
    auVar14._8_8_ = ppppplVar5;
    auVar14._0_8_ = ppplVar8;
    return auVar14;
  }
  ___stack_chk_fail();
  func_0x000107277d70(&ppplStack_100);
  pppplVar2 = (long ****)&pplStack_e8;
  func_0x000107470b9c();
  func_0x000107752df4();
  ppppplVar6 = (long *****)&ppplStack_270;
  pppplVar4 = &ppplStack_270;
  func_0x000107752dbc();
  uStack_158 = extraout_x8_01;
  if (*(int *)(pppplVar2 + 0x31) == 0) {
    ppppplVar11 = (long *****)pppplVar2[0x1f];
    func_0x000107752eec();
    pppplVar1 = (long ****)*pppplVar2;
    pplStack_238 = (long **)pppplVar2[1];
    ppplStack_240 = (long ***)pppplVar1;
    if ((long ***)pplStack_238 != (long ***)0x0) {
      do {
        func_0x000107752dd4();
      } while (extraout_w10_00 != 0);
    }
    pppplVar2 = pppplVar1;
    func_0x000107752224();
    pplStack_268._0_5_ = SUB85(ppppplVar11,0);
    ppplStack_270 = (long ***)pppplVar2;
    if (((ulong)ppppplVar11 >> 0x20 & 1) == 0) {
      param_3 = (long **)0x0;
      ppppplVar5 = ppppplVar11;
      param_2 = unaff_d9;
    }
    else {
      (*(code *)(*pppplVar1)[7])(auStack_250,pppplVar1);
      puVar3 = auStack_250;
      func_0x000107330078();
      uVar12 = *(undefined8 *)*puVar3;
      pppplVar2 = (long ****)ppplStack_240;
      (*(code *)(*ppplStack_240)[9])();
      func_0x000107833d38(uVar12,&ppplStack_270,pppplVar2);
      ppppplVar5 = ppppplVar6;
    }
    pppplVar2 = &ppplStack_240;
    func_0x000107267e44(pppplVar2);
    if (((ulong)ppppplVar11 >> 0x20 & 1) == 0) goto code_r0x000107751de0;
  }
  else {
    func_0x000107752fec();
    ppplVar8 = *pppplVar2;
    in_ZR = *(int *)ppplVar8 + -1 == 5;
    switch(*(int *)ppplVar8 + -1) {
    case 0:
      pplVar9 = (long **)*ppplVar8[1];
      break;
    case 1:
    case 3:
      pplVar9 = ppplVar8[1];
      break;
    case 2:
    case 4:
      pplVar9 = ppplVar8[1];
      goto code_r0x000107751dfc;
    case 5:
      param_2 = (long ****)ppplVar8[1];
      param_3 = ppplVar8[2];
      goto code_r0x000107751e00;
    default:
code_r0x000107751de0:
      pppplVar4 = pppplVar2;
      *(undefined4 *)(extraout_x8_00 + 0x68) = 0;
      goto code_r0x000107751e78;
    }
    pplVar9 = (long **)*pplVar9;
code_r0x000107751dfc:
    param_2 = (long ****)*pplVar9;
    param_3 = (long **)pplVar9[1];
  }
code_r0x000107751e00:
  uStack_1d8 = 2;
  uStack_168 = 2;
  pplStack_238 = param_3;
  ppplStack_1c8 = (long ***)param_2;
  func_0x000107731b14(&ppplStack_270,&ppplStack_240,2);
  lVar13 = 0x78;
  do {
    func_0x00010726af18((long)&ppplStack_240 + lVar13);
    lVar13 = lVar13 + -0x70;
    in_ZR = lVar13 == -0x68;
  } while (!(bool)in_ZR);
  pplStack_238 = pplStack_268;
  ppplStack_240 = ppplStack_270;
  uStack_230 = uStack_260;
  ppplStack_270 = (long ***)0x0;
  pplStack_268 = (long **)0x0;
  uStack_260 = 0;
  ppppplVar5 = (long *****)&ppplStack_240;
  func_0x000107277aa4(auStack_250,ppppplVar5);
  func_0x000107752e38();
  func_0x000107277d70(&ppplStack_240);
  func_0x000107277d70(&ppplStack_270);
code_r0x000107751e78:
  func_0x000107752da8(uStack_158);
  if ((bool)in_ZR) {
    auVar15._8_8_ = ppppplVar5;
    auVar15._0_8_ = pppplVar4;
    return auVar15;
  }
  ___stack_chk_fail();
  pppplVar2 = &ppplStack_240;
  func_0x000107267e44();
  func_0x000107752df4();
  ppplVar8 = pppplVar2[0x1f];
  if (ppplVar8 == (long ***)0x0) {
    if (*(int *)(pppplVar2 + 0x31) == 0) {
      func_0x000107752eec();
      func_0x000107752f14(*pppplVar2);
      uVar10 = (ulong)plStack_290 & 0xffffffffffffff00;
      uVar7 = (ulong)uStack_288 | 0x100000000;
      if (cStack_284 == '\0') {
        uVar10 = 0;
        plStack_290 = (long *)0x0;
        uVar7 = 0;
      }
    }
    else {
      uVar10 = 0;
      plStack_290 = (long *)0x0;
      uVar7 = 0;
    }
  }
  else {
    plStack_290 = (long *)*ppplVar8;
    uVar10 = (ulong)plStack_290 & 0xffffffffffffff00;
    uVar7 = (ulong)*(uint *)(ppplVar8 + 1) | 0x100000000;
  }
  auVar16._0_8_ = (ulong)plStack_290 & 0xff | uVar10;
  auVar16._8_8_ = uVar7;
  return auVar16;
}



/* Entry: 10775211c; end: 107752147;  */

void FUN_10775211c(long param_1)

{
  long unaff_x19;
  
  func_0x000107752eb0();
  func_0x000104c2fe00();
  func_0x000104c2fe00(param_1 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1077522e8; end: 107752323;  */

undefined1 * FUN_1077522e8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  func_0x000107752324();
  return param_1;
}



/* Entry: 10775245c; end: 10775247f;  */

undefined8 FUN_10775245c(undefined8 param_1)

{
  func_0x000107752480();
  return param_1;
}



/* Entry: 107752630; end: 1077527b7;  */

undefined1  [16] FUN_107752630(float param_1,float param_2,ulong param_3)

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
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    uVar4 = param_3;
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
          if (puVar5 == (undefined8 *)0x0) goto LAB_1077526d8;
          uVar3 = puVar5[1];
          if (uVar3 != param_3) break;
          func_0x000107752fbc();
          if ((uVar4 & 1) != 0) {
            uVar2 = 0;
            puStack_68 = puVar5;
            goto LAB_1077527a4;
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
LAB_1077526d8:
  func_0x000107752fd8();
  func_0x000107752f6c();
  func_0x0001077527b8();
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
LAB_1077527a4:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = puStack_68;
  return auVar8;
}



/* Entry: 107752d5c; end: 107752d63;  */

void FUN_107752d5c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w10;
  
  if (*(int *)(*param_1 + 0x10) == 0) {
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



/* Entry: 1077534e0; end: 107753533;  */

void FUN_1077534e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d4908;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107753a30; end: 107753a6b;  */

undefined1 * FUN_107753a30(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  func_0x000107753a6c();
  return param_1;
}


