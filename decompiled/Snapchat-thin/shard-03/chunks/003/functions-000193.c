/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026d2d9c; end: 1026d2e07;  */

void FUN_1026d2d9c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1026d2e08;
  plVar4[2] = lVar2;
  plVar4[3] = lVar5;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[4] = lVar2;
  func_0x000107c5fce8();
  plVar4[5] = lVar2;
  plVar3 = (long *)0x190;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_1026d2074;
  plVar3[0x23] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar3[0x24] = lVar2;
  func_0x000107c5fce8();
  plVar3[0x25] = lVar2;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  plVar3[0x26] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_1026d21a8;
  plVar4[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d27f0,0,0);
  return;
}



/* Entry: 1026d2e08; end: 1026d2e43;  */

void FUN_1026d2e08(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026d2e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026d2e44; end: 1026d2f73;  */

undefined8 FUN_1026d2e44(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eb6cd8;
  func_0x0001000285a8(0x112eb6cd8,&UNK_10dacd398);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1026d2f74; end: 1026d2f8f;  */

void FUN_1026d2f74(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1026d2f90; end: 1026d2fdf;  */

void FUN_1026d2f90(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1026d2fe0; end: 1026d31a7;  */

void FUN_1026d2fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb6860,&UNK_10daccec0);
  puVar1 = &UNK_110539730;
  func_0x000107c613fc(&UNK_110539730,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1026d31a8,puVar1);
  return;
}



/* Entry: 1026d31a8; end: 1026d31b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d31a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar9 = &lStack_60;
  lVar7 = lVar2;
  FUN_1026d3fb4();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112eb6d08);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(lVar8 + _DAT_112eb6d10) = 0;
  *(long *)(lVar8 + _DAT_112eb6d18) = lVar2;
  *(undefined8 *)(lVar8 + _DAT_112eb6d20) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112eb6d28) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112eb6d30) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112eb6d38) = uVar10;
  puVar6 = PTR_s_init_1125d9248;
  lStack_60 = lVar8;
  lStack_58 = lVar7;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c61154(&lStack_60,puVar6);
  param_1[3] = lVar7;
  param_1[4] = &PTR_DAT_110539748;
  *param_1 = plVar9;
  return;
}



/* Entry: 1026d31b8; end: 1026d3277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d31b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb6d08);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d38) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026d3278; end: 1026d34a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1026d3278(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5aa6c();
      if (lVar3 != 1) {
        lVar3 = lVar2;
        func_0x000107c443d0();
        func_0x000107c61180();
        dVar7 = param_1;
        if (lVar3 == 0) {
LAB_1026d341c:
          func_0x000100083b20(&lStack_68);
          lVar3 = lStack_68;
          func_0x000107c4c3f4();
          func_0x000107c61170(lStack_68);
          func_0x000107c5eea0(puVar4);
          func_0x000107c5ee8c();
          (**(code **)(lVar6 + 8))(puVar4,lVar1);
          func_0x0001090220e4();
          func_0x000107c61170(lVar2);
          if (((ulong)puVar4 & 1) != 0) {
            return true;
          }
          return 432000.0 < dVar7 - (double)lVar3;
        }
        func_0x000107c5ee94(lVar5);
        func_0x000107c61170(lVar3);
        (**(code **)(lVar6 + 0x20))(lVar5 - extraout_x12_00,lVar5,lVar1);
        func_0x000107c5ee84();
        dVar7 = param_1;
        (**(code **)(lVar6 + 8))(lVar5 - extraout_x12_00,lVar1);
        if (param_1 <= 0.0) goto LAB_1026d341c;
      }
      func_0x000107c61170(lVar2);
    }
  }
  return false;
}



/* Entry: 1026d34a8; end: 1026d350f;  */

void FUN_1026d34a8(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(long *)(unaff_x22 + 0x110) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1026d3510;
  plVar2[0x11] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d39f8,0,0);
  return;
}



/* Entry: 1026d3510; end: 1026d3587;  */

void FUN_1026d3510(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x128);
  uVar2 = *(undefined8 *)(lVar3 + 0x118);
  *(undefined8 *)(lVar3 + 0x130) = param_1;
  func_0x000107c615c0();
  func_0x000100eea164();
  *(undefined8 *)(lVar3 + 0x138) = uVar1;
  func_0x000107c5fca8();
  *(undefined8 *)(lVar3 + 0x140) = uVar2;
  *(undefined8 *)(lVar3 + 0x148) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d3588,uVar2,uVar1);
  return;
}



/* Entry: 1026d3588; end: 1026d37bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d3588(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x130);
  if (lVar7 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  }
  else {
    func_0x000100083b20(unaff_x22 + 0xf0);
    uVar5 = *(ulong *)(unaff_x22 + 0xf0);
    uVar2 = uVar5;
    func_0x0001090220d0();
    func_0x000107c615e8(uVar5);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
    }
    else {
      lVar1 = *(long *)(unaff_x22 + 0x110);
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      *(undefined **)(unaff_x22 + 0x150) = puVar3;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      func_0x000107c61614(unaff_x22 + 0xb0,0);
      *(long *)(unaff_x22 + 0xa0) = lVar7;
      *(undefined **)(unaff_x22 + 0xa8) = puVar3;
      *(undefined ***)(unaff_x22 + 0xb8) = &PTR_DAT_110539768;
      func_0x000107c61604(unaff_x22 + 0xb0,lVar1);
      func_0x000107c61174(lVar7);
      func_0x000107c61174(puVar3);
      func_0x000100083b20(unaff_x22 + 0x100);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
      func_0x00010008a7c8(unaff_x22 + 0xf8,unaff_x22 + 0xa0);
      func_0x000107c61574(uVar6);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
      func_0x000100083b20(unaff_x22 + 0x50);
      func_0x000107c61574(uVar6);
      lVar1 = lVar1 + _DAT_112eb6d08;
      func_0x000107c61428(lVar1,unaff_x22 + 0xc0,0x21,0);
      FUN_1026d2cdc(unaff_x22 + 0x50,lVar1);
      func_0x000107c614a8(unaff_x22 + 0xc0);
      func_0x000107c61428(lVar1,unaff_x22 + 0xd8,0x20,0);
      if (*(long *)(lVar1 + 0x18) != 0) {
        func_0x0001026d2f00(lVar1,unaff_x22 + 0x78);
        func_0x000107c614a8(unaff_x22 + 0xd8);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
        lVar7 = *(long *)(unaff_x22 + 0x98);
        func_0x0001000a8868(unaff_x22 + 0x78,uVar6);
        (**(code **)(lVar7 + 8))(uVar6,lVar7);
        *(undefined8 *)(unaff_x22 + 0x158) = uVar6;
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x160) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_1026d37c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
                  (plVar4,unaff_x22 + 0x180,uVar6,PTR___sSbN_11034dd40);
        return;
      }
      func_0x0001026d2ecc(unaff_x22 + 0xa0);
      func_0x000107c614a8(unaff_x22 + 0xd8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
      lVar7 = *(long *)(unaff_x22 + 0x130);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61170(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026d37bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1026d37c0; end: 1026d380b;  */

