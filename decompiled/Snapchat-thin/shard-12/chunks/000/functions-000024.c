/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c5887c; end: 108c588ab;  */

void FUN_108c5887c(void)

{
  undefined1 in_ZR;
  
  func_0x000108c59304();
  if ((bool)in_ZR) {
    func_0x000108c58e98();
    func_0x000108c58f20();
  }
  func_0x000108c58ca0();
  func_0x000108c5997c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c588ac; end: 108c59217;  */

void FUN_108c588ac(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = unaff_x22 + (param_1 & 0xffffffff) * 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  *(char *)(*(long *)(unaff_x20 + 0x90) + 1) = *(char *)(*(long *)(unaff_x20 + 0x90) + 1) + '\x01';
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 108c59218; end: 108c59233;  */

void FUN_108c59218(void)

{
  long unaff_x20;
  long unaff_x29;
  
  FUN_108c4ea14(unaff_x20 + 8,unaff_x29 + -0x100);
  func_0x000108c442b4(unaff_x29 + -0x100);
  FUN_108c41c24();
  return;
}



/* Entry: 108c59234; end: 108c59dbf;  */

void FUN_108c59234(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000108c5923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108c59dc0; end: 108c59f73;  */

void FUN_108c59dc0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  long lStack_168;
  long lStack_158;
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 auStack_120 [24];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_e8 [32];
  undefined1 *puStack_c8;
  long alStack_b8 [14];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_168 = *(long *)(param_2 + 0x30);
  uStack_170 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      FUN_108c5ba30();
    } while (extraout_w10 != 0);
  }
  puVar1 = auStack_188;
  func_0x000107c278b8(puVar1,&UNK_10f50e2cd);
  uStack_138 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000107c3a5c0();
  lStack_128 = lStack_168;
  uStack_130 = uStack_170;
  if (lStack_168 != 0) {
    do {
      FUN_108c5ba30();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108c5bdac(auStack_120);
  lStack_108 = param_2;
  lStack_100 = param_2;
  lStack_f8 = param_2;
  func_0x00010724cbe8(auStack_e8,auStack_150);
  puStack_c8 = puVar1;
  FUN_108c5a8a0(alStack_b8,&uStack_130);
  FUN_108c5a7f4(&lStack_158);
  func_0x000108c5a7c4(alStack_b8);
  func_0x000108c5a7c4(&uStack_130);
  alStack_b8[0] = lStack_158;
  if (lStack_158 != 0) {
    do {
      func_0x000108c5ba90();
    } while (extraout_w10_01 != 0);
  }
  FUN_108c4f0a0(param_1,alStack_b8);
  func_0x000107c27f9c(alStack_b8);
  func_0x000107c27f9c(&lStack_158);
  func_0x000107c27938(auStack_150);
  func_0x000108c5bb54();
  func_0x000108c4cad0(&uStack_170);
  func_0x000108c5bb64(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27f9c(alStack_b8);
    func_0x000107c27f9c(&lStack_158);
    func_0x000107c27938(auStack_150);
    func_0x000108c5bb54();
    do {
      func_0x000108c4cad0(&uStack_170);
      func_0x000108c5bbf4();
    } while( true );
  }
  return;
}



/* Entry: 108c59f74; end: 108c5a1bb;  */

void FUN_108c59f74(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_c8 [16];
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long alStack_68 [6];
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000108c5bc8c();
  if (extraout_x8 == 0) {
    uStack_98 = *(undefined8 *)(param_2 + 0x30);
    uStack_a0 = *(undefined8 *)(param_2 + 0x28);
    if (*(long *)(param_2 + 0x30) != 0) {
      do {
        func_0x000108c5ba30();
      } while (extraout_w10 != 0);
    }
    func_0x000107c278b8(alStack_b8,&UNK_10f50e2cd);
    FUN_108c4ed60(&uStack_a0,alStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_b8);
    func_0x000108c4cad0(&uStack_a0);
  }
  else {
    FUN_108c59dc0(auStack_c8);
    alStack_b8[0] = 0;
    alStack_b8[1] = 0;
    alStack_68[1] = 0;
    alStack_68[2] = 0;
    func_0x000108c5bcb8();
    FUN_108c40af4(alStack_b8,alStack_68 + 3);
    func_0x000108c5bd54();
    func_0x000108c5bd4c();
    FUN_108c40008(alStack_68);
    FUN_108c40034(alStack_68 + 3,alStack_68[0]);
    unaff_x20 = alStack_68[0];
    alStack_68[0] = 0;
    lStack_30 = unaff_x20;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_88 = alStack_b8[0] + 0x50;
    lStack_80 = CONCAT71(lStack_80._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    lVar3 = alStack_b8[0];
    FUN_108c42ea8();
    if ((int)lVar3 == 0) {
      puVar1 = (undefined8 *)0x18;
      __Znwm();
      *puVar1 = &PTR_FUN_110abad30;
      lStack_30 = 0;
      puVar1[2] = unaff_x20;
      lVar3 = *(long *)(alStack_b8[0] + 0x98);
      *(undefined8 **)(alStack_b8[0] + 0x98) = puVar1;
      if (lVar3 != 0) {
        func_0x000108c5bce0();
      }
      unaff_x20 = 0;
    }
    else {
      FUN_108c40af4(&lStack_78,alStack_b8);
    }
    func_0x000107c2798c(&lStack_88);
    if (lStack_78 != 0) {
      lStack_88 = lStack_78;
      lStack_80 = lStack_70;
      if (lStack_70 != 0) {
        do {
          func_0x000108c5ba30();
        } while (extraout_w10_00 != 0);
      }
      FUN_108c5a480(auStack_38);
      func_0x000108c3ff9c(&lStack_88);
    }
    unaff_x19[1] = alStack_68[4];
    *unaff_x19 = alStack_68[3];
    alStack_68[3] = 0;
    alStack_68[4] = 0;
    func_0x000108c3ff9c(&lStack_78);
    if (unaff_x20 != 0) {
      func_0x000108c5baa0();
    }
    plVar2 = alStack_68 + 3;
    func_0x000108c3ff78();
    func_0x000108c5bf38();
    if (plVar2 != (long *)0x0) {
      func_0x000108c5bafc();
    }
    func_0x000108c5bd78();
    func_0x000108c5bb4c();
  }
  func_0x000108c5bb64(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c2798c(&lStack_88);
    func_0x000108c3ff9c(&lStack_78);
    lStack_30 = 0;
    if (unaff_x20 != 0) {
      func_0x000108c5baa0();
    }
    plVar2 = alStack_68 + 3;
    func_0x000108c3ff78();
    func_0x000108c5bf38();
    if (plVar2 != (long *)0x0) {
      func_0x000108c5bafc();
    }
    func_0x000108c5bd78();
    func_0x000108c5bb4c();
    do {
      func_0x000108c5bbf4();
    } while( true );
  }
  return;
}



/* Entry: 108c5a1bc; end: 108c5a467;  */

long * FUN_108c5a1bc(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  long alStack_d0 [3];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined8 uStack_28;
  
  func_0x000108c5bc8c();
  if (extraout_x8 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c278b8(auStack_a0,&UNK_10f50e2eb);
    func_0x000107c278b8(auStack_b8,&UNK_10f50e1bf);
    FUN_108c6c28c(uVar4,auStack_a0,auStack_b8,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    plVar5 = &lStack_50;
    FUN_108c4f060(&lStack_50);
    alStack_d0[0] = 0;
    alStack_d0[1] = 0;
    alStack_d0[2] = 0;
    FUN_108c4f090(alStack_48,alStack_d0);
    func_0x000108c5be28();
    lStack_d8 = lStack_50;
    if (lStack_50 != 0) {
      do {
        func_0x000108c5ba90();
      } while (extraout_w10 != 0);
    }
    FUN_108c4f0a0(&lStack_d8);
    func_0x000107c27f9c(&lStack_d8);
    plVar1 = &lStack_50;
    FUN_108c4ff78();
  }
  else {
    FUN_108c59dc0(auStack_e8);
    alStack_d0[0] = 0;
    alStack_d0[1] = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x000108c5bcb8();
    FUN_108c40af4(alStack_d0,&lStack_50);
    func_0x000108c5bd54();
    func_0x000108c5bd4c();
    FUN_108c406b8(&plStack_68);
    FUN_108c406e4(&lStack_50,plStack_68);
    plVar5 = plStack_68;
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    plStack_30 = plVar5;
    lStack_78 = 0;
    lStack_88 = alStack_d0[0] + 0x50;
    lStack_80 = CONCAT71(lStack_80._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    lVar3 = alStack_d0[0];
    FUN_108c42ea8();
    if ((int)lVar3 == 0) {
      puVar2 = (undefined8 *)0x18;
      __Znwm();
      *puVar2 = &PTR_FUN_110abad70;
      plStack_30 = (long *)0x0;
      puVar2[2] = plVar5;
      lVar3 = *(long *)(alStack_d0[0] + 0x98);
      *(undefined8 **)(alStack_d0[0] + 0x98) = puVar2;
      if (lVar3 != 0) {
        func_0x000108c5bce0();
      }
      plVar5 = (long *)0x0;
    }
    else {
      FUN_108c40af4(&lStack_78,alStack_d0);
    }
    func_0x000107c2798c(&lStack_88);
    if (lStack_78 != 0) {
      lStack_88 = lStack_78;
      lStack_80 = lStack_70;
      if (lStack_70 != 0) {
        do {
          func_0x000108c5ba30();
        } while (extraout_w10_00 != 0);
      }
      FUN_108c5a5f8(auStack_38);
      func_0x000108c3ff9c(&lStack_88);
    }
    unaff_x19[1] = alStack_48[0];
    *unaff_x19 = lStack_50;
    lStack_50 = 0;
    alStack_48[0] = 0;
    plVar1 = &lStack_78;
    func_0x000108c3ff9c();
    if (plVar5 != (long *)0x0) {
      func_0x000108c5baa0();
    }
    func_0x000108c5bd54();
    func_0x000108c5bf38();
    if (plVar1 != (long *)0x0) {
      func_0x000108c5bafc();
    }
    func_0x000108c5bd08();
    func_0x000108c5bb4c();
  }
  func_0x000108c5bb64(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c2798c(&lStack_88);
    plVar1 = &lStack_78;
    func_0x000108c3ff9c();
    plStack_30 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      func_0x000108c5baa0();
    }
    func_0x000108c5bd54();
    func_0x000108c5bf38();
    if (plVar1 != (long *)0x0) {
      func_0x000108c5bafc();
    }
    func_0x000108c5bd08();
    func_0x000108c5bb4c();
    func_0x000108c5bbf4();
    *plVar1 = (long)&PTR_FUN_110abace8;
    func_0x000108c4cad0(plVar1 + 5);
    func_0x000108c4caf4(plVar1 + 3);
    func_0x000108c4b58c(plVar1 + 1);
    return plVar1;
  }
  return plVar1;
}



/* Entry: 108c5a468; end: 108c5a46b;  */

undefined8 * FUN_108c5a468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abace8;
  func_0x000108c4cad0(param_1 + 5);
  func_0x000108c4caf4(param_1 + 3);
  func_0x000108c4b58c(param_1 + 1);
  return param_1;
}



/* Entry: 108c5a46c; end: 108c5a47f;  */

void FUN_108c5a46c(void)

{
  FUN_108c5a780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5a480; end: 108c5a573;  */

void FUN_108c5a480(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [80];
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (param_3 != 0) {
    do {
      FUN_108c5ba30();
    } while (extraout_w10 != 0);
    do {
      FUN_108c5ba30();
    } while (extraout_w10_00 != 0);
  }
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  FUN_108c43230(auStack_48,&uStack_a8);
  FUN_108c6b1bc(auStack_98,auStack_48);
  func_0x000108c5be70();
  func_0x000108c4006c(uVar1,auStack_98);
  FUN_108c40698(auStack_98);
  func_0x000108c5bd78();
  func_0x000108c5bb4c();
  return;
}



/* Entry: 108c5a574; end: 108c5a59f;  */

undefined8 * FUN_108c5a574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abad30;
  FUN_108c40088(param_1 + 2);
  return param_1;
}



/* Entry: 108c5a5a0; end: 108c5a5b3;  */

void FUN_108c5a5a0(void)

{
  FUN_108c5a574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5a5b4; end: 108c5a5f7;  */

void FUN_108c5a5b4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108c5bef8();
  if (param_3 != 0) {
    do {
      func_0x000108c5ba30();
    } while (extraout_w10 != 0);
  }
  FUN_108c5a480(param_1 + 8);
  func_0x000108c5bd10();
  return;
}



/* Entry: 108c5a5f8; end: 108c5a6fb;  */

void FUN_108c5a5f8(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_80 = param_2;
  lStack_78 = param_3;
  if (param_3 != 0) {
    do {
      FUN_108c5ba30();
    } while (extraout_w10 != 0);
    do {
      FUN_108c5ba30();
    } while (extraout_w10_00 != 0);
  }
  uStack_70 = param_2;
  lStack_68 = param_3;
  FUN_108c43230(auStack_48,&uStack_70);
  FUN_108c6b230(auStack_60,auStack_48);
  func_0x000108c5be70();
  func_0x000108c4071c(uVar1,auStack_60);
  FUN_108c41168(auStack_60);
  func_0x000108c5bd08();
  func_0x000108c3ff9c(&uStack_80);
  return;
}



/* Entry: 108c5a6fc; end: 108c5a727;  */

undefined8 * FUN_108c5a6fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abad70;
  FUN_108c40738(param_1 + 2);
  return param_1;
}



/* Entry: 108c5a728; end: 108c5a73b;  */

void FUN_108c5a728(void)

{
  FUN_108c5a6fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5a73c; end: 108c5a77f;  */

void FUN_108c5a73c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108c5bef8();
  if (param_3 != 0) {
    do {
      func_0x000108c5ba30();
    } while (extraout_w10 != 0);
  }
  FUN_108c5a5f8(param_1 + 8);
  func_0x000108c5bd10();
  return;
}



/* Entry: 108c5a780; end: 108c5a7f3;  */

undefined8 * FUN_108c5a780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abace8;
  func_0x000108c4cad0(param_1 + 5);
  func_0x000108c4caf4(param_1 + 3);
  func_0x000108c4b58c(param_1 + 1);
  return param_1;
}



/* Entry: 108c5a7f4; end: 108c5a89f;  */

void FUN_108c5a7f4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  *puVar1 = FUN_108c5b8c0;
  puVar1[1] = FUN_108c5b9f8;
  FUN_108c5a8a0(puVar1 + 4,param_1);
  FUN_108c51188(puVar1 + 2);
  func_0x000108c5be64();
  puVar1[0x12] = param_2;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0,puVar1);
  return;
}



