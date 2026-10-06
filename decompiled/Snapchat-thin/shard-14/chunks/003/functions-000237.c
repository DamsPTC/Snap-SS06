/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1371b0; end: 10b1371bb;  */

undefined ** FUN_10b1371b0(void)

{
  int iVar1;
  undefined **ppuVar2;
  
  if ((bRam000000011336c3f8 & 1) == 0) {
    iVar1 = 0x1336c3f8;
    ___cxa_guard_acquire();
    ppuVar2 = &PTR_DAT_110cbdd38;
    if (iVar1 != 0) {
      func_0x000107c2be18();
      ppuRam000000011336c3f0 = ppuVar2;
      ___cxa_guard_release(0x11336c3f8);
    }
  }
  return ppuRam000000011336c3f0;
}



/* Entry: 10b1371bc; end: 10b137243;  */

undefined8 FUN_10b1371bc(undefined8 param_1)

{
  int iVar1;
  
  if ((bRam000000011336c3f8 & 1) == 0) {
    iVar1 = 0x1336c3f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2be18();
      uRam000000011336c3f0 = param_1;
      ___cxa_guard_release(0x11336c3f8);
    }
  }
  return uRam000000011336c3f0;
}



/* Entry: 10b137244; end: 10b13725b;  */

void FUN_10b137244(void)

{
  return;
}



/* Entry: 10b13725c; end: 10b13740f;  */

void FUN_10b13725c(undefined1 *param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_2;
  FUN_10b1c41c0();
  lVar2 = param_2;
  FUN_10b1c4ae8();
  if ((*(char *)(param_2 + 0x58) == '\x01' && lVar2 != 0) && lVar3 != 0) {
    ppuVar1 = &PTR_PTR_113405540;
    if (*(undefined ***)(lVar3 + 0x68) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar3 + 0x68);
    }
    puVar5 = (undefined8 *)((ulong)ppuVar1[2] & 0xfffffffffffffffc);
    ppuVar1 = &PTR_PTR_113405540;
    if (*(undefined ***)(lVar2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar2 + 0x18);
    }
    puVar4 = ppuVar1[2];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_b8,param_2 + 0x20);
    uStack_88 = *(undefined4 *)(param_2 + 0x18);
    uStack_90 = uStack_a8;
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    lVar3 = (long)*(char *)((long)puVar5 + 0x17);
    if (lVar3 < 0) {
      lVar3 = puVar5[1];
      puVar5 = (undefined8 *)*puVar5;
    }
    func_0x000107c28004(&uStack_d0,puVar5,(long)puVar5 + lVar3);
    puVar5 = (undefined8 *)((ulong)puVar4 & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)puVar5 + 0x17);
    if (lVar3 < 0) {
      lVar3 = puVar5[1];
      puVar5 = (undefined8 *)*puVar5;
    }
    func_0x000107c28004(&uStack_f0,puVar5,(long)puVar5 + lVar3);
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_70 = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_68 = uStack_88;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    uStack_50 = uStack_c0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_40 = uStack_e8;
    uStack_48 = uStack_f0;
    uStack_38 = uStack_e0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    FUN_10b136dd4(param_1,&uStack_80);
    param_1[0x50] = 1;
    func_0x00010b0f3dc4(&uStack_80);
    func_0x000107c27914(&uStack_f0);
    func_0x000107c27914(&uStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b8);
  }
  else {
    *param_1 = 0;
    param_1[0x50] = 0;
  }
  return;
}



/* Entry: 10b137410; end: 10b1374bf;  */

void FUN_10b137410(undefined8 *param_1,long param_2,int param_3)

{
  undefined1 auStack_88 [80];
  char cStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  while ((0 < param_3 && (*(long *)(param_2 + 0x20) != *(long *)(param_2 + 0x10)))) {
    FUN_10b13725c(auStack_88);
    if (cStack_38 == '\x01') {
      FUN_10b136cc8(param_1,auStack_88);
    }
    func_0x00010b1374d8(auStack_88);
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 0x278;
    param_3 = param_3 + -1;
  }
  return;
}



/* Entry: 10b1374c0; end: 10b1374c3;  */

undefined8 * FUN_10b1374c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdd60;
  FUN_10b124b28(param_1 + 1);
  return param_1;
}



/* Entry: 10b1374c4; end: 10b1374f7;  */

void FUN_10b1374c4(void)

{
  FUN_10b1374f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1374f8; end: 10b137527;  */

undefined8 * FUN_10b1374f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdd60;
  FUN_10b124b28(param_1 + 1);
  return param_1;
}



/* Entry: 10b137528; end: 10b1375cb;  */

bool FUN_10b137528(long param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auStack_38 [24];
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uVar1 = (uint)param_2;
  if (((param_2 & 1) == 0) || ((*(byte *)(param_1 + 0x2d0) & 1) == 0)) {
    if (((uVar1 >> 8 & 1) != 0) && (*(int *)(param_1 + 0x2d4) != 0)) {
      puStack_20 = (&PTR_DAT_110cbdec8)[*(int *)(param_1 + 0x2d4)];
      uStack_18 = 0;
      func_0x000107c2793c(&UNK_10f73021b);
      func_0x000107c3173c(auStack_38);
      func_0x00010b13ad94();
      return false;
    }
    if ((((uVar1 >> 0x10 & 1) == 0) || (*(char *)(param_1 + 0x90) == '\x01')) &&
       (((uVar1 >> 0x18 & 1) == 0 || (*(char *)(param_1 + 0xc0) == '\x01')))) {
      if ((int)(param_2 >> 0x20) == 0) {
        return true;
      }
      return *(long *)(param_1 + 0x380) != 0;
    }
  }
  return false;
}



/* Entry: 10b1375cc; end: 10b137bbf;  */

long * FUN_10b1375cc(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5
                    ,int param_6,long param_7,undefined8 param_8,undefined4 param_9,byte param_10)

{
  undefined1 uVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  undefined8 extraout_x8;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [24];
  undefined8 *puStack_138;
  ulong auStack_130 [2];
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [40];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  
  plVar3 = param_1;
  func_0x00010b13ac00();
  plVar9 = plVar3 + 1;
  *plVar9 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110cbdda0;
  lVar8 = param_2[1];
  lVar13 = *param_2;
  plVar10 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plVar10 = lVar13;
  uStack_68 = extraout_x8;
  if (lVar8 != 0) {
    do {
      func_0x00010b13ac40();
    } while (extraout_w10 != 0);
  }
  plVar11 = param_1 + 5;
  *plVar11 = 0;
  param_1[6] = 0;
  FUN_10b121c1c(param_1 + 7,param_3);
  plVar4 = param_1 + 7;
  FUN_10b1c41c0();
  param_1[0x56] = (long)plVar4;
  plVar4 = param_1 + 7;
  FUN_10b1c4ae8();
  param_1[0x57] = (long)plVar4;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(int *)((long)param_1 + 0x2d4) = param_6;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  func_0x00010b121ddc(param_1 + 0x5e,param_4);
  *(undefined4 *)(param_1 + 0x62) = 5;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x352) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x324) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x329) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 1;
  lVar8 = *param_5;
  param_1[0x70] = lVar8;
  if (lVar8 != 0) {
    do {
      func_0x00010b13ac40();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b1238dc(param_1 + 0x71,param_8);
  param_1[0xce] = 0x32aaaba7;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xd9] = 0x32aaaba7;
  *(undefined1 *)((long)param_1 + 0x724) = 0;
  param_1[0xe5] = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  param_1[0xde] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  if (*(char *)(param_7 + 0x18) == '\x01') {
    func_0x00010b120068(plVar11,param_7);
    param_1[0x58] = *(long *)(param_7 + 0x10);
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  plVar4 = param_1 + 0xd7;
  uVar1 = (char)param_1[0x12] == '\x01';
  if ((!(bool)uVar1) || (uVar1 = (char)param_1[0x18] == '\x01', !(bool)uVar1)) goto LAB_10b1379a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x5b,param_1 + 0xb);
  *(int *)(param_1 + 0x62) = (int)param_1[10];
  *(int *)((long)param_1 + 0x314) = (int)param_1[0x11];
  func_0x000107c278b8(auStack_130,&UNK_10f731917);
  func_0x000107c27b9c(param_1 + 99,auStack_130);
  func_0x00010b13afdc();
  *(bool *)(param_1 + 0x6a) = *(int *)((long)param_1 + 0x9c) == 2;
  *(bool *)((long)param_1 + 0x351) = *(int *)((long)param_1 + 0x9c) == 3;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    if (param_1[8] != 0) goto LAB_10b1377e0;
LAB_10b1377f8:
    auStack_130[0] = auStack_130[0] & 0xffffffffffffff00;
    uStack_118 = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0x4f) == '\0') goto LAB_10b1377f8;
LAB_10b1377e0:
    func_0x000107c281f8(auStack_130,param_1 + 7);
  }
  func_0x000107c27c54(param_1 + 0x6b,auStack_130);
  func_0x000107c279a4(auStack_130);
  *(int *)(param_1 + 0x6f) = (int)param_1[0x13];
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = puVar5 + 1;
  puStack_138 = puVar5;
  FUN_10b137bc0(param_1 + 0xce,&puStack_138);
  FUN_10b139f38(&puStack_138);
  uVar1 = 0;
  if (((char)param_1[0x6e] == '\x01') &&
     (uVar1 = *(char *)((long)param_1 + 0x351) == '\x01', (bool)uVar1)) {
    FUN_10b206ee4(auStack_130,param_1 + 0x6b);
    func_0x000107c27b94(param_1 + 0x66,auStack_130);
    func_0x00010b13afdc();
  }
  if ((param_6 != 0) && ((*(byte *)(param_1 + 0xe) & 1) != 0)) {
    uVar12 = *(undefined8 *)param_1[3];
    FUN_10b12983c(auStack_130,(int)param_1[0x62]);
    func_0x00010b12aca4(auStack_108,*(undefined4 *)((long)param_1 + 0x314));
    func_0x00010b126fec(auStack_e0,2);
    FUN_10b205c38(&uStack_168,(int)param_1[0x6f]);
    puStack_b8 = &UNK_10f73022c;
    uStack_b0 = 0xc;
    uStack_a0 = uStack_160;
    uStack_a8 = uStack_168;
    uStack_98 = uStack_158;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    func_0x00010b123d80(auStack_90,&UNK_10f730239,8,0);
    func_0x00010b120648(auStack_150,auStack_130,5);
    func_0x00010b13af14(uVar12,0,auStack_150);
    FUN_10b120998(auStack_150);
    lVar8 = 0xb0;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((long)auStack_130 + lVar8);
      lVar8 = lVar8 + -0x28;
      uVar1 = lVar8 == -0x18;
    } while (!(bool)uVar1);
    func_0x00010b13ad94();
  }
  FUN_10b1330dc(auStack_130,*(undefined8 *)(*plVar10 + 0x40),param_1 + 7);
  func_0x00010b137bf8(plVar4,auStack_130);
  FUN_10b133118(auStack_130);
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)((long)param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)((long)param_1 + 0x72c) = *(undefined4 *)((long)param_1 + 0x314);
  *(undefined1 *)(param_1 + 0xe6) = 0;
LAB_10b1379a8:
  *(undefined4 *)(param_1 + 0xe5) = param_9;
  if (param_1[0x56] != 0) {
    cVar2 = (char)param_1 + '8';
    FUN_10b1c4a58();
    *(char *)(param_1 + 0xe6) = cVar2;
  }
  plVar6 = (long *)*plVar4;
  if (plVar6 != (long *)0x0) {
    auStack_130[0] = 0;
    auStack_130[1] = 0;
    uStack_120 = 1;
    if ((*(byte *)(param_1 + 0xe6) & 1) == 0) {
      uVar1 = (int)param_1[0xbf] == 1;
      bVar7 = (bool)uVar1;
    }
    else {
      bVar7 = false;
    }
    FUN_10b204764(plVar6,(int)param_1[0x62],(int)param_1[0xe5],auStack_130,(char)param_1[0xcd],bVar7
                 );
  }
  if (*(int *)((long)param_1 + 0x2d4) == 0) {
    if ((param_10 & 1) == 0) {
      uVar1 = *plVar11 == 0;
      uVar12 = 0x100000000;
      if (!(bool)uVar1) {
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 0;
    }
    plVar6 = param_1;
    FUN_10b137528(param_1,uVar12);
    if (((ulong)plVar6 & 1) == 0) {
      *(undefined4 *)((long)param_1 + 0x2d4) = 4;
    }
  }
  func_0x00010b13abd4(uStack_68);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b13afdc();
    func_0x00010b139dc8(param_1 + 0xd9);
    FUN_10b133118(plVar4);
    func_0x00010b139df0(param_1 + 0xce);
    func_0x00010b0faf64(param_1 + 0x71);
    func_0x00010b12b970(param_1 + 0x70);
    func_0x000107c279a4(param_1 + 0x6b);
    func_0x000107c279a4(param_1 + 0x66);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 99);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5e);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5b);
    func_0x00010b121af0(param_1 + 7);
    func_0x00010b129c40(plVar11);
    func_0x00010b1257d4(plVar10);
    func_0x00010b12b928(plVar9);
    __Unwind_Resume(plVar6);
    func_0x00010b13adb0();
    __ZNSt3__15mutex4lockEv();
    lVar8 = *plVar9;
    *plVar9 = 0;
    FUN_10b139f5c(plVar3 + 0xb,lVar8);
    __ZNSt3__15mutex6unlockEv(plVar10);
    return plVar10;
  }
  return param_1;
}



/* Entry: 10b137bc0; end: 10b137c1b;  */

void FUN_10b137bc0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b13adb0();
  __ZNSt3__15mutex4lockEv();
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  FUN_10b139f5c(unaff_x20 + 0x40,uVar1);
  __ZNSt3__15mutex6unlockEv();
  return;
}



/* Entry: 10b137c1c; end: 10b137cbb;  */

