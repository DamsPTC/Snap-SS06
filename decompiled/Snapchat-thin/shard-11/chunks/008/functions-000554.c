/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108950918; end: 10895091b;  */

undefined8 * FUN_108950918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9cff0;
  func_0x000108950b24(param_1 + 0xb2);
  func_0x000108950b24(param_1 + 0xb1);
  func_0x000107c27914(param_1 + 0xae);
  func_0x000108950af0(param_1 + 0xad);
  func_0x000108950ac8(param_1 + 1);
  return param_1;
}



/* Entry: 10895091c; end: 10895092f;  */

void FUN_10895091c(void)

{
  FUN_1089508c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108950930; end: 1089509cf;  */

void FUN_108950930(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x000108950d44();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_28 = extraout_x8;
  func_0x000107c2823c(lVar1 + 0x570,0x200);
  lVar1 = param_1 + 0x48;
  FUN_108b8c790(lVar1,&uStack_70,*(long *)(param_1 + 0x570),
                *(long *)(param_1 + 0x578) - *(long *)(param_1 + 0x570));
  plVar2 = (long *)0x0;
  if (lVar1 != 0) {
    func_0x000107c2823c(param_1 + 0x570,lVar1);
    plVar2 = *(long **)(param_1 + 0x588);
    if ((*(byte *)(plVar2 + 2) & 1) == 0) {
      *(undefined1 *)(plVar2 + 2) = 1;
    }
    plVar2[1] = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  func_0x000108950d1c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = (long *)plVar2[0xb2];
  if ((*(byte *)(plVar2 + 2) & 1) == 0) {
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  plVar2[1] = 13000000000;
                    /* WARNING: Could not recover jumptable at 0x0001089509fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))();
  return;
}



/* Entry: 1089509d0; end: 1089509ff;  */

void FUN_1089509d0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x590);
  if ((*(byte *)(plVar1 + 2) & 1) == 0) {
    *(undefined1 *)(plVar1 + 2) = 1;
  }
  plVar1[1] = 13000000000;
                    /* WARNING: Could not recover jumptable at 0x0001089509fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}



/* Entry: 108950a00; end: 108950a87;  */

void FUN_108950a00(int *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  
  FUN_108950a88(param_5,param_2 + 0x18);
  if ((int)param_5 == 0) {
    FUN_108b82a18(param_1,param_2 + 0x48,param_3,param_4);
    if (*param_1 != 2) {
      plVar1 = *(long **)(param_2 + 0x588);
      if ((char)plVar1[2] == '\x01') {
        *(undefined1 *)(plVar1 + 1) = 0;
        *(undefined1 *)(plVar1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001089a46dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x18))();
        return;
      }
      return;
    }
  }
  else {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 108950a88; end: 108950a9f;  */

uint FUN_108950a88(uint param_1)

{
  func_0x00010bd438f8();
  return param_1 ^ 1;
}



/* Entry: 108950aa0; end: 108950bdb;  */

void FUN_108950aa0(long param_1)

{
  long *plVar1;
  
  FUN_1089a46c0(*(undefined8 *)(param_1 + 0x588));
  plVar1 = *(long **)(param_1 + 0x590);
  if ((char)plVar1[2] == '\x01') {
    *(undefined1 *)(plVar1 + 1) = 0;
    *(undefined1 *)(plVar1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001089a46dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 108950bdc; end: 108950bf7;  */

void FUN_108950bdc(void)

{
  return;
}



/* Entry: 108950bf8; end: 108950ce3;  */

void FUN_108950bf8(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  long lVar3;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x000108950d44();
  lVar3 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_28 = extraout_x8;
  func_0x000107c2823c(&lStack_88,0x20);
  lVar2 = lVar3 + 0x48;
  func_0x000108b8c7bc(lVar2,&uStack_70,lStack_88,lStack_80 - lStack_88);
  func_0x000107c2823c(&lStack_88,lVar2);
  (**(code **)(**(long **)(lVar3 + 8) + 0x28))
            (*(long **)(lVar3 + 8),lVar3 + 0x18,lStack_88,lStack_80 - lStack_88);
  plVar1 = *(long **)(lVar3 + 0x590);
  lVar2 = *(long *)(lVar3 + 0x40);
  if ((*(byte *)(plVar1 + 2) & 1) == 0) {
    *(undefined1 *)(plVar1 + 2) = 1;
  }
  plVar1[1] = lVar2 * 1000000000;
  (**(code **)(*plVar1 + 0x10))();
  plVar1 = &lStack_88;
  func_0x000107c27914(plVar1);
  func_0x000108950d1c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27914(&lStack_88);
  __Unwind_Resume(plVar1);
  return;
}



/* Entry: 108950ce4; end: 108950d53;  */

void FUN_108950ce4(void)

{
  return;
}



/* Entry: 108950d54; end: 108951003;  */

void FUN_108950d54(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001089544d4();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x29) = 2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = *param_6;
  lVar2 = param_6[1];
  *(long *)(param_1 + 0x78) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001089544f0();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x80) = *param_7;
  lVar2 = param_7[1];
  *(long *)(unaff_x19 + 0x88) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001089544f0();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined1 *)(unaff_x19 + 0x90) = 0;
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined1 *)(unaff_x19 + 0xb8) = 0;
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  *(undefined4 *)(unaff_x19 + 300) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x121) = 0;
  *(undefined8 *)(unaff_x19 + 0x119) = 0;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar5 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)(unaff_x19 + 0x144) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)(unaff_x19 + 0x13c) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
  _memcpy(unaff_x19 + 0x150,param_8,0x48);
  func_0x000107c2793c(&UNK_10f4ed505);
  func_0x000107c3173c(unaff_x19 + 0x198);
  *(undefined1 *)(unaff_x19 + 0x1b0) = 0;
  plVar1 = (long *)0x1a0;
  __Znwm();
  *plVar1 = unaff_x19;
  plVar1[2] = 0;
  plVar1[1] = 0;
  plVar1[4] = 0;
  plVar1[3] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  plVar1[8] = 0;
  plVar1[7] = 0;
  plVar1[0x27] = (long)&UNK_10f684e5a;
  plVar1[0x28] = 1;
  plVar1[9] = (long)&UNK_10f4ed528;
  plVar1[10] = (long)&UNK_10f4ed528;
  plVar1[0xb] = 0xb;
  *(undefined1 *)(plVar1 + 0xc) = 0;
  plVar1[0xd] = (long)&UNK_10f4ed534;
  plVar1[0xe] = (long)&UNK_10f4ed534;
  plVar1[0xf] = 0xe;
  *(undefined1 *)(plVar1 + 0x10) = 0;
  plVar1[0x11] = (long)&UNK_10f4ed543;
  *(undefined2 *)(plVar1 + 0x12) = 0;
  plVar1[0x13] = (long)&UNK_10f4ed543;
  plVar1[0x14] = 7;
  *(undefined1 *)(plVar1 + 0x16) = 0;
  plVar1[0x15] = 0;
  *(undefined8 *)((long)plVar1 + 0xb4) = 0x200000002;
  *(undefined4 *)((long)plVar1 + 0xbc) = 2;
  *(undefined1 *)(plVar1 + 0x18) = 0;
  plVar1[0x1a] = (long)&UNK_10f4ed54b;
  plVar1[0x1b] = (long)&UNK_10f4ed54b;
  *(undefined2 *)(plVar1 + 0x1c) = 0;
  *(undefined1 *)((long)plVar1 + 0xe2) = 0;
  plVar1[0x1d] = (long)&UNK_10f4ed54b;
  plVar1[0x1e] = 10;
  *(undefined4 *)(plVar1 + 0x1f) = 2;
  *(undefined1 *)((long)plVar1 + 0xfc) = 0;
  plVar1[0x20] = 0x200000002;
  plVar1[0x21] = (long)&UNK_10f4ed556;
  *(undefined2 *)(plVar1 + 0x22) = 0;
  *(undefined1 *)((long)plVar1 + 0x112) = 0;
  plVar1[0x23] = (long)&UNK_10f4ed556;
  plVar1[0x24] = 0x14;
  *(undefined4 *)(plVar1 + 0x25) = 2;
  plVar1[0x29] = (long)&UNK_10f684e5a;
  plVar1[0x2a] = 9;
  *(undefined4 *)(plVar1 + 0x2b) = 2;
  plVar1[0x2c] = (long)&DAT_10f31a21b;
  plVar1[0x31] = 0;
  plVar1[0x30] = 0;
  plVar1[0x33] = 0;
  plVar1[0x32] = 0;
  plVar1[0x2f] = 0;
  plVar1[0x2e] = 0;
  *(undefined1 *)(plVar1 + 0x2d) = 0;
  *(long **)(unaff_x19 + 0x1b8) = plVar1;
  return;
}