/* Entry: 108c5a8a0; end: 108c5a903;  */

undefined8 * FUN_108c5a8a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  func_0x000105302f48(param_1 + 9,param_2 + 9);
  param_1[0xd] = param_2[0xd];
  return param_1;
}



/* Entry: 108c5a904; end: 108c5af13;  */

void FUN_108c5a904(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *plVar11;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long extraout_x8_10;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w10_10;
  long extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar12;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 auStack_68 [24];
  
  puVar6 = (undefined8 *)0x130;
  __Znwm();
  *puVar6 = FUN_108c5b348;
  puVar6[1] = FUN_108c5b864;
  puVar6[0x24] = param_1;
  FUN_108c51188(puVar6 + 2);
  func_0x000108c5be64();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x28))(puVar6 + 0x22);
  puVar6[4] = puVar6[0x22];
  do {
    func_0x000108c5ba90();
  } while (extraout_w10 != 0);
  func_0x000108c5bb78(puVar6[4]);
  ppuVar7 = &PTR___tlv_bootstrap_11340e278;
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x25) = 0;
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    puVar15 = *ppuVar7;
    if (puVar15 == (undefined *)0x0) {
      func_0x000107c3a5c0();
      puVar15 = *ppuVar7;
    }
    func_0x000108c5bda0();
    plVar8 = extraout_x8;
    do {
      if (*plVar8 == 0) {
        func_0x000108c5bac0();
        plVar8 = extraout_x8_01;
        uVar4 = extraout_w10_01;
        uVar12 = extraout_x11_00;
      }
      else {
        func_0x000108c5bcac();
        plVar8 = extraout_x8_00;
        uVar4 = extraout_w10_00;
        uVar12 = extraout_x11;
      }
      if ((uVar12 & 1) != 0) {
        func_0x000108c5bb94();
        if ((bool)in_ZR) {
          func_0x000108c5bad0();
          iVar1 = extraout_w8_00;
          if ((bool)in_CY) {
            iVar1 = extraout_w9;
          }
          puVar9 = (undefined1 *)(ulong)(iVar1 * 0x18 + 0x10);
          _malloc();
          *puVar9 = (char)iVar1;
          puVar9[1] = 0;
          *(undefined8 *)(puVar9 + 8) = 0;
          func_0x000108c5bd90(0);
        }
        func_0x000108c5bd80();
        *(undefined **)(extraout_x8_02 + 0x20) = puVar15;
        goto LAB_108c5ad1c;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar14 = puVar6 + 4;
  FUN_108c51150(puVar14);
  FUN_108c41f1c(puVar6 + 8,puVar14);
  lVar13 = puVar6[0x24];
  func_0x000108c5bc04();
  func_0x000108c5baf4();
  puVar14 = (undefined8 *)(lVar13 + 0x10);
  func_0x000108c5bba8(puVar6 + 0xb);
  func_0x000108c5bebc();
  func_0x000108c5bdb4();
  plVar8 = puVar6 + 0xb;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000108c5be9c();
  if (!(bool)in_ZR) {
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x000108c5bc6c();
    if ((bool)in_NG) {
      func_0x000108c5bba8(puVar6 + 0x11);
      func_0x000108c5bd3c();
      plVar8 = puVar6 + 0x11;
    }
    else {
      func_0x000108c5bba8(puVar6 + 0xe);
      func_0x000108c5bd2c();
      plVar8 = puVar6 + 0xe;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000108c5be9c();
    if (!(bool)in_ZR) {
      plVar8 = puVar6 + 8;
      FUN_108c6b380();
      if ((((ulong)plVar8 & 1) == 0) && (puVar6[8] != puVar6[9])) {
        func_0x000108c5be0c();
        lVar13 = lRam000000011340e280;
        puVar15 = PTR___tlv_bootstrap_11340e278;
        puVar6[0x1b] = lRam000000011340e280;
        puVar6[0x1a] = puVar15;
        if (lVar13 != 0) {
          do {
            func_0x000108c5ba30();
          } while (extraout_w10_02 != 0);
        }
        func_0x000108c5bdcc();
        func_0x000108c4cad0(puVar6 + 0x1a);
        func_0x000108c5be58();
        goto LAB_108c5ace8;
      }
    }
  }
  func_0x000108c5bea8();
  lVar13 = extraout_x9;
  if (extraout_x10 != 0) {
    plVar11 = (long *)(extraout_x10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar13 = puVar6[9];
  }
  uVar5 = extraout_x8_03 == lVar13;
  func_0x000108c5be90();
  func_0x000108c5bdd8();
  func_0x000108c5be78();
  func_0x000108c5bbb0();
  do {
    func_0x000108c5ba90();
  } while (extraout_w10_03 != 0);
  func_0x000108c5bb78(puVar6[0x22]);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x000108c5ba50(1);
    lVar13 = *plVar8;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar8;
    }
    func_0x000108c5bda0();
    plVar8 = extraout_x8_04;
    do {
      if (*plVar8 == 0) {
        func_0x000108c5bac0();
        plVar8 = extraout_x8_06;
        uVar4 = extraout_w10_05;
        uVar12 = extraout_x11_02;
      }
      else {
        func_0x000108c5bcac();
        plVar8 = extraout_x8_05;
        uVar4 = extraout_w10_04;
        uVar12 = extraout_x11_01;
      }
      if ((uVar12 & 1) != 0) {
        func_0x000108c5bb94();
        if ((bool)uVar5) {
          func_0x000108c5bad0();
          func_0x000108c5ba40();
          func_0x000108c5ba64();
          func_0x000108c5bd90();
        }
        func_0x000108c5bd80();
        *(long *)(extraout_x8_10 + 0x20) = lVar13;
        goto LAB_108c5ad1c;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar10 = puVar6 + 0x22;
  FUN_108c51850(puVar10);
  plVar8 = puVar6 + 4;
  FUN_108c51e68(plVar8,puVar10);
  func_0x000108c5baf4();
  func_0x000108c5bb08();
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108c5bf20();
  if ((bool)uVar5) {
    func_0x000108c5bee4();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000108c5ba30();
      } while (extraout_w10_06 != 0);
    }
    func_0x000108c5be38();
    func_0x000108c5bd18();
  }
  else {
    FUN_108c51960(auStack_68,*(undefined4 *)(puVar6 + 7));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar6 + 0x14,puVar6[0x24] + 0x10);
    plVar8 = puVar6 + 0x17;
    func_0x000108c5bdac();
    func_0x000108c5bc14();
    puVar14 = (undefined8 *)puVar6[0x24];
    func_0x000108c5bcf8();
    func_0x000108c5bd00();
    lVar13 = puVar14[1];
    uVar16 = *puVar14;
    puVar6[0x21] = puVar14[1];
    puVar6[0x20] = uVar16;
    if (lVar13 != 0) {
      do {
        func_0x000108c5ba30();
      } while (extraout_w10_07 != 0);
    }
    func_0x000108c5bdf0(puVar6[0x24]);
    func_0x000108c5bcd8();
    func_0x000108c5bb54();
  }
  func_0x000108c5bf20();
  if (((bool)uVar5) && (uVar5 = puVar6[4] == puVar6[5], !(bool)uVar5)) {
    func_0x000108c5bde4();
    func_0x000108c5bed0();
    func_0x000108c5be84();
    func_0x000108c5bbb0();
    do {
      func_0x000108c5ba90();
    } while (extraout_w10_08 != 0);
    func_0x000108c5bb78(puVar6[0x22]);
    if ((extraout_w8_02 >> 1 & 1) == 0) {
      func_0x000108c5ba50(2);
      if (*plVar8 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c5bda0();
      plVar11 = extraout_x8_07;
      do {
        if (*plVar11 == 0) {
          func_0x000108c5bac0();
          plVar11 = extraout_x8_09;
          uVar4 = extraout_w10_10;
          uVar12 = extraout_x11_04;
        }
        else {
          func_0x000108c5bcac();
          plVar11 = extraout_x8_08;
          uVar4 = extraout_w10_09;
          uVar12 = extraout_x11_03;
        }
        if ((uVar12 & 1) != 0) {
          func_0x000108c5bb84();
          if ((bool)uVar5) {
            func_0x000108c5bad0();
            func_0x000108c5ba40();
            func_0x000108c5ba64();
            func_0x000108c5bf2c();
            puVar14[0x12] = plVar8;
          }
          func_0x000108c5bf0c();
LAB_108c5ad1c:
          func_0x000108c5bd5c();
          return;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar6 + 0x22);
    lVar13 = puVar6[0x24];
    func_0x000108c5baf4();
    func_0x000108c5bb08();
    if (*(long *)(lVar13 + 0x60) != 0) {
      func_0x000104c003e8(puVar6[0x24] + 0x48);
    }
  }
  func_0x000108c5be4c();
  func_0x000108c5bbfc();
LAB_108c5ace8:
  func_0x000108c5bc0c();
  func_0x000108c5bb10();
  func_0x000108c5bb5c();
  return;
}



/* Entry: 108c5af14; end: 108c5b16b;  */

void FUN_108c5af14(undefined8 param_1,long *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar7 = *param_2;
  puVar3 = (undefined8 *)0xa0;
  __Znwm();
  *puVar3 = FUN_108c5b18c;
  puVar3[1] = FUN_108c5b31c;
  func_0x000108c51c1c(puVar3 + 2);
  FUN_108c51b80(param_1,puVar3 + 2);
  plVar4 = *(long **)(lVar7 + 0x18);
  (**(code **)(*plVar4 + 0x10))(puVar3 + 0x12);
  puVar3[0x11] = puVar3[0x12];
  do {
    func_0x000108c5ba90();
  } while (extraout_w10 != 0);
  func_0x000108c5bb78(puVar3[0x11]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0x13) = 0;
    lVar7 = puVar3[0x11];
    func_0x000108c5bcc8();
    if (*plVar4 == 0) {
      func_0x000107c3a5c0();
    }
    plVar5 = (long *)(lVar7 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x000108c5bac0();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x000108c5bcac();
        plVar5 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x000108c5bb84();
        if ((bool)in_ZR) {
          func_0x000108c5bad0();
          func_0x000108c5ba40();
          func_0x000108c5ba64();
          func_0x000108c5bf2c();
          *(long **)(lVar7 + 0x90) = plVar4;
        }
        func_0x000108c5bb18();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108c5bb78(puVar3[0x11]);
  lVar7 = puVar3[0x11];
  if ((extraout_w8_00 >> 5 & 1) == 0) {
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    if (*(char *)(lVar7 + 0xc0) == '\x01') {
      FUN_108c6ce90(puVar3 + 4,0,lVar7 + 0x98);
      *(undefined1 *)(puVar3 + 9) = 1;
    }
    *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(lVar7 + 200);
    func_0x000107c27f9c(puVar3 + 0x11);
    func_0x000108c5bbd8();
    if (*(char *)(puVar3 + 9) == '\x01') {
      FUN_108c6ac70(&uStack_60,puVar3 + 4);
      uStack_70 = uStack_50;
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      uStack_68 = *(undefined4 *)(puVar3 + 10);
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xb] = 0;
      func_0x000108c5bc3c();
      FUN_108c41168(&uStack_80);
      FUN_108c41168(puVar3 + 0xb);
      puVar3 = &uStack_60;
    }
    else {
      uStack_68 = *(undefined4 *)(puVar3 + 10);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0xe] = 0;
      func_0x000108c5bc3c();
      FUN_108c41168(&uStack_80);
      puVar3 = puVar3 + 0xe;
    }
    FUN_108c41168(puVar3);
    func_0x000108c5bdfc();
    func_0x000108c5bb10();
    func_0x000108c5bb5c();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&uStack_80,lVar7 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_80);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108c5b114);
  (*pcVar2)();
}



/* Entry: 108c5b16c; end: 108c5b18b;  */

void FUN_108c5b16c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_108c6cefc();
  }
  return;
}