void FUN_1026d37c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x158);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1026d380c,*(undefined8 *)(lVar2 + 0x140),*(undefined8 *)(lVar2 + 0x148));
  return;
}



/* Entry: 1026d380c; end: 1026d38c7;  */

void FUN_1026d380c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  bVar1 = *(byte *)(unaff_x22 + 0x180);
  lVar2 = unaff_x22 + 0x78;
  func_0x0001000834e4();
  if ((bVar1 & 1) != 0) {
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x168) = lVar2;
    if (lVar2 == 0) {
      lVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0x170) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x178) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d38c8,lVar2);
    return;
  }
  func_0x0001026d2ecc(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001026d389c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1026d38c8; end: 1026d398b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d38c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x110);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x1026d3918;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  *(long *)(lVar2 + _DAT_112eb6d10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1026d398c; end: 1026d39df;  */

void FUN_1026d398c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x0001026d2ecc(unaff_x22 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x0001026d39dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 1026d39e0; end: 1026d39f7;  */

void FUN_1026d39e0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d39f8,0,0);
  return;
}



/* Entry: 1026d39f8; end: 1026d3b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d39f8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(lVar3 + _DAT_112fa9950);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1026d3b34;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_1105397b8;
    func_0x000107c613fc(&UNK_1105397b8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_1026d3fd4;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1026d2f90;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105397d0;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c503fc(lVar3);
    func_0x000107c60bd0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001026d3b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1026d3b34; end: 1026d3ba7;  */

void FUN_1026d3b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1026d3b74,0,0);
  return;
}



/* Entry: 1026d3ba8; end: 1026d3c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d3ba8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = *(long *)(lStack_48 + _DAT_112fa9950);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5029c(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1026d3c6c; end: 1026d3ccb; -[_TtC36MapStartupPromptPluginImplementation23ShareBackBannerPluginV2 init] */

void FUN_1026d3c6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStartupPromptPluginImplementation.ShareBackBannerPluginV2",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d3c98);
  (*pcVar1)();
}



/* Entry: 1026d3ccc; end: 1026d3d43; -[_TtC36MapStartupPromptPluginImplementation23ShareBackBannerPluginV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026d3ccc(long param_1)

{
  long lVar1;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6d20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6d28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6d30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6d18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6d38));
  param_1 = param_1 + _DAT_112eb6d08;
  lVar1 = 0x112eb6cd8;
  func_0x0001000285a8(0x112eb6cd8,&UNK_10dacd398);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1026d3d44; end: 1026d3d4b;  */

undefined8 FUN_1026d3d44(void)

{
  return 3;
}



/* Entry: 1026d3d4c; end: 1026d3d6f;  */

uint FUN_1026d3d4c(uint param_1)

{
  FUN_1026d3278();
  return param_1 & 1;
}



/* Entry: 1026d3d70; end: 1026d3dbf;  */

void FUN_1026d3d70(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026d3dc0;
  plVar3[0x21] = param_1;
  plVar3[0x22] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x23] = lVar1;
  func_0x000107c5fce8();
  plVar3[0x24] = lVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  plVar3[0x25] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_1026d3510;
  plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d39f8,0,0);
  return;
}



/* Entry: 1026d3dc0; end: 1026d3e03;  */

void FUN_1026d3dc0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026d3e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1026d3e04; end: 1026d3f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d3e04(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  FUN_1026d3ba8(param_2,param_3,0);
  func_0x000100083b20(&uStack_58);
  func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d3f18);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x000107c5628c(uStack_58);
      func_0x000107c61170(uStack_58);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d3f20);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d3f1c);
  (*pcVar1)();
}



/* Entry: 1026d3f20; end: 1026d3f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d3f20(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = _DAT_112eb6d08;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112eb6d08,auStack_68,0x21,0);
  FUN_1026d2cdc(&uStack_50,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_68);
  lVar1 = _DAT_112eb6d10;
  if (*(long *)(unaff_x20 + _DAT_112eb6d10) != 0) {
    func_0x000107c61450();
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  return;
}



/* Entry: 1026d3f94; end: 1026d3fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d3f94(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  FUN_1026d3ba8(param_2,param_3,0);
  func_0x000100083b20(&uStack_58);
  func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d3f18);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x000107c5628c(uStack_58);
      func_0x000107c61170(uStack_58);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d3f20);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d3f1c);
  (*pcVar1)();
}



/* Entry: 1026d3fb4; end: 1026d3fd3;  */

void FUN_1026d3fb4(void)

{
  func_0x000107c61168(&PTR_PTR_112859280);
  return;
}



/* Entry: 1026d3fd4; end: 1026d4003;  */

void FUN_1026d3fd4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1026d4004; end: 1026d401f;  */

void FUN_1026d4004(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1026d4020; end: 1026d4317;  */

void FUN_1026d4020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb6d68,&UNK_10dacd4b0);
  puVar1 = &UNK_110539818;
  func_0x000107c613fc(&UNK_110539818,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_1026d4318,puVar1);
  return;
}



/* Entry: 1026d4318; end: 1026d434b;  */

void FUN_1026d4318(void)

{
  long unaff_x20;
  
  func_0x0001026d4124(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1026d434c; end: 1026d449f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1026d434c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d70) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d78) = 0;
  lVar1 = _DAT_113804748;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d90) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d98) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6da0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6da8) = param_6;
  func_0x0001026d66b0(param_7,unaff_x20 + _DAT_112eb6db0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb6db8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6dc0) = param_9;
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x0001026d2ecc(param_7);
  return puVar3;
}



/* Entry: 1026d44a0; end: 1026d45a3;  */

void FUN_1026d44a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  *(long *)(unaff_x22 + 0x120) = param_2;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1026d44ec;
  plVar1[2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d4d44,0,0);
  return;
}