/* Entry: 108951004; end: 10895119b;  */

void FUN_108951004(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  func_0x0001089544d4();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  lVar4 = *(long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (lVar4 == 0) {
LAB_108951134:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x198);
    func_0x000107c27914(unaff_x19 + 0x110);
    func_0x000108950b24(unaff_x19 + 0x108);
    func_0x000108950af0(unaff_x19 + 0x100);
    func_0x000108953b9c(unaff_x19 + 0xf8);
    func_0x000108953b6c(unaff_x19 + 0xf0);
    func_0x000108953b44(unaff_x19 + 0x80);
    func_0x000104c04a68(unaff_x19 + 0x70);
    func_0x000108953b1c(unaff_x19 + 0x58);
    func_0x000108950ac8(unaff_x19 + 0x48);
    return;
  }
  plVar8 = (long *)(*(long *)(lVar4 + 0x178) + (*(ulong *)(lVar4 + 400) / 0x1a) * 8);
  if (*(long *)(lVar4 + 0x180) == *(long *)(lVar4 + 0x178)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar8 + (*(ulong *)(lVar4 + 400) % 0x1a) * 0x98;
  }
  lVar1 = lVar4 + 0x170;
  FUN_108951b18();
  do {
    lVar9 = lVar5 + -0xf70;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(lVar4 + 0x198) = 0;
        puVar6 = *(undefined8 **)(lVar4 + 0x178);
        while( true ) {
          puVar7 = *(undefined8 **)(lVar4 + 0x180);
          uVar2 = (long)puVar7 - (long)puVar6 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar6);
          puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x178) + 8);
          *(undefined8 **)(lVar4 + 0x178) = puVar6;
        }
        if (uVar2 == 1) {
          uVar3 = 0xd;
LAB_1089510f0:
          *(undefined8 *)(lVar4 + 400) = uVar3;
        }
        else if (uVar2 == 2) {
          uVar3 = 0x1a;
          goto LAB_1089510f0;
        }
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          __ZdlPv(*puVar6);
        }
        lVar5 = *(long *)(lVar4 + 0x180);
        while (lVar5 != *(long *)(lVar4 + 0x178)) {
          lVar5 = lVar5 + -8;
          *(long *)(lVar4 + 0x180) = lVar5;
        }
        if (*(long *)(lVar4 + 0x170) != 0) {
          __ZdlPv();
        }
        __ZdlPv(lVar4);
        goto LAB_108951134;
      }
      FUN_108951b44(lVar5);
      lVar5 = lVar5 + 0x98;
      lVar9 = lVar9 + 0x98;
    } while (*plVar8 != lVar9);
    plVar8 = plVar8 + 1;
    lVar5 = *plVar8;
  } while( true );
}



/* Entry: 10895119c; end: 1089511af;  */

void FUN_10895119c(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  func_0x0001089544d4();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  lVar4 = *(long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (lVar4 == 0) {
LAB_108951134:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x198);
    func_0x000107c27914(unaff_x19 + 0x110);
    func_0x000108950b24(unaff_x19 + 0x108);
    func_0x000108950af0(unaff_x19 + 0x100);
    func_0x000108953b9c(unaff_x19 + 0xf8);
    func_0x000108953b6c(unaff_x19 + 0xf0);
    func_0x000108953b44(unaff_x19 + 0x80);
    func_0x000104c04a68(unaff_x19 + 0x70);
    func_0x000108953b1c(unaff_x19 + 0x58);
    func_0x000108950ac8(unaff_x19 + 0x48);
    return;
  }
  plVar8 = (long *)(*(long *)(lVar4 + 0x178) + (*(ulong *)(lVar4 + 400) / 0x1a) * 8);
  if (*(long *)(lVar4 + 0x180) == *(long *)(lVar4 + 0x178)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar8 + (*(ulong *)(lVar4 + 400) % 0x1a) * 0x98;
  }
  lVar1 = lVar4 + 0x170;
  FUN_108951b18();
  do {
    lVar9 = lVar5 + -0xf70;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(lVar4 + 0x198) = 0;
        puVar6 = *(undefined8 **)(lVar4 + 0x178);
        while( true ) {
          puVar7 = *(undefined8 **)(lVar4 + 0x180);
          uVar2 = (long)puVar7 - (long)puVar6 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar6);
          puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x178) + 8);
          *(undefined8 **)(lVar4 + 0x178) = puVar6;
        }
        if (uVar2 == 1) {
          uVar3 = 0xd;
LAB_1089510f0:
          *(undefined8 *)(lVar4 + 400) = uVar3;
        }
        else if (uVar2 == 2) {
          uVar3 = 0x1a;
          goto LAB_1089510f0;
        }
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          __ZdlPv(*puVar6);
        }
        lVar5 = *(long *)(lVar4 + 0x180);
        while (lVar5 != *(long *)(lVar4 + 0x178)) {
          lVar5 = lVar5 + -8;
          *(long *)(lVar4 + 0x180) = lVar5;
        }
        if (*(long *)(lVar4 + 0x170) != 0) {
          __ZdlPv();
        }
        __ZdlPv(lVar4);
        goto LAB_108951134;
      }
      FUN_108951b44(lVar5);
      lVar5 = lVar5 + 0x98;
      lVar9 = lVar9 + 0x98;
    } while (*plVar8 != lVar9);
    plVar8 = plVar8 + 1;
    lVar5 = *plVar8;
  } while( true );
}



/* Entry: 1089511b0; end: 1089511c3;  */

void FUN_1089511b0(void)