undefined8 * FUN_10b137c1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdda0;
  FUN_10b137cbc();
  func_0x00010b139dc8(param_1 + 0xd9);
  FUN_10b133118(param_1 + 0xd7);
  func_0x00010b139df0(param_1 + 0xce);
  func_0x00010b0faf64(param_1 + 0x71);
  func_0x00010b12b970(param_1 + 0x70);
  func_0x000107c279a4(param_1 + 0x6b);
  func_0x000107c279a4(param_1 + 0x66);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 99);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5b);
  func_0x00010b121af0(param_1 + 7);
  func_0x00010b129c40(param_1 + 5);
  func_0x00010b1257d4(param_1 + 3);
  func_0x00010b12b928(param_1 + 1);
  return param_1;
}



/* Entry: 10b137cbc; end: 10b137e7b;  */

void FUN_10b137cbc(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined1 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_250;
  undefined1 uStack_248;
  undefined1 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_120;
  undefined2 uStack_118;
  undefined1 uStack_116;
  undefined1 auStack_110 [176];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  long *plStack_38;
  
  bVar1 = *(byte *)(param_1 + 0x2d0);
  *(undefined1 *)(param_1 + 0x2d0) = 1;
  if (((bVar1 & 1) == 0) &&
     (((*(byte *)(param_1 + 0x90) & 1) != 0 || (*(char *)(param_1 + 0xc0) == '\x01')))) {
    FUN_10b138854(auStack_48,param_1 + 0x670);
    if ((*(char *)(param_1 + 0x370) == '\x01') &&
       ((*plStack_38 != 0 && (*(long *)(*plStack_38 + 0x10) != 0)))) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      FUN_10b202630(&uStack_2d8,param_1 + 0x358);
      uStack_58 = *(undefined8 *)(param_1 + 0x728);
      uStack_60 = *(undefined8 *)(param_1 + 0x720);
      uStack_50 = *(undefined4 *)(param_1 + 0x730);
      FUN_10b1f7590(uVar3,&uStack_2d8,*(undefined4 *)(param_1 + 0x50),&uStack_60,*plStack_38);
      func_0x00010b121e00(&uStack_2d8);
    }
    else if ((*(char *)(param_1 + 0x352) == '\x01') && (*(long *)(param_1 + 0x6b8) != 0)) {
      FUN_10b204844();
    }
    func_0x000107c2798c(auStack_48);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_116 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2d8 = 0;
    uStack_2c0 = 0;
    _bzero(auStack_110,0xb0);
    FUN_10b1151e4(param_1 + 0x38,&uStack_2d8);
    func_0x00010b121af0(&uStack_2d8);
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    if (lVar2 != 0) {
      FUN_10b1a1ae8(lVar2,*(undefined8 *)(param_1 + 0x2c0));
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010b138874((long *)(param_1 + 0x28),&uStack_2d8);
      func_0x00010b129c40(&uStack_2d8);
    }
    uStack_2d8 = 0;
    FUN_10b11a178(param_1 + 0x380,&uStack_2d8);
    func_0x00010b12b970(&uStack_2d8);
  }
  return;
}



/* Entry: 10b137e7c; end: 10b137e7f;  */

undefined8 * FUN_10b137e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdda0;
  FUN_10b137cbc();
  func_0x00010b139dc8(param_1 + 0xd9);
  FUN_10b133118(param_1 + 0xd7);
  func_0x00010b139df0(param_1 + 0xce);
  func_0x00010b0faf64(param_1 + 0x71);
  func_0x00010b12b970(param_1 + 0x70);
  func_0x000107c279a4(param_1 + 0x6b);
  func_0x000107c279a4(param_1 + 0x66);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 99);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5b);
  func_0x00010b121af0(param_1 + 7);
  func_0x00010b129c40(param_1 + 5);
  func_0x00010b1257d4(param_1 + 3);
  func_0x00010b12b928(param_1 + 1);
  return param_1;
}



/* Entry: 10b137e80; end: 10b137e93;  */

void FUN_10b137e80(void)

