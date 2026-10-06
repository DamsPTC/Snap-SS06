/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086fffdc; end: 108700003;  */

long FUN_1086fffdc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108700004; end: 10870000f;  */

void FUN_108700004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67950;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108700010; end: 108700023;  */

void FUN_108700010(void)

{
  FUN_108700004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108700024; end: 10870002f;  */

void FUN_108700024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010087172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 108700030; end: 108700213;  */

void FUN_108700030(long param_1,undefined8 param_2,byte param_3)

{
  code *extraout_x8;
  code *extraout_x9;
  long *plVar1;
  undefined1 auStack_280 [208];
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
  char cStack_148;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [4];
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  byte bStack_d8;
  byte bStack_d0;
  long alStack_40 [2];
  
  func_0x000107c295ac(alStack_40,param_1 + 8);
  if ((alStack_40[0] != 0) && ((*(byte *)(alStack_40[0] + 0xb8) & 1) == 0)) {
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    func_0x000107c29530(auStack_108,&uStack_120);
    func_0x000107c27a04(&uStack_120);
    uStack_104 = 1;
    uStack_100 = 1;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010086ca80(auStack_f8,param_1 + 0x18);
    }
    func_0x00010086d0a8(*(undefined8 *)(alStack_40[0] + 0x160));
    (*extraout_x9)(&uStack_150);
    if (cStack_148 == '\x01') {
      bStack_d8 = param_3 ^ 1;
      uStack_e0 = uStack_150;
      if ((bStack_d0 & 1) == 0) {
        bStack_d0 = 1;
      }
    }
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    plVar1 = *(long **)(*(long *)(alStack_40[0] + 0xb0) + 0x180);
    func_0x000107c29534(alStack_40[0],param_2,&uStack_168);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    func_0x000107c2955c(auStack_280,auStack_108);
    func_0x000107c32cec(*(undefined8 *)(*plVar1 + 0x10));
    (*extraout_x8)();
    func_0x000107c27b38(auStack_280);
    func_0x000107c28c5c(&uStack_1b0);
    func_0x000107c27b3c(&uStack_198);
    func_0x000107c28c60(&uStack_180);
    func_0x000107c27b40(&uStack_168);
    func_0x000108702514(&uStack_150);
    func_0x000107c27b28(auStack_108);
  }
  func_0x000107c295a8(alStack_40);
  return;
}



/* Entry: 108700214; end: 10870028f;  */

void FUN_108700214(void)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  long lStack_40;
  
  func_0x000108702218();
  if ((lStack_40 != 0) && ((*(byte *)(lStack_40 + 0xb8) & 1) == 0)) {
    FUN_1086fba4c(auStack_70,1);
    func_0x000107c28d24(auStack_68,unaff_x20 + 0x18);
    func_0x00010870215c(*(undefined8 *)(lStack_40 + 0xb0));
    func_0x0001087024b8();
    func_0x0001087021bc();
  }
  func_0x000108702210();
  return;
}



/* Entry: 108700290; end: 1087002c7;  */

undefined8 * FUN_108700290(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a679a0;
  func_0x000107c279dc(param_1 + 3);
  func_0x00010087176c();
  return param_1;
}



/* Entry: 1087002c8; end: 1087002db;  */

void FUN_1087002c8(void)

{
  FUN_108700290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087002dc; end: 10870032b;  */

void FUN_1087002dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087002ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 8))(*(long **)(param_1 + 0x10),0xb);
  return;
}



/* Entry: 10870032c; end: 10870033f;  */

void FUN_10870032c(void)

{
  FUN_10870044c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108700340; end: 10870034b;  */

void FUN_108700340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010087172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10870034c; end: 1087003e3;  */

void FUN_10870034c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  long alStack_40 [2];
  
  func_0x000107c295ac(alStack_40,param_1 + 8);
  if ((alStack_40[0] != 0) && ((*(byte *)(alStack_40[0] + 0xb8) & 1) == 0)) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x0001087021e8(*(undefined8 *)(alStack_40[0] + 0x160));
      (*extraout_x8)();
    }
    (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),param_2,param_3)
    ;
  }
  func_0x000107c295a8(alStack_40);
  return;
}



/* Entry: 1087003e4; end: 1087003f7;  */

void FUN_1087003e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087003f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 1087003f8; end: 10870040b;  */

void FUN_1087003f8(void)

{
  FUN_10870040c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10870040c; end: 10870044b;  */

undefined8 * FUN_10870040c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67a50;
  func_0x000107c2814c(param_1 + 6);
  func_0x0001086ff014(param_1 + 3);
  func_0x00010087176c();
  return param_1;
}



/* Entry: 10870044c; end: 108700457;  */

void FUN_10870044c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a67a00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108700458; end: 1087004a7;  */

void FUN_108700458(long param_1)

