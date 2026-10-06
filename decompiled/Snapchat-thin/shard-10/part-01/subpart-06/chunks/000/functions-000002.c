/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107737db4; end: 107737edb;  */

void FUN_107737db4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  code *unaff_x20;
  long unaff_x22;
  long unaff_x24;
  undefined1 auStack_1e0 [16];
  code *pcStack_1d0;
  undefined1 auStack_1b0 [128];
  undefined1 auStack_130 [112];
  undefined1 auStack_c0 [56];
  undefined8 auStack_88 [17];
  
  func_0x000107743290();
  func_0x000107741834();
  func_0x000107742d28();
  func_0x000107743800();
  do {
    uVar1 = unaff_x24 == 2;
    if ((bool)uVar1) {
      unaff_x20 = *(code **)(unaff_x22 + 0x80);
      func_0x00010774339c();
      func_0x000107737bec();
      FUN_10772e7e8(auStack_c0,auStack_130);
      (*unaff_x20)(auStack_88,auStack_1b0,auStack_c0);
      func_0x000107742f80();
      func_0x000107742d20();
      func_0x000107742c84();
      if ((bool)uVar1) {
        param_1 = auStack_88;
        func_0x00010772ea78(param_1);
        param_2 = param_1;
        func_0x000107743044();
      }
      else {
        param_1 = auStack_88;
        func_0x00010772ea60(param_1);
        param_2 = param_1;
        func_0x0001077428fc();
      }
      func_0x000107742bd0(auStack_88);
      goto LAB_107737e84;
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
      param_2 = param_1;
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_107737e84:
  func_0x000107742f34();
  func_0x000107741a80();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742260();
  func_0x00010772ead4();
  func_0x000107742f34();
  func_0x000107742904();
  pcStack_1d0 = unaff_x20;
  func_0x000107742d44(extraout_x8,param_1,param_2);
  func_0x000107278b70();
  func_0x0001072d1220(auStack_1e0,param_1);
  func_0x0001077423a8();
  return;
}



/* Entry: 107738160; end: 10773834b;  */

/* WARNING: Removing unreachable block (ram,0x0001077383c8) */
/* WARNING: Removing unreachable block (ram,0x0001077383ec) */
/* WARNING: Removing unreachable block (ram,0x0001077383dc) */
/* WARNING: Removing unreachable block (ram,0x0001077383f8) */

undefined8 * FUN_107738160(undefined8 *param_1,undefined8 *param_2)

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
            func_0x000107731bf8(param_1,lVar9,lVar2,in_stack_00000020);
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
LAB_1077382f8:
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
      goto LAB_1077382f8;
    }
    param_1 = puVar7;
    func_0x0001075725f8();
    func_0x000107743184(*param_1);
    lVar9 = extraout_x8_00 / 0x70 + lVar9;
    puVar7 = puVar7 + 0xe;
    puVar10 = puVar10 + -0xe;
  } while( true );
}



/* Entry: 107738794; end: 1077387b7;  */