/* Entry: 1026d45a4; end: 1026d4d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d45a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long unaff_x22;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar14 = *(long *)(unaff_x22 + 0x130);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
  if (lVar14 == 0) {
    func_0x000107c61174();
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
    FUN_1026d5274(0x4020000000000000,0x3ff0000000000000,0x3ff0000000000000,uVar17,lVar14);
    func_0x000107c6142c(lVar14);
  }
  lVar23 = *(long *)(unaff_x22 + 0x120);
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  func_0x000107c451b0();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c3378;
  func_0x000107c61168();
  func_0x000107c4a978();
  func_0x000107c61180();
  puVar5 = &UNK_110539898;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_110539898,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,lVar23);
  func_0x000107c613fc(&UNK_110539898,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar23);
  lVar14 = _DAT_112eb6db0;
  lVar21 = *(long *)(lVar23 + _DAT_112eb6db0);
  lVar24 = ((undefined8 *)(lVar21 + _DAT_112fa9998))[1];
  if (lVar24 == 0) {
LAB_1026d4c10:
    func_0x0001026d66b0(lVar23 + lVar14,unaff_x22 + 0xa0);
    lVar14 = unaff_x22 + 0xb0;
    func_0x000107c61618();
    lVar24 = *(long *)(unaff_x22 + 0xb8);
    func_0x0001026d2ecc(unaff_x22 + 0xa0);
    if (lVar14 != 0) {
      func_0x000107c614f0(lVar14);
      (**(code **)(lVar24 + 0x18))();
      func_0x000107c615e8(lVar14);
    }
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x140));
    func_0x000107c61170(uVar17);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(puVar4);
  }
  else {
    uVar12 = *(undefined8 *)(lVar21 + _DAT_112fa9998);
    lVar18 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x120) + _DAT_112eb6da0) + _DAT_112fcd5d8);
    func_0x000107c61434(lVar24);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar18 == 0) {
LAB_1026d4c04:
      func_0x000107c6142c(lVar24);
      goto LAB_1026d4c10;
    }
    uVar20 = *(undefined8 *)(lVar21 + _DAT_112fa9990);
    uVar1 = ((undefined8 *)(lVar21 + _DAT_112fa9990))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar20,uVar1);
    func_0x000107c6142c(uVar1);
    lVar22 = lVar18;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c61170(uVar20);
    func_0x000107c615e8(lVar18);
    if (lVar22 == 0) goto LAB_1026d4c04;
    lVar18 = ((undefined8 *)(lVar22 + _DAT_112fcd618))[1];
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(lVar22 + _DAT_112fcd618);
    *(long *)(unaff_x22 + 0x100) = lVar18;
    lVar15 = ((long *)(lVar22 + _DAT_112fcd620))[1];
    if (lVar15 == 0) {
      lVar13 = lVar18;
      func_0x000107c61434();
    }
    else {
      lVar19 = *(long *)(lVar22 + _DAT_112fcd620);
      func_0x000107c61434(lVar18);
      func_0x000107c61434(lVar15);
      lVar13 = lVar19;
      lVar11 = lVar15;
      func_0x000107c5fadc();
      lVar6 = lVar13;
      func_0x00010901e6c8();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      if (lVar6 == 0) {
        func_0x000107c6142c();
      }
      else {
        lVar19 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
        func_0x000107c6142c(lVar18);
        func_0x000107c6142c();
        lVar18 = lVar15;
        lVar15 = lVar11;
      }
      *(long *)(unaff_x22 + 0xf8) = lVar19;
      *(long *)(unaff_x22 + 0x100) = lVar15;
      lVar13 = lVar18;
      lVar18 = lVar15;
    }
    *(undefined8 *)(unaff_x22 + 0x108) = uVar12;
    *(long *)(unaff_x22 + 0x110) = lVar24;
    func_0x000100e8b654();
    puVar7 = &UNK_10dacd598;
    lVar15 = unaff_x22 + 0xf8;
    func_0x000107c601fc(&UNK_10dacd598,lVar15,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                        PTR___sSSN_11034da80,lVar13,lVar13,lVar13);
    func_0x000107c61170(lVar22);
    func_0x000107c6142c(lVar18);
    func_0x000107c6142c(lVar24);
    lVar18 = ((undefined8 *)(lVar21 + _DAT_112fa99a0))[1];
    lVar24 = lVar15;
    if (lVar18 == 0) goto LAB_1026d4c04;
    lVar13 = *(long *)(unaff_x22 + 0x120);
    uVar12 = *(undefined8 *)(lVar21 + _DAT_112fa99a0);
    lVar22 = *(long *)(lVar13 + _DAT_112eb6d88);
    func_0x000107c61434(lVar18);
    func_0x0001090220ec(lVar22);
    puVar8 = PTR_PTR_1126b0ae0;
    func_0x000107c61168();
    func_0x000107c5fadc(puVar7,lVar15);
    func_0x000107c6142c(lVar15);
    lVar21 = lVar18;
    func_0x000107c5fadc(uVar12,lVar18);
    func_0x000107c6142c(lVar18);
    *(code **)(unaff_x22 + 0x30) = FUN_1026d6db4;
    *(undefined **)(unaff_x22 + 0x38) = puVar4;
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1105398b0;
    lVar24 = unaff_x22 + 0x10;
    func_0x000107c60bc4();
    uVar20 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(uVar20);
    FUN_1026d779c();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar21);
    puVar9 = PTR_PTR_1126b15a0;
    func_0x000107c61168();
    func_0x000107c3ee90();
    func_0x000107c61180();
    func_0x000107c61170(uVar20);
    *(code **)(unaff_x22 + 0x60) = FUN_1026d6db4;
    *(undefined **)(unaff_x22 + 0x68) = puVar4;
    *(undefined **)(unaff_x22 + 0x40) = puVar10;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x50) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_1105398d8;
    lVar21 = unaff_x22 + 0x40;
    func_0x000107c60bc4();
    uVar20 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(uVar20);
    *(undefined8 *)(unaff_x22 + 0x90) = 0x1026d6dbc;
    *(undefined **)(unaff_x22 + 0x98) = puVar5;
    *(undefined **)(unaff_x22 + 0x70) = puVar10;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x80) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x88) = &UNK_110539900;
    lVar18 = unaff_x22 + 0x70;
    func_0x000107c60bc4();
    uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(uVar20);
    func_0x000107c40afc((double)lVar22);
    func_0x000107c61180();
    func_0x000107c60bd0(lVar18);
    func_0x000107c60bd0(lVar21);
    func_0x000107c61170(puVar9);
    func_0x000107c60bd0(lVar24);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(puVar7);
    uVar12 = *(undefined8 *)(lVar13 + _DAT_112eb6d78);
    *(undefined **)(lVar13 + _DAT_112eb6d78) = puVar8;
    func_0x000107c61170(uVar12);
    lVar21 = *(long *)(lVar13 + _DAT_112eb6da8);
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar24 = lVar21;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar21);
    if (lVar24 != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
      puVar7 = &UNK_110539938;
      func_0x000107c613fc(&UNK_110539938,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar24;
      *(undefined8 *)(puVar7 + 0x18) = uVar20;
      puVar10 = &UNK_110539960;
      func_0x000107c613fc(&UNK_110539960,0x20,7);
      *(undefined **)(puVar10 + 0x10) = &UNK_10dacd5b0;
      *(undefined **)(puVar10 + 0x18) = puVar7;
      func_0x000107c615f0(lVar24);
      func_0x000107c61174(uVar20);
      func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dacd5c0,puVar10,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar10);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c615e8(lVar24);
      uVar16 = 1;
      goto LAB_1026d4c84;
    }
    func_0x0001026d66b0(lVar23 + lVar14,unaff_x22 + 0xc0);
    lVar14 = unaff_x22 + 0xd0;
    func_0x000107c61618();
    lVar24 = *(long *)(unaff_x22 + 0xd8);
    func_0x0001026d2ecc(unaff_x22 + 0xc0);
    if (lVar14 != 0) {
      func_0x000107c614f0(lVar14);
      (**(code **)(lVar24 + 0x18))();
      func_0x000107c615e8(lVar14);
    }
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x140));
    func_0x000107c61170(uVar17);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(puVar4);
  }
  func_0x000107c61574(puVar5);
  uVar16 = 0;
LAB_1026d4c84:
  func_0x000107c61170(puVar3);
  **(undefined1 **)(unaff_x22 + 0x118) = uVar16;
                    /* WARNING: Could not recover jumptable at 0x0001026d4cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026d4d2c; end: 1026d4d43;  */