{
  func_0x000107c32c2c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1087004a8; end: 1087004bb;  */

void FUN_1087004a8(void)

{
  func_0x00010870047c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087004bc; end: 1087004f3;  */

undefined8 FUN_1087004bc(undefined8 param_1)

{
  func_0x000107c32c64();
  FUN_108700c08();
  return param_1;
}



/* Entry: 1087004f4; end: 108700517;  */

void FUN_1087004f4(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  
  func_0x000107c32c30(param_3,param_2 + 8);
  func_0x000107c32ca4(&PTR_SUB_110a67a98);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  func_0x000107c279d4(unaff_x19 + 0x30,unaff_x20 + 0x28);
  *(undefined1 *)(unaff_x19 + 0x50) = *(undefined1 *)(unaff_x20 + 0x48);
  return;
}



/* Entry: 108700518; end: 108700bc3;  */

void FUN_108700518(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 ****ppppuVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 ****ppppuVar15;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  char cStack_1a0;
  undefined8 **ppuStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  uint uStack_178;
  undefined1 auStack_170 [24];
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint uStack_128;
  char cStack_124;
  char cStack_120;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_98;
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  undefined8 ***pppuStack_20;
  undefined8 ***pppuStack_18;
  
  func_0x000107c32c94();
  uStack_1e0 = *param_2;
  *param_2 = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  func_0x000107c295ac(alStack_30,param_1 + 8);
  if (alStack_30[0] != 0) {
    uStack_60 = 0;
    uStack_68 = 0;
    ppuStack_70 = &PTR_FUN_110a8b4a8;
    puStack_58 = &DAT_11383d918;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c29ee4(auStack_f0,lVar11 + 0x40);
    uStack_60 = uStack_60 | 1;
    if (uStack_50 == 0) {
      uVar9 = uStack_68;
      if ((uStack_68 & 1) != 0) {
        func_0x000108702568();
      }
      func_0x000107c287e0();
      uStack_50 = uVar9;
    }
    func_0x000107c287d0();
    func_0x000107c2a2e0(auStack_f0);
    uVar7 = *(int *)(lVar11 + 0x7c) - 1;
    if (uVar7 < 3) {
      uVar10 = *(undefined4 *)(&UNK_10df49b4c + (ulong)uVar7 * 4);
    }
    else {
      uVar10 = 0;
    }
    uStack_38 = CONCAT44(uVar10,(undefined4)uStack_38);
    auStack_90[0] = 0;
    uStack_78 = 0;
    puVar1 = (undefined1 *)(param_1 + 0x30);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      FUN_10885edd8(auStack_f0,*(undefined8 *)(*(long *)(lVar11 + 0xb0) + 0x30),puVar1);
      FUN_108663a10(&uStack_150,auStack_f0);
      FUN_108656820(auStack_f0);
      if ((cStack_120 == '\x01') && (cStack_124 != '\x01' || 1 < uStack_128)) {
        FUN_108690b88(auStack_90,puVar1);
      }
      FUN_1086569a0(&uStack_150);
    }
    auStack_f0[0] = 0;
    bStack_98 = 0;
    func_0x000107c2953c(&uStack_150,lVar11);
    func_0x000107c295cc(auStack_f0,&uStack_150);
    func_0x000107c293b0(&uStack_150);
    auStack_180[0] = 0;
    uStack_178 = uStack_178 & 0xffffff00;
    auStack_170[0] = 0;
    uStack_158 = 0;
    if ((bStack_98 & 1) == 0) {
      ppuStack_198 = (undefined8 ***)0x0;
      lStack_190 = 0;
      uStack_188 = 0;
    }
    else {
      func_0x000107c28494(&uStack_150,uStack_e8,uStack_e0);
      uVar9 = uStack_68;
      if ((uStack_68 & 1) != 0) {
        uVar9 = *(ulong *)(uStack_68 & 0xfffffffffffffffe);
      }
      func_0x000107c30250(&puStack_58,uVar9);
      func_0x000107c27b9c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
      uStack_148 = uStack_c8;
      uStack_150 = uStack_d0;
      func_0x000107c32cc8(auStack_f0);
      func_0x000107c295c8(auStack_180,&uStack_150);
      func_0x000107c32cc4();
      ppuStack_198 = (undefined8 ***)0x0;
      lStack_190 = 0;
      uStack_188 = 0;
      if ((bStack_98 == 1) && ((uStack_178 & 1) != 0)) {
        pppuStack_1d0 = (undefined8 ***)((ulong)pppuStack_1d0 & 0xffffffffffffff00);
        uVar10 = *(undefined4 *)(lVar11 + 0x7c);
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        FUN_108700c80(&uStack_150,auStack_180);
        func_0x000107c294c0(&ppuStack_1b8,uVar10,uVar14,auStack_90,&uStack_150,
                            *(undefined4 *)(param_1 + 0x28),*(long *)(lVar11 + 0xb0) + 0x30,
                            *(long *)(lVar11 + 0xb0) + 0x50);
        pppuStack_20 = &ppuStack_198;
        pppuStack_18 = &pppuStack_1d0;
        func_0x000107c29504(&pppuStack_20,&ppuStack_1b8);
        func_0x000107c29108(&ppuStack_1b8);
        func_0x000107c293f8(&uStack_150);
      }
    }
    uStack_38 = CONCAT44(uStack_38._4_4_,
                         *(int *)(param_1 + 0x28) +
                         (int)((lStack_190 - (long)ppuStack_198) / -0x3d0));
    func_0x000107c279d4(&ppuStack_1b8,auStack_170);
    puVar3 = auStack_170;
    if (cStack_1a0 == '\0') {
      puVar3 = puVar1;
    }
    func_0x000107c279d4(&uStack_150,puVar3);
    func_0x000108702530();
    lVar13 = *(long *)(lVar11 + 0xb0);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x28);
    uVar4 = *(undefined4 *)(lVar11 + 0x7c);
    ppppuVar8 = (undefined8 ****)0x160;
    __Znwm();
    ppppuVar15 = ppppuVar8 + 1;
    *ppppuVar15 = (undefined8 ***)0x0;
    ppppuVar8[2] = (undefined8 ***)0x0;
    *ppppuVar8 = (undefined8 ***)&PTR_FUN_110a67b18;
    ppppuVar2 = ppppuVar8 + 3;
    FUN_108724640(ppppuVar2,param_3,lVar13 + 0xe0,lVar13 + 0x40,uVar14,auStack_90,uVar10,
                  lVar13 + 0xc0,lVar13 + 0x30,lVar13 + 0x50,&ppuStack_198,lVar13 + 0x1c0,uVar4);
    pppuStack_1d0 = ppppuVar2;
    pppuStack_1c8 = ppppuVar8;
    if ((ppppuVar8[5] == (undefined8 ***)0x0) ||
       (ppppuVar8[5][1] == (undefined8 **)0xffffffffffffffff)) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
        if (bVar6) {
          *ppppuVar15 = (undefined8 ***)((long)*ppppuVar15 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppuStack_20 = ppppuVar2;
        pppuStack_18 = ppppuVar8;
      } while (cVar5 != '\0');
      do {
        func_0x000107c32c28();
      } while (extraout_w11 != 0);
      ppuStack_1b8 = ppppuVar8[4];
      ppppuVar8[4] = ppppuVar2;
      ppppuVar8[5] = ppppuVar8;
      uStack_1b0 = extraout_x8;
      FUN_108700ccc(&ppuStack_1b8);
      func_0x000108700cf0(&pppuStack_20);
    }
    if ((int)((lStack_190 - (long)ppuStack_198) / 0x3d0) < *(int *)(param_1 + 0x28)) {
      plVar12 = *(long **)(*(long *)(lVar11 + 0xb0) + 0x70);
      func_0x000107c279d4(&ppuStack_1b8,&uStack_150);
      uStack_1d8 = uStack_1e0;
      uStack_1e0 = 0;
      pppuStack_18 = pppuStack_1c8;
      pppuStack_20 = pppuStack_1d0;
      if ((undefined8 ****)pppuStack_1c8 != (undefined8 ****)0x0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*plVar12 + 0x28))(plVar12,&ppuStack_70);
      func_0x0001086ff014(&pppuStack_20);
      func_0x000107c29578(&uStack_1d8);
      func_0x000108702530();
    }
    else {
      ppuStack_1b8 = (undefined8 ***)0x0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      (*(code *)**ppppuVar2)(ppppuVar2,&ppuStack_1b8,0);
      func_0x000107c27b40(&ppuStack_1b8);
    }
    FUN_108724c40(pppuStack_1d0,*(undefined1 *)(param_1 + 0x50));
    func_0x000108700cf0(&pppuStack_1d0);
    func_0x000107c279dc(&uStack_150);
    func_0x000107c29108(&ppuStack_198);
    func_0x000107c279dc(auStack_170);
    func_0x000107c293b0(auStack_f0);
    func_0x000107c279dc(auStack_90);
    FUN_1088eb028(&ppuStack_70);
  }
  func_0x000107c32c74();
  func_0x000107c29578(&uStack_1e0);
  return;
}