void FUN_107738794(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107743454();
  func_0x00010002c7d4();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 107738b98; end: 107738ba7;  */

void FUN_107738b98(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
  
  func_0x0001077429f8(param_1,param_2,param_3);
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
    FUN_107738794(ppuVar5);
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



/* Entry: 107739098; end: 10773915f;  */

undefined8 * FUN_107739098(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int unaff_w20;
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
    func_0x00010774376c();
    puVar3 = (undefined8 *)*puVar2;
    puVar2 = auStack_b8;
    func_0x000107738f3c(puVar2,*puVar3,puVar3[1]);
    func_0x000107743ba0();
    if ((bool)uVar1) {
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
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107741d08();
  func_0x000107742088();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 1077393fc; end: 10773940f;  */

void FUN_1077393fc(void)

{
  FUN_10772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107739804; end: 10773980f;  */

/* WARNING: Possible PIC construction at 0x0001077398c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077398cc) */
/* WARNING: Removing unreachable block (ram,0x0001077398e4) */
/* WARNING: Removing unreachable block (ram,0x0001077398d4) */
/* WARNING: Removing unreachable block (ram,0x0001077398f0) */

undefined8 * FUN_107739804(undefined1 *param_1,undefined1 *param_2)

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
    func_0x000107741be8(param_1,param_2);
    func_0x000107742e7c();
    func_0x0001078b699c();
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
    unaff_x29 = puVar1 + -0x90;
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
    param_2 = puVar1 + -0x1a8;
    func_0x000107739a10();
    param_1 = puVar1 + -0x138;
    unaff_x30 = &UNK_1077398cc;
    puVar1 = puVar1 + -0x1b0;
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077420f0();
  func_0x00010772ead4();
  func_0x000107742088();
  func_0x000107742904();
  *(undefined8 *)(puVar1 + -0x1d0) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x1c8) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x1c0) = unaff_x29;
  *(undefined **)(puVar1 + -0x1b8) = &DAT_107739930;
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107739a38; end: 107739a77;  */

long * FUN_107739a38(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long unaff_x19;
  int unaff_w20;
  long alStack_118 [17];
  undefined1 auStack_60 [64];
  
  func_0x000107741be8();
  func_0x000107743a20();
  plVar2 = (long *)(unaff_x19 + 8);
  func_0x000104c318bc(plVar2,auStack_60);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  func_0x0001077431c4();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107741910();
  func_0x000107742168();
  plVar2 = (long *)*plVar2;
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
    FUN_107739a38();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x000107739c64(alStack_118);
      plVar2 = (long *)(unaff_x19 + 8);
      FUN_1075725a0();
    }
    else {
      plVar2 = alStack_118;
      func_0x000107739c4c();
      func_0x0001077428fc();
    }
    func_0x00010774300c();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000107742174();
  func_0x000107739c80();
  func_0x0001077420d8();
  func_0x000107742904();
  *plVar2 = (long)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(plVar2 + 9);
  func_0x00010772d754(plVar2 + 5);
  func_0x0001072c9884(plVar2 + 2);
  return plVar2;
}



/* Entry: 107739cd4; end: 107739d6f;  */

void FUN_107739cd4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x21;
  undefined1 auStack_c8 [104];
  undefined4 uStack_60;
  
  func_0x000107743300();
  func_0x000107741cf4();
  func_0x000107743604();
  func_0x0001075925d4(param_3 + 0x40,auStack_c8);
  func_0x000107742ac0();
  uStack_60 = 0;
  lVar1 = *(long *)(unaff_x21 + 0xe0);
  if ((lVar1 != 0) && (func_0x000107869920(), (param_4 & 1) != 0)) {
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  func_0x00010774257c();
  func_0x000107742bf8();
  func_0x000107741a68();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742088();
  func_0x000107742904();
  func_0x0001072ddd58();
  *(undefined4 *)(lVar1 + 0x70) = 1;
  return;
}



/* Entry: 107739ff4; end: 10773a0c7;  */

undefined8 * FUN_107739ff4(long *param_1)

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
    func_0x000107739f58();
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



/* Entry: 10773a378; end: 10773a38b;  */

void FUN_10773a378(void)

{
  FUN_10772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773a800; end: 10773a817;  */

/* WARNING: Possible PIC construction at 0x00010773a930: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773a934) */
/* WARNING: Removing unreachable block (ram,0x00010773a954) */
/* WARNING: Removing unreachable block (ram,0x00010773a944) */
/* WARNING: Removing unreachable block (ram,0x00010773a960) */

long * FUN_10773a800(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
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
  
  plVar5 = *(long **)*param_2;
  lVar6 = ((long *)*param_2)[1];
  puVar7 = *(undefined **)*param_3;
  lVar8 = ((undefined8 *)*param_3)[1];
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar3 = param_1;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741ca8();
    uVar2 = lVar6 - (long)plVar5 == lVar8 - (long)puVar7;
    if ((bool)uVar2) {
      uVar9 = lVar6 - (long)plVar5 >> 2;
      dVar11 = 0.0;
      for (uVar10 = 0; uVar2 = uVar9 == uVar10, uVar10 < uVar9; uVar10 = (ulong)((int)uVar10 + 1)) {
        dVar12 = (double)(*(float *)((long)plVar5 + uVar10 * 4) - *(float *)(puVar7 + uVar10 * 4));
        dVar11 = dVar11 + dVar12 * dVar12;
      }
      func_0x0001077423d4(dVar11);
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
    puVar7 = &UNK_10773a8bc;
    func_0x00010774309c();
    *(undefined1 **)(puVar1 + 0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + 200) = puVar7;
    unaff_x29 = puVar1 + 0xc0;
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
        plVar5 = plVar4;
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
        *(undefined1 **)(puVar1 + -0x130) = unaff_x29;
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
    param_1 = puVar1 + -0x18;
    unaff_x30 = &UNK_10773a934;
    puVar1 = puVar1 + -0x120;
    unaff_x19 = puVar3;
  }
  return plVar4;
}



/* Entry: 10773ab44; end: 10773ac8b;  */

undefined8 * FUN_10773ab44(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x23;
  undefined8 *puStack_1e8;
  undefined1 auStack_1d8 [104];
  undefined4 uStack_170;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [14];
  int iStack_80;
  
  func_0x0001077418c8();
  uStack_170 = 0;
  uStack_100 = 0;
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x00010773adec(auStack_1d8);
      func_0x000107743060();
      param_2 = &uStack_f8;
      func_0x00010773aadc(param_1,param_2,*puStack_1e8,puStack_1e8[1]);
      func_0x000107742cbc();
      uVar1 = iStack_80 == 1;
      if ((bool)uVar1) {
        func_0x000107742f9c();
        func_0x000107742b70();
      }
      else {
        func_0x000107742f94();
        func_0x0001077428fc();
      }
      func_0x00010774290c(&uStack_f8);
      goto LAB_10773ac28;
    }
    func_0x0001077422ac();
    param_2 = (undefined8 *)*param_2;
    func_0x000107742138(&uStack_f8);
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
LAB_10773ac28:
  func_0x0001077436d0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_f0;
  func_0x00010727f7f8();
  func_0x0001077436d0();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773b000; end: 10773b003;  */

undefined8 * FUN_10773b000(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773b228; end: 10773b2b3;  */

void FUN_10773b228(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x21;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107743300();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001074b01dc(&uStack_48,*(undefined8 *)(param_2 + 8));
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



/* Entry: 10773b694; end: 10773b697;  */

undefined8 * FUN_10773b694(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773bb24; end: 10773bc03;  */

void FUN_10773bb24(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long *unaff_x24;
  long unaff_x25;
  undefined1 uStack_149;
  undefined **ppuStack_148;
  long *plStack_140;
  undefined ***pppuStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [120];
  
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
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742aa8();
  func_0x000107742904();
  func_0x000107741ca8(extraout_x8);
  if (param_3[1] != 0) {
    lVar1 = *param_3;
    in_ZR = *(int *)(lVar1 + 0x68) == 3;
    if ((bool)in_ZR) {
      func_0x000107573ddc();
      param_1 = param_1 + 0x108;
      func_0x0001074d2700(param_1,lVar1);
      if (param_1 != 0) {
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
        goto code_r0x00010773bcd0;
      }
    }
  }
  func_0x00010774238c();
code_r0x00010773bcd0:
  func_0x0001077419ec();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742ac8();
    func_0x0001077309b4();
    func_0x000107730a04(&ppuStack_148);
    func_0x000107742904();
    return;
  }
  return;
}



/* Entry: 10773bdc4; end: 10773bdcf;  */

undefined ** FUN_10773bdc4(void)

{
  return &PTR_DAT_1109d36e8;
}



/* Entry: 10773c0cc; end: 10773c0df;  */

void FUN_10773c0cc(void)

{
  FUN_10772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773c404; end: 10773c40f;  */

/* WARNING: Possible PIC construction at 0x00010773c638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773c63c) */
/* WARNING: Removing unreachable block (ram,0x00010773c654) */
/* WARNING: Removing unreachable block (ram,0x00010773c644) */
/* WARNING: Removing unreachable block (ram,0x00010773c660) */

long * FUN_10773c404(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long *plVar4;
  double *pdVar5;
  long *plVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint uVar8;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar9;
  
  puVar2 = (undefined1 *)register0x00000008;
  plVar4 = param_4;
  do {
    plVar6 = plVar4;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    unaff_x19 = param_1;
    func_0x000107741cf4();
    uVar3 = (param_4[1] & 0xfffffffffffffffeU) == 2;
    if ((bool)uVar3) {
      plVar4 = (long *)*param_4;
      uVar3 = (int)plVar4[0xd] == 8;
      unaff_x19 = plVar4;
      unaff_x21 = param_4;
      if (((!(bool)uVar3) || (uVar3 = (int)plVar4[0x1b] == 2, !(bool)uVar3)) ||
         ((2 < (ulong)param_4[1] && (uVar3 = (int)plVar4[0x29] == 2, !(bool)uVar3))))
      goto code_r0x00010773c4d0;
      func_0x000107325cc8();
      pdVar5 = (double *)(*param_4 + 0x70);
      func_0x00010757fc08();
      uVar8 = (uint)*pdVar5;
      if ((ulong)param_4[1] < 3) {
        func_0x000107743110(*plVar4);
        unaff_x21 = (long *)0x0;
        if (extraout_x9 != 0) {
          unaff_x21 = (long *)(extraout_x8 / extraout_x9);
        }
      }
      else {
        pdVar5 = (double *)(*param_4 + 0xe0);
        func_0x00010757fc08();
        uVar1 = (uint)((((long *)*plVar4)[1] - *(long *)*plVar4) / 0x70);
        if ((uint)(int)*pdVar5 <= uVar1) {
          uVar1 = (int)*pdVar5;
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
        func_0x0001072786d8(puVar2 + -0xb8,*(long *)*plVar4 + (ulong)uVar8 * 0x70 + 8);
        func_0x000107277668(puVar2 + -0xd8,puVar2 + -0xc0);
        func_0x00010726af18(puVar2 + -0xb8);
      }
      param_4 = (long *)(puVar2 + -0xd8);
      func_0x000107277aa4(puVar2 + -0xc0);
      lVar9 = *(long *)(puVar2 + -0xc0);
      param_1[3] = *(long *)(puVar2 + -0xb8);
      param_1[2] = lVar9;
      *(undefined8 *)(puVar2 + -0xc0) = 0;
      *(undefined8 *)(puVar2 + -0xb8) = 0;
      func_0x0001077424ac(8);
      func_0x00010726b188(puVar2 + -0xc0);
      unaff_x19 = (long *)(puVar2 + -0xd8);
      func_0x000107277d70();
      unaff_x20 = plVar4;
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
    param_1 = (long *)(puVar2 + -0xd8);
    func_0x000107277d70();
    func_0x000107742904();
    puVar7 = &UNK_10773c5b4;
    func_0x0001077438e0();
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x98) = puVar7;
    unaff_x29 = puVar2 + -0xa0;
    plVar4 = plVar6;
    func_0x000107741970();
    func_0x00010774222c();
    func_0x000107742764(0);
    func_0x0001077430c8();
    func_0x000107741c60();
    while (unaff_x24 != 0) {
      param_1 = (long *)*unaff_x23;
      func_0x0001077420ac(puVar2 + -0x500);
      func_0x000107743260();
      if ((bool)uVar3) {
        func_0x0001077430d0();
        param_4 = param_1;
        func_0x0001077430c0();
      }
      else {
        func_0x000107742cac();
        param_4 = param_1;
        func_0x0001077428fc();
      }
      func_0x000107742ca4();
      func_0x000107742668();
      if (!(bool)uVar3) {
        func_0x000107742c5c();
        func_0x000107741c94(*(undefined8 *)(puVar2 + -0xe8));
        if ((bool)uVar3) {
          return param_1;
        }
        ___stack_chk_fail();
        plVar4 = param_1;
        func_0x000107742c5c();
        func_0x000107742904();
        *(long **)(puVar2 + -0x530) = unaff_x20;
        *(long **)(puVar2 + -0x528) = param_1;
        *(undefined1 **)(puVar2 + -0x520) = unaff_x29;
        *(undefined **)(puVar2 + -0x518) = &DAT_10773c6ac;
        *plVar4 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar4 + 9);
        func_0x00010772d754(plVar4 + 5);
        func_0x0001072c9884(plVar4 + 2);
        return plVar4;
      }
    }
    func_0x000107743254();
    func_0x000107743430();
    unaff_x30 = &UNK_10773c63c;
    puVar2 = puVar2 + -0x510;
    unaff_x22 = plVar6;
  } while( true );
}



/* Entry: 10773c960; end: 10773ca5b;  */

undefined8 * FUN_10773c960(undefined8 *param_1)

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
      func_0x00010773c7b0();
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



/* Entry: 10773ce24; end: 10773ce37;  */

void FUN_10773ce24(void)

{
  FUN_10772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773d224; end: 10773d22f;  */

/* WARNING: Possible PIC construction at 0x00010773d324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773d328) */
/* WARNING: Removing unreachable block (ram,0x00010773d340) */
/* WARNING: Removing unreachable block (ram,0x00010773d334) */
/* WARNING: Removing unreachable block (ram,0x00010773d34c) */

long * FUN_10773d224(undefined1 *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                    long *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  do {
    plVar3 = param_5;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107741be8(param_1,param_2,param_4);
    FUN_107723bd4(puVar1 + -0xa0);
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
    if ((bool)uVar2) {
      return plVar3;
    }
    ___stack_chk_fail();
    func_0x000107742d44();
    func_0x000107296ad0();
    func_0x000107742904();
    puVar5 = &UNK_10773d2a0;
    func_0x000107743290();
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = puVar5;
    unaff_x29 = puVar1 + -0x50;
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
        *(undefined8 *)(puVar1 + -600) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x250) = unaff_x29;
        *(undefined **)(puVar1 + -0x248) = &DAT_10773d394;
        *plVar4 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar4 + 9);
        func_0x00010772d754(plVar4 + 5);
        func_0x0001072c9884(plVar4 + 2);
        return plVar4;
      }
    }
    func_0x000107742538();
    param_1 = puVar1 + -0x128;
    param_4 = puVar1 + -0x160;
    unaff_x30 = &UNK_10773d328;
    puVar1 = puVar1 + -0x240;
    param_2 = plVar3;
    param_5 = (long *)(unaff_x21 + 0x70);
    unaff_x20 = plVar3;
  } while( true );
}



/* Entry: 10773d51c; end: 10773d5eb;  */

undefined8 * FUN_10773d51c(long *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 auStack_b8 [17];
  
  func_0x000107741b04();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
  func_0x000107742380(auStack_b8);
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
    puVar2 = auStack_b8;
    func_0x00010773d4b8();
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
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10773d848; end: 10773d85b;  */

void FUN_10773d848(void)

{
  FUN_10772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773db44; end: 10773db9b;  */

void FUN_10773db44(void)

{
  undefined1 in_ZR;
  
  func_0x000107742718();
  func_0x000107743c28();
  if ((bool)in_ZR) {
    func_0x000107742dd4();
    func_0x000107575b20();
  }
  func_0x000107742678();
  func_0x00010774323c();
  return;
}



/* Entry: 10773de94; end: 10773dea7;  */

void FUN_10773de94(void)

{
  FUN_10772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773e18c; end: 10773e1b3;  */

void FUN_10773e18c(void)

{
  undefined1 in_NG;
  
  func_0x000107742878();
  func_0x0001077430d8();
  func_0x0001077424f8(in_NG);
  return;
}



/* Entry: 10773e4f8; end: 10773e4fb;  */

undefined8 * FUN_10773e4f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773e7d4; end: 10773e7df;  */

/* WARNING: Possible PIC construction at 0x00010773e8a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773e8a4) */
/* WARNING: Removing unreachable block (ram,0x00010773e8bc) */
/* WARNING: Removing unreachable block (ram,0x00010773e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010773e8c8) */

undefined8 *
FUN_10773e7d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
      func_0x000104c2fc44();
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
    *(undefined **)(puVar1 + -0x78) = &UNK_10773e83c;
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
    unaff_x30 = &UNK_10773e8a4;
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
  *(undefined **)(puVar1 + -0x1d8) = &DAT_10773e90c;
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773eaf0; end: 10773eaf3;  */

undefined8 * FUN_10773eaf0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773ed88; end: 10773ee8b;  */

void FUN_10773ed88(void)

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
      goto LAB_10773ee3c;
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
LAB_10773ee3c:
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
  func_0x0001077424f8(cVar2 == cVar1);
  return;
}



/* Entry: 10773f0b4; end: 10773f183;  */

undefined8 * FUN_10773f0b4(undefined8 *param_1,int param_2)

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
    func_0x00010773f058();
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



/* Entry: 10773f380; end: 10773f477;  */

void FUN_10773f380(undefined8 *param_1)

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
      goto LAB_10773f434;
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
LAB_10773f434:
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
      func_0x000104c2fc88();
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



/* Entry: 10773f72c; end: 10773f7e3;  */

undefined8 * FUN_10773f72c(undefined8 *param_1,int param_2)

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
  uVar1 = param_2 != 0;
  uVar2 = param_2 == 1;
  if ((bool)uVar2) {
    func_0x0001077429b4();
    func_0x0001077436ac();
    func_0x0001077430d8();
    func_0x0001077428e4(!(bool)uVar1 || (bool)uVar2);
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
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773fa00; end: 10773fa13;  */

void FUN_10773fa00(void)

{
  FUN_10772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773fce8; end: 10773fcf3;  */

void FUN_10773fce8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  long unaff_x19;
  int iStack_b8;
  byte bStack_78;
  undefined1 auStack_70 [64];
  char cStack_30;
  
  func_0x000107741be8(param_1,param_2);
  func_0x000107751674(auStack_70,param_2);
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



/* Entry: 10773ff94; end: 1077401e3;  */

undefined8 * FUN_10773ff94(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  ulong *unaff_x22;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  int in_stack_00000070;
  int in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 in_stack_00000188;
  
  func_0x00010774309c();
  func_0x000107743520();
  func_0x00010774205c();
  in_stack_000000c0 = (undefined8 *)0x8;
  in_stack_000000b8 = (undefined8 *)0x0;
  uVar6 = *param_3;
  puVar10 = (undefined8 *)(uVar6 >> 1);
  in_stack_000000b0 = (undefined8 *)&stack0x000000c8;
  if (0x11 < uVar6) {
    puVar4 = puVar10;
    func_0x000107740378();
    puVar2 = in_stack_000000b0;
    lVar7 = 0;
    in_stack_00000010 = &stack0x000000b0;
    lVar8 = (long)in_stack_000000b8 * 0x18;
    in_stack_00000018 = puVar10;
    in_stack_00000040 = in_stack_00000010;
    while (lVar8 != lVar7) {
      func_0x00010774355c();
      lVar7 = extraout_x8;
      lVar8 = extraout_x9;
    }
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    func_0x0001077403d0(&stack0x00000030);
    in_stack_00000008 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x0001077403a4(puVar2,in_stack_000000b8);
      if ((undefined8 *)&stack0x000000c8 != in_stack_000000b0) {
        __ZdlPv();
      }
    }
    in_stack_000000b0 = puVar4;
    in_stack_000000c0 = puVar10;
    func_0x00010774040c(&stack0x00000008);
    uVar6 = *unaff_x22;
    puVar10 = (undefined8 *)(uVar6 >> 1);
  }
  puVar9 = unaff_x22 + 1;
  if ((uVar6 & 1) != 0) {
    puVar9 = (ulong *)unaff_x22[1];
  }
  lVar7 = (long)puVar10 << 4;
  do {
    if (lVar7 == 0) {
      in_stack_00000008 = in_stack_000000b0;
      in_stack_00000010 = in_stack_000000b8;
      func_0x00010773feb4(&stack0x00000030,param_1,&stack0x00000008);
      uVar3 = in_stack_00000070 == 1;
      if ((bool)uVar3) {
        func_0x00010772fe40(&stack0x00000030);
        func_0x000107741b4c();
      }
      else {
        func_0x00010772fe28(&stack0x00000030);
        func_0x0001077428fc();
      }
      func_0x00010774294c(&stack0x00000030);
      goto LAB_107740180;
    }
    func_0x000107742380(&stack0x00000030,*puVar9);
    iVar1 = in_stack_000000a8;
    if (in_stack_000000a8 == 1) {
      func_0x0001073405dc(&stack0x00000030);
      func_0x000107776f6c(&stack0x00000008);
      plVar5 = in_stack_000000b0 + (long)in_stack_000000b8 * 3;
      if (in_stack_000000b8 == in_stack_000000c0) {
        func_0x000107740438(&stack0x00000028,&stack0x000000b0,plVar5,&stack0x00000008);
      }
      else {
        plVar5[2] = (long)in_stack_00000018;
        plVar5[1] = (long)in_stack_00000010;
        *plVar5 = (long)in_stack_00000008;
        in_stack_00000010 = (undefined8 *)0x0;
        in_stack_00000018 = (undefined8 *)0x0;
        in_stack_00000008 = (undefined8 *)0x0;
        in_stack_000000b8 = (undefined8 *)((long)in_stack_000000b8 + 1);
      }
      func_0x0001001148fc(&stack0x00000008);
    }
    else {
      func_0x00010756dd74(&stack0x00000030);
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    puVar9 = puVar9 + 2;
    lVar7 = lVar7 + -0x10;
  } while (iVar1 == 1);
  uVar3 = 0;
LAB_107740180:
  puVar10 = &stack0x000000b0;
  func_0x0001077405a0(puVar10);
  func_0x000107741a80();
  if ((bool)uVar3) {
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x000107742c90();
  func_0x0001001148fc();
  func_0x00010774299c();
  puVar10 = &stack0x000000b0;
  func_0x0001077405a0();
  func_0x000107742904();
  *puVar10 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar10 + 9);
  func_0x00010772d754(puVar10 + 5);
  func_0x0001072c9884(puVar10 + 2);
  return puVar10;
}



/* Entry: 1077405e0; end: 1077405eb;  */

/* WARNING: Possible PIC construction at 0x000107740628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774062c) */
/* WARNING: Removing unreachable block (ram,0x000107740650) */
/* WARNING: Removing unreachable block (ram,0x000107740664) */
/* WARNING: Removing unreachable block (ram,0x000107740648) */
/* WARNING: Removing unreachable block (ram,0x000107742588) */

ulong FUN_1077405e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_a8 [120];
  
  func_0x000107741ca8(param_1,param_2);
  func_0x000107723ac8(auStack_a8);
  uVar1 = *param_4;
  uVar2 = uVar1 + param_4[1] * 0x70;
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



/* Entry: 1077408c0; end: 107740977;  */

undefined8 * FUN_1077408c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  undefined8 auStack_4d0 [8];
  int iStack_490;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [8];
  undefined1 *puStack_70;
  undefined *puStack_68;
  char cStack_40;
  
  puVar3 = auStack_b0;
  puVar4 = param_1;
  func_0x000107741ca8();
  uVar2 = param_3[1] == 1;
  if ((ulong)param_3[1] < 2) {
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x000107742a28();
  }
  else {
    func_0x0001077429f8();
    func_0x000107573ddc(*param_3);
    FUN_107723bd4(auStack_b0);
    uVar2 = cStack_40 == '\x01';
    puVar4 = puVar3;
    if ((bool)uVar2) {
      puVar4 = (undefined8 *)(*unaff_x20 + 0x70);
      func_0x000107740668(puVar4,*unaff_x20 + unaff_x20[1] * 0x70,auStack_b0);
      func_0x000107743830(*unaff_x20);
    }
    func_0x0001077425dc();
    func_0x0001077433a8();
  }
  func_0x0001077419ec();
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107742d44();
  func_0x000107296ad0();
  func_0x000107742904();
  puVar5 = &UNK_107740978;
  func_0x0001077438e0();
  puStack_70 = &stack0xfffffffffffffff0;
  puStack_68 = puVar5;
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
      FUN_1077408c0();
      uVar2 = iStack_490 == 1;
      if ((bool)uVar2) {
        puVar4 = auStack_4d0;
        func_0x00010772fe40();
        func_0x000107741b4c();
      }
      else {
        puVar4 = auStack_4d0;
        func_0x00010772fe28();
        func_0x0001077428fc();
      }
      func_0x00010774294c(auStack_4d0);
      goto code_r0x000107740a34;
    }
    puVar4 = (undefined8 *)*unaff_x23;
    func_0x000107742380(auStack_4d0);
    func_0x000107743260();
    if ((bool)uVar2) {
      func_0x0001077430d0();
      func_0x0001077430c0();
      uVar1 = uVar2;
    }
    else {
      func_0x000107742cac();
      func_0x0001077428fc();
      uVar1 = uVar2;
    }
    func_0x000107742ca4();
    func_0x000107742668();
    uVar2 = 1;
  } while ((bool)uVar1);
  uVar2 = 0;
code_r0x000107740a34:
  func_0x000107742c5c();
  func_0x000107741c94(uStack_b8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107742784();
    func_0x00010772fe9c();
    func_0x000107742c5c();
    func_0x000107742904();
    *puVar4 = &PTR_DAT_1109d1d80;
    func_0x000104c2f714(puVar4 + 9);
    func_0x00010772d754(puVar4 + 5);
    func_0x0001072c9884(puVar4 + 2);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 107740d90; end: 107740d93;  */

undefined8 * FUN_107740d90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107740ff0; end: 1077410a7;  */

void FUN_107740ff0(long *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  lVar3 = *param_1;
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
    func_0x000107742aec();
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
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010774206c();
  func_0x000107742088();
  func_0x000107742904();
  uVar4 = 0;
  switch(*(int *)(lVar3 + 0x68)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
    goto code_r0x00010774112c;
  case 2:
    bVar2 = *(double *)(lVar3 + 8) == 0.0;
    break;
  case 3:
  case 7:
    lVar3 = lVar3 + 8;
    func_0x000104c2d614(0,lVar3);
    uVar4 = (uint)lVar3 ^ 1;
    goto code_r0x00010774112c;
  default:
    plVar5 = *(long **)(lVar3 + 8);
    if (*(int *)(lVar3 + 0x68) == 8) {
      bVar2 = *plVar5 == plVar5[1];
    }
    else {
      bVar2 = plVar5[3] == 0;
    }
  }
  uVar4 = (uint)!bVar2;
code_r0x00010774112c:
  func_0x0001077425dc(uVar4);
  return;
}



/* Entry: 1077412cc; end: 1077413db;  */

void FUN_1077412cc(long param_1,double *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((param_3 & 0xfffffffffffffffe) == 2) {
    dVar5 = (double)(long)*param_2;
    dVar4 = (double)(long)param_2[1];
    if (param_3 == 3) {
      uVar1 = (uint)param_2[2];
    }
    else {
      uVar1 = 1;
    }
    if ((dVar5 <= dVar4 && uVar1 != 0) && (dVar4 < dVar5 || -1 < (int)uVar1)) {
      dVar3 = (dVar4 - dVar5) / (double)uVar1;
      func_0x000107743000(dVar3);
      func_0x0001073b504c(&uStack_60,(long)dVar3);
      for (iVar2 = (int)dVar5; (double)iVar2 < dVar4; iVar2 = iVar2 + uVar1) {
        uStack_70 = CONCAT44(uStack_70._4_4_,(float)iVar2);
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



/* Entry: 1077416bc; end: 1077416c7;  */

void FUN_1077416bc(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107743c48; end: 107743caf;  */

undefined4
FUN_107743c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x000107743cb0();
  lVar1 = 0x113822c90;
  func_0x00010774617c(0x113822c90,&uStack_30);
  func_0x000107743cb0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = lVar1 + 0x20;
    func_0x000107746240(lVar1,&uStack_40);
    uVar2 = 1;
    if (lVar1 == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* Entry: 10774525c; end: 10774529b;  */

long * FUN_10774525c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001072c9884(lVar1 + 0x20);
    }
    func_0x000107746430();
  }
  return param_1;
}



/* Entry: 107745694; end: 1077456b7;  */

uint FUN_107745694(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010006725c(uVar1,param_2[1],*param_3,param_3[1]);
  return (uint)uVar1 >> 7 & 1;
}



/* Entry: 107745f8c; end: 10774605f;  */

void FUN_107745f8c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107746468();
  lVar1 = param_2 - param_1 >> 4;
  while (lVar1 + -1 != 0 && 0 < lVar1) {
    func_0x000107745fd4();
    lVar1 = lVar1 + -1;
  }
  return;
}



/* Entry: 107746b38; end: 107746c2f;  */

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
/* WARNING: Removing unreachable block (ram,0x000107746c18) */
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

void FUN_107746b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar3;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [56];
  undefined1 auStack_3c0 [56];
  undefined1 auStack_388 [336];
  undefined8 uStack_238;
  undefined1 auStack_1f8 [112];
  undefined1 auStack_188 [168];
  undefined1 auStack_e0 [168];
  undefined8 uStack_38;
  
  func_0x000107747a88();
  uStack_38 = extraout_x8;
  func_0x000107747c7c();
  func_0x000107747d60();
  func_0x0001072deec0();
  func_0x000107747cb0();
  func_0x0001072deec0(auStack_e0,auStack_1f8,param_4 + 0x70);
  func_0x000107747d10(param_1,auStack_188);
  do {
    puVar1 = auStack_e0;
    func_0x00010729651c();
    func_0x000107747d6c();
  } while (!(bool)in_ZR);
  func_0x000107747c60();
  func_0x000107747c58();
  func_0x000107747a3c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = auStack_e0;
    lVar3 = -0x150;
    do {
      func_0x00010729651c(puVar2);
      puVar2 = puVar2 + -0xa8;
      lVar3 = lVar3 + 0xa8;
    } while (lVar3 != 0);
    func_0x000107747c60();
    func_0x000107747c58();
    __Unwind_Resume(puVar1);
    func_0x000107747a88();
    uStack_408 = param_2;
    uStack_400 = param_3;
    uStack_238 = extraout_x8_01;
    func_0x000100060964(auStack_3c0,&UNK_10f4250a6);
    func_0x0001072ddad8(auStack_388,auStack_3c0,&uStack_408);
    func_0x000100060964(auStack_3f8,&UNK_10f4250b0);
    func_0x000107747d78();
    func_0x000107747d10(extraout_x8_00,auStack_388);
    do {
      func_0x000107747d34();
      func_0x000107747d6c();
    } while (!(bool)in_ZR);
    func_0x000104c2f714(auStack_3f8);
    func_0x000104c2f714();
    func_0x000107747a3c(uStack_238);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      do {
        func_0x00010729651c();
        func_0x000107747dac();
      } while( true );
    }
  }
  return;
}



/* Entry: 107747a10; end: 107747dff;  */

void FUN_107747a10(void)

{
  func_0x000107278594(&stack0x00000078,&stack0xffffffffffffffe8,&stack0x000000e8);
  return;
}



/* Entry: 107748de8; end: 10774999b;  */

void FUN_107748de8(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  uint *puVar7;
  uint *puVar8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *plVar9;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4b8 [64];
  undefined8 uStack_478;
  long lStack_470;
  long *plStack_468;
  undefined1 *puStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [8];
  undefined4 uStack_3d0;
  undefined1 uStack_3c8;
  undefined8 auStack_3c0 [4];
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
  char cStack_340;
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [8];
  undefined4 uStack_310;
  undefined1 uStack_308;
  uint uStack_300;
  uint uStack_2fc;
  undefined8 uStack_2f8;
  byte bStack_2f0;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [8];
  undefined4 uStack_2c0;
  undefined1 uStack_2b8;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [8];
  undefined4 uStack_278;
  undefined1 uStack_270;
  undefined1 auStack_268 [24];
  uint uStack_250;
  uint uStack_24c;
  undefined8 uStack_248;
  byte bStack_240;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [8];
  int iStack_218;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [8];
  undefined4 uStack_1f0;
  undefined1 uStack_1e8;
  long alStack_1e0 [2];
  byte bStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint5 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  char cStack_f0;
  undefined1 auStack_e8 [16];
  char cStack_d8;
  undefined1 auStack_d0 [16];
  char cStack_c0;
  long alStack_b8 [2];
  undefined1 auStack_a8 [16];
  char cStack_98;
  undefined1 auStack_70 [16];
  char cStack_60;
  undefined8 uStack_58;
  
  puVar8 = (uint *)&uStack_450;
  plVar3 = param_3;
  func_0x00010774a240();
  plVar9 = plVar3 + 1;
  plVar4 = plVar9;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar3 + 0x20))();
  uVar2 = plVar4 == (long *)0x3;
  if (!(bool)uVar2) {
    func_0x000107878fec(alStack_1e0);
    func_0x0001004c3cd0(auStack_a8,&UNK_10f4250e7,alStack_1e0);
    func_0x00010048a6c8(auStack_1c8,auStack_a8,&UNK_10f417b93);
    func_0x00010774a274();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    plVar3 = alStack_1e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010774a2ac();
    goto LAB_107749688;
  }
  (**(code **)(*param_3 + 0x28))(auStack_a8,plVar9,1);
  uStack_1f0 = 1;
  uStack_1e8 = 1;
  uStack_250 = uStack_250 & 0xffffff00;
  uStack_24c = uStack_24c & 0xffffff00;
  func_0x00010774a1f4(alStack_1e0);
  func_0x0001072c9854(auStack_1f8);
  func_0x0001072f5f6c(auStack_a8);
  if ((bStack_1d0 & 1) == 0) {
    func_0x00010002b838(auStack_210,&UNK_10f42511d);
    func_0x00010774a274();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_210);
    func_0x00010774a2ac();
  }
  else {
    func_0x0001072c9ff4(auStack_220,alStack_1e0[0] + 0x10);
    uVar2 = iStack_218 == 1;
    if ((bool)uVar2) {
      (**(code **)(*param_3 + 0x28))(alStack_b8,plVar9,2);
      uVar5 = 0;
      (**(code **)(alStack_b8[0] + 0x30))();
      if ((uVar5 & 1) == 0) {
        func_0x00010002b838(auStack_268,&UNK_10f42517c);
        func_0x00010774a274();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
        func_0x00010774a2ac();
      }
      else {
        func_0x00010774a354();
        func_0x00010774a2d8(auStack_a8);
        uStack_250 = uStack_250 & 0xffffff00;
        bStack_240 = 0;
        uVar2 = cStack_98 == '\x01';
        if ((bool)uVar2) {
          uStack_278 = 2;
          uStack_270 = 1;
          uStack_2b0 = uStack_2b0 & 0xffffff00;
          uStack_2ac = uStack_2ac & 0xffffff00;
          func_0x00010774a1f4(auStack_70);
          func_0x0001075530c4(&uStack_250,auStack_70);
          func_0x0001072c95d0(auStack_70);
          func_0x0001072c9854(auStack_280);
          if ((bStack_240 & 1) != 0) goto LAB_107748f54;
          func_0x00010002b838(auStack_298,&UNK_10f4251b1);
          func_0x00010774a274();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_298);
          func_0x00010774a2ac();
        }
        else {
LAB_107748f54:
          func_0x00010774a354();
          func_0x00010774a2d8(auStack_70);
          uStack_2b0 = uStack_2b0 & 0xffffff00;
          bStack_2a0 = 0;
          uVar2 = cStack_60 == '\x01';
          if ((bool)uVar2) {
            uStack_2c0 = 2;
            uStack_2b8 = 1;
            uStack_300 = uStack_300 & 0xffffff00;
            uStack_2fc = uStack_2fc & 0xffffff00;
            func_0x00010774a1f4(auStack_d0);
            func_0x0001075530c4(&uStack_2b0,auStack_d0);
            func_0x0001072c95d0(auStack_d0);
            func_0x0001072c9854(auStack_2c8);
            if ((bStack_2a0 & 1) != 0) goto LAB_107748fcc;
            func_0x00010002b838(auStack_2e0,&UNK_10f4251da);
            func_0x00010774a274();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e0);
            func_0x00010774a2ac();
          }
          else {
LAB_107748fcc:
            func_0x00010774a354();
            func_0x00010774a2d8(auStack_d0);
            uStack_300 = uStack_300 & 0xffffff00;
            bStack_2f0 = 0;
            uVar2 = cStack_c0 == '\x01';
            if ((bool)uVar2) {
              uStack_310 = 1;
              uStack_308 = 1;
              uStack_350 = uStack_350 & 0xffffff00;
              uStack_34c = uStack_34c & 0xffffff00;
              func_0x00010774a1f4(auStack_e8);
              func_0x0001075530c4(&uStack_300,auStack_e8);
              func_0x0001072c95d0(auStack_e8);
              func_0x0001072c9854(auStack_318);
              if ((bStack_2f0 & 1) != 0) goto LAB_107749040;
              func_0x00010002b838(auStack_330,&UNK_10f42520f);
              func_0x00010774a274();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_330);
              func_0x00010774a2ac();
            }
            else {
LAB_107749040:
              func_0x00010774a354();
              func_0x00010774a2d8(auStack_e8);
              uStack_350 = uStack_350 & 0xffffff00;
              cStack_340 = '\0';
              uVar2 = cStack_d8 == '\x01';
              if ((bool)uVar2) {
                uStack_360 = 2;
                uStack_358 = 1;
                uStack_3a0 = uStack_3a0 & 0xffffff00;
                uStack_39c = uStack_39c & 0xffffff00;
                func_0x00010774a1f4(auStack_100);
                func_0x0001075530c4(&uStack_350,auStack_100);
                func_0x0001072c95d0(auStack_100);
                func_0x0001072c9854(auStack_368);
                if ((bStack_2f0 & 1) != 0) goto LAB_1077490b8;
                func_0x00010002b838(auStack_380,&UNK_10f425243);
                func_0x00010774a274();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
                func_0x00010774a2ac();
              }
              else {
LAB_1077490b8:
                func_0x00010774a354();
                func_0x00010774a2d8(auStack_100);
                uStack_3a0 = uStack_3a0 & 0xffffff00;
                bStack_390 = 0;
                uVar2 = cStack_f0 == '\x01';
                if ((bool)uVar2) {
                  uStack_3d0 = 2;
                  uStack_3c8 = 1;
                  uVar5 = (ulong)_uStack_110 >> 0x28;
                  uVar1 = (uint)_uStack_110;
                  uStack_110 = (uint5)(uVar1 & 0xffffff00);
                  _uStack_110 = CONCAT35((int3)uVar5,uStack_110);
                  func_0x00010774a1f4(auStack_3c0);
                  func_0x0001075530c4(&uStack_3a0,auStack_3c0);
                  func_0x0001072c95d0(auStack_3c0);
                  func_0x0001072c9854(auStack_3d8);
                  if ((bStack_390 & 1) != 0) goto LAB_107749130;
                  func_0x00010002b838(auStack_3f0,&UNK_10f425278);
                  func_0x00010774a274();
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f0);
                  func_0x00010774a2ac();
                }
                else {
LAB_107749130:
                  if (*(char *)(param_4 + 0x51) == '\x01') {
                    if (bStack_240 == 1) {
                      param_2 = CONCAT44(uStack_24c,uStack_250);
                      uStack_408 = uStack_248;
                      puVar7 = &uStack_250;
                      uStack_410 = param_2;
                    }
                    else {
                      puVar7 = (uint *)&uStack_410;
                    }
                    puVar7[0] = 0;
                    puVar7[1] = 0;
                    puVar7[2] = 0;
                    puVar7[3] = 0;
                    if (bStack_2a0 == 1) {
                      param_2 = CONCAT44(uStack_2ac,uStack_2b0);
                      uStack_418 = uStack_2a8;
                      puVar7 = &uStack_2b0;
                      uStack_420 = param_2;
                    }
                    else {
                      puVar7 = (uint *)&uStack_420;
                    }
                    puVar7[0] = 0;
                    puVar7[1] = 0;
                    puVar7[2] = 0;
                    puVar7[3] = 0;
                    if (bStack_2f0 == 1) {
                      param_2 = CONCAT44(uStack_2fc,uStack_300);
                      uStack_428 = uStack_2f8;
                      puVar7 = &uStack_300;
                      uStack_430 = param_2;
                    }
                    else {
                      puVar7 = (uint *)&uStack_430;
                    }
                    puVar7[0] = 0;
                    puVar7[1] = 0;
                    puVar7[2] = 0;
                    puVar7[3] = 0;
                    uVar2 = cStack_340 == '\x01';
                    if ((bool)uVar2) {
                      param_2 = CONCAT44(uStack_34c,uStack_350);
                      uStack_438 = uStack_348;
                      puVar7 = &uStack_350;
                      uStack_440 = param_2;
                    }
                    else {
                      puVar7 = (uint *)&uStack_440;
                    }
                    puVar7[0] = 0;
                    puVar7[1] = 0;
                    puVar7[2] = 0;
                    puVar7[3] = 0;
                    if (cStack_f0 != '\0') {
                      param_2 = CONCAT44(uStack_39c,uStack_3a0);
                      uStack_448 = uStack_398;
                      puVar8 = &uStack_3a0;
                      uStack_450 = param_2;
                    }
                    puVar8[0] = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    __Znwm(0xd8);
                    func_0x00010774a360();
                    uStack_108 = uStack_408;
                    _uStack_110 = uStack_410;
                    uStack_118 = uStack_418;
                    uStack_120 = uStack_420;
                    uStack_128 = uStack_428;
                    uStack_130 = uStack_430;
                    uStack_138 = uStack_438;
                    uStack_140 = uStack_440;
                    uStack_148 = uStack_448;
                    uStack_150 = uStack_450;
                    alStack_1e0[0] = 0;
                    alStack_1e0[1] = 0;
                    uStack_410 = 0;
                    uStack_408 = 0;
                    uStack_420 = 0;
                    uStack_418 = 0;
                    uStack_430 = 0;
                    uStack_428 = 0;
                    uStack_440 = 0;
                    uStack_438 = 0;
                    uStack_450 = 0;
                    uStack_448 = 0;
                    uStack_158 = 0;
                    uStack_160 = 0;
                    uStack_168 = 0;
                    uStack_170 = 0;
                    uStack_178 = 0;
                    uStack_180 = 0;
                    uStack_188 = 0;
                    uStack_190 = 0;
                    uStack_198 = 0;
                    uStack_1a0 = 0;
                    uStack_1a8 = 0;
                    uStack_1b0 = 0;
                    auStack_3c0[0] = param_2;
                    func_0x00010774a250();
                    func_0x00010774a328();
                    func_0x00010774a320();
                    func_0x00010774a318();
                    func_0x00010774a310();
                    func_0x00010774a308();
                    func_0x00010774a330();
                    func_0x0001002a8234(param_4 + 0x40,param_5 + 0x40);
                    func_0x00010774a300();
                    func_0x00010774a2f8();
                    func_0x00010774a2f0();
                    func_0x00010774a2e8();
                    func_0x0001072c9b9c(&uStack_170);
                    func_0x0001072c9b9c(&uStack_160);
                    *param_1 = &PTR_DAT_1109d4148;
                    param_1[1] = param_4;
                    uStack_400 = 0;
                    uStack_3f8 = 0;
                    *(undefined1 *)(param_1 + 2) = 1;
                    func_0x00010774a1c8(&uStack_400);
                    func_0x0001072c9b9c(&uStack_450);
                    func_0x0001072c9b9c(&uStack_440);
                    func_0x0001072c9b9c(&uStack_430);
                    func_0x0001072c9b9c(&uStack_420);
                    puVar6 = &uStack_410;
                  }
                  else {
                    if (bStack_240 == 1) {
                      param_2 = CONCAT44(uStack_24c,uStack_250);
                      uStack_168 = uStack_248;
                      puVar8 = &uStack_250;
                      uStack_170 = param_2;
                    }
                    else {
                      puVar8 = (uint *)&uStack_170;
                    }
                    puVar8[0] = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    if (bStack_2a0 == 1) {
                      param_2 = CONCAT44(uStack_2ac,uStack_2b0);
                      uStack_178 = uStack_2a8;
                      puVar8 = &uStack_2b0;
                      uStack_180 = param_2;
                    }
                    else {
                      puVar8 = (uint *)&uStack_180;
                    }
                    puVar8[0] = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    if (bStack_2f0 == 1) {
                      param_2 = CONCAT44(uStack_2fc,uStack_300);
                      uStack_188 = uStack_2f8;
                      puVar8 = &uStack_300;
                      uStack_190 = param_2;
                    }
                    else {
                      puVar8 = (uint *)&uStack_190;
                    }
                    puVar8[0] = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    uVar2 = cStack_340 == '\x01';
                    if ((bool)uVar2) {
                      param_2 = CONCAT44(uStack_34c,uStack_350);
                      uStack_198 = uStack_348;
                      puVar8 = &uStack_350;
                      uStack_1a0 = param_2;
                    }
                    else {
                      puVar8 = (uint *)&uStack_1a0;
                    }
                    puVar8[0] = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    if (cStack_f0 == '\0') {
                      puVar8 = (uint *)&uStack_1b0;
                    }
                    else {
                      param_2 = CONCAT44(uStack_39c,uStack_3a0);
                      uStack_1a8 = uStack_398;
                      puVar8 = &uStack_3a0;
                      uStack_1b0 = param_2;
                    }
                    puVar8[0] = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    __Znwm(0xd8);
                    func_0x00010774a360();
                    uStack_118 = uStack_178;
                    uStack_120 = uStack_180;
                    uStack_138 = uStack_198;
                    uStack_140 = uStack_1a0;
                    alStack_1e0[0] = 0;
                    alStack_1e0[1] = 0;
                    uStack_108 = uStack_168;
                    _uStack_110 = uStack_170;
                    uStack_170 = 0;
                    uStack_168 = 0;
                    uStack_178 = 0;
                    uStack_180 = 0;
                    uStack_128 = uStack_188;
                    uStack_130 = uStack_190;
                    uStack_188 = 0;
                    uStack_190 = 0;
                    uStack_198 = 0;
                    uStack_1a0 = 0;
                    uStack_148 = uStack_1a8;
                    uStack_150 = uStack_1b0;
                    uStack_1a8 = 0;
                    uStack_1b0 = 0;
                    auStack_3c0[0] = param_2;
                    func_0x00010774a250();
                    func_0x00010774a328();
                    func_0x00010774a320();
                    func_0x00010774a318();
                    func_0x00010774a310();
                    func_0x00010774a308();
                    func_0x00010774a330();
                    *param_1 = &PTR_DAT_1109d4148;
                    param_1[1] = param_4;
                    uStack_158 = 0;
                    uStack_160 = 0;
                    *(undefined1 *)(param_1 + 2) = 1;
                    func_0x00010774a1c8(&uStack_160);
                    func_0x00010774a300();
                    func_0x00010774a2f8();
                    func_0x00010774a2f0();
                    func_0x00010774a2e8();
                    puVar6 = &uStack_170;
                  }
                  func_0x0001072c9b9c(puVar6);
                }
                func_0x0001072c95d0(&uStack_3a0);
                func_0x0001072f5f4c(auStack_100);
              }
              func_0x0001072c95d0(&uStack_350);
              func_0x0001072f5f4c(auStack_e8);
            }
            func_0x0001072c95d0(&uStack_300);
            func_0x0001072f5f4c(auStack_d0);
          }
          func_0x0001072c95d0(&uStack_2b0);
          func_0x0001072f5f4c(auStack_70);
        }
        func_0x0001072c95d0(&uStack_250);
        func_0x0001072f5f4c(auStack_a8);
      }
      func_0x0001072f5f6c(alStack_b8);
    }
    else {
      func_0x00010756a788(auStack_a8,auStack_220);
      func_0x00010724ef84(auStack_70,auStack_a8);
      func_0x0001004c3cd0(&uStack_250,&UNK_10f42513c,auStack_70);
      func_0x00010048a6c8(auStack_238,&uStack_250,&UNK_10f417b93);
      func_0x00010774a274();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_250);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
      func_0x000104c2f714(auStack_a8);
      func_0x00010774a2ac();
    }
    func_0x0001072c9884(auStack_220);
  }
  plVar3 = alStack_1e0;
  func_0x0001072c95d0();