/* Entry: 108c5b18c; end: 108c5b31b;  */

void FUN_108c5b18c(long param_1)

{
  code *pcVar1;
  uint extraout_w8;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar3 = &uStack_80;
  plVar2 = (long *)(param_1 + 0x88);
  func_0x000108c5bb78(*plVar2);
  lVar4 = *plVar2;
  if ((extraout_w8 >> 5 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    if (*(char *)(lVar4 + 0xc0) == '\x01') {
      FUN_108c6ce90(param_1 + 0x20,0,lVar4 + 0x98);
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar4 + 200);
    func_0x000107c27f9c(plVar2);
    func_0x000107c27f9c(param_1 + 0x90);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      FUN_108c6ac70(&uStack_80,param_1 + 0x20);
      uStack_50 = uStack_70;
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_48 = *(undefined4 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      func_0x000108c5bc50();
      func_0x000108c5be28();
      FUN_108c41168((undefined8 *)(param_1 + 0x58));
    }
    else {
      puVar3 = (undefined8 *)(param_1 + 0x70);
      uStack_48 = *(undefined4 *)(param_1 + 0x50);
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *puVar3 = 0;
      func_0x000108c5bc50();
      func_0x000108c5be28();
    }
    FUN_108c41168(puVar3);
    func_0x000108c5be18();
    func_0x000107c27fb8(param_1 + 0x10);
    func_0x000108c5bb5c();
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(&uStack_60,lVar4 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c5b2c8);
  (*pcVar1)();
}



/* Entry: 108c5b31c; end: 108c5b347;  */

void FUN_108c5b31c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x88);
  func_0x000108c5bbd8();
  func_0x000108c5bb10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5b348; end: 108c5b863;  */

void FUN_108c5b348(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  uint uVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar8;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  long extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar9;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  undefined8 *unaff_x21;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  uVar7 = (uint)*(byte *)(param_1 + 0x128);
  if (uVar7 == 2) {
LAB_108c5b61c:
    func_0x000107c28834(param_1 + 0x110);
    lVar10 = *(long *)(param_1 + 0x120);
    func_0x000108c5baf4();
    func_0x000108c5bb08();
    if (*(long *)(lVar10 + 0x60) != 0) {
      func_0x000104c003e8(*(long *)(param_1 + 0x120) + 0x48);
    }
  }
  else {
    uVar4 = (int)(uVar7 - 1) < 0;
    uVar5 = uVar7 == 1;
    if (!(bool)uVar5) {
      lVar10 = param_1 + 0x20;
      FUN_108c51150(lVar10);
      FUN_108c41f1c(param_1 + 0x40,lVar10);
      lVar10 = *(long *)(param_1 + 0x120);
      func_0x000108c5bc04();
      func_0x000108c5baf4();
      unaff_x21 = (undefined8 *)(lVar10 + 0x10);
      func_0x000108c5bba8(param_1 + 0x58);
      func_0x000108c5bebc();
      func_0x000108c5bdb4();
      plVar6 = (long *)(param_1 + 0x58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x000108c5be9c();
      if (!(bool)uVar5) {
        __ZNSt3__16chrono12system_clock3nowEv();
        func_0x000108c5bc6c();
        if ((bool)uVar4) {
          func_0x000108c5bba8((long *)(param_1 + 0x88U));
          func_0x000108c5bd3c();
          plVar6 = (long *)(param_1 + 0x88U);
        }
        else {
          func_0x000108c5bba8((long *)(param_1 + 0x70U));
          func_0x000108c5bd2c();
          plVar6 = (long *)(param_1 + 0x70U);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x000108c5be9c();
        if (!(bool)uVar5) {
          plVar6 = (long *)(param_1 + 0x40);
          FUN_108c6b380();
          if ((((ulong)plVar6 & 1) == 0) && (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48))
             ) {
            func_0x000108c5be0c();
            lVar10 = lRam000000011340e280;
            puVar3 = PTR___tlv_bootstrap_11340e278;
            *(long *)(param_1 + 0xd8) = lRam000000011340e280;
            *(undefined **)(param_1 + 0xd0) = puVar3;
            if (lVar10 != 0) {
              do {
                func_0x000108c5ba30();
              } while (extraout_w10 != 0);
            }
            func_0x000108c5bdcc();
            func_0x000108c4cad0(param_1 + 0xd0);
            func_0x000108c5be58();
            goto LAB_108c5b64c;
          }
        }
      }
      func_0x000108c5bea8();
      lVar10 = extraout_x9;
      if (extraout_x10 != 0) {
        plVar8 = (long *)(extraout_x10 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar10 = *(long *)(param_1 + 0x48);
      }
      uVar5 = extraout_x8 == lVar10;
      func_0x000108c5be90();
      func_0x000108c5bdd8();
      func_0x000108c5be78();
      func_0x000108c5bbb0();
      do {
        func_0x000108c5ba90();
      } while (extraout_w10_00 != 0);
      func_0x000108c5bb78(*(undefined8 *)(param_1 + 0x110));
      if ((extraout_w8 >> 1 & 1) == 0) {
        func_0x000108c5ba50(1);
        lVar10 = *plVar6;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar6;
        }
        func_0x000108c5bda0();
        plVar6 = extraout_x8_00;
        do {
          if (*plVar6 == 0) {
            func_0x000108c5bac0();
            plVar6 = extraout_x8_02;
            uVar7 = extraout_w10_02;
            uVar9 = extraout_x11_00;
          }
          else {
            func_0x000108c5bcac();
            plVar6 = extraout_x8_01;
            uVar7 = extraout_w10_01;
            uVar9 = extraout_x11;
          }
          if ((uVar9 & 1) != 0) {
            func_0x000108c5bb94();
            if ((bool)uVar5) {
              func_0x000108c5bad0();
              func_0x000108c5ba40();
              func_0x000108c5ba64();
              func_0x000108c5bd90();
            }
            func_0x000108c5bd80();
            *(long *)(extraout_x8_06 + 0x20) = lVar10;
            goto LAB_108c5b6b0;
          }
        } while ((uVar7 >> 1 & 1) == 0);
      }
    }
    lVar10 = param_1 + 0x110;
    FUN_108c51850(lVar10);
    plVar6 = (long *)(param_1 + 0x20);
    FUN_108c51e68(plVar6,lVar10);
    func_0x000108c5baf4();
    func_0x000108c5bb08();
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000108c5bf20();
    if ((bool)uVar5) {
      func_0x000108c5bee4();
      if (extraout_x9_00 != 0) {
        do {
          func_0x000108c5ba30();
        } while (extraout_w10_03 != 0);
      }
      func_0x000108c5be38();
      func_0x000108c5bd18();
    }
    else {
      FUN_108c51960(auStack_68,*(undefined4 *)(param_1 + 0x38));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (param_1 + 0xa0,*(long *)(param_1 + 0x120) + 0x10);
      plVar6 = (long *)(param_1 + 0xb8);
      func_0x000108c5bdac();
      func_0x000108c5bc14();
      unaff_x21 = *(undefined8 **)(param_1 + 0x120);
      func_0x000108c5bcf8();
      func_0x000108c5bd00();
      lVar10 = unaff_x21[1];
      uVar11 = *unaff_x21;
      *(undefined8 *)(param_1 + 0x108) = unaff_x21[1];
      *(undefined8 *)(param_1 + 0x100) = uVar11;
      if (lVar10 != 0) {
        do {
          func_0x000108c5ba30();
        } while (extraout_w10_04 != 0);
      }
      func_0x000108c5bdf0(*(undefined8 *)(param_1 + 0x120));
      func_0x000108c5bcd8();
      func_0x000108c5bb54();
    }
    func_0x000108c5bf20();
    if (((bool)uVar5) &&
       (uVar5 = *(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28), !(bool)uVar5)) {
      func_0x000108c5bde4();
      func_0x000108c5bed0();
      func_0x000108c5be84();
      func_0x000108c5bbb0();
      do {
        func_0x000108c5ba90();
      } while (extraout_w10_05 != 0);
      func_0x000108c5bb78(*(undefined8 *)(param_1 + 0x110));
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        func_0x000108c5ba50(2);
        if (*plVar6 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c5bda0();
        plVar8 = extraout_x8_03;
        do {
          if (*plVar8 == 0) {
            func_0x000108c5bac0();
            plVar8 = extraout_x8_05;
            uVar7 = extraout_w10_07;
            uVar9 = extraout_x11_02;
          }
          else {
            func_0x000108c5bcac();
            plVar8 = extraout_x8_04;
            uVar7 = extraout_w10_06;
            uVar9 = extraout_x11_01;
          }
          if ((uVar9 & 1) != 0) {
            func_0x000108c5bb84();
            if ((bool)uVar5) {
              func_0x000108c5bad0();
              func_0x000108c5ba40();
              func_0x000108c5ba64();
              func_0x000108c5bf2c();
              unaff_x21[0x12] = plVar6;
            }
            func_0x000108c5bf0c();
LAB_108c5b6b0:
            func_0x000108c5bd5c();
            return;
          }
        } while ((uVar7 >> 1 & 1) == 0);
      }
      goto LAB_108c5b61c;
    }
  }
  func_0x000108c5be4c();
  func_0x000108c5bbfc();
LAB_108c5b64c:
  func_0x000108c5bc0c();
  func_0x000108c5bb10();
  func_0x000108c5bb5c();
  return;
}



/* Entry: 108c5b864; end: 108c5b8bf;  */

void FUN_108c5b864(long param_1)

{
  if (*(char *)(param_1 + 0x128) == '\0') {
    func_0x000108c5bc04();
    func_0x000108c5baf4();
  }
  else {
    if (*(char *)(param_1 + 0x128) == '\x01') {
      func_0x000107c27f9c(param_1 + 0x110);
      func_0x000108c5bb08();
    }
    else {
      func_0x000107c27f9c(param_1 + 0x110);
      func_0x000108c5bb08();
      func_0x000108c5bbfc();
    }
    func_0x000108c5bc0c();
  }
  func_0x000108c5bb10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5b8c0; end: 108c5b9f7;  */

void FUN_108c5b8c0(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c5a904(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x98);
    do {
      func_0x000108c5ba90();
    } while (extraout_w10 != 0);
    func_0x000108c5bb78(*(undefined8 *)(param_1 + 0x90));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xa0) = 1;
      lVar5 = *(long *)(param_1 + 0x90);
      func_0x000108c5bcc8();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar3 = (long *)(lVar5 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000108c5bac0();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c5bcac();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c5bb84();
          if ((bool)in_ZR) {
            func_0x000108c5bad0();
            func_0x000108c5ba40();
            func_0x000108c5ba64();
            func_0x000108c5bf2c();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000108c5bb18();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = param_1 + 0x90;
  FUN_108c51150(lVar5);
  FUN_108c50b34(param_1 + 0x10,lVar5);
  func_0x000108c5bbd8();
  func_0x000108c5be44();
  func_0x000108c5bb10();
  func_0x000108c5be04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5b9f8; end: 108c5ba2f;  */

void FUN_108c5b9f8(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x000108c5bbd8();
    func_0x000108c5be44();
  }
  func_0x000108c5bb10();
  func_0x000108c5be04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5ba30; end: 108c5bf43;  */

void FUN_108c5ba30(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c5bf44; end: 108c5c4e3;  */

undefined8 * FUN_108c5bf44(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long lVar8;
  undefined1 auStack_248 [8];
  ulong uStack_240;
  byte bStack_231;
  char cStack_230;
  long lStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a0;
  long lStack_198;
  long lStack_188;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [32];
  long lStack_120;
  undefined1 auStack_118 [26];
  undefined2 uStack_fe;
  undefined1 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e8 = *(long *)(param_2 + 0x20);
  uStack_1f0 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x000108c5ef0c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c278b8(auStack_208,&UNK_10f50e306);
  lStack_228 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_220,param_3);
  puVar4 = auStack_248;
  func_0x000107c27f70(puVar4,param_3);
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar2 = uStack_1f0;
  if (cStack_230 == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&puStack_1a0,auStack_208);
    if (-1 < (char)bStack_231) {
      uStack_240 = (ulong)bStack_231;
    }
    puVar1 = &UNK_10f50e2ad;
    if (uStack_240 != 0) {
      puVar1 = &UNK_10f50e2b8;
    }
    func_0x000107c278b8(&puStack_1b8,puVar1);
    FUN_108c6c848(uVar2,&puStack_1a0,&puStack_1b8,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1a0);
  }
  func_0x000107c3a5c0();
  lStack_148 = lStack_1e8;
  uStack_150 = uStack_1f0;
  if (lStack_1e8 != 0) {
    do {
      func_0x000108c5ef0c();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_140,auStack_208);
  lStack_120 = lStack_228;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118,auStack_220);
  uStack_fe = 0x100;
  puStack_f8 = puVar4;
  FUN_108c5ccb4(&puStack_f0,&uStack_150);
  FUN_108c5cc20(&lStack_1c0);
  func_0x000108c5cbf0(&puStack_f0);
  func_0x000108c5cbf0(&uStack_150);
  lStack_1c8 = lStack_1c0;
  if (lStack_1c0 != 0) {
    do {
      func_0x000108c5ef1c();
    } while (extraout_w10_01 != 0);
  }
  puVar5 = (undefined8 *)0xd8;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110abaf28;
  puVar6 = puVar5 + 3;
  puVar5[4] = 0;
  *puVar6 = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xb] = 0x3cb0b1bb;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0x32aaaba7;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  puVar5[0x15] = 0;
  puVar5[0x14] = 0;
  puVar5[0x17] = 0;
  puVar5[0x16] = 0;
  puVar5[0x19] = 0;
  puVar5[0x18] = 0;
  puVar5[0x1a] = 0;
  puStack_88 = puVar6;
  puStack_80 = puVar5;
  puStack_78 = puVar6;
  puStack_70 = puVar5;
  do {
    func_0x000108c5ef0c();
  } while (extraout_w10_02 != 0);
  ppuStack_90 = &PTR_FUN_110abaec0;
  puStack_f0 = puVar6;
  puStack_e8 = puVar5;
  do {
    func_0x000108c5ef0c();
  } while (extraout_w10_03 != 0);
  do {
    func_0x000108c5ef0c();
  } while (extraout_w10_04 != 0);
  puStack_1d8 = puVar6;
  puStack_1d0 = puVar5;
  func_0x000108c5f37c();
  func_0x000107c3a5c0();
  lStack_188 = lStack_1c8;
  puStack_178 = puVar6;
  puStack_170 = puVar5;
  puStack_160 = puVar5;
  puStack_168 = puVar6;
  if (lStack_1c8 != 0) {
    do {
      func_0x000108c5ef1c();
      puStack_178 = puStack_88;
      puStack_170 = puStack_80;
      puStack_160 = puStack_70;
      puStack_168 = puStack_78;
    } while (extraout_w10_05 != 0);
  }
  puStack_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  ppuStack_180 = &PTR_FUN_110abaec0;
  FUN_108c5e14c(&puStack_f0,&lStack_188);
  FUN_108c5dcf0(&lStack_158);
  FUN_108c5e1a0(&puStack_f0);
  FUN_108c5e1a0(&lStack_188);
  func_0x000107c27f9c(&lStack_158);
  FUN_108c5db8c(&ppuStack_90);
  func_0x000107c27f9c(&lStack_1c8);
  func_0x000107c27f9c(&lStack_1c0);
  puStack_f0 = (undefined8 *)0x0;
  puStack_e8 = (undefined8 *)0x0;
  lStack_188 = 0;
  ppuStack_180 = (undefined **)0x0;
  FUN_108c5c4fc(&uStack_150,&puStack_1d8,&lStack_188);
  FUN_108c5c554(&puStack_f0,&uStack_150);
  FUN_108c5c85c(&uStack_150);
  FUN_108c5c85c(&lStack_188);
  FUN_108c44bfc(&lStack_158);
  FUN_108c44c44(&uStack_150,lStack_158);
  puVar5 = puStack_f0;
  lVar8 = lStack_158;
  lStack_158 = 0;
  puStack_88 = (undefined8 *)lVar8;
  puStack_1a0 = (undefined8 *)0x0;
  lStack_198 = 0;
  puStack_1b8 = puStack_f0 + 0xe;
  lStack_1b0 = CONCAT71(lStack_1b0._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  puVar6 = puVar5;
  func_0x000108c5c58c();
  if ((int)puVar6 == 0) {
    puVar6 = (undefined8 *)0x18;
    __Znwm();
    *puVar6 = &PTR_SUB_110abadf0;
    puStack_88 = (undefined8 *)0x0;
    puVar6[2] = lVar8;
    plVar7 = (long *)puVar5[0x17];
    puVar5[0x17] = puVar6;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    puVar5 = (undefined8 *)0x0;
    lVar8 = 0;
  }
  else {
    FUN_108c5c554(&puStack_1a0,&puStack_f0);
    puVar5 = puStack_1a0;
  }
  func_0x000107c2798c(&puStack_1b8);
  if (puVar5 != (undefined8 *)0x0) {
    lStack_1b0 = lStack_198;
    puStack_1b8 = puVar5;
    if (lStack_198 != 0) {
      do {
        func_0x000108c5ef0c();
      } while (extraout_w10_06 != 0);
    }
    FUN_108c5c5d4(&ppuStack_90,puVar5);
    FUN_108c5c85c(&puStack_1b8);
  }
  param_1[1] = lStack_148;
  *param_1 = uStack_150;
  uStack_150 = 0;
  lStack_148 = 0;
  FUN_108c5c85c(&puStack_1a0);
  if (lVar8 != 0) {
    func_0x000108c5f1d8();
  }
  func_0x000108c44bd4(&uStack_150);
  lVar3 = lStack_158;
  lStack_158 = 0;
  if (lVar3 != 0) {
    func_0x000108c5f074();
  }
  func_0x000108c5f37c();
  func_0x000108c5f1b8();
  func_0x000107c279a4(auStack_248);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
  puVar5 = &uStack_1f0;
  func_0x000108c4cad0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x000107c2798c(&puStack_1b8);
    FUN_108c5c85c(&puStack_1a0);
    puStack_88 = (undefined8 *)0x0;
    if (lVar8 != 0) {
      func_0x000108c5f1d8();
    }
    func_0x000108c44bd4(&uStack_150);
    lVar8 = lStack_158;
    lStack_158 = 0;
    if (lVar8 != 0) {
      func_0x000108c5f074();
    }
    func_0x000108c5f37c();
    func_0x000108c5f1b8();
    func_0x000107c279a4(auStack_248);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    puVar5 = &uStack_1f0;
    func_0x000108c4cad0();
    func_0x000108c5f4b0();
    *puVar5 = &PTR_FUN_110abadb0;
    func_0x000108c4cad0(puVar5 + 3);
    func_0x000108c4caf4(puVar5 + 1);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 108c5c4e4; end: 108c5c4e7;  */

undefined8 * FUN_108c5c4e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abadb0;
  func_0x000108c4cad0(param_1 + 3);
  func_0x000108c4caf4(param_1 + 1);
  return param_1;
}



/* Entry: 108c5c4e8; end: 108c5c4fb;  */

void FUN_108c5c4e8(void)

{
  func_0x000108c5cbb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5c4fc; end: 108c5c553;  */

void FUN_108c5c4fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 108c5c554; end: 108c5c5d3;  */

undefined8 * FUN_108c5c554(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108c5f06c();
  return param_1;
}



/* Entry: 108c5c5d4; end: 108c5c85b;  */

void FUN_108c5c5d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar7;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  char cStack_50;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  long lStack_38;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  if (param_3 != 0) {
    do {
      func_0x000108c5ef0c();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c5ef0c();
    } while (extraout_w10_00 != 0);
  }
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_120 = param_2;
  lStack_118 = param_3;
  FUN_108c5c4fc(&lStack_c8,&uStack_120,&uStack_e0);
  FUN_108c5c554(&uStack_b0,&lStack_c8);
  func_0x000108c5f1b8();
  FUN_108c5c85c(&uStack_e0);
  uVar4 = uStack_b0;
  lStack_c8 = uStack_b0 + 0x70;
  uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uStack_40 = uVar4;
  lStack_38 = lStack_a8;
  if (lStack_a8 != 0) {
    do {
      func_0x000108c5ef0c();
    } while (extraout_w10_01 != 0);
  }
  while (uVar6 = uVar4, func_0x000108c5c58c(), (uVar6 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar4 + 0x40,&lStack_c8);
  }
  FUN_108c5c85c(&uStack_40);
  if (*(long *)(uVar4 + 0xb0) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_48);
    __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x108c5c79c);
    (*pcVar5)();
  }
  func_0x000108c5f35c(auStack_80);
  func_0x000107c2798c(&lStack_c8);
  FUN_108c5c85c(&uStack_b0);
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_c8 = 0;
  func_0x000107c278b8(&uStack_e0,"");
  uVar3 = uStack_d0;
  uVar2 = uStack_d8;
  uVar1 = uStack_e0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_90 = uStack_d8;
  uStack_98 = uStack_e0;
  uStack_88 = uStack_d0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  if (cStack_50 == '\x01') {
    FUN_108c5c948(&uStack_110,auStack_80);
  }
  else {
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    lStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_f0 = uVar2;
    uStack_f8 = uVar1;
    uStack_e8 = uVar3;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
  }
  FUN_108c45400(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
  func_0x000108c45428(&lStack_c8);
  FUN_108c44f54(auStack_80);
  func_0x000108c44c90(uVar7,&uStack_110);
  FUN_108c45400(&uStack_110);
  func_0x000108c5f1c0();
  func_0x000108c5f348();
  return;
}



/* Entry: 108c5c85c; end: 108c5c8af;  */

long FUN_108c5c85c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c5c8b0; end: 108c5c8c3;  */

void FUN_108c5c8b0(void)

{
  func_0x000108c5c884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5c8c4; end: 108c5c91b;  */

void FUN_108c5c8c4(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000108c5ef0c();
    } while (extraout_w10 != 0);
  }
  FUN_108c5c5d4(param_1 + 8);
  func_0x000108c5f06c();
  return;
}



/* Entry: 108c5c91c; end: 108c5c947;  */

void FUN_108c5c91c(void)

{
  undefined1 in_ZR;
  
  func_0x000108c5f2ec();
  if ((bool)in_ZR) {
    FUN_108c452b8();
  }
  return;
}



/* Entry: 108c5c948; end: 108c5c9ef;  */

undefined8 * FUN_108c5c948(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_38 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_40 = param_1;
  if (lVar3 != 0) {
    FUN_108c5c9f0(param_1,lVar3 / 0x98);
    FUN_108c5ca40(param_1,lVar1,lVar2);
  }
  uStack_38 = 1;
  FUN_108c5cb88(&puStack_40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 108c5c9f0; end: 108c5ca3f;  */

void FUN_108c5c9f0(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 < 0x1af286bca1af287) {
    plVar1 = param_1 + 2;
    func_0x000108c4728c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x13);
    return;
  }
  FUN_108c471a0();
  lVar2 = param_1[1];
  plStack_90 = param_1 + 2;
  plStack_88 = &lStack_70;
  plStack_80 = &lStack_68;
  uStack_78 = 0;
  lStack_70 = lVar2;
  for (; lStack_68 = lVar2, param_2 != param_3; param_2 = param_2 + 0x98) {
    func_0x000107c27994(lVar2,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar2 + 0x18,param_2 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar2 + 0x30,param_2 + 0x30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar2 + 0x48,param_2 + 0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar2 + 0x60,param_2 + 0x60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar2 + 0x78,param_2 + 0x78);
    *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    lVar2 = lStack_68 + 0x98;
  }
  uStack_78 = 1;
  FUN_108c47458(&plStack_90);
  param_1[1] = lVar2;
  return;
}



/* Entry: 108c5ca40; end: 108c5cb87;  */

void FUN_108c5ca40(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, param_2 != param_3; param_2 = param_2 + 0x98) {
    func_0x000107c27994(lVar1,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar1 + 0x18,param_2 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar1 + 0x30,param_2 + 0x30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar1 + 0x48,param_2 + 0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar1 + 0x60,param_2 + 0x60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar1 + 0x78,param_2 + 0x78);
    *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    lVar1 = lStack_48 + 0x98;
  }
  uStack_58 = 1;
  FUN_108c47458(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108c5cb88; end: 108c5cc1f;  */

long FUN_108c5cb88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108c45454(param_1);
  }
  return param_1;
}



/* Entry: 108c5cc20; end: 108c5ccb3;  */

void FUN_108c5cc20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  *puVar1 = FUN_108c5e9bc;
  puVar1[1] = FUN_108c5ead8;
  FUN_108c5ccb4(puVar1 + 4,param_1);
  FUN_108c5d3ac(puVar1 + 2);
  func_0x000108c5f4c4();
  puVar1[0x10] = param_2;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  func_0x000108c5f4a4(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108c5ccb4; end: 108c5cd37;  */

undefined8 * FUN_108c5ccb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  param_1[6] = param_2[6];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 7,param_2 + 7);
  uVar1 = *(undefined8 *)((long)param_2 + 0x52);
  param_1[0xb] = param_2[0xb];
  *(undefined8 *)((long)param_1 + 0x52) = uVar1;
  return param_1;
}