{
  FUN_108951004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089511c4; end: 1089511d3;  */

void FUN_1089511c4(long param_1)

{
  FUN_108951004(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089511d4; end: 10895139f;  */

void FUN_1089511d4(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  code *extraout_x8_00;
  long lVar4;
  code *extraout_x8_01;
  long lVar5;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  char cStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined1 uStack_48;
  
  (**(code **)(*param_1 + 0x50))(&uStack_78);
  func_0x000108951ad4(param_1 + 9,&uStack_78);
  lVar3 = CONCAT44(uStack_5c,uStack_60);
  lVar4 = CONCAT44(uStack_64,uStack_68);
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  lStack_a8 = param_1[0xc];
  lStack_b0 = param_1[0xb];
  param_1[0xc] = lVar3;
  param_1[0xb] = lVar4;
  FUN_108953b1c(&lStack_b0);
  FUN_108953b1c(&uStack_68);
  func_0x000108950ac8(&uStack_78);
  (**(code **)(*(long *)param_1[9] + 0x18))(&lStack_b0,(long *)param_1[9],0);
  uVar2 = cStack_88 == '\x01';
  if ((bool)uVar2) {
    FUN_1089513a0(param_1,&uStack_78);
  }
  else {
    (*(code *)**(undefined8 **)param_1[0xb])();
    *(undefined1 *)(param_1 + 0x36) = 1;
    lVar5 = param_1[0x37];
    func_0x00010895421c((&PTR_DAT_110a9d3a8)[*(byte *)(lVar5 + 0x168)],&uStack_b1);
    func_0x0001089541e0();
    lVar4 = extraout_x8;
    lVar3 = extraout_x8;
    do {
      while (lVar4 != 0) {
        func_0x000108954094(*(undefined8 *)(lVar5 + 0x178));
        (*extraout_x8_00)(lVar5 + 0x48,lVar5,lVar5 + 0x48);
        func_0x0001089543d0();
        lVar4 = *(long *)(lVar5 + 0x198);
      }
      bVar1 = lVar3 != 0;
      lVar3 = 0;
    } while (bVar1);
    func_0x0001089542b0();
    if ((bool)uVar2) {
      uStack_78 = (undefined4)param_1[0x17];
      uStack_74 = (undefined4)((ulong)param_1[0x17] >> 0x20);
      uStack_68 = (undefined4)param_1[0x19];
      uStack_70 = (undefined4)param_1[0x18];
      uStack_6c = (undefined4)((ulong)param_1[0x18] >> 0x20);
      uStack_5c = (undefined4)*(undefined8 *)((long)param_1 + 0xd4);
      uStack_58 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xd4) >> 0x20);
      uStack_64 = (undefined4)*(undefined8 *)((long)param_1 + 0xcc);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xcc) >> 0x20);
      uStack_54 = *(undefined8 *)((long)param_1 + 0xdc);
      uStack_48 = 1;
      *(undefined1 *)(param_1 + 0x1d) = 0;
      func_0x0001089543d8(param_1[3]);
      (*extraout_x8_01)();
    }
    func_0x000108954404();
    if ((bool)uVar2) {
      uStack_78 = (undefined4)param_1[0x12];
      uStack_6c = (undefined4)*(undefined8 *)((long)param_1 + 0x9c);
      uStack_74 = (undefined4)*(undefined8 *)((long)param_1 + 0x94);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x94) >> 0x20);
      uStack_60 = (undefined4)param_1[0x15];
      uStack_5c = (undefined4)((ulong)param_1[0x15] >> 0x20);
      uStack_68 = (undefined4)param_1[0x14];
      uStack_64 = (undefined4)((ulong)param_1[0x14] >> 0x20);
      uStack_58 = CONCAT31(uStack_58._1_3_,1);
      *(undefined1 *)(param_1 + 0x16) = 0;
      (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uStack_78,&uStack_74);
    }
  }
  func_0x000104c05024(&lStack_b0);
  return;
}



/* Entry: 1089513a0; end: 1089515ab;  */

void FUN_1089513a0(void)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000108954598();
  func_0x00010895433c();
  func_0x000108954294();
  func_0x0001089541e0();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010895404c();
      func_0x0001089543d0();
      lVar3 = *(long *)(unaff_x20 + 0x198);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x0001089542b0();
  if ((bool)in_ZR) {
    func_0x000108953fd0();
  }
  func_0x000108954404();
  if ((bool)in_ZR) {
    func_0x000108954010();
  }
  return;
}



/* Entry: 1089515ac; end: 10895165f;  */

void FUN_1089515ac(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar4;
  
  while( true ) {
    plVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010895432c();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    *(undefined8 **)((long)register0x00000008 + -0xa8) = param_2;
    uVar4 = *param_3;
    *(undefined8 *)((long)register0x00000008 + -0x98) = param_3[1];
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar4;
    uVar4 = *(undefined8 *)((long)param_3 + 0xc);
    *(undefined8 *)((long)register0x00000008 + -0x8c) = *(undefined8 *)((long)param_3 + 0x14);
    *(undefined8 *)((long)register0x00000008 + -0x94) = uVar4;
    unaff_x20 = *param_2;
    unaff_x21 = param_2[1];
    uVar4 = unaff_x20;
    FUN_108b821ec(unaff_x20,unaff_x21);
    *(int *)((long)register0x00000008 + -0x84) = (int)uVar4;
    *(undefined4 *)((long)register0x00000008 + -0x80) = 3;
    if ((int)uVar4 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x40) = 0;
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x78);
      func_0x000108b8e840();
      *(undefined4 *)((long)register0x00000008 + -0x80) =
           *(undefined4 *)(&UNK_10df78020 + ((ulong)puVar2 & 0xffffffff) * 4);
    }
    param_2 = (undefined8 *)((long)register0x00000008 + -0xa8);
    plVar3 = plVar1;
    (**(code **)(*plVar1 + 0x68))();
    func_0x000108954280(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_108951660;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_1 = plVar3 + -1;
    unaff_x19 = plVar1;
  }
  return;
}



/* Entry: 108951660; end: 108951667;  */

void FUN_108951660(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar3;
  
  while( true ) {
    plVar2 = param_1 + -1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010895432c();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    *(undefined8 **)((long)register0x00000008 + -0xa8) = param_2;
    uVar3 = *param_3;
    *(undefined8 *)((long)register0x00000008 + -0x98) = param_3[1];
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar3;
    uVar3 = *(undefined8 *)((long)param_3 + 0xc);
    *(undefined8 *)((long)register0x00000008 + -0x8c) = *(undefined8 *)((long)param_3 + 0x14);
    *(undefined8 *)((long)register0x00000008 + -0x94) = uVar3;
    unaff_x20 = *param_2;
    unaff_x21 = param_2[1];
    uVar3 = unaff_x20;
    FUN_108b821ec(unaff_x20,unaff_x21);
    *(int *)((long)register0x00000008 + -0x84) = (int)uVar3;
    *(undefined4 *)((long)register0x00000008 + -0x80) = 3;
    if ((int)uVar3 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x40) = 0;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x78);
      func_0x000108b8e840();
      *(undefined4 *)((long)register0x00000008 + -0x80) =
           *(undefined4 *)(&UNK_10df78020 + ((ulong)puVar1 & 0xffffffff) * 4);
    }
    param_2 = (undefined8 *)((long)register0x00000008 + -0xa8);
    param_1 = plVar2;
    (**(code **)(*plVar2 + 0x68))();
    func_0x000108954280(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_108951660;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x19 = plVar2;
  }
  return;
}