LAB_107749688:
  func_0x00010774a220(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f0);
  func_0x0001072c95d0(&uStack_3a0);
  func_0x0001072f5f4c(auStack_100);
  func_0x0001072c95d0(&uStack_350);
  func_0x0001072f5f4c(auStack_e8);
  func_0x0001072c95d0(&uStack_300);
  func_0x0001072f5f4c(auStack_d0);
  func_0x0001072c95d0(&uStack_2b0);
  func_0x0001072f5f4c(auStack_70);
  func_0x0001072c95d0(&uStack_250);
  func_0x0001072f5f4c(auStack_a8);
  func_0x0001072f5f6c(alStack_b8);
  func_0x0001072c9884(auStack_220);
  plVar4 = alStack_1e0;
  func_0x0001072c95d0();
  func_0x00010774a28c();
  puStack_458 = &DAT_10774999c;
  lStack_470 = param_5;
  plStack_468 = plVar3;
  puStack_460 = &stack0xfffffffffffffff0;
  func_0x00010774a240();
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_478 = extraout_x8_01;
  func_0x000100060964(auStack_4b8,&UNK_10f4252a2);
  func_0x0001074d2254(&uStack_508,auStack_4b8);
  func_0x000104c2f714(auStack_4b8);
  func_0x00010774a338(plVar4[9]);
  func_0x00010774a2b8();
  func_0x0001072aad1c(&uStack_508,auStack_4b8);
  func_0x00010774a27c();
  puStack_528 = &UNK_10e52b660;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  if (plVar4[0xb] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar4[0xd] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar4[0xf] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar4[0x11] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  if (plVar4[0x13] != 0) {
    func_0x00010774a338();
    func_0x00010774a2b8();
    func_0x00010774a2d0();
    func_0x00010774a234();
    func_0x00010774a2e0();
    func_0x00010774a2a4();
    func_0x00010774a27c();
  }
  func_0x000104c33260(auStack_4b8,&puStack_528);
  func_0x0001075726d4(&uStack_508,auStack_4b8);
  func_0x000104c335c0(auStack_4b8);
  func_0x000107327958(&uStack_540,&uStack_508);
  *extraout_x8_00 = 0;
  *(undefined8 *)(extraout_x8_00 + 4) = uStack_538;
  *(undefined8 *)(extraout_x8_00 + 2) = uStack_540;
  uStack_540 = 0;
  uStack_538 = 0;
  func_0x000104c33108(&uStack_540);
  func_0x000104c33548(&puStack_528);
  func_0x000107269124(&uStack_508);
  func_0x00010774a220(uStack_478);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010774a2a4();
    func_0x00010774a27c();
    func_0x000104c33548(&puStack_528);
    do {
      func_0x000107269124(&uStack_508);
      func_0x00010774a28c();
      func_0x00010774a27c();
    } while( true );
  }
  return;
}