{
  FUN_10b137c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b137e94; end: 10b137f27;  */

long FUN_10b137e94(long param_1)

{
  long lVar1;
  undefined1 auStack_70 [80];
  
  if ((*(byte *)(param_1 + 0x2d0) & 1) == 0) {
    if ((*(char *)(param_1 + 0xc0) == '\x01') && (0 < *(long *)(param_1 + 0xb0))) {
      return *(long *)(param_1 + 0xb0);
    }
    if (*(char *)(param_1 + 0x370) == '\x01') {
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
      FUN_10b202630(auStack_70,param_1 + 0x358);
      func_0x00010b1f70c4(lVar1,auStack_70,*(undefined4 *)(param_1 + 0x98));
      func_0x00010b13acf8();
      return lVar1;
    }
  }
  return -1;
}



/* Entry: 10b137f28; end: 10b137f7b;  */

ulong FUN_10b137f28(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((*(byte *)(param_1 + 0x2d0) & 1) == 0) && (*(long *)(param_1 + 0x380) != 0)) {
    puVar1 = (ulong *)(param_1 + 0x380);
    FUN_10b137f7c();
    if ((char)puVar1[8] == '\x01') {
      uVar2 = *puVar1;
      uVar3 = 0;
      if (uVar2 != 0) {
        func_0x00010b13afa4();
        uVar3 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



/* Entry: 10b137f7c; end: 10b137fcf;  */

long FUN_10b137f7c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar2 = *param_1;
  lStack_40 = lVar2 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(lVar2,&lStack_40);
  lVar3 = *(long *)(lVar2 + 0x10);
  uStack_48 = 0;
  func_0x00010b13aee4();
  if (lVar3 == 0) {
    func_0x00010b13ae08();
    return lVar2 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(lVar2 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b13a064);
  (*pcVar1)();
}



/* Entry: 10b137fd0; end: 10b1380d3;  */

long * FUN_10b137fd0(long *param_1,long *param_2,undefined *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  long lVar3;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long alStack_a0 [2];
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2;
  func_0x00010b13ac00();
  uStack_38 = extraout_x8;
  func_0x00010b13af3c();
  if (((ulong)plVar2 & 1) == 0) {
    func_0x00010b13af34();
  }
  else {
    plVar1 = param_2 + 0x70;
    FUN_10b137f7c();
    if ((*(byte *)(plVar1 + 8) & 1) == 0) {
      plVar2 = *(long **)param_2[3];
      param_3 = &UNK_10f730242;
      FUN_10b20bf78(plVar2,&UNK_10f730242,0x22,(int)param_2[0x62]);
      func_0x00010b13af34();
    }
    else {
      plVar2 = (long *)*plVar1;
      param_3 = (undefined *)plVar1[1];
      FUN_10b138154();
      if ((int)plVar2 == 0) {
        func_0x00010b13aea8();
        func_0x00010b13ad9c(&lStack_50);
        lVar3 = plVar1[1];
        plStack_40[2] = 0;
        *plStack_40 = (long)&PTR_FUN_110cbdf00;
        plStack_40[1] = 0;
        if (lVar3 != 0) {
          do {
            func_0x00010b13acc4();
          } while (extraout_w11 != 0);
        }
        func_0x00010b13acd4();
        param_2 = plStack_40;
        plStack_40 = (long *)0x0;
        plVar2 = &lStack_50;
        func_0x00010b13a0f4();
        *param_1 = (long)(param_2 + 3);
        param_1[1] = (long)param_2;
        goto LAB_10b138058;
      }
      func_0x00010b13af34();
    }
  }
  param_1[1] = lStack_48;
  *param_1 = lStack_50;
LAB_10b138058:
  func_0x00010b13ad6c();
  func_0x00010b13abd4(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar1 = alStack_a0;
  pcStack_68 = FUN_10b1380d4;
  plStack_80 = param_2;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010b13ac00();
  uStack_88 = extraout_x8_00;
  func_0x00010b13ad9c(alStack_a0);
  func_0x00010b13b020(lStack_90);
  lVar3 = lStack_90;
  *extraout_x8_01 = extraout_x9 + 0x10;
  extraout_x8_01[1] = 0;
  extraout_x8_01[2] = 0;
  extraout_x8_01[3] = (long)&PTR_FUN_110cc5e08;
  extraout_x8_01[5] = 0;
  extraout_x8_01[4] = 0;
  extraout_x8_01[7] = 0;
  extraout_x8_01[6] = 0;
  lStack_90 = 0;
  *plVar2 = lVar3 + 0x18;
  plVar2[1] = lVar3;
  func_0x00010b13a0f4();
  func_0x00010b13abd4(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (param_3 != (undefined *)0x0) {
      do {
        func_0x00010b13ac40();
      } while (extraout_w10 != 0);
    }
    func_0x00010b13ad4c();
    return (long *)(ulong)(plVar1 == (long *)0x0);
  }
  return plVar1;
}



/* Entry: 10b1380d4; end: 10b138153;  */

undefined1 * FUN_10b1380d4(long *param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010b13ac00();
  uStack_28 = extraout_x8;
  func_0x00010b13ad9c(auStack_40);
  func_0x00010b13b020(lStack_30);
  lVar1 = lStack_30;
  *extraout_x8_00 = extraout_x9 + 0x10;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  extraout_x8_00[3] = (long)&PTR_FUN_110cc5e08;
  extraout_x8_00[5] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[7] = 0;
  extraout_x8_00[6] = 0;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b13a0f4();
  func_0x00010b13abd4(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (param_2 != 0) {
      do {
        func_0x00010b13ac40();
      } while (extraout_w10 != 0);
    }
    func_0x00010b13ad4c();
    return (undefined1 *)(ulong)(puVar2 == (undefined1 *)0x0);
  }
  return puVar2;
}



/* Entry: 10b138154; end: 10b13818f;  */

bool FUN_10b138154(long param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 != 0) {
    do {
      func_0x00010b13ac40();
    } while (extraout_w10 != 0);
  }
  func_0x00010b13ad4c();
  return param_1 == 0;
}



/* Entry: 10b138190; end: 10b1383b3;  */

void FUN_10b138190(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 uVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *extraout_x8_02;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  long *plStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  func_0x00010b13ac00();
  uStack_38 = extraout_x8;
  FUN_10b138854(auStack_80,param_1 + 0x670);
  if (*plStack_70 != 0) {
    in_ZR = *(char *)(param_1 + 0x370) == '\x01';
    if ((bool)in_ZR) {
      FUN_10b139f5c(plStack_70,0);
      func_0x00010b13ad80();
      func_0x000107c2798c(&uStack_d0);
      if (*(long *)(param_1 + 0x6b8) != 0) {
        func_0x00010b13ade8();
        if ((extraout_x8_00 & 1) == 0) {
          in_ZR = *(int *)(param_1 + 0x5f8) == 1;
        }
        FUN_10b204764();
        *(undefined1 *)(param_1 + 0x352) = 0;
      }
      func_0x00010b1ff218(auStack_90,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                          *(undefined4 *)(param_1 + 0x310));
      lVar8 = *(long *)(param_1 + 0x18);
      uStack_c8 = *(undefined8 *)(lVar8 + 0x48);
      uStack_d0 = *(undefined8 *)(lVar8 + 0x40);
      if (*(long *)(lVar8 + 0x48) != 0) {
        do {
          func_0x00010b13ac40();
        } while (extraout_w10 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_c0,param_1 + 0x358);
      uStack_a8 = *(undefined4 *)(param_1 + 0x310);
      uStack_9c = (undefined4)*(undefined8 *)(param_1 + 0x728);
      uStack_98 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x728) >> 0x20);
      uStack_a4 = (undefined4)*(undefined8 *)(param_1 + 0x720);
      uStack_a0 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x720) >> 0x20);
      uStack_94 = *(undefined1 *)(param_1 + 0x730);
      pcStack_68 = FUN_10b13a51c;
      ppuStack_60 = &PTR_FUN_110cbdff0;
      puVar3 = (undefined8 *)0x40;
      __Znwm();
      uVar2 = uStack_c8;
      uVar1 = uStack_d0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      puVar3[1] = uVar2;
      *puVar3 = uVar1;
      puVar3[3] = uStack_b8;
      puVar3[2] = uStack_c0;
      puVar3[4] = uStack_b0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      puVar3[6] = CONCAT44(uStack_9c,uStack_a0);
      puVar3[5] = CONCAT44(uStack_a4,uStack_a8);
      *(ulong *)((long)puVar3 + 0x35) = CONCAT17(uStack_94,CONCAT43(uStack_98,uStack_9c._1_3_));
      puStack_58 = puVar3;
      FUN_10b20a5ac(auStack_90[0],&pcStack_68);
      (*(code *)*ppuStack_60)(&ppuStack_60);
      func_0x00010b138f60(&uStack_d0);
      func_0x00010b1298c4(auStack_90);
    }
    else {
      FUN_10b13a5dc(*plStack_70);
      func_0x00010b13afe4(*plStack_70);
      func_0x00010b13ad80();
      func_0x000107c2798c(&uStack_d0);
      if (*(long *)(param_1 + 0x6b8) != 0) {
        func_0x00010b13ade8();
        if ((extraout_x8_01 & 1) == 0) {
          in_ZR = *(int *)(param_1 + 0x5f8) == 1;
        }
        FUN_10b204764();
      }
    }
  }
  func_0x000107c2798c();
  func_0x00010b13abd4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  func_0x00010b138f60(&uStack_d0);
  func_0x00010b1298c4(auStack_90);
  puVar4 = auStack_80;
  func_0x000107c2798c();
  func_0x00010b13ac84();
  puVar5 = puVar4;
  func_0x00010b13af3c();
  if ((int)puVar5 != 0) {
    plVar6 = (long *)(puVar4 + 0x380);
    FUN_10b137f7c();
    if ((char)plVar6[8] == '\x01') {
      lVar8 = *plVar6;
      if (plVar6[1] != 0) {
        do {
          func_0x00010b13ac40();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b13ad4c();
      if (lVar8 != 0) {
        func_0x00010b13aea8();
        lVar8 = plVar6[1];
        lVar9 = *plVar6;
        extraout_x8_02[1] = plVar6[1];
        *extraout_x8_02 = lVar9;
        if (lVar8 != 0) {
          do {
            func_0x00010b13ac40();
          } while (extraout_w10_01 != 0);
        }
        uVar7 = 1;
        goto LAB_10b138440;
      }
    }
  }
  uVar7 = 0;
  *(undefined1 *)extraout_x8_02 = 0;
LAB_10b138440:
  *(undefined1 *)(extraout_x8_02 + 2) = uVar7;
  return;
}



/* Entry: 10b1383b4; end: 10b138457;  */

void FUN_10b1383b4(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long lVar4;
  
  lVar3 = param_2;
  func_0x00010b13af3c();
  if ((int)lVar3 != 0) {
    plVar1 = (long *)(param_2 + 0x380);
    FUN_10b137f7c();
    if ((char)plVar1[8] == '\x01') {
      lVar3 = *plVar1;
      if (plVar1[1] != 0) {
        do {
          func_0x00010b13ac40();
        } while (extraout_w10 != 0);
      }
      func_0x00010b13ad4c();
      if (lVar3 != 0) {
        func_0x00010b13aea8();
        lVar3 = plVar1[1];
        lVar4 = *plVar1;
        param_1[1] = plVar1[1];
        *param_1 = lVar4;
        if (lVar3 != 0) {
          do {
            func_0x00010b13ac40();
          } while (extraout_w10_00 != 0);
        }
        uVar2 = 1;
        goto LAB_10b138440;
      }
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10b138440:
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}



/* Entry: 10b138458; end: 10b13871b;  */

undefined8 ****
FUN_10b138458(undefined8 *param_1,undefined8 ****param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined1 uVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 ****extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 ***pppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 **appuStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010b13ac00();
  uVar4 = *(char *)(param_2 + 0x5a) == '\x01';
  uStack_68 = extraout_x8;
  if (!(bool)uVar4) {
    if (param_2[5] != (undefined8 ***)0x0) {
      uStack_a0 = 0;
      FUN_10b137bc0(param_2 + 0xce,&uStack_a0);
      FUN_10b139f38(&uStack_a0);
      pppuVar5 = param_2[5];
      uStack_a8 = param_3[1];
      uStack_b0 = *param_3;
      if (param_3[1] != 0) {
        do {
          func_0x00010b13ac40();
        } while (extraout_w10 != 0);
      }
      FUN_10b19d3a4();
      FUN_10b0fb81c(&uStack_b0);
      func_0x00010b13a12c(&pppuStack_100,param_2[1],param_2[2]);
      pppuVar3 = pppuStack_100;
      puVar6 = (undefined8 *)0x38;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_110cbdf50;
      puVar9 = puVar6 + 3;
      *puVar9 = &PTR_DAT_110cbdfa0;
      puVar6[5] = lStack_f8;
      puVar6[4] = pppuVar3;
      if (lStack_f8 != 0) {
        do {
          func_0x00010b13acc4();
          puVar9 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      puVar6[6] = pppuVar5;
      *param_1 = puVar9;
      param_1[1] = puVar6;
      param_2 = &pppuStack_100;
      func_0x00010b12b94c();
      goto LAB_10b138680;
    }
    uVar4 = *(char *)(param_2 + 0x12) == '\x01';
    if (((bool)uVar4) && (param_2[0x70] != (undefined8 ***)0x0)) {
      func_0x00010b1ff218(appuStack_c0,param_2[3][6],*(undefined4 *)(param_2 + 10));
      puVar9 = (undefined8 *)((ulong)&pppuStack_100 | 8);
      pppuStack_100 = param_2;
      func_0x00010b13a12c(puVar9,param_2[1],param_2[2]);
      uVar1 = *param_3;
      lVar2 = param_3[1];
      uStack_e8 = uVar1;
      lStack_e0 = lVar2;
      if (lVar2 != 0) {
        do {
          func_0x00010b13ac40();
        } while (extraout_w10_00 != 0);
      }
      pcStack_98 = FUN_10b13a2e4;
      ppuStack_90 = &PTR_FUN_110cbdfd8;
      puVar6 = (undefined8 *)0x38;
      uStack_d8 = param_4;
      uStack_d0 = param_5;
      __Znwm();
      ppppuVar7 = &pppuStack_100;
      puVar6[1] = lStack_f8;
      *puVar6 = pppuStack_100;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar6[2] = uStack_f0;
      puVar6[3] = uVar1;
      puVar6[4] = lVar2;
      if (lVar2 != 0) {
        do {
          func_0x00010b13acc4();
          ppppuVar7 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      pppuVar5 = ppppuVar7[5];
      puVar6[6] = ppppuVar7[6];
      puVar6[5] = pppuVar5;
      puStack_88 = puVar6;
      FUN_10b20a5ac(appuStack_c0[0],&pcStack_98);
      func_0x00010b13ae30();
      FUN_10b13871c(&pppuStack_100);
      param_2 = (undefined8 ****)appuStack_c0;
      func_0x00010b1298c4();
    }
    else {
      plVar8 = (long *)*param_3;
      func_0x00010b13ae10();
      (**(code **)(*plVar8 + 0x18))(plVar8,3,&pppuStack_100,0);
      param_2 = &pppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10b138680:
  func_0x00010b13abd4(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010b13ae30();
    FUN_10b13871c(&pppuStack_100);
    ppppuVar7 = (undefined8 ****)appuStack_c0;
    func_0x00010b1298c4(ppppuVar7);
    func_0x00010b13ac84();
    FUN_10b0fb81c(ppppuVar7 + 3);
    func_0x00010b12b94c(ppppuVar7 + 1);
    return ppppuVar7;
  }
  return param_2;
}



/* Entry: 10b13871c; end: 10b138747;  */

long FUN_10b13871c(long param_1)

{
  FUN_10b0fb81c(param_1 + 0x18);
  func_0x00010b12b94c(param_1 + 8);
  return param_1;
}



/* Entry: 10b138748; end: 10b13875b;  */

void FUN_10b138748(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b134530(param_1,param_2 + 0x388);
  func_0x00010b1343f8();
  FUN_10b123fcc();
  *(undefined4 *)(unaff_x19 + 0x270) = *(undefined4 *)(unaff_x20 + 0x270);
  func_0x0001052a06f8(unaff_x19 + 0x278,unaff_x20 + 0x278);
  func_0x000107c279a0(unaff_x19 + 0x2c0,unaff_x20 + 0x2c0);
  *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x20 + 0x2e0);
  return;
}



/* Entry: 10b13875c; end: 10b1387ab;  */

void FUN_10b13875c(long param_1)

{
  undefined1 auStack_a0 [128];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b123790(auStack_a0);
    func_0x00010b13ad0c();
    func_0x00010b13ae18();
  }
  return;
}



/* Entry: 10b1387ac; end: 10b13884f;  */

void FUN_10b1387ac(undefined1 *param_1,long param_2)

{
  undefined1 auStack_128 [120];
  undefined1 auStack_b0 [120];
  char cStack_38;
  
  if (*(long *)(param_2 + 0x28) == 0) {
    *param_1 = 0;
    param_1[0x78] = 0;
  }
  else {
    FUN_10b1a2190(auStack_b0,*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x2c0));
    if (cStack_38 == '\x01') {
      FUN_10b139e18(param_1,auStack_b0);
    }
    else {
      FUN_10b19ce28(auStack_128,*(undefined8 *)(param_2 + 0x28));
      func_0x00010b0fafb8(param_1,auStack_128);
      func_0x00010529fe04(auStack_128);
    }
    FUN_10b0faf98(auStack_b0);
  }
  return;
}



/* Entry: 10b138850; end: 10b138853;  */

void FUN_10b138850(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined1 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_250;
  undefined1 uStack_248;
  undefined1 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_120;
  undefined2 uStack_118;
  undefined1 uStack_116;
  undefined1 auStack_110 [176];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  long *plStack_38;
  
  bVar1 = *(byte *)(param_1 + 0x2d0);
  *(undefined1 *)(param_1 + 0x2d0) = 1;
  if (((bVar1 & 1) == 0) &&
     (((*(byte *)(param_1 + 0x90) & 1) != 0 || (*(char *)(param_1 + 0xc0) == '\x01')))) {
    FUN_10b138854(auStack_48,param_1 + 0x670);
    if ((*(char *)(param_1 + 0x370) == '\x01') &&
       ((*plStack_38 != 0 && (*(long *)(*plStack_38 + 0x10) != 0)))) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      FUN_10b202630(&uStack_2d8,param_1 + 0x358);
      uStack_58 = *(undefined8 *)(param_1 + 0x728);
      uStack_60 = *(undefined8 *)(param_1 + 0x720);
      uStack_50 = *(undefined4 *)(param_1 + 0x730);
      FUN_10b1f7590(uVar3,&uStack_2d8,*(undefined4 *)(param_1 + 0x50),&uStack_60,*plStack_38);
      func_0x00010b121e00(&uStack_2d8);
    }
    else if ((*(char *)(param_1 + 0x352) == '\x01') && (*(long *)(param_1 + 0x6b8) != 0)) {
      FUN_10b204844();
    }
    func_0x000107c2798c(auStack_48);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_116 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2d8 = 0;
    uStack_2c0 = 0;
    _bzero(auStack_110,0xb0);
    FUN_10b1151e4(param_1 + 0x38,&uStack_2d8);
    func_0x00010b121af0(&uStack_2d8);
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    if (lVar2 != 0) {
      FUN_10b1a1ae8(lVar2,*(undefined8 *)(param_1 + 0x2c0));
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010b138874((long *)(param_1 + 0x28),&uStack_2d8);
      func_0x00010b129c40(&uStack_2d8);
    }
    uStack_2d8 = 0;
    FUN_10b11a178(param_1 + 0x380,&uStack_2d8);
    func_0x00010b12b970(&uStack_2d8);
  }
  return;
}



/* Entry: 10b138854; end: 10b138897;  */

void FUN_10b138854(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b138898; end: 10b13889f;  */

undefined1 FUN_10b138898(long param_1)

{
  return *(undefined1 *)(param_1 + 0x351);
}



/* Entry: 10b1388a0; end: 10b138ad7;  */

long ** FUN_10b1388a0(undefined8 *param_1,long **param_2,long **param_3)

{
  undefined1 uVar1;
  int iVar2;
  long **pplVar3;
  long **pplVar4;
  char *pcVar5;
  long **pplVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long *extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long **unaff_x20;
  long lVar7;
  long *plVar8;
  long *plStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [16];
  long *aplStack_2e8 [2];
  long **pplStack_2d8;
  undefined8 uStack_298;
  code **ppcStack_290;
  long *plStack_288;
  long **pplStack_280;
  long **pplStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  long *plStack_260;
  long *plStack_258;
  long **pplStack_250;
  undefined1 auStack_248 [32];
  long *aplStack_228 [2];
  code *pcStack_218;
  undefined **ppuStack_210;
  long **pplStack_208;
  undefined1 auStack_1f0 [40];
  undefined1 auStack_1c8 [40];
  undefined1 auStack_1a0 [40];
  undefined8 uStack_178;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long *aplStack_120 [2];
  long *plStack_110;
  undefined8 uStack_108;
  long **pplStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined1 auStack_b8 [16];
  long *plStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long *plStack_90;
  undefined8 uStack_88;
  long **pplStack_80;
  undefined8 uStack_38;
  
  func_0x00010b13ac00();
  uVar1 = *(char *)(param_2 + 0x5a) == '\x01';
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    *param_1 = 0;
    param_1[1] = 0;
    pcVar5 = (char *)param_3;
    param_3 = unaff_x20;
  }
  else {
    if (*(char *)(param_2 + 0x6e) == '\x01') {
      pcVar5 = (char *)(long)*(char *)((long)param_2 + 0x36f);
      if ((long)pcVar5 < 0) {
        pplVar3 = (long **)param_2[0x6b];
        pcVar5 = (char *)param_2[0x6c];
      }
      else {
        pplVar3 = param_2 + 0x6b;
      }
      plVar8 = param_3[1];
      pplVar4 = (long **)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        plVar8 = (long *)(ulong)*(byte *)((long)param_3 + 0x17);
        pplVar4 = param_3;
      }
      FUN_10b206e3c(&plStack_a8,pplVar3,pcVar5,pplVar4,plVar8);
    }
    else {
      pcVar5 = "";
      func_0x000107c278b8(&plStack_a8);
    }
    uVar1 = bStack_91 == 0;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
    }
    if (uStack_a0 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lVar7 = param_2[3][8];
      FUN_10b202630(&plStack_90,&plStack_a8);
      pcVar5 = (char *)&plStack_90;
      func_0x00010b1f70f0(auStack_b8,lVar7);
      iVar2 = (int)&plStack_90;
      func_0x00010b121e00();
      func_0x00010b13ae9c();
      (**(code **)(extraout_x8_00 + 0x10))();
      if (iVar2 == 0) {
        func_0x00010b13ae9c();
        (**(code **)(extraout_x8_01 + 0x18))(&plStack_d0);
        if (plStack_d0 == (long *)0x0) {
          func_0x000107c27f10(&plStack_d0);
          func_0x00010b13ae9c();
          (**(code **)(extraout_x8_04 + 0x20))(&plStack_d0);
          pcVar5 = (char *)&plStack_d0;
          FUN_10b138ad8(&plStack_90);
          param_1[1] = uStack_88;
          *param_1 = plStack_90;
          plStack_90 = (long *)0x0;
          uStack_88 = 0;
          func_0x00010b13a104(&plStack_90);
          func_0x000107c27d78(&plStack_d0);
        }
        else {
          func_0x00010b13ad9c(&plStack_90);
          func_0x00010b13b020();
          func_0x00010b13aec8(pplStack_80);
          *(long *)(extraout_x8_02 + 0x28) = lStack_c8;
          *(long **)(extraout_x8_02 + 0x20) = plStack_d0;
          lVar7 = extraout_x8_02;
          if (lStack_c8 != 0) {
            do {
              func_0x00010b13acc4();
              lVar7 = extraout_x8_03;
            } while (extraout_w11 != 0);
          }
          param_3 = pplStack_80;
          *(undefined8 *)(lVar7 + 0x30) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          pplStack_80 = (long **)0x0;
          func_0x00010b13a0f4(&plStack_90);
          *param_1 = param_3 + 3;
          param_1[1] = param_3;
          uStack_e0 = 0;
          uStack_d8 = 0;
          func_0x00010b13a104(&uStack_e0);
          func_0x000107c27f10(&plStack_d0);
        }
      }
      else {
        pcVar5 = (char *)param_3;
        FUN_10b138b58(param_2);
        *param_1 = 0;
        param_1[1] = 0;
      }
      func_0x00010b13ae58();
    }
    param_2 = &plStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  func_0x00010b13abd4(uStack_38);
  if ((bool)uVar1) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010b13addc();
  func_0x000107c27d78();
  func_0x00010b13ae58();
  pplVar3 = &plStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b13ac84();
  pcStack_e8 = FUN_10b138ad8;
  pplStack_100 = param_3;
  puStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010b13ac00();
  uStack_108 = extraout_x8_05;
  func_0x00010b13ad9c(aplStack_120);
  plStack_110[2] = 0;
  func_0x00010b13b020();
  *extraout_x8_06 = extraout_x9 + 0x10;
  extraout_x8_06[1] = 0;
  plVar8 = *(long **)pcVar5;
  *(long **)pcVar5 = (long *)0x0;
  *(long **)((long)pcVar5 + 8) = (long *)0x0;
  func_0x00010b13acd4(plVar8);
  plVar8 = plStack_110;
  plStack_110 = (long *)0x0;
  *pplVar3 = plVar8 + 3;
  pplVar3[1] = plVar8;
  pplVar4 = aplStack_120;
  func_0x00010b13a0f4();
  func_0x00010b13abd4(uStack_108);
  if ((bool)uVar1) {
    return pplVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_138 = FUN_10b138b58;
  ppuStack_140 = &puStack_f0;
  func_0x00010b13adb0();
  func_0x00010b13ac00();
  lVar7 = *pplVar4[3];
  uStack_178 = extraout_x8_07;
  FUN_10b126f8c(&pcStack_218,0x10005);
  FUN_10b12983c(auStack_1f0,*(undefined4 *)((long)pcVar5 + 0x310));
  func_0x00010b12aca4(auStack_1c8,*(undefined4 *)((long)pcVar5 + 0x314));
  func_0x00010b126fec(auStack_1a0,0);
  func_0x00010b120648(&plStack_260,&pcStack_218,4);
  func_0x00010b13af14(lVar7,0x34,&plStack_260);
  FUN_10b120998(&plStack_260);
  lVar7 = 0x88;
  do {
    pplVar4 = (long **)((long)&pcStack_218 + lVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar7 = lVar7 + -0x28;
  } while (lVar7 != -0x18);
  uVar1 = *(char *)((long)pcVar5 + 0x370) == '\x01';
  plVar8 = (long *)0xffffffffffffffe8;
  if ((bool)uVar1) {
    func_0x00010b1ff218(aplStack_228,(*(long **)((long)pcVar5 + 0x18))[6],
                        *(undefined4 *)((long)pcVar5 + 0x310));
    func_0x00010b13a12c(&plStack_260,*(long **)((long)pcVar5 + 8),*(long **)((long)pcVar5 + 0x10));
    pplStack_250 = (long **)pcVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_248,pplVar3);
    pcStack_218 = FUN_10b13a6c8;
    ppuStack_210 = &PTR_FUN_110cbe020;
    pcVar5 = (char *)0x30;
    __Znwm();
    *(long **)((long)pcVar5 + 8) = plStack_258;
    *(long **)pcVar5 = plStack_260;
    plStack_260 = (long *)0x0;
    plStack_258 = (long *)0x0;
    *(long ***)((long)pcVar5 + 0x10) = pplStack_250;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              ((long **)((long)pcVar5 + 0x18),auStack_248);
    pplStack_208 = (long **)pcVar5;
    FUN_10b20a5ac(aplStack_228[0],&pcStack_218);
    func_0x00010b13aeb8();
    FUN_10b139414(&plStack_260);
    pplVar4 = aplStack_228;
    func_0x00010b1298c4();
    plVar8 = aplStack_228[0];
  }
  func_0x00010b13abd4(uStack_178);
  if ((bool)uVar1) {
    return pplVar4;
  }
  ___stack_chk_fail();
  func_0x00010b13aeb8();
  FUN_10b139414(&plStack_260);
  pplVar3 = aplStack_228;
  func_0x00010b1298c4();
  func_0x00010b13ac84();
  pplVar6 = &plStack_320;
  pcStack_268 = FUN_10b138d90;
  ppcStack_290 = &pcStack_218;
  plStack_288 = plVar8;
  pplStack_280 = (long **)pcVar5;
  pplStack_278 = pplVar4;
  pppuStack_270 = &ppuStack_140;
  func_0x00010b13ac00();
  uVar1 = *(char *)(pplVar3 + 0x69) == '\x01';
  pplVar4 = pplVar3;
  uStack_298 = extraout_x8_09;
  if ((bool)uVar1) {
    pplVar4 = pplVar3 + 0x66;
    func_0x000107c27cf4(pplVar4,"");
    pcVar5 = (char *)pplVar3;
    if ((int)pplVar4 == 0) {
      lVar7 = pplVar3[3][8];
      FUN_10b202630(aplStack_2e8,pplVar3 + 0x66);
      func_0x00010b1f70f0(auStack_2f8,lVar7,aplStack_2e8);
      pplVar4 = aplStack_2e8;
      func_0x00010b121e00();
      func_0x00010b13ae9c();
      (**(code **)(extraout_x8_10 + 0x10))();
      if ((int)pplVar4 == 0) {
        func_0x00010b13ae9c();
        (**(code **)(extraout_x8_11 + 0x20))(aplStack_2e8);
        if ((aplStack_2e8[0] == (long *)0x0) ||
           ((**(code **)(*aplStack_2e8[0] + 0x10))(), aplStack_2e8[0] == (long *)0x0)) {
          func_0x00010b13afc4();
          func_0x00010b13ae9c();
          (**(code **)(extraout_x8_12 + 0x18))(&plStack_320);
          func_0x00010b13ad9c(aplStack_2e8);
          func_0x00010b13b020();
          func_0x00010b13aec8(pplStack_2d8);
          *(long *)(extraout_x8_13 + 0x28) = lStack_318;
          *(long **)(extraout_x8_13 + 0x20) = plStack_320;
          lVar7 = extraout_x8_13;
          if (lStack_318 != 0) {
            do {
              func_0x00010b13acc4();
              lVar7 = extraout_x8_14;
            } while (extraout_w11_00 != 0);
          }
          pplVar3 = pplStack_2d8;
          *(undefined8 *)(lVar7 + 0x30) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          pplStack_2d8 = (long **)0x0;
          func_0x00010b13a0f4(aplStack_2e8);
          *extraout_x8_08 = pplVar3 + 3;
          extraout_x8_08[1] = pplVar3;
          func_0x00010b13ad6c();
          func_0x000107c27f10();
        }
        else {
          pplVar6 = &plStack_310;
          FUN_10b138ad8(pplVar6,aplStack_2e8);
          extraout_x8_08[1] = uStack_308;
          *extraout_x8_08 = plStack_310;
          func_0x00010b13ad6c();
          func_0x00010b13afc4();
        }
      }
      else {
        *extraout_x8_08 = 0;
        extraout_x8_08[1] = 0;
        pplVar6 = pplVar4;
      }
      func_0x00010b13ae58();
      goto LAB_10b138ed8;
    }
  }
  pplVar3 = (long **)pcVar5;
  pplVar6 = pplVar4;
  *extraout_x8_08 = 0;
  extraout_x8_08[1] = 0;
LAB_10b138ed8:
  func_0x00010b13abd4(uStack_298);
  if ((bool)uVar1) {
    return pplVar6;
  }
  ___stack_chk_fail();
  func_0x00010b13afc4();
  func_0x00010b13ae58();
  func_0x00010b13ac84();
  func_0x00010b13adb0();
  FUN_10b125790();
  pplVar3[2] = pplVar6[2];
  return pplVar3;
}



/* Entry: 10b138ad8; end: 10b138b57;  */

long ** FUN_10b138ad8(long *param_1,long **param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x9;
  int extraout_w11;
  long lVar5;
  long *plVar6;
  long *plStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [16];
  long *aplStack_208 [2];
  long **pplStack_1f8;
  undefined8 uStack_1b8;
  code **ppcStack_1b0;
  long *plStack_1a8;
  long **pplStack_1a0;
  long **pplStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long *plStack_180;
  long *plStack_178;
  long **pplStack_170;
  undefined1 auStack_168 [32];
  long *aplStack_148 [2];
  code *pcStack_138;
  undefined **ppuStack_130;
  long **pplStack_128;
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  long *aplStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010b13ac00();
  uStack_28 = extraout_x8;
  func_0x00010b13ad9c(aplStack_40);
  *(undefined8 *)(lStack_30 + 0x10) = 0;
  func_0x00010b13b020();
  *extraout_x8_00 = extraout_x9 + 0x10;
  extraout_x8_00[1] = 0;
  plVar6 = *param_2;
  *param_2 = (long *)0x0;
  param_2[1] = (long *)0x0;
  func_0x00010b13acd4(plVar6);
  lVar5 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  pplVar2 = aplStack_40;
  func_0x00010b13a0f4();
  func_0x00010b13abd4(uStack_28);
  if ((bool)in_ZR) {
    return pplVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_58 = FUN_10b138b58;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010b13adb0();
  func_0x00010b13ac00();
  lVar5 = *pplVar2[3];
  uStack_98 = extraout_x8_01;
  FUN_10b126f8c(&pcStack_138,0x10005);
  FUN_10b12983c(auStack_110,*(undefined4 *)(param_2 + 0x62));
  func_0x00010b12aca4(auStack_e8,*(undefined4 *)((long)param_2 + 0x314));
  func_0x00010b126fec(auStack_c0,0);
  func_0x00010b120648(&plStack_180,&pcStack_138,4);
  func_0x00010b13af14(lVar5,0x34,&plStack_180);
  FUN_10b120998(&plStack_180);
  lVar5 = 0x88;
  do {
    pplVar2 = (long **)((long)&pcStack_138 + lVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar5 = lVar5 + -0x28;
  } while (lVar5 != -0x18);
  uVar1 = *(char *)(param_2 + 0x6e) == '\x01';
  plVar6 = (long *)0xffffffffffffffe8;
  if ((bool)uVar1) {
    func_0x00010b1ff218(aplStack_148,param_2[3][6],*(undefined4 *)(param_2 + 0x62));
    func_0x00010b13a12c(&plStack_180,param_2[1],param_2[2]);
    pplStack_170 = param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_168,param_1);
    pcStack_138 = FUN_10b13a6c8;
    ppuStack_130 = &PTR_FUN_110cbe020;
    param_2 = (long **)0x30;
    __Znwm();
    param_2[1] = plStack_178;
    *param_2 = plStack_180;
    plStack_180 = (long *)0x0;
    plStack_178 = (long *)0x0;
    param_2[2] = (long *)pplStack_170;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (param_2 + 3,auStack_168);
    pplStack_128 = param_2;
    FUN_10b20a5ac(aplStack_148[0],&pcStack_138);
    func_0x00010b13aeb8();
    FUN_10b139414(&plStack_180);
    pplVar2 = aplStack_148;
    func_0x00010b1298c4();
    plVar6 = aplStack_148[0];
  }
  func_0x00010b13abd4(uStack_98);
  if ((bool)uVar1) {
    return pplVar2;
  }
  ___stack_chk_fail();
  func_0x00010b13aeb8();
  FUN_10b139414(&plStack_180);
  pplVar3 = aplStack_148;
  func_0x00010b1298c4();
  func_0x00010b13ac84();
  pplVar4 = &plStack_240;
  pcStack_188 = FUN_10b138d90;
  ppcStack_1b0 = &pcStack_138;
  plStack_1a8 = plVar6;
  pplStack_1a0 = param_2;
  pplStack_198 = pplVar2;
  ppuStack_190 = &puStack_60;
  func_0x00010b13ac00();
  uVar1 = *(char *)(pplVar3 + 0x69) == '\x01';
  pplVar2 = pplVar3;
  uStack_1b8 = extraout_x8_03;
  if ((bool)uVar1) {
    pplVar2 = pplVar3 + 0x66;
    func_0x000107c27cf4(pplVar2,"");
    param_2 = pplVar3;
    if ((int)pplVar2 == 0) {
      lVar5 = pplVar3[3][8];
      FUN_10b202630(aplStack_208,pplVar3 + 0x66);
      func_0x00010b1f70f0(auStack_218,lVar5,aplStack_208);
      pplVar2 = aplStack_208;
      func_0x00010b121e00();
      func_0x00010b13ae9c();
      (**(code **)(extraout_x8_04 + 0x10))();
      if ((int)pplVar2 == 0) {
        func_0x00010b13ae9c();
        (**(code **)(extraout_x8_05 + 0x20))(aplStack_208);
        if ((aplStack_208[0] == (long *)0x0) ||
           ((**(code **)(*aplStack_208[0] + 0x10))(), aplStack_208[0] == (long *)0x0)) {
          func_0x00010b13afc4();
          func_0x00010b13ae9c();
          (**(code **)(extraout_x8_06 + 0x18))(&plStack_240);
          func_0x00010b13ad9c(aplStack_208);
          func_0x00010b13b020();
          func_0x00010b13aec8(pplStack_1f8);
          *(long *)(extraout_x8_07 + 0x28) = lStack_238;
          *(long **)(extraout_x8_07 + 0x20) = plStack_240;
          lVar5 = extraout_x8_07;
          if (lStack_238 != 0) {
            do {
              func_0x00010b13acc4();
              lVar5 = extraout_x8_08;
            } while (extraout_w11 != 0);
          }
          pplVar3 = pplStack_1f8;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          pplStack_1f8 = (long **)0x0;
          func_0x00010b13a0f4(aplStack_208);
          *extraout_x8_02 = pplVar3 + 3;
          extraout_x8_02[1] = pplVar3;
          func_0x00010b13ad6c();
          func_0x000107c27f10();
        }
        else {
          pplVar4 = &plStack_230;
          FUN_10b138ad8(pplVar4,aplStack_208);
          extraout_x8_02[1] = uStack_228;
          *extraout_x8_02 = plStack_230;
          func_0x00010b13ad6c();
          func_0x00010b13afc4();
        }
      }
      else {
        *extraout_x8_02 = 0;
        extraout_x8_02[1] = 0;
        pplVar4 = pplVar2;
      }
      func_0x00010b13ae58();
      goto LAB_10b138ed8;
    }
  }
  pplVar3 = param_2;
  pplVar4 = pplVar2;
  *extraout_x8_02 = 0;
  extraout_x8_02[1] = 0;
LAB_10b138ed8:
  func_0x00010b13abd4(uStack_1b8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b13afc4();
    func_0x00010b13ae58();
    func_0x00010b13ac84();
    func_0x00010b13adb0();
    FUN_10b125790();
    pplVar3[2] = pplVar4[2];
    return pplVar3;
  }
  return pplVar4;
}



/* Entry: 10b138b58; end: 10b138d8f;  */

long ** FUN_10b138b58(long param_1)

{
  undefined1 uVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  int extraout_w11;
  long **unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1c8 [16];
  long *aplStack_1b8 [2];
  long **pplStack_1a8;
  undefined8 uStack_168;
  code **ppcStack_160;
  long *plStack_158;
  long **pplStack_150;
  long **pplStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 auStack_118 [32];
  long *aplStack_f8 [2];
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long **pplStack_d8;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  func_0x00010b13adb0();
  func_0x00010b13ac00();
  uVar6 = **(undefined8 **)(param_1 + 0x18);
  uStack_48 = extraout_x8;
  FUN_10b126f8c(&pcStack_e8,0x10005);
  FUN_10b12983c(auStack_c0,*(undefined4 *)(unaff_x20 + 0x62));
  func_0x00010b12aca4(auStack_98,*(undefined4 *)((long)unaff_x20 + 0x314));
  func_0x00010b126fec(auStack_70,0);
  func_0x00010b120648(&plStack_130,&pcStack_e8,4);
  func_0x00010b13af14(uVar6,0x34,&plStack_130);
  FUN_10b120998(&plStack_130);
  lVar7 = 0x88;
  do {
    pplVar2 = (long **)((long)&pcStack_e8 + lVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar7 = lVar7 + -0x28;
  } while (lVar7 != -0x18);
  uVar1 = *(char *)(unaff_x20 + 0x6e) == '\x01';
  pplVar3 = unaff_x20;
  plVar8 = (long *)0xffffffffffffffe8;
  if ((bool)uVar1) {
    func_0x00010b1ff218(aplStack_f8,unaff_x20[3][6],*(undefined4 *)(unaff_x20 + 0x62));
    func_0x00010b13a12c(&plStack_130,unaff_x20[1],unaff_x20[2]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_118);
    pcStack_e8 = FUN_10b13a6c8;
    ppuStack_e0 = &PTR_FUN_110cbe020;
    pplVar3 = (long **)0x30;
    __Znwm();
    pplVar3[1] = plStack_128;
    *pplVar3 = plStack_130;
    plStack_130 = (long *)0x0;
    plStack_128 = (long *)0x0;
    pplVar3[2] = (long *)unaff_x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (pplVar3 + 3,auStack_118);
    pplStack_d8 = pplVar3;
    FUN_10b20a5ac(aplStack_f8[0],&pcStack_e8);
    func_0x00010b13aeb8();
    FUN_10b139414(&plStack_130);
    pplVar2 = aplStack_f8;
    func_0x00010b1298c4();
    plVar8 = aplStack_f8[0];
  }
  func_0x00010b13abd4(uStack_48);
  if ((bool)uVar1) {
    return pplVar2;
  }
  ___stack_chk_fail();
  func_0x00010b13aeb8();
  FUN_10b139414(&plStack_130);
  pplVar4 = aplStack_f8;
  func_0x00010b1298c4();
  func_0x00010b13ac84();
  pplVar5 = &plStack_1f0;
  pcStack_138 = FUN_10b138d90;
  ppcStack_160 = &pcStack_e8;
  plStack_158 = plVar8;
  pplStack_150 = pplVar3;
  pplStack_148 = pplVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010b13ac00();
  uVar1 = *(char *)(pplVar4 + 0x69) == '\x01';
  pplVar2 = pplVar4;
  uStack_168 = extraout_x8_01;
  if ((bool)uVar1) {
    pplVar2 = pplVar4 + 0x66;
    func_0x000107c27cf4(pplVar2,"");
    pplVar3 = pplVar4;
    if ((int)pplVar2 == 0) {
      lVar7 = pplVar4[3][8];
      FUN_10b202630(aplStack_1b8,pplVar4 + 0x66);
      func_0x00010b1f70f0(auStack_1c8,lVar7,aplStack_1b8);
      pplVar2 = aplStack_1b8;
      func_0x00010b121e00();
      func_0x00010b13ae9c();
      (**(code **)(extraout_x8_02 + 0x10))();
      if ((int)pplVar2 == 0) {
        func_0x00010b13ae9c();
        (**(code **)(extraout_x8_03 + 0x20))(aplStack_1b8);
        if ((aplStack_1b8[0] == (long *)0x0) ||
           ((**(code **)(*aplStack_1b8[0] + 0x10))(), aplStack_1b8[0] == (long *)0x0)) {
          func_0x00010b13afc4();
          func_0x00010b13ae9c();
          (**(code **)(extraout_x8_04 + 0x18))(&plStack_1f0);
          func_0x00010b13ad9c(aplStack_1b8);
          func_0x00010b13b020();
          func_0x00010b13aec8(pplStack_1a8);
          *(long *)(extraout_x8_05 + 0x28) = lStack_1e8;
          *(long **)(extraout_x8_05 + 0x20) = plStack_1f0;
          lVar7 = extraout_x8_05;
          if (lStack_1e8 != 0) {
            do {
              func_0x00010b13acc4();
              lVar7 = extraout_x8_06;
            } while (extraout_w11 != 0);
          }
          pplVar4 = pplStack_1a8;
          *(undefined8 *)(lVar7 + 0x30) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          pplStack_1a8 = (long **)0x0;
          func_0x00010b13a0f4(aplStack_1b8);
          *extraout_x8_00 = (long)(pplVar4 + 3);
          extraout_x8_00[1] = (long)pplVar4;
          func_0x00010b13ad6c();
          func_0x000107c27f10();
        }
        else {
          pplVar5 = &plStack_1e0;
          FUN_10b138ad8(pplVar5,aplStack_1b8);
          extraout_x8_00[1] = lStack_1d8;
          *extraout_x8_00 = (long)plStack_1e0;
          func_0x00010b13ad6c();
          func_0x00010b13afc4();
        }
      }
      else {
        *extraout_x8_00 = 0;
        extraout_x8_00[1] = 0;
        pplVar5 = pplVar2;
      }
      func_0x00010b13ae58();
      goto LAB_10b138ed8;
    }
  }
  pplVar4 = pplVar3;
  pplVar5 = pplVar2;
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
LAB_10b138ed8:
  func_0x00010b13abd4(uStack_168);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b13afc4();
    func_0x00010b13ae58();
    func_0x00010b13ac84();
    func_0x00010b13adb0();
    FUN_10b125790();
    pplVar4[2] = pplVar5[2];
    return pplVar4;
  }
  return pplVar5;
}



/* Entry: 10b138d90; end: 10b138f37;  */

long ** FUN_10b138d90(long *param_1,long **param_2)

{
  undefined1 uVar1;
  long **pplVar2;
  long **pplVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  int extraout_w11;
  long **unaff_x20;
  long lVar4;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 auStack_98 [16];
  long *aplStack_88 [2];
  long **pplStack_78;
  undefined8 uStack_38;
  
  pplVar3 = &plStack_c0;
  func_0x00010b13ac00();
  uVar1 = *(char *)(param_2 + 0x69) == '\x01';
  pplVar2 = param_2;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    pplVar2 = param_2 + 0x66;
    func_0x000107c27cf4(pplVar2,"");
    unaff_x20 = param_2;
    if ((int)pplVar2 == 0) {
      lVar4 = param_2[3][8];
      FUN_10b202630(aplStack_88,param_2 + 0x66);
      func_0x00010b1f70f0(auStack_98,lVar4,aplStack_88);
      pplVar2 = aplStack_88;
      func_0x00010b121e00();
      func_0x00010b13ae9c();
      (**(code **)(extraout_x8_00 + 0x10))();
      if ((int)pplVar2 == 0) {
        func_0x00010b13ae9c();
        (**(code **)(extraout_x8_01 + 0x20))(aplStack_88);
        if ((aplStack_88[0] == (long *)0x0) ||
           ((**(code **)(*aplStack_88[0] + 0x10))(), aplStack_88[0] == (long *)0x0)) {
          func_0x00010b13afc4();
          func_0x00010b13ae9c();
          (**(code **)(extraout_x8_02 + 0x18))(&plStack_c0);
          func_0x00010b13ad9c(aplStack_88);
          func_0x00010b13b020();
          func_0x00010b13aec8(pplStack_78);
          *(long *)(extraout_x8_03 + 0x28) = lStack_b8;
          *(long **)(extraout_x8_03 + 0x20) = plStack_c0;
          lVar4 = extraout_x8_03;
          if (lStack_b8 != 0) {
            do {
              func_0x00010b13acc4();
              lVar4 = extraout_x8_04;
            } while (extraout_w11 != 0);
          }
          param_2 = pplStack_78;
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(undefined8 *)(lVar4 + 0x38) = 0;
          pplStack_78 = (long **)0x0;
          func_0x00010b13a0f4(aplStack_88);
          *param_1 = (long)(param_2 + 3);
          param_1[1] = (long)param_2;
          func_0x00010b13ad6c();
          func_0x000107c27f10();
        }
        else {
          pplVar3 = &plStack_b0;
          FUN_10b138ad8(pplVar3,aplStack_88);
          param_1[1] = lStack_a8;
          *param_1 = (long)plStack_b0;
          func_0x00010b13ad6c();
          func_0x00010b13afc4();
        }
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
        pplVar3 = pplVar2;
      }
      func_0x00010b13ae58();
      goto LAB_10b138ed8;
    }
  }
  param_2 = unaff_x20;
  pplVar3 = pplVar2;
  *param_1 = 0;
  param_1[1] = 0;
LAB_10b138ed8:
  func_0x00010b13abd4(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b13afc4();
    func_0x00010b13ae58();
    func_0x00010b13ac84();
    func_0x00010b13adb0();
    FUN_10b125790();
    param_2[2] = pplVar3[2];
    return param_2;
  }
  return pplVar3;
}



/* Entry: 10b138f38; end: 10b138f87;  */

void FUN_10b138f38(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13adb0();
  FUN_10b125790();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b138f88; end: 10b1390c7;  */

void FUN_10b138f88(undefined1 *param_1,long param_2,long param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x21;
  undefined8 uVar2;
  long lVar3;
  undefined1 *unaff_x22;
  undefined1 auStack_120 [80];
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010b13ac00();
  uStack_38 = extraout_x8;
  if ((*(byte *)(param_2 + 0x370) & 1) == 0) {
LAB_10b139054:
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    in_ZR = *(char *)(param_2 + 0x350) == '\x01';
    if ((bool)in_ZR) {
      uVar2 = **(undefined8 **)(param_2 + 0x18);
      FUN_10b12983c(auStack_88,*(undefined4 *)(param_2 + 0x310));
      FUN_10b123d58(auStack_60,"message",7,&UNK_10f7302a4);
      func_0x00010b120648(auStack_a0,auStack_88,2);
      param_3 = 0x55;
      func_0x00010b13af14(uVar2,0x55,auStack_a0);
      FUN_10b120998(auStack_a0);
      lVar3 = 0x38;
      unaff_x22 = auStack_88;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x22 + lVar3);
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != -0x18);
      unaff_x21 = 0xffffffffffffffe8;
      in_ZR = true;
    }
    else if ((*(byte *)(param_2 + 0xc0) & 1) == 0) goto LAB_10b139054;
    func_0x00010b13aea8();
    param_4 = param_2 + 0x358;
    func_0x00010b13afb8();
  }
  func_0x00010b13abd4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b13ad00();
  FUN_10b120998();
  puVar1 = auStack_50;
  lVar3 = -0x50;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
    puVar1 = puVar1 + -0x28;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0);
  func_0x00010b13ac84();
  pcStack_a8 = FUN_10b1390c8;
  puStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  lStack_c0 = lVar3;
  puStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b13adb0();
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x40);
  FUN_10b202630(auStack_120,param_4);
  FUN_10b1f7064(0,uVar2,auStack_120,*(undefined4 *)(param_1 + 0x98));
  func_0x00010b13acf8();
  return;
}



/* Entry: 10b1390c8; end: 10b13912b;  */

void FUN_10b1390c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_80 [80];
  
  func_0x00010b13adb0();
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x40);
  FUN_10b202630(auStack_80,param_3);
  FUN_10b1f7064(uVar1,auStack_80,*(undefined4 *)(unaff_x19 + 0x98));
  func_0x00010b13acf8();
  return;
}



/* Entry: 10b13912c; end: 10b13921f;  */

void FUN_10b13912c(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  byte bStack_31;
  
  if ((((*(byte *)(param_2 + 0x370) & 1) == 0) || ((*(byte *)(param_2 + 0x2d0) & 1) != 0)) ||
     ((*(byte *)(param_2 + 0xc0) & 1) == 0)) {
    *param_1 = 0;
    param_1[0x18] = 0;
    return;
  }
  lVar4 = (long)*(char *)(param_2 + 0x36f);
  if (lVar4 < 0) {
    lVar2 = *(long *)(param_2 + 0x358);
    lVar4 = *(long *)(param_2 + 0x360);
  }
  else {
    lVar2 = param_2 + 0x358;
  }
  uVar3 = param_3[1];
  puVar1 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar1 = param_3;
  }
  FUN_10b206e3c(auStack_48,lVar2,lVar4,puVar1,uVar3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
  }
  if (uStack_40 != 0) {
    uVar3 = *(ulong *)(*(long *)(param_2 + 0x18) + 0x40);
    FUN_10b1f67d8(uVar3,auStack_48,param_2 + 0x38,0);
    if ((uVar3 & 1) != 0) {
      func_0x00010b13aea8();
      func_0x00010b13afb8();
      goto LAB_10b13920c;
    }
  }
  FUN_10b138b58(param_2,param_3);
  *param_1 = 0;
  param_1[0x18] = 0;
LAB_10b13920c:
  func_0x00010b13ad94();
  return;
}



/* Entry: 10b139220; end: 10b139413;  */

undefined8 ** FUN_10b139220(undefined8 **param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  ppuVar7 = param_1;
  func_0x00010b13ac00();
  uStack_38 = extraout_x8;
  if (((ulong)ppuVar7[0x6a] & 1) == 0) {
    ppuVar8 = (undefined8 **)*param_2;
    func_0x00010b13b02c();
    ppuVar7 = param_1;
    (*extraout_x8_00)();
    bVar6 = (int)ppuVar7 == 0;
    UNRECOVERED_JUMPTABLE = (code *)(*ppuVar8)[2];
    func_0x00010b13abd4(uStack_38);
    if (bVar6) {
LAB_10b139340:
                    /* WARNING: Could not recover jumptable at 0x00010b139350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return ppuVar8;
    }
  }
  else if (param_1[5] == (undefined8 *)0x0) {
    ppuVar8 = (undefined8 **)*param_2;
    UNRECOVERED_JUMPTABLE = (code *)(*ppuVar8)[2];
    func_0x00010b13abd4(extraout_x8);
    if ((bool)in_ZR) goto LAB_10b139340;
  }
  else {
    uVar3 = *param_2;
    lStack_98 = param_2[1];
    uStack_a0 = uVar3;
    if (lStack_98 != 0) {
      do {
        func_0x00010b13ac40();
      } while (extraout_w10 != 0);
    }
    FUN_10b123cb4(auStack_80,1);
    puStack_70[2] = 0;
    *puStack_70 = &PTR_FUN_110cbd860;
    puStack_70[1] = 0;
    pcStack_68 = FUN_10b13a60c;
    ppuStack_60 = &PTR_FUN_110cbe008;
    lStack_50 = lStack_98;
    if (lStack_98 == 0) {
      puStack_70[3] = &PTR_FUN_110cc5db8;
      puStack_70[4] = FUN_10b13a60c;
      puStack_70[5] = &PTR_FUN_110cbe008;
      puStack_70[6] = uVar3;
      puStack_70[7] = 0;
    }
    else {
      plVar1 = (long *)(lStack_98 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puStack_70[3] = &PTR_FUN_110cc5db8;
      puStack_70[4] = FUN_10b13a60c;
      puStack_70[5] = &PTR_FUN_110cbe008;
      puStack_70[6] = uVar3;
      puStack_70[7] = lStack_98;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_58 = uVar3;
    func_0x0001052a6df8(&uStack_58);
    puVar5 = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    puVar2 = puVar5 + 3;
    puStack_88 = puVar5;
    puStack_90 = puVar2;
    func_0x00010b123d28(auStack_80);
    func_0x0001052a6df8(&uStack_a0);
    puStack_a8 = puVar5;
    puStack_b0 = puVar2;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        func_0x00010b13ac40();
      } while (extraout_w10_00 != 0);
    }
    FUN_10b19d3a4();
    FUN_10b0fb81c(&puStack_b0);
    ppuVar7 = &puStack_90;
    FUN_10b1258e4(ppuVar7);
    func_0x00010b13abd4(uStack_38);
    if ((bool)in_ZR) {
      return ppuVar7;
    }
  }
  ___stack_chk_fail();
  func_0x00010b13ad00();
  FUN_10b0fb81c();
  ppuVar7 = &puStack_90;
  FUN_10b1258e4();
  func_0x00010b13ac84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7 + 3);
  func_0x000107c350ac();
  if (ppuVar7 != (undefined8 **)0x0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b139414; end: 10b13943b;  */

undefined8 FUN_10b139414(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b13943c; end: 10b139493;  */

byte FUN_10b13943c(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x2d0) & 1) == 0) && (*(char *)(param_1 + 0x90) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x70);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10b139494; end: 10b139a93;  */

void FUN_10b139494(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  long lVar10;
  undefined1 extraout_w10;
  undefined1 extraout_w10_00;
  int iVar11;
  undefined auStack_d0 [8];
  long *plStack_c8;
  char cStack_b8;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  byte bStack_68;
  undefined1 uStack_48;
  undefined auStack_40 [8];
  undefined *puStack_38;
  
  puVar8 = auStack_d0;
  puVar5 = (undefined8 *)0x220;
  __Znwm();
  *puVar5 = FUN_10b13a864;
  puVar5[1] = FUN_10b13ab58;
  puVar5[0x42] = param_2;
  func_0x00010b139e74(puVar5 + 2);
  FUN_10b139a94(param_1,puVar5 + 2);
  if (((*(byte *)(param_2 + 0x5a) & 1) == 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
    if ((*(byte *)(param_2 + 0x6a) & 1) == 0) {
      (**(code **)(*param_2 + 0x98))(auStack_d0,param_2);
      uVar4 = cStack_b8 == '\x01';
      if (!(bool)uVar4) {
        func_0x00010b13af8c();
        func_0x00010b13ada4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 0x32);
        puVar8 = &UNK_10f7302cb;
        func_0x00010b139e90(puVar5 + 0x1f);
        puStack_78 = (undefined8 *)puVar5[0x33];
        puStack_80 = (undefined8 *)puVar5[0x32];
        uVar9 = puVar5[0x34];
        puVar5[0x33] = 0;
        puVar5[0x34] = 0;
        puVar5[0x32] = 0;
        func_0x00010b13abe8(uVar9);
        uVar4 = *(char *)(puVar5 + 0x22) == '\x01';
        if ((bool)uVar4) {
          uVar9 = puVar5[0x1f];
          *(undefined8 *)(extraout_x8_00 + 0x28) = puVar5[0x20];
          *(undefined8 *)(extraout_x8_00 + 0x20) = uVar9;
          *(undefined8 *)(extraout_x8_00 + 0x30) = puVar5[0x21];
          puVar5[0x20] = 0;
          puVar5[0x21] = 0;
          puVar5[0x1f] = 0;
          uStack_48 = 1;
        }
        func_0x00010b13abac();
        if (extraout_w9_00 != 0) {
          func_0x00010b13ab8c();
        }
        func_0x00010b13ac10();
        func_0x00010b13ac8c();
        func_0x00010b13ac9c();
        func_0x000107c279a4(puVar5 + 0x1f);
        puVar7 = puVar5 + 0x32;
        goto LAB_10b1395e8;
      }
      FUN_10b13a7d0(puVar5 + 7);
      func_0x00010b13af8c();
    }
    else {
      if (param_2[5] == 0) {
        puVar7 = puVar5 + 0x35;
        func_0x00010b13aca4();
        puVar6 = puVar5 + 0x23;
        puVar8 = &UNK_10f7302e3;
        func_0x00010b139eac(puVar6);
        puStack_78 = (undefined8 *)puVar5[0x36];
        puStack_80 = (undefined8 *)*puVar7;
        func_0x00010b13b038(puVar5[0x37]);
        func_0x00010b13abe8();
        uVar4 = *(char *)(puVar5 + 0x26) == '\x01';
        if ((bool)uVar4) {
          func_0x00010b13ac50();
          uStack_48 = extraout_w10;
        }
        func_0x00010b13abac();
        if (extraout_w9_01 != 0) {
          func_0x00010b13ab8c();
        }
        func_0x00010b13ac10();
        func_0x00010b13ac8c();
        func_0x00010b13ac9c();
        goto LAB_10b1395e0;
      }
      func_0x00010b13a12c(puVar5 + 0x3e,param_2[1],param_2[2]);
      puVar7 = puVar5 + 0x40;
      puVar8 = (undefined *)param_2[0x58];
      FUN_10b1a2b7c(puVar7,param_2[5]);
      puVar6 = puVar7;
      func_0x000105c417a8();
      if (((ulong)puVar6 & 1) == 0) {
        *(undefined1 *)(puVar5 + 0x43) = 0;
        puStack_80 = puVar5;
        puStack_78 = puVar7;
        func_0x000105c41834(auStack_d0,puVar7,&puStack_80);
        if (plStack_c8 == (long *)0x0) {
          return;
        }
        plVar1 = plStack_c8 + 1;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 != 0) {
          return;
        }
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
        return;
      }
      func_0x000105c40888(puVar5 + 0x12,puVar7);
      func_0x0001052a55c0(puVar7);
      if (*(char *)(puVar5 + 0x1a) == '\x01') {
        func_0x00010b13af80();
        func_0x00010b13ac10();
        func_0x00010b13ac8c();
LAB_10b139860:
        bVar3 = false;
        iVar11 = 3;
      }
      else {
        if (*(char *)(puVar5[0x42] + 0x2d0) == '\x01') {
          func_0x00010b13ada4();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 0x38);
          puVar7 = puVar5 + 0x27;
          puVar8 = &UNK_10f7302b5;
          func_0x0001078d3f18(puVar7);
          puStack_78 = (undefined8 *)puVar5[0x39];
          puStack_80 = (undefined8 *)puVar5[0x38];
          uVar9 = puVar5[0x3a];
          puVar5[0x39] = 0;
          puVar5[0x3a] = 0;
          puVar5[0x38] = 0;
          func_0x00010b13abe8(uVar9);
          if (*(char *)(puVar5 + 0x2a) == '\x01') {
            uVar9 = *puVar7;
            *(undefined8 *)(extraout_x8_01 + 0x28) = puVar5[0x28];
            *(undefined8 *)(extraout_x8_01 + 0x20) = uVar9;
            *(undefined8 *)(extraout_x8_01 + 0x30) = puVar5[0x29];
            func_0x00010b13b038();
            uStack_48 = 1;
          }
          func_0x00010b13abac();
          if (extraout_w9_02 != 0) {
            func_0x00010b13ab8c();
          }
          func_0x00010b13ac10();
          func_0x00010b13ac8c();
          func_0x00010b13ac9c();
          func_0x000107c279a4(puVar7);
          func_0x00010b13ae84();
          goto LAB_10b139860;
        }
        iVar11 = 0;
        bVar3 = true;
      }
      func_0x00010b13ae40();
      if (bVar3) {
        func_0x00010b13af74();
        func_0x00010b13ae8c();
        func_0x00010b13acf8();
        if (bStack_68 == 1) {
          FUN_10b138190(puVar5[0x42]);
          func_0x00010b13b014();
          iVar11 = 3;
        }
        else {
          iVar11 = 0;
        }
        func_0x00010b13aeb0();
        if ((bStack_68 & 1) == 0) {
          func_0x00010b13aca4();
          func_0x00010b13ae20();
          puStack_78 = (undefined8 *)puVar5[0x3c];
          puStack_80 = (undefined8 *)puVar5[0x3b];
          func_0x00010b13b038(puVar5[0x3d]);
          func_0x00010b13abe8();
          if (*(char *)(puVar5 + 0x2e) == '\x01') {
            func_0x00010b13ac50();
            uStack_48 = extraout_w10_00;
          }
          func_0x00010b13abac();
          if (extraout_w9_03 != 0) {
            func_0x00010b13ab8c();
          }
          func_0x00010b13ac10();
          func_0x00010b13ac8c();
          func_0x00010b13ac9c();
          func_0x00010b13aeec();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 0x3b);
          iVar11 = 3;
        }
      }
      func_0x00010b13ad78();
      uVar4 = 1;
      if (iVar11 != 3) goto LAB_10b13962c;
    }
  }
  else {
    puVar7 = puVar5 + 0x2f;
    func_0x00010b13aca4();
    puVar8 = &UNK_10f7302b5;
    func_0x0001078d3f18(puVar5 + 0x1b);
    puStack_78 = (undefined8 *)puVar5[0x30];
    puStack_80 = (undefined8 *)*puVar7;
    func_0x00010b13b038(puVar5[0x31]);
    func_0x00010b13abe8();
    uVar4 = *(char *)(puVar5 + 0x1e) == '\x01';
    if ((bool)uVar4) {
      uVar9 = puVar5[0x1b];
      *(undefined8 *)(extraout_x8 + 0x28) = puVar5[0x1c];
      *(undefined8 *)(extraout_x8 + 0x20) = uVar9;
      *(undefined8 *)(extraout_x8 + 0x30) = puVar5[0x1d];
      puVar5[0x1c] = 0;
      puVar5[0x1d] = 0;
      puVar5[0x1b] = 0;
      uStack_48 = 1;
    }
    func_0x00010b13abac();
    if (extraout_w9 != 0) {
      func_0x00010b13ab8c();
    }
    func_0x00010b13ac10();
    func_0x00010b13ac8c();
    func_0x00010b13ac9c();
    puVar6 = puVar5 + 0x1b;
LAB_10b1395e0:
    func_0x000107c279a4(puVar6);
LAB_10b1395e8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
  }
  func_0x00010b13ae68();
  if ((bool)uVar4) {
    puStack_38 = puVar8;
    FUN_10b0fb514(puVar5 + 2,&puStack_38);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_40);
    puStack_38 = auStack_40;
    FUN_10b0fb468(puVar5 + 2,&puStack_38);
    __ZNSt13exception_ptrD1Ev(auStack_40);
  }