/* Entry: 108c5cd38; end: 108c5cd7f;  */

void FUN_108c5cd38(long *param_1,long param_2)

{
  int extraout_w10;
  long lStack_18;
  
  lStack_18 = param_2;
  if (param_2 == 0) {
    lStack_18 = 0;
  }
  else {
    do {
      func_0x000108c5ef1c();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_18;
  lStack_18 = 0;
  func_0x000107c27f9c(&lStack_18);
  return;
}



/* Entry: 108c5cd80; end: 108c5cddf;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108c5cd80(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uStack_38;
  
  plVar5 = (long *)(param_1 + 8);
  lVar6 = *plVar5;
  do {
    func_0x000108c5ef9c();
    if ((int)param_1 != 0) {
      func_0x000108c5d47c(lVar6 + 0x98);
      func_0x000108c5f35c(lVar6 + 0x98);
      *(undefined1 *)(lVar6 + 0xd0) = 1;
      func_0x000108c5efb4();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *plVar5 = 0;
  return;
}



/* Entry: 108c5cde0; end: 108c5d357;  */

void FUN_108c5cde0(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long lVar8;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *plVar9;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  int extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w10_09;
  int extraout_w10_10;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  undefined8 *puVar11;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)0x1c8;
  __Znwm();
  *puVar4 = FUN_108c5e490;
  puVar4[1] = FUN_108c5e960;
  puVar4[0x37] = param_1;
  FUN_108c5d3ac(puVar4 + 2);
  func_0x000108c5f4c4();
  FUN_108c5d4a0(puVar4 + 0x34);
  puVar4[4] = puVar4[0x34];
  do {
    func_0x000108c5ef1c();
  } while (extraout_w10 != 0);
  func_0x000108c5f030(puVar4[4]);
  ppuVar5 = &PTR___tlv_bootstrap_11340e278;
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x38) = 0;
    puVar11 = (undefined8 *)puVar4[4];
    (*(code *)PTR___tlv_bootstrap_11340e278)();
    if (*ppuVar5 == (undefined *)0x0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c5f230();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x000108c5ef6c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x000108c5f098();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) goto LAB_108c5d0d8;
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar11 = puVar4 + 4;
  FUN_108c5d358(puVar11);
  plVar6 = puVar4 + 0xc;
  FUN_108c5d930(plVar6,puVar11);
  puVar11 = (undefined8 *)puVar4[0x37];
  func_0x000108c5f14c();
  func_0x000108c5f000();
  in_ZR = *(char *)(puVar4 + 0x12) == '\x01';
  if ((bool)in_ZR) {
    puVar4[0x2e] = *puVar11;
    lVar8 = puVar11[1];
    puVar4[0x2f] = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x000108c5ef0c();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108c5f384();
    func_0x000108c4cad0(puVar4 + 0x2e);
    func_0x000108c5f324();
  }
  else {
    puVar4[0x30] = *puVar11;
    lVar8 = puVar11[1];
    puVar4[0x31] = lVar8;
    uVar3 = 0;
    if (lVar8 != 0) {
      do {
        func_0x000108c5ef0c();
      } while (extraout_w10_03 != 0);
      uVar3 = *(undefined1 *)(puVar4 + 0x12);
    }
    func_0x000108c5f1c8(uVar3);
    func_0x000108c5f3a8();
    func_0x000108c5f33c();
    func_0x000108c5f4d0(puVar4[0x36]);
    do {
      func_0x000108c5ef1c();
    } while (extraout_w10_04 != 0);
    func_0x000108c5efe8();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x000108c5ef2c(1);
      if (*plVar6 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c5f230();
      plVar9 = extraout_x8_02;
      do {
        if (*plVar9 == 0) {
          func_0x000108c5ef6c();
          plVar9 = extraout_x8_04;
          uVar1 = extraout_w10_06;
          uVar10 = extraout_w11_02;
        }
        else {
          func_0x000108c5f098();
          plVar9 = extraout_x8_03;
          uVar1 = extraout_w10_05;
          uVar10 = extraout_w11_01;
        }
        if ((uVar10 & 1) != 0) goto LAB_108c5d0d8;
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x000108c5efe8();
    lVar8 = puVar4[0x34];
    if ((extraout_w8_01 >> 5 & 1) != 0) {
      func_0x000108c5f490();
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar4 + 0x35);
LAB_108c5d1e0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108c5d1e4);
      (*pcVar2)();
    }
    func_0x000108c5f484();
    uVar3 = *(undefined1 *)(lVar8 + 0xd4);
    puVar11 = puVar4 + 0xb;
    *(undefined4 *)puVar11 = *(undefined4 *)(lVar8 + 0xd0);
    *(undefined1 *)((long)puVar4 + 0x5c) = uVar3;
    func_0x000108c5f000();
    func_0x000108c5f16c();
    if ((*(char *)((long)puVar4 + 0x5c) == '\x01') &&
       (uVar3 = *(char *)(puVar4 + 10) == '\x01', (bool)uVar3)) {
      FUN_108c5d88c(puVar4 + 0x35);
      func_0x000108c5f4d0(puVar4[0x35]);
      do {
        func_0x000108c5ef1c();
      } while (extraout_w10_07 != 0);
      func_0x000108c5efe8();
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        func_0x000108c5ef2c(2);
        if (*plVar6 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c5f230();
        plVar9 = extraout_x8_05;
        do {
          if (*plVar9 == 0) {
            func_0x000108c5ef6c();
            plVar9 = extraout_x8_07;
            uVar1 = extraout_w10_09;
            uVar10 = extraout_w11_04;
          }
          else {
            func_0x000108c5f098();
            plVar9 = extraout_x8_06;
            uVar1 = extraout_w10_08;
            uVar10 = extraout_w11_03;
          }
          if ((uVar10 & 1) != 0) {
            func_0x000108c5f008();
            if ((bool)uVar3) {
              func_0x000108c5ef8c();
              func_0x000108c5eecc();
              func_0x000108c5eedc();
              puVar4[0x1d] = plVar6;
            }
            func_0x000108c5f4f0();
            goto LAB_108c5d0f8;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar4 + 0x34);
      lVar8 = puVar4[0x37];
      func_0x000108c5f000();
      func_0x000108c5f15c();
      if (*(char *)(lVar8 + 0x53) == '\x01') {
        if ((*(byte *)(puVar4 + 10) & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_108c5d1e0;
        }
        func_0x000108c5f400();
        func_0x000108c5f504();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 0x13);
        func_0x000108c5f0ec();
        func_0x000107c278b8(puVar4 + 0x16);
        func_0x000108c5f130();
        func_0x000108c5f144();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0x13);
        func_0x000108c5f0b8();
      }
      func_0x000108c5f4dc();
      if (extraout_x9 != 0) {
        do {
          func_0x000108c5ef0c();
        } while (extraout_w10_10 != 0);
      }
      func_0x000108c5f41c();
      func_0x000108c5f29c();
      lVar8 = puVar4[3];
      do {
        puVar4[0x34] = 0;
        lVar7 = lVar8 + 0x10;
        func_0x000108c5efcc(lVar7,puVar4 + 0x34);
        if ((int)lVar7 != 0) {
          func_0x000108c5d47c(lVar8 + 0x98);
          func_0x000108c5f364();
          func_0x000108c5f03c();
          break;
        }
      } while ((*(byte *)(puVar4 + 0x34) >> 1 & 1) == 0);
      func_0x000108c5f350();
    }
    else {
      FUN_108c51960(auStack_58,*(undefined4 *)puVar11);
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c5f3d0();
      func_0x000108c5f3bc();
      func_0x000108c5f11c();
      func_0x000108c5f228();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0x19);
      func_0x000108c5f39c();
      func_0x000108c5f218();
      func_0x000108c5f200();
      func_0x000108c5f080();
      func_0x000108c5f1f8();
      func_0x000108c5f210();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4 + 0x1f);
      func_0x000108c5f1b0();
      func_0x000108c5f0b8();
    }
    func_0x000108c5f154();
  }
  func_0x000108c5f114();
  func_0x000108c5eff8();
  func_0x000108c5f028();
  return;