/* Entry: 10774a14c; end: 10774a193;  */

long * FUN_10774a14c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10774a4d4; end: 10774a4df;  */

void FUN_10774a4d4(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)*param_2;
  uVar4 = param_2[1];
  uVar5 = 0;
  plVar3 = plVar1;
  uVar6 = uVar4;
  do {
    if (uVar6 == 0) {
      if (uVar5 == 0) {
        *(undefined4 *)(param_1 + 2) = 1;
      }
      else {
        func_0x00010747e6e0(&uStack_50);
        plVar3 = (long *)(ulong)uVar5;
        func_0x00010747b534(&uStack_50,plVar3);
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          plVar2 = plVar3;
          if ((int)plVar1[2] == 2) {
            plVar2 = plVar1;
            func_0x000107440e54(plVar1);
            func_0x00010746bbb8();
            func_0x000107440e54(plVar1);
            func_0x00010774a480(&uStack_50,plVar2,plVar3,0);
          }
          plVar1 = plVar1 + 3;
          plVar3 = plVar2;
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
    if ((int)plVar3[2] == 2) {
      plVar2 = plVar3;
      func_0x000107440e54();
      uVar5 = uVar5 + *(int *)(*plVar2 + 0x18);
    }
    else if ((int)plVar3[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    plVar3 = plVar3 + 3;
    uVar6 = uVar6 - 1;
  } while( true );
}



/* Entry: 10774a748; end: 10774a777;  */

undefined8 * FUN_10774a748(undefined8 *param_1)

{
  func_0x000104c3365c(param_1 + 0x18);
  func_0x000107327aec(param_1 + 9);
  *param_1 = &PTR_FUN_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10774b30c; end: 10774b31b;  */

long FUN_10774b30c(long param_1)

{
  func_0x000100060934(param_1,&DAT_10f3e1a8f);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 10774b4ec; end: 10774b69f;  */

/* WARNING: Possible PIC construction at 0x00010774b940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774b644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774d454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774d474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774b604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774b54c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774b608) */
/* WARNING: Removing unreachable block (ram,0x00010774b60c) */
/* WARNING: Removing unreachable block (ram,0x00010774b610) */
/* WARNING: Removing unreachable block (ram,0x00010774b618) */
/* WARNING: Removing unreachable block (ram,0x00010774b61c) */
/* WARNING: Removing unreachable block (ram,0x00010774b620) */
/* WARNING: Removing unreachable block (ram,0x00010774d478) */
/* WARNING: Removing unreachable block (ram,0x00010774d458) */
/* WARNING: Removing unreachable block (ram,0x00010774b648) */
/* WARNING: Removing unreachable block (ram,0x00010774b944) */
/* WARNING: Removing unreachable block (ram,0x00010774b94c) */
/* WARNING: Removing unreachable block (ram,0x00010774b950) */
/* WARNING: Removing unreachable block (ram,0x00010774b954) */
/* WARNING: Removing unreachable block (ram,0x00010774b550) */
/* WARNING: Removing unreachable block (ram,0x00010774b554) */
/* WARNING: Removing unreachable block (ram,0x00010774b65c) */
/* WARNING: Removing unreachable block (ram,0x00010774b558) */
/* WARNING: Removing unreachable block (ram,0x00010774b560) */
/* WARNING: Removing unreachable block (ram,0x00010774b564) */
/* WARNING: Removing unreachable block (ram,0x00010774b568) */

double FUN_10774b4ec(double param_1,ulong *param_2,ulong *param_3,undefined1 *param_4)

{
  ulong uVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  double *pdVar16;
  double extraout_x8_08;
  double extraout_x8_09;
  long extraout_x8_10;
  undefined8 extraout_x9;
  ulong uVar17;
  undefined8 extraout_x9_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  double unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  long *plVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  double dVar20;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  double dVar23;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_238 [440];
  undefined1 auStack_80 [8];
  ulong auStack_78 [3];
  double dStack_60;
  ulong uStack_58;
  undefined8 uStack_48;
  
  puVar8 = auStack_80;
  puVar9 = auStack_80;
  puVar21 = &stack0xfffffffffffffff0;
  func_0x00010774e8bc();
  uVar7 = (int)*param_2 - 1;
  uVar10 = 4 < uVar7;
  uVar11 = uVar7 == 5;
  puVar12 = param_3;
  uStack_48 = extraout_x8;
  switch(uVar7) {
  case 0:
    unaff_x20 = (long *)param_2[1];
    unaff_x21 = (long *)param_2[2];
    func_0x00010774ea40();
    uVar10 = unaff_x21 <= unaff_x20;
    uVar11 = unaff_x20 == unaff_x21;
    if (!(bool)uVar11) {
      func_0x00010774ec30();
      unaff_x30 = (undefined *)0x10774b550;
code_r0x00010774d9c4:
      *(undefined8 *)(puVar9 + -0x40) = unaff_d9;
      *(double *)(puVar9 + -0x38) = unaff_d8;
      *(double *)(puVar9 + -0x30) = unaff_x22;
      *(long **)(puVar9 + -0x28) = unaff_x21;
      *(long **)(puVar9 + -0x20) = unaff_x20;
      *(ulong **)(puVar9 + -0x18) = param_3;
      *(undefined1 **)(puVar9 + -0x10) = puVar21;
      *(undefined **)(puVar9 + -8) = unaff_x30;
      func_0x00010774eb88();
      plVar19 = (long *)*param_2;
      plVar15 = plVar19;
      func_0x00010774cc50(plVar19,param_2[1]);
      if ((int)plVar15 != 0) {
        dVar23 = *(double *)(*plVar19 + 8);
        func_0x00010739c204(dVar23,puVar9 + -0x50,3);
        func_0x00010774ec98();
        if (!(bool)uVar10 || (bool)uVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010774da20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10774da24 + (ulong)(byte)(&UNK_10de94532)[extraout_x8_10] * 4))();
          return dVar23;
        }
      }
      func_0x00010774eb00();
      return unaff_d8;
    }
    goto LAB_10774b660;
  case 1:
    unaff_x20 = (long *)param_2[1];
    unaff_x21 = (long *)param_2[2];
    func_0x00010774ea40();
    uVar11 = unaff_x20 == unaff_x21;
    if (!(bool)uVar11) {
      func_0x00010774ec30();
      unaff_x30 = (undefined *)0x10774b608;
code_r0x00010774d094:
      *(undefined8 *)(puVar8 + -0x40) = unaff_d9;
      *(double *)(puVar8 + -0x38) = unaff_d8;
      *(double *)(puVar8 + -0x30) = unaff_x22;
      *(long **)(puVar8 + -0x28) = unaff_x21;
      *(long **)(puVar8 + -0x20) = unaff_x20;
      *(ulong **)(puVar8 + -0x18) = param_3;
      *(undefined1 **)(puVar8 + -0x10) = puVar21;
      *(undefined **)(puVar8 + -8) = unaff_x30;
      func_0x00010774e8bc();
      *(undefined8 *)(puVar8 + -0x48) = extraout_x8_04;
      uVar10 = 0x10 < param_2[1] - *param_2;
      uVar11 = param_2[1] - *param_2 == 0x11;
      if ((bool)uVar10) {
        func_0x00010774eb58();
        func_0x00010774ec98();
        if (!(bool)uVar10 || (bool)uVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010774d0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10774d0e8 + (ulong)(byte)(&UNK_10de9452c)[extraout_x8_05] * 4))();
          return param_1;
        }
      }
      func_0x00010774eb00();
      func_0x00010774e8a8(*(undefined8 *)(puVar8 + -0x48));
      if ((bool)uVar11) {
        return unaff_d8;
      }
      ___stack_chk_fail();
      puVar13 = param_2;
      func_0x00010774eaa8();
      func_0x00010774e9a0();
      *(undefined8 *)(puVar8 + -0x100) = unaff_d9;
      *(double *)(puVar8 + -0xf8) = unaff_d8;
      *(undefined8 *)(puVar8 + -0xf0) = unaff_x28;
      *(undefined8 *)(puVar8 + -0xe8) = unaff_x27;
      *(undefined8 *)(puVar8 + -0xe0) = unaff_x26;
      *(undefined8 *)(puVar8 + -0xd8) = unaff_x25;
      *(undefined8 *)(puVar8 + -0xd0) = unaff_x24;
      *(undefined8 *)(puVar8 + -200) = unaff_x23;
      *(double *)(puVar8 + -0xc0) = unaff_x22;
      *(long **)(puVar8 + -0xb8) = unaff_x21;
      *(long **)(puVar8 + -0xb0) = unaff_x20;
      *(ulong **)(puVar8 + -0xa8) = param_2;
      *(undefined1 **)(puVar8 + -0xa0) = puVar8 + -0x10;
      *(code **)(puVar8 + -0x98) = FUN_10774d208;
      dVar23 = param_1;
      func_0x00010774e944();
      func_0x00010774e8bc();
      *(undefined8 *)(puVar8 + -0x110) = extraout_x8_06;
      func_0x00010774e914();
      func_0x00010774ee24();
      if (!(bool)uVar11) {
        dVar23 = 0.0;
        *(undefined8 *)(puVar8 + -0x138) = 0;
        *(undefined8 *)(puVar8 + -0x140) = 0;
        *(undefined8 *)(puVar8 + -0x128) = 0;
        *(undefined8 *)(puVar8 + -0x130) = 0;
        *(undefined8 *)(puVar8 + -0x148) = 0;
        *(undefined8 *)(puVar8 + -0x150) = 0;
        lVar5 = unaff_x21[1];
        *(long **)(puVar8 + -0x1e8) = unaff_x21;
        func_0x00010774e954(lVar5);
        *(undefined8 *)(puVar8 + -0x188) = 0;
        *(undefined8 *)(puVar8 + -0x180) = 0;
        *(undefined8 *)(puVar8 + -0x178) = extraout_x8_07;
        *(undefined8 *)(puVar8 + -0x170) = 0;
        *(undefined8 *)(puVar8 + -0x168) = extraout_x9_00;
        puVar13 = (ulong *)(puVar8 + -0x150);
        puVar12 = (ulong *)(puVar8 + -0x188);
        func_0x00010774ba6c();
        do {
          do {
            if (*(long *)(puVar8 + -0x128) == 0) {
              param_1 = *(double *)(puVar8 + -0x158);
              goto LAB_10774d49c;
            }
            pdVar16 = (double *)
                      (*(long *)(*(long *)(puVar8 + -0x148) +
                                (*(ulong *)(puVar8 + -0x130) / 0x66) * 8) +
                      (*(ulong *)(puVar8 + -0x130) % 0x66) * 0x28);
            param_1 = *pdVar16;
            dVar20 = pdVar16[1];
            dVar6 = pdVar16[2];
            dVar2 = pdVar16[3];
            unaff_x22 = pdVar16[4];
            puVar13 = (ulong *)(puVar8 + -0x150);
            func_0x00010774bdd0();
            dVar23 = *(double *)(puVar8 + -0x158);
            uVar11 = param_1 == dVar23;
          } while (dVar23 <= param_1);
          uVar18 = ((long)dVar6 - (long)dVar20) + 1;
          if ((0x32 < uVar18) || (0x32 < ((long)unaff_x22 - (long)dVar2) + 1U)) {
            if ((ulong)dVar6 < (ulong)dVar20) {
              puVar8[-0x188] = 0;
              puVar8[-0x178] = 0;
LAB_10774d3ac:
              uVar11 = 0;
              puVar8[-0x170] = 0;
            }
            else {
              if (uVar18 == 2) {
                *(double *)(puVar8 + -0x188) = dVar20;
                *(double *)(puVar8 + -0x180) = dVar6;
                puVar8[-0x178] = 1;
                goto LAB_10774d3ac;
              }
              lVar5 = (long)dVar20 + (uVar18 >> 1);
              *(double *)(puVar8 + -0x188) = dVar20;
              *(long *)(puVar8 + -0x180) = lVar5;
              uVar11 = 1;
              puVar8[-0x178] = 1;
              *(long *)(puVar8 + -0x170) = lVar5;
              *(double *)(puVar8 + -0x168) = dVar6;
            }
            puVar8[-0x160] = uVar11;
            if ((ulong)unaff_x22 < (ulong)dVar2) {
              puVar8[-0x1b8] = 0;
              puVar8[-0x1a8] = 0;
LAB_10774d414:
              uVar11 = 0;
              puVar8[-0x1a0] = 0;
            }
            else {
              uVar18 = ((long)unaff_x22 - (long)dVar2) + 1;
              if (uVar18 == 2) {
                *(double *)(puVar8 + -0x1b8) = dVar2;
                *(double *)(puVar8 + -0x1b0) = unaff_x22;
                puVar8[-0x1a8] = 1;
                goto LAB_10774d414;
              }
              lVar5 = (long)dVar2 + (uVar18 >> 1);
              *(double *)(puVar8 + -0x1b8) = dVar2;
              *(long *)(puVar8 + -0x1b0) = lVar5;
              uVar11 = 1;
              puVar8[-0x1a8] = 1;
              *(long *)(puVar8 + -0x1a0) = lVar5;
              *(double *)(puVar8 + -0x198) = unaff_x22;
            }
            puVar8[-400] = uVar11;
            *(undefined1 **)(puVar8 + -0x1e0) = puVar8 + -0x150;
            *(undefined1 **)(puVar8 + -0x1d8) = puVar8 + -0x158;
            *(ulong **)(puVar8 + -0x1d0) = param_2;
            *(undefined8 *)(puVar8 + -0x1c8) = *(undefined8 *)(puVar8 + -0x1e8);
            *(long **)(puVar8 + -0x1c0) = unaff_x20;
            puVar14 = (ulong *)(puVar8 + -0x1e0);
            puVar12 = (ulong *)(puVar8 + -0x188);
            param_4 = puVar8 + -0x1b8;
            puVar22 = (undefined *)0x10774d458;
            goto code_r0x00010774d4e0;
          }
          func_0x00010774eb70(*(undefined8 *)(*(long *)(puVar8 + -0x1e8) + 8));
          uVar11 = (ulong)dVar6 >= (ulong)dVar20 && dVar6 == extraout_x8_08;
          if ((ulong)dVar6 < (ulong)dVar20 || (ulong)extraout_x8_08 <= (ulong)dVar6) {
LAB_10774d4b8:
            func_0x00010774eb00();
            goto LAB_10774d49c;
          }
          func_0x00010774eb70(unaff_x20[1]);
          unaff_x21 = (long *)((long)unaff_x22 - (long)dVar2);
          uVar11 = (ulong)unaff_x22 >= (ulong)dVar2 && unaff_x22 == extraout_x8_09;
          if ((ulong)unaff_x22 < (ulong)dVar2 || (ulong)extraout_x8_09 <= (ulong)unaff_x22)
          goto LAB_10774d4b8;
          func_0x00010774ea40();
          *(long *)(puVar8 + -0x1f0) = (long)dVar2 << 4;
          while (uVar11 = dVar20 == dVar6, !(bool)uVar11) {
            unaff_x22 = (double)(**(long **)(puVar8 + -0x1e8) + (long)dVar20 * 0x10);
            dVar20 = (double)((long)dVar20 + 1);
            for (plVar19 = unaff_x21; plVar19 != (long *)0x0; plVar19 = (long *)((long)plVar19 - 1))
            {
              func_0x00010774eb18();
              func_0x000107871a3c();
              if (((ulong)puVar13 & 1) != 0) goto LAB_10774d3b8;
              func_0x00010774eb18();
              func_0x00010774d544();
              func_0x00010774ea2c();
            }
          }
          uVar11 = !NAN(param_1);
          if (NAN(param_1)) goto LAB_10774d49c;
LAB_10774d3b8:
          func_0x00010774ed28();
        } while (!(bool)uVar11);
        param_1 = 0.0;
LAB_10774d49c:
        func_0x00010774ec44();
      }
      func_0x00010774e8a8(*(undefined8 *)(puVar8 + -0x110));
      if ((bool)uVar11) {
        return param_1;
      }
      ___stack_chk_fail();
      puVar14 = puVar13;
      func_0x00010774ec44();
      puVar22 = &SUB_10774d4e0;
      func_0x00010774e9a0();
      param_2 = puVar13;
code_r0x00010774d4e0:
      uVar11 = (int)((byte)puVar12[2] - 1) < 0;
      if ((byte)puVar12[2] == 1) {
        *(double *)(puVar8 + -0x220) = unaff_x22;
        *(long **)(puVar8 + -0x218) = unaff_x21;
        *(long **)(puVar8 + -0x210) = unaff_x20;
        *(ulong **)(puVar8 + -0x208) = param_2;
        *(undefined1 **)(puVar8 + -0x200) = puVar8 + -0xa0;
        *(undefined **)(puVar8 + -0x1f8) = puVar22;
        if ((param_4[0x10] & 1) != 0) {
          func_0x00010774ea9c();
          func_0x00010774cbf4(puVar14[3]);
          func_0x00010774eacc();
          func_0x00010774cbf4();
          func_0x00010774e8fc();
          func_0x00010774ecb8();
          if ((bool)uVar11) {
            func_0x00010774e8e0();
          }
        }
      }
      return dVar23;
    }
    goto LAB_10774b660;
  case 2:
    func_0x00010774e8a8(extraout_x8);
    if ((bool)uVar11) {
      puVar12 = param_2 + 1;
      goto code_r0x00010774b6a0;
    }
    break;
  case 3:
    func_0x00010774e8a8(extraout_x8);
    if ((bool)uVar11) {
      param_2 = param_2 + 1;
      uVar11 = 1;
      puVar9 = (undefined1 *)register0x00000008;
      param_3 = unaff_x19;
      puVar21 = unaff_x29;
      goto code_r0x00010774d9c4;
    }
    break;
  case 4:
    func_0x00010774e8a8(extraout_x8);
    if ((bool)uVar11) {
      param_2 = param_2 + 1;
      puVar8 = (undefined1 *)register0x00000008;
      param_3 = unaff_x19;
      puVar21 = unaff_x29;
      goto code_r0x00010774d094;
    }
    break;
  case 5:
    uStack_58 = param_2[2];
    param_1 = (double)param_2[1];
    dStack_60 = param_1;
    func_0x000107503dac(auStack_78,&dStack_60,1);
    puVar12 = auStack_78;
    unaff_x30 = (undefined *)0x10774b648;
    register0x00000008 = (BADSPACEBASE *)auStack_80;
    unaff_x19 = param_3;
    unaff_x29 = puVar21;
    goto code_r0x00010774b6a0;
  default:
    func_0x00010774eb00();
LAB_10774b660:
    func_0x00010774e8a8(uStack_48);
    if ((bool)uVar11) {
      return unaff_d8;
    }
  }
  ___stack_chk_fail();
  puVar12 = param_2;
  func_0x00010774ebcc();
  unaff_x30 = &UNK_10774b6a0;
  func_0x00010774e9a0();
  register0x00000008 = (BADSPACEBASE *)auStack_80;
  unaff_x19 = param_2;
  unaff_x29 = puVar21;
code_r0x00010774b6a0:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(double *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(double *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010774e8bc();
  *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8_00;
  uVar10 = puVar12[1] <= *puVar12;
  uVar11 = *puVar12 == puVar12[1];
  if (!(bool)uVar11) {
    func_0x00010774eb58();
    func_0x00010774ec98();
    if (!(bool)uVar10 || (bool)uVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010774b6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10774b6f0 + (ulong)(byte)(&UNK_10de94526)[extraout_x8_01] * 4))();
      return param_1;
    }
  }
  func_0x00010774eb00();
  func_0x00010774e8a8(*(undefined8 *)((long)register0x00000008 + -0x48));
  if ((bool)uVar11) {
    return unaff_d8;
  }
  ___stack_chk_fail();
  func_0x00010774eaa8();
  func_0x00010774e9a0();
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_d9;
  *(double *)((long)register0x00000008 + -0xf8) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
  *(double *)((long)register0x00000008 + -0xc0) = unaff_x22;
  *(long **)((long)register0x00000008 + -0xb8) = unaff_x21;
  *(long **)((long)register0x00000008 + -0xb0) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0xa8) = puVar12;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x98) = &UNK_10774b80c;
  func_0x00010774e944();
  func_0x00010774e8bc();
  *(undefined8 *)((long)register0x00000008 + -0x118) = extraout_x8_02;
  func_0x00010774e914();
  *(double *)((long)register0x00000008 + -0x158) = param_1;
  uVar11 = param_1 == 0.0;
  dVar23 = param_1;
  if (!(bool)uVar11) {
    dVar23 = 0.0;
    *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
    func_0x00010774e954(unaff_x21[1]);
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a0) = extraout_x8_03;
    *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
    *(undefined8 *)((long)register0x00000008 + -400) = extraout_x9;
    func_0x00010774edc8();
    do {
      while( true ) {
        do {
          if (*(long *)((long)register0x00000008 + -0x128) == 0) {
            param_1 = *(double *)((long)register0x00000008 + -0x158);
            goto code_r0x00010774ba10;
          }
          func_0x00010774e9fc();
          dVar23 = *(double *)((long)register0x00000008 + -0x180);
          uVar11 = dVar23 == *(double *)((long)register0x00000008 + -0x158);
        } while (*(double *)((long)register0x00000008 + -0x158) <= dVar23);
        uVar18 = *(ulong *)((long)register0x00000008 + -0x178);
        uVar3 = *(ulong *)((long)register0x00000008 + -0x170);
        uVar17 = (uVar3 - uVar18) + 1;
        if (uVar17 < 0x65) break;
code_r0x00010774b9a0:
        uVar11 = uVar17 == 100;
        func_0x00010774bfbc((undefined1 *)((long)register0x00000008 + -0x1b0),
                            (undefined1 *)((long)register0x00000008 + -0x178));
        func_0x00010774bfbc((undefined1 *)((long)register0x00000008 + -0x1e0),
                            (undefined1 *)((long)register0x00000008 + -0x168));
        *(undefined1 **)((long)register0x00000008 + -0x208) =
             (undefined1 *)((long)register0x00000008 + -0x150);
        *(undefined1 **)((long)register0x00000008 + -0x200) =
             (undefined1 *)((long)register0x00000008 + -0x158);
        *(ulong **)((long)register0x00000008 + -0x1f8) = puVar12;
        *(long **)((long)register0x00000008 + -0x1f0) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x1e8) = unaff_x20;
        func_0x00010774ee38();
        func_0x00010774c01c();
        func_0x00010774ee38();
        func_0x00010774c01c();
        func_0x00010774c01c((undefined1 *)((long)register0x00000008 + -0x208),
                            (undefined1 *)((long)register0x00000008 + -0x198),
                            (undefined1 *)((long)register0x00000008 + -0x1e0));
        func_0x00010774c01c((undefined1 *)((long)register0x00000008 + -0x208),
                            (undefined1 *)((long)register0x00000008 + -0x198),
                            (undefined1 *)((long)register0x00000008 + -0x1c8));
      }
      uVar1 = *(ulong *)((long)register0x00000008 + -0x168);
      uVar4 = *(ulong *)((long)register0x00000008 + -0x160);
      uVar17 = (uVar4 - uVar1) + 1;
      if (100 < uVar17) goto code_r0x00010774b9a0;
      uVar17 = unaff_x21[1] - *unaff_x21 >> 4;
      uVar11 = uVar18 <= uVar3 && uVar3 == uVar17;
      if ((uVar18 > uVar3 || uVar17 <= uVar3) ||
         (uVar17 = unaff_x20[1] - *unaff_x20 >> 4, uVar11 = uVar1 <= uVar4 && uVar4 == uVar17,
         uVar1 > uVar4 || uVar17 <= uVar4)) {
        func_0x00010774eb00();
        goto code_r0x00010774ba10;
      }
      func_0x00010774ea40();
      for (; uVar18 <= uVar3; uVar18 = uVar18 + 1) {
        if (uVar1 <= uVar4) {
          dVar23 = *(double *)(*unaff_x21 + uVar18 * 0x10);
          puVar22 = &UNK_10774b944;
          goto code_r0x00010774ba54;
        }
      }
      uVar11 = !NAN(param_1);
      if (NAN(param_1)) goto code_r0x00010774ba10;
      dVar23 = param_1;
      if (*(double *)((long)register0x00000008 + -0x158) <= param_1) {
        dVar23 = *(double *)((long)register0x00000008 + -0x158);
      }
      *(double *)((long)register0x00000008 + -0x158) = dVar23;
      uVar11 = dVar23 == 0.0;
    } while (!(bool)uVar11);
    param_1 = 0.0;