/* Entry: 108951668; end: 1089516cb;  */

void FUN_108951668(void)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000108954598();
  func_0x00010895433c();
  func_0x000108954294();
  func_0x0001089541e0();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010895404c();
      func_0x0001089543d0();
      lVar3 = *(long *)(unaff_x20 + 0x198);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x0001089542b0();
  if ((bool)in_ZR) {
    func_0x000108953fd0();
  }
  func_0x000108954404();
  if ((bool)in_ZR) {
    func_0x000108954010();
  }
  return;
}



/* Entry: 1089516cc; end: 1089516eb;  */

void FUN_1089516cc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1089513a0(param_1,&uStack_11);
  return;
}



/* Entry: 1089516ec; end: 1089516f3;  */

void FUN_1089516ec(long param_1)

{
  undefined1 uStack_11;
  
  FUN_1089513a0(param_1 + -8,&uStack_11);
  return;
}



/* Entry: 1089516f4; end: 10895182b;  */

void FUN_1089516f4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int extraout_w10;
  undefined8 uVar4;
  long *plVar5;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  
  (**(code **)(**(long **)(param_2 + 0x70) + 0x10))
            (&uStack_60,*(long **)(param_2 + 0x70),param_2 + 8,param_2 + 0x130,2);
  FUN_10895182c(&lStack_68,param_2 + 0x150);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  puVar3 = (undefined8 *)0x5b0;
  __Znwm();
  plVar5 = puVar3 + 1;
  *plVar5 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110a9dbf8;
  lStack_48 = lStack_68;
  FUN_1089506bc(puVar3 + 3,uVar4,&uStack_60,param_2 + 0x130,param_2 + 0x10,&lStack_48,
                *(undefined8 *)(param_2 + 400));
  if (lStack_48 != 0) {
    func_0x000108954370();
  }
  param_1[1] = lStack_58;
  *param_1 = uStack_60;
  if (lStack_58 != 0) {
    do {
      func_0x0001089544f0();
    } while (extraout_w10 != 0);
  }
  param_1[2] = puVar3 + 3;
  param_1[3] = puVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x000107c278a0(puVar3);
  func_0x000108950ac8(&uStack_60);
  return;
}



/* Entry: 10895182c; end: 108951873;  */

void FUN_10895182c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *puVar1 = &PTR_FUN_110a9db98;
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  puVar1[2] = param_2[1];
  puVar1[1] = uVar2;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((long)puVar1 + 0x14);
  *param_1 = puVar1;
  return;
}



/* Entry: 108951874; end: 10895190b;  */

void FUN_108951874(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  
  param_2 = param_2 + 0x198;
  func_0x000107c27e5c();
  lStack_40 = param_2;
  uStack_38 = param_3;
  func_0x000107c2793c(&UNK_10f4ed519);
  func_0x000107c3173c(auStack_58);
  uVar1 = 0x5e8;
  __Znwm();
  FUN_108b8183c();
  *param_1 = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 10895190c; end: 108951977;  */

void FUN_10895190c(void)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000108954598();
  func_0x0001089542d0();
  func_0x000108954500();
  func_0x00010895421c();
  func_0x0001089541e0();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010895404c();
      func_0x0001089543d0();
      lVar3 = *(long *)(unaff_x20 + 0x198);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x0001089542b0();
  if ((bool)in_ZR) {
    func_0x000108953fd0();
  }
  func_0x000108954404();
  if ((bool)in_ZR) {
    func_0x000108954010();
  }
  return;
}



/* Entry: 108951978; end: 10895197f;  */

void FUN_108951978(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000108954598(param_1 + -0x10);
  func_0x0001089542d0();
  func_0x000108954500();
  func_0x00010895421c();
  func_0x0001089541e0();
  lVar3 = extraout_x8;
  lVar2 = extraout_x8;
  do {
    while (lVar3 != 0) {
      func_0x00010895404c();
      func_0x0001089543d0();
      lVar3 = *(long *)(unaff_x20 + 0x198);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x0001089542b0();
  if ((bool)in_ZR) {
    func_0x000108953fd0();
  }
  func_0x000108954404();
  if ((bool)in_ZR) {
    func_0x000108954010();
  }
  return;
}



/* Entry: 108951980; end: 1089519f3;  */

void FUN_108951980(void)

{
  bool bVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000108954598();
  func_0x0001089542d0();
  func_0x00010895421c((&PTR_FUN_110a9db40)[extraout_x8]);
  func_0x0001089541e0();
  lVar3 = extraout_x8_00;
  lVar2 = extraout_x8_00;
  do {
    while (lVar3 != 0) {
      func_0x00010895404c();
      func_0x0001089543d0();
      lVar3 = *(long *)(unaff_x20 + 0x198);
    }
    bVar1 = lVar2 != 0;
    lVar2 = 0;
  } while (bVar1);
  func_0x0001089542b0();
  if ((bool)in_ZR) {
    func_0x000108953fd0();
  }
  func_0x000108954404();
  if ((bool)in_ZR) {
    func_0x000108954010();
  }
  return;
}



/* Entry: 1089519f4; end: 108951a7b;  */

undefined1 * FUN_1089519f4(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined8 extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_88 [24];
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x00010895432c();
  puVar2 = *(undefined1 **)(param_1 + 0xf8);
  ppuStack_48 = &PTR_DAT_110a9dd68;
  pppuStack_30 = &ppuStack_48;
  lStack_40 = param_1;
  uStack_28 = extraout_x8;
  FUN_108b81e84(puVar2,*(undefined8 *)*param_2,((undefined8 *)*param_2)[1],&ppuStack_48,param_2 + 1)
  ;
  FUN_108953e50();
  func_0x000108954280(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_48;
  FUN_108953e50();
  func_0x000108954398();
  func_0x00010895454c(pppuVar1[0x20]);
  (**(code **)(*pppuVar1[0x1e] + 8))(auStack_88,pppuVar1[0x1e],1);
  func_0x000107c3194c(pppuVar1 + 0x22,auStack_88);
  puVar2 = auStack_88;
  func_0x000107c27914(puVar2);
  return puVar2;
}



/* Entry: 108951a7c; end: 108951b17;  */

void FUN_108951a7c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00010895454c(*(undefined8 *)(param_1 + 0x100));
  (**(code **)(**(long **)(param_1 + 0xf0) + 8))(auStack_38,*(long **)(param_1 + 0xf0),1);
  func_0x000107c3194c(param_1 + 0x110,auStack_38);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 108951b18; end: 108951b43;  */

long FUN_108951b18(long param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    func_0x0001089545ac();
    return param_1;
  }
  return 0;
}



/* Entry: 108951b44; end: 108951b6b;  */

long FUN_108951b44(long param_1)

{
  (**(code **)(param_1 + 0x88))();
  return param_1;
}



/* Entry: 108951b6c; end: 108951bb3;  */

void FUN_108951b6c(long param_1)

{
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x38))();
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108951ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))();
    return;
  }
  return;
}



/* Entry: 108951bb4; end: 108951c0f;  */

void FUN_108951bb4(undefined8 *param_1)

{
  FUN_1089a3c0c();
  func_0x0001089543f8(*param_1);
  func_0x00010895437c();
  func_0x000108954410();
  return;
}



/* Entry: 108951c10; end: 108951c67;  */