/* Entry: 108700bc4; end: 108700bfb;  */

long FUN_108700bc4(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a67b58);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108700bfc; end: 108700c07;  */

undefined ** FUN_108700bfc(void)

{
  return &PTR_DAT_110a67b58;
}



/* Entry: 108700c08; end: 108700c7f;  */

void FUN_108700c08(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  
  func_0x000107c32c30();
  func_0x000107c32ca4(&PTR_SUB_110a67a98);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  func_0x000107c279d4(unaff_x19 + 0x30,unaff_x20 + 0x28);
  *(undefined1 *)(unaff_x19 + 0x50) = *(undefined1 *)(unaff_x20 + 0x48);
  return;
}



/* Entry: 108700c80; end: 108700c9b;  */

void FUN_108700c80(long param_1)

{
  func_0x000107c295d0();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 108700c9c; end: 108700c9f;  */

void FUN_108700c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67b18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108700ca0; end: 108700cb3;  */

void FUN_108700ca0(void)

{
  func_0x000108700cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108700cb4; end: 108700ccb;  */

void FUN_108700cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010087172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 108700ccc; end: 108700d4f;  */

void FUN_108700ccc(long param_1)

{
  func_0x000107c32c2c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108700d50; end: 108700dc3;  */

void FUN_108700d50(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long alStack_30 [2];
  
  plVar1 = *(long **)(param_1 + 0x10);
  lVar2 = *plVar1;
  func_0x000107c295ac(alStack_30,plVar1 + 1);
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0xb8) & 1) == 0)) {
    lStack_48 = plVar1[6];
    lStack_50 = plVar1[5];
    lStack_40 = plVar1[7];
    func_0x000107c29524(alStack_30[0],plVar1[3],*(undefined4 *)(lVar2 + 0x90),plVar1 + 4,&lStack_50,
                        plVar1 + 8);
  }
  func_0x000108702488();
  return;
}



/* Entry: 108700dc4; end: 108700de3;  */

void FUN_108700dc4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001086fbb10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108700de4; end: 108700deb;  */

void FUN_108700de4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108700dec; end: 108700e0b;  */

void FUN_108700dec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086fbebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108700e0c; end: 108700e4f;  */

void FUN_108700e0c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108700e50; end: 108700e6f;  */

void FUN_108700e50(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086fc448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108700e70; end: 108700eb3;  */

void FUN_108700e70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108700eb4; end: 108700ed3;  */

void FUN_108700eb4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086fc908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108700ed4; end: 108700fa3;  */

void FUN_108700ed4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108700fa4; end: 108700fc3;  */

void FUN_108700fa4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086fd164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108700fc4; end: 108701007;  */

void FUN_108700fc4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108701008; end: 10870101b;  */

void FUN_108701008(void)

{
  FUN_10870101c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10870101c; end: 10870102b;  */

void FUN_10870101c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a67e40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10870102c; end: 1087012bf;  */

code ** FUN_10870102c(code **param_1,long param_2)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  code *pcVar2;
  code **ppcVar3;
  code *pcVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  code *unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  code *pcStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b0 [32];
  code *pcStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppcVar3 = &pcStack_e0;
  func_0x000107c32bb4();
  lVar5 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar5 + 0x10);
  uStack_58 = extraout_x8;
  if ((*(byte *)(lVar6 + 0xb8) & 1) == 0) {
    unaff_x19 = *(code **)(*(long *)(lVar6 + 0xb0) + 0x60);
    FUN_108705410(auStack_b0,unaff_x19,lVar5 + 0x18,*(undefined4 *)(lVar6 + 0x7c));
    unaff_x20 = **(long **)(lVar6 + 0xb0);
    func_0x000108702250();
    ppuStack_c0 = *(undefined ***)(lVar5 + 0x38);
    pcStack_c8 = *(code **)(lVar5 + 0x30);
    if (*(long *)(lVar5 + 0x38) != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    lVar7 = *(long *)(unaff_x20 + 0x10);
    pcVar2 = unaff_x19;
    func_0x000108702074();
    lVar8 = *(long *)(lVar7 + 0x70);
    pcStack_90 = FUN_1087012e0;
    ppuStack_88 = &PTR_FUN_110a67c70;
    func_0x000107c32c38();
    ppuVar9 = ppuStack_c0;
    pcVar4 = pcStack_c8;
    *(undefined ***)(pcVar2 + 8) = ppuStack_d8;
    *(code **)pcVar2 = pcStack_e0;
    *(undefined8 *)(pcVar2 + 0x10) = uStack_d0;
    ppuStack_d8 = (undefined **)0x0;
    uStack_d0 = 0;
    pcStack_e0 = (code *)0x0;
    *(undefined ***)(pcVar2 + 0x20) = ppuStack_c0;
    *(code **)(pcVar2 + 0x18) = pcStack_c8;
    pcStack_c8 = (code *)0x0;
    ppuStack_c0 = (undefined **)0x0;
    pcStack_80 = pcVar2;
    pcStack_60 = unaff_x19;
    func_0x0001087022d4(lVar7 + 0x48);
    func_0x000108701ea8(ppuStack_88);
    func_0x000108701ff8();
    if (lVar8 == 0) {
      func_0x000108701f10();
      pcStack_90 = pcVar4;
      ppuStack_88 = ppuVar9;
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c32be8();
      func_0x0001087022dc();
      func_0x0001087020c8();
    }
    FUN_1087012c0(&pcStack_e0);
    func_0x000108702324();
    param_1 = ppcVar3;
  }
  while( true ) {
    func_0x000107c32ba0(uStack_58);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x000107c32c30();
    func_0x0001087020c8();
    FUN_1087012c0(&pcStack_e0);
    func_0x000108702324();
    in_ZR = (int)unaff_x20 == 1;
    if (!(bool)in_ZR) break;
    pcVar4 = unaff_x19;
    ___cxa_begin_catch();
    func_0x000108848514();
    uVar1 = SUB84(pcVar4,0);
    unaff_x20 = **(long **)(lVar6 + 0xb0);
    ppuStack_d8 = *(undefined ***)(lVar5 + 0x38);
    pcStack_e0 = *(code **)(lVar5 + 0x30);
    if (*(long *)(lVar5 + 0x38) != 0) {
      do {
        func_0x000107c32bc8();
        uVar1 = SUB84(pcVar4,0);
      } while (extraout_w10_01 != 0);
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar1);
    func_0x000107c28150();
    func_0x000108702594();
    func_0x00010870234c();
    ppuVar9 = ppuStack_d8;
    pcVar4 = pcStack_e0;
    lVar6 = *(long *)(lVar5 + 0x70);
    pcStack_90 = (code *)0x108701308;
    ppuStack_88 = &PTR_DAT_110a67c88;
    ppuStack_78 = ppuStack_d8;
    pcStack_80 = pcStack_e0;
    pcStack_e0 = (code *)0x0;
    ppuStack_d8 = (undefined **)0x0;
    uStack_70 = (undefined4)uStack_d0;
    pcStack_60 = unaff_x19;
    func_0x0001087022d4(lVar5 + 0x48);
    func_0x000108701e9c(ppuStack_88);
    func_0x0001087020d0();
    if (lVar6 == 0) {
      func_0x000108701f10();
      pcStack_90 = pcVar4;
      ppuStack_88 = ppuVar9;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c32be8();
      func_0x0001087022dc();
      func_0x0001087020c8();
    }
    param_1 = &pcStack_e0;
    func_0x000108625d80(&pcStack_e0);
    ___cxa_end_catch();
  }
  func_0x000108701fd0();
  func_0x000104bd46a0(unaff_x19);
  pcStack_e8 = FUN_1087012c0;
  lStack_100 = unaff_x20;
  pcStack_f8 = unaff_x19;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107c32c54();
  func_0x000108625d80();
  pcStack_108 = unaff_x19;
  func_0x0001006334d4(&pcStack_108);
  return (code **)unaff_x19;
}



/* Entry: 1087012c0; end: 1087012df;  */

void FUN_1087012c0(void)

{
  func_0x000107c32c54();
  func_0x000108625d80();
  func_0x0001006334d4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1087012e0; end: 1087012e3;  */

void FUN_1087012e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108701e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x18) + 0x10))();
  return;
}