void FUN_1026d4d2c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d4d44,0,0);
  return;
}



/* Entry: 1026d4d44; end: 1026d4de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d4d44(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb6d90);
  func_0x000107c43a58();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x18) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1026d4de8;
    plVar3[0xb] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d62a8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001026d4de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 1026d4de8; end: 1026d4e47;  */

void FUN_1026d4de8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1026d4e48;
  }
  else {
    pcVar1 = FUN_1026d5018;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026d4e48; end: 1026d5017;  */

void FUN_1026d4e48(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x28);
  func_0x000107c43a60();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x28));
LAB_1026d4fdc:
    func_0x000107c615e8(uVar8);
  }
  else {
    uVar3 = 0;
    FUN_1026d757c(0,0x112de0af8,&PTR_PTR_1126ba270);
    uVar4 = uVar2;
    func_0x000107c5fc54(uVar2,uVar3);
    func_0x000107c61170(uVar2);
    if (uVar4 >> 0x3e == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_1026d4ec0;
LAB_1026d4fc0:
      uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
      func_0x000107c6142c(uVar4);
LAB_1026d4fd4:
      func_0x000107c61170(uVar9);
      goto LAB_1026d4fdc;
    }
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
    if (uVar2 == 0) goto LAB_1026d4fc0;
LAB_1026d4ec0:
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d5018);
        (*pcVar1)();
      }
      lVar5 = *(long *)(uVar4 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      uVar3 = uVar4;
      FUN_1026d71b0(0,uVar4);
    }
    func_0x000107c6142c(uVar4);
    lVar7 = lVar5;
    func_0x000107c3f710();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x18);
      func_0x000107c42504();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x000107c5faec(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uVar9);
        func_0x000107c615e8(uVar8);
        func_0x000107c61170(lVar6);
        goto LAB_1026d4fe8;
      }
      func_0x000107c61170(lVar5);
      goto LAB_1026d4fd4;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(lVar5);
  }
  lVar7 = 0;
  uVar3 = 0;
LAB_1026d4fe8:
                    /* WARNING: Could not recover jumptable at 0x0001026d5000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar7,uVar3);
  return;
}



/* Entry: 1026d5018; end: 1026d5103;  */

void FUN_1026d5018(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026d5058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 1026d5104; end: 1026d51bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d5104(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb6db0) + _DAT_112fa9990);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c5fadc(uVar3,uVar4);
    func_0x000107c6142c(uVar4);
    uVar4 = uVar3;
    func_0x000108ffe710(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    lVar2 = 1;
    func_0x000108ffef38(1,uVar4,1);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026d51b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Entry: 1026d51bc; end: 1026d5273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d51bc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x28));
  puVar1 = (undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb6db0) + _DAT_112fa9990);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  uVar2 = uVar3;
  func_0x000108ffe710(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = 1;
  func_0x000108ffef38(1,uVar2,1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001026d5270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1026d5274; end: 1026d5423;  */

undefined *
FUN_1026d5274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  ppuVar5 = &puStack_b0;
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c486f8(0x4046000000000000,0x4046000000000000);
  puVar3 = &UNK_110539988;
  func_0x000107c613fc(&UNK_110539988,0x50,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x4046000000000000;
  *(undefined8 *)(puVar3 + 0x18) = 0x4046000000000000;
  *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  *(undefined8 *)(puVar3 + 0x40) = param_2;
  *(undefined8 *)(puVar3 + 0x48) = param_3;
  puVar4 = &UNK_1105399b0;
  func_0x000107c613fc(&UNK_1105399b0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1026d7434;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = FUN_1026d744c;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100f9148c;
  puStack_98 = &UNK_1105399c8;
  puStack_88 = puVar4;
  func_0x000107c60bc4(&puStack_b0);
  puVar6 = puStack_88;
  func_0x000107c61174();
  func_0x000107c61434(param_5);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = puVar2;
  func_0x000107c45138(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar2);
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x80,0x133,0x3a,1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d5424);
  (*pcVar1)();
}



/* Entry: 1026d5424; end: 1026d54d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d5424(long param_1)

{
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112eb6d78) != 0) {
      func_0x000107c4207c();
    }
    FUN_1026d5828();
    func_0x000100083b20(auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x18))(uStack_58,lStack_50);
    func_0x000107c61170(param_1);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 1026d54d8; end: 1026d552b;  */

void FUN_1026d54d8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1026d552c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1026d552c; end: 1026d5827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d552c(double param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_b0 + -extraout_x8;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eb6d78);
  *(undefined8 *)(unaff_x20 + _DAT_112eb6d78) = 0;
  func_0x000107c61170(uVar5);
  lVar3 = _DAT_113804748;
  if (*(long *)(unaff_x20 + _DAT_112eb6d70) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_113804748,auStack_88,0,0);
    func_0x0001026d74ec(unaff_x20 + lVar3,puVar7,0x112d373d8,&UNK_10d9014c0);
    puVar6 = puVar7;
    (**(code **)(lVar10 + 0x30))(puVar7,1,lVar4);
    if ((int)puVar6 == 1) {
      func_0x0001026d746c(puVar7,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar8,puVar7,lVar4);
      func_0x000107c5eea0(lVar9);
      func_0x000107c5ee68(lVar8);
      pcVar12 = *(code **)(lVar10 + 8);
      (*pcVar12)(lVar9,lVar4);
      lVar3 = _DAT_112eb6db0;
      if (0.5 <= param_1) {
        (*pcVar12)(lVar8,lVar4);
      }
      else {
        func_0x0001026d66b0(unaff_x20 + _DAT_112eb6db0,auStack_b0);
        puVar7 = auStack_a0;
        func_0x000107c61618();
        lVar9 = lStack_98;
        func_0x0001026d2ecc(auStack_b0);
        if (puVar7 != (undefined1 *)0x0) {
          puVar6 = puVar7;
          func_0x000107c614f0(puVar7);
          puVar1 = (undefined8 *)(*(long *)(unaff_x20 + lVar3) + _DAT_112fa9990);
          uVar5 = *puVar1;
          uVar2 = puVar1[1];
          pcVar11 = *(code **)(lVar9 + 0x10);
          func_0x000107c61434(uVar2);
          (*pcVar11)(uVar5,uVar2,puVar6,lVar9);
          func_0x000107c615e8(puVar7);
          func_0x000107c6142c(uVar2);
        }
        func_0x000100083b20(auStack_b0);
        lVar3 = lStack_98;
        func_0x0001000a8868(auStack_b0,lStack_98);
        (**(code **)(lStack_90 + 0x10))(lVar3,lStack_90);
        (*pcVar12)(lVar8,lVar4);
        func_0x0001000834e4(auStack_b0);
      }
    }
    func_0x0001026d66b0(unaff_x20 + _DAT_112eb6db0,auStack_b0);
    puVar7 = auStack_a0;
    func_0x000107c61618();
    func_0x0001026d2ecc(auStack_b0);
    if (puVar7 != (undefined1 *)0x0) {
      func_0x000107c614f0(puVar7);
      (**(code **)(lStack_98 + 0x18))();
      func_0x000107c615e8(puVar7);
    }
  }
  return;
}