void FUN_108951c10(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x100);
  (**(code **)*puVar1)();
  lVar2 = *(long *)(param_1 + 0x108);
  if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x10) = 1;
  }
  *(undefined8 **)(lVar2 + 8) = puVar1;
  func_0x00010895454c();
  func_0x000108954564();
                    /* WARNING: Could not recover jumptable at 0x000108951c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x28))();
  return;
}



/* Entry: 108951c68; end: 108951e17;  */

void FUN_108951c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  long extraout_x9;
  
  func_0x00010895450c();
                    /* WARNING: Could not recover jumptable at 0x000108954090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_110a9d1f8)[extraout_x9])(param_4,param_2,param_3,extraout_x8,param_1 + 0x120);
  return;
}



/* Entry: 108951e18; end: 108951e83;  */

void FUN_108951e18(long param_1)

{
  ulong uVar1;
  
  func_0x0001089545ac(*(undefined8 *)(param_1 + 8));
  FUN_108951b44();
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0x33 < uVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x1a;
  }
  return;
}



/* Entry: 108951e84; end: 108951e87;  */

undefined8 FUN_108951e84(void)

{
  return 0;
}



/* Entry: 108951e88; end: 108951e9f;  */

undefined8 FUN_108951e88(void)

{
  func_0x000108954450();
  return 1;
}



/* Entry: 108951ea0; end: 108951eab;  */

undefined8 FUN_108951ea0(void)

{
  return 1;
}



/* Entry: 108951eac; end: 108951eef;  */

undefined8 FUN_108951eac(undefined8 param_1,long param_2,long *param_3)

{
  ulong extraout_x10;
  
  *(int *)(*param_3 + 0x90) = (int)*(undefined8 *)(param_2 + 0xf8);
  func_0x0001089542fc();
  if ((extraout_x10 & 1) == 0) {
    func_0x0001089545c8();
  }
  FUN_108951bb4();
  return 1;
}



/* Entry: 108951ef0; end: 108951f0f;  */

undefined8 FUN_108951ef0(void)

{
  func_0x000108954318();
  func_0x0001089543e4();
  return 1;
}



/* Entry: 108951f10; end: 108951f13;  */

undefined8 FUN_108951f10(void)

{
  return 0;
}



/* Entry: 108951f14; end: 1089520df;  */

undefined8 FUN_108951f14(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long *plVar6;
  long lVar7;
  long alStack_90 [3];
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  puVar5 = param_3;
  func_0x00010895432c();
  plVar6 = (long *)*puVar5;
  lVar7 = *param_1;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar6 + 0x58))(&pcStack_78,plVar6,lVar7);
  pcVar1 = pcStack_78;
  pcStack_78 = (code *)0x0;
  lVar2 = plVar6[0x1e];
  plVar6[0x1e] = (long)pcVar1;
  if (lVar2 != 0) {
    func_0x0001089543d8();
    (*extraout_x8_00)();
    pcVar1 = pcStack_78;
    pcStack_78 = (code *)0x0;
    if (pcVar1 != (code *)0x0) {
      func_0x0001089543d8();
      (*extraout_x8_01)();
    }
  }
  uVar3 = 0x5a8;
  __Znwm(0x5a8);
  FUN_108b81dd4();
  pcStack_78 = (code *)0x0;
  FUN_108953bc0(plVar6 + 0x1f,uVar3);
  func_0x000108953b9c(&pcStack_78);
  FUN_10895182c(&pcStack_78,plVar6 + 0x2e);
  lVar2 = plVar6[0x20];
  plVar6[0x20] = (long)pcStack_78;
  if (lVar2 != 0) {
    func_0x000108954370();
  }
  pcStack_78 = FUN_108953e94;
  ppuStack_70 = &PTR_FUN_110a9dde8;
  plStack_68 = plVar6;
  (*(code *)**(undefined8 **)plVar6[4])(alStack_90,(undefined8 *)plVar6[4],&pcStack_78);
  lVar2 = alStack_90[0];
  alStack_90[0] = 0;
  lVar4 = plVar6[0x21];
  plVar6[0x21] = lVar2;
  if (lVar4 != 0) {
    func_0x0001089543f8();
    (*extraout_x8_02)();
    lVar2 = alStack_90[0];
    alStack_90[0] = 0;
    if (lVar2 != 0) {
      func_0x0001089543f8();
      (*extraout_x8_03)();
    }
  }
  func_0x0001089544c4();
  (**(code **)(*(long *)plVar6[0x1e] + 8))(alStack_90,(long *)plVar6[0x1e],0);
  func_0x000107c3194c(plVar6 + 0x22,alStack_90);
  func_0x000107c27914(alStack_90);
  lVar4 = *(long *)(lVar7 + 0x6c);
  lVar2 = *(long *)(lVar7 + 100);
  uVar3 = *(undefined8 *)(lVar7 + 0x70);
  *(undefined8 *)((long)plVar6 + 0x3c) = *(undefined8 *)(lVar7 + 0x78);
  *(undefined8 *)((long)plVar6 + 0x34) = uVar3;
  plVar6[6] = lVar4;
  plVar6[5] = lVar2;
  *(undefined1 *)(plVar6 + 0xd) = *(undefined1 *)(lVar7 + 0x60);
  FUN_108951c10(*param_3);
  func_0x000108954280(uStack_48);
  if ((bool)in_ZR) {
    return 1;
  }
  ___stack_chk_fail();
  func_0x0001089544c4();
  func_0x000108954398();
  return 0;
}



/* Entry: 1089520e0; end: 1089520e3;  */

undefined8 FUN_1089520e0(void)

{
  return 0;
}



/* Entry: 1089520e4; end: 1089520ff;  */

void FUN_1089520e4(void)

{
  func_0x000108954188();
  func_0x000108954270();
  return;
}



/* Entry: 108952100; end: 108952117;  */

undefined8 FUN_108952100(void)

{
  func_0x000108954230();
  return 1;
}



/* Entry: 108952118; end: 10895213f;  */

undefined8 FUN_108952118(void)

{
  func_0x000108954364();
  func_0x000108954124();
  func_0x00010895420c();
  return 1;
}



/* Entry: 108952140; end: 108952143;  */

undefined8 FUN_108952140(void)

{
  return 0;
}



/* Entry: 108952144; end: 108952193;  */

undefined8 FUN_108952144(void)

{
  func_0x000108954364();
  func_0x000108954124();
  func_0x00010895420c();
  return 1;
}



/* Entry: 108952194; end: 108952303;  */

undefined8 FUN_108952194(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint extraout_w10;
  
  func_0x000108954584();
  func_0x000108954418();
  func_0x000108954124();
  func_0x0001089543ec();
  func_0x000108954198(*param_3);
  if ((extraout_w10 & 1) == 0) {
    func_0x0001089545c8();
  }
  func_0x000108954494();
  func_0x000108954108();
  return 1;
}



/* Entry: 108952304; end: 108952307;  */

undefined8 FUN_108952304(void)

{
  return 0;
}



/* Entry: 108952308; end: 108952323;  */

void FUN_108952308(void)

{
  func_0x000108954188();
  func_0x000108954270();
  return;
}



/* Entry: 108952324; end: 10895233b;  */

undefined8 FUN_108952324(void)

{
  func_0x000108954230();
  return 1;
}