LAB_10b13962c:
  func_0x00010b13ae60();
  func_0x00010b13afb0();
  return;
}



/* Entry: 10b139a94; end: 10b139aab;  */

void FUN_10b139a94(void)

{
  FUN_10b0fb070();
  return;
}



/* Entry: 10b139aac; end: 10b139af3;  */

void FUN_10b139aac(long param_1)

{
  undefined1 auStack_28 [8];
  
  __ZSt17current_exceptionv(auStack_28);
  func_0x00010b13a818(param_1 + 0x28,&UNK_10ddb182d,auStack_28);
  func_0x00010b13aee4();
  return;
}



/* Entry: 10b139af4; end: 10b139c53;  */

undefined1 * FUN_10b139af4(undefined1 *param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  ulong uVar3;
  undefined1 *extraout_x8_00;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010b13ac00();
  puVar2 = param_1;
  lStack_38 = extraout_x8;
  if (((param_1[0x2d0] & 1) == 0) && (lVar4 = *(long *)(param_1 + 0x2b0), lVar4 != 0)) {
    uVar7 = 0;
    puVar5 = (undefined1 *)0x3;
    uVar3 = 0x100000000;
    switch(*(undefined4 *)(lVar4 + 0x8c)) {
    case 0:
      if ((*(byte *)(lVar4 + 0x10) >> 4 & 1) != 0) {
        puVar5 = (undefined1 *)(ulong)*(uint *)(*(long *)(lVar4 + 0x70) + 0x70);
        FUN_10b23fd2c();
        uVar7 = (uint)((ulong)puVar5 >> 8) & 0xffffff;
        uVar3 = 0;
        puVar2 = puVar5;
        if ((ulong)puVar5 >> 0x20 != 0) {
          uVar6 = **(undefined8 **)(param_1 + 0x18);
          FUN_10b123d58(auStack_60,"message",7,&UNK_10f73030b);
          func_0x00010b120648(auStack_78,auStack_60,1);
          func_0x00010b13af14(uVar6,0x55,auStack_78);
          puVar2 = auStack_78;
          FUN_10b120998();
          func_0x00010b13af94(auStack_60);
          uVar3 = 0x100000000;
        }
        break;
      }
      goto LAB_10b139b5c;
    case 2:
      goto code_r0x00010b139b60;
    case 3:
      uVar7 = 0;
      puVar5 = (undefined1 *)0x1;
      break;
    case 4:
      uVar7 = 0;
      puVar5 = (undefined1 *)0x2;
    }
  }
  else {
LAB_10b139b5c:
    uVar3 = 0;
code_r0x00010b139b60:
    puVar5 = (undefined1 *)0x0;
    uVar7 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined1 *)(uVar3 | ((uint)puVar5 & 0xff | uVar7 << 8));
  }
  ___stack_chk_fail();
  func_0x00010b13ad54();
  FUN_10b120998();
  func_0x00010b13af94(auStack_60);
  func_0x00010b13ac84();
  if (((puVar2[0x2d0] != '\x01') && (lVar4 = *(long *)(puVar2 + 0x2b0), lVar4 != 0)) &&
     (*(int *)(lVar4 + 0x20) != 0)) {
    uVar3 = *(ulong *)(lVar4 + 0x18);
    puVar1 = (ulong *)(lVar4 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + 7);
    }
    puVar2 = extraout_x8_00;
    func_0x000107c60c94(extraout_x8_00,*(ulong *)(*puVar1 + 0x48) & 0xfffffffffffffffc);
    puVar2[0x18] = 1;
    return puVar2;
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[0x18] = 0;
  return puVar2;
}