LAB_108c5d0d8:
  func_0x000108c5f0c0();
  if ((bool)in_ZR) {
    func_0x000108c5ef8c();
    func_0x000108c5eecc();
    func_0x000108c5eef8();
    func_0x000108c5f2dc();
  }
  func_0x000108c5f0a4();
LAB_108c5d0f8:
  func_0x000108c5efd8(puVar11[0x12]);
  puVar11[2] = 0;
  return;
}



/* Entry: 108c5d358; end: 108c5d3ab;  */

long FUN_108c5d358(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c5d3a0);
  (*pcVar1)();
}



/* Entry: 108c5d3ac; end: 108c5d413;  */

undefined8 * FUN_108c5d3ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xd8;
  __Znwm();
  puVar2 = puVar1;
  func_0x000108c5f4b8();
  *puVar2 = &PTR_FUN_110abae40;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  uStack_28 = 0;
  func_0x000107c27f98(&uStack_28);
  func_0x000108c5f414();
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000108c5f454();
  return param_1;
}



/* Entry: 108c5d414; end: 108c5d417;  */

undefined8 * FUN_108c5d414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abae40;
  FUN_108c5d45c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c5d418; end: 108c5d42b;  */

void FUN_108c5d418(void)

{
  FUN_108c5d42c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5d42c; end: 108c5d45b;  */

undefined8 * FUN_108c5d42c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abae40;
  FUN_108c5d45c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c5d45c; end: 108c5d49f;  */

void FUN_108c5d45c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_108c44f54();
  }
  return;
}



/* Entry: 108c5d4a0; end: 108c5d4e3;  */