/* Entry: 1087012e4; end: 108701303;  */

void FUN_1087012e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087012c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108701304; end: 10870132f;  */

void FUN_108701304(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108701330; end: 10870134f;  */

void FUN_108701330(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086fd310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108701350; end: 108701353;  */

void FUN_108701350(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108701354; end: 1087013a3;  */

void FUN_108701354(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a67ca0;
  uVar1 = 0x40;
  __Znwm();
  FUN_1087013a4();
  param_1[1] = uVar1;
  return;
}



/* Entry: 1087013a4; end: 10870141b;  */

void FUN_1087013a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c32c30();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c279ac(unaff_x19 + 0x18,unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10870141c; end: 10870161b;  */

void FUN_10870141c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010870142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),7);
  return;
}



/* Entry: 10870161c; end: 10870163b;  */

void FUN_10870161c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086fe2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10870163c; end: 108701747;  */

void FUN_10870163c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108701748; end: 108701793;  */

void FUN_108701748(undefined8 param_1)

{
  func_0x00010870230c();
  func_0x000107c32bfc();
  func_0x000107c32bf4();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108701794; end: 1087017b7;  */

void FUN_108701794(void)

{
  func_0x000108702068();
  func_0x000107c32bf4();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087017b8; end: 108701b43;  */

void FUN_1087017b8(ulong param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  ulong *puVar5;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x20;
  long *plVar6;
  long *plVar7;
  long unaff_x21;
  ulong *unaff_x23;
  ulong in_register_00005008;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined4 uStack_60;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_2;
  func_0x000107c32bb4();
  uStack_48 = extraout_x8;
  func_0x000107c28834(lVar3 + 0x408);
  func_0x000107c27f9c(param_2 + 0x408);
  func_0x000108702464();
  func_0x00010870245c();
  func_0x000108702580();
  func_0x000107c295c4(&uStack_80);
  uStack_a0 = 0;
  if (uStack_80 != 0) {
    uStack_a0 = uStack_80 + 8;
  }
  uStack_98 = uStack_78;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar1 = *(ulong **)(unaff_x20 + 0x20);
  for (puVar5 = *(ulong **)(unaff_x20 + 0x18); uVar2 = 1, puVar5 != puVar1; puVar5 = puVar5 + 2) {
    if (*puVar5 == uStack_a0) goto LAB_10870183c;
  }
LAB_108701868:
  plVar6 = *(long **)(param_2 + 0x4a8);
  func_0x000107c29574(&uStack_a0);
  func_0x000108702210();
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  uStack_68 = uStack_68 & 0xffffffffffffff00;
  func_0x0001087022c4(*(undefined8 *)(*plVar6 + 0x28));
  plVar7 = *(long **)(param_2 + 0x4a8);
  func_0x000108702314();
  plVar6 = plVar7;
  func_0x000108702498(*(undefined8 *)(*plVar7 + 0xd8));
  func_0x00010870214c(*(undefined8 *)(unaff_x21 + 0xb0));
  uStack_a0 = param_1;
  uStack_98 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x0001087021f4();
  func_0x000108702000();
  func_0x0001087023c0();
  uStack_80 = extraout_x8_01;
  uStack_78 = extraout_x9;
  func_0x00010870222c();
  uStack_70 = param_1;
  uStack_68 = in_register_00005008;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  plStack_50 = plVar7;
  func_0x0001087024ac();
  func_0x000108701ed4(uStack_78);
  func_0x000108701fc8();
  if (unaff_x23 == (ulong *)0x0) {
    func_0x000108701f58();
    uStack_80 = param_1;
    uStack_78 = in_register_00005008;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    param_3 = &uStack_80;
    (*extraout_x8_04)();
    func_0x00010870231c();
  }
  func_0x00010870208c();
  func_0x0001087024d8();
  func_0x000107c32c0c();
  while( true ) {
    func_0x000107c32bf0();
    func_0x0001087020b4();
    func_0x000107c32ba0(uStack_48);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    iVar4 = (int)param_3;
    if (iVar4 == 0) break;
    plVar7 = plVar6;
    func_0x00010870231c();
    func_0x00010870208c();
    func_0x0001087024d8();
    uVar2 = iVar4 == 2;
    if ((bool)uVar2) {
      func_0x00010870202c();
      func_0x000108848514();
      func_0x00010870214c(*(undefined8 *)(*(long *)(param_2 + 0x4a8) + 0xb0));
      uStack_a0 = param_1;
      uStack_98 = in_register_00005008;
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_02 != 0);
      }
      uStack_90 = SUB84(plVar7,0);
      func_0x000107c28150();
      func_0x0001087021f4();
      func_0x000108702000();
      func_0x0001087023a8();
      uStack_80 = extraout_x8_06;
      uStack_78 = extraout_x9_00;
      func_0x00010870222c();
      uStack_70 = param_1;
      uStack_68 = in_register_00005008;
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_03 != 0);
      }
      uStack_60 = uStack_90;
      plStack_50 = plVar6;
      func_0x0001087024ac();
      func_0x000108701ed4(uStack_78);
      func_0x000108701fc8();
      if (unaff_x23 == (ulong *)0x0) {
        func_0x000108701f58();
        uStack_80 = param_1;
        uStack_78 = in_register_00005008;
        if (extraout_x8_08 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_04 != 0);
        }
        func_0x000107c32be8();
        param_3 = &uStack_80;
        (*extraout_x8_09)();
        func_0x00010870231c();
      }
      func_0x00010870208c();
      func_0x000107c32c0c();
      ___cxa_end_catch();
      plVar6 = plVar7;
    }
    else {
      func_0x00010870202c();
      func_0x000108702024();
      ___cxa_end_catch();
      plVar6 = plVar7;
    }
  }
  func_0x00010870201c();
  func_0x000107c27f9c(plVar6 + 0x81);
  func_0x000108702464();
  func_0x00010870245c();
  func_0x0001087024d8();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
