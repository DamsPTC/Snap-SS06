/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107736d60; end: 107736d6b;  */

/* WARNING: Possible PIC construction at 0x000107736e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107736e44) */
/* WARNING: Removing unreachable block (ram,0x000107736e60) */
/* WARNING: Removing unreachable block (ram,0x000107736e50) */
/* WARNING: Removing unreachable block (ram,0x000107736e6c) */

undefined8 * FUN_107736d60(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741be8();
    func_0x0001077433b0();
    func_0x00010724ef84();
    func_0x0001078bbe34(puVar1 + -0x78,puVar1 + -0x90);
    func_0x0001077439b8();
    func_0x0001077432e4();
    func_0x000104c2f714(puVar1 + -0x60);
    puVar2 = (undefined8 *)(puVar1 + -0x78);
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
    *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xb8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xb0) = unaff_x20;
    *(undefined8 *)(puVar1 + -0xa8) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x98) = &UNK_107736de0;
    unaff_x29 = puVar1 + -0xa0;
    func_0x000107741910();
    *(undefined4 *)(puVar1 + -0x188) = 0;
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
    unaff_x30 = &UNK_107736e44;
    puVar1 = puVar1 + -0x1f0;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x00010772ead4();
  func_0x0001077420d8();
  func_0x000107742904();
  *(undefined8 *)(puVar1 + -0x210) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x208) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x200) = unaff_x29;
  *(undefined **)(puVar1 + -0x1f8) = &DAT_107736eb4;
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107737024; end: 1077370f7;  */

undefined8 * FUN_107737024(undefined8 *param_1)

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
    func_0x000107736fb0();
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



/* Entry: 1077374a0; end: 1077374b3;  */

void FUN_1077374a0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077377f8; end: 1077377fb;  */

undefined8 * FUN_1077377f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107737ae8; end: 107737beb;  */

void FUN_107737ae8(void)

{
  undefined1 uVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  long unaff_x24;
  undefined1 auStack_1f0 [32];
  undefined8 uStack_1d0;
  undefined1 auStack_1b0 [432];
  
  func_0x000107743290();
  func_0x000107741834();
  func_0x000107742d28();
  func_0x000107743800();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x80);
      func_0x000107742f88();
      func_0x0001077436c8(auStack_1b0);
      func_0x00010774365c();
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
      goto LAB_107737b98;
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
  uVar1 = 0;
LAB_107737b98:
  func_0x000107742f34();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742128();
  func_0x000107742f34();
  func_0x000107742904();
  uStack_1d0 = unaff_x20;
  func_0x00010774314c();
  func_0x0001077755e0();
  func_0x0001077437d0();
  func_0x00010726b07c(auStack_1f0);
  return;
}



/* Entry: 107737edc; end: 107737eeb;  */

void FUN_107737edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [16];
  
  func_0x000107742d44(param_1,param_2,param_3);
  func_0x000107278b70();
  func_0x0001072d1220(auStack_30,param_2);
  func_0x0001077423a8();
  return;
}



/* Entry: 10773834c; end: 107738447;  */

undefined8 * FUN_10773834c(undefined8 *param_1)

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
      func_0x000107738160();
      func_0x000107743348();
      if ((bool)in_ZR) {
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



/* Entry: 1077387b8; end: 10773890b;  */

long FUN_1077387b8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  func_0x0001077438e0();
  if (param_1 != param_2) {
    lVar1 = param_1 + 0x20;
    func_0x000104c2fc44(lVar1,param_3);
    if ((int)lVar1 != 0) {
      lVar5 = 1;
      lVar1 = param_1;
      while (param_1 = param_2, lVar1 != param_2) {
        lVar6 = 0;
        lVar2 = lVar1;
        if (lVar5 < 0) {
          lVar9 = -lVar5;
          while ((lVar7 = lVar9, -lVar6 != lVar5 && (lVar7 = lVar6, lVar2 != param_2))) {
            func_0x00010002c810();
            lVar6 = lVar6 + 1;
          }
        }
        else {
          while ((lVar7 = lVar5, lVar9 = lVar5, lVar5 != lVar6 && (lVar7 = lVar6, lVar2 != param_2))
                ) {
            func_0x00010002c7d4();
            lVar6 = lVar6 + 1;
          }
        }
        lVar6 = param_2;
        if (lVar2 == param_2) {
LAB_107738898:
          uVar4 = (lVar7 - lVar9) + lVar5;
          if (uVar4 == 1) {
            return lVar6;
          }
          while (uVar3 = uVar4, uVar3 != 0) {
            uVar4 = uVar3 >> 1;
            lVar5 = lVar1;
            uVar8 = uVar4;
            while (0 < (long)uVar8) {
              func_0x00010002c7d4();
              uVar8 = uVar8 - 1;
            }
            lVar6 = lVar5 + 0x20;
            func_0x000104c2fc44(lVar6,param_3);
            if ((int)lVar6 != 0) {
              func_0x00010002c7d4();
              lVar1 = lVar5;
              uVar4 = uVar3 + ~uVar4;
            }
          }
          return lVar1;
        }
        uVar4 = lVar2 + 0x20;
        func_0x000104c2fc44(uVar4,param_3);
        lVar6 = lVar2;
        if ((uVar4 & 1) == 0) goto LAB_107738898;
        lVar5 = lVar5 << 1;
        lVar1 = lVar2;
      }
    }
  }
  return param_1;
}



/* Entry: 107738ba8; end: 107738d13;  */