/* Entry: 1026d5828; end: 1026d5977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d5828(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar7 = _DAT_112eb6d70;
  if (*(long *)(unaff_x20 + _DAT_112eb6d70) == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eb6db0);
    lVar6 = plVar1[1];
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    puVar2 = (undefined8 *)(*plVar1 + _DAT_112fa9990);
    uVar5 = puVar2[1];
    *(undefined8 *)(lVar3 + 0x20) = *puVar2;
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c615f0(lVar6);
    func_0x000107c61434(uVar5);
    lVar4 = unaff_x20;
    func_0x000107c61174();
    func_0x000103a28f00(lVar6,lVar4,0,lVar3,0);
    lStack_50 = lVar6;
    func_0x00010008a7c8(&uStack_48,&lStack_50);
    func_0x000100083b20(&lStack_50);
    func_0x000107c61574(uStack_48);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    *(long *)(unaff_x20 + lVar7) = lStack_50;
    func_0x000107c615e8(uVar5);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if (lVar7 != 0) {
      func_0x000107c615f0(lVar7);
      func_0x000107c4ee7c();
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1026d5978; end: 1026d5a07;  */

void FUN_1026d5978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  func_0x0001026d74ac(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d5a08,uVar2,uVar3);
  return;
}



/* Entry: 1026d5a08; end: 1026d5b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d5a08(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  code *pcVar11;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  lVar4 = _DAT_112eb6d78;
  func_0x000107c5c2e0(uVar10);
  lVar5 = _DAT_112eb6db0;
  func_0x0001026d66b0(lVar2 + _DAT_112eb6db0,unaff_x22 + 0x10);
  lVar7 = unaff_x22 + 0x20;
  func_0x000107c61618();
  lVar9 = *(long *)(unaff_x22 + 0x28);
  func_0x0001026d2ecc(unaff_x22 + 0x10);
  if (lVar7 != 0) {
    lVar6 = lVar7;
    func_0x000107c614f0(lVar7);
    puVar1 = (undefined8 *)(*(long *)(lVar2 + lVar5) + _DAT_112fa9990);
    uVar10 = *puVar1;
    uVar3 = puVar1[1];
    pcVar11 = *(code **)(lVar9 + 8);
    func_0x000107c61434(uVar3);
    (*pcVar11)(uVar10,uVar3,lVar6,lVar9);
    func_0x000107c6142c(uVar3);
    func_0x000107c615e8(lVar7);
  }
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar10);
  (**(code **)(lVar7 + 8))(uVar10,lVar7);
  func_0x0001000834e4(unaff_x22 + 0x10);
  lVar7 = *(long *)(lVar2 + lVar4);
  if (lVar7 != 0) {
    func_0x000107c403bc();
    func_0x000107c61180();
    if (lVar7 != 0) {
      puVar8 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      func_0x000107c48c2c();
      func_0x000107c53fcc();
      func_0x000107c3d6fc(lVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001026d5b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026d5b98; end: 1026d5bd3;  */

void FUN_1026d5b98(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026d5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026d5bd4; end: 1026d5beb;  */

void FUN_1026d5bd4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d5bec,0,0);
  return;
}



/* Entry: 1026d5bec; end: 1026d5f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d5bec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  puVar3 = *(undefined1 **)(*(long *)(unaff_x22 + 0x58) + _DAT_112eb6d80);
  func_0x000107c51d00();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x60) = puVar4;
  func_0x000107c61170();
  if (puVar4 != (undefined1 *)0x0) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x58) + _DAT_112eb6da0) + _DAT_112fcd5d8);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x68) = lVar5;
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(unaff_x22 + 0x58) + _DAT_112eb6db0) + _DAT_112fa9990);
      uVar9 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar9,uVar2);
      func_0x000107c6142c(uVar2);
      lVar6 = lVar5;
      func_0x000107c4c39c();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x70) = lVar6;
      func_0x000107c61170(uVar9);
      if (lVar6 == 0) {
        func_0x000107c615e8(puVar4);
        func_0x000107c615e8(lVar5);
      }
      else {
        lVar10 = ((undefined8 *)(lVar6 + _DAT_112fcd628))[1];
        if (lVar10 != 0) {
          uVar11 = *(undefined8 *)(lVar6 + _DAT_112fcd628);
          puVar7 = PTR_PTR_1126afd38;
          func_0x000107c61168();
          func_0x000107c61434(lVar10);
          func_0x000107c3e9b0();
          func_0x000107c61180();
          uVar9 = *puVar1;
          uVar2 = puVar1[1];
          func_0x000107c61434(uVar2);
          func_0x000107c5fadc(uVar9,uVar2);
          func_0x000107c6142c(uVar2);
          puVar8 = puVar7;
          func_0x000107c5e868();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(puVar7);
          func_0x000107c5fadc(uVar11,lVar10);
          func_0x000107c6142c(lVar10);
          puVar7 = puVar8;
          func_0x000107c5e458();
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          func_0x000107c61170(puVar8);
          lVar5 = ((undefined8 *)(lVar6 + _DAT_112fcd630))[1];
          if (lVar5 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar6 + _DAT_112fcd630);
            func_0x000107c61434(lVar5);
            func_0x000107c5fadc(uVar9,lVar5);
            func_0x000107c6142c(lVar5);
          }
          puVar8 = puVar7;
          func_0x000107c5e780();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(puVar7);
          puVar7 = puVar8;
          func_0x000107c5e770();
          func_0x000107c61180();
          *(undefined **)(unaff_x22 + 0x78) = puVar7;
          func_0x000107c61170(puVar8);
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_1026d5f4c;
          func_0x000107c61448(unaff_x22 + 0x10,1);
          FUN_1026d606c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        func_0x000107c615e8(puVar4);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(lVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x0001026d5eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0);
      return;
    }
    func_0x000107c615e8();
    puVar3 = puVar4;
  }
  FUN_1026d7534();
  func_0x000107c613f8(&UNK_110539b10,puVar3,0,0);
  *puVar3 = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001026d5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026d5f4c; end: 1026d5fb7;  */