/* Entry: 10b139c54; end: 10b139c9f;  */

void FUN_10b139c54(undefined1 *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (((*(char *)(param_2 + 0x2d0) != '\x01') && (lVar2 = *(long *)(param_2 + 0x2b0), lVar2 != 0))
     && (*(int *)(lVar2 + 0x20) != 0)) {
    uVar3 = *(ulong *)(lVar2 + 0x18);
    puVar1 = (ulong *)(lVar2 + 0x18);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + 7);
    }
    func_0x000107c60c94(param_1,*(ulong *)(*puVar1 + 0x48) & 0xfffffffffffffffc);
    param_1[0x18] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10b139ca0; end: 10b139d6f;  */

undefined4 FUN_10b139ca0(long param_1)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_28;
  
  if ((((*(byte *)(param_1 + 0x2d0) & 1) == 0) && (lVar5 = *(long *)(param_1 + 0x2b8), lVar5 != 0))
     && ((*(byte *)(lVar5 + 0x10) & 1) != 0)) {
    uStack_58 = 0;
    uStack_60 = 0;
    ppuStack_68 = &PTR_FUN_110cfd560;
    uStack_28 = 0;
    puStack_50 = &DAT_11383d918;
    lStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    puVar2 = (undefined8 *)(*(ulong *)(*(long *)(lVar5 + 0x18) + 0x10) & 0xfffffffffffffffc);
    lVar5 = (long)*(char *)((long)puVar2 + 0x17);
    puVar3 = puVar2;
    if (lVar5 < 0) {
      puVar3 = (undefined8 *)*puVar2;
      lVar5 = puVar2[1];
    }
    pppuVar1 = &ppuStack_68;
    func_0x000107c30344(pppuVar1,puVar3,lVar5);
    if ((((ulong)pppuVar1 & 1) == 0) || ((uStack_58 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      if (*(char *)(lStack_48 + 0x10) == '\0') {
        uVar4 = 2;
      }
    }
    FUN_10b523f08(&ppuStack_68);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10b139d70; end: 10b139e17;  */

void FUN_10b139d70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(long *)(param_1 + 0x6b8) != 0) {
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    uStack_30 = param_3[2];
    FUN_10b2046a4(*(long *)(param_1 + 0x6b8),*(undefined4 *)(param_1 + 0x310),param_2,&uStack_40);
    if (*(char *)(param_3 + 2) == '\x01') {
      *(undefined1 *)(param_1 + 0x352) = 1;
    }
  }
  return;
}



/* Entry: 10b139e18; end: 10b139e43;  */

undefined1 * FUN_10b139e18(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x78] = 0;
  FUN_10b139e44();
  return param_1;
}