code_r0x00010774ba10:
    func_0x00010774ec70();
  }
  func_0x00010774e8a8(*(undefined8 *)((long)register0x00000008 + -0x118));
  if ((bool)uVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774ec70();
  puVar22 = &LAB_10774ba54;
  func_0x00010774e9a0();
code_r0x00010774ba54:
  *(undefined1 **)((long)register0x00000008 + -0x220) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined **)((long)register0x00000008 + -0x218) = puVar22;
  func_0x00010739c1b8();
  return SQRT(dVar23);
}



/* Entry: 10774c07c; end: 10774c0ff;  */

void FUN_10774c07c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10774c498; end: 10774c58f;  */

double FUN_10774c498(ulong param_1)

{
  double *pdVar1;
  double *unaff_x20;
  double *unaff_x21;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  double dVar10;
  long lVar11;
  
  func_0x00010774e944();
  func_0x00010774c590();
  if (((param_1 & 1) == 0) && (pdVar1 = unaff_x20, func_0x00010774c590(), ((ulong)pdVar1 & 1) == 0))
  {
    lVar11 = -(ulong)(unaff_x21[2] < *unaff_x20);
    dVar10 = *unaff_x20 - unaff_x21[2];
    bVar2 = (byte)lVar11 & SUB81(dVar10,0);
    bVar3 = (byte)((ulong)lVar11 >> 8) & (byte)((ulong)dVar10 >> 8);
    bVar4 = (byte)((ulong)lVar11 >> 0x10) & (byte)((ulong)dVar10 >> 0x10);
    bVar5 = (byte)((ulong)lVar11 >> 0x18) & (byte)((ulong)dVar10 >> 0x18);
    bVar6 = (byte)((ulong)lVar11 >> 0x20) & (byte)((ulong)dVar10 >> 0x20);
    bVar7 = (byte)((ulong)lVar11 >> 0x28) & (byte)((ulong)dVar10 >> 0x28);
    bVar8 = (byte)((ulong)lVar11 >> 0x30) & (byte)((ulong)dVar10 >> 0x30);
    bVar9 = (byte)((ulong)lVar11 >> 0x38) & (byte)((ulong)dVar10 >> 0x38);
    dVar10 = 0.0;
    func_0x00010739c1b8(0,0,CONCAT17(bVar9,CONCAT16(bVar8,CONCAT15(bVar7,CONCAT14(bVar6,CONCAT13(
                                                  bVar5,CONCAT12(bVar4,CONCAT11(bVar3,bVar2))))))) ^
                            (CONCAT17(bVar9,CONCAT16(bVar8,CONCAT15(bVar7,CONCAT14(bVar6,CONCAT13(
                                                  bVar5,CONCAT12(bVar4,CONCAT11(bVar3,bVar2))))))) ^
                            (ulong)(*unaff_x21 - unaff_x20[2])) &
                            -(ulong)(unaff_x20[2] < *unaff_x21));
    return SQRT(dVar10);
  }
  return NAN;
}