void FUN_1026d5f4c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1026d5fb8;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_1026d6014;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026d5fb8; end: 1026d6013;  */

void FUN_1026d5fb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001026d6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 1026d6014; end: 1026d606b;  */

void FUN_1026d6014(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001026d6068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026d606c; end: 1026d61f3;  */

void FUN_1026d606c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3ecc8(param_3);
  func_0x000107c61180();
  FUN_1026d757c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar6 + 0x68))
            (lVar5,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar2 = lVar5;
  func_0x000107c5fff0(lVar5);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  puVar3 = &UNK_110539a00;
  func_0x000107c613fc(&UNK_110539a00,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_1026d7574;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010a2bbc;
  puStack_68 = &UNK_110539a18;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c4329c(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1026d61f4; end: 1026d628f;  */

void FUN_1026d61f4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_4);
    return;
  }
  FUN_1026d7534();
  puVar1 = &UNK_110539b10;
  func_0x000107c613f8(&UNK_110539b10,param_1,0,0);
  *param_1 = 0;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_4,uVar2);
  return;
}



/* Entry: 1026d6290; end: 1026d62a7;  */

void FUN_1026d6290(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d62a8,0,0);
  return;
}



/* Entry: 1026d62a8; end: 1026d6397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d62a8(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x22;
  
  puVar2 = *(undefined1 **)(*(long *)(unaff_x22 + 0x58) + _DAT_112eb6dc0);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d6398);
    (*pcVar1)();
  }
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x60) = puVar3;
  func_0x000107c61170();
  if (puVar3 != (undefined1 *)0x0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1026d6398;
    func_0x000107c61448(unaff_x22 + 0x10,1);
    FUN_1026d6470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_1026d7534();
  func_0x000107c613f8(&UNK_110539b10,puVar2,0,0);
  *puVar2 = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001026d6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026d6398; end: 1026d6403;  */

void FUN_1026d6398(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1026d6404;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x1026d643c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026d6404; end: 1026d646f;  */

void FUN_1026d6404(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001026d6438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 1026d6470; end: 1026d660f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d6470(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(*(long *)(param_3 + _DAT_112eb6db0) + _DAT_112fa9990);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  FUN_1026d757c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar3);
  lVar5 = lVar8;
  func_0x000107c5fff0(lVar8);
  (**(code **)(lVar9 + 8))(lVar8,lVar3);
  puVar6 = &UNK_110539a50;
  func_0x000107c613fc(&UNK_110539a50,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  pcStack_60 = FUN_1026d75bc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101043a98;
  puStack_68 = &UNK_110539a68;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_58);
  func_0x000107c5b49c(param_2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 1026d6610; end: 1026d66eb;  */

void FUN_1026d6610(undefined1 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 == 0)) {
    **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
    return;
  }
  FUN_1026d7534();
  puVar1 = &UNK_110539b10;
  func_0x000107c613f8(&UNK_110539b10,param_1,0,0);
  *param_1 = 0;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 1026d66ec; end: 1026d674b; -[_TtC36MapStartupPromptPluginImplementation24ShareBackBannerPresenter init] */

void FUN_1026d66ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStartupPromptPluginImplementation.ShareBackBannerPresenter",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d6718);
  (*pcVar1)();
}



/* Entry: 1026d674c; end: 1026d68bf; -[_TtC36MapStartupPromptPluginImplementation24ShareBackBannerPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026d674c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6d98));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb6d88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb6d80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb6d90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb6da0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb6da8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb6dc0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6db8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb6d70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb6d78));
  func_0x0001026d746c(param_1 + _DAT_113804748,0x112d373d8,&UNK_10d9014c0);
  param_1 = param_1 + _DAT_112eb6db0;
  (*(code *)(undefined *)0x1026d8888)();
  return param_1;
}



/* Entry: 1026d68c0; end: 1026d68d3;  */

bool FUN_1026d68c0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026d68d4; end: 1026d697f;  */

void FUN_1026d68d4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026d6980; end: 1026d698f;  */

void FUN_1026d6980(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1026d6990; end: 1026d6a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d6990(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  if (*(long *)(unaff_x20 + _DAT_112eb6d70) != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112eb6d70) = 0;
    func_0x000107c615e8();
    func_0x0001026d66b0(unaff_x20 + _DAT_112eb6db0,auStack_40);
    puVar1 = auStack_30;
    func_0x000107c61618();
    func_0x0001026d2ecc(auStack_40);
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c614f0(puVar1);
      (**(code **)(lStack_28 + 0x18))();
      func_0x000107c615e8(puVar1);
    }
  }
  return;
}



/* Entry: 1026d6a18; end: 1026d6a3f; -[_TtC36MapStartupPromptPluginImplementation24ShareBackBannerPresenter shareLocationFlowScopeDidDismiss] */

void FUN_1026d6a18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026d6990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026d6a40; end: 1026d6ac7; -[_TtC36MapStartupPromptPluginImplementation24ShareBackBannerPresenter onShareLocationActionCompletedWith:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d6a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x20))(param_4,uStack_50,lStack_48);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 1026d6ac8; end: 1026d6adf;  */

undefined1  [16] FUN_1026d6ac8(void)

{
  return ZEXT816(0x110539850);
}



/* Entry: 1026d6ae0; end: 1026d6b17;  */