LAB_10870183c:
  while( true ) {
    unaff_x23 = puVar5 + 2;
    uVar2 = unaff_x23 == puVar1;
    if ((bool)uVar2) break;
    uStack_a8 = puVar5[1];
    uStack_b0 = *puVar5;
    in_register_00005008 = puVar5[3];
    param_1 = *unaff_x23;
    *unaff_x23 = 0;
    puVar5[3] = 0;
    puVar5[1] = in_register_00005008;
    *puVar5 = param_1;
    func_0x000107c29574(&uStack_b0);
    puVar5 = unaff_x23;
  }
  func_0x0001087024a0();
  goto LAB_108701868;
}



/* Entry: 108701b44; end: 108701b77;  */

void FUN_108701b44(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x408);
  func_0x000108702464();
  func_0x00010870245c();
  func_0x0001087024d8();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108701b78; end: 108701bc3;  */

void FUN_108701b78(undefined8 param_1)

{
  func_0x00010870230c();
  func_0x000107c32bfc();
  func_0x000107c32bf4();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108701bc4; end: 108701be7;  */

void FUN_108701bc4(void)

{
  func_0x000108702068();
  func_0x000107c32bf4();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108701be8; end: 108701c33;  */

void FUN_108701be8(undefined8 param_1)

{
  func_0x00010870230c();
  func_0x000107c32bfc();
  func_0x000107c32bf4();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108701c34; end: 108701c57;  */

void FUN_108701c34(void)

{
  func_0x000108702068();
  func_0x000107c32bf4();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108701c58; end: 108701d63;  */

void FUN_108701c58(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1086ffdbc(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x000107c32bd0();
    } while (extraout_w10 != 0);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      func_0x000108701ec4();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087022a0();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108701fac();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108702238();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108701f38();
          if ((bool)in_ZR) {
            func_0x000108701f9c();
            func_0x000108701f00();
            func_0x000108701e68();
          }
          func_0x000108701e24();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x50);
  func_0x000108702490();
  func_0x000108702548();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
  func_0x0001087024e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108701d64; end: 108701d9b;  */

void FUN_108701d64(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000108702490();
    func_0x000108702548();
  }
  func_0x000107c32bf0();
  func_0x0001087024e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108701d9c; end: 108701de7;  */

void FUN_108701d9c(undefined8 param_1)

{
  func_0x00010870230c();
  func_0x000107c32bfc();
  func_0x000107c32bf4();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108701de8; end: 108701e0b;  */

void FUN_108701de8(void)

{
  func_0x000108702068();
  func_0x000107c32bf4();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108701e0c; end: 10870259f;  */

void FUN_108701e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108701e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1087025a0; end: 10870260f;  */

undefined8 FUN_1087025a0(int *param_1,undefined8 param_2,int param_3,long param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = param_1;
  FUN_108702680();
  if (((piVar1 == (int *)0x0) || (piVar1[10] != param_3)) || (*(long *)(piVar1 + 0xc) != param_4)) {
    FUN_108702610(param_1,param_2);
    *param_1 = param_3;
    *(long *)(param_1 + 2) = param_4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 108702610; end: 108702643;  */

long FUN_108702610(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1087028e4(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 108702644; end: 10870267f;  */

bool FUN_108702644(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108702680();
  if (lVar1 != 0) {
    func_0x000108702d50(param_1,lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 108702680; end: 10870275f;  */

long FUN_108702680(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar5 = (long *)param_1[1];
  if ((plVar5 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_1086a75b4();
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)((ulong)plVar2 & uVar6);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar3 = (long *)plVar4[1];
        if (plVar3 != plVar2) break;
        plVar3 = param_1 + 4;
        FUN_108702760(plVar3,plVar4 + 2,param_2);
        if ((int)plVar3 != 0) {
          return (long)plVar4;
        }
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar3 = (long *)((ulong)plVar3 & uVar6);
      }
      else if (plVar5 <= plVar3) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar5;
        }
        plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar5);
      }
    } while (plVar3 == plVar7);
  }
  return 0;
}



/* Entry: 108702760; end: 10870278b;  */

long FUN_108702760(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 == param_3[1] - *param_3) {
    FUN_1087027ac();
    return lVar1;
  }
  return 0;
}



/* Entry: 10870278c; end: 1087027ab;  */

void FUN_10870278c(void)

{
  FUN_1087027ac();
  return;
}



/* Entry: 1087027ac; end: 1087028e3;  */

undefined1 FUN_1087027ac(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = param_2 - param_1;
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    uVar1 = param_1;
    func_0x000107c28078(param_1,param_3);
    if ((int)uVar1 == 0) break;
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 0x18;
    lVar6 = lVar6 + -0x18;
  }
  if (lVar6 == 0x18) {
    return 0;
  }
  lVar5 = 0;
  uVar2 = param_1;
  uVar7 = param_1;
  do {
    uVar7 = uVar7 + 0x18;
    uVar3 = param_1;
    lVar8 = lVar5;
    if (uVar2 == param_2) {
      return 1;
    }
    while (lVar8 != 0) {
      uVar1 = uVar3;
      func_0x000107c28078(uVar3,uVar2);
      uVar3 = uVar3 + 0x18;
      lVar8 = lVar8 + -0x18;
      if ((uVar1 & 1) != 0) goto LAB_1087028d4;
    }
    lVar8 = 0;
    for (lVar4 = lVar6; lVar4 != 0; lVar4 = lVar4 + -0x18) {
      func_0x000108702ea0();
      lVar8 = lVar8 + (uVar1 & 0xffffffff);
    }
    if (lVar8 == 0) {
      return 0;
    }
    lVar4 = 1;
    for (uVar3 = uVar7; uVar3 != param_2; uVar3 = uVar3 + 0x18) {
      func_0x000108702ea0();
      lVar4 = lVar4 + (uVar1 & 0xffffffff);
    }
    if (lVar4 != lVar8) {
      return 0;
    }
LAB_1087028d4:
    uVar2 = uVar2 + 0x18;
    lVar5 = lVar5 + 0x18;
  } while( true );
}



/* Entry: 1087028e4; end: 108702caf;  */

undefined1  [16]
FUN_1087028e4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  undefined1 auVar15 [16];
  
  plVar7 = param_1 + 3;
  FUN_1086a75b4();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar6 = 0;
        if (plVar13 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar13);
      }
    }
    plVar12 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1087029ac;
          plVar4 = (long *)plVar12[1];
          if (plVar4 != plVar7) break;
          plVar4 = param_1 + 4;
          FUN_108702760(plVar4,plVar12 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_108702c74;
          }
        }
        if (((ulong)plVar13 & uVar14) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar14);
        }
        else if (plVar13 <= plVar4) {
          uVar6 = 0;
          if (plVar13 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plVar13;
          }
          plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar13);
        }
      } while (plVar4 == unaff_x25);
    }
  }
