/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090ec8c0; end: 1090ec8eb;  */

undefined8 FUN_1090ec8c0(long param_1)

{
  undefined8 unaff_x19;
  
  (*(code *)**(undefined8 **)(param_1 + 0x10))();
  func_0x0001090ebdc8(param_1);
  FUN_1090eb134();
  return unaff_x19;
}



/* Entry: 1090ec8ec; end: 1090eca67;  */

void FUN_1090ec8ec(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  code **ppcStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  long *plStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined1 auStack_178 [48];
  undefined8 uStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x0001090eea88();
  lVar5 = *param_2;
  uStack_38 = extraout_x8;
  if (lVar5 != 0) {
    do {
      func_0x0001090eeb0c();
    } while (extraout_w10 != 0);
  }
  func_0x0001090eebbc();
  if (lVar5 != 0) {
    do {
      func_0x0001090eeb0c();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001090eee1c(FUN_1090ee0b8);
  func_0x0001090eeb90();
  func_0x0001090eec6c();
  if (lVar5 != 0) {
    do {
      func_0x0001090eeb0c();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001090eea6c();
  func_0x0001090eeaf0();
  FUN_1090ee098(auStack_80);
  FUN_1090ad6a8();
  func_0x0001090eea58(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar3 = &lStack_120;
  uStack_88 = 0x1090ec98c;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001090eea88();
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lStack_120 = lVar1;
  lStack_118 = lVar2;
  uStack_b8 = extraout_x8_00;
  if (lVar2 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10_02 != 0);
  }
  plVar6 = *(long **)(lVar5 + 0x28);
  FUN_1090ed46c(&uStack_110);
  lStack_100 = lVar1;
  lStack_f8 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10_03 != 0);
  }
  pcStack_e8 = FUN_1090ee1b0;
  ppuStack_e0 = &PTR_FUN_110adaa90;
  uStack_d0 = uStack_108;
  uStack_d8 = uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_c8 = lVar1;
  lStack_c0 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10_04 != 0);
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&pcStack_e8);
  func_0x0001090eec7c(ppuStack_e0);
  func_0x0001090ee190(&uStack_110);
  func_0x0001090e1f44();
  func_0x0001090eea58(uStack_b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1090eca68;
    lStack_140 = lVar2;
    plStack_138 = plVar6;
    ppuStack_130 = &puStack_90;
    func_0x0001090eea88();
    func_0x0001090eebac();
    func_0x0001090eea98(0x1090ee320);
    func_0x0001090eeb80();
    func_0x0001090eec00();
    func_0x0001090eea58(uStack_148);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      *(undefined1 *)((long)plVar3 + 0x133) = 1;
      if (plVar3[9] != 1) {
        pcStack_198 = FUN_1090ecab8;
        plVar7 = (long *)plVar3[0xb];
        if ((plVar7 != (long *)0x0) && ((*(byte *)(plVar3 + 0x25) & 1) == 0)) {
          puVar4 = plVar3;
          ppcStack_1c0 = &pcStack_e8;
          lStack_1b8 = lVar1;
          puStack_1b0 = auStack_178;
          plStack_1a8 = plVar6;
          pppuStack_1a0 = &ppuStack_130;
          func_0x0001090eeda4();
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = &PTR_FUN_110adab00;
          puVar4[3] = &PTR_DAT_110adab50;
          FUN_1090ed8c0(puVar4 + 4,plVar3);
          puStack_1d0 = puVar4 + 3;
          puStack_1c8 = puVar4;
          (**(code **)(*plVar7 + 0x10))(plVar7,0,0,&puStack_1d0);
          plVar3[0x24] = (long)plVar7;
          *(undefined1 *)(plVar3 + 0x25) = 1;
          func_0x0001090e1f8c(&puStack_1d0);
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1090eca68; end: 1090ecab7;  */

void FUN_1090eca68(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_28;
  
  func_0x0001090eea88();
  func_0x0001090eebac();
  func_0x0001090eea98(0x1090ee320);
  func_0x0001090eeb80();
  func_0x0001090eec00();
  func_0x0001090eea58(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *(undefined1 *)((long)param_1 + 0x133) = 1;
    if (param_1[9] != 1) {
      plVar2 = (long *)param_1[0xb];
      if ((plVar2 != (long *)0x0) && ((*(byte *)(param_1 + 0x25) & 1) == 0)) {
        puVar1 = param_1;
        func_0x0001090eeda4();
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = &PTR_FUN_110adab00;
        puVar1[3] = &PTR_DAT_110adab50;
        FUN_1090ed8c0(puVar1 + 4,param_1);
        puStack_b0 = puVar1 + 3;
        puStack_a8 = puVar1;
        (**(code **)(*plVar2 + 0x10))(plVar2,0,0,&puStack_b0);
        param_1[0x24] = plVar2;
        *(undefined1 *)(param_1 + 0x25) = 1;
        func_0x0001090e1f8c(&puStack_b0);
      }
    }
    return;
  }
  return;
}



/* Entry: 1090ecab8; end: 1090ecc0b;  */

void FUN_1090ecab8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  *(undefined1 *)((long)param_1 + 0x133) = 1;
  if (param_1[9] != 1) {
    plVar2 = (long *)param_1[0xb];
    if ((plVar2 != (long *)0x0) && ((*(byte *)(param_1 + 0x25) & 1) == 0)) {
      puVar1 = param_1;
      func_0x0001090eeda4();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_110adab00;
      puVar1[3] = &PTR_DAT_110adab50;
      FUN_1090ed8c0(puVar1 + 4,param_1);
      puStack_40 = puVar1 + 3;
      puStack_38 = puVar1;
      (**(code **)(*plVar2 + 0x10))(plVar2,0,0,&puStack_40);
      param_1[0x24] = plVar2;
      *(undefined1 *)(param_1 + 0x25) = 1;
      func_0x0001090e1f8c(&puStack_40);
    }
  }
  return;
}



/* Entry: 1090ecc0c; end: 1090ed077;  */

void FUN_1090ecc0c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *in_x7;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 0x131) = 1;
  plVar2 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar2 + 0x50))();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x0001090eedb8();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x0001090eedb8();
  }
  func_0x0001090fd51c(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  if (*(char *)(param_1 + 0xc6) == '\x01') {
    *(undefined1 *)(param_1 + 0xc6) = 0;
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  for (puVar3 = *(undefined8 **)(param_1 + 0x138); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,param_1,plVar2,param_2);
  }
  *(undefined1 *)(param_1 + 0x131) = 0;
  func_0x0001090ecd08(param_1);
  if ((*(byte *)(in_x7[1] + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001090ecd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_x7)(plVar2,param_2,in_x7);
  return;
}



/* Entry: 1090ed078; end: 1090ed0d3;  */

void FUN_1090ed078(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x130) == '\x01') {
    *(undefined1 *)(param_1 + 0x130) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x140);
    for (puVar2 = *(undefined8 **)(param_1 + 0x138); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x38))((long *)*puVar2,param_1,param_1 + 0xa0);
    }
  }
  return;
}