void FUN_1026d6ae0(undefined8 param_1)

{
  if (lRam0000000112eb6df0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6eced0);
  return;
}



/* Entry: 1026d6b18; end: 1026d6bc7;  */

void FUN_1026d6b18(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_80 = PTR___sBoWV_11034d678 + 0x40;
  puStack_78 = &UNK_10dacd530;
  puStack_70 = PTR___sBOWV_11034d658 + 0x40;
  puStack_40 = &UNK_10dacd548;
  puStack_38 = &UNK_10dacd548;
  lVar1 = 0x13f;
  puStack_68 = puStack_70;
  puStack_60 = puStack_70;
  puStack_58 = puStack_70;
  puStack_50 = puStack_70;
  puStack_48 = puStack_80;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dacd560;
    func_0x000107c61630(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
  }
  return;
}



/* Entry: 1026d6bc8; end: 1026d6bcf; -[_TtC36MapStartupPromptPluginImplementation24ShareBackBannerPresenter gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1026d6bc8(void)

{
  return 1;
}



/* Entry: 1026d6bd0; end: 1026d6ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d6bd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_50 + -extraout_x8;
  func_0x000107c5bcc0();
  if (param_1 - 4U < 2) {
    lVar1 = 0;
    func_0x000107c5eea4();
    pcVar3 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    func_0x000107c5eea0(puVar4);
    lVar1 = 0;
    func_0x000107c5eea4();
    pcVar3 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    uVar2 = 0;
  }
  (*pcVar3)(puVar4,uVar2,1,lVar1);
  lVar1 = _DAT_113804748;
  func_0x000107c61428(unaff_x20 + _DAT_113804748,auStack_48,0x21,0);
  func_0x000100ed9cbc(puVar4,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 1026d6cd0; end: 1026d6d1f; -[_TtC36MapStartupPromptPluginImplementation24ShareBackBannerPresenter handlePan:] */

/* WARNING: Possible PIC construction at 0x0001026d6d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026d6d0c) */

void FUN_1026d6cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1026d6bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1026d6d20; end: 1026d6d77;  */

void FUN_1026d6d20(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1026d6d78;
  plVar2[0x23] = param_1;
  plVar2[0x24] = lVar3;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  plVar2[0x25] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x1026d44ec;
  plVar1[2] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d4d44,0,0);
  return;
}



/* Entry: 1026d6d78; end: 1026d6db3;  */

void FUN_1026d6d78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026d6db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026d6db4; end: 1026d6ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026d6db4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112eb6d78) != 0) {
      func_0x000107c4207c();
    }
    FUN_1026d5828();
    func_0x000100083b20(auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x18))(uStack_58,lStack_50);
    func_0x000107c61170(lVar1);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 1026d6de0; end: 1026d71af;  */

void FUN_1026d6de0(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_100;
  undefined *puStack_f8;
  
  lVar1 = 0;
  func_0x000107c5f064();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)&puStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3ab28(param_6);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c3e8a4(0,0,param_1,param_2);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_100 = puVar3;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puStack_f8 = puVar4;
  func_0x000107c549b0();
  func_0x000107c43484(puVar3);
  func_0x000107c3ab30(puVar3);
  func_0x000107c61180();
  func_0x000107c608c8(param_6,puVar3);
  func_0x000107c61170(puVar3);
  (**(code **)(lVar7 + 0x68))
            (lVar9,*(undefined4 *)PTR___s12CoreGraphics14CGPathFillRuleO7windingyA2CmFWC_110351390,
             lVar1);
  func_0x000107c5ff3c(lVar9);
  (**(code **)(lVar7 + 8))(lVar9,lVar1);
  dVar11 = 0.0;
  func_0x000107c422bc(0,0,param_1,param_2,param_7);
  func_0x000107c608f8(param_6);
  lVar1 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar1 + 0x20) = uVar8;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar8);
  dVar10 = param_3;
  func_0x000107c5c5fc();
  func_0x000107c61180();
  uVar8 = 0;
  FUN_1026d757c(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar1 + 0x40) = uVar8;
  *(undefined **)(lVar1 + 0x28) = puVar3;
  lVar7 = lVar1;
  func_0x000100ecbca8(lVar1);
  func_0x000107c61588(lVar1);
  func_0x0001026d746c((undefined8 *)(lVar1 + 0x20),0x112d48398,&UNK_10d90f130);
  uVar5 = param_8;
  func_0x000107c5fadc(param_8,param_9);
  uVar6 = 0;
  func_0x000100eca28c(0);
  uVar8 = 0x112d483a0;
  func_0x0001026d74ac(0x112d483a0,&SUB_100eca28c,&UNK_10d90f180);
  puVar3 = PTR___sypN_11034f1a8;
  lVar1 = lVar7;
  func_0x000107c5f9dc(lVar7,uVar6,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c5b0a0(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar1);
  param_5 = (param_2 - dVar11) - param_5;
  dVar12 = dVar11;
  if (dVar11 < dVar10) {
    dVar12 = dVar10;
  }
  dVar12 = param_3 * 0.25 + dVar12;
  func_0x000107c6090c(param_6,0x10);
  func_0x000107c3e8a4((param_4 + dVar10 * 0.5) - dVar12 * 0.5,
                      (dVar11 * 0.5 + param_5) - dVar12 * 0.5,dVar12,dVar12,puVar2);
  func_0x000107c61180();
  func_0x000107c43484();
  func_0x000107c6090c(param_6,0);
  func_0x000107c5fadc(param_8,param_9);
  lVar1 = lVar7;
  func_0x000107c5f9dc(lVar7,uVar6,puVar3 + 8,uVar8);
  func_0x000107c6142c(lVar7);
  func_0x000107c422b8(param_4,param_5,param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puStack_100);
  func_0x000107c61170(puStack_f8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1026d71b0; end: 1026d7373;  */

ulong FUN_1026d71b0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026d7294);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026d7298);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ba270;
    func_0x000107c61168(PTR_PTR_1126ba270);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ba270;
    func_0x000107c61168(PTR_PTR_1126ba270);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026d757c(0,0x112de0af8,&PTR_PTR_1126ba270);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026d7374);
  (*pcVar2)();
}



/* Entry: 1026d7374; end: 1026d73c3;  */

void FUN_1026d7374(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1026d7794;
  plVar5[7] = lVar3;
  plVar5[8] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[9] = lVar3;
  uVar4 = 0x112d45220;
  func_0x0001026d74ac(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026d5a08,lVar2,uVar4);
  return;
}



/* Entry: 1026d73c4; end: 1026d7433;  */

void FUN_1026d73c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026d7798;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026d7434; end: 1026d744b;  */