LAB_1087029ac:
  uVar3 = *param_4;
  plVar4 = param_1 + 2;
  plVar12 = (long *)0x38;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  func_0x000107c279ac(plVar12 + 2,uVar3);
  plVar12[5] = 0;
  plVar12[6] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_108702bf8;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar5 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar5 <= plVar13) {
    plVar5 = plVar13;
  }
  if ((long)plVar5 - 1U == 0) {
    plVar5 = (long *)0x2;
  }
  else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar5) {
LAB_108702a64:
    if ((ulong)plVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108702c9c);
      (*pcVar1)();
    }
    lVar2 = (long)plVar5 << 3;
    __Znwm(lVar2);
    FUN_108702cb0(param_1,lVar2);
    param_1[1] = (long)plVar5;
    lVar2 = *param_1;
    for (plVar13 = (long *)0x0; plVar5 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar13 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    plVar13 = plVar5;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar5 - 1;
      uVar14 = 0;
      if (plVar5 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar5;
      }
      plVar10 = plVar9;
      if (plVar5 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar5);
      }
      if (((ulong)plVar5 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar2 + (long)plVar10 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar5 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar5 <= plVar11) {
          uVar14 = 0;
          if (plVar5 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar5;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar5);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar2 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar11 * 8);
            **(long **)(lVar2 + (long)plVar11 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (plVar5 < plVar13) {
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 - 1) & 0x3fU));
    }
    if (plVar5 <= plVar8) {
      plVar5 = plVar8;
    }
    if (plVar5 < plVar13) {
      if (plVar5 != (long *)0x0) goto LAB_108702a64;
      FUN_108702cb0(param_1,0);
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x25 = plVar7;
    if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
  }
LAB_108702bf8:
  lVar2 = *param_1;
  plVar7 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x000108702eac();
  uVar3 = 1;
LAB_108702c74:
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 108702cb0; end: 108702cc7;  */

void FUN_108702cb0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108702cc8; end: 108702cef;  */

undefined8 FUN_108702cc8(undefined8 param_1)

{
  FUN_108702cf0(param_1,0);
  return param_1;
}



/* Entry: 108702cf0; end: 108702d07;  */

