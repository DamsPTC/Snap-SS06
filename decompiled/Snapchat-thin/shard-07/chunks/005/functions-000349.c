/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105653c68; end: 105653cf3;  */

void FUN_105653c68(void)

{
  FUN_105653fa4();
  func_0x000105654194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105653cf4; end: 105653d3f;  */

undefined8 * FUN_105653cf4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_105653d40();
  return param_1;
}



/* Entry: 105653d40; end: 105653e83;  */

void FUN_105653d40(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x00010054c3a4(), (int)lVar2 != 0)) {
    lVar3 = *param_1;
    func_0x00010054c7ec();
    func_0x0001005ecf0c(auStack_a0);
    func_0x0001005ecf0c(auStack_88,lVar3,1);
    lVar2 = lVar3;
    func_0x00010054c8f4(lVar3,2);
    lStack_70 = lVar2;
    func_0x00010061f5a8(auStack_68,lVar3,3);
    func_0x0001005ecf0c(auStack_50,lVar3,4);
    func_0x00010054c8f4(lVar3,5);
    lStack_38 = lVar3;
    if ((char)param_1[0xf] == '\x01') {
      FUN_10564a728(param_1 + 1,auStack_a0);
    }
    else {
      func_0x00010564a7a0(param_1 + 1,auStack_a0);
    }
    FUN_10564a7bc(auStack_a0);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0xf] == '\x01') {
    FUN_10564a7bc();
    *(undefined1 *)(plVar1 + 0xe) = 0;
  }
  return;
}



/* Entry: 105653e84; end: 105653e87;  */

undefined8 * FUN_105653e84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105653e88; end: 105653e9b;  */