void FUN_1026d7434(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined *puStack_100;
  undefined *puStack_f8;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  dVar14 = *(double *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  dVar15 = *(double *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  dVar16 = *(double *)(unaff_x20 + 0x40);
  dVar17 = *(double *)(unaff_x20 + 0x48);
  lVar2 = 0;
  func_0x000107c5f064();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)&puStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c3e8a4(0,0,uVar12,dVar14);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_100 = puVar4;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puStack_f8 = puVar5;
  func_0x000107c549b0();
  func_0x000107c43484(puVar4);
  func_0x000107c3ab30(puVar4);
  func_0x000107c61180();
  func_0x000107c608c8(param_1,puVar4);
  func_0x000107c61170(puVar4);
  (**(code **)(lVar9 + 0x68))
            (lVar10,*(undefined4 *)PTR___s12CoreGraphics14CGPathFillRuleO7windingyA2CmFWC_110351390,
             lVar2);
  func_0x000107c5ff3c(lVar10);
  (**(code **)(lVar9 + 8))(lVar10,lVar2);
  dVar13 = 0.0;
  func_0x000107c422bc(0,0,uVar12,dVar14,uVar8);
  func_0x000107c608f8(param_1);
  lVar2 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar8;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar8);
  dVar11 = dVar15;
  func_0x000107c5c5fc();
  func_0x000107c61180();
  uVar8 = 0;
  FUN_1026d757c(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar2 + 0x40) = uVar8;
  *(undefined **)(lVar2 + 0x28) = puVar4;
  lVar9 = lVar2;
  func_0x000100ecbca8(lVar2);
  func_0x000107c61588(lVar2);
  func_0x0001026d746c((undefined8 *)(lVar2 + 0x20),0x112d48398,&UNK_10d90f130);
  uVar12 = uVar7;
  func_0x000107c5fadc(uVar7,uVar1);
  uVar6 = 0;
  func_0x000100eca28c(0);
  uVar8 = 0x112d483a0;
  func_0x0001026d74ac(0x112d483a0,&SUB_100eca28c,&UNK_10d90f180);
  puVar4 = PTR___sypN_11034f1a8;
  lVar2 = lVar9;
  func_0x000107c5f9dc(lVar9,uVar6,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c5b0a0(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar2);
  dVar17 = (dVar14 - dVar13) - dVar17;
  dVar14 = dVar13;
  if (dVar13 < dVar11) {
    dVar14 = dVar11;
  }
  dVar14 = dVar15 * 0.25 + dVar14;
  func_0x000107c6090c(param_1,0x10);
  func_0x000107c3e8a4((dVar16 + dVar11 * 0.5) - dVar14 * 0.5,(dVar13 * 0.5 + dVar17) - dVar14 * 0.5,
                      dVar14,dVar14,puVar3);
  func_0x000107c61180();
  func_0x000107c43484();
  func_0x000107c6090c(param_1,0);
  func_0x000107c5fadc(uVar7,uVar1);
  lVar2 = lVar9;
  func_0x000107c5f9dc(lVar9,uVar6,puVar4 + 8,uVar8);
  func_0x000107c6142c(lVar9);
  func_0x000107c422b8(dVar16,dVar17,uVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puStack_100);
  func_0x000107c61170(puStack_f8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1026d744c; end: 1026d7533;  */

void FUN_1026d744c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026d7534; end: 1026d7573;  */

void FUN_1026d7534(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd658;
  func_0x000107c61520(&UNK_10dacd658,&UNK_110539b10);
  puRam0000000112eb6e00 = puVar1;
  return;
}



/* Entry: 1026d7574; end: 1026d757b;  */

void FUN_1026d7574(undefined1 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != (undefined1 *)0x0) {
    **(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
  FUN_1026d7534();
  puVar1 = &UNK_110539b10;
  func_0x000107c613f8(&UNK_110539b10,param_1,0,0);
  *param_1 = 0;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
  return;
}



/* Entry: 1026d757c; end: 1026d75bb;  */

void FUN_1026d757c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1026d75bc; end: 1026d772b;  */

void FUN_1026d75bc(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((param_1 != (undefined1 *)0x0) && (param_2 == 0)) {
    **(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
  FUN_1026d7534();
  puVar1 = &UNK_110539b10;
  func_0x000107c613f8(&UNK_110539b10,param_1,0,0);
  *param_1 = 0;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
  return;
}



/* Entry: 1026d772c; end: 1026d776b;  */

void FUN_1026d772c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dacd630;
  func_0x000107c61520(&UNK_10dacd630,&UNK_110539b10);
  puRam0000000112eb6e08 = puVar1;
  return;
}



/* Entry: 1026d776c; end: 1026d779b;  */

void FUN_1026d776c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1026d779c; end: 1026d7863;  */

undefined1  [16] FUN_1026d779c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x61625f6572616873;
  func_0x000107c5fadc(0x61625f6572616873,0xea00000000006b63);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0b64c0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026d7864);
  (*pcVar1)();
}



/* Entry: 1026d7864; end: 1026d788f;  */

void FUN_1026d7864(void)

{
  func_0x0001000285a8(0x112eb6e40,&UNK_10dacd6a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1026d7890; end: 1026d7b27;  */

void FUN_1026d7890(void)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xef72656e6e61426b;
  uVar4 = 0x6361426572616873;
  if (bVar2 != 2) {
    uVar1 = 0xef676e696472616f;
    uVar4 = 0x626e4f636973756d;
  }
  pcVar3 = "shareLocationOnboarding";
  uVar5 = 0xd000000000000013;
  if (bVar2 != 0) {
    pcVar3 = "MapStartupPromptPlugin";
    uVar5 = 0xd000000000000017;
  }
  if (bVar2 < 2) {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026d7b28; end: 1026d7bc3;  */

void FUN_1026d7b28(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar1 = 0xef72656e6e61426b;
  uVar4 = 0x6361426572616873;
  if (bVar2 != 2) {
    uVar1 = 0xef676e696472616f;
    uVar4 = 0x626e4f636973756d;
  }
  pcVar3 = "shareLocationOnboarding";
  uVar5 = 0xd000000000000013;
  if (bVar2 != 0) {
    pcVar3 = "MapStartupPromptPlugin";
    uVar5 = 0xd000000000000017;
  }
  if (bVar2 < 2) {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1026d7bc4; end: 1026d7c03;  */

void FUN_1026d7bc4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112eb6e40;
  func_0x0001000285a8(0x112eb6e40,&UNK_10dacd6a0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1026d7c04; end: 1026d7c2f;  */

void FUN_1026d7c04(void)

{
  func_0x0001000285a8(0x112eb6e78,&UNK_10dacd6a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}