void FUN_108c5d4a0(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_108c5d3ac(auStack_38);
  FUN_108c5cd38(param_1,auStack_38[0]);
  func_0x000108c5d8d0(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 108c5d4e4; end: 108c5d88b;  */

void FUN_108c5d4e4(long *param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar11;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  long lVar13;
  long alStack_130 [20];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar13 = *param_2;
  puVar5 = (undefined8 *)0xe0;
  __Znwm();
  *puVar5 = FUN_108c5e1c8;
  puVar5[1] = FUN_108c5e464;
  puVar6 = (undefined8 *)0xe0;
  __Znwm();
  puVar7 = puVar6;
  func_0x000108c5f4b8();
  *puVar7 = &PTR_FUN_110abae80;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined1 *)(puVar7 + 0x1b) = 0;
  alStack_130[0] = 0;
  uStack_78 = 0;
  func_0x000107c27f98(&uStack_78);
  func_0x000108c5f414();
  puVar5[2] = puVar6;
  puVar5[3] = puVar6;
  func_0x000108c5f454();
  alStack_130[0] = puVar5[2];
  if (alStack_130[0] != 0) {
    do {
      func_0x000108c5ef1c();
    } while (extraout_w10 != 0);
  }
  *param_1 = alStack_130[0];
  alStack_130[0] = 0;
  func_0x000108c5f414();
  plVar8 = *(long **)(lVar13 + 8);
  (**(code **)(*plVar8 + 0x30))(puVar5 + 0x1a,plVar8,param_2 + 1);
  puVar5[0x19] = puVar5[0x1a];
  do {
    func_0x000108c5ef1c();
  } while (extraout_w10_00 != 0);
  func_0x000108c5f030(puVar5[0x19]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x1b) = 0;
    lVar13 = puVar5[0x19];
    func_0x000108c5ef7c();
    if (*plVar8 == 0) {
      func_0x000107c3a5c0();
    }
    plVar10 = (long *)(lVar13 + 0x10);
    do {
      if (*plVar10 == 0) {
        func_0x000108c5ef6c();
        plVar10 = extraout_x8_00;
        uVar3 = extraout_w10_02;
        uVar12 = extraout_w11_00;
      }
      else {
        func_0x000108c5f098();
        plVar10 = extraout_x8;
        uVar3 = extraout_w10_01;
        uVar12 = extraout_w11;
      }
      if ((uVar12 & 1) != 0) {
        func_0x000108c5f008();
        if ((bool)in_ZR) {
          func_0x000108c5ef8c();
          func_0x000108c5eecc();
          func_0x000108c5eedc();
          *(long **)(lVar13 + 0x90) = plVar8;
        }
        func_0x000108c5ef40();
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  func_0x000108c5f030(puVar5[0x19]);
  lVar13 = puVar5[0x19];
  if ((extraout_w8_00 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(alStack_130,lVar13 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(alStack_130);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x108c5d800);
    (*pcVar4)();
  }
  *(undefined1 *)(puVar5 + 4) = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  if (*(char *)(lVar13 + 0xd0) == '\x01') {
    FUN_108c6e5a4(puVar5 + 4,0,lVar13 + 0x98);
    *(undefined1 *)(puVar5 + 0xb) = 1;
  }
  *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(lVar13 + 0xd8);
  func_0x000107c27f9c(puVar5 + 0x19);
  func_0x000108c5f3b4();
  iVar9 = *(int *)(puVar5 + 0xc);
  if (iVar9 == 0) {
    if ((*(byte *)(puVar5 + 0xb) & 1) != 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_108c47114(&uStack_90,(long)*(int *)(puVar5 + 7));
      uVar11 = puVar5[6];
      puVar1 = puVar5 + 6;
      if ((uVar11 & 1) != 0) {
        puVar1 = (ulong *)(uVar11 + 7);
      }
      uVar2 = uStack_90;
      uStack_70 = uStack_88;
      uStack_68 = uStack_80;
      for (lVar13 = (long)*(int *)(puVar5 + 7) << 3; lVar13 != 0; lVar13 = lVar13 + -8) {
        uStack_90 = uVar2;
        uStack_88 = uStack_70;
        uStack_80 = uStack_68;
        FUN_108c6afc4(alStack_130,*puVar1);
        func_0x000108c47544(&uStack_90,alStack_130);
        func_0x000108c4537c(alStack_130);
        puVar1 = puVar1 + 1;
        uVar2 = uStack_90;
        uStack_70 = uStack_88;
        uStack_68 = uStack_80;
      }
      puVar5[0x13] = uVar2;
      puVar5[0x14] = uStack_70;
      puVar5[0x15] = uStack_68;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar5 + 0x16,puVar5[9] & 0xfffffffffffffffc);
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x11] = puVar5[0x17];
      puVar5[0x10] = puVar5[0x16];
      uStack_50 = puVar5[0x18];
      puVar5[0x12] = uStack_50;
      puVar5[0x13] = 0;
      puVar5[0x16] = 0;
      puVar5[0x17] = 0;
      puVar5[0x18] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0xd] = 0;
      uStack_58 = puVar5[0x11];
      uStack_60 = puVar5[0x10];
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      uStack_48 = 1;
      uStack_78 = uVar2;
      FUN_108c5dab0(alStack_130,&uStack_78,0);
      FUN_108c44f54(&uStack_78);
      func_0x000108c5f330();
      FUN_108c44f54(alStack_130);
      FUN_108c45400(puVar5 + 0xd);
      func_0x000108c5f144();
      func_0x000108c45428(puVar5 + 0x13);
      func_0x000108c45428(&uStack_90);
      goto LAB_108c5d7c4;
    }
    iVar9 = 2;
  }
  FUN_108c5da04(alStack_130,iVar9);
  func_0x000108c5f330();
  FUN_108c44f54(alStack_130);
LAB_108c5d7c4:
  func_0x000108c5f468();
  func_0x000108c5eff8();
  func_0x000108c5f028();
  return;
}



/* Entry: 108c5d88c; end: 108c5d92f;  */

void FUN_108c5d88c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c27f94(auStack_38);
  func_0x000107c287c4(param_1,auStack_38);
  func_0x000107c287c8(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 108c5d930; end: 108c5d967;  */

void FUN_108c5d930(void)

{
  undefined1 in_ZR;
  
  func_0x000108c5f2ec();
  if ((bool)in_ZR) {
    FUN_108c5d968();
  }
  return;
}



/* Entry: 108c5d968; end: 108c5d983;  */

void FUN_108c5d968(long param_1)

{
  FUN_108c5c948();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 108c5d984; end: 108c5da03;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108c5d984(long param_1,long param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uStack_38;
  
  plVar6 = (long *)(param_1 + 8);
  lVar7 = *plVar6;
  do {
    func_0x000108c5ef9c();
    if ((int)param_1 != 0) {
      if (*(char *)(lVar7 + 0xd8) == '\x01') {
        FUN_108c44f54(lVar7 + 0x98);
        *(undefined1 *)(lVar7 + 0xd8) = 0;
      }
      func_0x000108c5f35c(lVar7 + 0x98);
      uVar2 = *(undefined4 *)(param_2 + 0x38);
      *(undefined1 *)(lVar7 + 0xd4) = *(undefined1 *)(param_2 + 0x3c);
      *(undefined4 *)(lVar7 + 0xd0) = uVar2;
      *(undefined1 *)(lVar7 + 0xd8) = 1;
      func_0x000108c5efb4();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 108c5da04; end: 108c5da37;  */

void FUN_108c5da04(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [48];
  undefined1 uStack_18;
  
  auStack_48[0] = 0;
  uStack_18 = 0;
  FUN_108c5dab0(param_1,auStack_48,param_2);
  FUN_108c44f54(auStack_48);
  return;
}



/* Entry: 108c5da38; end: 108c5da3b;  */

undefined8 * FUN_108c5da38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abae80;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_108c44f54(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c5da3c; end: 108c5da4f;  */

void FUN_108c5da3c(void)

{
  FUN_108c5da50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5da50; end: 108c5da8f;  */

undefined8 * FUN_108c5da50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abae80;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_108c44f54(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c5da90; end: 108c5daaf;  */

void FUN_108c5da90(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_108c6e60c();
  }
  return;
}



/* Entry: 108c5dab0; end: 108c5dae7;  */

void FUN_108c5dab0(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  
  FUN_108c5c91c();
  *(int *)(param_1 + 0x38) = param_3;
  if (param_3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x3c) = bVar1 & 1;
  return;
}



/* Entry: 108c5dae8; end: 108c5daeb;  */

undefined8 * FUN_108c5dae8(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110abaf08;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c5dc34(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_108c5c85c(param_1 + 3);
  FUN_108c5c85c(param_1 + 1);
  return param_1;
}



/* Entry: 108c5daec; end: 108c5daff;  */

void FUN_108c5daec(void)

{
  FUN_108c5db8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5db00; end: 108c5db03;  */

undefined8 * FUN_108c5db00(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110abaf08;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c5dc34(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_108c5c85c(param_1 + 3);
  FUN_108c5c85c(param_1 + 1);
  return param_1;
}



/* Entry: 108c5db04; end: 108c5db17;  */

void FUN_108c5db04(void)

{
  FUN_108c5db8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5db18; end: 108c5db1b;  */

void FUN_108c5db18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abaf28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c5db1c; end: 108c5db2f;  */

void FUN_108c5db1c(void)

{
  FUN_108c5db78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5db30; end: 108c5db77;  */

void FUN_108c5db30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar1 != 0) {
    func_0x000108c5f074();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 200);
  __ZNSt3__15mutexD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108c44f54();
  }
  return;
}



/* Entry: 108c5db78; end: 108c5db8b;  */

void FUN_108c5db78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5db8c; end: 108c5dc33;  */

undefined8 * FUN_108c5db8c(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110abaf08;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c5dc34(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_108c5c85c(param_1 + 3);
  FUN_108c5c85c(param_1 + 1);
  return param_1;
}



/* Entry: 108c5dc34; end: 108c5dcef;  */

void FUN_108c5dc34(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_108c5c4fc(auStack_40,param_1 + 8,&uStack_50);
  FUN_108c5c554(alStack_30,auStack_40);
  func_0x000108c5f348();
  func_0x000108c5f06c();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x70);
  __ZNSt13exception_ptraSERKS_(lVar1 + 0xb0,param_2);
  plVar2 = *(long **)(lVar1 + 0xb8);
  func_0x000108c5f390();
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x40);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x000108c5f1e8();
  }
  func_0x000108c5f1c0();
  return;
}



/* Entry: 108c5dcf0; end: 108c5dd83;  */

void FUN_108c5dcf0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_108c5ed80;
  puVar1[1] = FUN_108c5ee94;
  FUN_108c5e14c(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000108c5f310();
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x000108c5f4a4(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108c5dd84; end: 108c5e0b7;  */

void FUN_108c5dd84(long *param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  *puVar6 = FUN_108c5eb10;
  puVar6[1] = FUN_108c5ed58;
  puVar6[10] = param_1;
  plVar12 = puVar6 + 2;
  func_0x000107c27f94();
  func_0x000108c5f310();
  plVar9 = puVar6 + 8;
  *plVar9 = *param_1;
  do {
    func_0x000108c5ef1c();
  } while (extraout_w10 != 0);
  func_0x000108c5f030(*plVar9);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0xb) = 0;
    lVar10 = puVar6[8];
    func_0x000108c5ef7c();
    if (*plVar12 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c5f230();
    plVar12 = extraout_x8;
    do {
      if (*plVar12 == 0) {
        func_0x000108c5ef6c();
        plVar12 = extraout_x8_01;
        uVar3 = extraout_w10_01;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x000108c5f098();
        plVar12 = extraout_x8_00;
        uVar3 = extraout_w10_00;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x000108c5f0c0();
        if ((bool)in_ZR) {
          func_0x000108c5ef8c();
          func_0x000108c5eecc();
          func_0x000108c5eef8();
          func_0x000108c5f2dc();
        }
        func_0x000108c5f0a4();
        func_0x000108c5efd8(*(undefined8 *)(lVar10 + 0x90));
        *(undefined8 *)(lVar10 + 0x10) = 0;
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  plVar12 = plVar9;
  FUN_108c5d358();
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  func_0x000108c5f28c(puVar6[10]);
  func_0x000108c5f478();
  func_0x000108c5f06c();
  func_0x000108c5f2bc();
  plVar11 = (long *)puVar6[4];
  __ZNSt3__15mutex4lockEv(plVar11 + 0xe);
  if ((char)plVar11[7] != '\x01') {
    FUN_108c5d930(plVar11,plVar12);
    *(undefined1 *)(plVar11 + 7) = 1;
    goto LAB_108c5dfa4;
  }
  cVar2 = (char)plVar11[6];
  if (cVar2 != (char)plVar12[6]) {
    if (cVar2 == '\0') {
      FUN_108c5d968(plVar11,plVar12);
    }
    else {
      FUN_108c45400(plVar11);
      *(undefined1 *)(plVar11 + 6) = 0;
    }
    goto LAB_108c5dfa4;
  }
  if (cVar2 == '\0') goto LAB_108c5dfa4;
  bVar4 = plVar12 <= plVar11;
  bVar5 = plVar11 == plVar12;
  if (!bVar5) {
    lVar10 = *plVar12;
    lVar1 = plVar12[1];
    func_0x000108c5f518(lVar1 - lVar10);
    if (!bVar4 || bVar5) {
      func_0x000108c5f518();
      if (!bVar4 || bVar5) {
        FUN_108c5e0b8(lVar10,lVar1);
        FUN_108c45348(plVar11,lVar10);
        goto LAB_108c5df98;
      }
      lVar13 = lVar10 + extraout_x9;
      FUN_108c5e0b8(lVar10,lVar13);
    }
    else {
      func_0x000108c45308(plVar11);
      plVar7 = plVar11;
      FUN_108c47640(plVar11,extraout_x8_02 / 0x98);
      FUN_108c5c9f0(plVar11,plVar7);
      lVar13 = lVar10;
    }
    FUN_108c5ca40(plVar11,lVar13,lVar1);
  }
LAB_108c5df98:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11 + 3,plVar12 + 3);
LAB_108c5dfa4:
  plVar12 = (long *)plVar11[0x17];
  plVar11[0x17] = 0;
  __ZNSt3__15mutex6unlockEv(plVar11 + 0xe);
  if (plVar12 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(plVar11 + 8);
  }
  else {
    (**(code **)(*plVar12 + 0x10))(plVar12,puVar6 + 4);
    func_0x000108c5f2a4();
  }
  func_0x000108c5f2b4();
  func_0x000107c27f9c(plVar9);
  func_0x000108c5f31c();
  func_0x000108c5eff8();
  func_0x000108c5f028();
  return;
}



/* Entry: 108c5e0b8; end: 108c5e14b;  */

long FUN_108c5e0b8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x98) {
    func_0x000107c27cfc(lVar1,param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar1 + 0x18,param_1 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar1 + 0x30,param_1 + 0x30);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar1 + 0x48,param_1 + 0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar1 + 0x60,param_1 + 0x60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar1 + 0x78,param_1 + 0x78);
    *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 0x90);
    param_3 = param_3 + 0x98;
    lVar1 = lVar1 + 0x98;
  }
  return param_3;
}



/* Entry: 108c5e14c; end: 108c5e177;  */

undefined8 * FUN_108c5e14c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_108c5e178(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108c5e178; end: 108c5e19f;  */

void FUN_108c5e178(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = &PTR_FUN_110abaec0;
  return;
}



/* Entry: 108c5e1a0; end: 108c5e1c7;  */

undefined8 * FUN_108c5e1a0(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  FUN_108c5db8c(param_1 + 1);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 108c5e1c8; end: 108c5e463;  */

void FUN_108c5e1c8(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  int iVar3;
  uint extraout_w8;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [152];
  
  plVar6 = (long *)(param_1 + 200);
  func_0x000108c5f030(*plVar6);
  lVar5 = *plVar6;
  if ((extraout_w8 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_f8,lVar5 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_f8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108c5e3e8);
    (*pcVar2)();
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(lVar5 + 0xd0) == '\x01') {
    FUN_108c6e5a4(param_1 + 0x20,0,lVar5 + 0x98);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar5 + 0xd8);
  func_0x000107c27f9c(plVar6);
  func_0x000107c27f9c(param_1 + 0xd0);
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 == 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      FUN_108c47114(&uStack_110,(long)*(int *)(param_1 + 0x38));
      uVar4 = *(ulong *)(param_1 + 0x30);
      puVar7 = (undefined8 *)(param_1 + 0xb0);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + 7);
      }
      uStack_148 = uStack_110;
      uStack_140 = uStack_108;
      uStack_138 = uStack_100;
      for (lVar5 = (long)*(int *)(param_1 + 0x38) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
        uStack_110 = uStack_148;
        uStack_108 = uStack_140;
        uStack_100 = uStack_138;
        FUN_108c6afc4(auStack_f8,*puVar1);
        func_0x000108c47544(&uStack_110,auStack_f8);
        func_0x000108c4537c(auStack_f8);
        puVar1 = puVar1 + 1;
        uStack_148 = uStack_110;
        uStack_140 = uStack_108;
        uStack_138 = uStack_100;
      }
      *(undefined8 *)(param_1 + 0x98) = uStack_148;
      *(undefined8 *)(param_1 + 0xa0) = uStack_140;
      *(undefined8 *)(param_1 + 0xa8) = uStack_138;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_110 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar7,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0x80) = *puVar7;
      uStack_120 = *(undefined8 *)(param_1 + 0xc0);
      *puVar7 = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      uStack_128 = *(undefined8 *)(param_1 + 0x88);
      uStack_130 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = uStack_120;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      uStack_118 = 1;
      FUN_108c5dab0(auStack_f8,&uStack_148,0);
      FUN_108c44f54(&uStack_148);
      func_0x000108c5f370();
      FUN_108c44f54(auStack_f8);
      FUN_108c45400((undefined8 *)(param_1 + 0x68));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
      func_0x000108c45428((undefined8 *)(param_1 + 0x98));
      func_0x000108c45428(&uStack_110);
      goto LAB_108c5e3a0;
    }
    iVar3 = 2;
  }
  FUN_108c5da04(auStack_f8,iVar3);
  func_0x000108c5f370();
  FUN_108c44f54(auStack_f8);
LAB_108c5e3a0:
  func_0x000108c5f3c8();
  func_0x000107c27fb8(param_1 + 0x10);
  func_0x000108c5f028();
  return;
}



/* Entry: 108c5e464; end: 108c5e48f;  */

void FUN_108c5e464(long param_1)

{
  func_0x000107c27f9c(param_1 + 200);
  func_0x000108c5f3b4();
  func_0x000108c5eff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5e490; end: 108c5e95f;  */

void FUN_108c5e490(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *extraout_x8;
  long *plVar7;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar9;
  long *plVar10;
  undefined1 auStack_58 [24];
  
  if ((char)param_1[0x38] == '\x02') {
LAB_108c5e564:
    func_0x000107c28834(param_1 + 0x34);
    lVar9 = param_1[0x37];
    func_0x000108c5f000();
    func_0x000108c5f15c();
    if (*(char *)(lVar9 + 0x53) == '\x01') {
      if ((*(byte *)(param_1 + 10) & 1) == 0) {
        func_0x000104bdc2c8();
LAB_108c5e800:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x108c5e804);
        (*pcVar2)();
      }
      func_0x000108c5f400();
      func_0x000108c5f504();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x13);
      func_0x000108c5f0ec();
      func_0x000107c278b8(param_1 + 0x16);
      func_0x000108c5f130();
      func_0x000108c5f144();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
      func_0x000108c5f0b8();
    }
    func_0x000108c5f4dc();
    if (extraout_x9 != 0) {
      do {
        func_0x000108c5ef0c();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108c5f41c();
    func_0x000108c5f29c();
    lVar9 = param_1[3];
    do {
      param_1[0x34] = 0;
      lVar5 = lVar9 + 0x10;
      func_0x000108c5efcc(lVar5,param_1 + 0x34);
      if ((int)lVar5 != 0) {
        func_0x000108c5d47c(lVar9 + 0x98);
        func_0x000108c5f364();
        func_0x000108c5f03c();
        break;
      }
    } while ((*(byte *)(param_1 + 0x34) >> 1 & 1) == 0);
    func_0x000108c5f350();
  }
  else {
    plVar6 = param_1;
    if ((char)param_1[0x38] != '\x01') {
      plVar10 = param_1 + 4;
      FUN_108c5d358(plVar10);
      plVar6 = param_1 + 0xc;
      FUN_108c5d930(plVar6,plVar10);
      plVar10 = (long *)param_1[0x37];
      func_0x000108c5f14c();
      func_0x000108c5f000();
      if ((char)param_1[0x12] == '\x01') {
        param_1[0x2e] = *plVar10;
        lVar9 = plVar10[1];
        param_1[0x2f] = lVar9;
        if (lVar9 != 0) {
          do {
            func_0x000108c5ef0c();
          } while (extraout_w10_03 != 0);
        }
        func_0x000108c5f384();
        func_0x000108c4cad0(param_1 + 0x2e);
        func_0x000108c5f324();
        goto LAB_108c5e6f4;
      }
      param_1[0x30] = *plVar10;
      lVar9 = plVar10[1];
      param_1[0x31] = lVar9;
      uVar3 = 0;
      uVar4 = 0;
      if (lVar9 != 0) {
        do {
          func_0x000108c5ef0c();
        } while (extraout_w10_04 != 0);
        uVar4 = (undefined1)param_1[0x12];
      }
      func_0x000108c5f1c8(uVar4);
      func_0x000108c5f3a8();
      func_0x000108c5f33c();
      func_0x000108c5f4d0(param_1[0x36]);
      do {
        func_0x000108c5ef1c();
      } while (extraout_w10_05 != 0);
      func_0x000108c5efe8();
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        func_0x000108c5ef2c(1);
        if (*plVar6 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c5f230();
        plVar7 = extraout_x8_02;
        do {
          if (*plVar7 == 0) {
            func_0x000108c5ef6c();
            plVar7 = extraout_x8_04;
            uVar1 = extraout_w10_07;
            uVar8 = extraout_w11_02;
          }
          else {
            func_0x000108c5f098();
            plVar7 = extraout_x8_03;
            uVar1 = extraout_w10_06;
            uVar8 = extraout_w11_01;
          }
          if ((uVar8 & 1) != 0) {
            func_0x000108c5f0c0();
            if ((bool)uVar3) {
              func_0x000108c5ef8c();
              func_0x000108c5eecc();
              func_0x000108c5eef8();
              func_0x000108c5f2dc();
            }
            func_0x000108c5f0a4();
            goto LAB_108c5e7d8;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
    }
    func_0x000108c5efe8();
    lVar9 = param_1[0x34];
    if ((extraout_w8 >> 5 & 1) != 0) {
      func_0x000108c5f490();
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x35);
      goto LAB_108c5e800;
    }
    func_0x000108c5f484();
    uVar4 = *(undefined1 *)(lVar9 + 0xd4);
    plVar10 = param_1 + 0xb;
    *(undefined4 *)plVar10 = *(undefined4 *)(lVar9 + 0xd0);
    *(undefined1 *)((long)param_1 + 0x5c) = uVar4;
    func_0x000108c5f000();
    func_0x000108c5f16c();
    uVar4 = *(char *)((long)param_1 + 0x5c) == '\x01';
    if (((bool)uVar4) && ((*(byte *)(param_1 + 10) & 1) != 0)) {
      FUN_108c5d88c(param_1 + 0x35);
      func_0x000108c5f4d0(param_1[0x35]);
      do {
        func_0x000108c5ef1c();
      } while (extraout_w10 != 0);
      func_0x000108c5efe8();
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        func_0x000108c5ef2c(2);
        if (*plVar6 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c5f230();
        plVar7 = extraout_x8;
        do {
          if (*plVar7 == 0) {
            func_0x000108c5ef6c();
            plVar7 = extraout_x8_01;
            uVar1 = extraout_w10_01;
            uVar8 = extraout_w11_00;
          }
          else {
            func_0x000108c5f098();
            plVar7 = extraout_x8_00;
            uVar1 = extraout_w10_00;
            uVar8 = extraout_w11;
          }
          if ((uVar8 & 1) != 0) {
            func_0x000108c5f008();
            if ((bool)uVar4) {
              func_0x000108c5ef8c();
              func_0x000108c5eecc();
              func_0x000108c5eedc();
              param_1[0x1d] = (long)plVar6;
            }
            func_0x000108c5f4f0();
LAB_108c5e7d8:
            func_0x000108c5efd8(plVar10[0x12]);
            plVar10[2] = 0;
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      goto LAB_108c5e564;
    }
    FUN_108c51960(auStack_58,(int)*plVar10);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000108c5f3d0();
    func_0x000108c5f3bc();
    func_0x000108c5f11c();
    func_0x000108c5f228();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x19);
    func_0x000108c5f39c();
    func_0x000108c5f218();
    func_0x000108c5f200();
    func_0x000108c5f080();
    func_0x000108c5f1f8();
    func_0x000108c5f210();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1f);
    func_0x000108c5f1b0();
    func_0x000108c5f0b8();
  }
  func_0x000108c5f154();
LAB_108c5e6f4:
  func_0x000108c5f114();
  func_0x000108c5eff8();
  func_0x000108c5f028();
  return;
}



/* Entry: 108c5e960; end: 108c5e9bb;  */

void FUN_108c5e960(long param_1)

{
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    func_0x000108c5f14c();
    func_0x000108c5f000();
  }
  else {
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      func_0x000107c27f9c(param_1 + 0x1a0);
      func_0x000108c5f16c();
    }
    else {
      func_0x000107c27f9c(param_1 + 0x1a0);
      func_0x000108c5f15c();
      func_0x000108c5f154();
    }
    func_0x000108c5f114();
  }
  func_0x000108c5eff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5e9bc; end: 108c5ead7;  */

void FUN_108c5e9bc(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c5cde0(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x88);
    do {
      func_0x000108c5ef1c();
    } while (extraout_w10 != 0);
    func_0x000108c5f030(*(undefined8 *)(param_1 + 0x80));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      lVar5 = *(long *)(param_1 + 0x80);
      func_0x000108c5ef7c();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar3 = (long *)(lVar5 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000108c5ef6c();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c5f098();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c5f008();
          if ((bool)in_ZR) {
            func_0x000108c5ef8c();
            func_0x000108c5eecc();
            func_0x000108c5eedc();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000108c5ef40();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = param_1 + 0x80;
  FUN_108c5d358(lVar5);
  FUN_108c5cd80(param_1 + 0x10,lVar5);
  func_0x000108c5f44c();
  func_0x000108c5f3ec();
  func_0x000108c5eff8();
  func_0x000108c5f470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5ead8; end: 108c5eb0f;  */

void FUN_108c5ead8(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x000108c5f44c();
    func_0x000108c5f3ec();
  }
  func_0x000108c5eff8();
  func_0x000108c5f470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5eb10; end: 108c5ed57;  */

void FUN_108c5eb10(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x9;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = (long *)(param_1 + 0x40);
  FUN_108c5d358();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000108c5f28c(*(undefined8 *)(param_1 + 0x50));
  func_0x000108c5f478();
  func_0x000108c5f06c();
  func_0x000108c5f2bc();
  plVar7 = *(long **)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(plVar7 + 0xe);
  if ((char)plVar7[7] != '\x01') {
    FUN_108c5d930(plVar7,plVar8);
    *(undefined1 *)(plVar7 + 7) = 1;
    goto LAB_108c5ec60;
  }
  cVar2 = (char)plVar7[6];
  if (cVar2 != (char)plVar8[6]) {
    if (cVar2 == '\0') {
      FUN_108c5d968(plVar7,plVar8);
    }
    else {
      FUN_108c45400(plVar7);
      *(undefined1 *)(plVar7 + 6) = 0;
    }
    goto LAB_108c5ec60;
  }
  if (cVar2 == '\0') goto LAB_108c5ec60;
  bVar3 = plVar8 <= plVar7;
  bVar4 = plVar7 == plVar8;
  if (!bVar4) {
    lVar6 = *plVar8;
    lVar1 = plVar8[1];
    func_0x000108c5f518(lVar1 - lVar6);
    if (!bVar3 || bVar4) {
      func_0x000108c5f518();
      if (!bVar3 || bVar4) {
        FUN_108c5e0b8(lVar6,lVar1);
        FUN_108c45348(plVar7,lVar6);
        goto LAB_108c5ec54;
      }
      lVar9 = lVar6 + extraout_x9;
      FUN_108c5e0b8(lVar6,lVar9);
    }
    else {
      func_0x000108c45308(plVar7);
      plVar5 = plVar7;
      FUN_108c47640(plVar7,extraout_x8 / 0x98);
      FUN_108c5c9f0(plVar7,plVar5);
      lVar9 = lVar6;
    }
    FUN_108c5ca40(plVar7,lVar9,lVar1);
  }
LAB_108c5ec54:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar7 + 3,plVar8 + 3);
LAB_108c5ec60:
  plVar8 = (long *)plVar7[0x17];
  func_0x000108c5f390();
  if (plVar8 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(plVar7 + 8);
  }
  else {
    (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0x20);
    func_0x000108c5f244();
  }
  func_0x000108c5f2b4();
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x000108c5f31c();
  func_0x000108c5eff8();
  func_0x000108c5f028();
  return;
}



/* Entry: 108c5ed58; end: 108c5ed7f;  */

void FUN_108c5ed58(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x000108c5eff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5ed80; end: 108c5ee93;  */

void FUN_108c5ed80(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c5dd84(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x000108c5ef1c();
    } while (extraout_w10 != 0);
    func_0x000108c5f030(*(undefined8 *)(param_1 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      lVar5 = *(long *)(param_1 + 0x50);
      func_0x000108c5ef7c();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar3 = (long *)(lVar5 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000108c5ef6c();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c5f098();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c5f008();
          if ((bool)in_ZR) {
            func_0x000108c5ef8c();
            func_0x000108c5eecc();
            func_0x000108c5eedc();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000108c5ef40();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x50);
  func_0x000108c5f3e4();
  func_0x000108c5f3dc();
  func_0x000108c5f31c();
  func_0x000108c5eff8();
  func_0x000108c5f460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5ee94; end: 108c5eecb;  */

void FUN_108c5ee94(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000108c5f3e4();
    func_0x000108c5f3dc();
  }
  func_0x000108c5eff8();
  func_0x000108c5f460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c5eecc; end: 108c5f593;  */

void FUN_108c5eecc(void)

{
  int unaff_w23;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(unaff_w23 * 0x18 + 0x10);
  return;
}



/* Entry: 108c5f594; end: 108c5fc8b;  */

void FUN_108c5f594(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 **unaff_x25;
  undefined8 **unaff_x26;
  undefined8 *puStack_3d0;
  undefined1 auStack_3c8 [24];
  undefined8 *puStack_3b0;
  undefined1 auStack_3a8 [24];
  int iStack_390;
  undefined8 *puStack_388;
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 *puStack_350;
  long lStack_348;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined8 *puStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  long lStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_270 [24];
  undefined8 uStack_258;
  undefined1 auStack_250 [24];
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_220 [24];
  undefined8 *puStack_208;
  undefined1 auStack_200 [24];
  undefined8 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  int iStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined8 uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_70;
  
  func_0x000108c630cc();
  uStack_70 = extraout_x8;
  if (param_4 == 0) {
    uVar7 = param_2[3];
    func_0x000107c278b8(auStack_310,&UNK_10f50e314);
    func_0x000107c278b8(auStack_328,&UNK_10f50e32c);
    FUN_108c6c28c(uVar7,auStack_310,auStack_328,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_328);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_310);
    FUN_108c55914(&puStack_150);
    puVar3 = puStack_148;
    puStack_230 = puStack_150;
    puStack_2d0 = (undefined8 *)0x0;
    puStack_150 = (undefined8 *)0x0;
    puStack_148 = (undefined8 *)0x0;
    puStack_228 = puVar3;
    ppuStack_2a0 = (undefined **)0x0;
    func_0x000107c27f98(&ppuStack_2a0);
    func_0x000107c27f9c(&puStack_2d0);
    func_0x000107c27fec(&puStack_150);
    FUN_108c55e64(puVar3,(ulong)&puStack_230 | 8,&UNK_10dd62ad6);
    puStack_150 = puStack_230;
    if (puStack_230 != (undefined8 *)0x0) {
      do {
        func_0x000108c62eb8();
      } while (extraout_w10_06 != 0);
    }
    FUN_108c55070(param_1,&puStack_150);
    func_0x000107c27f9c(&puStack_150);
    func_0x000108c60228(&puStack_230);
  }
  else {
    lStack_348 = param_2[4];
    puStack_350 = (undefined8 *)param_2[3];
    if (param_2[4] != 0) {
      do {
        func_0x000108c62ea8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c278b8(auStack_368,&UNK_10f50e314);
    puStack_388 = param_2;
    func_0x000108c632bc(auStack_380);
    unaff_x25 = &puStack_3b0;
    puStack_3b0 = param_2;
    func_0x000108c632bc(auStack_3a8);
    puVar1 = auStack_3c8;
    puStack_3d0 = param_2;
    iStack_390 = param_4;
    func_0x000108c632bc();
    uStack_238 = 0;
    uStack_258 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar2 = puVar1;
    func_0x000107c3a5c0();
    puStack_228 = (undefined8 *)lStack_348;
    puStack_230 = puStack_350;
    if (lStack_348 != 0) {
      do {
        func_0x000108c62ea8();
      } while (extraout_w10_00 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_220,auStack_368);
    puStack_208 = puStack_388;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_200,auStack_380);
    puStack_1e8 = puStack_3b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1e0,auStack_3a8);
    iStack_1c8 = iStack_390;
    puStack_1c0 = puStack_3d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1b8,auStack_3c8);
    uStack_180 = 0;
    func_0x00010724cbe8(auStack_178,auStack_270);
    puStack_158 = puVar1;
    FUN_108c60330(&puStack_150,&puStack_230);
    FUN_108c6029c(&puStack_2f8,&puStack_150,puVar2);
    func_0x000108c60250(&puStack_150);
    func_0x000108c60250(&puStack_230);
    puStack_2d8 = puStack_2f8;
    if (puStack_2f8 != (undefined8 *)0x0) {
      do {
        func_0x000108c62eb8();
      } while (extraout_w10_01 != 0);
    }
    puVar3 = (undefined8 *)0xb8;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_110abb0f0;
    puVar8 = puVar3 + 3;
    puVar3[4] = 0;
    *puVar8 = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0x3cb0b1bb;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0x32aaaba7;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x16] = 0;
    puStack_298 = puVar8;
    puStack_290 = puVar3;
    puStack_288 = puVar8;
    puStack_280 = puVar3;
    do {
      func_0x000108c62ea8();
    } while (extraout_w10_02 != 0);
    ppuStack_2a0 = &PTR_DAT_110abb088;
    puStack_150 = puVar8;
    puStack_148 = puVar3;
    do {
      func_0x000108c62ea8();
    } while (extraout_w10_03 != 0);
    do {
      func_0x000108c62ea8();
    } while (extraout_w10_04 != 0);
    ppuVar4 = &puStack_150;
    puStack_338 = puVar8;
    puStack_330 = puVar3;
    FUN_108c6008c(ppuVar4);
    func_0x000107c3a5c0();
    puStack_2d0 = puStack_2d8;
    puStack_2c0 = puVar8;
    puStack_2b8 = puVar3;
    puStack_2a8 = puVar3;
    puStack_2b0 = puVar8;
    if (puStack_2d8 != (undefined8 *)0x0) {
      do {
        func_0x000108c62eb8();
        puStack_2c0 = puStack_298;
        puStack_2b8 = puStack_290;
        puStack_2a8 = puStack_280;
        puStack_2b0 = puStack_288;
      } while (extraout_w10_05 != 0);
    }
    puStack_298 = (undefined8 *)0x0;
    puStack_290 = (undefined8 *)0x0;
    puStack_288 = (undefined8 *)0x0;
    puStack_280 = (undefined8 *)0x0;
    ppuStack_2c8 = &PTR_DAT_110abb088;
    FUN_108c620f8(&puStack_150,&puStack_2d0);
    FUN_108c61dfc(&puStack_2e8,&puStack_150,ppuVar4);
    FUN_108c6214c(&puStack_150);
    FUN_108c6214c(&puStack_2d0);
    func_0x000107c27f9c(&puStack_2e8);
    FUN_108c61c84(&ppuStack_2a0);
    func_0x000107c27f9c(&puStack_2d8);
    func_0x000107c27f9c(&puStack_2f8);
    puStack_230 = (undefined8 *)0x0;
    puStack_228 = (undefined8 *)0x0;
    puStack_2d0 = (undefined8 *)0x0;
    ppuStack_2c8 = (undefined **)0x0;
    FUN_108c5fca4(&puStack_150,&puStack_338,&puStack_2d0);
    FUN_108c5fcf8(&puStack_230,&puStack_150);
    FUN_108c6008c(&puStack_150);
    FUN_108c6008c(&puStack_2d0);
    FUN_108c46488(&puStack_2d8);
    func_0x0001052b2514(&ppuStack_2a0,puStack_2d8);
    puVar8 = puStack_230;
    puVar3 = puStack_2d8;
    puStack_148 = (undefined8 *)CONCAT44(puStack_148._4_4_,param_4);
    lStack_2e0 = 0;
    puStack_2d8 = (undefined8 *)0x0;
    puStack_140 = puVar3;
    puStack_2e8 = (undefined8 *)0x0;
    puStack_2f8 = puStack_230 + 10;
    lStack_2f0 = CONCAT71(lStack_2f0._1_7_,1);
    puStack_150 = param_2;
    __ZNSt3__15mutex4lockEv();
    puVar5 = puVar8;
    func_0x000108c5fd30();
    if ((int)puVar5 == 0) {
      puVar5 = (undefined8 *)0x20;
      __Znwm();
      *puVar5 = &PTR_SUB_110abafb8;
      puVar5[2] = puStack_148;
      puVar5[1] = puStack_150;
      puStack_140 = (undefined8 *)0x0;
      puVar5[3] = puVar3;
      lVar6 = puVar8[0x13];
      puVar8[0x13] = puVar5;
      if (lVar6 != 0) {
        func_0x000108c62fc4();
      }
      puVar8 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FUN_108c5fcf8(&puStack_2e8,&puStack_230);
      puVar8 = puStack_2e8;
    }
    func_0x000107c2798c(&puStack_2f8);
    if (puVar8 != (undefined8 *)0x0) {
      lStack_2f0 = lStack_2e0;
      puStack_2f8 = puVar8;
      if (lStack_2e0 != 0) {
        do {
          func_0x000108c62ea8();
        } while (extraout_w10_07 != 0);
      }
      FUN_108c5fd7c(&puStack_150,puVar8);
      FUN_108c6008c(&puStack_2f8);
    }
    param_1[1] = puStack_298;
    *param_1 = ppuStack_2a0;
    ppuStack_2a0 = (undefined **)0x0;
    puStack_298 = (undefined8 *)0x0;
    FUN_108c6008c(&puStack_2e8);
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000108c62fb4();
    }
    func_0x0001052b22bc(&ppuStack_2a0);
    puVar8 = puStack_2d8;
    puStack_2d8 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000108c630dc();
    }
    FUN_108c6008c(&puStack_230);
    func_0x000108c632fc();
    func_0x000107c27938(auStack_270);
    func_0x000108c62174(auStack_250);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_368);
    func_0x000108c4cad0(&puStack_350);
    unaff_x26 = &puStack_3d0;
  }
  func_0x000108c62f8c(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c2798c(&puStack_2f8);
    FUN_108c6008c(&puStack_2e8);
    puStack_140 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000108c62fb4();
    }
    func_0x0001052b22bc(&ppuStack_2a0);
    puVar3 = puStack_2d8;
    puStack_2d8 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000108c630dc();
    }
    FUN_108c6008c(&puStack_230);
    func_0x000108c632fc();
    do {
      func_0x000107c27938(auStack_270);
      func_0x000108c62174(auStack_250);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)unaff_x26 + 8));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x25 + 1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_368);
      func_0x000108c4cad0(&puStack_350);
      func_0x000108c630c4();
    } while( true );
  }
  return;
}



/* Entry: 108c5fc8c; end: 108c5fc8f;  */

undefined8 * FUN_108c5fc8c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110abaf78;
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  plVar3 = (long *)param_1[0xb];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar3 + 2);
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[9];
  param_1[9] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    plVar3 = (long *)param_1[7];
    plVar1 = *(long **)(param_1[6] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[8] = 0;
    while (plVar3 != param_1 + 6) {
      plVar3 = (long *)plVar3[1];
      FUN_108c601fc();
    }
  }
  func_0x000108c4cad0(param_1 + 3);
  func_0x000108c4caf4(param_1 + 1);
  return param_1;
}



/* Entry: 108c5fc90; end: 108c5fca3;  */

void FUN_108c5fc90(void)

{
  FUN_108c6014c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5fca4; end: 108c5fcf7;  */

void FUN_108c5fca4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108c62f58();
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  uVar1 = *param_3;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x20[1] = param_3[1];
  *unaff_x20 = uVar1;
  param_3[1] = uVar3;
  *param_3 = uVar2;
  __ZNSt3__18__sp_mut6unlockEv(param_2);
  uVar1 = *param_3;
  unaff_x21[1] = param_3[1];
  *unaff_x21 = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 108c5fcf8; end: 108c5fd7b;  */

undefined8 * FUN_108c5fcf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108c63014();
  return param_1;
}



/* Entry: 108c5fd7c; end: 108c6008b;  */

void FUN_108c5fd7c(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_88;
  long lStack_80;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 *puStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_f8 = param_2;
  lStack_f0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x000108c62ea8();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c62ea8();
    } while (extraout_w10_00 != 0);
  }
  puStack_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_e8 = param_2;
  lStack_e0 = param_3;
  FUN_108c5fca4(&puStack_a0,&uStack_e8,&uStack_b8);
  FUN_108c5fcf8(&puStack_88,&puStack_a0);
  FUN_108c6008c(&puStack_a0);
  FUN_108c6008c(&uStack_b8);
  puVar2 = puStack_88;
  puStack_a0 = puStack_88 + 10;
  uStack_98 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_50 = puVar2;
  lStack_48 = lStack_80;
  if (lStack_80 != 0) {
    do {
      func_0x000108c62ea8();
    } while (extraout_w10_01 != 0);
  }
  while (puVar4 = puVar2, func_0x000108c5fd30(), ((ulong)puVar4 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar2 + 4,&puStack_a0);
  }
  FUN_108c6008c(&puStack_50);
  if (puVar2[0x12] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_58);
    __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x108c5ffa4);
    (*pcVar3)();
  }
  plStack_68 = (long *)puVar2[1];
  plStack_70 = (long *)*puVar2;
  uStack_60 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  func_0x000107c2798c(&puStack_a0);
  FUN_108c6008c(&puStack_88);
  pcVar1 = "creator_profile";
  if (*(int *)(param_1 + 8) != 1) {
    pcVar1 = "unknown";
  }
  func_0x000107c278b8(&puStack_88,pcVar1);
  if (plStack_70 == plStack_68) {
    func_0x000108c633c0();
    func_0x000108c630e8();
    func_0x000108c62f44();
  }
  else {
    if (*plStack_70 != plStack_70[1]) {
      func_0x000108c633c0();
      func_0x000108c630e8();
      func_0x000108c62f44();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_a0);
      func_0x000105c41160(auStack_d8,plStack_70);
      goto LAB_108c5ff48;
    }
    func_0x000108c633c0();
    func_0x000108c630e8();
    func_0x000108c62f44();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_a0);
  auStack_d8[0] = 0;
  uStack_c0 = 0;
LAB_108c5ff48:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_88);
  func_0x000104bee630(&plStack_70);
  func_0x0001052b29c8(uVar5,auStack_d8);
  func_0x000107c279c4(auStack_d8);
  FUN_108c6008c(&uStack_e8);
  FUN_108c6008c(&uStack_f8);
  return;
}