/* Entry: 10b139e44; end: 10b139e57;  */

void FUN_10b139e44(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_10b0fafd4();
    *(undefined1 *)(param_1 + 0x78) = 1;
    return;
  }
  return;
}



/* Entry: 10b139e58; end: 10b139ec7;  */

void FUN_10b139e58(long param_1)

{
  FUN_10b0fafd4();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 10b139ec8; end: 10b139eef;  */

long FUN_10b139ec8(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  FUN_10b139ef0(param_1 + 0x28);
  func_0x00010b0fb9c8();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b0fb3dc(unaff_x19,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4f84(unaff_x19 + 0x18);
  func_0x0001052a4f84((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 10b139ef0; end: 10b139f37;  */

void FUN_10b139ef0(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010b139f10();
  }
  return;
}



/* Entry: 10b139f38; end: 10b139f5b;  */

undefined8 FUN_10b139f38(undefined8 param_1)

{
  FUN_10b139f5c(param_1,0);
  return param_1;
}



/* Entry: 10b139f5c; end: 10b139f83;  */

void FUN_10b139f5c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10b139f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b139f84; end: 10b139fe3;  */

long FUN_10b139f84(long param_1)

{
  func_0x00010b139fa8(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b139fe4; end: 10b13a07b;  */

long FUN_10b139fe4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(param_1,&lStack_40);
  lVar2 = *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  func_0x00010b13aee4();
  if (lVar2 == 0) {
    func_0x00010b13ae08();
    return param_1 + 0x90;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_50,(long *)(param_1 + 0x10));
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b13a064);
  (*pcVar1)();
}



/* Entry: 10b13a07c; end: 10b13a0a3;  */

long FUN_10b13a07c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b13a0a4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b13a0a4; end: 10b13a0bf;  */

void FUN_10b13a0a4(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cbdf00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b13a0c0; end: 10b13a0c3;  */

void FUN_10b13a0c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdf00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b13a0c4; end: 10b13a0d7;  */

void FUN_10b13a0c4(void)

{
  func_0x00010b13a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b13a0d8; end: 10b13a103;  */

void FUN_10b13a0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b13b004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b13a104; end: 10b13a167;  */

long FUN_10b13a104(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b13a168; end: 10b13a16b;  */

void FUN_10b13a168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdf50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b13a16c; end: 10b13a17f;  */

void FUN_10b13a16c(void)

{
  FUN_10b13a2d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b13a180; end: 10b13a18b;  */

void FUN_10b13a180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b13b004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b13a18c; end: 10b13a19f;  */

void FUN_10b13a18c(void)

{
  FUN_10b13a26c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b13a1a0; end: 10b13a1eb;  */

void FUN_10b13a1a0(void)

{
  long unaff_x19;
  long alStack_30 [2];
  
  func_0x00010b13ad00();
  func_0x00010b13a298();
  if (alStack_30[0] != 0) {
    FUN_10b1a1614(*(undefined8 *)(alStack_30[0] + 0x28),*(undefined8 *)(unaff_x19 + 0x18));
  }
  func_0x00010b12b94c(alStack_30);
  return;
}



/* Entry: 10b13a1ec; end: 10b13a26b;  */

void FUN_10b13a1ec(long param_1,undefined8 param_2)

{
  undefined1 auStack_c0 [128];
  long alStack_40 [2];
  
  func_0x00010b13a298(alStack_40,param_1 + 8);
  if (alStack_40[0] != 0) {
    FUN_10b123790(auStack_c0,param_2);
    func_0x00010b13ad0c();
    func_0x00010b13ae18();
  }
  func_0x00010b12b94c(alStack_40);
  return;
}



/* Entry: 10b13a26c; end: 10b13a2d3;  */

undefined8 * FUN_10b13a26c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbdfa0;
  FUN_10b12b928(param_1 + 1);
  return param_1;
}



/* Entry: 10b13a2d4; end: 10b13a2e3;  */

void FUN_10b13a2d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbdf50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b13a2e4; end: 10b13a4f7;  */

void FUN_10b13a2e4(ulong *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  plVar7 = (long *)param_1[2];
  lVar6 = *plVar7;
  if (*(char *)(lVar6 + 0x2d0) == '\x01') {
    func_0x00010b13ae10(param_1,&UNK_10f730340);
    func_0x00010b13b02c();
    func_0x00010b13ac70();
  }
  else {
    if ((*(long *)(plVar7[1] + 0x380) != 0) && (func_0x00010b13afcc(), (char)param_1[8] == '\x01'))
    {
      func_0x00010b13afcc(plVar7[1]);
      plVar4 = (long *)*param_1;
      FUN_10b138154(plVar4,param_1[1]);
      if (((ulong)plVar4 & 1) == 0) {
        func_0x00010b13afcc(plVar7[1]);
        lStack_48 = *plVar4;
        if (lStack_48 == 0) {
          lStack_48 = 0;
        }
        else {
          func_0x00010b13afa4();
        }
        lStack_50 = plVar7[5];
        lVar1 = plVar7[6];
        if (0 < lStack_50 || lVar1 != lStack_48) {
          lStack_48 = lStack_48 - lStack_50;
          if (lVar1 <= lStack_48) {
            lStack_48 = lVar1;
          }
          plVar7[6] = lStack_48;
          if (lStack_48 < 1) {
            func_0x00010b13ae10();
            func_0x00010b13b02c();
            func_0x00010b13ac70();
            goto LAB_10b13a374;
          }
        }
        plVar5 = (long *)plVar7[3];
        lStack_48 = lStack_48 + lStack_50;
        lStack_38 = plVar4[1];
        plStack_40 = (long *)*plVar4;
        if (plVar4[1] != 0) {
          plVar4 = (long *)(plVar4[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (**(code **)(*plVar5 + 0x10))(plVar5,&lStack_50);
        func_0x000107c27d78(&plStack_40);
        func_0x00010b13ad4c();
        FUN_10b138854(&lStack_50,plVar7[1] + 0x670);
        if ((plStack_40 != (long *)0x0) && (*plStack_40 != 0)) {
          FUN_10b20a8d4(*plStack_40,plVar7[5],plVar7[6] + plVar7[5]);
        }
        func_0x00010b13ae08();
        if (*(long *)(lVar6 + 0x6b8) == 0) {
          return;
        }
        lStack_50 = plVar7[5];
        lStack_48 = plVar7[6] + lStack_50;
        plStack_40 = (long *)CONCAT71(plStack_40._1_7_,1);
        if ((*(byte *)(lVar6 + 0x730) & 1) == 0) {
          bVar3 = *(int *)(lVar6 + 0x5f8) == 1;
        }
        else {
          bVar3 = false;
        }
        FUN_10b204764(*(long *)(lVar6 + 0x6b8),*(undefined4 *)(lVar6 + 0x310),
                      *(undefined4 *)(lVar6 + 0x728),&lStack_50,*(undefined1 *)(lVar6 + 0x668),bVar3
                     );
        return;
      }
    }
    func_0x00010b13ae10();
    func_0x00010b13b02c();
    func_0x00010b13ac70();
  }
LAB_10b13a374:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_50);
  return;
}



/* Entry: 10b13a4f8; end: 10b13a517;  */

void FUN_10b13a4f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b13871c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b13a518; end: 10b13a51b;  */

void FUN_10b13a518(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b13a51c; end: 10b13a5b7;  */

void FUN_10b13a51c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_80 [80];
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = *puVar3;
  FUN_10b202630(auStack_80,puVar3 + 2);
  uVar1 = *(undefined4 *)(puVar3 + 5);
  uStack_98 = *(undefined8 *)((long)puVar3 + 0x34);
  uStack_a0 = *(undefined8 *)((long)puVar3 + 0x2c);
  uStack_90 = *(undefined4 *)((long)puVar3 + 0x3c);
  puStack_b8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010b13afe4(&puStack_b8);
  FUN_10b1f7590(uVar2,auStack_80,uVar1,&uStack_a0,&puStack_b8);
  FUN_10b139f84(&puStack_b8);
  func_0x00010b121e00(auStack_80);
  return;
}



/* Entry: 10b13a5b8; end: 10b13a5d7;  */

void FUN_10b13a5b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b138f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b13a5d8; end: 10b13a5db;  */

void FUN_10b13a5d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b13a5dc; end: 10b13a60b;  */

void FUN_10b13a5dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010b139fa8(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10b13a60c; end: 10b13a68b;  */

void FUN_10b13a60c(uint *param_1,long param_2)

{
  uint auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  auStack_48[0] = auStack_48[0] & 0xffffff00;
  uStack_28 = (byte)param_1[8] == 1;
  if ((bool)uStack_28) {
    auStack_48[0] = *param_1;
    uStack_38 = *(undefined8 *)(param_1 + 4);
    uStack_40 = *(undefined8 *)(param_1 + 2);
    uStack_30 = *(undefined8 *)(param_1 + 6);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(*(long **)(param_2 + 0x10),(byte)param_1[8] ^ 1)
  ;
  FUN_10b1231c8(auStack_48);
  return;
}



/* Entry: 10b13a68c; end: 10b13a6c7;  */

long FUN_10b13a68c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 10b13a6c8; end: 10b13a723;  */

void FUN_10b13a6c8(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b1f71a4(*(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x40),lVar1 + 0x358,
                *(undefined4 *)(lVar1 + 0x310),lVar1 + 0x2d8,2,&uStack_38);
  func_0x000107c27914(&uStack_38);
  return;
}



/* Entry: 10b13a724; end: 10b13a743;  */

void FUN_10b13a724(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b139414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b13a744; end: 10b13a747;  */

void FUN_10b13a744(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b13a748; end: 10b13a773;  */

void FUN_10b13a748(void)

{
  func_0x00010b13adb0();
  FUN_10b13a774();
  func_0x00010b13a798();
  return;
}



/* Entry: 10b13a774; end: 10b13a7cf;  */

void FUN_10b13a774(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010b139f10();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b13a7d0; end: 10b13a84b;  */

void FUN_10b13a7d0(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b13adb0();
  FUN_10b13a774();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined1 *)(unaff_x20 + 8) = 1;
  *(undefined1 *)(unaff_x20 + 9) = 1;
  *(undefined1 *)(unaff_x20 + 10) = 1;
  return;
}



/* Entry: 10b13a84c; end: 10b13a863;  */

void FUN_10b13a84c(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b13a864; end: 10b13ab57;  */

void FUN_10b13a864(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long extraout_x8;
  undefined8 uVar3;
  int extraout_w9;
  int extraout_w9_00;
  undefined1 extraout_w10;
  int iVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_88;
  undefined auStack_70 [24];
  byte bStack_58;
  
  func_0x000105c40888(param_1 + 0x90,param_1 + 0x200);
  func_0x00010b13afd4();
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x00010b13af80();
    func_0x00010b13ac10();
    func_0x00010b13ac8c();
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x210) + 0x2d0) != '\x01') {
      iVar4 = 0;
      bVar2 = true;
      goto LAB_10b13a95c;
    }
    func_0x00010b13ada4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x1c0);
    puVar1 = (undefined8 *)(param_1 + 0x138);
    param_2 = &UNK_10f7302b5;
    func_0x0001078d3f18(puVar1);
    uStack_b8 = *(undefined8 *)(param_1 + 0x1c8);
    puStack_c0 = *(undefined **)(param_1 + 0x1c0);
    uVar3 = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    func_0x00010b13af1c(uVar3);
    if (*(char *)(param_1 + 0x150) == '\x01') {
      uVar3 = *puVar1;
      *(undefined8 *)(extraout_x8 + 0x28) = *(undefined8 *)(param_1 + 0x140);
      *(undefined8 *)(extraout_x8 + 0x20) = uVar3;
      *(undefined8 *)(extraout_x8 + 0x30) = *(undefined8 *)(param_1 + 0x148);
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *puVar1 = 0;
      uStack_88 = 1;
    }
    func_0x00010b13ad24();
    if (extraout_w9 != 0) {
      func_0x00010b13ab8c();
    }
    func_0x00010b13b008();
    func_0x00010b13ac9c();
    func_0x00010b13ac8c();
    func_0x000107c279a4(puVar1);
    func_0x00010b13ae84();
  }
  bVar2 = false;
  iVar4 = 3;
LAB_10b13a95c:
  func_0x00010b13ae40();
  if (bVar2) {
    func_0x00010b13af74();
    func_0x00010b13ae8c();
    func_0x00010b13acf8();
    if (bStack_58 == 1) {
      FUN_10b138190(*(undefined8 *)(param_1 + 0x210));
      func_0x00010b13b014();
      iVar4 = 3;
    }
    else {
      iVar4 = 0;
    }
    func_0x00010b13aeb0();
    if ((bStack_58 & 1) == 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1d8);
      func_0x00010b13ada4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1);
      func_0x00010b13ae20();
      uStack_b8 = *(undefined8 *)(param_1 + 0x1e0);
      puStack_c0 = (undefined *)*puVar1;
      uVar3 = *(undefined8 *)(param_1 + 0x1e8);
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *puVar1 = 0;
      func_0x00010b13af1c(uVar3);
      if (*(char *)(param_1 + 0x170) == '\x01') {
        func_0x00010b13ac50();
        uStack_88 = extraout_w10;
      }
      func_0x00010b13ad24();
      if (extraout_w9_00 != 0) {
        func_0x00010b13ab8c();
      }
      func_0x00010b13b008();
      func_0x00010b13ac9c();
      func_0x00010b13ac8c();
      func_0x00010b13aeec();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
      iVar4 = 3;
    }
  }
  func_0x00010b13ad78();
  bVar2 = iVar4 == 3;
  if (bVar2) {
    func_0x00010b13ae68();
    if (bVar2) {
      puStack_c0 = param_2;
      FUN_10b0fb514(param_1 + 0x10,&puStack_c0);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_70);
      puStack_c0 = auStack_70;
      FUN_10b0fb468(param_1 + 0x10,&puStack_c0);
      __ZNSt13exception_ptrD1Ev(auStack_70);
    }
  }
  func_0x00010b13ae60();
  func_0x00010b13afb0();
  return;
}



/* Entry: 10b13ab58; end: 10b13ab8b;  */

void FUN_10b13ab58(long param_1)

{
  if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
    func_0x00010b13afd4();
    func_0x00010b13ad78();
  }
  func_0x00010b13ae60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b13ab8c; end: 10b13b043;  */

void FUN_10b13ab8c(long param_1)

{
  long in_x9;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(in_x9 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(in_x9 + 0x20) = uVar1;
  *(undefined8 *)(in_x9 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b13b044; end: 10b13b107;  */

long FUN_10b13b044(long param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  lVar2 = param_4[1];
  lVar3 = *param_4;
  *(long *)(lVar1 + 0x28) = param_4[1];
  *(long *)(lVar1 + 0x20) = lVar3;
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  if (lVar2 != 0) {
    do {
      func_0x00010b13b2b0();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_5[1];
  uVar4 = *param_5;
  *(undefined8 *)(param_1 + 0x38) = param_5[1];
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x00010b13b2b0();
    } while (extraout_w10_00 != 0);
  }
  if ((*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) && (*(long *)(lVar1 + 0x20) != 0)) {
    FUN_10b13b108(param_1);
  }
  return param_1;
}



/* Entry: 10b13b108; end: 10b13b203;  */

void FUN_10b13b108(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar5 = (undefined1 *)register0x00000008;
  while( true ) {
    *(long *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar5 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(code **)(puVar5 + -8) = unaff_x30;
    unaff_x29 = puVar5 + -0x10;
    *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = *(undefined8 *)(param_1 + 0x20);
    unaff_x22 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(puVar5 + -0xa8) = unaff_x21;
    *(long *)(puVar5 + -0xa0) = unaff_x22;
    if (unaff_x22 != 0) {
      do {
        func_0x00010b13b2b0();
      } while (extraout_w10 != 0);
    }
    *(undefined8 *)(puVar5 + -0x98) = 0;
    *(undefined8 *)(puVar5 + -0x90) = 0;
    unaff_x20 = puVar5 + -0x98;
    FUN_10b13b234();
    func_0x0001052a6df8(puVar5 + -0x98);
    plVar6 = *(long **)(param_1 + 0x30);
    if (unaff_x22 != 0) {
      do {
        func_0x00010b13b2b0();
      } while (extraout_w10_00 != 0);
    }
    *(undefined8 *)(puVar5 + -0x98) = 0x10b13b278;
    *(undefined ***)(puVar5 + -0x90) = &PTR_DAT_110cbe048;
    *(undefined8 *)(puVar5 + -0x88) = unaff_x21;
    *(long *)(puVar5 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar5 + -0xb8) = 0;
    *(undefined8 *)(puVar5 + -0xb0) = 0;
    (**(code **)(*plVar6 + 0x10))();
    func_0x00010b13b2c0();
    func_0x0001052a6df8(puVar5 + -0xb8);
    unaff_x19 = puVar5 + -0xa8;
    func_0x0001052a6df8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x38)) break;
    ___stack_chk_fail();
    func_0x00010b13b2c0();
    func_0x0001052a6df8(puVar5 + -0xb8);
    func_0x0001052a6df8(puVar5 + -0xa8);
    unaff_x30 = FUN_10b13b204;
    param_1 = unaff_x19;
    __Unwind_Resume();
    piVar1 = (int *)(param_1 + 0x1c);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + 1 != *(int *)(param_1 + 0x18)) ||
       (puVar5 = puVar5 + -0xc0, *(long *)(param_1 + 0x20) == 0)) {
      return;
    }
  }
  return;
}



/* Entry: 10b13b204; end: 10b13b233;  */

void FUN_10b13b204(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    piVar1 = (int *)(param_1 + 0x1c);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + 1 != *(int *)(param_1 + 0x18)) || (*(long *)(param_1 + 0x20) == 0)) {
      return;
    }
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x21 = *(undefined8 *)(param_1 + 0x20);
    unaff_x22 = *(long *)(param_1 + 0x28);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(long *)((long)register0x00000008 + -0xa0) = unaff_x22;
    if (unaff_x22 != 0) {
      do {
        func_0x00010b13b2b0();
      } while (extraout_w10 != 0);
    }
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x98);
    FUN_10b13b234();
    func_0x0001052a6df8((undefined1 *)((long)register0x00000008 + -0x98));
    plVar5 = *(long **)(param_1 + 0x30);
    if (unaff_x22 != 0) {
      do {
        func_0x00010b13b2b0();
      } while (extraout_w10_00 != 0);
    }
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0x10b13b278;
    *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_DAT_110cbe048;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    (**(code **)(*plVar5 + 0x10))();
    func_0x00010b13b2c0();
    func_0x0001052a6df8((undefined1 *)((long)register0x00000008 + -0xb8));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0xa8);
    func_0x0001052a6df8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    func_0x00010b13b2c0();
    func_0x0001052a6df8((undefined1 *)((long)register0x00000008 + -0xb8));
    func_0x0001052a6df8((undefined1 *)((long)register0x00000008 + -0xa8));
    unaff_x30 = FUN_10b13b204;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10b13b234; end: 10b13b277;  */

undefined8 * FUN_10b13b234(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052a6df8(&uStack_30);
  return param_1;
}



/* Entry: 10b13b278; end: 10b13b2cf;  */

void FUN_10b13b278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b13b288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),1);
  return;
}



/* Entry: 10b13b2d0; end: 10b13b353;  */

undefined8 *
FUN_10b13b2d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_110cbe070;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar3;
  param_1[3] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar3;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar1 != lVar2) {
    FUN_10b13b4b8(lVar1,lVar2,LZCOUNT((lVar2 - lVar1) / 0x18) << 1 ^ 0x7e,1);
  }
  return param_1;
}