/* Entry: 10895233c; end: 10895233f;  */

undefined8 FUN_10895233c(void)

{
  return 0;
}



/* Entry: 108952340; end: 108952357;  */

undefined8 FUN_108952340(void)

{
  func_0x000108954450();
  return 1;
}



/* Entry: 108952358; end: 108952363;  */

undefined8 FUN_108952358(void)

{
  return 1;
}



/* Entry: 108952364; end: 1089523a7;  */

undefined8 FUN_108952364(undefined8 param_1,long param_2,long *param_3)

{
  ulong extraout_x10;
  
  *(int *)(*param_3 + 0x90) = (int)*(undefined8 *)(param_2 + 0xf8);
  func_0x0001089542fc();
  if ((extraout_x10 & 1) == 0) {
    func_0x0001089545c8();
  }
  FUN_108951bb4();
  return 1;
}



/* Entry: 1089523a8; end: 1089523ff;  */

undefined8 FUN_1089523a8(void)

{
  func_0x000108954318();
  func_0x0001089543e4();
  return 1;
}



/* Entry: 108952400; end: 10895241f;  */

undefined8 FUN_108952400(void)

{
  return 0;
}



/* Entry: 108952420; end: 10895243b;  */

void FUN_108952420(void)

{
  func_0x000108954188();
  func_0x000108954270();
  return;
}



/* Entry: 10895243c; end: 108952453;  */

undefined8 FUN_10895243c(void)

{
  func_0x000108954230();
  return 1;
}



/* Entry: 108952454; end: 10895247b;  */

undefined8 FUN_108952454(void)

{
  return 1;
}



/* Entry: 10895247c; end: 108952573;  */

undefined8 FUN_10895247c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_cc;
  undefined8 auStack_c0 [2];
  undefined8 uStack_ac;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010895432c();
  uStack_28 = extraout_x8;
  if (*(int *)((long)param_1 + 0x24) == 0) {
    (**(code **)(**(long **)(*param_3 + 0x58) + 0x10))
              (&iStack_e4,*(long **)(*param_3 + 0x58),*(undefined8 *)*param_1,
               ((undefined8 *)*param_1)[1],param_1 + 1);
    in_ZR = iStack_e4 == 1;
    if ((bool)in_ZR) {
      uStack_40 = 8;
      uStack_38 = 0x108952de0;
      uStack_30 = 0x108952de4;
      func_0x00010895452c();
    }
    else {
      if (iStack_e4 != 0) goto LAB_108952534;
      auStack_c0[0] = uStack_e0;
      uStack_ac = uStack_cc;
      uStack_40 = 7;
      uStack_38 = 0x108952dc8;
      uStack_30 = 0x108952dcc;
      func_0x00010895452c();
    }
    FUN_108951b44(auStack_c0);
  }
LAB_108952534:
  func_0x000108954280(uStack_28);
  if ((bool)in_ZR) {
    return 1;
  }
  ___stack_chk_fail();
  FUN_108951b44(auStack_c0);
  func_0x000108954398();
  return 1;
}



/* Entry: 108952574; end: 108952577;  */

undefined8 FUN_108952574(void)

{
  return 1;
}



/* Entry: 108952578; end: 1089526d7;  */

undefined8 FUN_108952578(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  lVar5 = *param_3;
  if (*(int *)(param_1 + 0x24) == 0 && *(int *)(param_1 + 0x28) == 0) {
    lVar3 = param_1;
    func_0x000108954458();
    if (((*(byte *)(lVar5 + 0x68) & 1) == 0) && ((int)lVar3 == 1)) {
      *(undefined1 *)(lVar5 + 0x69) = 1;
    }
    bVar1 = *(char *)(lVar5 + 0x29) != '\x02';
    if (bVar1) {
      uStack_48 = 0;
      uStack_3c = *(undefined8 *)(lVar5 + 0x38);
      uStack_44 = *(undefined8 *)(lVar5 + 0x30);
      uStack_34 = *(undefined4 *)(lVar5 + 0x40);
    }
    else {
      uStack_48 = *(undefined4 *)(lVar5 + 0x2c);
      uStack_3c = 0;
      uStack_44 = 0;
      uStack_34 = 0;
    }
    uStack_4c = (uint)bVar1;
    bVar1 = *(char *)(param_1 + 9) != '\x02';
    if (bVar1) {
      uStack_64 = 0;
      uStack_58 = *(undefined8 *)(param_1 + 0x18);
      uStack_60 = *(undefined8 *)(param_1 + 0x10);
      uStack_50 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uStack_64 = *(undefined4 *)(param_1 + 0xc);
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    uStack_68 = (uint)bVar1;
    puVar4 = &uStack_4c;
    func_0x00010bd4370c(puVar4,&uStack_68);
    if (((int)puVar4 != 0) && (*(short *)(lVar5 + 0x2a) != *(short *)(param_1 + 10))) {
      *(undefined1 *)(lVar5 + 0x128) = 1;
    }
    lVar3 = lVar5 + 0x28;
    FUN_108950a88(lVar3,param_1 + 8);
    if ((int)lVar3 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(lVar5 + 0x3c) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(lVar5 + 0x34) = uVar8;
      *(undefined8 *)(lVar5 + 0x30) = uVar7;
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
    }
    func_0x000108954564();
    (**(code **)(extraout_x8 + 0x28))();
  }
  else {
    func_0x0001089544a0();
    iVar2 = (int)param_1;
    func_0x000108952de8();
    if (iVar2 == 0) {
      func_0x0001089544a0();
      func_0x000108952ec8();
      if (iVar2 != 0) {
        func_0x0001089544a0();
        func_0x000108952edc();
      }
    }
    else {
      func_0x000108954480();
    }
  }
  return 1;
}



/* Entry: 1089526d8; end: 1089527b3;  */

undefined8 FUN_1089526d8(int param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_d0 [128];
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108954578();
  func_0x00010895432c();
  plVar4 = (long *)*param_3;
  uStack_38 = extraout_x8;
  func_0x000108952f34();
  if (param_1 == 0) {
    plVar4 = unaff_x19;
    func_0x000108952de8();
    if ((((ulong)plVar4 & 1) == 0) && (plVar4 = unaff_x19, func_0x000108952ec8(), (int)plVar4 != 0))
    {
      func_0x000108952edc();
      plVar4 = unaff_x19;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x60))();
    in_ZR = (int)plVar4 == 1;
    if ((bool)in_ZR) {
      uStack_50 = 0x10;
      uStack_48 = 0x108952f48;
      uStack_40 = 0x108952f4c;
      plVar4 = (long *)(unaff_x20 + 0x128);
      FUN_108952878(plVar4,auStack_d0);
      func_0x0001089544ac();
    }
  }
  func_0x000108954280(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001089544ac();
    func_0x000108954398();
    plVar3 = (long *)*param_3;
    plVar2 = plVar3 + 5;
    func_0x00010bd438f8(plVar2,plVar4 + 1);
    iVar1 = (int)plVar2;
    if (iVar1 != 0) {
      if (*(int *)((long)plVar4 + 0x24) == 0) {
        func_0x0001089544a0(*(undefined8 *)(*plVar3 + 0x60));
        (*extraout_x8_00)();
        if (iVar1 == 0) {
          return 1;
        }
      }
      func_0x000108952ef8(plVar3 + 0x17,plVar4);
    }
    return 1;
  }
  return 1;
}