void FUN_108702cf0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c27a04(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108702d08; end: 108702d83;  */

void FUN_108702d08(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c27a04(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108702d84; end: 108702eb3;  */

void FUN_108702d84(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108702e38;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108702e38;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108702e38:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 108702eb4; end: 108702eeb;  */

void FUN_108702eb4(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  func_0x00010bcd3614(*(undefined8 *)(param_2 + 0x88));
  *(undefined1 *)(param_2 + 0x92) = 1;
  iVar1 = (int)param_2 + 0x140;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x100);
  }
  lVar2 = *(long *)(param_2 + 0x148);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108702eec; end: 108703473;  */

/* WARNING: Removing unreachable block (ram,0x0001087030a8) */

void FUN_108702eec(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint uVar15;
  undefined8 *puVar16;
  long extraout_x8;
  int *piVar17;
  long extraout_x8_00;
  undefined1 extraout_w9;
  long lVar18;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  code *extraout_x9_02;
  long extraout_x9_03;
  int *extraout_x9_04;
  int extraout_w10;
  long extraout_x10;
  ulong extraout_x10_00;
  undefined4 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 *puStack_68;
  
  puVar9 = (undefined8 *)0x2f8;
  __Znwm();
  *puVar9 = FUN_10870477c;
  puVar9[1] = FUN_108704bfc;
  puVar9[0x5c] = param_3;
  puVar9[0x5b] = param_2;
  plVar10 = (long *)param_4[3];
  if (plVar10 == (long *)0x0) {
    puVar9[0x4e] = 0;
  }
  else if (plVar10 == param_4) {
    puVar9[0x4e] = puVar9 + 0x4b;
    (**(code **)(*plVar10 + 0x18))();
  }
  else {
    puVar9[0x4e] = plVar10;
    param_4[3] = 0;
  }
  puVar13 = puVar9 + 0x46;
  plVar10 = puVar9 + 0x52;
  plVar1 = puVar9 + 0x55;
  func_0x000107c295fc(puVar9 + 2);
  plVar11 = puVar9 + 2;
  func_0x000107c295e8(param_1);
  *(undefined1 *)(puVar9 + 0x5d) = 0;
  *(undefined1 *)((long)puVar9 + 0x2ec) = 0;
  *(undefined4 *)(puVar9 + 0x5e) = *param_3;
  puVar9[0x4f] = 0;
  func_0x000107c28258();
  puVar9[0x50] = plVar11;
  *(undefined1 *)(puVar9 + 0x51) = 1;
  puVar9[0x40] = FUN_108703ab0;
  puVar9[0x41] = &PTR_FUN_110a68130;
  puVar9[0x42] = puVar9 + 0x5d;
  puVar9[0x43] = param_2;
  puVar9[0x44] = param_3;
  puVar9[0x45] = (long)puVar9 + 0x2f5;
  func_0x000107c32d00();
  do {
    puVar16 = (undefined8 *)puVar9[0x5c];
    if (((*(byte *)((long)puVar16 + 4) & 1) != 0) || ((*(byte *)(puVar9[0x5b] + 0x92) & 1) != 0)) {
      puVar13 = puVar9 + 0x4f;
      func_0x000107c2825c();
      puStack_68 = puVar13;
      func_0x000107c28288(puVar9 + 0x4f);
      if ((*(byte *)(puVar9[0x5b] + 0x92) & 1) == 0) {
        plVar10 = *(long **)(puVar9[0x5b] + 0x70);
        uStack_80 = 0;
        uStack_78 = 0;
        func_0x000108705158();
        uStack_88 = 0;
        uStack_70 = 0x28a;
        uVar19 = 0x5301db;
        if (*extraout_x9_04 != 0) {
          uVar19 = 0x5301dc;
        }
        puVar14 = auStack_90;
        FUN_1087034cc(puVar14,uVar19);
        (**(code **)(*plVar10 + 0x18))(plVar10,puVar14,&puStack_68);
        func_0x000107c2882c(auStack_90);
      }
      func_0x0001087051a4();
LAB_108703344:
      func_0x000108705094();
      func_0x000100871d48();
      FUN_108703900(puVar9 + 0x4b);
      func_0x000108704fec();
      return;
    }
    puVar9[0x37] = puVar9[0x5b];
    uVar20 = *puVar16;
    uVar24 = puVar16[3];
    uVar23 = puVar16[2];
    puVar9[0x39] = puVar16[1];
    puVar9[0x38] = uVar20;
    puVar9[0x3b] = uVar24;
    puVar9[0x3a] = uVar23;
    func_0x0001087051ec();
    uVar20 = *(undefined8 *)(puVar9[0x5b] + 0x110);
    func_0x0001087051e0();
    func_0x0001087051c0();
    func_0x000108705240();
    FUN_108703c54(plVar1,puVar9 + 4,uVar20);
    func_0x0001087050cc();
    plVar12 = puVar9 + 0x1e;
    func_0x000108703c2c();
    *plVar10 = *plVar1;
    do {
      func_0x000107c32d14();
    } while (extraout_w10 != 0);
    func_0x000107c32d7c(*plVar10);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar9 + 0x2f4) = 0;
      lVar21 = *plVar10;
      lVar22 = *plVar11;
      if (lVar22 == 0) {
        func_0x000107c3a5c0();
        lVar22 = *plVar12;
      }
      plVar2 = (long *)(lVar21 + 0x10);
      do {
        lVar18 = *plVar2;
        if (lVar18 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar6 = cVar5 == '\0';
          if (bVar6) {
            uVar7 = 1;
            func_0x000108705004();
            if (bVar6) {
              func_0x000108704f9c();
              uVar8 = extraout_w8;
              if ((bool)uVar7) {
                uVar8 = extraout_w9;
              }
              func_0x0001087050ec();
              *(undefined1 *)plVar12 = uVar8;
              func_0x000108704fac(0);
              *(long **)(lVar21 + 0x90) = plVar12;
            }
            func_0x000108704ff4();
            *(long *)(extraout_x8_00 + 0x20) = lVar22;
            func_0x000108704f8c(*(undefined8 *)(lVar21 + 0x90));
            *(undefined8 *)(lVar21 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar18 >> 1 & 1) == 0);
    }
    plVar12 = plVar10;
    FUN_108703474(plVar10);
    FUN_108703610(puVar13,plVar12);
    func_0x000107c27f9c(plVar10);
    func_0x000107c27f9c(plVar1);
    func_0x00010870509c();
    uVar15 = (uint)*(byte *)(puVar9[0x5b] + 0x92);
    cVar4 = SBORROW4(uVar15,1);
    cVar5 = (int)(uVar15 - 1) < 0;
    uVar7 = uVar15 == 1;
    if ((bool)uVar7) {
      func_0x0001087050dc();
LAB_108703340:
      func_0x0001087051d8();
      goto LAB_108703344;
    }
    if (*(int *)(puVar9 + 0x4a) != 0) {
      if (*(int *)(puVar9 + 0x4a) != 1) {
        func_0x00010563ab98();
        goto LAB_108703384;
      }
      FUN_108703718(puVar13);
      func_0x0001087052a0();
      FUN_1086fba4c(puVar9 + 4);
      plVar10 = *(long **)(puVar9[0x5b] + 0x40);
      FUN_108703718(puVar13);
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar9 + 4,*(undefined4 *)puVar13);
      func_0x0001087051a4();
      func_0x0001087050a4();
      goto LAB_108703340;
    }
    func_0x000108705278();
    *(long *)(extraout_x9 + 0x10) = extraout_x10 / 0x378 + *(long *)(extraout_x9 + 0x10);
    if ((!(bool)uVar7) && (func_0x000108705168(), cVar5 != cVar4)) {
      lVar21 = puVar9[0x5c];
      *(undefined8 *)(lVar21 + 0x18) = extraout_x9_00;
      FUN_1086b9f28(lVar21 + 0x20,extraout_x8 + -0x378);
    }
    plVar12 = (long *)puVar9[0x4e];
    *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(puVar9 + 0x49);
    if (plVar12 == (long *)0x0) {
      func_0x000104bfeb48();
LAB_108703384:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108703388);
      (*pcVar3)();
    }
    (**(code **)(*plVar12 + 0x30))(plVar12,puVar9[0x5c],puVar13,puVar9 + 4);
    uVar8 = SUB81(plVar12,0);
    func_0x000108705264();
    uVar19 = 3;
    if ((bool)uVar7) {
      uVar19 = 1;
    }
    *(undefined1 *)(extraout_x9_01 + 4) = uVar8;
    func_0x000107c295e4(puVar9 + 0x1e,uVar19);
    piVar17 = (int *)puVar9[0x5c];
    if (*piVar17 == 1) {
      func_0x00010870528c();
      (*extraout_x9_02)(puVar9 + 4);
      if ((*(char *)(puVar9 + 5) == '\x01') && (func_0x00010870511c(), (extraout_x10_00 & 1) == 0))
      {
        *(undefined1 *)(puVar9 + 0x25) = 1;
      }
      FUN_1086fe8dc(puVar9 + 4);
      piVar17 = (int *)puVar9[0x5c];
    }
    func_0x0001087052c8(piVar17);
    plVar12 = *(long **)(extraout_x9_03 + 0x40);
    puVar9[0x53] = 0;
    *plVar10 = 0;
    puVar9[0x55] = 0;
    puVar9[0x54] = 0;
    puVar9[0x57] = 0;
    puVar9[0x56] = 0;
    puVar9[0x59] = 0;
    puVar9[0x58] = 0;
    puVar9[0x5a] = 0;
    func_0x00010870524c();
    (**(code **)(*plVar12 + 0x10))(plVar12,puVar13,plVar10,plVar1,puVar9 + 0x58,puVar9 + 4);
    func_0x000108705114();
    func_0x00010870510c();
    func_0x000107c27b3c(plVar1);
    func_0x000107c28c60(plVar10);
    func_0x0001087050fc();
    func_0x0001087051d8();
  } while( true );
}



/* Entry: 108703474; end: 1087034cb;  */

long FUN_108703474(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087034bc);
  (*pcVar1)();
}