void FUN_107738ba8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
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
  
  func_0x0001077429f8();
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  puStack_78 = &uStack_70;
  puStack_60 = &uStack_58;
  func_0x0001077386b8(&puStack_60,*(undefined8 *)*param_2,((undefined8 *)*param_2)[1]);
  func_0x0001077386b8(&puStack_78,*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x000107743184(*unaff_x21);
  uVar2 = (((long *)*unaff_x20)[1] - *(long *)*unaff_x20) / 0x38;
  uVar1 = extraout_x8 / 0x38;
  if ((ulong)(extraout_x8 / 0x38) <= uVar2) {
    uVar1 = uVar2;
  }
  func_0x0001072dd514(&uStack_90,uVar1);
  apuStack_a0[0] = puStack_60;
  puStack_48 = puStack_78;
  while ((puVar4 = puStack_48, puVar6 = apuStack_a0[0], apuStack_a0[0] != &uStack_58 &&
         (puStack_48 != &uStack_70))) {
    puVar3 = apuStack_a0[0] + 4;
    func_0x000104c2fc44(puVar3,puStack_48 + 4);
    if ((int)puVar3 == 0) {
      puVar4 = puVar4 + 4;
      func_0x000104c2fc44(puVar4,puVar6 + 4);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010002c7d4();
        apuStack_a0[0] = puVar6;
      }
      ppuVar5 = &puStack_48;
    }
    else {
      func_0x0001077439a4();
      ppuVar5 = apuStack_a0;
    }
    func_0x000107738794(ppuVar5);
  }
  while (puVar6 != &uStack_58) {
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



/* Entry: 107739160; end: 107739163;  */

undefined8 * FUN_107739160(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107739410; end: 1077394fb;  */

/* WARNING: Possible PIC construction at 0x00010773967c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107739680) */
/* WARNING: Removing unreachable block (ram,0x0001077396a0) */
/* WARNING: Removing unreachable block (ram,0x00010773968c) */
/* WARNING: Removing unreachable block (ram,0x0001077396b0) */

long * FUN_107739410(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long *unaff_x19;
  code *unaff_x20;
  long *unaff_x21;
  long lVar4;
  undefined1 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 auStack_1d0 [8];
  long alStack_1c8 [28];
  undefined1 auStack_e8 [136];
  
  puVar5 = &stack0xfffffffffffffff0;
  func_0x000107741834();
  func_0x000107741f50();
  do {
    uVar2 = unaff_x24 == 2;
    if ((bool)uVar2) {
      unaff_x20 = *(code **)(unaff_x22 + 0x80);
      unaff_x21 = alStack_1c8;
      func_0x00010774376c();
      (*unaff_x20)(auStack_e8);
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
      goto LAB_1077394bc;
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
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar2);
  uVar2 = 0;
LAB_1077394bc:
  func_0x0001077429e0();
  func_0x000107741a80();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x0001077429e0();
  puVar6 = &UNK_1077394fc;
  func_0x000107742904();
  puVar1 = auStack_1d0;
  while( true ) {
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(long **)(puVar1 + -0x28) = unaff_x21;
    *(code **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    func_0x000107743300();
    func_0x000107741ca8();
    *(undefined8 *)(puVar1 + -0xc0) = 0;
    *(undefined8 *)(puVar1 + -0xb8) = 0;
    *(undefined8 *)(puVar1 + -0xb0) = 0;
    func_0x0001072dd514(puVar1 + -0xc0,param_1[1]);
    unaff_x20 = (code *)*unaff_x21;
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
    param_1 = (long *)(puVar1 + -0x70);
    func_0x0001077432e4();
    func_0x000107743510();
    unaff_x19 = (long *)(puVar1 + -0xa8);
    func_0x000104c2f714();
    func_0x000107743708();
    func_0x0001077419ec();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x000104c2f714(puVar1 + -0xa8);
    func_0x000107743708();
    func_0x000107742904();
    puVar6 = &UNK_1077395f8;
    func_0x0001077438e0();
    *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x78) = puVar6;
    puVar5 = puVar1 + -0x80;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != 0) {
      plVar3 = (long *)*unaff_x23;
      func_0x0001077420ac(puVar1 + -0x4e0);
      func_0x000107743260();
      if ((bool)uVar2) {
        func_0x0001077430d0();
        param_1 = plVar3;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        param_1 = plVar3;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)uVar2) {
        func_0x000107742c5c();
        func_0x000107741c94(*(undefined8 *)(puVar1 + -200));
        if (!(bool)uVar2) {
          ___stack_chk_fail();
          func_0x000107742784();
          func_0x00010772ead4();
          func_0x000107742c5c();
          func_0x000107742904();
          *(code **)(puVar1 + -0x510) = unaff_x20;
          *(long **)(puVar1 + -0x508) = unaff_x19;
          *(undefined1 **)(puVar1 + -0x500) = puVar5;
          *(undefined **)(puVar1 + -0x4f8) = &DAT_107739700;
          *plVar3 = (long)&PTR_DAT_1109d1d80;
          func_0x000104c2f714(plVar3 + 9);
          func_0x00010772d754(plVar3 + 5);
          func_0x0001072c9884(plVar3 + 2);
          return plVar3;
        }
        return plVar3;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    puVar6 = &UNK_107739680;
    unaff_x21 = (long *)0x0;
    puVar1 = puVar1 + -0x4f0;
  }
  return unaff_x19;
}



/* Entry: 107739810; end: 107739863;  */

long * FUN_107739810(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  int unaff_w20;
  undefined1 auStack_1a8 [112];
  long alStack_138 [17];
  undefined1 auStack_78 [24];
  long alStack_60 [8];
  
  func_0x000107741be8();
  func_0x000107742e7c();
  func_0x0001078b699c();
  plVar2 = alStack_60;
  func_0x0001072625b4(plVar2,auStack_78);
  func_0x0001077432e4();
  func_0x0001077432dc();
  func_0x000107742c9c();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001077418ec();
  func_0x000107742168();
  plVar2 = (long *)*plVar2;
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
    puVar3 = auStack_1a8;
    func_0x000107739a10(puVar3);
    plVar2 = alStack_138;
    FUN_107739810(plVar2,puVar3);
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
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001077420f0();
  func_0x00010772ead4();
  func_0x000107742088();
  func_0x000107742904();
  *plVar2 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar2 + 9);
  func_0x00010772d754(plVar2 + 5);
  func_0x0001072c9884(plVar2 + 2);
  return plVar2;
}



/* Entry: 107739a78; end: 107739b4f;  */

undefined8 * FUN_107739a78(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  int unaff_w20;
  undefined8 auStack_b8 [17];
  
  func_0x000107741910();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
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
    func_0x000107739a38();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x000107739c64(auStack_b8);
      puVar2 = (undefined8 *)(unaff_x19 + 8);
      func_0x0001075725a0();
    }
    else {
      puVar2 = auStack_b8;
      func_0x000107739c4c();
      func_0x0001077428fc();
    }
    func_0x00010774300c();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x000107739c80();
  func_0x0001077420d8();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107739d70; end: 107739d8b;  */

void FUN_107739d70(long param_1)

{
  func_0x0001072ddd58();
  *(undefined4 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10773a0c8; end: 10773a0cb;  */

undefined8 * FUN_10773a0c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773a38c; end: 10773a483;  */

/* WARNING: Possible PIC construction at 0x00010773a668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a66c) */
/* WARNING: Removing unreachable block (ram,0x00010773a68c) */
/* WARNING: Removing unreachable block (ram,0x00010773a67c) */
/* WARNING: Removing unreachable block (ram,0x00010773a698) */

long * FUN_10773a38c(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  float *pfVar5;
  long lVar6;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar7;
  undefined *puVar8;
  double dVar9;
  double unaff_d8;
  double dVar10;
  double unaff_d9;
  double unaff_d10;
  undefined8 unaff_d11;
  double unaff_d12;
  undefined8 unaff_d13;
  undefined8 in_stack_000001e0;
  
  func_0x00010774309c();
  puVar7 = &stack0x000001e0;
  func_0x000107741834();
  func_0x0001077421ec();
  do {
    uVar2 = unaff_x24 == 2;
    if ((bool)uVar2) {
      unaff_x20 = *(long **)(unaff_x22 + 0x80);
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
      goto LAB_10773a430;
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
LAB_10773a430:
  func_0x000107742c44();
  func_0x000107741a80();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010727f7f8();
  func_0x000107742c44();
  puVar8 = &UNK_10773a484;
  func_0x000107742904();
  pfVar5 = *(float **)*param_1;
  lVar6 = ((long *)*param_1)[1];
  puVar1 = (undefined1 *)register0x00000008;
  puVar4 = extraout_x8;
  do {
    *(undefined8 *)(puVar1 + -0x60) = unaff_d13;
    *(double *)(puVar1 + -0x58) = unaff_d12;
    *(undefined8 *)(puVar1 + -0x50) = unaff_d11;
    *(double *)(puVar1 + -0x48) = unaff_d10;
    *(double *)(puVar1 + -0x40) = unaff_d9;
    *(double *)(puVar1 + -0x38) = unaff_d8;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    func_0x000107741d18(puVar4);
    *(undefined8 *)(puVar1 + -0x68) = extraout_x8_00;
    uVar2 = lVar6 - (long)pfVar5 == 8;
    if ((bool)uVar2) {
      func_0x000107743184(*param_2);
      uVar2 = extraout_x8_01 == 8;
      unaff_x20 = param_2;
      if (!(bool)uVar2) goto code_r0x00010773a59c;
      func_0x00010774320c((double)*pfVar5,(double)pfVar5[1],puVar1 + -0xd8);
      func_0x000107743890();
      func_0x00010774320c(puVar1 + -0x150);
      dVar10 = (*(double *)(puVar1 + -0xd8) * 3.141592653589793) / 180.0;
      unaff_d9 = (*(double *)(puVar1 + -0x150) * 3.141592653589793) / 180.0;
      unaff_d11 = 0x3fe0000000000000;
      unaff_d10 = (((*(double *)(puVar1 + -0x150) - *(double *)(puVar1 + -0xd8)) * 3.141592653589793
                   ) / 180.0) * 0.5;
      unaff_d12 = ((*(double *)(puVar1 + -0x148) - *(double *)(puVar1 + -0xd0)) * 3.141592653589793)
                  / 180.0;
      _sin();
      _cos();
      dVar9 = unaff_d9;
      _cos();
      unaff_d8 = dVar10 * dVar9;
      dVar9 = unaff_d12 * 0.5;
      _sin(dVar9);
      dVar9 = SQRT(dVar9 * unaff_d8 * dVar9 + unaff_d10 * unaff_d10);
      _asin(dVar9);
      func_0x0001077423d4(dVar9 * 12742017.6);
      unaff_x19 = param_2 + 1;
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
    puVar8 = &UNK_10773a5ec;
    func_0x00010774309c();
    *(undefined1 **)(puVar1 + 0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 0x98) = puVar8;
    puVar7 = (undefined8 *)(puVar1 + 0x90);
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
        *(long **)(puVar1 + -0x170) = unaff_x20;
        *(long **)(puVar1 + -0x168) = unaff_x19;
        *(undefined8 **)(puVar1 + -0x160) = puVar7;
        *(undefined **)(puVar1 + -0x158) = &DAT_10773a6f0;
        *plVar3 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar3 + 9);
        func_0x00010772d754(plVar3 + 5);
        func_0x0001072c9884(plVar3 + 2);
        return plVar3;
      }
    }
    unaff_x20 = (long *)(puVar1 + -0x128);
    func_0x0001077427dc();
    func_0x000107743060();
    pfVar5 = (float *)**(long **)(puVar1 + -0x138);
    lVar6 = (*(long **)(puVar1 + -0x138))[1];
    puVar4 = puVar1 + -0x48;
    param_2 = (long *)(puVar1 + -0x148);
    puVar8 = &UNK_10773a66c;
    puVar1 = puVar1 + -0x150;
  } while( true );
}



/* Entry: 10773a818; end: 10773a8bb;  */

long * FUN_10773a818(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  long unaff_x23;
  double dVar5;
  double dVar6;
  
  func_0x000107741ca8();
  uVar1 = param_3 - param_2 == param_5 - param_4;
  if ((bool)uVar1) {
    uVar3 = param_3 - param_2 >> 2;
    dVar5 = 0.0;
    for (uVar4 = 0; uVar1 = uVar3 == uVar4, uVar4 < uVar3; uVar4 = (ulong)((int)uVar4 + 1)) {
      dVar6 = (double)(*(float *)(param_2 + uVar4 * 4) - *(float *)(param_4 + uVar4 * 4));
      dVar5 = dVar5 + dVar6 * dVar6;
    }
    func_0x0001077423d4(dVar5);
    plVar2 = (long *)(unaff_x20 + 8);
  }
  else {
    func_0x000107742604();
    func_0x000107742fdc();
    func_0x0001077427b8();
    func_0x000107742e4c();
    plVar2 = (long *)(unaff_x20 | 8);
  }
  func_0x00010726af18();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107743090();
  func_0x000107742904();
  func_0x00010774309c();
  func_0x0001077418c8();
  func_0x0001077421d0();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077427dc();
      func_0x000107743060();
      func_0x000107743bc4();
      plVar2 = (long *)&stack0xffffffffffffffe8;
      FUN_10773a818();
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
      goto code_r0x00010773a964;
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
code_r0x00010773a964:
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



/* Entry: 10773ac8c; end: 10773ac8f;  */

undefined8 * FUN_10773ac8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773b004; end: 10773b017;  */

void FUN_10773b004(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773b2b4; end: 10773b3ab;  */

undefined8 * FUN_10773b2b4(undefined8 *param_1)

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
      func_0x00010773b228();
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



/* Entry: 10773b698; end: 10773b6ab;  */

void FUN_10773b698(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773bc04; end: 10773bc0f;  */

void FUN_10773bc04(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

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
  
  func_0x000107741ca8(param_1);
  if (param_4[1] != 0) {
    lVar1 = *param_4;
    in_ZR = *(int *)(lVar1 + 0x68) == 3;
    if ((bool)in_ZR) {
      func_0x000107573ddc();
      param_2 = param_2 + 0x108;
      func_0x0001074d2700(param_2,lVar1);
      if (param_2 != 0) {
        ppuStack_148 = &PTR_DAT_1109d3688;
        pppuStack_130 = &ppuStack_148;
        plStack_140 = param_4;
        func_0x00010773021c(auStack_128,lVar1 + 0x38,*param_4 + 0x70,*param_4 + param_4[1] * 0x70,
                            &ppuStack_148,&uStack_149);
        func_0x0001077301bc(auStack_a8,auStack_128);
        func_0x000107742ab8();
        func_0x000107742e4c();
        func_0x0001077309b4(auStack_120);
        func_0x000107730a04(&ppuStack_148);
        goto code_r0x00010773bcd0;
      }
    }
  }
  func_0x00010774238c();
code_r0x00010773bcd0:
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



/* Entry: 10773bdd0; end: 10773bec7;  */

undefined8 * FUN_10773bdd0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 auStack_420 [1048];
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
      func_0x00010773bc10();
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
    func_0x000107742380(auStack_420);
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



/* Entry: 10773c0e0; end: 10773c1ab;  */

/* WARNING: Possible PIC construction at 0x00010773c2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773c2b8) */
/* WARNING: Removing unreachable block (ram,0x00010773c2d4) */
/* WARNING: Removing unreachable block (ram,0x00010773c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010773c2e0) */

long * FUN_10773c0e0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 in_stack_00000160;
  
  func_0x000107743a94();
  puVar5 = &stack0x00000160;
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  plVar3 = (long *)*param_1;
  func_0x000107741e48(plVar3);
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
    unaff_x22 = *(long *)(unaff_x22 + 0x80);
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar2) {
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
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  puVar6 = &UNK_10773c1ac;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar3 = param_3;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    func_0x000107741be8();
    func_0x000107879a74(puVar1 + -0xb0);
    param_3 = plVar3;
    func_0x000107879bec(puVar1 + -0xa0,*(undefined8 *)(puVar1 + -0xb0));
    func_0x0001072ae334(puVar1 + -0xb0);
    uVar2 = puVar1[-0x30] == '\x01';
    if ((bool)uVar2) {
      param_3 = (long *)(puVar1 + -0xa0);
      func_0x000107577fa0(unaff_x19 + 8);
      plVar4 = (long *)(puVar1 + -0xa0);
      func_0x000107296ad0();
    }
    else {
      plVar4 = (long *)(puVar1 + -0xa0);
      func_0x000107296ad0();
      func_0x00010774238c();
    }
    func_0x000107741a50();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x000107743418();
    func_0x000107296ad0();
    func_0x000107742904();
    *(long *)(puVar1 + -0xe0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xd8) = unaff_x21;
    *(long **)(puVar1 + -0xd0) = plVar3;
    *(long *)(puVar1 + -200) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xb8) = &UNK_10773c254;
    puVar5 = (undefined8 *)(puVar1 + -0xc0);
    func_0x000107741910();
    *(undefined4 *)(puVar1 + -0x1a8) = 0;
    func_0x000107742168();
    plVar4 = (long *)*plVar4;
    func_0x000107741e48();
    func_0x000107743728();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      param_3 = plVar4;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar2 = (int)plVar3 == 1;
    if (!(bool)uVar2) {
      func_0x0001077420d8();
      func_0x0001077419ec();
      if ((bool)uVar2) {
        return plVar4;
      }
      ___stack_chk_fail();
      func_0x000107742208();
      func_0x0001077420d8();
      func_0x000107742904();
      *(long **)(puVar1 + -0x230) = plVar3;
      *(long *)(puVar1 + -0x228) = unaff_x19;
      *(undefined8 **)(puVar1 + -0x220) = puVar5;
      *(undefined **)(puVar1 + -0x218) = &DAT_10773c320;
      *plVar4 = (long)&PTR_DAT_1109d1d80;
      func_0x000104c2f714(plVar4 + 9);
      func_0x00010772d754(plVar4 + 5);
      func_0x0001072c9884(plVar4 + 2);
      return plVar4;
    }
    func_0x0001077421a8();
    func_0x00010774371c();
    puVar6 = &UNK_10773c2b8;
    puVar1 = puVar1 + -0x210;
    unaff_x20 = plVar3;
  }
  return plVar4;
}



/* Entry: 10773c410; end: 10773c5b3;  */

undefined8 * FUN_10773c410(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x9;
  ulong uVar6;
  uint uVar7;
  long *unaff_x23;
  long unaff_x24;
  undefined1 auStack_500 [1048];
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 *puStack_a0;
  undefined *puStack_98;
  
  puVar3 = param_1;
  func_0x000107741cf4();
  if (((((param_2[1] & 0xfffffffffffffffeU) == 2) &&
       (puVar3 = (undefined8 *)*param_2, *(int *)(puVar3 + 0xd) == 8)) &&
      (*(int *)(puVar3 + 0x1b) == 2)) && (((ulong)param_2[1] < 3 || (*(int *)(puVar3 + 0x29) == 2)))
     ) {
    func_0x000107325cc8();
    pdVar4 = (double *)(*param_2 + 0x70);
    func_0x00010757fc08();
    uVar7 = (uint)*pdVar4;
    if ((ulong)param_2[1] < 3) {
      func_0x000107743110(*puVar3);
      uVar6 = 0;
      if (extraout_x9 != 0) {
        uVar6 = extraout_x8 / extraout_x9;
      }
    }
    else {
      pdVar4 = (double *)(*param_2 + 0xe0);
      func_0x00010757fc08();
      uVar1 = (uint)((((long *)*puVar3)[1] - *(long *)*puVar3) / 0x70);
      if ((uint)(int)*pdVar4 <= uVar1) {
        uVar1 = (int)*pdVar4;
      }
      uVar6 = (ulong)uVar1;
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x0001074b01dc(&uStack_d8,uVar6 - uVar7);
    unaff_x23 = &lStack_c0;
    unaff_x24 = 0x70;
    for (; uVar2 = uVar6 == uVar7, uVar7 < uVar6; uVar7 = uVar7 + 1) {
      func_0x0001072786d8(auStack_b8,*(long *)*puVar3 + (ulong)uVar7 * 0x70 + 8);
      func_0x000107277668(&uStack_d8,&lStack_c0);
      func_0x00010726af18(auStack_b8);
    }
    func_0x000107277aa4(&lStack_c0,&uStack_d8);
    param_1[3] = auStack_b8[0];
    param_1[2] = lStack_c0;
    lStack_c0 = 0;
    auStack_b8[0] = 0;
    func_0x0001077424ac(8);
    func_0x00010726b188(&lStack_c0);
    puVar3 = &uStack_d8;
    func_0x000107277d70(puVar3);
  }
  else {
    uVar2 = 0;
    func_0x00010774238c();
  }
  func_0x000107741a68();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_d8;
  func_0x000107277d70();
  func_0x000107742904();
  puVar5 = &UNK_10773c5b4;
  func_0x0001077438e0();
  puStack_a0 = &stack0xfffffffffffffff0;
  puStack_98 = puVar5;
  func_0x000107741970();
  func_0x00010774222c();
  func_0x000107742764(0);
  func_0x0001077430c8();
  func_0x000107741c60();
  do {
    if (unaff_x24 == 0) {
      func_0x000107743254();
      func_0x000107743430();
      FUN_10773c410();
      func_0x000107743348();
      if ((bool)uVar2) {
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
    puVar3 = (undefined8 *)*unaff_x23;
    func_0x0001077420ac(auStack_500);
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
  func_0x000107741c94(uStack_e8);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742c5c();
  func_0x000107742904();
  *puVar3 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar3 + 9);
  func_0x00010772d754(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 10773ca5c; end: 10773ca5f;  */

undefined8 * FUN_10773ca5c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773ce38; end: 10773cf03;  */

/* WARNING: Possible PIC construction at 0x00010773d0bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d0c0) */
/* WARNING: Removing unreachable block (ram,0x00010773d0e0) */
/* WARNING: Removing unreachable block (ram,0x00010773d0cc) */
/* WARNING: Removing unreachable block (ram,0x00010773d0ec) */

undefined8 * FUN_10773ce38(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 in_stack_00000160;
  
  func_0x000107743a94();
  puVar7 = &stack0x00000160;
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
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar2 = unaff_w23 == 1;
  if ((bool)uVar2) {
    unaff_x22 = (long *)unaff_x22[0x10];
    func_0x0001077421a8();
    func_0x000107741d60();
    func_0x000107742994();
    func_0x000107743278();
    if ((bool)uVar2) {
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
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107742208();
  func_0x0001077420d8();
  puVar8 = &UNK_10773cf04;
  func_0x000107742904();
  puVar1 = (undefined1 *)register0x00000008;
  puVar6 = extraout_x8;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x40) = unaff_x28;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x27;
    *(long **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    func_0x000107741cf4();
    unaff_x22 = (long *)puVar3[0x20];
    if (unaff_x22 == (long *)0x0) {
      puVar3 = (undefined8 *)0x1138369c0;
      unaff_x19 = (undefined8 *)(puVar6 + 8);
      func_0x000104c2fe00();
      func_0x000107742a28();
    }
    else {
      func_0x0001077429f8();
      func_0x00010724ef84(puVar1 + -0x100,param_3);
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
      puVar3 = (undefined8 *)(puVar1 + -0x100);
      func_0x0001077432e4();
      unaff_x19 = (undefined8 *)(puVar1 + -0x100);
      func_0x000104c2f714();
      func_0x00010774358c();
    }
    func_0x000107741a68();
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x00010727f7f8(unaff_x21 + 8);
    plVar4 = (long *)(puVar1 + -0x160);
    func_0x00010726b164();
    func_0x000107743a50();
    func_0x00010774358c();
    func_0x000107742904();
    puVar8 = &UNK_10773d054;
    func_0x000107743c34();
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = puVar8;
    puVar7 = (undefined8 *)(puVar1 + -0x40);
    func_0x000107741970();
    func_0x000107742dfc();
    func_0x000107742168();
    puVar5 = (undefined8 *)*plVar4;
    func_0x000107741e48();
    func_0x000107743b0c();
    if ((bool)uVar2) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      puVar3 = puVar5;
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar2 = (int)unaff_x22 == 1;
    if (!(bool)uVar2) {
      func_0x0001077420d8();
      func_0x000107741a68();
      if ((bool)uVar2) {
        return puVar5;
      }
      ___stack_chk_fail();
      func_0x000107742174();
      func_0x00010772ead4();
      func_0x0001077420d8();
      func_0x000107742904();
      *(long *)(puVar1 + -0x1c0) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x1b8) = unaff_x19;
      *(undefined8 **)(puVar1 + -0x1b0) = puVar7;
      *(undefined **)(puVar1 + -0x1a8) = &DAT_10773d134;
      *puVar5 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar5 + 9);
      func_0x00010772d754(puVar5 + 5);
      func_0x0001072c9884(puVar5 + 2);
      return puVar5;
    }
    func_0x0001077421a8();
    puVar6 = puVar1 + -0xf8;
    param_3 = puVar1 + -0x130;
    func_0x0001077429d4();
    puVar8 = &UNK_10773d0c0;
    puVar1 = puVar1 + -0x1a0;
  }
  return unaff_x19;
}



/* Entry: 10773d230; end: 10773d29f;  */

undefined8 * FUN_10773d230(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *in_x3;
  undefined *puVar3;
  long unaff_x21;
  long unaff_x23;
  undefined1 auStack_160 [56];
  undefined8 auStack_128 [17];
  undefined1 auStack_a0 [80];
  undefined1 *puStack_50;
  undefined *puStack_48;
  char cStack_30;
  
  func_0x000107741be8();
  func_0x000107723bd4(auStack_a0);
  uVar1 = cStack_30 == '\x01';
  if ((bool)uVar1) {
    func_0x00010745fc58(in_x3,auStack_a0);
  }
  else {
    in_x3 = (undefined8 *)0x0;
  }
  func_0x000107742678();
  func_0x0001077433a8();
  func_0x000107741a50();
  if ((bool)uVar1) {
    return in_x3;
  }
  ___stack_chk_fail();
  func_0x000107742d44();
  func_0x000107296ad0();
  func_0x000107742904();
  puVar3 = &UNK_10773d2a0;
  func_0x000107743290();
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar3;
  func_0x000107742bec();
  puVar2 = in_x3;
  func_0x000107741b9c();
  func_0x0001077437a4();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x000107742538();
      puVar2 = auStack_128;
      FUN_10773d230(puVar2,in_x3,auStack_160,unaff_x21 + 0x70);
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
      goto code_r0x00010773d350;
    }
    func_0x000107742700();
    puVar2 = (undefined8 *)*puVar2;
    func_0x0001077426e8(auStack_128);
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
code_r0x00010773d350:
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



/* Entry: 10773d5ec; end: 10773d5ef;  */

undefined8 * FUN_10773d5ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773d85c; end: 10773d927;  */

void FUN_10773d85c(undefined8 *param_1)

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
  func_0x0001077424f8(!(bool)uVar3 && cVar2 == cVar1);
  return;
}



/* Entry: 10773db9c; end: 10773dc93;  */

undefined8 * FUN_10773db9c(undefined8 *param_1)

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
      func_0x00010773db44();
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
      goto LAB_10773dc44;
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
LAB_10773dc44:
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



/* Entry: 10773dea8; end: 10773df6f;  */

/* WARNING: Possible PIC construction at 0x00010773e03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773e040) */
/* WARNING: Removing unreachable block (ram,0x00010773e058) */
/* WARNING: Removing unreachable block (ram,0x00010773e04c) */
/* WARNING: Removing unreachable block (ram,0x00010773e064) */

undefined8 * FUN_10773dea8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  puVar7 = &UNK_10773df70;
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
      func_0x000107575adc();
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
    *(undefined **)(puVar1 + -0x78) = &UNK_10773dfd8;
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
      *(undefined **)(puVar1 + -0x1d8) = &DAT_10773e0a8;
      *puVar3 = &PTR_DAT_1109d1d80;
      func_0x000104c2f714(puVar3 + 9);
      func_0x00010772d754(puVar3 + 5);
      func_0x0001072c9884(puVar3 + 2);
      return puVar3;
    }
    func_0x0001077421a8();
    func_0x000107742a54();
    puVar7 = &UNK_10773e040;
    puVar1 = puVar1 + -0x1d0;
    unaff_x20 = uVar5;
    unaff_x21 = puVar4;
  }
  return puVar3;
}



/* Entry: 10773e1b4; end: 10773e28b;  */

undefined8 * FUN_10773e1b4(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long unaff_x23;
  undefined1 auStack_88 [136];
  
  func_0x0001077431e0();
  func_0x000107742bec();
  func_0x000107741b9c();
  func_0x0001077427f4();
  do {
    uVar1 = unaff_x23 + -2 < 0;
    uVar2 = unaff_x23 == 2;
    if ((bool)uVar2) {
      func_0x000107742538();
      func_0x000107742ce8();
      func_0x000107743030();
      func_0x0001077430d8();
      func_0x000107742400(uVar1);
      func_0x000107743674();
      func_0x000107741e30();
      goto LAB_10773e248;
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
LAB_10773e248:
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



/* Entry: 10773e4fc; end: 10773e50f;  */

void FUN_10773e4fc(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773e7e0; end: 10773e83b;  */

undefined8 * FUN_10773e7e0(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  
  func_0x000107741be8();
  func_0x00010774377c();
  func_0x000107743710();
  if ((bool)in_ZR) {
    func_0x000107743284();
    func_0x000104c2fc44();
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
    FUN_10773e7e0();
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



/* Entry: 10773eaf4; end: 10773eb07;  */

void FUN_10773eaf4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773ee8c; end: 10773eeb3;  */

void FUN_10773ee8c(void)

{
  char in_NG;
  char in_OV;
  
  func_0x000107743024();
  func_0x0001077430d8();
  func_0x0001077424f8(in_NG == in_OV);
  return;
}



/* Entry: 10773f184; end: 10773f187;  */

undefined8 * FUN_10773f184(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773f478; end: 10773f483;  */

void FUN_10773f478(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x000107742718(param_1,param_2);
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



/* Entry: 10773f7e4; end: 10773f7e7;  */

undefined8 * FUN_10773f7e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773fa14; end: 10773fadf;  */

/* WARNING: Possible PIC construction at 0x00010773fb98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773fb9c) */
/* WARNING: Removing unreachable block (ram,0x00010773fbb4) */
/* WARNING: Removing unreachable block (ram,0x00010773fba8) */
/* WARNING: Removing unreachable block (ram,0x00010773fbc0) */

undefined8 * FUN_10773fa14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 in_stack_00000160;
  undefined1 *puVar2;
  
  func_0x000107743a94();
  puVar5 = &stack0x00000160;
  func_0x000107741930();
  func_0x000107742dfc();
  func_0x00010774215c();
  param_1 = (undefined8 *)*param_1;
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
  uVar3 = unaff_w23 == 1;
  if ((bool)uVar3) {
    unaff_x22 = *(long *)(unaff_x22 + 0x80);
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
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  puVar6 = &UNK_10773fae0;
  func_0x000107742904();
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar4 = param_3;
    puVar1 = (undefined8 *)(puVar2 + -0x70);
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar2 + -0x10) = puVar5;
    *(undefined **)(puVar2 + -8) = puVar6;
    func_0x000107741be8();
    func_0x0001077433b0();
    param_3 = uVar4;
    func_0x000107751788();
    func_0x0001077425dc(puVar2[-0x30]);
    func_0x000107267ed0();
    func_0x000107741a50();
    if ((bool)uVar3) {
      return puVar1;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    *(long *)(puVar2 + -0xa0) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x98) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x90) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x88) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x78) = &UNK_10773fb34;
    puVar5 = (undefined8 *)(puVar2 + -0x80);
    func_0x000107741b04();
    func_0x000107743190();
    func_0x000107742168();
    puVar1 = (undefined8 *)*puVar1;
    func_0x000107742324();
    func_0x000107743228();
    if ((bool)uVar3) {
      func_0x000107742a0c();
      func_0x000107742c38();
      func_0x0001077420a0();
    }
    else {
      func_0x000107742a14();
      func_0x0001077428fc();
    }
    func_0x0001077420b8();
    uVar3 = (int)uVar4 == 1;
    if (!(bool)uVar3) break;
    func_0x0001077421a8();
    func_0x000107742a54();
    puVar6 = &UNK_10773fb9c;
    puVar2 = puVar2 + -0x1d0;
    unaff_x21 = uVar4;
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar3) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *(undefined8 *)(puVar2 + -0x1f0) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x1e8) = unaff_x19;
  *(undefined8 **)(puVar2 + -0x1e0) = puVar5;
  *(undefined **)(puVar2 + -0x1d8) = &DAT_10773fc04;
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  func_0x00010772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 10773fcf4; end: 10773fda3;  */

void FUN_10773fcf4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  long unaff_x19;
  int iStack_b8;
  byte bStack_78;
  undefined1 auStack_70 [64];
  char cStack_30;
  
  func_0x000107741be8();
  func_0x000107751674(auStack_70,param_2);
  uVar2 = cStack_30 == '\x01';
  if ((bool)uVar2) {
    func_0x000107743c1c();
    func_0x000107751674();
    if ((bStack_78 & 1) == 0) goto LAB_10773fd78;
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
LAB_10773fd78:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10773fd80);
  (*pcVar1)();
}



/* Entry: 1077401e4; end: 1077401e7;  */

undefined8 * FUN_1077401e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077405ec; end: 107740667;  */

/* WARNING: Possible PIC construction at 0x000107740628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774062c) */
/* WARNING: Removing unreachable block (ram,0x000107740650) */
/* WARNING: Removing unreachable block (ram,0x000107740664) */
/* WARNING: Removing unreachable block (ram,0x000107740648) */
/* WARNING: Removing unreachable block (ram,0x000107742588) */

ulong FUN_1077405ec(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_a8 [120];
  
  func_0x000107741ca8();
  func_0x000107723ac8(auStack_a8);
  uVar1 = *param_3;
  uVar2 = uVar1 + param_3[1] * 0x70;
  uVar3 = uVar1;
  while( true ) {
    if (uVar3 == uVar2) {
      return uVar2;
    }
    func_0x000107742be0();
    func_0x00010745fc58();
    if ((uVar1 & 1) != 0) break;
    uVar3 = uVar3 + 0x70;
  }
  return uVar3;
}



/* Entry: 107740978; end: 107740a7b;  */

undefined8 * FUN_107740978(void)

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
      func_0x0001077408c0();
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
      goto LAB_107740a34;
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
LAB_107740a34:
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



/* Entry: 107740d94; end: 107740da7;  */

void FUN_107740d94(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077410a8; end: 1077410b3;  */

void FUN_1077410a8(long param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = 0;
  switch(*(int *)(param_1 + 0x68)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
    goto code_r0x00010774112c;
  case 2:
    bVar1 = *(double *)(param_1 + 8) == 0.0;
    break;
  case 3:
  case 7:
    param_1 = param_1 + 8;
    func_0x000104c2d614(0,param_1);
    uVar2 = (uint)param_1 ^ 1;
    goto code_r0x00010774112c;
  default:
    plVar3 = *(long **)(param_1 + 8);
    if (*(int *)(param_1 + 0x68) == 8) {
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



/* Entry: 1077413dc; end: 1077414ef;  */

undefined8 * FUN_1077413dc(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int in_stack_00000060;
  undefined8 in_stack_000000f8;
  
  func_0x000107743aa8();
  func_0x000107741e88();
  *(undefined8 *)(unaff_x23 + 0x90) = 8;
  *(undefined8 *)(unaff_x23 + 0x88) = 0;
  func_0x000107742ed0();
  func_0x00010774347c();
  func_0x00010774241c();
  do {
    if (unaff_x24 == 0) {
      func_0x0001077412cc(&stack0x00000020,*(undefined8 *)(unaff_x23 + 0x80),
                          *(undefined8 *)(unaff_x23 + 0x88));
      uVar1 = in_stack_00000060 == 1;
      if ((bool)uVar1) {
        puVar2 = (undefined8 *)&stack0x00000020;
        func_0x000107741624();
        func_0x00010774398c();
      }
      else {
        puVar2 = (undefined8 *)&stack0x00000020;
        func_0x00010774160c();
        func_0x0001077428fc();
      }
      func_0x0001077435dc(&stack0x00000020);
      goto LAB_10774149c;
    }
    puVar2 = (undefined8 *)*unaff_x22;
    func_0x0001077420ac(&stack0x00000020);
    func_0x0001077438c0();
    if ((bool)in_ZR) {
      func_0x0001077434f0();
      func_0x00010774316c();
      func_0x0001077432f4();
      func_0x000107742ae0();
      uVar1 = in_ZR;
    }
    else {
      func_0x000107743500();
      func_0x0001077428fc();
      uVar1 = in_ZR;
    }
    func_0x000107742ac0();
    unaff_x22 = unaff_x22 + 2;
    func_0x000107742ec4();
    in_ZR = 1;
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_10774149c:
  func_0x0001077430e4();
  func_0x000107741c94(in_stack_000000f8);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077435dc(&stack0x00000020);
  func_0x0001077430e4();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 1077416c8; end: 1077416df;  */

ulong FUN_1077416c8(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  lVar3 = *param_2;
  lVar1 = param_2[1];
  lVar4 = *param_3;
  if (lVar1 - lVar3 == param_3[1] - lVar4) {
    while ((uVar5 = (ulong)(lVar3 == lVar1), lVar3 != lVar1 &&
           (lVar2 = lVar3, func_0x00010745de74(lVar3,lVar4), (int)lVar2 != 0))) {
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + 0x10;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 107743cb0; end: 107744d3b;  */

void FUN_107743cb0(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar8;
  ulong extraout_x9_00;
  long *plVar9;
  long *extraout_x10;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined1 auStack_e88 [40];
  undefined1 auStack_e60 [40];
  undefined1 auStack_e38 [40];
  undefined1 auStack_e10 [40];
  undefined1 auStack_de8 [40];
  undefined1 auStack_dc0 [40];
  undefined1 auStack_d98 [40];
  undefined1 auStack_d70 [40];
  undefined1 auStack_d48 [40];
  undefined1 auStack_d20 [40];
  undefined1 auStack_cf8 [40];
  long *plStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined *puStack_cb8;
  undefined8 uStack_cb0;
  undefined4 uStack_ca0;
  undefined *puStack_c98;
  undefined8 uStack_c90;
  undefined4 uStack_c80;
  undefined1 auStack_c78 [24];
  undefined4 uStack_c60;
  undefined4 uStack_be0;
  undefined *puStack_bd8;
  undefined8 uStack_bd0;
  undefined4 uStack_bc0;
  undefined *puStack_bb8;
  undefined4 uStack_ba0;
  undefined *puStack_b98;
  undefined8 uStack_b90;
  undefined *puStack_b78;
  undefined8 uStack_b70;
  undefined4 uStack_b60;
  undefined *puStack_b58;
  undefined8 uStack_b50;
  undefined *puStack_b38;
  undefined8 uStack_b30;
  undefined4 uStack_b20;
  undefined *puStack_b18;
  undefined8 uStack_b10;
  undefined *puStack_af8;
  undefined8 uStack_af0;
  undefined1 auStack_ad8 [24];
  undefined4 uStack_ac0;
  undefined4 uStack_a40;
  undefined *puStack_a38;
  undefined8 uStack_a30;
  undefined4 uStack_a20;
  undefined *puStack_a18;
  undefined4 uStack_a00;
  undefined *puStack_9f8;
  undefined8 uStack_9f0;
  undefined *puStack_9d8;
  undefined8 uStack_9d0;
  undefined4 uStack_9c0;
  undefined *puStack_9b8;
  undefined8 uStack_9b0;
  undefined *puStack_998;
  undefined8 uStack_990;
  undefined4 uStack_980;
  undefined *puStack_978;
  undefined8 uStack_970;
  undefined *puStack_958;
  undefined8 uStack_950;
  undefined1 auStack_938 [24];
  undefined4 uStack_920;
  undefined4 uStack_8a0;
  undefined *puStack_898;
  undefined8 uStack_890;
  undefined4 uStack_880;
  undefined *puStack_878;
  undefined4 uStack_860;
  undefined *puStack_858;
  undefined8 uStack_850;
  undefined *puStack_838;
  undefined8 uStack_830;
  undefined4 uStack_820;
  undefined *puStack_818;
  undefined8 uStack_810;
  undefined *puStack_7f8;
  undefined8 uStack_7f0;
  undefined4 uStack_7e0;
  undefined *puStack_7d8;
  undefined8 uStack_7d0;
  undefined *puStack_7b8;
  undefined8 uStack_7b0;
  undefined *puStack_798;
  undefined8 uStack_790;
  undefined4 uStack_780;
  undefined *puStack_778;
  undefined8 uStack_770;
  undefined4 uStack_760;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined4 uStack_740;
  undefined *puStack_738;
  undefined8 uStack_730;
  undefined4 uStack_720;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined4 uStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_6e0;
  undefined *puStack_6d8;
  undefined8 uStack_6d0;
  undefined4 uStack_6c0;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  undefined4 uStack_6a0;
  undefined *puStack_698;
  undefined8 uStack_690;
  undefined4 uStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined4 uStack_660;
  undefined *puStack_658;
  undefined8 uStack_650;
  undefined4 uStack_640;
  undefined *puStack_638;
  undefined8 uStack_630;
  undefined4 uStack_620;
  undefined *puStack_618;
  undefined8 uStack_610;
  undefined4 uStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e0;
  undefined *puStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined4 uStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined4 uStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined4 uStack_540;
  char *pcStack_538;
  undefined8 uStack_530;
  undefined4 uStack_520;
  char *pcStack_518;
  undefined8 uStack_510;
  undefined4 uStack_500;
  char *pcStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e0;
  char *pcStack_4d8;
  undefined8 uStack_4d0;
  undefined4 uStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a0;
  char *pcStack_498;
  undefined8 uStack_490;
  undefined4 uStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined4 uStack_460;
  char *pcStack_458;
  undefined8 uStack_450;
  undefined4 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined4 uStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined4 uStack_400;
  char *pcStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e0;
  char *pcStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined4 uStack_380;
  char *pcStack_378;
  undefined8 uStack_370;
  undefined4 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined4 uStack_340;
  char *pcStack_338;
  undefined8 uStack_330;
  undefined4 uStack_320;
  char *pcStack_318;
  undefined8 uStack_310;
  undefined4 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  undefined1 auStack_2c8 [40];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [40];
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [40];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [40];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [40];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [40];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [40];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [40];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [40];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113725ba8 & 1) == 0) {
    iVar5 = 0x13725ba8;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      pcStack_3d8 = "key";
      uStack_3d0 = 3;
      uStack_3c0 = 3;
      puStack_3b8 = &UNK_10f417f67;
      uStack_3b0 = 0xc;
      uStack_3a0 = 6;
      puStack_398 = &UNK_10f424fcc;
      uStack_390 = 0x1f;
      uStack_380 = 1;
      pcStack_378 = "occluding_layer_groups";
      uStack_370 = 0x16;
      uStack_360 = 6;
      puStack_358 = &UNK_10f421dd2;
      uStack_350 = 0x10;
      uStack_340 = 6;
      pcStack_338 = "reason";
      uStack_330 = 6;
      uStack_320 = 3;
      pcStack_318 = "timestamp";
      uStack_310 = 9;
      uStack_300 = 1;
      puStack_2f8 = &UNK_10f424fec;
      uStack_2f0 = 0xe;
      uStack_2e0 = 6;
      func_0x000107744e50(auStack_cf8,&pcStack_3d8,8);
      puStack_2d8 = &UNK_10f424fb5;
      lStack_2d0 = 0x16;
      func_0x0001077452ec(auStack_2c8,auStack_cf8);
      pcStack_458 = "key";
      uStack_450 = 3;
      uStack_440 = 3;
      puStack_438 = &UNK_10f417f67;
      uStack_430 = 0xc;
      uStack_420 = 6;
      puStack_418 = &UNK_10f424fcc;
      uStack_410 = 0x1f;
      uStack_400 = 1;
      pcStack_3f8 = "timestamp";
      uStack_3f0 = 9;
      uStack_3e0 = 1;
      func_0x000107744e50(auStack_d20,&pcStack_458,4);
      puStack_2a0 = &UNK_10f424ffb;
      uStack_298 = 0x10;
      func_0x0001077452ec(auStack_290,auStack_d20);
      pcStack_4f8 = "after";
      uStack_4f0 = 5;
      uStack_4e0 = 5;
      pcStack_4d8 = "before";
      uStack_4d0 = 6;
      uStack_4c0 = 5;
      puStack_4b8 = &UNK_10f40a410;
      uStack_4b0 = 10;
      uStack_4a0 = 3;
      pcStack_498 = "source";
      uStack_490 = 6;
      uStack_480 = 3;
      puStack_478 = &UNK_10f41700e;
      uStack_470 = 0xc;
      uStack_460 = 3;
      func_0x000107744e50(auStack_d48,&pcStack_4f8,5);
      puStack_268 = &UNK_10f42500c;
      uStack_260 = 0x15;
      func_0x0001077452ec(auStack_258,auStack_d48);
      pcStack_538 = "after";
      uStack_530 = 5;
      uStack_520 = 5;
      pcStack_518 = "before";
      uStack_510 = 6;
      uStack_500 = 5;
      func_0x0001077464d0(auStack_d70,&pcStack_538);
      puStack_230 = &UNK_10f425022;
      uStack_228 = 0x11;
      func_0x0001077452ec(auStack_220,auStack_d70);
      puStack_578 = &UNK_10f425034;
      uStack_570 = 9;
      uStack_560 = 1;
      puStack_558 = &UNK_10f42503e;
      uStack_550 = 9;
      uStack_540 = 1;
      func_0x0001077464d0(auStack_d98,&puStack_578);
      puStack_1f8 = &UNK_10f40900b;
      uStack_1f0 = 0x15;
      func_0x0001077452ec(auStack_1e8,auStack_d98);
      puStack_718 = &UNK_10f420a68;
      uStack_710 = 0x18;
      uStack_700 = 1;
      puStack_6f8 = &UNK_10f420a23;
      uStack_6f0 = 0x16;
      uStack_6e0 = 1;
      puStack_6d8 = &UNK_10f420a50;
      uStack_6d0 = 0x17;
      uStack_6c0 = 1;
      puStack_6b8 = &UNK_10f420a3a;
      uStack_6b0 = 0x15;
      uStack_6a0 = 1;
      puStack_698 = &UNK_10f425048;
      uStack_690 = 0x10;
      uStack_680 = 6;
      puStack_678 = &UNK_10f422181;
      uStack_670 = 0xc;
      uStack_660 = 6;
      puStack_658 = &UNK_10f425059;
      uStack_650 = 0x17;
      uStack_640 = 5;
      puStack_638 = &UNK_10f42218e;
      uStack_630 = 9;
      uStack_620 = 1;
      puStack_618 = &UNK_10f422173;
      uStack_610 = 0xd;
      uStack_600 = 3;
      puStack_5f8 = &UNK_10f422198;
      uStack_5f0 = 9;
      uStack_5e0 = 1;
      puStack_5d8 = &UNK_10f425071;
      uStack_5d0 = 0x19;
      uStack_5c0 = 6;
      puStack_5b8 = &UNK_10f4206ef;
      uStack_5b0 = 0xd;
      uStack_5a0 = 1;
      puStack_598 = &UNK_10f4206fd;
      uStack_590 = 0xd;
      uStack_580 = 1;
      func_0x000107746428(auStack_dc0,&puStack_718);
      puStack_1c0 = &DAT_10f408bd4;
      uStack_1b8 = 9;
      func_0x0001077452ec(auStack_1b0,auStack_dc0);
      puStack_798 = &UNK_10f42508b;
      uStack_790 = 6;
      uStack_780 = 1;
      puStack_778 = &UNK_10f425092;
      uStack_770 = 6;
      uStack_760 = 1;
      puStack_758 = &DAT_10f6856fe;
      uStack_750 = 5;
      uStack_740 = 3;
      puStack_738 = &DAT_10f6389e8;
      uStack_730 = 4;
      uStack_720 = 3;
      func_0x000107744e50(auStack_de8,&puStack_798,4);
      puStack_188 = &DAT_10f408bde;
      uStack_180 = 0xb;
      func_0x0001077452ec(auStack_178,auStack_de8);
      func_0x000107746498();
      uStack_920 = 1;
      func_0x0001077464a8();
      func_0x000107746488();
      func_0x000107746478();
      func_0x000107746458();
      uStack_8a0 = 6;
      puStack_898 = &UNK_10f422181;
      uStack_890 = 0xc;
      uStack_880 = 6;
      puStack_878 = &UNK_10f425059;
      uStack_860 = 5;
      puStack_858 = &UNK_10f42218e;
      uStack_850 = 9;
      puStack_838 = &UNK_10f422173;
      uStack_830 = 0xd;
      uStack_820 = 3;
      puStack_818 = &UNK_10f422198;
      uStack_810 = 9;
      puStack_7f8 = &UNK_10f425071;
      uStack_7f0 = 0x19;
      uStack_7e0 = 6;
      puStack_7d8 = &UNK_10f4206ef;
      uStack_7d0 = 0xd;
      puStack_7b8 = &UNK_10f4206fd;
      uStack_7b0 = 0xd;
      func_0x000107746428(auStack_e10,auStack_938);
      puStack_150 = &DAT_10f408bc5;
      uStack_148 = 0xe;
      func_0x0001077452ec(auStack_140,auStack_e10);
      func_0x000107746498();
      uStack_ac0 = 1;
      func_0x0001077464a8();
      func_0x000107746488();
      func_0x000107746478();
      func_0x000107746458();
      uStack_a40 = 6;
      puStack_a38 = &UNK_10f422181;
      uStack_a30 = 0xc;
      uStack_a20 = 6;
      puStack_a18 = &UNK_10f425059;
      uStack_a00 = 5;
      puStack_9f8 = &UNK_10f42218e;
      uStack_9f0 = 9;
      puStack_9d8 = &UNK_10f422173;
      uStack_9d0 = 0xd;
      uStack_9c0 = 3;
      puStack_9b8 = &UNK_10f422198;
      uStack_9b0 = 9;
      puStack_998 = &UNK_10f425071;
      uStack_990 = 0x19;
      uStack_980 = 6;
      puStack_978 = &UNK_10f4206ef;
      uStack_970 = 0xd;
      puStack_958 = &UNK_10f4206fd;
      uStack_950 = 0xd;
      func_0x000107746428(auStack_e38,auStack_ad8);
      puStack_118 = &DAT_10f408ba9;
      uStack_110 = 0xe;
      func_0x0001077452ec(auStack_108,auStack_e38);
      func_0x000107746498();
      uStack_c60 = 1;
      func_0x0001077464a8();
      func_0x000107746488();
      func_0x000107746478();
      func_0x000107746458();
      uStack_be0 = 6;
      puStack_bd8 = &UNK_10f422181;
      uStack_bd0 = 0xc;
      uStack_bc0 = 6;
      puStack_bb8 = &UNK_10f425059;
      uStack_ba0 = 5;
      puStack_b98 = &UNK_10f42218e;
      uStack_b90 = 9;
      puStack_b78 = &UNK_10f422173;
      uStack_b70 = 0xd;
      uStack_b60 = 3;
      puStack_b58 = &UNK_10f422198;
      uStack_b50 = 9;
      puStack_b38 = &UNK_10f425071;
      uStack_b30 = 0x19;
      uStack_b20 = 6;
      puStack_b18 = &UNK_10f4206ef;
      uStack_b10 = 0xd;
      puStack_af8 = &UNK_10f4206fd;
      uStack_af0 = 0xd;
      func_0x000107746428(auStack_e60,auStack_c78);
      puStack_e0 = &DAT_10f408bb8;
      uStack_d8 = 0xc;
      func_0x0001077452ec(auStack_d0,auStack_e60);
      puStack_cb8 = &UNK_10f40b468;
      uStack_cb0 = 0x1a;
      uStack_ca0 = 3;
      puStack_c98 = &UNK_10f40b483;
      uStack_c90 = 0x11;
      uStack_c80 = 3;
      func_0x0001077464d0(auStack_e88,&puStack_cb8);
      puStack_a8 = &UNK_10f40b445;
      uStack_a0 = 0x1d;
      func_0x0001077452ec(auStack_98,auStack_e88);
      lVar13 = 0;
      uRam0000000113822c98 = 0;
      lRam0000000113822c90 = 0;
      uRam0000000113822ca8 = 0;
      plRam0000000113822ca0 = (long *)0x0;
      fRam0000000113822cb0 = 1.0;
      do {
        if (lVar13 == 0x268) goto LAB_107744930;
        plVar12 = (long *)((long)&puStack_2d8 + lVar13);
        uVar14 = 0x113822c98;
        uVar6 = 0x113822ca8;
        func_0x000107745340(0x113822ca8,plVar12);
        uVar8 = uRam0000000113822c98;
        if (uRam0000000113822c98 != 0) {
          uVar15 = uRam0000000113822c98 - 1;
          if ((uRam0000000113822c98 & uVar15) == 0) {
            uVar14 = uVar15 & uVar6;
          }
          else {
            uVar14 = uVar6;
            if (uRam0000000113822c98 <= uVar6) {
              uVar14 = 0;
              if (uRam0000000113822c98 != 0) {
                uVar14 = uVar6 / uRam0000000113822c98;
              }
              uVar14 = uVar6 - uVar14 * uRam0000000113822c98;
            }
          }
          plVar16 = *(long **)(lRam0000000113822c90 + uVar14 * 8);
          if (plVar16 != (long *)0x0) {
            do {
              while( true ) {
                plVar16 = (long *)*plVar16;
                if (plVar16 == (long *)0x0) goto LAB_107744678;
                uVar7 = plVar16[1];
                if (uVar7 != uVar6) break;
                uVar7 = 0;
                func_0x00010728905c(0x113822cb0,plVar16 + 2,plVar12);
                if ((uVar7 & 1) != 0) goto LAB_107744924;
              }
              if ((uVar8 & uVar15) == 0) {
                uVar7 = uVar7 & uVar15;
              }
              else if (uVar8 <= uVar7) {
                uVar10 = 0;
                if (uVar8 != 0) {
                  uVar10 = uVar7 / uVar8;
                }
                uVar7 = uVar7 - uVar10 * uVar8;
              }
            } while (uVar7 == uVar14);
          }
        }
LAB_107744678:
        plVar16 = (long *)0x48;
        __Znwm();
        uStack_cc8 = 0x113822ca0;
        uStack_cc0 = 0;
        *plVar16 = 0;
        plVar16[1] = uVar6;
        lVar17 = *plVar12;
        plVar16[3] = *(long *)(auStack_2c8 + lVar13 + -8);
        plVar16[2] = lVar17;
        plStack_cd0 = plVar16;
        func_0x0001077452ec(plVar16 + 4,auStack_2c8 + lVar13);
        uStack_cc0 = CONCAT71(uStack_cc0._1_7_,1);
        if ((uVar8 == 0) ||
           (fRam0000000113822cb0 * (float)uVar8 < (float)(uRam0000000113822ca8 + 1))) {
          bVar2 = 2 < uVar8;
          bVar3 = uVar8 == 3;
          func_0x00010774658c(uVar8 << 1);
          uVar14 = extraout_x8;
          if (!bVar2 || bVar3) {
            uVar14 = extraout_x9;
          }
          if (uVar14 - 1 == 0) {
            uVar14 = 2;
          }
          else if ((uVar14 & uVar14 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          uVar15 = uRam0000000113822c98;
          if (uRam0000000113822c98 < uVar14) {
LAB_10774472c:
            if (uVar14 >> 0x3d != 0) {
              func_0x000104bd35f4();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x107744a98);
              (*pcVar1)();
            }
            __Znwm(uVar14 << 3);
            func_0x000107745344();
            lVar17 = lRam0000000113822c90;
            uRam0000000113822c98 = uVar14;
            for (uVar8 = 0; plVar12 = plRam0000000113822ca0, uVar14 != uVar8; uVar8 = uVar8 + 1) {
              *(undefined8 *)(lVar17 + uVar8 * 8) = 0;
            }
            uVar8 = uVar14;
            if (plRam0000000113822ca0 != (long *)0x0) {
              uVar10 = plRam0000000113822ca0[1];
              uVar7 = uVar14 - 1;
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar10 / uVar14;
              }
              uVar11 = uVar10;
              if (uVar14 <= uVar10) {
                uVar11 = uVar10 - uVar15 * uVar14;
              }
              if ((uVar14 & uVar7) == 0) {
                uVar11 = uVar10 & uVar7;
              }
              *(undefined8 *)(lVar17 + uVar11 * 8) = 0x113822ca0;
              while (plVar9 = plVar12, plVar12 = (long *)*plVar9, plVar12 != (long *)0x0) {
                uVar15 = plVar12[1];
                if ((uVar14 & uVar7) == 0) {
                  uVar15 = uVar15 & uVar7;
                }
                else if (uVar14 <= uVar15) {
                  uVar10 = 0;
                  if (uVar14 != 0) {
                    uVar10 = uVar15 / uVar14;
                  }
                  uVar15 = uVar15 - uVar10 * uVar14;
                }
                if (uVar15 != uVar11) {
                  if (*(long *)(lVar17 + uVar15 * 8) == 0) {
                    *(long **)(lVar17 + uVar15 * 8) = plVar9;
                    uVar11 = uVar15;
                  }
                  else {
                    *plVar9 = *plVar12;
                    func_0x0001077464b8();
                    lVar17 = extraout_x8_00;
                    uVar7 = extraout_x9_00;
                    plVar12 = extraout_x10;
                    uVar11 = extraout_x11;
                  }
                }
              }
            }
          }
          else {
            uVar8 = uRam0000000113822c98;
            if (uVar14 < uRam0000000113822c98) {
              uVar8 = (ulong)((float)uRam0000000113822ca8 / fRam0000000113822cb0);
              if ((uRam0000000113822c98 < 3) ||
                 ((uRam0000000113822c98 & uRam0000000113822c98 - 1) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else {
                func_0x000107746408();
              }
              if (uVar14 <= uVar8) {
                uVar14 = uVar8;
              }
              uVar8 = uRam0000000113822c98;
              if (uVar14 < uVar15) {
                if (uVar14 != 0) goto LAB_10774472c;
                func_0x000107745344(0);
                uRam0000000113822c98 = 0;
                uVar8 = 0;
              }
            }
          }
          if ((uVar8 & uVar8 - 1) == 0) {
            uVar14 = uVar8 - 1 & uVar6;
          }
          else {
            uVar14 = uVar6;
            if (uVar8 <= uVar6) {
              uVar14 = 0;
              if (uVar8 != 0) {
                uVar14 = uVar6 / uVar8;
              }
              uVar14 = uVar6 - uVar14 * uVar8;
            }
          }
        }
        lVar17 = lRam0000000113822c90;
        plVar12 = *(long **)(lRam0000000113822c90 + uVar14 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar16 = (long)plRam0000000113822ca0;
          plRam0000000113822ca0 = plVar16;
          *(undefined8 *)(lVar17 + uVar14 * 8) = 0x113822ca0;
          if (*plVar16 != 0) {
            uVar14 = *(ulong *)(*plVar16 + 8);
            if ((uVar8 & uVar8 - 1) == 0) {
              uVar14 = uVar14 & uVar8 - 1;
            }
            else if (uVar8 <= uVar14) {
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = uVar14 / uVar8;
              }
              uVar14 = uVar14 - uVar6 * uVar8;
            }
            *(long **)(lVar17 + uVar14 * 8) = plVar16;
          }
        }
        else {
          *plVar16 = *plVar12;
          *plVar12 = (long)plVar16;
        }
        plStack_cd0 = (long *)0x0;
        uRam0000000113822ca8 = uRam0000000113822ca8 + 1;
        func_0x000107745360(&plStack_cd0);
LAB_107744924:
        lVar13 = lVar13 + 0x38;
      } while( true );
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
LAB_107744930:
    lVar13 = 0x240;
    do {
      FUN_10774529c((long)&puStack_2d8 + lVar13);
      lVar13 = lVar13 + -0x38;
      uVar4 = lVar13 == -0x28;
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_e88);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_e60);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_e38);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_e10);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_de8);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_dc0);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_d98);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_d70);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_d48);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_d20);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    FUN_10774529c(auStack_cf8);
    do {
      func_0x00010774634c();
      func_0x0001077463a8();
    } while (!(bool)uVar4);
    ___cxa_guard_release(0x113725ba8);
  }
  return;
}



/* Entry: 10774529c; end: 1077452eb;  */

long * FUN_10774529c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 4);
    plVar2 = (long *)*plVar2;
    func_0x0001072c9884(lVar1);
    func_0x000107746430();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077456b8; end: 1077459bb;  */

void FUN_1077456b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_4;
  func_0x000107745694(param_4,param_2,param_1);
  uVar2 = param_4;
  func_0x0001077463d0(param_4,param_3);
  if ((uVar1 & 1) == 0) {
    if ((int)uVar2 != 0) {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      uVar5 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar5;
      param_3[1] = uVar4;
      *param_3 = uVar3;
      func_0x000107745694(param_4,param_2,param_1);
      if ((int)param_4 != 0) {
        func_0x0001077465a0();
      }
    }
  }
  else {
    if ((int)uVar2 == 0) {
      func_0x0001077465a0();
      func_0x0001077463d0(param_4,param_3);
      if ((int)param_4 == 0) {
        return;
      }
      uVar4 = param_2[1];
      uVar3 = *param_2;
      uVar5 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar5;
    }
    else {
      uVar4 = param_1[1];
      uVar3 = *param_1;
      uVar5 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar5;
    }
    param_3[1] = uVar4;
    *param_3 = uVar3;
  }
  return;
}



/* Entry: 107746060; end: 1077460e3;  */

undefined8 * FUN_107746060(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  func_0x000107746468();
  uVar4 = 0;
  do {
    uVar2 = uVar4 << 1 | 1;
    uVar1 = uVar4 * 2 + 2;
    puVar5 = unaff_x21 + uVar4 * 2 + 2;
    uVar3 = uVar2;
    if ((long)uVar1 < unaff_x19) {
      func_0x000107746324();
      puVar5 = unaff_x21 + uVar4 * 2 + 4;
      uVar3 = uVar1;
      if ((int)param_1 == 0) {
        puVar5 = unaff_x21 + uVar4 * 2 + 2;
        uVar3 = uVar2;
      }
    }
    uVar4 = uVar3;
    uVar6 = *puVar5;
    unaff_x21[1] = puVar5[1];
    *unaff_x21 = uVar6;
    unaff_x21 = puVar5;
  } while ((long)uVar4 <= (param_3 + -2) / 2);
  return puVar5;
}



/* Entry: 107746c30; end: 107746d5b;  */

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

void FUN_107746c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [56];
  undefined1 auStack_1c0 [56];
  undefined1 auStack_188 [336];
  undefined8 uStack_38;
  
  func_0x000107747a88();
  uStack_208 = param_2;
  uStack_200 = param_3;
  uStack_38 = extraout_x8;
  func_0x000100060964(auStack_1c0,&UNK_10f4250a6);
  func_0x0001072ddad8(auStack_188,auStack_1c0,&uStack_208);
  func_0x000100060964(auStack_1f8,&UNK_10f4250b0);
  func_0x000107747d78();
  func_0x000107747d10(param_1,auStack_188);
  do {
    func_0x000107747d34();
    func_0x000107747d6c();
  } while (!(bool)in_ZR);
  func_0x000104c2f714(auStack_1f8);
  func_0x000104c2f714();
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



/* Entry: 107747e00; end: 1077481e7;  */

undefined8 *
FUN_107747e00(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
             long *param_6,long *param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined6 uVar6;
  uint6 uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ushort uVar22;
  uint uVar23;
  ushort uVar24;
  ushort uVar25;
  uint uVar26;
  ushort uVar27;
  uint uVar28;
  ushort uVar29;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_78;
  ushort uStack_74;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  
  uStack_68 = 3;
  lVar18 = *param_3;
  if (lVar18 == 0) {
    uVar4 = 0;
    uVar2 = 1;
    uStack_90 = 1;
    uStack_98 = 1;
    uStack_a0 = 1;
    uVar10 = 1;
  }
  else {
    uVar2 = *(uint *)(lVar18 + 0x20);
    uVar6 = *(undefined6 *)(lVar18 + 0x20);
    uVar4 = *(ushort *)(lVar18 + 0x24) >> 8 & 1;
    uStack_90 = (uint)((uint6)uVar6 >> 8) & 1;
    uVar3 = (uint)((uint6)uVar6 >> 0x10);
    uStack_98 = uVar3 & 1;
    uStack_a0 = uVar3 >> 8 & 1;
    uVar10 = *(ushort *)(lVar18 + 0x24) & 1;
  }
  uVar7 = *(uint6 *)(*param_2 + 0x20);
  lVar18 = *param_4;
  if (lVar18 == 0) {
    uVar5 = 0;
    uVar3 = 1;
    uStack_b0 = 1;
    uStack_b8 = 1;
    uStack_c0 = 1;
    uVar12 = 1;
  }
  else {
    uVar3 = *(uint *)(lVar18 + 0x20);
    uVar6 = *(undefined6 *)(lVar18 + 0x20);
    uVar5 = *(ushort *)(lVar18 + 0x24) >> 8 & 1;
    uStack_b0 = (uint)((uint6)uVar6 >> 8) & 1;
    uVar9 = (uint)((uint6)uVar6 >> 0x10);
    uStack_b8 = uVar9 & 1;
    uStack_c0 = uVar9 >> 8 & 1;
    uVar12 = *(ushort *)(lVar18 + 0x24) & 1;
  }
  lVar18 = *param_5;
  if (lVar18 == 0) {
    uVar27 = 0;
    uVar9 = 1;
    uVar11 = 1;
    uVar13 = 1;
    uVar14 = 1;
    uVar29 = 1;
  }
  else {
    uVar9 = *(uint *)(lVar18 + 0x20);
    uVar6 = *(undefined6 *)(lVar18 + 0x20);
    uVar27 = *(ushort *)(lVar18 + 0x24) >> 8 & 1;
    uVar11 = (uint)((uint6)uVar6 >> 8) & 1;
    uVar14 = (uint)((uint6)uVar6 >> 0x10);
    uVar13 = uVar14 & 1;
    uVar14 = uVar14 >> 8 & 1;
    uVar29 = *(ushort *)(lVar18 + 0x24) & 1;
  }
  lVar18 = *param_6;
  if (lVar18 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    uVar28 = 1;
    uVar26 = 1;
    uVar19 = 1;
    uVar22 = 1;
  }
  else {
    uVar15 = *(uint *)(lVar18 + 0x20);
    uVar6 = *(undefined6 *)(lVar18 + 0x20);
    uVar17 = *(ushort *)(lVar18 + 0x24) >> 8 & 1;
    uVar28 = (uint)((uint6)uVar6 >> 8) & 1;
    uVar19 = (uint)((uint6)uVar6 >> 0x10);
    uVar26 = uVar19 & 1;
    uVar19 = uVar19 >> 8 & 1;
    uVar22 = *(ushort *)(lVar18 + 0x24) & 1;
  }
  lVar18 = *param_7;
  if (lVar18 == 0) {
    uVar24 = 0;
    uVar20 = 1;
    uVar21 = 1;
    uVar23 = 1;
    uVar16 = 1;
    uVar25 = 1;
  }
  else {
    uVar20 = *(uint *)(lVar18 + 0x20);
    uVar6 = *(undefined6 *)(lVar18 + 0x20);
    uVar24 = *(ushort *)(lVar18 + 0x24) >> 8 & 1;
    uVar21 = (uint)((uint6)uVar6 >> 8) & 1;
    uVar16 = (uint)((uint6)uVar6 >> 0x10);
    uVar23 = uVar16 & 1;
    uVar16 = uVar16 >> 8 & 1;
    uVar25 = *(ushort *)(lVar18 + 0x24) & 1;
  }
  uStack_74 = 0x100;
  if ((uVar7 & 0x10000000000) == 0 &&
      ((((uVar4 == 0 && uVar5 == 0) && uVar27 == 0) && uVar17 == 0) && uVar24 == 0)) {
    uStack_74 = 0;
  }
  uVar8 = (uint)(uVar7 >> 0x10);
  uVar1 = 0x1000000;
  if ((uVar8 >> 8 & 1 & uStack_a0 & uStack_c0 & uVar14 & uVar19 & uVar16) == 0) {
    uVar1 = 0;
  }
  uVar14 = 0x10000;
  if ((uVar8 & 1 & uStack_98 & uStack_b8 & uVar13 & uVar26 & uVar23) == 0) {
    uVar14 = 0;
  }
  uVar13 = 0x100;
  if (((uint)(uVar7 >> 8) & 1 & uStack_90 & uStack_b0 & uVar11 & uVar28 & uVar21) == 0) {
    uVar13 = 0;
  }
  uStack_78 = uVar13 | (uint)uVar7 & uVar2 & uVar3 & uVar9 & uVar15 & uVar20 & 1 | uVar14 | uVar1;
  uStack_74 = ((ushort)(uVar7 >> 0x20) & 1 & uVar10 & uVar12 & uVar29 & uVar22 & uVar25) != 0 |
              uStack_74;
  func_0x0001072c9f9c(param_1,0x1a,auStack_70,&uStack_78);
  func_0x0001072c9884(auStack_70);
  *param_1 = &PTR_DAT_1109d40c0;
  lVar18 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = lVar18;
  *param_2 = 0;
  param_2[1] = 0;
  lVar18 = *param_3;
  param_1[0xc] = param_3[1];
  param_1[0xb] = lVar18;
  *param_3 = 0;
  param_3[1] = 0;
  lVar18 = *param_4;
  param_1[0xe] = param_4[1];
  param_1[0xd] = lVar18;
  *param_4 = 0;
  param_4[1] = 0;
  lVar18 = *param_5;
  param_1[0x10] = param_5[1];
  param_1[0xf] = lVar18;
  *param_5 = 0;
  param_5[1] = 0;
  lVar18 = *param_6;
  param_1[0x12] = param_6[1];
  param_1[0x11] = lVar18;
  *param_6 = 0;
  param_6[1] = 0;
  lVar18 = *param_7;
  param_1[0x14] = param_7[1];
  param_1[0x13] = lVar18;
  *param_7 = 0;
  param_7[1] = 0;
  func_0x000107323e8c(param_1 + 0x15,param_8);
  return param_1;
}



/* Entry: 10774999c; end: 107749bfb;  */

void FUN_10774999c(undefined4 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x00010774a240();
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_28 = extraout_x8;
  func_0x000100060964(auStack_68,&UNK_10f4252a2);
  func_0x0001074d2254(&uStack_b8,auStack_68);
  func_0x000104c2f714(auStack_68);
  func_0x00010774a338(*(undefined8 *)(param_2 + 0x48));
  func_0x00010774a2b8();
  func_0x0001072aad1c(&uStack_b8,auStack_68);
  func_0x00010774a27c();
  puStack_d8 = &UNK_10e52b660;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (*(long *)(param_2 + 0x58) != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (*(long *)(param_2 + 0x98) != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  func_0x000104c33260(auStack_68,&puStack_d8);
  func_0x0001075726d4(&uStack_b8,auStack_68);
  func_0x000104c335c0(auStack_68);
  func_0x000107327958(&uStack_f0,&uStack_b8);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_e8;
  *(undefined8 *)(param_1 + 2) = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x000104c33108(&uStack_f0);
  func_0x000104c33548(&puStack_d8);
  func_0x000107269124(&uStack_b8);
  func_0x00010774a220(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010774a2a4();
  func_0x00010774a27c();
  func_0x000104c33548(&puStack_d8);
  do {
    func_0x000107269124(&uStack_b8);
    func_0x00010774a28c();
    func_0x00010774a27c();
  } while( true );
}



/* Entry: 10774a194; end: 10774a197;  */

void FUN_10774a194(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4148;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10774a4e0; end: 10774a60b;  */

void FUN_10774a4e0(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  lVar4 = param_3;
  plVar2 = param_2;
  do {
    if (lVar4 == 0) {
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 2) = 1;
      }
      else {
        func_0x00010747e6e0(&uStack_50);
        plVar2 = (long *)(ulong)uVar3;
        func_0x00010747b534(&uStack_50,plVar2);
        for (; param_3 != 0; param_3 = param_3 + -1) {
          plVar1 = plVar2;
          if ((int)param_2[2] == 2) {
            plVar1 = param_2;
            func_0x000107440e54(param_2);
            func_0x00010746bbb8();
            func_0x000107440e54(param_2);
            func_0x00010774a480(&uStack_50,plVar1,plVar2,0);
          }
          param_2 = param_2 + 3;
          plVar2 = plVar1;
        }
        param_1[1] = uStack_48;
        *param_1 = uStack_50;
        uStack_50 = 0;
        uStack_48 = 0;
        *(undefined4 *)(param_1 + 2) = 2;
        func_0x0001073e0028(&uStack_50);
      }
      return;
    }
    if ((int)plVar2[2] == 2) {
      plVar1 = plVar2;
      func_0x000107440e54();
      uVar3 = uVar3 + *(int *)(*plVar1 + 0x18);
    }
    else if ((int)plVar2[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    plVar2 = plVar2 + 3;
    lVar4 = lVar4 + -1;
  } while( true );
}



/* Entry: 10774a778; end: 10774a77b;  */

undefined8 * FUN_10774a778(undefined8 *param_1)

{
  func_0x000104c3365c(param_1 + 0x18);
  func_0x000107327aec(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10774b31c; end: 10774b37b;  */

/* WARNING: Possible PIC construction at 0x00010774b340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774b344) */
/* WARNING: Removing unreachable block (ram,0x00010774b368) */
/* WARNING: Removing unreachable block (ram,0x00010774b378) */
/* WARNING: Removing unreachable block (ram,0x00010774b354) */

undefined8 FUN_10774b31c(void)

{
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [72];
  
  func_0x00010774e8bc();
  func_0x00010774b13c(auStack_68);
  uStack_78 = 0x10774b344;
  uStack_88 = 0;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107460d64(&uStack_88,auStack_68);
  return uStack_88;
}



/* Entry: 10774b6a0; end: 10774b80b;  */

/* WARNING: Possible PIC construction at 0x00010774b940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774b944) */
/* WARNING: Removing unreachable block (ram,0x00010774b94c) */
/* WARNING: Removing unreachable block (ram,0x00010774b950) */
/* WARNING: Removing unreachable block (ram,0x00010774b954) */

double FUN_10774b6a0(double param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar6;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar7;
  double dVar8;
  double unaff_d8;
  double dVar9;
  double *pdStack_208;
  double *pdStack_200;
  ulong *puStack_1f8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 auStack_198 [3];
  double dStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  double adStack_158 [6];
  long lStack_128;
  undefined8 uStack_118;
  
  func_0x00010774e8bc();
  uVar4 = param_2[1] <= *param_2;
  uVar5 = *param_2 == param_2[1];
  if (!(bool)uVar5) {
    func_0x00010774eb58();
    func_0x00010774ec98();
    if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010774b6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de94526)[extraout_x8_00] * 4 + 0x10774b6f0))();
      return param_1;
    }
  }
  func_0x00010774eb00();
  func_0x00010774e8a8(extraout_x8);
  if ((bool)uVar5) {
    return unaff_d8;
  }
  ___stack_chk_fail();
  func_0x00010774eaa8();
  func_0x00010774e9a0();
  func_0x00010774e944();
  func_0x00010774e8bc();
  uStack_118 = extraout_x8_01;
  func_0x00010774e914();
  uVar5 = param_1 == 0.0;
  dVar8 = param_1;
  dVar9 = param_1;
  adStack_158[0] = param_1;
  if (!(bool)uVar5) {
    dVar8 = 0.0;
    adStack_158[4] = 0.0;
    adStack_158[3] = 0.0;
    lStack_128 = 0;
    adStack_158[5] = 0.0;
    adStack_158[2] = 0.0;
    adStack_158[1] = 0.0;
    func_0x00010774e954(unaff_x21[1]);
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    auStack_198[0] = 0;
    func_0x00010774edc8();
    do {
      while( true ) {
        do {
          dVar9 = adStack_158[0];
          if (lStack_128 == 0) goto code_r0x00010774ba10;
          func_0x00010774e9fc();
          uVar3 = uStack_160;
          uVar2 = uStack_168;
          uVar1 = uStack_170;
          uVar7 = uStack_178;
          uVar5 = dStack_180 == adStack_158[0];
          dVar8 = dStack_180;
        } while (adStack_158[0] <= dStack_180);
        uVar6 = (uStack_170 - uStack_178) + 1;
        if ((uVar6 < 0x65) && (uVar6 = (uStack_160 - uStack_168) + 1, uVar6 < 0x65)) break;
        uVar5 = uVar6 == 100;
        func_0x00010774bfbc(&uStack_1b0,&uStack_178);
        func_0x00010774bfbc(auStack_1e0,&uStack_168);
        pdStack_208 = adStack_158 + 1;
        pdStack_200 = adStack_158;
        puStack_1f8 = param_2;
        func_0x00010774ee38();
        func_0x00010774c01c();
        func_0x00010774ee38();
        func_0x00010774c01c();
        func_0x00010774c01c(&pdStack_208,auStack_198,auStack_1e0);
        func_0x00010774c01c(&pdStack_208,auStack_198,auStack_1c8);
      }
      uVar6 = unaff_x21[1] - *unaff_x21 >> 4;
      uVar5 = uStack_178 <= uStack_170 && uStack_170 == uVar6;
      if ((uStack_178 > uStack_170 || uVar6 <= uStack_170) ||
         (uVar6 = unaff_x20[1] - *unaff_x20 >> 4,
         uVar5 = uStack_168 <= uStack_160 && uStack_160 == uVar6,
         uStack_168 > uStack_160 || uVar6 <= uStack_160)) {
        func_0x00010774eb00();
        dVar8 = dStack_180;
        dVar9 = param_1;
        goto code_r0x00010774ba10;
      }
      func_0x00010774ea40();
      for (; uVar7 <= uVar1; uVar7 = uVar7 + 1) {
        if (uVar2 <= uVar3) {
          dVar8 = *(double *)(*unaff_x21 + uVar7 * 0x10);
          goto code_r0x00010774ba54;
        }
      }
      uVar5 = !NAN(param_1);
      dVar9 = param_1;
      if (NAN(param_1)) goto code_r0x00010774ba10;
      dVar8 = param_1;
      if (adStack_158[0] <= param_1) {
        dVar8 = adStack_158[0];
      }
      uVar5 = dVar8 == 0.0;
      adStack_158[0] = dVar8;
    } while (!(bool)uVar5);
    dVar9 = 0.0;
code_r0x00010774ba10:
    func_0x00010774ec70();
  }
  func_0x00010774e8a8(uStack_118);
  if ((bool)uVar5) {
    return dVar9;
  }
  ___stack_chk_fail();
  func_0x00010774ec70();
  func_0x00010774e9a0();
code_r0x00010774ba54:
  func_0x00010739c1b8();
  return SQRT(dVar8);
}



/* Entry: 10774c100; end: 10774c1eb;  */

void FUN_10774c100(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010774eb88();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      func_0x00010774c214();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      func_0x00010774c1ec(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010774c274(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10774c590; end: 10774c59f;  */

void FUN_10774c590(long param_1)

{
  undefined1 uStack_11;
  
  func_0x00010774c5bc(param_1,param_1 + 0x20,&UNK_10de94560,&uStack_11);
  return;
}



/* Entry: 10774cbf4; end: 10774cc4f;  */

void FUN_10774cbf4(void)

{
  undefined1 in_CY;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar1;
  ulong extraout_x9;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x00010774ecec();
  if ((bool)in_CY && extraout_x8 < extraout_x9) {
    func_0x00010774ebd4();
    func_0x00010774ecd4();
    uVar1 = extraout_x8_00;
    for (; unaff_x21 <= uVar1; unaff_x21 = unaff_x21 + 1) {
      func_0x00010774ec78();
      uVar1 = *(ulong *)(unaff_x19 + 8);
    }
  }
  else {
    func_0x00010774ec4c();
  }
  return;
}



/* Entry: 10774d4e0; end: 10774d543;  */

void FUN_10774d4e0(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = (int)(*(byte *)(param_2 + 0x10) - 1) < 0;
  if ((*(byte *)(param_2 + 0x10) == 1) && ((*(byte *)(param_3 + 0x10) & 1) != 0)) {
    func_0x00010774ea9c();
    FUN_10774cbf4(*(undefined8 *)(param_1 + 0x18));
    func_0x00010774eacc();
    FUN_10774cbf4();
    func_0x00010774e8fc();
    func_0x00010774ecb8();
    if ((bool)uVar1) {
      func_0x00010774e8e0();
    }
  }
  return;
}



/* Entry: 10774de08; end: 10774de97;  */

void FUN_10774de08(undefined1 *param_1,undefined8 param_2)

{
  undefined1 auStack_50 [31];
  undefined1 uStack_31;
  
  func_0x000107297740(param_2,&uStack_31);
  if ((int)param_2 - 1U < 3) {
    func_0x00010774eb7c();
    func_0x000107470b80();
  }
  else {
    func_0x00010002b838(auStack_50,&UNK_10f4253da);
    func_0x00010774ec3c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  return;
}



/* Entry: 10774e058; end: 10774e06f;  */

void FUN_10774e058(long param_1)

{
  if (param_1 != 0) {
    func_0x00010774a748();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774e1b8; end: 10774e1eb;  */

void FUN_10774e1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00010774e1ec(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 10774e4b8; end: 10774e4e7;  */

undefined8 FUN_10774e4b8(long *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + 8);
  func_0x00010774eb94(uVar1,*param_2);
  if ((bool)in_ZR) {
    func_0x00010774e504();
    return uVar1;
  }
  return 0;
}



/* Entry: 10774e6e0; end: 10774e74b;  */

long FUN_10774e6e0(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  
  lVar1 = *param_1 + 8;
  func_0x00010774eb94(lVar1);
  if ((bool)in_ZR) {
    func_0x00010774e60c();
    return lVar1;
  }
  return 0;
}



/* Entry: 10774e868; end: 10774e8a7;  */

void FUN_10774e868(int param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010774e9b8();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x20) {
    func_0x00010774ed1c();
    func_0x00010774b424();
    if (param_1 == 0) break;
  }
  func_0x00010774ecc8();
  return;
}



/* Entry: 10774f2dc; end: 10774f357;  */

/* WARNING: Possible PIC construction at 0x00010774f3a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774f3a4) */
/* WARNING: Removing unreachable block (ram,0x00010774f3d4) */
/* WARNING: Removing unreachable block (ram,0x00010774f3f8) */
/* WARNING: Removing unreachable block (ram,0x00010774f3c4) */

void FUN_10774f2dc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 unaff_x19;
  undefined1 auStack_188 [8];
  undefined1 *puStack_180;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [56];
  undefined1 auStack_108 [128];
  undefined8 uStack_38;
  
  func_0x0001077500c0();
  __Znwm(0x80);
  func_0x000107750158();
  func_0x000104c318bc();
  func_0x00010774fb40();
  *param_1 = unaff_x19;
  func_0x00010775023c();
  func_0x000107750098(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010775023c();
  func_0x000107750220();
  func_0x000107750208();
  func_0x0001077500ac();
  func_0x00010002b838(auStack_158);
  func_0x0001072625b4(auStack_140,auStack_158);
  func_0x000107277488(auStack_108,auStack_140);
  puVar1 = auStack_108;
  puStack_180 = auStack_108;
  func_0x00010774f448(auStack_188);
  func_0x000107750250();
  func_0x0001075393d4();
  func_0x0001077501c4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001077500d4();
  }
  return;
}



/* Entry: 10774f5dc; end: 10774f61f;  */

void FUN_10774f5dc(void)

{
  func_0x00010775007c();
  func_0x000107750108();
  func_0x00010774f498();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774f894; end: 10774f8eb;  */

void FUN_10774f894(undefined *param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    func_0x00010774ee44(param_1,(undefined1 *)((long)register0x00000008 + -0x70));
    func_0x0001072c9c34((undefined1 *)((long)register0x00000008 + -0x70));
    func_0x000107750098(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000107750158();
    func_0x0001072c9c34();
    unaff_x30 = &SUB_10774f8ec;
    func_0x000107750118();
    param_1 = &UNK_10f42544d;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 10774fbb4; end: 10774fbb7;  */

undefined8 * FUN_10774fbb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d42d0;
  func_0x000104c2f714(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10774fcec; end: 10774fd13;  */

void FUN_10774fcec(undefined8 param_1)

{
  func_0x000107750244();
  func_0x0001077501e0(param_1,&PTR_DAT_1109d4398);
  func_0x000107750194();
  return;
}



/* Entry: 10774fed0; end: 10774fedf;  */

void FUN_10774fed0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010775016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10774ff98; end: 10774ff9b;  */

void FUN_10774ff98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107750050; end: 107750077;  */

void FUN_107750050(undefined8 param_1)

{
  func_0x000107750244();
  func_0x0001077501e0(param_1,&PTR_DAT_1109d44b8);
  func_0x000107750194();
  return;
}



/* Entry: 107750650; end: 1077506b7;  */

undefined1 ***
FUN_107750650(undefined8 param_1,undefined8 **param_2,long param_3,undefined8 **param_4)

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
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long unaff_x20;
  undefined1 auStack_1e8 [24];
  undefined1 **ppuStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 uStack_199;
  undefined1 *apuStack_198 [3];
  undefined8 *puStack_180;
  undefined8 ***pppuStack_150;
  undefined *puStack_148;
  undefined1 uStack_139;
  undefined8 *apuStack_138 [5];
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 uStack_e9;
  undefined1 *apuStack_e8 [5];
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_99;
  undefined1 *apuStack_98 [5];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 uStack_49;
  undefined1 *apuStack_48 [5];
  
  func_0x000107750fc0();
  uVar1 = 0;
  if (param_2[3] != (undefined8 *)0x0) {
    uStack_49 = 0;
    func_0x000107750ffc(&PTR_DAT_1109d4568);
    param_2 = (undefined8 **)apuStack_48;
    func_0x000107869d34();
    func_0x00010775102c();
    uVar1 = uStack_49;
  }
  func_0x000107750fa0(uVar1);
  if ((bool)in_ZR) {
    pppuVar2 = (undefined1 ***)(ulong)(extraout_w8 & 1);
  }
  else {
    ___stack_chk_fail();
    func_0x00010775102c();
    func_0x000107751024();
    puStack_58 = &UNK_1077506b8;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107750fc0();
    uVar1 = *(int *)(param_2 + 2) == 1;
    if ((bool)uVar1) {
      uVar8 = 0;
    }
    else {
      uStack_99 = 0;
      func_0x000107750ffc(&PTR_DAT_1109d45e8);
      param_2 = (undefined8 **)apuStack_98;
      func_0x000107869948();
      func_0x00010775106c();
      uVar8 = uStack_99;
    }
    func_0x000107750fa0(uVar8);
    if ((bool)uVar1) {
      pppuVar2 = (undefined1 ***)(ulong)(extraout_w8_00 & 1);
    }
    else {
      ___stack_chk_fail();
      func_0x00010775106c();
      func_0x000107751024();
      puStack_a8 = &UNK_10775072c;
      ppuStack_b0 = &puStack_60;
      func_0x000107750fc0();
      uVar1 = *(int *)(param_2 + 2) == 1;
      if ((bool)uVar1) {
        uVar8 = 0;
      }
      else {
        uStack_e9 = 0;
        func_0x000107750ffc(&PTR_DAT_1109d4668);
        param_2 = (undefined8 **)apuStack_e8;
        func_0x000107869d34();
        func_0x00010775102c();
        uVar8 = uStack_e9;
      }
      func_0x000107750fa0(uVar8);
      if ((bool)uVar1) {
        pppuVar2 = (undefined1 ***)(ulong)(extraout_w8_01 & 1);
      }
      else {
        ___stack_chk_fail();
        func_0x00010775102c();
        func_0x000107751024();
        puStack_f8 = &UNK_1077507a0;
        pppuStack_100 = &ppuStack_b0;
        func_0x000107750fc0();
        uVar8 = 0;
        if (param_2[3] != (undefined8 *)0x0) {
          uStack_139 = 0;
          func_0x000107750ffc(&PTR_DAT_1109d46e8);
          param_2 = apuStack_138;
          func_0x000107869c04();
          func_0x00010750b370();
          uVar8 = uStack_139;
        }
        func_0x000107750fa0(uVar8);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          pppuVar2 = (undefined1 ***)apuStack_138;
          func_0x00010750b370();
          func_0x000107751024();
          puStack_148 = &UNK_107750810;
          pppuStack_150 = &pppuStack_100;
          func_0x000107750fc0();
          uVar1 = *(int *)(param_3 + 0x10) == 1;
          lVar6 = param_3;
          ppuVar7 = param_4;
          if ((bool)uVar1) {
            param_3 = unaff_x20;
            uVar8 = 0;
          }
          else {
            uStack_199 = 0;
            puVar3 = (undefined8 *)0x28;
            __Znwm();
            *puVar3 = &PTR_DAT_1109d47e8;
            puVar3[1] = param_2;
            puVar3[2] = &uStack_199;
            puVar3[3] = param_4;
            puVar3[4] = param_3;
            param_2 = (undefined8 **)apuStack_198;
            puStack_180 = puVar3;
            func_0x000107869d34();
            func_0x00010775102c();
            uVar8 = uStack_199;
          }
          func_0x000107750fa0(uVar8);
          if ((bool)uVar1) {
            return (undefined1 ***)(ulong)(extraout_w8_03 & 1);
          }
          ___stack_chk_fail();
          pppuVar4 = pppuVar2;
          func_0x00010775102c();
          func_0x000107751024();
          puStack_1a8 = &UNK_1077508c0;
          pppuVar5 = pppuVar4;
          ppuStack_1d0 = (undefined1 **)param_2;
          lStack_1c8 = lVar6;
          lStack_1c0 = param_3;
          ppuStack_1b8 = pppuVar2;
          pppuStack_1b0 = &pppuStack_150;
          while ((undefined8 **)ppuStack_1d0 != ppuVar7) {
            func_0x000107750910(auStack_1e8,pppuVar4,lStack_1c8);
            pppuVar5 = &ppuStack_1d0;
            func_0x000107262260(pppuVar5);
          }
          return pppuVar5;
        }
        pppuVar2 = (undefined1 ***)(ulong)(extraout_w8_02 & 1);
      }
    }
  }
  return pppuVar2;
}



/* Entry: 10775093c; end: 1077509b7;  */

void FUN_10775093c(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x00010726297c();
  if ((param_3 & 1) != 0) {
    func_0x000104c2fe00(*(long *)(*param_2 + 8) + lVar2 * 0x38,param_4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 107750adc; end: 107750aff;  */

void FUN_107750adc(void)

{
  func_0x000107750fd0();
  func_0x000107750fdc(&PTR_DAT_1109d45e8);
  return;
}



/* Entry: 107750c2c; end: 107750c9f;  */

void FUN_107750c2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 *extraout_x8;
  undefined1 *puVar2;
  uint extraout_w9;
  
  if (*(char *)(param_4 + 0x38) == '\x01') {
    func_0x0001077510a0();
    if ((extraout_w9 & 1) == 0) {
      func_0x000107750b94(param_4,*(undefined8 *)(param_1 + 0x10));
      uVar1 = (undefined1)param_4;
      puVar2 = *(undefined1 **)(param_1 + 8);
    }
    else {
      uVar1 = 1;
      puVar2 = extraout_x8;
    }
    *puVar2 = uVar1;
  }
  return;
}



/* Entry: 107750dc0; end: 107750ddb;  */

void FUN_107750dc0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d4758;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077510ac; end: 10775122f;  */

/* WARNING: Possible PIC construction at 0x00010775116c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107751170) */
/* WARNING: Removing unreachable block (ram,0x0001077511f0) */
/* WARNING: Removing unreachable block (ram,0x00010775117c) */

long * FUN_1077510ac(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined *puVar4;
  long lVar5;
  long lStack_150;
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  func_0x000107752dbc();
  lVar2 = plVar1[8];
  plVar1 = param_2 + 1;
  uStack_48 = extraout_x8;
  func_0x0001074d2700();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_3 + 0x118);
    lStack_f8 = *(long *)(param_3 + 0x120);
    lStack_100 = lVar2;
    if (lStack_f8 != 0) {
      do {
        func_0x000107752dd4();
      } while (extraout_w10 != 0);
      lVar2 = *(long *)(param_3 + 0x118);
    }
    if (lVar2 == 0) {
      uStack_f0 = 0;
      uStack_e8 = 0;
    }
    else {
      uStack_e8 = *(undefined8 *)(lVar2 + 0x38);
      uStack_f0 = *(undefined8 *)(lVar2 + 0x30);
      if (*(long *)(lVar2 + 0x38) != 0) {
        do {
          func_0x000107752dd4();
        } while (extraout_w10_00 != 0);
      }
    }
    func_0x00010757945c(param_3 + 0x118,&uStack_f0);
    func_0x000107267e68(&uStack_f0);
    func_0x000107753050(param_1,*(undefined8 *)*param_2,param_3,param_4);
    plVar3 = (long *)(param_3 + 0x118);
    plVar1 = &lStack_100;
    puVar4 = (undefined *)0x107751170;
  }
  else {
    param_2 = (long *)(param_1 + 8);
    plVar1 = plVar1 + 7;
    func_0x0001074d286c();
    func_0x000107752da8(uStack_48);
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x00010729651c(&uStack_f0);
    plVar3 = (long *)(param_1 + 8);
    func_0x00010727f7f8();
    func_0x000107752fd0();
    puVar4 = &SUB_107751230;
    func_0x000107752fe4();
  }
  lVar5 = plVar1[1];
  lVar2 = *plVar1;
  plStack_140 = param_2;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  puStack_128 = puVar4;
  if (plVar1[1] != 0) {
    do {
      func_0x000107752dd4();
    } while (extraout_w10_01 != 0);
  }
  lStack_148 = plVar3[1];
  lStack_150 = *plVar3;
  plVar3[1] = lVar5;
  *plVar3 = lVar2;
  func_0x000107267e68(&lStack_150);
  return plVar3;
}



/* Entry: 1077514d8; end: 10775156b;  */

/* WARNING: Possible PIC construction at 0x000107751530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107751534) */
/* WARNING: Removing unreachable block (ram,0x00010775155c) */
/* WARNING: Removing unreachable block (ram,0x000107751564) */
/* WARNING: Removing unreachable block (ram,0x000107751568) */
/* WARNING: Removing unreachable block (ram,0x000107751548) */

long FUN_1077514d8(long param_1,long param_2)

{
  long lVar1;
  long lStack_a0;
  undefined1 auStack_98 [56];
  undefined1 auStack_60 [64];
  
  lVar1 = param_1;
  func_0x000107752dbc();
  lStack_a0 = param_2;
  func_0x00010775245c(lVar1 + 0x178,&lStack_a0);
  func_0x000104c2fe00(auStack_98,lStack_a0 + 0x70);
  func_0x000104c2fe00(auStack_60,lStack_a0 + 0xa8);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x0001077521c0();
  }
  else {
    func_0x0001077521ec(param_1 + 0x60,auStack_98);
  }
  return param_1 + 0x60;
}



/* Entry: 1077519dc; end: 107751a3f;  */

long FUN_1077519dc(long param_1)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  
  lVar1 = param_1;
  func_0x0001077515a0();
  if ((int)lVar1 != 0) {
    if (*(int *)(param_1 + 0x188) == 1) {
      plVar2 = (long *)(param_1 + 0x178);
      func_0x0001077522cc();
      return *plVar2 + 0x20;
    }
    if (*(int *)(param_1 + 0x188) == 0) {
      param_1 = param_1 + 0x178;
      FUN_1077522b4(param_1);
      func_0x000107752f84();
                    /* WARNING: Could not recover jumptable at 0x000107751a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8 + 0x20))();
      return param_1;
    }
  }
  return 0;
}



/* Entry: 107752100; end: 10775211b;  */

void FUN_107752100(long param_1)

{
  func_0x00010775211c();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 1077522b4; end: 1077522e7;  */

undefined1 * FUN_1077522b4(undefined1 *param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x10) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  func_0x000107752324();
  return param_1;
}



/* Entry: 107752420; end: 10775245b;  */

void FUN_107752420(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x000107752f90();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107752dd4();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 2) = 0;
  return;
}



/* Entry: 1077525fc; end: 10775262f;  */

void FUN_1077525fc(void)

{
  func_0x000107752614();
  return;
}



/* Entry: 107752d00; end: 107752d5b;  */

void FUN_107752d00(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        func_0x0001072745a8((&PTR_DAT_110995e78)[*(uint *)(param_1 + 0x10)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_DAT_1109d4868)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 1077534a0; end: 1077534df;  */

void FUN_1077534a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d4908;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1077539dc; end: 107753a2f;  */

void FUN_1077539dc(void)

{
  int iVar1;
  
  if ((bRam0000000113822cd8 & 1) == 0) {
    iVar1 = 0x13822cd8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113822cd0 = 0;
      uRam0000000113822cc8 = 0;
      uRam0000000113822cc0 = 0x113822cc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113822cd8);
      return;
    }
  }
  return;
}



/* Entry: 107753c44; end: 107753c7f;  */

long FUN_107753c44(long param_1,long param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    func_0x000107753c80(param_1,*(undefined8 *)(param_2 + 0x10),0);
  }
  return param_1;
}



/* Entry: 107754344; end: 1077543ab;  */

void FUN_107754344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar13;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [16];
  undefined1 uStack_2d8;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [16];
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  byte bStack_260;
  undefined1 auStack_258 [24];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  uint5 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [144];
  char cStack_178;
  long lStack_170;
  undefined8 uStack_168;
  byte bStack_160;
  undefined1 auStack_150 [4];
  undefined1 uStack_14c;
  byte bStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  puVar11 = auStack_a0;
  plVar7 = (long *)auStack_a0;
  func_0x000107755288(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  puVar12 = (undefined1 *)0x1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x000107755274(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x000107755298();
  puVar10 = &uStack_310;
  func_0x000107755288();
  plVar13 = plVar7 + 1;
  plVar8 = plVar13;
  uStack_f8 = extraout_x8_01;
  (**(code **)(*plVar7 + 0x20))();
  uVar6 = (undefined1 *)((long)plVar8 + -5) == (undefined1 *)0xfffffffffffffffd;
  if ((undefined1 *)((long)plVar8 + -5) < (undefined1 *)0xfffffffffffffffe) {
    func_0x000107878fec(auStack_208,(undefined1 *)((long)plVar8 + -1));
    func_0x0001004c3cd0(auStack_258,&UNK_10f42574c,auStack_208);
    func_0x00010756a668(puVar11,auStack_258);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
    func_0x0001077552a0();
    func_0x000107755320();
code_r0x0001077547c8:
    func_0x000107755274(uStack_f8);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x000107755314();
    (*extraout_x9)(auStack_208,plVar13,1);
    auStack_288[0] = 0;
    uStack_278 = 0;
    auStack_150[0] = 0;
    uStack_14c = 0;
    func_0x00010777067c(&uStack_270,puVar11,auStack_208,1,puVar12,auStack_288,auStack_150);
    func_0x0001072c9854(auStack_288);
    func_0x0001072f5f6c(auStack_208);
    if ((bStack_260 & 1) == 0) {
      func_0x00010002b838(auStack_2a0,&UNK_10f4257b4);
      func_0x00010756a69c(puVar11,auStack_2a0,1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a0);
      func_0x000107755320();
code_r0x0001077547c0:
      func_0x0001072c95d0(&uStack_270);
      goto code_r0x0001077547c8;
    }
    auStack_150[0] = 0;
    bStack_118 = 0;
    uVar6 = plVar8 == (long *)0x4;
    if ((bool)uVar6) {
      func_0x000107755314();
      func_0x0001077552f8(&lStack_170);
      (**(code **)(lStack_170 + 0x68))(auStack_208,&uStack_168);
      func_0x0001072e948c(auStack_150,auStack_208);
      func_0x00010724b3d8(auStack_208);
      func_0x0001072f5f6c(&lStack_170);
      if ((bStack_118 & 1) != 0) goto code_r0x0001077545b8;
      func_0x000107755314();
      func_0x0001077552f8(&uStack_110);
      func_0x00010754c3ec(&lStack_170,&uStack_110);
      func_0x0001004c3cd0(auStack_208,&UNK_10f4257d9,&lStack_170);
      func_0x00010048a6c8(auStack_2b8,auStack_208,&UNK_10f417b93);
      func_0x00010756a69c(puVar11,auStack_2b8,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
      func_0x0001077552a0();
      func_0x0001077552b8();
      func_0x000107755304();
      func_0x000107755320();
code_r0x0001077547b8:
      func_0x00010724b3d8(auStack_150);
      goto code_r0x0001077547c0;
    }
    func_0x000100060964(auStack_208,&DAT_10f2f5ad9);
    func_0x00010729515c(auStack_150,auStack_208);
    func_0x000104c2f714(auStack_208);
code_r0x0001077545b8:
    func_0x00010724ef84(&lStack_170,auStack_150);
    func_0x0001000e3098(auStack_2d0,&lStack_170,1);
    func_0x000107754984(auStack_208,puVar12,auStack_2d0);
    func_0x0001000e30f4(auStack_2d0);
    func_0x0001077552b8();
    uVar1 = 2;
    if (plVar8 != (long *)0x3) {
      uVar1 = 3;
    }
    func_0x000107755314();
    (*extraout_x9_00)(&uStack_110,plVar13,uVar1);
    uVar6 = cStack_178 == '\0';
    puVar2 = auStack_208;
    if ((bool)uVar6) {
      puVar2 = puVar12;
    }
    auStack_2e8[0] = 0;
    uStack_2d8 = 0;
    uVar4 = (ulong)_uStack_220 >> 0x28;
    uVar3 = (uint)_uStack_220;
    uStack_220 = (uint5)(uVar3 & 0xffffff00);
    _uStack_220 = CONCAT35((int3)uVar4,uStack_220);
    func_0x00010777067c(&lStack_170,puVar11,&uStack_110,uVar1,puVar2,auStack_2e8,&uStack_220);
    func_0x0001072c9854(auStack_2e8);
    func_0x000107755304();
    if ((bStack_160 & 1) == 0) {
      func_0x00010002b838(auStack_300,&UNK_10f42580c);
      func_0x00010756a69c(puVar11,auStack_300,uVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
      func_0x000107755320();
code_r0x0001077547a8:
      func_0x0001072c95d0(&lStack_170);
      func_0x00010752b5b8(auStack_208);
      goto code_r0x0001077547b8;
    }
    uVar6 = puVar11[0x51] == '\x01';
    if (!(bool)uVar6) {
      if ((bStack_118 & 1) == 0) {
        func_0x000104bdc2c8();
        goto code_r0x000107754800;
      }
      puVar10 = (undefined8 *)0xb8;
      __Znwm();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_DAT_1109d4a10;
      uStack_108 = uStack_268;
      uStack_110 = uStack_270;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_218 = uStack_168;
      _uStack_220 = lStack_170;
      lStack_170 = 0;
      uStack_168 = 0;
      func_0x000107754f20(puVar10 + 3,&uStack_110,auStack_150,&uStack_220);
      func_0x0001077552b0();
      func_0x00010775530c();
      *extraout_x8_00 = (long)(puVar10 + 3);
      extraout_x8_00[1] = (long)puVar10;
      uStack_230 = 0;
      uStack_228 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 1;
      puVar10 = &uStack_230;
code_r0x0001077547a4:
      FUN_107755018(puVar10);
      goto code_r0x0001077547a8;
    }
    if ((bStack_118 & 1) != 0) {
      puVar9 = (undefined8 *)0xb8;
      __Znwm();
      uStack_218 = uStack_168;
      _uStack_220 = lStack_170;
      uStack_108 = uStack_268;
      uStack_110 = uStack_270;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_DAT_1109d4a10;
      uStack_270 = 0;
      uStack_268 = 0;
      lStack_170 = 0;
      uStack_168 = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      func_0x000107754f20(puVar9 + 3,&uStack_110,auStack_150,&uStack_220);
      func_0x0001077552b0();
      func_0x00010775530c();
      func_0x0001002a8234(puVar9 + 8,puVar12 + 0x40);
      func_0x0001072c9b9c(&uStack_240);
      func_0x0001072c9b9c(&uStack_230);
      *extraout_x8_00 = (long)(puVar9 + 3);
      extraout_x8_00[1] = (long)puVar9;
      uStack_310 = 0;
      uStack_308 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 1;
      goto code_r0x0001077547a4;
    }
  }
  func_0x000104bdc2c8();
code_r0x000107754800:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x107754804);
  (*pcVar5)();
}



/* Entry: 107754e40; end: 107754e9f;  */

long * FUN_107754e40(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_2 + 8) == 0x1d) {
    func_0x00010775532c();
    plVar1 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(unaff_x20 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x000107754e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(unaff_x19 + 0x90));
      return plVar1;
    }
  }
  return (long *)0x0;
}



/* Entry: 107755018; end: 107755043;  */

long FUN_107755018(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077555e4; end: 107755617;  */

/* WARNING: Possible PIC construction at 0x000107755600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107755604) */

long * FUN_1077555e4(long param_1,long param_2)

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



/* Entry: 107755e88; end: 107755efb;  */

long * FUN_107755e88(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 8) == 0x1e) {
    plVar1 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar1 != 0) {
      lVar2 = param_1 + 0x58;
      func_0x000107755f54(lVar2,param_2 + 0x58);
      if ((int)lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x000107755ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x98));
        return plVar1;
      }
    }
  }
  return (long *)0x0;
}