/* Entry: 1089527b4; end: 10895280b;  */

undefined8 FUN_1089527b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  code *extraout_x8;
  long *plVar3;
  
  plVar3 = (long *)*param_3;
  plVar2 = plVar3 + 5;
  func_0x00010bd438f8(plVar2,param_1 + 8);
  iVar1 = (int)plVar2;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      func_0x0001089544a0(*(undefined8 *)(*plVar3 + 0x60));
      (*extraout_x8)();
      if (iVar1 == 0) {
        return 1;
      }
    }
    func_0x000108952ef8(plVar3 + 0x17,param_1);
  }
  return 1;
}



/* Entry: 10895280c; end: 108952877;  */

undefined8 FUN_10895280c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  func_0x000108952f34(param_1,*param_3);
  iVar1 = (int)param_1;
  if (iVar1 == 0) {
    func_0x0001089544a0();
    func_0x000108952de8();
    if (iVar1 == 0) {
      func_0x0001089544a0();
      func_0x000108952ec8();
      if (iVar1 != 0) {
        func_0x0001089544a0();
        func_0x000108952edc();
      }
    }
    else {
      func_0x000108954480();
    }
  }
  else {
    func_0x000108954458();
  }
  return 1;
}



/* Entry: 108952878; end: 108952c03;  */

void FUN_108952878(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  func_0x000108954578();
  plVar8 = (long *)(param_1 + 0x28);
  puVar9 = *(undefined8 **)(param_1 + 8);
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  lVar3 = (long)puVar12 - (long)puVar9 >> 3;
  lVar4 = 0;
  if (puVar12 != puVar9) {
    lVar4 = lVar3 * 0x1a + -1;
  }
  uVar7 = *(ulong *)(param_1 + 0x20);
  if (lVar4 != *plVar8 + uVar7) goto LAB_108952b80;
  if (uVar7 < 0x1a) {
    puVar13 = unaff_x19 + 3;
    puVar10 = (undefined8 *)*puVar13;
    puVar11 = (undefined8 *)*unaff_x19;
    if ((ulong)((long)puVar10 - (long)puVar11) <= (ulong)((long)puVar12 - (long)puVar9)) {
      lVar4 = (long)puVar10 - (long)puVar11 >> 2;
      if (puVar10 == puVar11) {
        lVar4 = 1;
      }
      FUN_108952cd4(&puStack_b8,lVar4,lVar3,puVar13);
      uVar2 = 0xf70;
      __Znwm();
      puVar9 = puStack_b0;
      uStack_c0 = 0x1a;
      puVar12 = puStack_b8;
      puVar13 = puStack_a0;
      plStack_c8 = plVar8;
      if (puStack_a8 == puStack_a0) {
        uStack_d0 = uVar2;
        if (puStack_b0 < puStack_b8 || (long)puStack_b0 - (long)puStack_b8 == 0) {
          uVar7 = (long)puStack_a8 - (long)puStack_b8 >> 2;
          if ((long)puStack_a8 - (long)puStack_b8 == 0) {
            uVar7 = 1;
          }
          FUN_108952cd4(&puStack_90,uVar7,uVar7 >> 2,uStack_98);
          FUN_108952da0(&puStack_90,puStack_b0,puStack_a8);
          puVar13 = puStack_78;
          puVar10 = puStack_80;
          puVar12 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_90 = puStack_b8;
          puStack_88 = puVar9;
          func_0x000108954538();
          puStack_a8 = puVar10;
        }
        else {
          puVar9 = puStack_b0 + (((long)puStack_b0 - (long)puStack_b8 >> 3) + 1) / -2;
          lVar4 = (long)puStack_a8 - (long)puStack_b0;
          if (lVar4 != 0) {
            _memmove(puVar9,puStack_b0,lVar4);
          }
          puStack_a8 = (undefined8 *)((long)puVar9 + lVar4);
          puStack_b0 = puVar9;
        }
      }
      puVar9 = puStack_a8 + 1;
      *puStack_a8 = uVar2;
      uStack_d0 = 0;
      puVar10 = (undefined8 *)unaff_x19[2];
      while (puVar11 = puStack_b0, puVar5 = (undefined8 *)unaff_x19[1], puVar10 != puVar5) {
        puVar5 = puStack_b0;
        if (puStack_b0 == puVar12) {
          if (puVar9 < puVar13) {
            puVar11 = puVar9 + (((long)puVar13 - (long)puVar9 >> 3) + 1) / 2;
            puVar5 = (undefined8 *)((long)puVar11 - ((long)puVar9 - (long)puVar12));
            lVar4 = (long)puVar9 - (long)puVar12;
            puVar9 = puVar11;
            puVar11 = puVar5;
            if (lVar4 != 0) {
              _memmove(puVar5,puStack_b0,lVar4);
            }
          }
          else {
            lVar4 = (long)puVar13 - (long)puVar12 >> 2;
            if ((long)puVar13 - (long)puVar12 == 0) {
              lVar4 = 1;
            }
            FUN_108952cd4(&puStack_90,lVar4,lVar4 + 3U >> 2,uStack_98);
            FUN_108952da0(&puStack_90,puVar12,puVar9);
            puVar13 = puStack_78;
            puVar9 = puStack_80;
            puVar5 = puStack_88;
            puVar1 = puStack_90;
            puStack_b0 = puStack_88;
            puStack_88 = puVar11;
            puStack_90 = puVar12;
            func_0x000108954538();
            puVar12 = puVar1;
            puVar11 = puStack_b0;
          }
        }
        puStack_b0 = puVar11;
        puVar10 = puVar10 + -1;
        puVar5[-1] = *puVar10;
        puStack_b0 = puStack_b0 + -1;
      }
      puStack_b8 = (undefined8 *)*unaff_x19;
      *unaff_x19 = puVar12;
      unaff_x19[1] = puStack_b0;
      puStack_a0 = (undefined8 *)unaff_x19[3];
      puStack_a8 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = puVar9;
      unaff_x19[3] = puVar13;
      puStack_b0 = puVar5;
      func_0x000108952d34(&uStack_d0);
      func_0x000108952d60(&puStack_b8);
      goto LAB_108952b80;
    }
    uVar2 = 0xf70;
    __Znwm();
    if (puVar10 != puVar12) {
      *puVar12 = uVar2;
      unaff_x19[2] = unaff_x19[2] + 8;
      goto LAB_108952b80;
    }
    if (puVar9 == puVar11) {
      lVar4 = (long)puVar10 - (long)puVar9 >> 2;
      if (puVar12 == puVar9) {
        lVar4 = 1;
      }
      FUN_108952cd4(&puStack_90,lVar4,lVar4 + 3U >> 2,puVar13);
      FUN_108952da0(&puStack_90,unaff_x19[1],unaff_x19[2]);
      puVar12 = (undefined8 *)unaff_x19[1];
      puVar9 = (undefined8 *)*unaff_x19;
      puVar10 = (undefined8 *)unaff_x19[3];
      puVar13 = (undefined8 *)unaff_x19[2];
      unaff_x19[1] = puStack_88;
      *unaff_x19 = puStack_90;
      unaff_x19[3] = puStack_78;
      unaff_x19[2] = puStack_80;
      puStack_90 = puVar9;
      puStack_88 = puVar12;
      puStack_80 = puVar13;
      puStack_78 = puVar10;
      func_0x000108952d60(&puStack_90);
      puVar9 = (undefined8 *)unaff_x19[1];
    }
    puVar9[-1] = uVar2;
    lVar4 = unaff_x19[1];
    unaff_x19[1] = lVar4 + -8;
    unaff_x19[1] = lVar4;
  }
  else {
    unaff_x19[4] = uVar7 - 0x1a;
    unaff_x19[1] = puVar9 + 1;
  }
  FUN_108952c04();
LAB_108952b80:
  puVar9 = unaff_x19;
  FUN_108951b18();
  *(undefined4 *)(puVar9 + 0x10) = *(undefined4 *)(unaff_x20 + 0x80);
  puVar9[0x11] = *(undefined8 *)(unaff_x20 + 0x88);
  pcVar6 = *(code **)(unaff_x20 + 0x90);
  puVar9[0x12] = pcVar6;
  (*pcVar6)();
  unaff_x19[5] = unaff_x19[5] + 1;
  return;
}