/* Entry: 10774ca34; end: 10774cbf3;  */

void FUN_10774ca34(double param_1,double param_2,double *param_3,double *param_4,long *param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  lVar2 = *param_5;
  lVar3 = param_5[1];
  if (lVar2 == lVar3) {
    param_3[3] = 0.0;
    *param_3 = 0.0;
    param_3[1] = 0.0;
    *(undefined4 *)(param_3 + 2) = 0;
  }
  else {
    dStack_90 = 0.0;
    dStack_88 = 0.0;
    dVar11 = INFINITY;
    dStack_a0 = 0.0;
    dStack_98 = 0.0;
    uVar4 = 0;
    while (uVar4 < (lVar3 - lVar2 >> 4) - 1U) {
      pdVar1 = (double *)(lVar2 + uVar4 * 0x10);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      uVar5 = (ulong)((int)uVar4 + 1);
      dVar6 = *(double *)(lVar2 + uVar5 * 0x10);
      func_0x00010739c3a8(dVar6,dVar7);
      dVar6 = dVar6 * param_4[1];
      dVar9 = (*(double *)(*param_5 + uVar5 * 0x10 + 8) - dVar8) * *param_4;
      if ((dVar6 != 0.0) || (dVar10 = 0.0, dVar9 != 0.0)) {
        dVar10 = param_1;
        func_0x00010739c3a8(param_1,dVar7);
        dVar10 = (dVar9 * (param_2 - dVar8) * *param_4 + dVar6 * dVar10 * param_4[1]) /
                 (dVar9 * dVar9 + dVar6 * dVar6);
        if (dVar10 <= 1.0) {
          if (0.0 < dVar10) {
            dVar7 = dVar7 + dVar10 * (dVar6 / param_4[1]);
            dVar8 = dVar8 + dVar10 * (dVar9 / *param_4);
          }
        }
        else {
          pdVar1 = (double *)(*param_5 + uVar5 * 0x10);
          dVar7 = *pdVar1;
          dVar8 = pdVar1[1];
        }
      }
      dVar6 = param_1;
      func_0x00010739c1b8(param_1,param_2,dVar7,dVar8,param_4);
      if (dVar6 < dVar11) {
        dStack_88 = (double)uVar4;
        dVar11 = dVar6;
        dStack_a0 = dVar7;
        dStack_98 = dVar10;
        dStack_90 = dVar8;
      }
      lVar2 = *param_5;
      uVar4 = uVar5;
      lVar3 = param_5[1];
    }
    dVar11 = (double)NEON_fminnm(dStack_98,0x3ff0000000000000);
    *param_3 = dStack_a0;
    param_3[1] = dStack_90;
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    *(int *)(param_3 + 2) = (int)dStack_88;
    param_3[3] = dVar11;
  }
  return;
}



/* Entry: 10774d208; end: 10774d4df;  */

/* WARNING: Possible PIC construction at 0x00010774d454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774d474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774d458) */
/* WARNING: Removing unreachable block (ram,0x00010774d478) */