/* Entry: 10b13b354; end: 10b13b49f;  */

void FUN_10b13b354(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 auStack_338 [10];
  char cStack_2e8;
  undefined1 auStack_2e0 [632];
  char cStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < (int)param_3) {
    while ((lVar1 = *(long *)(param_2 + 0x10), *(long *)(param_2 + 8) != lVar1 &&
           ((ulong)((param_1[1] - *param_1) / 0x50) < (ulong)param_3))) {
      uStack_58 = *(undefined8 *)(lVar1 + -0x10);
      uStack_60 = *(undefined8 *)(lVar1 + -0x18);
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      uStack_50 = *(undefined8 *)(lVar1 + -8);
      uVar2 = *(undefined4 *)(param_2 + 0x30);
      FUN_10b1245a8(auStack_338,*(undefined8 *)(param_2 + 0x20));
      FUN_10b1cf9e8(auStack_2e0,auStack_338[0],&uStack_60,uVar2);
      func_0x00010b1245e8(auStack_338);
      if (cStack_68 == '\x01') {
        FUN_10b13725c(auStack_338,auStack_2e0);
        if (cStack_2e8 == '\x01') {
          FUN_10b136cc8(param_1,auStack_338);
        }
        func_0x00010b1374d8(auStack_338);
      }
      FUN_10b124588(auStack_2e0);
      func_0x00010b121950(&uStack_60);
      FUN_10b124ac8(param_2 + 8,*(long *)(param_2 + 0x10) + -0x18);
    }
  }
  return;
}



/* Entry: 10b13b4a0; end: 10b13b4a3;  */

undefined8 * FUN_10b13b4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe070;
  func_0x00010b1257f8(param_1 + 4);
  FUN_10b124a70(param_1 + 1);
  return param_1;
}



/* Entry: 10b13b4a4; end: 10b13b4b7;  */

void FUN_10b13b4a4(void)

{
  func_0x00010b13bf10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