/* Entry: 1087034cc; end: 108703533;  */

undefined8 FUN_1087034cc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268e50);
  func_0x000107c28824(param_1,auStack_38,(&PTR_s_success_113269028)[(uint)param_2 & 0x1df]);
  func_0x00010870521c();
  return param_2;
}



/* Entry: 108703534; end: 1087035df;  */

void FUN_108703534(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  bVar2 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010086e218();
  if (param_2 == iVar1) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    iVar1 = (int)param_1 + 0x60;
    func_0x000107c295f4();
    if (0 < iVar1) {
      func_0x000107c295f4();
    }
    uStack_28 = 0;
    auStack_40[0] = 0;
    func_0x000107c295f8(param_1 + 0xa0);
    func_0x000107c279dc(auStack_40);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010086e218(*(undefined8 *)(param_1 + 0x30));
    func_0x000107c32dc0();
    func_0x000107c29fc4(uVar3);
    *(byte *)(param_1 + 0xa4) = bVar2 & 1;
  }
  return;
}



/* Entry: 1087035e0; end: 1087035eb;  */

void FUN_1087035e0(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  bVar2 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010086e218();
  if (param_2 == iVar1) {
    *(undefined1 *)(param_1 + 0x88) = 0;
    iVar1 = (int)param_1 + 0x58;
    func_0x000107c295f4();
    if (0 < iVar1) {
      func_0x000107c295f4();
    }
    uStack_28 = 0;
    auStack_40[0] = 0;
    func_0x000107c295f8(param_1 + 0x98);
    func_0x000107c279dc(auStack_40);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010086e218(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c32dc0();
    func_0x000107c29fc4(uVar3);
    *(byte *)(param_1 + 0x9c) = bVar2 & 1;
  }
  return;
}



/* Entry: 1087035ec; end: 1087035ff;  */

void FUN_1087035ec(void)

{
  FUN_108703734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108703600; end: 10870360f;  */

undefined8 * FUN_108703600(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110a67eb8;
  *param_1 = &PTR_FUN_110a67f00;
  FUN_10865a95c(param_1 + 0x1f);
  func_0x000107c279dc(param_1 + 0x17);
  func_0x000107c28a38(param_1 + 0x10);
  func_0x000107c28a3c(param_1 + 0xf);
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c28d9c(param_1 + 0xb);
  func_0x000107c28800(param_1 + 9);
  func_0x000107c27a68(param_1 + 7);
  func_0x000107c29344(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 108703610; end: 10870368f;  */

undefined1 * FUN_108703610(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puStack_38;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_108703690();
  uVar1 = *(uint *)(param_2 + 0x20);
  if (uVar1 != 0xffffffff) {
    puStack_38 = param_1;
    (*(code *)(&PTR_FUN_110a68010)[uVar1])(&puStack_38,param_2);
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  return param_1;
}



/* Entry: 108703690; end: 1087036db;  */

void FUN_108703690(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a68000)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 1087036dc; end: 1087036e7;  */

undefined8 FUN_1087036dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x0001006334d4(&uStack_28);
  return param_2;
}



/* Entry: 1087036e8; end: 108703713;  */

void FUN_1087036e8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107c28c08();
  *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



/* Entry: 108703714; end: 108703717;  */

void FUN_108703714(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 108703718; end: 108703733;  */

undefined8 * FUN_108703718(undefined8 *param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  *param_1 = &PTR_DAT_110a67eb8;
  param_1[1] = &PTR_FUN_110a67f00;
  FUN_10865a95c(param_1 + 0x20);
  func_0x000107c279dc(param_1 + 0x18);
  func_0x000107c28a38(param_1 + 0x11);
  func_0x000107c28a3c(param_1 + 0x10);
  func_0x000107c288a4(param_1 + 0xe);
  func_0x000107c28d9c(param_1 + 0xc);
  func_0x000107c28800(param_1 + 10);
  func_0x000107c27a68(param_1 + 8);
  func_0x000107c29344(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 108703734; end: 1087037cf;  */

undefined8 * FUN_108703734(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a67eb8;
  param_1[1] = &PTR_FUN_110a67f00;
  FUN_10865a95c(param_1 + 0x20);
  func_0x000107c279dc(param_1 + 0x18);
  func_0x000107c28a38(param_1 + 0x11);
  func_0x000107c28a3c(param_1 + 0x10);
  func_0x000107c288a4(param_1 + 0xe);
  func_0x000107c28d9c(param_1 + 0xc);
  func_0x000107c28800(param_1 + 10);
  func_0x000107c27a68(param_1 + 8);
  func_0x000107c29344(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 1087037d0; end: 1087037db;  */

void FUN_1087037d0(void)

{
  return;
}



/* Entry: 1087037dc; end: 108703803;  */

void FUN_1087037dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108705228();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a68030;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108703804; end: 108703827;  */

void FUN_108703804(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a68030;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108703828; end: 1087038f3;  */

bool FUN_108703828(long param_1,long param_2,long *param_3,byte *param_4)

{
  code *extraout_x8;
  long lVar1;
  
  if ((*param_4 & 1) != 0) {
    return true;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0xf0);
  if (lVar1 < 1 || *(long *)(param_2 + 0x10) < lVar1) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0xe8);
    if (0 < lVar1 && *(long *)(param_2 + 0x10) < lVar1) {
      return false;
    }
    func_0x000108705148();
    (*extraout_x8)();
    if (*param_3 != param_3[1]) {
      return *(long *)(param_3[1] + -0x360) < param_1 + -0xa4cb800;
    }
  }
  return true;
}



/* Entry: 1087038f4; end: 1087038ff;  */

undefined ** FUN_1087038f4(void)

{
  return &PTR_DAT_110a680a0;
}