/* Entry: 1090ed0d4; end: 1090ed123;  */

void FUN_1090ed0d4(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  func_0x0001090eea88();
  func_0x0001090eebac();
  func_0x0001090eea98(FUN_1090ee810);
  func_0x0001090eeb80();
  func_0x0001090eec00();
  func_0x0001090eea58(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  iVar2 = (int)param_1 + 0xd0;
  func_0x0001090fd570();
  if (iVar2 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x140);
    for (puVar3 = *(undefined8 **)(param_1 + 0x138); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      func_0x0001090eedac(*(undefined8 *)(*(long *)*puVar3 + 0x28));
    }
  }
  return;
}



/* Entry: 1090ed124; end: 1090ed16f;  */

void FUN_1090ed124(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = (int)param_1 + 0xd0;
  func_0x0001090fd570();
  if (iVar2 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x140);
    for (puVar3 = *(undefined8 **)(param_1 + 0x138); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      func_0x0001090eedac(*(undefined8 *)(*(long *)*puVar3 + 0x28));
    }
  }
  return;
}



/* Entry: 1090ed170; end: 1090ed1c7;  */

void FUN_1090ed170(long param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_2 + 0xf5);
  cVar2 = *(char *)(param_2 + 0xf4);
  if (*(char *)(param_3 + 1) != *(char *)(param_2 + 0xf7)) {
    *(char *)(param_3 + 1) = *(char *)(param_2 + 0xf7);
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  if (*(char *)(param_3 + 2) != cVar1) {
    *(char *)(param_3 + 2) = cVar1;
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  if (*(char *)(param_3 + 3) != cVar2) {
    *(char *)(param_3 + 3) = cVar2;
    *(undefined1 *)(param_1 + 0x130) = 1;
  }
  return;
}



/* Entry: 1090ed1c8; end: 1090ed217;  */

void FUN_1090ed1c8(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001090eea88(param_1);
    func_0x0001090eebac();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x0001090eea98(FUN_1090ee8e4);
    func_0x0001090eeb80();
    func_0x0001090eec00();
    func_0x0001090eea58(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_1090ed218;
    ___stack_chk_fail();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 1090ed218; end: 1090ed237;  */

void FUN_1090ed218(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -0x18;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001090eea88(param_1);
    func_0x0001090eebac();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x0001090eea98(FUN_1090ee8e4);
    func_0x0001090eeb80();
    func_0x0001090eec00();
    func_0x0001090eea58(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_1090ed218;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 1090ed238; end: 1090ed2d7;  */

void FUN_1090ed238(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001090eea88(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    unaff_x19 = *param_3;
    if (unaff_x19 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10 != 0);
    }
    func_0x0001090eebbc();
    if (unaff_x19 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001090eee1c(0x1090ee9a4);
    func_0x0001090eeb90();
    func_0x0001090eec6c();
    if (unaff_x19 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001090eea6c();
    func_0x0001090eeaf0();
    FUN_1090ee984((undefined1 *)((long)register0x00000008 + -0x80));
    param_1 = unaff_x19;
    func_0x000104bda960();
    func_0x0001090eea58(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_1090ed2d8;
    ___stack_chk_fail();
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 1090ed2d8; end: 1090ed2df;  */

void FUN_1090ed2d8(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001090eea88(param_1 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    unaff_x19 = *param_3;
    if (unaff_x19 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10 != 0);
    }
    func_0x0001090eebbc();
    if (unaff_x19 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001090eee1c(0x1090ee9a4);
    func_0x0001090eeb90();
    func_0x0001090eec6c();
    if (unaff_x19 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001090eea6c();
    func_0x0001090eeaf0();
    FUN_1090ee984((undefined1 *)((long)register0x00000008 + -0x80));
    param_1 = unaff_x19;
    func_0x000104bda960();
    func_0x0001090eea58(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_1090ed2d8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  return;
}



/* Entry: 1090ed2e0; end: 1090ed333;  */

void FUN_1090ed2e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x140);
  for (puVar2 = *(undefined8 **)(param_1 + 0x138); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x40))((long *)*puVar2,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1090ed334; end: 1090ed33b;  */

void FUN_1090ed334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x128);
  for (puVar2 = *(undefined8 **)(param_1 + 0x120); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x40))((long *)*puVar2,param_1 + -0x18,param_3,param_4);
  }
  return;
}



/* Entry: 1090ed33c; end: 1090ed39b;  */

long * FUN_1090ed33c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x30) {
      (*(code *)**(undefined8 **)(lVar1 + -0x28))((undefined8 *)(lVar1 + -0x28));
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1090ed39c; end: 1090ed427;  */

void FUN_1090ed39c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    FUN_1090eb158();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1090ed428; end: 1090ed437;  */

void FUN_1090ed428(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  func_0x000105277f8c();
  if (param_3 != 0) {
    pcStack_18 = FUN_1090ed438;
    uStack_28 = *(undefined8 *)(param_3 + 0x10);
    uStack_30 = *(undefined8 *)(param_3 + 8);
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x0001003a90c4(&uStack_30);
    return;
  }
  return;
}



/* Entry: 1090ed438; end: 1090ed46b;  */

void FUN_1090ed438(long param_1)

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



/* Entry: 1090ed46c; end: 1090ed513;  */

void FUN_1090ed46c(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x0001090eeb50();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x0001090eeb50();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 1090ed514; end: 1090ed693;  */

void FUN_1090ed514(long param_1)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  plVar11 = *(long **)(param_1 + 0x10);
  lVar9 = *plVar11;
  lVar13 = plVar11[2];
  plVar12 = *(long **)(lVar9 + 0x140);
  if (plVar12 < *(long **)(lVar9 + 0x148)) {
    if (lVar13 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10 != 0);
    }
    plVar10 = plVar12 + 1;
    *plVar12 = lVar13;
  }
  else {
    plVar10 = *(long **)(lVar9 + 0x138);
    lVar14 = (long)plVar12 - (long)plVar10 >> 3;
    uVar1 = lVar14 + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x00010bdb238c();
LAB_1090ed690:
      func_0x000104bfe188();
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      func_0x0001090ed4f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    uVar5 = (long)*(long **)(lVar9 + 0x148) - (long)plVar10;
    uVar8 = (long)uVar5 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_1090ed690;
      lVar4 = uVar8 << 3;
      __Znwm();
    }
    plVar2 = (long *)(lVar4 + ((long)plVar12 - (long)plVar10));
    if (lVar13 != 0) {
      do {
        func_0x0001090eeb0c();
      } while (extraout_w10_00 != 0);
      plVar10 = *(long **)(lVar9 + 0x138);
      plVar12 = *(long **)(lVar9 + 0x140);
      lVar14 = (long)plVar12 - (long)plVar10 >> 3;
    }
    *plVar2 = lVar13;
    plVar6 = plVar2 + -lVar14;
    for (plVar7 = plVar10; plVar7 != plVar12; plVar7 = plVar7 + 1) {
      *plVar6 = *plVar7;
      *plVar7 = 0;
      plVar6 = plVar6 + 1;
    }
    for (; plVar10 != plVar12; plVar10 = plVar10 + 1) {
      FUN_1090eb158(plVar10);
    }
    plVar10 = plVar2 + 1;
    param_1 = *(long *)(lVar9 + 0x138);
    *(long **)(lVar9 + 0x138) = plVar2 + -lVar14;
    *(long **)(lVar9 + 0x140) = plVar10;
    *(ulong *)(lVar9 + 0x148) = lVar4 + uVar8 * 8;
    if (param_1 != 0) {
      __ZdlPv();
    }
  }
  iVar3 = (int)param_1;
  *(long **)(lVar9 + 0x140) = plVar10;
  func_0x0001090eec24();
  func_0x0001090eed88();
  if (iVar3 != 0) {
    func_0x0001090eed00(plVar11[2]);
  }
  if (*(long *)(lVar9 + 0x48) != 0) {
    (**(code **)(*(long *)plVar11[2] + 0x48))((long *)plVar11[2],lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x0001090ed688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar11[2] + 0x38))((long *)plVar11[2],lVar9,lVar9 + 0xa0);
  return;
}



/* Entry: 1090ed694; end: 1090ed6b3;  */

void FUN_1090ed694(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001090ed4f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090ed6b4; end: 1090ed6b7;  */

void FUN_1090ed6b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090ed6b8; end: 1090ed74f;  */

void FUN_1090ed6b8(void)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  
  func_0x0001090eecbc();
  func_0x0001090eeb74(&PTR_FUN_110ada928);
  func_0x0001090eeb1c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    do {
      func_0x0001090eeb40();
    } while (extraout_w11 != 0);
  }
  func_0x0001090eee10();
  return;
}



/* Entry: 1090ed750; end: 1090ed7ef;  */

void FUN_1090ed750(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = *(long **)(param_1 + 0x10);
  lVar4 = *plVar3;
  plVar5 = *(long **)(lVar4 + 0x138);
  plVar6 = plVar5 + 1;
  while (plVar7 = *(long **)(lVar4 + 0x140), plVar5 != plVar7) {
    plVar1 = plVar5;
    plVar2 = plVar6;
    if (*plVar5 == plVar3[2]) {
      for (; plVar2 != plVar7; plVar2 = plVar2 + 1) {
        func_0x0001090ea914(plVar1,plVar2);
        plVar1 = plVar1 + 1;
      }
      FUN_1090ed39c(lVar4 + 0x138);
    }
    else {
      plVar5 = plVar5 + 1;
      plVar6 = plVar6 + 1;
    }
  }
  return;
}



/* Entry: 1090ed7f0; end: 1090ed80f;  */

void FUN_1090ed7f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001090ed730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090ed810; end: 1090ed813;  */

void FUN_1090ed810(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090ed814; end: 1090ed863;  */

void FUN_1090ed814(void)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  
  func_0x0001090eecbc();
  func_0x0001090eeb74(&PTR_FUN_110ada948);
  func_0x0001090eeb1c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    do {
      func_0x0001090eeb40();
    } while (extraout_w11 != 0);
  }
  func_0x0001090eee10();
  return;
}



/* Entry: 1090ed864; end: 1090ed893;  */

void FUN_1090ed864(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ed888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ed894; end: 1090ed8a7;  */

void FUN_1090ed894(void)

{
  func_0x0001090ed8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ed8a8; end: 1090ed8bf;  */

void FUN_1090ed8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090eede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090ed8c0; end: 1090ed907;  */

void FUN_1090ed8c0(undefined8 *param_1,undefined8 param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_1090ed46c(&uStack_30,param_2);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  func_0x0001090eec00();
  return;
}



/* Entry: 1090ed908; end: 1090ed90b;  */

undefined8 * FUN_1090ed908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ada9c8;
  func_0x0001090eda18(param_1 + 2);
  return param_1;
}



/* Entry: 1090ed90c; end: 1090ed91f;  */

void FUN_1090ed90c(void)

{
  func_0x0001090ed9ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ed920; end: 1090ed953;  */

void FUN_1090ed920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  
  func_0x0001090eeb9c();
  if (uStack_30 != 0) {
    FUN_1090ed124(uStack_30,param_3);
  }
  func_0x0001090eec00();
  return;
}



/* Entry: 1090ed954; end: 1090ed97f;  */

void FUN_1090ed954(void)

{
  undefined8 uStack_20;
  
  func_0x0001090eeb9c();
  if (uStack_20 != 0) {
    func_0x0001090ecd08();
  }
  func_0x0001090eec00();
  return;
}



/* Entry: 1090ed980; end: 1090eda97;  */

void FUN_1090ed980(undefined8 param_1,long param_2)

{
  undefined8 uStack_30;
  
  func_0x0001090eeb9c();
  if (uStack_30 != 0) {
    if (param_2 == *(long *)(uStack_30 + 0x68)) {
      if ((*(byte *)(uStack_30 + 0xc5) & 1) != 0) goto LAB_1090ed9e0;
      *(undefined1 *)(uStack_30 + 0xc5) = 1;
    }
    else {
      if ((param_2 != *(long *)(uStack_30 + 0x80)) || ((*(byte *)(uStack_30 + 0xcb) & 1) != 0))
      goto LAB_1090ed9e0;
      *(undefined1 *)(uStack_30 + 0xcb) = 1;
    }
    *(undefined1 *)(uStack_30 + 0x130) = 1;
  }
LAB_1090ed9e0:
  func_0x0001090eec00();
  return;
}



/* Entry: 1090eda98; end: 1090edcef;  */

void FUN_1090eda98(long param_1)

{
  int iVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  undefined4 auStack_b8 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001090eea88();
  puVar9 = *(ulong **)(param_1 + 0x10) + 2;
  uVar7 = **(ulong **)(param_1 + 0x10);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  auStack_a0[0] = 0;
  auStack_b8[0] = *(undefined4 *)(uVar7 + 0x90);
  uStack_58 = extraout_x8;
  func_0x0001090ac8d0(&uStack_a8,uVar7 + 0x88);
  plVar8 = (long *)(uVar7 + 0x80);
  if (*plVar8 != 0) {
    func_0x0001090ebbfc(&uStack_b0,*plVar8 + 0x88);
  }
  auStack_a0[0] = *(undefined4 *)(uVar7 + 0x78);
  func_0x0001090ac8d0(&uStack_90,uVar7 + 0x70);
  lVar6 = *(long *)(uVar7 + 0x68);
  if (lVar6 != 0) {
    func_0x0001090ebbfc(&uStack_98,lVar6 + 0x88);
  }
  (*(code *)*puVar9)(auStack_b8,puVar9);
  uVar2 = uVar7;
  FUN_1090ec29c(uVar7,auStack_b8,plVar8,1);
  uVar3 = uVar7;
  FUN_1090ec29c(uVar7,auStack_a0,(long *)(uVar7 + 0x68),0);
  if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
    lVar10 = *(long *)(uVar7 + 0x68);
    lVar6 = *(long *)(uVar7 + 0x80);
    if ((bool)*(char *)(uVar7 + 0xc4) != (lVar10 != 0)) {
      *(bool *)(uVar7 + 0xc4) = lVar10 != 0;
      *(undefined1 *)(uVar7 + 0xc2) = 0;
      *(undefined1 *)(uVar7 + 0xc5) = 0;
      *(undefined1 *)(uVar7 + 0x130) = 1;
    }
    in_ZR = (bool)*(char *)(uVar7 + 0xca) == (lVar6 != 0);
    if (!(bool)in_ZR) {
      *(bool *)(uVar7 + 0xca) = lVar6 != 0;
      *(undefined1 *)(uVar7 + 200) = 0;
      *(undefined1 *)(uVar7 + 0xcb) = 0;
      *(undefined1 *)(uVar7 + 0x130) = 1;
    }
    uVar5 = (ulong)*(uint *)(uVar7 + 0x78);
    (**(code **)(**(long **)(uVar7 + 0x20) + 0x48))
              (*(long **)(uVar7 + 0x20),uVar5,*(undefined4 *)(uVar7 + 0x90));
    iVar1 = *(int *)(uVar7 + 0x90);
    if (lVar10 != 0) {
      in_ZR = *(int *)(uVar7 + 0x78) == 0;
      uVar5 = (ulong)!(bool)in_ZR;
      func_0x0001090f4a74(*(undefined8 *)(uVar7 + 0x68),uVar5);
    }
    if (lVar6 != 0) {
      in_ZR = iVar1 == 0;
      uVar5 = (ulong)!(bool)in_ZR;
      func_0x0001090f4a74(*plVar8,uVar5);
    }
    FUN_1090ed078(uVar7);
    if ((((uint)uVar2 & 0xffff) < 0x100 && ((uint)uVar3 & 0xffff) < 0x100) ||
       (plVar8 = *(long **)(uVar7 + 0x38), plVar8 == (long *)0x0)) {
      func_0x0001090ecd08(uVar7);
    }
    else {
      (**(code **)(*plVar8 + 0x20))();
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      pcStack_88 = FUN_1090ed428;
      ppuStack_80 = &PTR_DAT_110a21c28;
      FUN_1090ecc0c(uVar7,plVar8,uVar5,0xffffffff,0x100000001,0,0x100000001,&pcStack_88);
      (*(code *)*ppuStack_80)(&ppuStack_80);
    }
  }
  func_0x0001090ed400(auStack_a0);
  puVar4 = auStack_b8;
  func_0x0001090ed400();
  func_0x0001090eea58(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar4 + 2) != 0) {
    func_0x0001090eda7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090edcf0; end: 1090edd0f;  */

void FUN_1090edcf0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001090eda7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090edd10; end: 1090edd13;  */

void FUN_1090edd10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090edd14; end: 1090edd5f;  */

void FUN_1090edd14(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  
  func_0x0001090eecbc();
  *param_1 = &PTR_FUN_110adaa30;
  func_0x0001090eece8();
  func_0x0001090eeb1c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  func_0x0001090eec08();
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1090edd60; end: 1090edd87;  */

long * FUN_1090edd60(long *param_1)

{
  long *unaff_x19;
  long *plStack_28;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    plStack_28 = param_1 + 1;
    func_0x0001090eb0a0(&plStack_28);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 1090edd88; end: 1090eddbf;  */

undefined8 * FUN_1090edd88(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1090eddc0(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  return param_1;
}



/* Entry: 1090eddc0; end: 1090ede0f;  */

void FUN_1090eddc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1090ede10(param_1,param_4);
    lVar1 = param_1 + 0x10;
    func_0x0001090edeb8(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
  return;
}



/* Entry: 1090ede10; end: 1090ede6b;  */

void FUN_1090ede10(long param_1,ulong param_2)

{
  long lVar1;
  long *unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001090eec88();
    FUN_1090ede78();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 8;
  }
  else {
    FUN_1090ede6c();
    lVar1 = param_1 + 0x10;
    func_0x0001090edeb8();
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1090ede6c; end: 1090ede77;  */

void FUN_1090ede6c(void)

{
  _abort();
  FUN_1090ede9c();
  return;
}



/* Entry: 1090ede78; end: 1090ede9b;  */

void FUN_1090ede78(void)

{
  FUN_1090ede9c();
  return;
}



/* Entry: 1090ede9c; end: 1090edecb;  */

void FUN_1090ede9c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bfe188();
  FUN_1090edecc();
  return;
}



/* Entry: 1090edecc; end: 1090edf03;  */

void FUN_1090edecc(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001090eeb40();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_4 = uVar1;
    param_4 = param_4 + 1;
  }
  return;
}



/* Entry: 1090edf04; end: 1090edf63;  */

void FUN_1090edf04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  func_0x0001090eed58();
  *puVar1 = &PTR_FUN_110adac20;
  puVar1[1] = 1;
  *(undefined1 *)(puVar1 + 2) = 0;
  uVar2 = *param_2;
  puVar1[4] = param_2[1];
  puVar1[3] = uVar2;
  uVar2 = *param_3;
  puVar1[6] = param_3[1];
  puVar1[5] = uVar2;
  uVar2 = *param_4;
  puVar1[8] = param_4[1];
  puVar1[7] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1090edf64; end: 1090edfc3;  */

undefined8 * FUN_1090edf64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  (**(code **)(param_2[2] + 0x10))(param_1 + 2);
  return param_1;
}



/* Entry: 1090edfc4; end: 1090edff7;  */

void FUN_1090edfc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  
  plVar10 = *(long **)(param_1 + 0x10);
  lVar8 = *plVar10;
  if ((*(byte *)(plVar10[2] + 0x10) & 1) != 0) {
    return;
  }
  lVar11 = plVar10[2];
  uVar9 = *(undefined8 *)(lVar11 + 0x18);
  uVar4 = *(undefined8 *)(lVar11 + 0x20);
  uVar1 = *(undefined8 *)(lVar11 + 0x28);
  uVar5 = *(undefined8 *)(lVar11 + 0x30);
  uVar2 = *(undefined8 *)(lVar11 + 0x38);
  uVar6 = *(undefined8 *)(lVar11 + 0x40);
  *(undefined1 *)(lVar8 + 0x131) = 1;
  plVar7 = *(long **)(lVar8 + 0x20);
  (**(code **)(*plVar7 + 0x50))(plVar7,uVar9,uVar4,uVar1,uVar5,uVar2,uVar6);
  if (*(long *)(lVar8 + 0x80) != 0) {
    func_0x0001090eedb8();
  }
  if (*(long *)(lVar8 + 0x68) != 0) {
    func_0x0001090eedb8();
  }
  func_0x0001090fd51c(lVar8 + 0xd0);
  *(undefined1 *)(lVar8 + 0xcb) = 0;
  *(undefined1 *)(lVar8 + 0xc5) = 0;
  if (*(char *)(lVar8 + 0xc6) == '\x01') {
    *(undefined1 *)(lVar8 + 0xc6) = 0;
    *(undefined1 *)(lVar8 + 0x130) = 1;
  }
  if (*(char *)(lVar8 + 0xc0) == '\x01') {
    *(undefined1 *)(lVar8 + 0xc0) = 0;
    *(undefined1 *)(lVar8 + 0x130) = 1;
  }
  puVar3 = *(undefined8 **)(lVar8 + 0x140);
  for (puVar12 = *(undefined8 **)(lVar8 + 0x138); puVar12 != puVar3; puVar12 = puVar12 + 1) {
    (**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,lVar8,plVar7,uVar9);
  }
  *(undefined1 *)(lVar8 + 0x131) = 0;
  func_0x0001090ecd08(lVar8);
  if ((*(byte *)(plVar10[4] + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001090ecd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar10[3])(plVar7,uVar9,plVar10 + 3);
  return;
}



/* Entry: 1090edff8; end: 1090ee017;  */

void FUN_1090edff8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001090edfa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090ee018; end: 1090ee01b;  */

void FUN_1090ee018(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090ee01c; end: 1090ee097;  */

void FUN_1090ee01c(undefined8 *param_1)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090eecbc();
  *param_1 = &PTR_FUN_110adaa50;
  func_0x0001090eed58();
  func_0x0001090eeb1c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    do {
      func_0x0001090eeb40();
      uVar1 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  param_1[2] = uVar1;
  param_1[3] = *(undefined8 *)(unaff_x20 + 0x18);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x18))(param_1 + 4,(long *)(unaff_x20 + 0x20));
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1090ee098; end: 1090ee0b7;  */

void FUN_1090ee098(void)

{
  long unaff_x19;
  
  func_0x0001090eec88();
  FUN_1090ad684();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 1090ee0b8; end: 1090ee13b;  */

void FUN_1090ee0b8(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  
  func_0x0001090eea88();
  lVar1 = **(long **)(param_1 + 0x10);
  if ((*(long **)(param_1 + 0x10))[2] != 0) {
    do {
      func_0x0001090eeb40();
    } while (extraout_w11 != 0);
  }
  func_0x0001090ecb70();
  func_0x0001090eed78();
  func_0x0001090eea58(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (*(long *)(lVar1 + 8) == 0) {
      return;
    }
    FUN_1090ee098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090ee13c; end: 1090ee13f;  */

void FUN_1090ee13c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090ee140; end: 1090ee1af;  */

void FUN_1090ee140(void)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  
  func_0x0001090eecbc();
  func_0x0001090eeb74(&PTR_LAB_110adaa70);
  func_0x0001090eeb1c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    do {
      func_0x0001090eeb40();
    } while (extraout_w11 != 0);
  }
  func_0x0001090eee10();
  return;
}



/* Entry: 1090ee1b0; end: 1090ee27f;  */

void FUN_1090ee1b0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  plVar7 = (long *)puVar6[0xb];
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar7 != plVar4) {
    if ((plVar7 != (long *)0x0) && (*(char *)(puVar6 + 0x25) == '\x01')) {
      puVar3 = puVar6 + 0x24;
      func_0x000108ad59b0();
      (**(code **)(*plVar7 + 0x20))(plVar7,*puVar3);
      plVar4 = *(long **)(param_1 + 0x20);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_38 = (undefined8 *)puVar6[0xc];
    puStack_40 = (undefined8 *)puVar6[0xb];
    puVar6[0xb] = plVar4;
    puVar6[0xc] = lVar5;
    func_0x0001090e1f44(&puStack_40);
    if (*(char *)(puVar6 + 0x25) == '\x01') {
      *(undefined1 *)(puVar6 + 0x25) = 0;
    }
    if (*(char *)((long)puVar6 + 0x133) == '\x01') {
      *(undefined1 *)((long)puVar6 + 0x133) = 1;
      if (puVar6[9] != 1) {
        plVar4 = (long *)puVar6[0xb];
        if ((plVar4 != (long *)0x0) && ((*(byte *)(puVar6 + 0x25) & 1) == 0)) {
          puVar3 = puVar6;
          func_0x0001090eeda4();
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = &PTR_FUN_110adab00;
          puVar3[3] = &PTR_DAT_110adab50;
          FUN_1090ed8c0(puVar3 + 4,puVar6);
          puStack_40 = puVar3 + 3;
          puStack_38 = puVar3;
          (**(code **)(*plVar4 + 0x10))(plVar4,0,0,&puStack_40);
          puVar6[0x24] = plVar4;
          *(undefined1 *)(puVar6 + 0x25) = 1;
          func_0x0001090e1f8c(&puStack_40);
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 1090ee280; end: 1090ee36b;  */

void FUN_1090ee280(long param_1)

{
  long unaff_x19;
  
  func_0x0001090eec88(param_1 + 8);
  func_0x0001090e1f44();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 1090ee36c; end: 1090ee497;  */

long * FUN_1090ee36c(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 2) {
    lVar1 = 0;
    if (param_2[1] != 0) {
      do {
        func_0x0001090eeb40();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    param_1[1] = lVar1;
  }
  else if (lVar1 == 1) {
    func_0x000104c6257c(param_1 + 1,param_2 + 1);
  }
  return param_1;
}



/* Entry: 1090ee498; end: 1090ee4b7;  */

void FUN_1090ee498(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001090ee3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090ee4b8; end: 1090ee4bb;  */

void FUN_1090ee4b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090ee4bc; end: 1090ee51b;  */

void FUN_1090ee4bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110adaad0;
  puVar1 = param_1;
  func_0x0001090eeda4();
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  FUN_1090ee36c(puVar1 + 2,puVar3 + 2);
  param_1[1] = puVar1;
  return;
}



/* Entry: 1090ee51c; end: 1090ee51f;  */

void FUN_1090ee51c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adab00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ee520; end: 1090ee533;  */

void FUN_1090ee520(void)

{
  FUN_1090ee768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ee534; end: 1090ee53f;  */

void FUN_1090ee534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090eede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090ee540; end: 1090ee553;  */

void FUN_1090ee540(void)

{
  FUN_1090ee644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ee554; end: 1090ee63f;  */

void FUN_1090ee554(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x0001090eea88();
  uStack_28 = extraout_x8;
  func_0x0001080e6ccc(alStack_48);
  plVar5 = alStack_48;
  FUN_1090ee670(param_1);
  plVar4 = alStack_48;
  func_0x0001080c5c8c(plVar4);
  func_0x0001090eea58(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090eea88();
  lStack_a8 = *plVar5;
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_78 = extraout_x8_00;
  func_0x00010b99f560(&uStack_a0,&lStack_a8);
  uStack_98 = 2;
  uStack_90 = uStack_a0;
  uStack_a0 = 0;
  FUN_1090ee670(plVar4,&uStack_98);
  func_0x0001080c5c8c(&uStack_98);
  func_0x000104bda960(uStack_a0);
  func_0x000107c278f8(lStack_a8);
  func_0x0001090eea58(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1090ee640; end: 1090ee643;  */

void FUN_1090ee640(void)

{
  return;
}



/* Entry: 1090ee644; end: 1090ee66f;  */

undefined8 * FUN_1090ee644(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110adab50;
  func_0x0001090eda18(param_1 + 1);
  return param_1;
}



/* Entry: 1090ee670; end: 1090ee767;  */

void FUN_1090ee670(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long alStack_d0 [2];
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [5];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  plVar2 = alStack_d0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001090eda40(alStack_d0,param_1 + 8);
  if (alStack_d0[0] != 0) {
    FUN_1090ee36c(auStack_c0,param_2);
    plVar2 = *(long **)(alStack_d0[0] + 0x28);
    FUN_1090ed46c(&uStack_a0,alStack_d0[0]);
    puVar1 = auStack_90;
    FUN_1090ee36c(puVar1,auStack_c0);
    uStack_68 = 0x1090ee3e8;
    ppuStack_60 = &PTR_FUN_110adaad0;
    func_0x0001090eeda4();
    puVar1[1] = uStack_98;
    *puVar1 = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    FUN_1090ee36c(puVar1 + 2,auStack_90);
    puStack_58 = puVar1;
    (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_68);
    func_0x0001090eec7c(ppuStack_60);
    func_0x0001090ee3c8(&uStack_a0);
    plVar2 = auStack_c0;
    func_0x0001080c5c8c();
  }
  func_0x0001090eec00();
  func_0x0001090eea58(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *plVar2 = (long)&PTR_FUN_110adab00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ee768; end: 1090ee777;  */

void FUN_1090ee768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adab00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ee778; end: 1090ee793;  */

void FUN_1090ee778(void)

{
  long unaff_x19;
  
  func_0x0001090eed28();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 1090ee794; end: 1090ee79f;  */

void FUN_1090ee794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090ee79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1090ee7a0; end: 1090ee7bf;  */

void FUN_1090ee7a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1090ee778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090ee7c0; end: 1090ee7c3;  */

void FUN_1090ee7c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090ee7c4; end: 1090ee80f;  */

void FUN_1090ee7c4(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  
  func_0x0001090eecbc();
  *param_1 = &PTR_FUN_110adab90;
  func_0x0001090eece8();
  func_0x0001090eeb1c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  func_0x0001090eec08();
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1090ee810; end: 1090ee89f;  */

void FUN_1090ee810(long param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001090eec24();
  func_0x0001090eedc4();
  if ((((uStack_40 != *(long *)(lVar1 + 0xa0)) ||
       (CONCAT71(uStack_37,uStack_38) != *(long *)(lVar1 + 0xa8))) ||
      (CONCAT71(uStack_2f,uStack_30) != *(long *)(lVar1 + 0xb0))) ||
     (uStack_28 != *(char *)(lVar1 + 0xb8))) {
    *(ulong *)(lVar1 + 0xa8) = CONCAT71(uStack_37,uStack_38);
    *(long *)(lVar1 + 0xa0) = uStack_40;
    *(ulong *)(lVar1 + 0xb1) = CONCAT17(uStack_28,uStack_2f);
    *(ulong *)(lVar1 + 0xa9) = CONCAT17(uStack_30,uStack_37);
    *(undefined1 *)(lVar1 + 0x130) = 1;
  }
  func_0x0001090ecd08(lVar1);
  return;
}



/* Entry: 1090ee8a0; end: 1090ee8e3;  */

long FUN_1090ee8a0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 8;
}



/* Entry: 1090ee8e4; end: 1090ee93f;  */

void FUN_1090ee8e4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar2 + 0xcc) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0xcc) = 1;
    *(undefined1 *)(lVar2 + 0x130) = 1;
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x140);
  for (puVar3 = *(undefined8 **)(lVar2 + 0x138); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    func_0x0001090eed00(*puVar3);
  }
  func_0x0001090ec550(lVar2);
  if (*(char *)(lVar2 + 0x130) == '\x01') {
    *(undefined1 *)(lVar2 + 0x130) = 0;
    puVar1 = *(undefined8 **)(lVar2 + 0x140);
    for (puVar3 = *(undefined8 **)(lVar2 + 0x138); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x38))((long *)*puVar3,lVar2,lVar2 + 0xa0);
    }
  }
  return;
}



/* Entry: 1090ee940; end: 1090ee983;  */

long FUN_1090ee940(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 8;
}



/* Entry: 1090ee984; end: 1090ee9cb;  */

void FUN_1090ee984(void)

{
  long unaff_x19;
  
  func_0x0001090eec88();
  func_0x000104bda93c();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 1090ee9cc; end: 1090ee9eb;  */

void FUN_1090ee9cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1090ee984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090ee9ec; end: 1090ee9ef;  */

void FUN_1090ee9ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090ee9f0; end: 1090eea3f;  */

void FUN_1090ee9f0(void)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x20;
  
  func_0x0001090eecbc();
  func_0x0001090eeb74(&PTR_FUN_110adabf0);
  func_0x0001090eeb1c();
  if (extraout_x8 != 0) {
    do {
      func_0x0001090eeb50();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    do {
      func_0x0001090eeb40();
    } while (extraout_w11 != 0);
  }
  func_0x0001090eee10();
  return;
}



/* Entry: 1090eea40; end: 1090eee27;  */

void FUN_1090eea40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1090eee28; end: 1090eee2f;  */

void FUN_1090eee28(void)

{
  return;
}



/* Entry: 1090eee30; end: 1090ef09f;  */

void FUN_1090eee30(undefined4 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    *param_1 = 0;
    pcVar8 = "N/A";
  }
  else if (*(char *)((long)param_2 + 0x19) == '\x01') {
    *param_1 = 4;
    pcVar8 = "has error";
  }
  else if (*(float *)((long)param_2 + 0x14) == 0.0) {
    *param_1 = 2;
    pcVar8 = "player rate is zero";
  }
  else {
    lVar11 = *param_2;
    if ((*(byte *)(lVar11 + 0x2c) & 1) == 0) {
      *param_1 = 3;
      pcVar8 = "track infos not loaded";
    }
    else {
      uVar6 = lVar11 + 0x26;
      FUN_1090ef0a0();
      uVar7 = lVar11 + 0x20;
      FUN_1090ef0a0();
      if (((uVar6 & 1) != 0) || ((uVar7 & 1) != 0)) {
        func_0x00010b9a64d4(&lStack_38,&UNK_10f5511cf);
        FUN_1090ef0fc(auStack_40,*param_2 + 0x26);
        FUN_1090ef1e8();
        func_0x0001090ef1f4();
        func_0x00010b9a64d4(auStack_40,&UNK_10f5511de);
        FUN_1090ef1e8();
        func_0x0001090ef1f4();
        FUN_1090ef0fc(auStack_40,*param_2 + 0x20);
        FUN_1090ef1e8();
        func_0x0001090ef1f4();
        *param_1 = 3;
        if (lStack_38 == 0) {
          lVar11 = 0;
        }
        else {
          piVar1 = (int *)(lStack_38 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            lVar11 = lStack_38;
          } while (cVar3 != '\0');
        }
        *(long *)(param_1 + 2) = lStack_38;
        func_0x000107c278f8(lVar11);
        return;
      }
      if ((((uint)uVar6 & 0xffff) < 0x100) || (((uint)uVar7 & 0xffff) < 0x100)) {
        lVar9 = param_2[1];
        if (((*(double *)(lVar9 + 0x30) != 0.0) || (*(double *)(lVar9 + 0x38) != 0.0)) &&
           (*(float *)(param_2 + 2) == 0.0)) {
          if (*(char *)(lVar11 + 0x24) == '\x01') {
            bVar10 = *(byte *)(lVar11 + 0x23);
          }
          else {
            bVar10 = 1;
          }
          lVar2 = 0x38;
          if (*(char *)((long)param_2 + 0x1a) == '\0') {
            lVar2 = 0x30;
          }
          if ((*(byte *)(lVar11 + 0x18) & 1) == 0) {
            bVar10 = 0;
          }
          else {
            bVar10 = *(byte *)((long)param_2 + 0x1b) ^ 1 | bVar10;
          }
          if ((bVar10 & 1) == 0) {
            dVar13 = *(double *)(lVar9 + lVar2);
            dVar12 = (double)*(long *)(lVar11 + 0x10) / 1000000000.0;
            bVar4 = false;
            bVar5 = false;
            if (0.0 <= dVar13) {
              bVar4 = false;
              bVar5 = true;
              if (!NAN(dVar12) && !NAN(dVar13)) {
                bVar4 = dVar12 < dVar13;
                bVar5 = false;
              }
            }
            if (bVar4 != bVar5) {
              *param_1 = 3;
              pcVar8 = "should not start playing";
              goto LAB_1090eef14;
            }
          }
        }
        *param_1 = 1;
        pcVar8 = "N/A";
      }
      else if (*(char *)((long)param_2 + 0x1c) == '\x01') {
        *param_1 = 3;
        pcVar8 = "tracks configuration pending - waiting for output setup";
      }
      else {
        *param_1 = 5;
        pcVar8 = "N/A";
      }
    }
  }
LAB_1090eef14:
  func_0x00010b9a64d4(param_1 + 2,pcVar8);
  return;
}



/* Entry: 1090ef0a0; end: 1090ef0fb;  */

uint FUN_1090ef0a0(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[4] == 1) {
    if (param_1[2] == 1) {
      uVar1 = (*param_1 & param_1[1]) & 1;
      uVar2 = (*param_1 & param_1[1] ^ 0xffffffff) & 1;
    }
    else {
      uVar1 = 0;
      uVar2 = 0;
    }
    if (param_1[5] == 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
    uVar1 = 1;
  }
  return uVar2 | uVar1 << 8;
}



/* Entry: 1090ef0fc; end: 1090ef1e7;  */

void FUN_1090ef0fc(undefined8 param_1)

{
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [256];
  
  func_0x0001089a8374(auStack_138);
  func_0x0001081401a8(auStack_138,&UNK_10f55123f);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  func_0x0001081401a8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  func_0x0001081401a8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  func_0x0001081401a8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  func_0x0001081401a8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  func_0x0001081401a8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb();
  func_0x0001081401a8();
  func_0x0001089a85c0(auStack_150,auStack_130);
  func_0x00010b9a6538(param_1,auStack_150);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
  func_0x000105490284(auStack_138);
  return;
}



/* Entry: 1090ef1e8; end: 1090ef1fb;  */

undefined1 * FUN_1090ef1e8(void)

{
  undefined1 auStack_28 [8];
  
  func_0x00010b9a6368(auStack_28);
  func_0x000107c31060(&stack0x00000008,auStack_28);
  func_0x00010b9a6b44();
  return &stack0x00000008;
}



/* Entry: 1090ef1fc; end: 1090f0eaf;  */

void FUN_1090ef1fc(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar6 = (&PTR_DAT_110adac58)[param_2 & 0xffffffff];
  puVar9 = puVar6;
  _strlen();
  puVar7 = puVar6;
  func_0x000107c31084();
  if (puVar9 == (undefined *)0x0) {
    *param_1 = 0;
    return;
  }
  ppuVar5 = &puStack_40;
  puStack_40 = puVar6;
  puStack_38 = puVar9;
  func_0x0001003a8464(ppuVar5);
  func_0x000107c60d88(puVar7 + 0x30);
  ppuVar8 = &puStack_40;
  func_0x0001003a857c(puVar7,ppuVar8,ppuVar5);
  func_0x0001003a8718();
  if (!(bool)in_ZR) {
    puVar9 = *ppuVar8;
    piVar1 = (int *)(puVar9 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      puStack_48 = (undefined *)0x0;
    }
    else {
      puStack_48 = puVar9;
      if (puVar9 != (undefined *)0x0) {
        uStack_50 = 0;
        puStack_48 = (undefined *)0x0;
        *param_1 = puVar9;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&puStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&puStack_48);
  }
  func_0x0001003a87ec(param_1,puVar7,puStack_40,puStack_38,ppuVar5);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 1090f0eb0; end: 1090f0f7b;  */

undefined8 * FUN_1090f0eb0(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110adaea8;
  param_1[1] = 1;
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[5] = param_2[1];
  param_1[4] = uVar6;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  lVar4 = *param_3;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[8] = lVar4;
  FUN_1090c8004(param_1 + 9,param_4);
  uVar5 = 0;
  param_1[0x19] = 0;
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    uVar5 = (ulong)param_1[0xb] >> 2;
  }
  param_1[0x1a] = uVar5;
  return param_1;
}



/* Entry: 1090f0f7c; end: 1090f0f7f;  */

undefined8 * FUN_1090f0f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adaea8;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))();
  }
  FUN_1090c6828(param_1 + 8);
  *param_1 = &PTR_DAT_110d7e800;
  func_0x00010b9a0948();
  func_0x00010b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 1090f0f80; end: 1090f0f93;  */

void FUN_1090f0f80(void)

{
  func_0x0001090f0f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090f0f94; end: 1090f0fb3;  */

undefined1  [16] FUN_1090f0f94(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x40) + 0x14);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = (ulong)(*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200)) / uVar2;
  }
  auVar3._8_8_ = (ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x18) | 0x100000000;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1090f0fb4; end: 1090f0fef;  */

void FUN_1090f0fb4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uStack_20;
  ulong uStack_18;
  
  uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 0x40) + 0x14);
  uStack_20 = 0;
  if (uVar1 != 0) {
    uStack_20 = param_2 / uVar1;
  }
  uStack_18 = (ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x18) | 0x100000000;
  func_0x0001090fbf64(param_1 + 0x20,&uStack_20);
  return;
}



/* Entry: 1090f0ff0; end: 1090f10af;  */

long FUN_1090f0ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = &uStack_30;
  uVar3 = param_1 + 0x20;
  uStack_30 = param_2;
  uStack_28 = param_3;
  func_0x0001090fc05c(&uStack_30,uVar3);
  dVar5 = 0.0;
  dVar6 = 0.0;
  if (puVar2 != (undefined8 *)0x0) {
    dVar6 = (double)(long)puVar2 / (double)(uVar3 & 0xffffffff);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    dVar5 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x38));
    dVar5 = (double)*(long *)(param_1 + 0x30) / dVar5;
  }
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x58) >> 2;
  }
  else {
    uVar3 = 0;
  }
  uVar4 = (ulong)*(ushort *)(*(long *)(param_1 + 0x40) + 0x14);
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar3 / uVar4;
  }
  return (long)((dVar6 / dVar5) * (double)uVar1) * uVar4;
}