/* Entry: 108952c04; end: 108952cd3;  */

void FUN_108952c04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  func_0x000108954578();
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == *(undefined8 **)(param_1 + 0x18)) {
    uVar6 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      uVar4 = (long)((long)puVar5 - uVar6) >> 2;
      if ((long)puVar5 - uVar6 == 0) {
        uVar4 = 1;
      }
      FUN_108952cd4(&uStack_70,uVar4,uVar4 >> 2);
      FUN_108952da0(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar6 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar7 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar6;
      uStack_68 = uVar4;
      uStack_60 = uVar7;
      uStack_58 = uVar8;
      func_0x000108952d60(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar6) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
      unaff_x19[2] = (ulong)puVar5;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = unaff_x19[2] + 8;
  return;
}



/* Entry: 108952cd4; end: 108952d33;  */

long * FUN_108952cd4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108954578();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 8;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 8;
  return unaff_x19;
}



/* Entry: 108952d34; end: 108952d9f;  */

long * FUN_108952d34(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108952da0; end: 108952dff;  */

void FUN_108952da0(long param_1,undefined8 *param_2,long param_3)

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



/* Entry: 108952e00; end: 108952eb7;  */

void FUN_108952e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  
  func_0x00010895432c(param_1,param_1,param_2);
  (**(code **)*param_4)();
  uVar1 = (int)param_4 == 1;
  if ((bool)uVar1) {
    func_0x000108954520();
  }
  else {
    if ((int)param_4 != 0) goto LAB_108952e88;
    func_0x000108954520();
  }
  func_0x0001089544ac();
LAB_108952e88:
  func_0x000108954280(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001089544ac();
  func_0x000108954398();
  return;
}



/* Entry: 108952eb8; end: 108952f57;  */

void FUN_108952eb8(void)

{
  return;
}



/* Entry: 108952f58; end: 108952fc3;  */

undefined8 FUN_108952f58(void)

{
  code *extraout_x8;
  long *unaff_x21;
  
  func_0x000108954584();
  func_0x000108954140();
  func_0x00010895423c();
  func_0x0001089543ec();
  (**(code **)**(undefined8 **)(*unaff_x21 + 0x80))();
  func_0x0001089543f8(*(undefined8 *)(*unaff_x21 + 0x58));
  (*extraout_x8)();
  func_0x000108954494();
  func_0x000108954108();
  return 1;
}



/* Entry: 108952fc4; end: 108952fdb;  */

undefined8 FUN_108952fc4(void)

{
  return 1;
}



/* Entry: 108952fdc; end: 108952ff7;  */

void FUN_108952fdc(void)

{
  func_0x000108954188();
  func_0x000108954270();
  return;
}



/* Entry: 108952ff8; end: 10895300f;  */

undefined8 FUN_108952ff8(void)

{
  func_0x000108954230();
  return 1;
}



/* Entry: 108953010; end: 108953013;  */

undefined8 FUN_108953010(void)

{
  return 0;
}



/* Entry: 108953014; end: 10895302b;  */

undefined8 FUN_108953014(void)

{
  func_0x000108954450();
  return 1;
}



/* Entry: 10895302c; end: 108953037;  */

undefined8 FUN_10895302c(void)

{
  return 1;
}



/* Entry: 108953038; end: 10895307b;  */

undefined8 FUN_108953038(undefined8 param_1,long param_2,long *param_3)

{
  ulong extraout_x10;
  
  *(int *)(*param_3 + 0x90) = (int)*(undefined8 *)(param_2 + 0xf8);
  func_0x0001089542fc();
  if ((extraout_x10 & 1) == 0) {
    func_0x0001089545c8();
  }
  FUN_108951bb4();
  return 1;
}



/* Entry: 10895307c; end: 10895309b;  */

undefined8 FUN_10895307c(void)

{
  func_0x000108954318();
  func_0x0001089543e4();
  return 1;
}



/* Entry: 10895309c; end: 1089530a3;  */

undefined8 FUN_10895309c(void)

{
  return 1;
}



/* Entry: 1089530a4; end: 1089530d3;  */

undefined8 FUN_1089530a4(void)

{
  func_0x0001089541f8();
  func_0x00010895423c();
  func_0x00010895420c();
  return 1;
}



/* Entry: 1089530d4; end: 1089530eb;  */

undefined8 FUN_1089530d4(void)

{
  return 1;
}



/* Entry: 1089530ec; end: 108953107;  */

void FUN_1089530ec(void)

{
  func_0x000108954188();
  func_0x000108954270();
  return;
}



/* Entry: 108953108; end: 10895311f;  */

undefined8 FUN_108953108(void)

{
  func_0x000108954230();
  return 1;
}



/* Entry: 108953120; end: 108953127;  */

undefined8 FUN_108953120(void)

{
  return 1;
}



/* Entry: 108953128; end: 1089531ff;  */

undefined8 FUN_108953128(void)

{
  func_0x0001089540b4();
  func_0x00010895420c();
  return 1;
}



/* Entry: 108953200; end: 108953203;  */

undefined8 FUN_108953200(void)

{
  return 0;
}



/* Entry: 108953204; end: 10895321f;  */

void FUN_108953204(void)

{
  func_0x000108954188();
  func_0x000108954270();
  return;
}



/* Entry: 108953220; end: 108953237;  */

undefined8 FUN_108953220(void)

{
  func_0x000108954230();
  return 1;
}



/* Entry: 108953238; end: 108953247;  */

undefined8 FUN_108953238(void)

{
  return 1;
}



/* Entry: 108953248; end: 108953317;  */

void FUN_108953248(void)

{
  undefined8 *unaff_x20;
  
  func_0x0001089541f8();
  func_0x00010895423c();
  func_0x0001089543ec();
  func_0x0001089541b4(*unaff_x20);
  return;
}



/* Entry: 108953318; end: 10895331b;  */

undefined8 FUN_108953318(void)

{
  return 0;
}



/* Entry: 10895331c; end: 108953337;  */

void FUN_10895331c(void)

{
  func_0x000108954188();
  func_0x000108954270();
  return;
}



/* Entry: 108953338; end: 10895334f;  */

undefined8 FUN_108953338(void)

{
  func_0x000108954230();
  return 1;
}