double FUN_10774d208(double param_1,undefined8 ***param_2,double *param_3,double *param_4)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  double *pdVar6;
  double extraout_x8_01;
  double extraout_x8_02;
  double extraout_x9;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 **ppuStack_150;
  double *pdStack_148;
  double dStack_128;
  double dStack_120;
  undefined1 uStack_118;
  double dStack_110;
  double dStack_108;
  undefined1 uStack_100;
  double dStack_f8;
  double dStack_f0;
  ulong uStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 uStack_d0;
  double dStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_80;
  
  dVar9 = param_1;
  func_0x00010774e944();
  func_0x00010774e8bc();
  uStack_80 = extraout_x8;
  func_0x00010774e914();
  func_0x00010774ee24();
  if (!(bool)in_ZR) {
    dVar9 = 0.0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    lStack_b8 = 0;
    puStack_c0 = (undefined8 **)0x0;
    func_0x00010774e954(*(undefined8 *)(unaff_x21 + 8));
    dStack_f8 = 0.0;
    dStack_f0 = 0.0;
    dStack_e0 = 0.0;
    param_2 = (undefined8 ***)&puStack_c0;
    param_3 = &dStack_f8;
    uStack_e8 = extraout_x8_00;
    dStack_d8 = extraout_x9;
    func_0x00010774ba6c();
    do {
      do {
        param_1 = dStack_c8;
        if (lStack_98 == 0) goto LAB_10774d49c;
        pdVar6 = (double *)
                 (*(long *)(lStack_b8 + (uStack_a0 / 0x66) * 8) + (uStack_a0 % 0x66) * 0x28);
        param_1 = *pdVar6;
        dVar8 = pdVar6[1];
        dVar3 = pdVar6[2];
        dVar2 = pdVar6[3];
        dVar4 = pdVar6[4];
        param_2 = (undefined8 ***)&puStack_c0;
        func_0x00010774bdd0();
        in_ZR = param_1 == dStack_c8;
        dVar9 = dStack_c8;
      } while (dStack_c8 <= param_1);
      uVar1 = ((long)dVar3 - (long)dVar8) + 1;
      if ((0x32 < uVar1) || (0x32 < ((long)dVar4 - (long)dVar2) + 1U)) {
        if ((ulong)dVar3 < (ulong)dVar8) {
          dStack_f8 = (double)((ulong)dStack_f8 & 0xffffffffffffff00);
          uStack_e8 = uStack_e8 & 0xffffffffffffff00;
LAB_10774d3ac:
          uStack_d0 = 0;
          dStack_e0 = (double)((ulong)dStack_e0 & 0xffffffffffffff00);
        }
        else {
          if (uVar1 == 2) {
            dStack_f8 = dVar8;
            dStack_f0 = dVar3;
            uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
            goto LAB_10774d3ac;
          }
          dStack_f0 = (double)((long)dVar8 + (uVar1 >> 1));
          dStack_f8 = dVar8;
          uStack_d0 = 1;
          uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
          dStack_e0 = dStack_f0;
          dStack_d8 = dVar3;
        }
        if ((ulong)dVar4 < (ulong)dVar2) {
          dStack_128 = (double)((ulong)dStack_128 & 0xffffffffffffff00);
          uStack_118 = 0;
LAB_10774d414:
          uStack_100 = 0;
          dStack_110 = (double)((ulong)dStack_110 & 0xffffffffffffff00);
        }
        else {
          uVar1 = ((long)dVar4 - (long)dVar2) + 1;
          dStack_128 = dVar2;
          if (uVar1 == 2) {
            uStack_118 = 1;
            dStack_120 = dVar4;
            goto LAB_10774d414;
          }
          dStack_120 = (double)((long)dVar2 + (uVar1 >> 1));
          uStack_100 = 1;
          uStack_118 = 1;
          dStack_110 = dStack_120;
          dStack_108 = dVar4;
        }
        ppuStack_150 = &puStack_c0;
        pdStack_148 = &dStack_c8;
        param_2 = &ppuStack_150;
        param_3 = &dStack_f8;
        param_4 = &dStack_128;
        goto code_r0x00010774d4e0;
      }
      func_0x00010774eb70(*(undefined8 *)(unaff_x21 + 8));
      in_ZR = (ulong)dVar3 >= (ulong)dVar8 && dVar3 == extraout_x8_01;
      if ((ulong)dVar3 < (ulong)dVar8 || (ulong)extraout_x8_01 <= (ulong)dVar3) {
LAB_10774d4b8:
        func_0x00010774eb00();
        goto LAB_10774d49c;
      }
      func_0x00010774eb70(*(undefined8 *)(unaff_x20 + 8));
      in_ZR = (ulong)dVar4 >= (ulong)dVar2 && dVar4 == extraout_x8_02;
      if ((ulong)dVar4 < (ulong)dVar2 || (ulong)extraout_x8_02 <= (ulong)dVar4) goto LAB_10774d4b8;
      func_0x00010774ea40();
      while (in_ZR = dVar8 == dVar3, !(bool)in_ZR) {
        dVar8 = (double)((long)dVar8 + 1);
        for (lVar7 = (long)dVar4 - (long)dVar2; lVar7 != 0; lVar7 = lVar7 + -1) {
          func_0x00010774eb18();
          func_0x000107871a3c();
          if (((ulong)param_2 & 1) != 0) goto LAB_10774d3b8;
          func_0x00010774eb18();
          func_0x00010774d544();
          func_0x00010774ea2c();
        }
      }
      in_ZR = !NAN(param_1);
      if (NAN(param_1)) goto LAB_10774d49c;
LAB_10774d3b8:
      func_0x00010774ed28();
    } while (!(bool)in_ZR);
    param_1 = 0.0;
LAB_10774d49c:
    func_0x00010774ec44();
  }
  func_0x00010774e8a8(uStack_80);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010774ec44();
  func_0x00010774e9a0();
code_r0x00010774d4e0:
  uVar5 = (int)(*(byte *)(param_3 + 2) - 1) < 0;
  if ((*(byte *)(param_3 + 2) == 1) && (((ulong)param_4[2] & 1) != 0)) {
    func_0x00010774ea9c();
    func_0x00010774cbf4(param_2[3]);
    func_0x00010774eacc();
    func_0x00010774cbf4();
    func_0x00010774e8fc();
    func_0x00010774ecb8();
    if ((bool)uVar5) {
      func_0x00010774e8e0();
    }
  }
  return dVar9;
}



/* Entry: 10774dd9c; end: 10774de07;  */

long FUN_10774dd9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072c0094();
  func_0x000104c2f64c(lVar1 + 0x70);
  func_0x000104c2f64c(param_1 + 0xa8);
  func_0x000107269c1c(param_1 + 0xe0);
  return param_1;
}



/* Entry: 10774e054; end: 10774e057;  */

void FUN_10774e054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774e1b4; end: 10774e1b7;  */

void FUN_10774e1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  func_0x00010774e1ec(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 10774e468; end: 10774e4b7;  */

bool FUN_10774e468(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  func_0x00010774ebd4();
  param_1 = param_1 + 0x30;
  func_0x00010735c498(param_1,param_2 + 0x30);
  iVar2 = (int)param_1;
  if (iVar2 != 0) {
    func_0x00010774ec30();
    func_0x00010774b424();
    if (iVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if (*(long *)(lVar3 + 0x18) == *(long *)(lVar5 + 0x18)) {
        lVar4 = lVar5;
        if (*(ulong *)(lVar3 + 0x10) <= *(ulong *)(lVar5 + 0x10)) {
          lVar4 = lVar3;
          lVar3 = lVar5;
        }
        func_0x000104c2dd8c();
        lStack_30 = lVar4;
        lStack_28 = lVar5;
        while ((bVar1 = lStack_30 == 0, lStack_30 != 0 &&
               (lVar5 = lVar3, func_0x00010737d7fc(lVar3,lStack_28), (int)lVar5 != 0))) {
          func_0x000104c2de10(&lStack_30);
        }
      }
      else {
        bVar1 = false;
      }
      return bVar1;
    }
  }
  return false;
}



/* Entry: 10774e6a0; end: 10774e6df;  */

void FUN_10774e6a0(int param_1)

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



/* Entry: 10774e84c; end: 10774e867;  */

void FUN_10774e84c(void)

{
  func_0x00010774e868();
  return;
}



/* Entry: 10774f25c; end: 10774f2db;  */

/* WARNING: Possible PIC construction at 0x00010774f288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010774f3a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010774f28c) */
/* WARNING: Removing unreachable block (ram,0x00010774f29c) */
/* WARNING: Removing unreachable block (ram,0x00010774f2a0) */
/* WARNING: Removing unreachable block (ram,0x00010774f2b8) */
/* WARNING: Removing unreachable block (ram,0x00010774f2c8) */
/* WARNING: Removing unreachable block (ram,0x00010774f2d4) */
/* WARNING: Removing unreachable block (ram,0x00010774f2b0) */
/* WARNING: Removing unreachable block (ram,0x0001077501a4) */
/* WARNING: Removing unreachable block (ram,0x00010774f3a4) */
/* WARNING: Removing unreachable block (ram,0x00010774f3d4) */
/* WARNING: Removing unreachable block (ram,0x00010774f3f8) */
/* WARNING: Removing unreachable block (ram,0x00010774f3c4) */

void FUN_10774f25c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_1f8 [8];
  undefined1 *puStack_1f0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [56];
  undefined1 auStack_178 [128];
  undefined8 uStack_a8;
  undefined1 auStack_60 [64];
  
  func_0x0001077500ac(param_1,param_1);
  func_0x0001072625b4(auStack_60);
  func_0x0001077500c0();
  __Znwm(0x80);
  func_0x000107750158();
  func_0x000104c318bc();
  func_0x00010774fb40();
  func_0x00010775023c();
  func_0x000107750098(uStack_a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010775023c();
  func_0x000107750220();
  func_0x000107750208();
  func_0x0001077500ac();
  func_0x00010002b838(auStack_1c8);
  func_0x0001072625b4(auStack_1b0,auStack_1c8);
  func_0x000107277488(auStack_178,auStack_1b0);
  puVar1 = auStack_178;
  puStack_1f0 = auStack_178;
  func_0x00010774f448(auStack_1f8);
  func_0x000107750250();
  func_0x0001075393d4();
  func_0x0001077501c4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001077500d4();
  }
  return;
}



/* Entry: 10774f598; end: 10774f5db;  */

void FUN_10774f598(void)

{
  func_0x00010775007c();
  func_0x000107750108();
  func_0x00010774f498();
  func_0x000107750128();
  func_0x000107750120();
  func_0x000107750144();
  return;
}



/* Entry: 10774f878; end: 10774f893;  */

undefined8 * FUN_10774f878(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined1 auStack_d0 [16];
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [9];
  undefined8 uStack_28;
  
  func_0x0001075491f8();
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar4 = (undefined8 *)&uStack_81;
  puVar3 = (undefined8 *)0x1;
  uStack_28 = extraout_x8;
  func_0x0001072bed5c(auStack_70,&uStack_80);
  func_0x00010774ee44(param_1,&UNK_10f425446,auStack_70);
  puVar1 = auStack_70;
  func_0x0001072c9c34();
  func_0x000107549ce8();
  func_0x00010754909c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107549a64();
  func_0x0001072c9c34();
  func_0x000107549ce8();
  func_0x0001075495c4();
  func_0x0001072ca12c(auStack_d0);
  puVar2 = puVar3;
  func_0x00010754581c();
  uStack_e0 = SUB84(puVar2,0);
  uStack_dc = (undefined2)((ulong)puVar2 >> 0x20);
  func_0x000107549cd0(*puVar4);
  func_0x0001075457c8(&uStack_e0,auStack_e8);
  func_0x000107549824();
  func_0x0001072c9f9c();
  func_0x000107549ca8();
  *puVar1 = &PTR_DAT_1109be2b8;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  uVar5 = *puVar3;
  puVar1[10] = puVar3[1];
  puVar1[9] = uVar5;
  puVar1[0xb] = puVar3[2];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar5 = *puVar4;
  puVar1[0xd] = puVar4[1];
  puVar1[0xc] = uVar5;
  *puVar4 = 0;
  puVar4[1] = 0;
  return puVar1;
}



/* Entry: 10774fafc; end: 10774fbb3;  */

void FUN_10774fafc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010775f830();
  *param_1 = uVar1;
  func_0x000107750128();
  return;
}



/* Entry: 10774fcdc; end: 10774fceb;  */

void FUN_10774fcdc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010775016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10774febc; end: 10774fecf;  */

void FUN_10774febc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10774ff70; end: 10774ff97;  */

void FUN_10774ff70(undefined8 param_1)

{
  func_0x000107750244();
  func_0x0001077501e0(param_1,&PTR_DAT_1109d4458);
  func_0x000107750194();
  return;
}



/* Entry: 107750048; end: 10775004f;  */