void FUN_105653e88(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105653e9c; end: 105653eb7;  */

void FUN_105653e9c(void)

{
  FUN_105653fa4();
  func_0x000105654194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105653eb8; end: 105653ebb;  */

undefined8 * FUN_105653eb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105653ebc; end: 105653ecf;  */

void FUN_105653ebc(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105653ed0; end: 105653eeb;  */

void FUN_105653ed0(void)

{
  FUN_105653fa4();
  func_0x000105654194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105653eec; end: 105653fa3;  */

/* WARNING: Possible PIC construction at 0x000105653f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105653f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105653f14) */
/* WARNING: Removing unreachable block (ram,0x000105653f28) */

void FUN_105653eec(void)

{
  int unaff_w23;
  
  func_0x000105654040();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (unaff_w23 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105653fa4; end: 1056541fb;  */

void FUN_105653fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 1056541fc; end: 1056542f3;  */

long FUN_1056541fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1056545cc(param_1,param_2,&UNK_10f2e2dea,0x1ae);
  FUN_1056545f8(lVar1 + 0x78,param_2,&UNK_10f2e2f99,0x10c);
  FUN_105654624(param_1 + 0xf0,param_2,&UNK_10f2e30a6,0x268);
  func_0x00010054bfa4(param_1 + 0x168,param_2,&UNK_10f2e330f,0xf2);
  func_0x00010054bfa4(param_1 + 0x1f0,param_2,&UNK_10f2e3402,0x48);
  func_0x00010054bfa4(param_1 + 0x278,param_2,&UNK_10f2e344b,0x32);
  return param_1;
}



/* Entry: 1056542f4; end: 10565431f;  */

void FUN_1056542f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_105654650();
  func_0x0001005ecd38();
  uStack_28 = param_2;
  func_0x0001056547b0(param_1,&uStack_28);
  return;
}



/* Entry: 105654320; end: 105654343;  */

void FUN_105654320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_105654344(param_1 + 0x78,param_2,&uStack_18);
  return;
}



/* Entry: 105654344; end: 10565437f;  */

void FUN_105654344(undefined8 param_1)

{
  FUN_1056549c0();
  func_0x000105653c84();
  func_0x000105654b20(param_1,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 105654380; end: 1056543a7;  */

void FUN_105654380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1056543a8(param_1 + 0xf0,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1056543a8; end: 1056543e3;  */

void FUN_1056543a8(undefined8 param_1)

{
  FUN_105654b88();
  func_0x000105654ce8();
  func_0x000105654d20(param_1,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1056543e4; end: 105654433;  */

void FUN_1056543e4(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_9;
  uStack_18 = param_10;
  uStack_38 = param_7;
  uStack_2c = param_4;
  uStack_28 = param_3;
  uStack_24 = param_2;
  FUN_105654434(param_1 + 0x168,&uStack_24,&uStack_28,&uStack_2c,param_5,param_6,&uStack_38,param_8,
                &uStack_20,param_11);
  return;
}



/* Entry: 105654434; end: 1056544f3;  */

void FUN_105654434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lStack_58;
  
  lStack_58 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_105654dd8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x00010054c3a4(param_1);
  func_0x000105655090();
  func_0x00010062155c(&lStack_58);
  return;
}



/* Entry: 1056544f4; end: 10565451f;  */

void FUN_1056544f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_105654520(param_1 + 0x1f0,&uStack_20,param_4,param_5);
  return;
}



/* Entry: 105654520; end: 1056545a7;  */

void FUN_105654520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_105654ec4(param_1,param_2,param_3,param_4);
  func_0x00010054c3a4(param_1);
  func_0x000105655090();
  func_0x00010062155c(&lStack_38);
  return;
}



/* Entry: 1056545a8; end: 1056545cb;  */

void FUN_1056545a8(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000100852678(param_1 + 0x278,&uStack_18);
  return;
}



/* Entry: 1056545cc; end: 1056545f7;  */

void FUN_1056545cc(void)

{
  func_0x000105654f6c();
  func_0x00010565507c();
  func_0x000105655068();
  return;
}



/* Entry: 1056545f8; end: 105654623;  */

void FUN_1056545f8(void)

{
  func_0x000105654f6c();
  func_0x00010565507c();
  func_0x000105655068();
  return;
}



/* Entry: 105654624; end: 10565464f;  */

void FUN_105654624(void)

{
  func_0x000105654f6c();
  func_0x00010565507c();
  func_0x000105655068();
  return;
}



/* Entry: 105654650; end: 105654713;  */

long FUN_105654650(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x000105654f48();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x0001056550d0();
      func_0x0001056550b8();
      func_0x0001056550c8();
      func_0x0001056550b0();
      func_0x000105654fe8();
      func_0x000105654f18();
      goto LAB_1056546dc;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x000105654fa4();
  }
LAB_1056546dc:
  func_0x000105654ff8();
  func_0x000105655018();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000105655040();
  func_0x000105655060();
  func_0x0001005ecd38();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x0001056547b0(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 105654714; end: 105654777;  */

void FUN_105654714(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x0001005ecd38();
  uStack_28 = param_2;
  func_0x0001056547b0(param_1,&uStack_28);
  return;
}



/* Entry: 105654778; end: 10565477b;  */

undefined8 * FUN_105654778(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10565477c; end: 10565478f;  */

void FUN_10565477c(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105654790; end: 1056547d7;  */

void FUN_105654790(void)

{
  long unaff_x19;
  
  func_0x000105655008();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1056547d8; end: 105654817;  */

void FUN_1056547d8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000105654fc8();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_105654818();
  return;
}



/* Entry: 105654818; end: 1056549bf;  */

void FUN_105654818(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (func_0x00010054c3a4(), (int)lVar2 != 0)) {
    lVar3 = *param_1;
    func_0x00010054c7ec();
    lVar2 = lVar3;
    func_0x00010054c8f4();
    uStack_d8 = (undefined4)lVar2;
    lVar2 = lVar3;
    func_0x00010054c8f4(lVar3,1);
    uStack_d4 = (undefined4)lVar2;
    lVar2 = lVar3;
    func_0x00010054c8f4(lVar3,2);
    uStack_d0 = (undefined4)lVar2;
    func_0x0001005ecf0c(auStack_c8,lVar3,3);
    func_0x0001005ecf0c(auStack_b0,lVar3,4);
    lVar2 = lVar3;
    func_0x00010054c8f4(lVar3,5);
    lStack_98 = lVar2;
    func_0x0001005ecf0c(auStack_90,lVar3,6);
    uStack_70 = 7;
    lVar2 = lVar3;
    func_0x0001005f9230();
    lStack_78 = lVar2;
    func_0x0001005ecf0c(auStack_68,lVar3,8);
    lVar2 = lVar3;
    func_0x00010054c8f4(lVar3,9);
    lStack_50 = lVar2;
    func_0x00010054c8f4(lVar3,10);
    lStack_48 = lVar3;
    if ((char)param_1[0x14] == '\x01') {
      FUN_1056516c0(param_1 + 1,&uStack_d8);
    }
    else {
      FUN_105651680(param_1 + 1,&uStack_d8);
    }
    FUN_10564a65c(&uStack_d8);
    return;
  }
  plVar1 = param_1 + 1;
  if ((char)param_1[0x14] == '\x01') {
    FUN_10564a65c();
    *(undefined1 *)(plVar1 + 0x13) = 0;
  }
  return;
}



/* Entry: 1056549c0; end: 105654a83;  */

long FUN_1056549c0(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x000105654f48();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x0001056550d0();
      func_0x0001056550b8();
      func_0x0001056550c8();
      func_0x0001056550b0();
      func_0x000105654fe8();
      func_0x000105654f18();
      goto LAB_105654a4c;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x000105654fa4();
  }
LAB_105654a4c:
  func_0x000105654ff8();
  func_0x000105655018();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000105655040();
  func_0x000105655060();
  func_0x000105653c84();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x000105654b20(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 105654a84; end: 105654ae7;  */

void FUN_105654a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x000105653c84();
  uStack_28 = param_2;
  func_0x000105654b20(param_1,&uStack_28);
  return;
}



/* Entry: 105654ae8; end: 105654aeb;  */

undefined8 * FUN_105654ae8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105654aec; end: 105654aff;  */

void FUN_105654aec(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105654b00; end: 105654b47;  */

void FUN_105654b00(void)

{
  long unaff_x19;
  
  func_0x000105655008();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105654b48; end: 105654b87;  */

void FUN_105654b48(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x000105654fc8();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_105651950();
  return;
}



/* Entry: 105654b88; end: 105654c4b;  */

long FUN_105654b88(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x000105654f48();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x0001056550d0();
      func_0x0001056550b8();
      func_0x0001056550c8();
      func_0x0001056550b0();
      func_0x000105654fe8();
      func_0x000105654f18();
      goto LAB_105654c14;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x000105654fa4();
  }
LAB_105654c14:
  func_0x000105654ff8();
  func_0x000105655018();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000105655040();
  func_0x000105655060();
  func_0x000105654ce8();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x000105654d20(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 105654c4c; end: 105654caf;  */

void FUN_105654c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x000105654ce8();
  uStack_28 = param_2;
  func_0x000105654d20(param_1,&uStack_28);
  return;
}



/* Entry: 105654cb0; end: 105654cb3;  */

undefined8 * FUN_105654cb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105654cb4; end: 105654cc7;  */

void FUN_105654cb4(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105654cc8; end: 105654dd7;  */

void FUN_105654cc8(void)

{
  long unaff_x19;
  
  func_0x000105655008();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 105654dd8; end: 105654eb7;  */

/* WARNING: Possible PIC construction at 0x000105654e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105654e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105654e50) */
/* WARNING: Removing unreachable block (ram,0x000105654e80) */

void FUN_105654dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  FUN_105654eb8(param_1,1,param_2);
  FUN_105654eb8(param_1,2,param_3);
  func_0x000105654ec0(param_1,3,param_4);
  uVar1 = param_5[1];
  puVar2 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar2 = param_5;
  }
  func_0x00010054c7ec(param_1,4,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (iVar3 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105654eb8; end: 105654ec3;  */

void FUN_105654eb8(int param_1)

{
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105654ec4; end: 105654f17;  */

/* WARNING: Possible PIC construction at 0x000105654ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105654efc) */

void FUN_105654ec4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  func_0x000100867a20(param_1,1,param_2);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  func_0x00010054c7ec(param_1,2,puVar2,uVar1);
  iVar3 = (int)param_1;
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (iVar3 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 105654f18; end: 1056550ef;  */

undefined1 * FUN_105654f18(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(&stack0x00000070);
  func_0x000107c60d94(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 1056550f0; end: 105655163; -[SCGrapheneSnapVideoTranscoderMetric2 init] */

undefined1 * FUN_1056550f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9798;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105655164; end: 1056552d7;  */

char * FUN_105655164(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108a4530,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1056552d8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108a4580,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_10565544c;
  puStack_128 = PTR_PTR_1126e97a0;
  pcStack_130 = pcVar3;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 1056552d8; end: 10565544b;  */

char * FUN_1056552d8(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108a4580,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_10565544c;
  puStack_a8 = PTR_PTR_1126e97a0;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 10565544c; end: 1056554bf; -[SCGrapheneMemoriesBackupMetric2 init] */

undefined1 * FUN_10565544c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e97a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056554c0; end: 10565572f;  */

/* WARNING: Removing unreachable block (ram,0x000105655e90) */

void FUN_1056554c0(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *unaff_x23;
  double dVar10;
  double dVar11;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  char acStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char acStack_148 [24];
  char *pcStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  dVar10 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_88;
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_a8,auStack_88,&lStack_58,2);
    dVar10 = param_1 * 1000.0;
    param_5 = (char *)(long)dVar10;
    pcVar1 = "\x01";
    pcVar5 = acStack_a8;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pcStack_90 = acStack_a8;
    func_0x00010007e5dc(&pcStack_90);
    lVar9 = 0;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_3 = pcVar1;
    pcVar6 = pcVar5;
    pcVar7 = param_5;
    _objc_retain(pcVar1);
    _objc_retain(pcVar5);
    if (pcVar2 != (char *)0x0) {
      plVar8 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_128,pcVar2);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar2 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_110,pcVar2);
      acStack_148[0] = '\0';
      acStack_148[1] = '\0';
      acStack_148[2] = '\0';
      acStack_148[3] = '\0';
      acStack_148[4] = '\0';
      acStack_148[5] = '\0';
      acStack_148[6] = '\0';
      acStack_148[7] = '\0';
      acStack_148[8] = '\0';
      acStack_148[9] = '\0';
      acStack_148[10] = '\0';
      acStack_148[0xb] = '\0';
      acStack_148[0xc] = '\0';
      acStack_148[0xd] = '\0';
      acStack_148[0xe] = '\0';
      acStack_148[0xf] = '\0';
      acStack_148[0x10] = '\0';
      acStack_148[0x11] = '\0';
      acStack_148[0x12] = '\0';
      acStack_148[0x13] = '\0';
      acStack_148[0x14] = '\0';
      acStack_148[0x15] = '\0';
      acStack_148[0x16] = '\0';
      acStack_148[0x17] = '\0';
      func_0x00010007e1e8(acStack_148,auStack_128,&lStack_f8,2);
      param_3 = "";
      unaff_x23 = acStack_148;
      pcVar6 = acStack_148;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      pcStack_130 = unaff_x23;
      func_0x00010007e5dc(&pcStack_130);
      lVar9 = 0;
      pcVar7 = param_5;
      do {
        if ((&cStack_f9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
    }
    _objc_release(pcVar5);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    if (cStack_111 < '\0') {
      __ZdlPv(auStack_128[0]);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = param_3;
    pcVar5 = pcVar6;
    dVar11 = dVar10;
    _objc_retain(param_3);
    _objc_retain(pcVar6);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar6);
      plVar8 = *(long **)(pcVar2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      unaff_x23 = (char *)auStack_1d8;
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1c0,pcVar1);
      acStack_1f8[0] = '\0';
      acStack_1f8[1] = '\0';
      acStack_1f8[2] = '\0';
      acStack_1f8[3] = '\0';
      acStack_1f8[4] = '\0';
      acStack_1f8[5] = '\0';
      acStack_1f8[6] = '\0';
      acStack_1f8[7] = '\0';
      acStack_1f8[8] = '\0';
      acStack_1f8[9] = '\0';
      acStack_1f8[10] = '\0';
      acStack_1f8[0xb] = '\0';
      acStack_1f8[0xc] = '\0';
      acStack_1f8[0xd] = '\0';
      acStack_1f8[0xe] = '\0';
      acStack_1f8[0xf] = '\0';
      acStack_1f8[0x10] = '\0';
      acStack_1f8[0x11] = '\0';
      acStack_1f8[0x12] = '\0';
      acStack_1f8[0x13] = '\0';
      acStack_1f8[0x14] = '\0';
      acStack_1f8[0x15] = '\0';
      acStack_1f8[0x16] = '\0';
      acStack_1f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
      dVar11 = dVar10 * 1000.0;
      pcVar7 = (char *)(long)dVar11;
      pcVar1 = "\x01";
      pcVar5 = acStack_1f8;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      pcStack_1e0 = acStack_1f8;
      func_0x00010007e5dc(&pcStack_1e0);
      lVar9 = 0;
      do {
        if ((&cStack_1a9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
      _objc_release(pcVar6);
      _objc_release(param_3);
    }
    pcVar2 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(pcVar6);
      _objc_release(param_3);
      _objc_release(pcVar6);
      _objc_release(param_3);
      param_3 = pcVar1;
      __Unwind_Resume();
      lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      _objc_retain(pcVar7);
      if (pcVar2 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar5);
        _objc_retain(pcVar7);
        plVar8 = *(long **)(pcVar2 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x00010002b838(acStack_2a0,pcVar1);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar1 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_288,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_270,pcVar1);
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        func_0x00010007e1e8(&uStack_2c0,acStack_2a0,&lStack_258,3);
        (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108a4720,&uStack_2c0,(long)(dVar11 * 1000.0));
        puStack_2a8 = (undefined1 *)&uStack_2c0;
        func_0x00010007e5dc(&puStack_2a8);
        lVar9 = 0;
        unaff_x23 = acStack_2a0;
        do {
          if ((&cStack_259)[lVar9] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar9));
          }
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != -0x48);
        _objc_release(pcVar7);
        _objc_release(pcVar5);
        _objc_release(param_3);
      }
      _objc_release(pcVar7);
      pcVar1 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        do {
          unaff_x23 = unaff_x23 + -0x18;
        } while (unaff_x23 != acStack_2a0);
        _objc_release(pcVar7);
        _objc_release(pcVar5);
        _objc_release(param_3);
        _objc_release(pcVar7);
        _objc_release(pcVar5);
        _objc_release(param_3);
        __Unwind_Resume();
        uVar3 = *(undefined8 *)(pcVar1 + 0x20);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0f9920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105655730; end: 10565595f;  */

/* WARNING: Removing unreachable block (ram,0x000105655e90) */

void FUN_105655730(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *unaff_x23;
  double dVar11;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  char acStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char acStack_148 [24];
  char *pcStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  pcVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar3 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    pcVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar3;
  dVar11 = param_1;
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    _objc_retain(pcVar3);
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_128;
    func_0x00010002b838(auStack_128,pcVar8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar8 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_110,pcVar8);
    acStack_148[0] = '\0';
    acStack_148[1] = '\0';
    acStack_148[2] = '\0';
    acStack_148[3] = '\0';
    acStack_148[4] = '\0';
    acStack_148[5] = '\0';
    acStack_148[6] = '\0';
    acStack_148[7] = '\0';
    acStack_148[8] = '\0';
    acStack_148[9] = '\0';
    acStack_148[10] = '\0';
    acStack_148[0xb] = '\0';
    acStack_148[0xc] = '\0';
    acStack_148[0xd] = '\0';
    acStack_148[0xe] = '\0';
    acStack_148[0xf] = '\0';
    acStack_148[0x10] = '\0';
    acStack_148[0x11] = '\0';
    acStack_148[0x12] = '\0';
    acStack_148[0x13] = '\0';
    acStack_148[0x14] = '\0';
    acStack_148[0x15] = '\0';
    acStack_148[0x16] = '\0';
    acStack_148[0x17] = '\0';
    func_0x00010007e1e8(acStack_148,auStack_128,&lStack_f8,2);
    dVar11 = param_1 * 1000.0;
    pcVar8 = (char *)(long)dVar11;
    pcVar6 = "\x01";
    pcVar7 = acStack_148;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_130 = acStack_148;
    func_0x00010007e5dc(&pcStack_130);
    lVar9 = 0;
    do {
      if ((&cStack_f9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
    _objc_release(pcVar3);
    _objc_release(pcVar1);
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_111 < '\0') {
      __ZdlPv(auStack_128[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar1);
    _objc_release(pcVar3);
    _objc_release(pcVar1);
    pcVar1 = pcVar6;
    __Unwind_Resume();
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar7);
    _objc_retain(pcVar8);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(pcVar1);
      _objc_retain(pcVar7);
      _objc_retain(pcVar8);
      plVar10 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_1f0,pcVar3);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar3 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1d8,pcVar3);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar3 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1c0,pcVar3);
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      func_0x00010007e1e8(&uStack_210,acStack_1f0,&lStack_1a8,3);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108a4720,&uStack_210,(long)(dVar11 * 1000.0));
      puStack_1f8 = (undefined1 *)&uStack_210;
      func_0x00010007e5dc(&puStack_1f8);
      lVar9 = 0;
      unaff_x23 = acStack_1f0;
      do {
        if ((&cStack_1a9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x48);
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      _objc_release(pcVar1);
    }
    _objc_release(pcVar8);
    pcVar3 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x23 = unaff_x23 + -0x18;
      } while (unaff_x23 != acStack_1f0);
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      _objc_release(pcVar1);
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      _objc_release(pcVar1);
      __Unwind_Resume();
      uVar4 = *(undefined8 *)(pcVar3 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0f9920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 105655960; end: 105655bcf;  */

/* WARNING: Removing unreachable block (ram,0x000105655e90) */

void FUN_105655960(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x23;
  double dVar8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [3];
  undefined1 auStack_138 [24];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  dVar8 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_88;
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_a8,auStack_88,&lStack_58,2);
    dVar8 = param_1 * 1000.0;
    param_5 = (char *)(long)dVar8;
    pcVar1 = "\x01";
    pcVar5 = acStack_a8;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pcStack_90 = acStack_a8;
    func_0x00010007e5dc(&pcStack_90);
    lVar7 = 0;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar1;
    __Unwind_Resume();
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_3);
    _objc_retain(pcVar5);
    _objc_retain(param_5);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar5);
      _objc_retain(param_5);
      plVar6 = *(long **)(pcVar2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_150,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_138,pcVar1);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar1 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_120,pcVar1);
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_108,3);
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108a4720,&uStack_170,(long)(dVar8 * 1000.0));
      puStack_158 = (undefined1 *)&uStack_170;
      func_0x00010007e5dc(&puStack_158);
      lVar7 = 0;
      unaff_x23 = auStack_150;
      do {
        if ((&cStack_109)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x48);
      _objc_release(param_5);
      _objc_release(pcVar5);
      _objc_release(param_3);
    }
    _objc_release(param_5);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(param_5);
      do {
        unaff_x23 = unaff_x23 + -3;
      } while (unaff_x23 != auStack_150);
      _objc_release(param_5);
      _objc_release(pcVar5);
      _objc_release(param_3);
      _objc_release(param_5);
      _objc_release(pcVar5);
      _objc_release(param_3);
      __Unwind_Resume();
      uVar3 = *(undefined8 *)(pcVar1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0f9920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105655bd0; end: 105655edf;  */

/* WARNING: Removing unreachable block (ram,0x000105655e90) */

void FUN_105655bd0(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 *unaff_x23;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar4 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108a4720,&uStack_c0,(long)(param_1 * 1000.0));
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar5 = 0;
    unaff_x23 = auStack_a0;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x48);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x23 = unaff_x23 + -0x18;
    } while (unaff_x23 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    uVar2 = *(undefined8 *)(pcVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105655ee0; end: 105655fbb;  */

void FUN_105655ee0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105655fbc; end: 105656193; -[SCFriendshipFlashbacksServiceProvider _createFriendshipFlashbacksDataManagerWithPerformer:networkFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105655fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bc738;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112727164;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112727168;
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272716c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar12);
  lVar8 = lVar12;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112727170;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bfba760();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727174;
  _objc_loadWeakRetained();
  lVar11 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e040(puVar1,param_2,lVar3,lVar5,param_3,param_4,lVar7,lVar8,lVar10,lVar11);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105656194; end: 105656237; -[SCFriendshipFlashbacksServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105656194(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727160);
  _objc_destroyWeak(param_1 + _DAT_112727174);
  _objc_destroyWeak(param_1 + _DAT_112727170);
  _objc_destroyWeak(param_1 + _DAT_11272715c);
  _objc_destroyWeak(param_1 + _DAT_112727158);
  _objc_destroyWeak(param_1 + _DAT_11272716c);
  _objc_destroyWeak(param_1 + _DAT_112727154);
  _objc_destroyWeak(param_1 + _DAT_112727150);
  _objc_destroyWeak(param_1 + _DAT_112727168);
  _objc_destroyWeak(param_1 + _DAT_112727164);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727178);
  return;
}



/* Entry: 105656238; end: 10565635b; -[SCFriendshipFlashbackNetworkFetcher initWithMetadataService:requestModifier:graphene:userTrackedLogger:requestHeaderProvider:] */

undefined1 *
FUN_105656238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e97b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10565635c; end: 1056564af; -[SCFriendshipFlashbackNetworkFetcher networkFetchLastestFriendshipFlashbackWithResultQueue:result:] */

void FUN_10565635c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be36500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be56440(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uVar3 = uVar2;
  func_0x00010c25f600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056564b0; end: 105656607;  */

/* WARNING: Removing unreachable block (ram,0x00010565652c) */

void FUN_1056564b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_5);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_3 == 0) && (param_6 == 0)) {
      ppuVar2 = (undefined **)PTR_PTR_1126bc740;
      func_0x00010c0f40e0(PTR_PTR_1126bc740);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      ppuVar3 = ppuVar2;
      FUN_10565a330(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be53d60(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),ppuVar3,0);
      _objc_release(0);
      _objc_release(ppuVar3);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x20);
      ppuVar2 = &PTR____CFConstantStringClassReference_110df3998;
      FUN_10565a49c(&PTR____CFConstantStringClassReference_110df3998);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar2);
    }
    _objc_release(ppuVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 105656608; end: 10565677f; -[SCFriendshipFlashbackNetworkFetcher _httpRequestForGetChatFeaturedStories] */

void FUN_105656608(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126bc748;
  _objc_opt_new(PTR_PTR_1126bc748);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110de1918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110df3978,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010b6fb1a8();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe02e0(uVar5,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105656780;
  puStack_60 = &UNK_110884ec8;
  uVar7 = uVar4;
  puStack_58 = puVar2;
  func_0x00010bf225e0(uVar4,param_2,1,puVar3,uVar5,puVar6,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105656780; end: 1056567d7;  */

void FUN_105656780(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c2901c0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056567d8; end: 10565681b; -[SCFriendshipFlashbackNetworkFetcher _logNetworkFetchEvent] */

void FUN_1056567d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfabe60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10565681c; end: 1056569fb; -[SCFriendshipFlashbackNetworkFetcher _logGalleryCollectionSyncEventsWithStories:] */

void FUN_10565681c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      puVar3 = PTR_PTR_1126bc750;
      _objc_opt_new(PTR_PTR_1126bc750);
      uVar4 = uVar7;
      func_0x00010bfb25e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1a20(puVar3);
      _objc_release(uVar4);
      uVar4 = uVar7;
      FUN_10565aaac(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1a00(puVar3);
      uVar5 = uVar7;
      func_0x00010bfb2600(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c203cc0(puVar3);
      _objc_release(uVar5);
      func_0x00010c251120(uVar7);
      func_0x00010c162460(puVar3);
      func_0x00010bf95800(uVar7);
      func_0x00010c198c40(puVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1056569fc; end: 105656a4f; -[SCFriendshipFlashbackNetworkFetcher .cxx_destruct] */

void FUN_1056569fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105656a50; end: 105656af7; -[SCFriendshipFlashbackHydratedCacheEntry initWithStorySignature:dataModel:] */

undefined1 *
FUN_105656a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e97b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105656af8; end: 105656aff; -[SCFriendshipFlashbackHydratedCacheEntry storySignature] */

undefined8 FUN_105656af8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105656b00; end: 105656b07; -[SCFriendshipFlashbackHydratedCacheEntry dataModel] */

undefined8 FUN_105656b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105656b08; end: 105656b37; -[SCFriendshipFlashbackHydratedCacheEntry .cxx_destruct] */

void FUN_105656b08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105656b38; end: 105656d37; -[SCFriendshipFlashbacksDataManager initWithNativeMessagingSessionManager:docObjectContext:performer:networkFetcher:conversationIdResolver:userPreferences:friendshipFlashbackPersister:notificationPool:] */

undefined8 *
FUN_105656b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e97c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 10) = 0;
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = 0;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105656d38; end: 105656f33; -[SCFriendshipFlashbacksDataManager friendshipFlashbacksObservableWithChatIdentifier:flashbackId:forceSyncIfMissing:] */

void FUN_105656d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  func_0x00010bedaee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105656f34;
  puStack_a0 = &UNK_1108a4850;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  uVar1 = param_1;
  uStack_90 = param_4;
  uStack_80 = param_5;
  func_0x00010c2656e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_78);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105656f34; end: 105656f7f;  */

void FUN_105656f34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be19aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105656f80; end: 105656fe3;  */

void FUN_105656f80(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be75e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105656fe4; end: 105657003;  */

bool FUN_105656fe4(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 != 0;
}



/* Entry: 105657004; end: 10565700b;  */

void FUN_105657004(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 10565700c; end: 10565719b; -[SCFriendshipFlashbacksDataManager _friendshipFlashbacksObservableWithChatIdentifier:flashbackId:forceSyncIfMissing:] */

void FUN_10565700c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uVar4 = uVar3;
  uStack_60 = param_5;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25ffe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10565719c; end: 105657293;  */

void FUN_10565719c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_48 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105657294; end: 10565754b;  */

void FUN_105657294(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **unaff_x24;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain(param_2);
  lVar8 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb50e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010be11300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar8);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      lVar8 = *(long *)(param_1 + 0x28);
      func_0x00010c08fa60();
      if (lVar8 != 0) {
        _objc_initWeak(auStack_78,param_2);
        lVar8 = param_1 + 0x30;
        _objc_loadWeakRetained();
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_10565754c;
        puStack_a0 = &UNK_1108a4910;
        unaff_x24 = &puStack_b8;
        _objc_copyWeak(auStack_88,param_1 + 0x30);
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar9);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        uStack_98 = uVar9;
        _objc_retain(uVar1);
        puVar7 = auStack_78;
        uStack_90 = uVar1;
        _objc_copyWeak(auStack_80);
        lVar3 = lVar8;
        func_0x00010be11660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        puVar4 = PTR_PTR_1126b0418;
        func_0x00010bf54280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_destroyWeak(auStack_80);
        _objc_release(uStack_90);
        _objc_release(uStack_98);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_78);
        goto LAB_1056574cc;
      }
    }
    func_0x00010bf436e0(param_2);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(puVar4);
    func_0x00010bf436e0(param_2);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1056574cc:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 7);
  _objc_destroyWeak(unaff_x24 + 6);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2 + 0x30;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfb50e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010be11300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar5);
  if (puVar6 != (undefined1 *)0x0) {
    puVar5 = param_2 + 0x38;
    _objc_loadWeakRetained(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  param_2 = param_2 + 0x38;
  _objc_loadWeakRetained();
  func_0x00010bf436e0();
  _objc_release(param_2);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(*(undefined8 *)(puVar7 + 0x20));
    _objc_retain(*(undefined8 *)(puVar7 + 0x28));
    _objc_copyWeak(puVar6 + 0x30,puVar7 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_copyWeak_11034d210)(puVar6 + 0x38,puVar7 + 0x38);
    return;
  }
  return;
}



/* Entry: 10565754c; end: 10565765f;  */

void FUN_10565754c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb50e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be11300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar1);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  func_0x00010bf436e0();
  _objc_release(param_1);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_copyWeak(lVar3 + 0x30,param_2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(lVar3 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 105657660; end: 1056576a3;  */

void FUN_105657660(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 1056576a4; end: 1056576ab;  */

void FUN_1056576a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1056576ac; end: 1056577ff; -[SCFriendshipFlashbacksDataManager observeAllChatMediaFeaturedStories] */

void FUN_1056576ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010bedaee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105657800;
  puStack_70 = &UNK_1108a49a0;
  lVar1 = param_1;
  uStack_68 = uVar4;
  uStack_60 = uVar3;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  lVar2 = lVar1;
  func_0x00010c2656e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105657800; end: 1056578ff;  */

void FUN_105657800(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_10565be50(uVar1,uVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105657900; end: 105657a7b; -[SCFriendshipFlashbacksDataManager observeFullyUnviewedFriendshipFlashbacksInChat:] */

void FUN_105657900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010bedaee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105657a7c;
  puStack_70 = &UNK_110855000;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar1 = param_1;
  uStack_68 = param_3;
  func_0x00010c2656e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105657a7c; end: 105657ac3;  */

void FUN_105657a7c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be66260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105657ac4; end: 105657b27;  */

void FUN_105657ac4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be75e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105657b28; end: 105657ca3; -[SCFriendshipFlashbacksDataManager observeFullyUnviewedFriendshipFlashbacksByConversationId] */

void FUN_105657b28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010bedaee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105657ca4;
  puStack_80 = &UNK_1108a49a0;
  lVar1 = param_1;
  uStack_78 = uVar5;
  uStack_70 = uVar4;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_68);
  lVar2 = lVar1;
  func_0x00010c2656e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105657ca4; end: 105657d7f;  */

void FUN_105657ca4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_10565c86c(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105657d80; end: 105657da7;  */

void FUN_105657d80(undefined8 param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108a4a10,
                      &PTR___NSConcreteGlobalBlock_1108a4a50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105657da8; end: 105657daf;  */

void FUN_105657da8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf50290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversationId_1125b1a48);
  return;
}



/* Entry: 105657db0; end: 105657dd7;  */

void FUN_105657db0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105657dd8; end: 105657fb3; -[SCFriendshipFlashbacksDataManager observePrimaryUnviewedFriendshipFlashbacksByConversationId] */

void FUN_105657dd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar7);
    _objc_initWeak(auStack_68,param_1);
    lVar8 = param_1;
    func_0x00010bedaee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105657fb4;
    puStack_80 = &UNK_1108a49a0;
    lVar1 = lVar8;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_68);
    lVar2 = lVar1;
    func_0x00010c2656e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ad80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar8);
    lVar8 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  else {
    _objc_retain(lVar8);
  }
  _os_unfair_lock_unlock(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105657fb4; end: 10565808f;  */

void FUN_105657fb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_10565cd68(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105658090; end: 1056580b7;  */

void FUN_105658090(undefined8 param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1108a4a90,
                      &PTR___NSConcreteGlobalBlock_1108a4ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056580b8; end: 1056580bf;  */

void FUN_1056580b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf50290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversationId_1125b1a48);
  return;
}



/* Entry: 1056580c0; end: 1056580e7;  */

void FUN_1056580c0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1056580e8; end: 105658223; -[SCFriendshipFlashbacksDataManager _observeFullyUnviewedFriendshipFlashbacksInChat:] */

void FUN_1056580e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf50400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0e0ec0(uVar1,param_2,uVar5,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ffe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105658224; end: 1056582d3;  */

void FUN_105658224(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfb50e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar4;
  FUN_10565c178(uVar4,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056582d4; end: 10565837b; -[SCFriendshipFlashbacksDataManager markFlashbackMessageMediaAsViewedWithFlashbackId:messageConsistentId:mediaId:] */

void FUN_1056582d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10565837c;
  puStack_30 = &UNK_11085adb8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_48,0,0);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}