void FUN_107750048(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107547c54(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077505ac; end: 10775064f;  */

undefined1 ***
FUN_1077505ac(undefined8 *param_1,undefined1 ***param_2,undefined8 **param_3,long param_4,
             undefined8 **param_5)

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
  uint extraout_w8_03;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_258 [24];
  undefined1 **ppuStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 **ppuStack_228;
  undefined8 ***pppuStack_220;
  undefined *puStack_218;
  undefined1 uStack_209;
  undefined1 *apuStack_208 [3];
  undefined8 *puStack_1f0;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 uStack_1a9;
  undefined8 *apuStack_1a8 [5];
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined1 uStack_159;
  undefined1 *apuStack_158 [5];
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  undefined1 uStack_109;
  undefined1 *apuStack_108 [5];
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 uStack_b9;
  undefined1 *apuStack_b8 [5];
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *apuStack_60 [7];
  undefined8 uStack_28;
  
  func_0x000107750fc0();
  uVar1 = *(int *)(param_2 + 0xd) == 3;
  uStack_28 = extraout_x8;
  if ((bool)uVar1) {
    func_0x00010732393c();
    func_0x000104c2fe00(apuStack_60,param_2);
    param_3 = apuStack_60;
    param_4 = 1;
    func_0x0001077509b8(&uStack_70);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    *(undefined4 *)(param_1 + 2) = 2;
    func_0x0001073e0028(&uStack_70);
    param_2 = (undefined1 ***)apuStack_60;
    func_0x000104c2f714();
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  func_0x000107751034(uStack_28);
  if ((bool)uVar1) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x000104c2f714();
  func_0x000107751024();
  puStack_78 = &UNK_107750650;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107750fc0();
  uVar8 = 0;
  if (param_3[3] != (undefined8 *)0x0) {
    uStack_b9 = 0;
    func_0x000107750ffc(&PTR_DAT_1109d4568);
    param_3 = (undefined8 **)apuStack_b8;
    func_0x000107869d34();
    func_0x00010775102c();
    uVar8 = uStack_b9;
  }
  func_0x000107750fa0(uVar8);
  if ((bool)uVar1) {
    pppuVar2 = (undefined1 ***)(ulong)(extraout_w8 & 1);
  }
  else {
    ___stack_chk_fail();
    func_0x00010775102c();
    func_0x000107751024();
    puStack_c8 = &UNK_1077506b8;
    ppuStack_d0 = &puStack_80;
    func_0x000107750fc0();
    uVar1 = *(int *)(param_3 + 2) == 1;
    if ((bool)uVar1) {
      uVar8 = 0;
    }
    else {
      uStack_109 = 0;
      func_0x000107750ffc(&PTR_DAT_1109d45e8);
      param_3 = (undefined8 **)apuStack_108;
      func_0x000107869948();
      func_0x00010775106c();
      uVar8 = uStack_109;
    }
    func_0x000107750fa0(uVar8);
    if ((bool)uVar1) {
      pppuVar2 = (undefined1 ***)(ulong)(extraout_w8_00 & 1);
    }
    else {
      ___stack_chk_fail();
      func_0x00010775106c();
      func_0x000107751024();
      puStack_118 = &UNK_10775072c;
      pppuStack_120 = &ppuStack_d0;
      func_0x000107750fc0();
      uVar1 = *(int *)(param_3 + 2) == 1;
      if ((bool)uVar1) {
        uVar8 = 0;
      }
      else {
        uStack_159 = 0;
        func_0x000107750ffc(&PTR_DAT_1109d4668);
        param_3 = (undefined8 **)apuStack_158;
        func_0x000107869d34();
        func_0x00010775102c();
        uVar8 = uStack_159;
      }
      func_0x000107750fa0(uVar8);
      if ((bool)uVar1) {
        pppuVar2 = (undefined1 ***)(ulong)(extraout_w8_01 & 1);
      }
      else {
        ___stack_chk_fail();
        func_0x00010775102c();
        func_0x000107751024();
        puStack_168 = &UNK_1077507a0;
        pppuStack_170 = &pppuStack_120;
        func_0x000107750fc0();
        uVar8 = 0;
        if (param_3[3] != (undefined8 *)0x0) {
          uStack_1a9 = 0;
          func_0x000107750ffc(&PTR_DAT_1109d46e8);
          param_3 = apuStack_1a8;
          func_0x000107869c04();
          func_0x00010750b370();
          uVar8 = uStack_1a9;
        }
        func_0x000107750fa0(uVar8);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          pppuVar2 = (undefined1 ***)apuStack_1a8;
          func_0x00010750b370();
          func_0x000107751024();
          puStack_1b8 = &UNK_107750810;
          pppuStack_1c0 = &pppuStack_170;
          func_0x000107750fc0();
          uVar1 = *(int *)(param_4 + 0x10) == 1;
          lVar6 = param_4;
          ppuVar7 = param_5;
          if ((bool)uVar1) {
            param_4 = unaff_x20;
            uVar8 = 0;
          }
          else {
            uStack_209 = 0;
            puVar3 = (undefined8 *)0x28;
            __Znwm();
            *puVar3 = &PTR_DAT_1109d47e8;
            puVar3[1] = param_3;
            puVar3[2] = &uStack_209;
            puVar3[3] = param_5;
            puVar3[4] = param_4;
            param_3 = (undefined8 **)apuStack_208;
            puStack_1f0 = puVar3;
            func_0x000107869d34();
            func_0x00010775102c();
            uVar8 = uStack_209;
          }
          func_0x000107750fa0(uVar8);
          if ((bool)uVar1) {
            return (undefined1 ***)(ulong)(extraout_w8_03 & 1);
          }
          ___stack_chk_fail();
          pppuVar4 = pppuVar2;
          func_0x00010775102c();
          func_0x000107751024();
          puStack_218 = &UNK_1077508c0;
          pppuVar5 = pppuVar4;
          ppuStack_240 = (undefined1 **)param_3;
          lStack_238 = lVar6;
          lStack_230 = param_4;
          ppuStack_228 = pppuVar2;
          pppuStack_220 = &pppuStack_1c0;
          while ((undefined8 **)ppuStack_240 != ppuVar7) {
            func_0x000107750910(auStack_258,pppuVar4,lStack_238);
            pppuVar5 = &ppuStack_240;
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



/* Entry: 107750934; end: 10775093b;  */

void FUN_107750934(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_2;
  uVar3 = param_3;
  func_0x00010726297c();
  if ((uVar3 & 1) != 0) {
    func_0x000104c2fe00(*(long *)(*param_2 + 8) + lVar2 * 0x38,param_3);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107750ac8; end: 107750adb;  */

undefined ** FUN_107750ac8(void)

{
  return &PTR_DAT_1109d45c8;
}



/* Entry: 107750c10; end: 107750c2b;  */

void FUN_107750c10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d4668;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107750d9c; end: 107750dbf;  */

void FUN_107750d9c(void)

{
  func_0x000107750fd0();
  func_0x000107750fdc(&PTR_DAT_1109d4758);
  return;
}



/* Entry: 107750f84; end: 1077510ab;  */

undefined ** FUN_107750f84(void)

{
  return &PTR_DAT_1109d4848;
}



/* Entry: 1077514a4; end: 1077514d7;  */

long FUN_1077514a4(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x000107752170();
  }
  else {
    func_0x000107752100();
  }
  return param_1;
}



/* Entry: 10775189c; end: 1077519db;  */

undefined1 * FUN_10775189c(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 uStack_1a9;
  undefined1 auStack_1a8 [112];
  undefined1 auStack_138 [168];
  undefined1 auStack_90 [64];
  char cStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  func_0x000107752dbc();
  plVar1 = plVar1 + 1;
  uStack_48 = extraout_x8;
  FUN_107752528();
  if (plVar1 == (long *)0x0) {
    (**(code **)(*param_2 + 0x18))(auStack_90,param_2,param_3);
    in_ZR = cStack_50 == '\x01';
    if ((bool)in_ZR) {
      FUN_1077765a4(auStack_1a8,auStack_90,&uStack_1a9);
      func_0x0001077527e4(auStack_138,param_3,auStack_1a8);
      plVar1 = param_2 + 1;
      func_0x0001077524f8(plVar1,auStack_138);
      func_0x00010726aef4(auStack_138);
      func_0x000107752edc();
    }
    else {
      func_0x000104c2fe00(auStack_138,param_3);
      plVar1 = param_2 + 1;
      func_0x000107752510(plVar1,auStack_138);
      func_0x000104c2f714(auStack_138);
    }
    func_0x000107267ed0(auStack_90);
  }
  puVar2 = (undefined1 *)(param_1 + 8);
  func_0x0001072786d8(puVar2,plVar1 + 10);
  func_0x000107752da8(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010726aef4(auStack_138);
  func_0x000107752edc();
  puVar2 = auStack_90;
  func_0x000107267ed0();
  func_0x000107752df4();
  puVar3 = puVar2;
  func_0x0001077515a0();
  if ((int)puVar3 != 0) {
    if (*(int *)(puVar2 + 0x188) == 1) {
      plVar1 = (long *)(puVar2 + 0x178);
      func_0x0001077522cc();
      return (undefined1 *)(*plVar1 + 0x20);
    }
    if (*(int *)(puVar2 + 0x188) == 0) {
      puVar2 = puVar2 + 0x178;
      func_0x0001077522b4(puVar2);
      func_0x000107752f84();
                    /* WARNING: Could not recover jumptable at 0x000107751a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x20))();
      return puVar2;
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 1077520c0; end: 1077520ff;  */

long FUN_1077520c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  func_0x0001072786d8(lVar1 + 0x40,param_3 + 8);
  return param_1;
}



/* Entry: 107752224; end: 1077522b3;  */

undefined1  [16] FUN_107752224(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long *unaff_x20;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_34 [4];
  ulong uStack_30;
  uint uStack_28;
  byte bStack_24;
  
  func_0x000107752eb0();
  func_0x000107752f14();
  if (bStack_24 == 1) {
    (**(code **)(*unaff_x20 + 0x40))(auStack_34);
    if ((bStack_24 & 1) == 0) {
      func_0x000104bdc2c8();
      if ((int)unaff_x20[2] == 0) {
        auVar4._8_8_ = param_2;
        auVar4._0_8_ = unaff_x20;
        return auVar4;
      }
      func_0x00010563ab98();
      if ((int)unaff_x20[2] != 1) {
        func_0x00010563ab98();
        *(undefined1 *)unaff_x20 = 0;
        *(undefined4 *)(unaff_x20 + 2) = 0xffffffff;
        func_0x000107752324();
        auVar6._8_8_ = param_2;
        auVar6._0_8_ = unaff_x20;
        return auVar6;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = unaff_x20;
      return auVar5;
    }
  }
  else {
    if (unaff_x19 == (ulong *)0x0) {
      uVar2 = 0;
      uStack_30 = 0;
      uVar1 = 0;
      goto LAB_107752288;
    }
    uStack_30 = *unaff_x19;
    uStack_28 = (uint)unaff_x19[1];
  }
  uVar2 = uStack_30 & 0xffffffffffffff00;
  uVar1 = (ulong)uStack_28 | 0x100000000;
LAB_107752288:
  auVar3._0_8_ = uStack_30 & 0xff | uVar2;
  auVar3._8_8_ = uVar1;
  return auVar3;
}



/* Entry: 107752414; end: 10775241f;  */

void FUN_107752414(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x000107752f90(*param_1,param_1[1]);
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



/* Entry: 107752528; end: 1077525fb;  */

long FUN_107752528(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
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
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
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



/* Entry: 107752b9c; end: 107752cff;  */

void FUN_107752b9c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_68;
  
  func_0x000107752dbc();
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_68 = extraout_x8;
  for (; uVar3 = param_2 == param_3, !(bool)uVar3; param_2 = param_2 + 3) {
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    lVar1 = param_2[1];
    for (lVar7 = *param_2; lVar7 != lVar1; lVar7 = lVar7 + 0x10) {
      func_0x0001077529d8(&uStack_e0,lVar7);
      func_0x000107277668(&uStack_168,&uStack_e0);
      func_0x000107752edc();
    }
    func_0x000107277aa4(&uStack_180,&uStack_168);
    func_0x000107277d70(&uStack_168);
    uStack_140 = uStack_178;
    uStack_148 = uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_e8 = 8;
    func_0x000107277668(&uStack_198,auStack_150);
    func_0x00010726af18(&uStack_148);
    func_0x00010726b188(&uStack_180);
  }
  puVar6 = &uStack_198;
  func_0x000107277aa4(&uStack_e0);
  *(undefined8 *)(param_1 + 0x10) = uStack_d8;
  *(undefined8 *)(param_1 + 8) = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  *(undefined4 *)(param_1 + 0x68) = 8;
  puVar4 = &uStack_e0;
  func_0x00010726b188();
  func_0x000107752ee4();
  func_0x000107752da8(uStack_68);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(&uStack_148);
  puVar5 = &uStack_180;
  func_0x00010726b188();
  func_0x000107752ee4();
  func_0x000107752df4();
  uVar2 = *(uint *)(puVar6 + 2);
  if (*(int *)(puVar5 + 2) != -1 || uVar2 != 0xffffffff) {
    puStack_1b0 = &stack0xfffffffffffffff0;
    if (uVar2 == 0xffffffff) {
      puStack_1a8 = &UNK_107752d00;
      if (*(uint *)(puVar5 + 2) != 0xffffffff) {
        puStack_1b8 = puVar4;
        func_0x0001072745a8((&PTR_DAT_110995e78)[*(uint *)(puVar5 + 2)],puVar5,puVar5,puVar6);
      }
      *(undefined4 *)(puVar5 + 2) = 0xffffffff;
      return;
    }
    puStack_1a8 = &UNK_107752d00;
    puStack_1b8 = puVar5;
    (*(code *)(&PTR_DAT_1109d4868)[uVar2])(&puStack_1b8);
  }
  return;
}



/* Entry: 107753490; end: 10775349f;  */

void FUN_107753490(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107753494);
  (*pcVar1)();
}



/* Entry: 1077538cc; end: 1077539db;  */

void FUN_1077538cc(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  
  func_0x0001077542dc();
  func_0x0001077539dc();
  lVar3 = lRam0000000113822cc0;
  while (lVar3 != 0x113822cc8) {
    puVar4 = *(undefined8 **)(lVar3 + 0x20);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar4 + 1,0x10);
      if (bVar2) {
        puVar4[1] = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar2) {
        *puVar4 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x00010002c7d4();
  }
  func_0x000107754210();
  func_0x0001077542b4();
  func_0x000107754224();
  func_0x000107753b08();
  func_0x00010775425c();
  func_0x0001077542b4();
  func_0x000107754224();
  func_0x000107753b08();
  func_0x00010775425c();
  func_0x0001077542b4();
  func_0x000107754224();
  func_0x000107753b90();
  func_0x00010775425c();
  func_0x0001077542b4();
  func_0x000107754224();
  func_0x000107753b90();
  func_0x00010775425c();
  return;
}



/* Entry: 107753c18; end: 107753c43;  */

undefined8 FUN_107753c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  func_0x00010775415c(param_1,param_2,&uStack_18,&uStack_19);
  return uStack_18;
}



/* Entry: 107754314; end: 107754343;  */

/* WARNING: Possible PIC construction at 0x00010775432c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107754330) */

long * FUN_107754314(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  
  func_0x00010775532c();
  plVar1 = *(long **)(unaff_x19 + 0x18);
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



/* Entry: 107754e2c; end: 107754e3f;  */

void FUN_107754e2c(void)

{
  func_0x000107754eb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107755008; end: 107755017;  */

void FUN_107755008(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107755338; end: 1077555e3;  */

/* WARNING: Possible PIC construction at 0x000107755600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107755604) */

long * FUN_107755338(long param_1,long param_2,char *param_3,undefined8 param_4)

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
  func_0x0001077562f4();
  uStack_70 = extraout_x8;
  func_0x000107753050(&lStack_218,*(undefined8 *)(lVar9 + 0x48));
  uVar4 = iStack_1a0 == 1;
  if (!(bool)uVar4) {
    plVar5 = (long *)(param_1 + 8);
    pcVar7 = acStack_210;
    func_0x00010756c040();
    goto LAB_10775544c;
  }
  plVar5 = &lStack_218;
  func_0x0001073405dc();
  iVar2 = (int)plVar5[0xd];
  if (iVar2 == 0) {
LAB_107755440:
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
        func_0x000107756304();
        pcVar8 = acStack_110;
        pcVar7 = pcVar7 + 8;
        func_0x0001072786d8(pcVar8);
        lVar9 = 0;
        uVar10 = 0;
        while( true ) {
          lVar1 = *(long *)plVar5[1];
          uVar3 = (((long *)plVar5[1])[1] - lVar1) / 0x70;
          uVar4 = uVar10 == uVar3;
          if (uVar3 <= uVar10) break;
          func_0x000107756304();
          func_0x0001072955a4(pcVar8 + 8,lVar1 + lVar9 + 8);
          pcVar7 = param_3;
          func_0x000107753050(acStack_198,*(undefined8 *)(param_2 + 0x98),param_3,param_4);
          pcVar8 = acStack_198;
          func_0x0001073405dc();
          func_0x00010756e584();
          uVar4 = *pcVar8 == '\x01';
          if ((bool)uVar4) {
            func_0x000107756384();
            if (iStack_b0 != 0) {
              func_0x000107756304();
              func_0x00010775632c();
            }
            pcVar7 = (char *)(*(long *)plVar5[1] + lVar9);
            func_0x0001074d286c(param_1 + 8);
            func_0x000107756318();
            goto LAB_10775557c;
          }
          func_0x000107756318();
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 0x70;
        }
        func_0x000107756384();
        if (iStack_b0 != 0) {
          func_0x000107756304();
          func_0x00010775632c();
        }
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 1;
LAB_10775557c:
        func_0x00010775636c();
        plVar5 = alStack_a8;
        func_0x000104c2f714();
        goto LAB_10775544c;
      }
      goto LAB_107755440;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x78) = 1;
LAB_10775544c:
  func_0x0001077563b4();
  func_0x0001077562e0(uStack_70);
  if ((bool)uVar4) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = alStack_a8;
  func_0x000104c2f714();
  func_0x0001077563b4();
  func_0x000107756310();
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



/* Entry: 107755e74; end: 107755e87;  */

void FUN_107755e74(void)

{
  func_0x000107755f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077560b8; end: 1077560c7;  */

void FUN_1077560b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4ae8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107756698; end: 1077566cb;  */

/* WARNING: Possible PIC construction at 0x0001077566b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077566b8) */

long * FUN_107756698(long param_1,long param_2)

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



/* Entry: 107756ef4; end: 107756f03;  */

long FUN_107756ef4(long param_1)

{
  func_0x000100060934(param_1,&UNK_10f425982);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107757098; end: 10775719b;  */

void FUN_107757098(void)

{
  return;
}



/* Entry: 1077575b0; end: 1077575bb;  */

undefined ** FUN_1077575b0(void)

{
  return &PTR_DAT_1109d4cd0;
}


